// Type: Map.MapScriptBasicMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptBasicMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/Materials/MapScriptBasicMaterial.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptBasicMaterial$$.ctor
// il2cpp: void Map_MapScriptBasicMaterial___ctor (Map_MapScriptBasicMaterial_o* __this, const MethodInfo* method);
// 0x3d9b790

void Map_MapScriptBasicMaterial___ctor(Map_MapScriptBasicMaterial_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_057027b9 == '\0') {
    il2cpp_init_method_metadata(&"Misc/None");
    DAT_057027b9 = '\x01';
  }
  method_00 = "Misc/None";
  (__this->fields).Texture = (System_String_o *)"Misc/None";
  il2cpp_runtime_glue(&(__this->fields).Texture);
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
  }
  (__this->fields).Tiling.fields =
       *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  (__this->fields).Offset.fields = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector3 + 0xb8);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method_00);
  return;
}


