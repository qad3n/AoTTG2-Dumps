// Type: Map.MapScriptCustomAssets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptCustomAssets.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptCustomAssets.cs
// --------------------------------

// Map.MapScriptCustomAssets$$.ctor
// il2cpp: void Map_MapScriptCustomAssets___ctor (Map_MapScriptCustomAssets_o* __this, const MethodInfo* method);
// 0x59a2e50

void Map_MapScriptCustomAssets___ctor(Map_MapScriptCustomAssets_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07545a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07545a95 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).CustomAssets = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomAssets);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


