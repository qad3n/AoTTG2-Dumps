// Type: Map.MapScriptCustomAssets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptCustomAssets.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/MapScriptCustomAssets.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptCustomAssets$$.ctor
// il2cpp: void Map_MapScriptCustomAssets___ctor (Map_MapScriptCustomAssets_o* __this, const MethodInfo* method);
// 0x3dafcc0

void Map_MapScriptCustomAssets___ctor(Map_MapScriptCustomAssets_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057027b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057027b1 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).CustomAssets = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


