// Type: Map.MapScriptReflectiveMaterial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptReflectiveMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptReflectiveMaterial.cs
// --------------------------------

// Map.MapScriptReflectiveMaterial$$.ctor
// il2cpp: void Map_MapScriptReflectiveMaterial___ctor (Map_MapScriptReflectiveMaterial_o* __this, const MethodInfo* method);
// 0x181eda2f0

void Map_MapScriptReflectiveMaterial___ctor(Map_MapScriptReflectiveMaterial_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_184345121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184345121 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(__this_00,(MethodInfo *)0x0);
  (__this->fields).ReflectColor = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReflectColor,__this_00);
  Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,(MethodInfo *)0x0);
  return;
}


