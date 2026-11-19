// Type: Map.MapScriptBasicMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapScriptBasicMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBasicMaterial.cs
// --------------------------------

// Map.MapScriptBasicMaterial$$.ctor
// il2cpp: void Map_MapScriptBasicMaterial___ctor (Map_MapScriptBasicMaterial_o* __this, const MethodInfo* method);
// 0x59a1f40

void Map_MapScriptBasicMaterial___ctor(Map_MapScriptBasicMaterial_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/None");
    Il2CppMethodInitialized_07545ab9 = '\x01';
  }
  method_00 = (MethodInfo *)"Misc/None";
  (__this->fields).Texture = "Misc/None";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Texture);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  (__this->fields).Tiling.fields = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  (__this->fields).Offset.fields =
       *(UnityEngine_Vector2_Fields *)&(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method_00);
  return;
}


