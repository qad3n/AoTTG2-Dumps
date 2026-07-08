// Type: Map.MapScriptLegacyMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptLegacyMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/Materials/MapScriptLegacyMaterial.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptLegacyMaterial$$.ctor
// il2cpp: void Map_MapScriptLegacyMaterial___ctor (Map_MapScriptLegacyMaterial_o* __this, const MethodInfo* method);
// 0x3d9f440

void Map_MapScriptLegacyMaterial___ctor(Map_MapScriptLegacyMaterial_o *__this,MethodInfo *method)

{
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
  }
  (__this->fields).Tiling.fields =
       *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method);
  return;
}


