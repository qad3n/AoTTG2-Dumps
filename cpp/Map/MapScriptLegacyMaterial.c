// Type: Map.MapScriptLegacyMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptLegacyMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptLegacyMaterial.cs
// --------------------------------

// Map.MapScriptLegacyMaterial$$.ctor
// il2cpp: void Map_MapScriptLegacyMaterial___ctor (Map_MapScriptLegacyMaterial_o* __this, const MethodInfo* method);
// 0x40b6400

void Map_MapScriptLegacyMaterial___ctor(Map_MapScriptLegacyMaterial_o *__this,MethodInfo *method)

{
  if (g_data_057a9c86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c86 = '\x01';
  }
  (__this->fields).Tiling.fields = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method);
  return;
}


