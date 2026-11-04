// Type: Map.MapScriptBasicMaterial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptBasicMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBasicMaterial.cs
// --------------------------------

// Map.MapScriptBasicMaterial$$.ctor
// il2cpp: void Map_MapScriptBasicMaterial___ctor (Map_MapScriptBasicMaterial_o* __this, const MethodInfo* method);
// 0x181ed9e40

void Map_MapScriptBasicMaterial___ctor(Map_MapScriptBasicMaterial_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184345120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/None");
    Il2CppMethodInitialized_184345120 = '\x01';
  }
  (__this->fields).Texture = "Misc/None";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Texture,"Misc/None");
  if (Il2CppMethodInitialized_184341f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f36 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x;
  (__this->fields).Tiling.fields.y = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y;
  (__this->fields).Tiling.fields.x = fVar1;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.x;
  (__this->fields).Offset.fields.y = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.y;
  (__this->fields).Offset.fields.x = fVar1;
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,(MethodInfo *)0x0);
  return;
}


