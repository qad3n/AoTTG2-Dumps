// Type: Map.MapScriptReflectiveMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptReflectiveMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/Materials/MapScriptReflectiveMaterial.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapScriptReflectiveMaterial$$.ctor
// il2cpp: void Map_MapScriptReflectiveMaterial___ctor (Map_MapScriptReflectiveMaterial_o* __this, const MethodInfo* method);
// 0x3d9f3e0

void Map_MapScriptReflectiveMaterial___ctor
               (Map_MapScriptReflectiveMaterial_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_057027ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057027ba = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor((Utility_Color255_o *)method_00,(MethodInfo *)0x0);
  (__this->fields).ReflectColor = (Utility_Color255_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).ReflectColor);
  Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,method_00);
  return;
}


