// Type: Map.MapScriptBaseMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptBaseMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBaseMaterial.cs
// --------------------------------

// Map.MapScriptBaseMaterial$$.ctor
// il2cpp: void Map_MapScriptBaseMaterial___ctor (Map_MapScriptBaseMaterial_o* __this, const MethodInfo* method);
// 0x40b5f30

void Map_MapScriptBaseMaterial___ctor(Map_MapScriptBaseMaterial_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (g_data_057ac4ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ac4ed = '\x01';
  }
  (__this->fields).Shader = "Default";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90(__this_00,(MethodInfo *)0x0);
  (__this->fields).Color = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Color);
  Utility_BaseCSVRowItem___ctor((Utility_BaseCSVRowItem_o *)__this,(MethodInfo *)0x0);
  return;
}


