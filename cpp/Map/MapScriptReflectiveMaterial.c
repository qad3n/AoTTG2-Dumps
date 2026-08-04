// Type: Map.MapScriptReflectiveMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptReflectiveMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptReflectiveMaterial.cs
// --------------------------------

// Map.MapScriptReflectiveMaterial$$.ctor
// il2cpp: void Map_MapScriptReflectiveMaterial___ctor (Map_MapScriptReflectiveMaterial_o* __this, const MethodInfo* method);
// 0x40b63a0

void Map_MapScriptReflectiveMaterial___ctor(Map_MapScriptReflectiveMaterial_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (g_data_057ac4ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac4ef = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor_4388b90((Utility_Color255_o *)method_00,(MethodInfo *)0x0);
  (__this->fields).ReflectColor = (Utility_Color255_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ReflectColor);
  Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,method_00);
  return;
}


