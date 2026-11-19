// Type: Map.MapScriptReflectiveMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapScriptReflectiveMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptReflectiveMaterial.cs
// --------------------------------

// Map.MapScriptReflectiveMaterial$$.ctor
// il2cpp: void Map_MapScriptReflectiveMaterial___ctor (Map_MapScriptReflectiveMaterial_o* __this, const MethodInfo* method);
// 0x59a4cf0

void Map_MapScriptReflectiveMaterial___ctor(Map_MapScriptReflectiveMaterial_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07545aba = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770((Utility_Color255_o *)method_00,(MethodInfo *)0x0);
  (__this->fields).ReflectColor = (Utility_Color255_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReflectColor);
  Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,method_00);
  return;
}


