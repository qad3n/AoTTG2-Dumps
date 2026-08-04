// Type: Map.MapScriptBasicMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptBasicMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBasicMaterial.cs
// --------------------------------

// Map.MapScriptBasicMaterial$$.ctor
// il2cpp: void Map_MapScriptBasicMaterial___ctor (Map_MapScriptBasicMaterial_o* __this, const MethodInfo* method);
// 0x40b4c30

void Map_MapScriptBasicMaterial___ctor(Map_MapScriptBasicMaterial_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (g_data_057ac4ee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Misc/None");
    g_data_057ac4ee = '\x01';
  }
  method_00 = "Misc/None";
  (__this->fields).Texture = (System_String_o *)"Misc/None";
  il2cpp_runtime_helper_022b4080(&(__this->fields).Texture);
  if (g_data_057a9c86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c86 = '\x01';
  }
  (__this->fields).Tiling.fields = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  (__this->fields).Offset.fields = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector3 + 0xb8);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method_00);
  return;
}


