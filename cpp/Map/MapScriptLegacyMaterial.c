// Type: Map.MapScriptLegacyMaterial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptLegacyMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptLegacyMaterial.cs
// --------------------------------

// Map.MapScriptLegacyMaterial$$.ctor
// il2cpp: void Map_MapScriptLegacyMaterial___ctor (Map_MapScriptLegacyMaterial_o* __this, const MethodInfo* method);
// 0x181ed9f10

void Map_MapScriptLegacyMaterial___ctor(Map_MapScriptLegacyMaterial_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184341f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f36 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y;
  (__this->fields).Tiling.fields.x = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x;
  (__this->fields).Tiling.fields.y = fVar1;
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,(MethodInfo *)0x0);
  return;
}


