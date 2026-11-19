// Type: Map.MapScriptLegacyMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptLegacyMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptLegacyMaterial.cs
// --------------------------------

// Map.MapScriptLegacyMaterial$$.ctor
// il2cpp: void Map_MapScriptLegacyMaterial___ctor (Map_MapScriptLegacyMaterial_o* __this, const MethodInfo* method);
// 0x59a4d50

void Map_MapScriptLegacyMaterial___ctor(Map_MapScriptLegacyMaterial_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  (__this->fields).Tiling.fields = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method);
  return;
}


