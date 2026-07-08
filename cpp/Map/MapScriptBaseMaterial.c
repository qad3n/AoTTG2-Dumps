// Type: Map.MapScriptBaseMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptBaseMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/Materials/MapScriptBaseMaterial.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptBaseMaterial$$.ctor
// il2cpp: void Map_MapScriptBaseMaterial___ctor (Map_MapScriptBaseMaterial_o* __this, const MethodInfo* method);
// 0x3daff80

void Map_MapScriptBaseMaterial___ctor(Map_MapScriptBaseMaterial_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (DAT_057027b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&"Default");
    DAT_057027b8 = '\x01';
  }
  (__this->fields).Shader = "Default";
  il2cpp_runtime_glue(&__this->fields);
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Color = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Color);
  Utility_BaseCSVRowItem___ctor((Utility_BaseCSVRowItem_o *)__this,(MethodInfo *)0x0);
  return;
}


