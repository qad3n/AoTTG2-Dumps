// Type: Map.MapScriptDefaultTiledMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptDefaultTiledMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/Materials/MapScriptDefaultTiledMaterial.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptDefaultTiledMaterial$$.ctor
// il2cpp: void Map_MapScriptDefaultTiledMaterial___ctor (Map_MapScriptDefaultTiledMaterial_o* __this, const MethodInfo* method);
// 0x3db00c0

void Map_MapScriptDefaultTiledMaterial___ctor
               (Map_MapScriptDefaultTiledMaterial_o *__this,MethodInfo *method)

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


