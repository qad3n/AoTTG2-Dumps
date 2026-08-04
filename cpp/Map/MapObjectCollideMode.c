// Type: Map.MapObjectCollideMode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObjectCollideMode.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectCollideMode$$.cctor
// il2cpp: void Map_MapObjectCollideMode___cctor (const MethodInfo* method);
// 0x40b1af0

void Map_MapObjectCollideMode___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac4cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&"Physical");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Region");
    g_data_057ac4cb = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8) = "Physical";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MapObjectCollideMode + 0xb8),"Physical");
  lVar1 = *(long *)(TypeInfo_MapObjectCollideMode + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Region";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideMode + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "None";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  return;
}


