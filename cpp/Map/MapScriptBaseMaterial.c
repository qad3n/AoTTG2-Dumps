// Type: Map.MapScriptBaseMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapScriptBaseMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBaseMaterial.cs
// --------------------------------

// Map.MapScriptBaseMaterial$$.ctor
// il2cpp: void Map_MapScriptBaseMaterial___ctor (Map_MapScriptBaseMaterial_o* __this, const MethodInfo* method);
// 0x59a4890

void Map_MapScriptBaseMaterial___ctor(Map_MapScriptBaseMaterial_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_07545ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07545ab8 = '\x01';
  }
  (__this->fields).Shader = "Default";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shader);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(__this_00,(MethodInfo *)0x0);
  (__this->fields).Color = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color);
  Utility_BaseCSVRowItem___ctor((Utility_BaseCSVRowItem_o *)__this,(MethodInfo *)0x0);
  return;
}


