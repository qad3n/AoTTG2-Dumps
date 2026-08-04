// Type: Map.MapObjectPhysicsMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObjectPhysicsMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectPhysicsMaterial$$.cctor
// il2cpp: void Map_MapObjectPhysicsMaterial___cctor (const MethodInfo* method);
// 0x40b1d80

void Map_MapObjectPhysicsMaterial___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac4cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectPhysicsMaterial);
    il2cpp_runtime_helper_023445d0(&"IceMaterial");
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ac4cd = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectPhysicsMaterial + 0xb8) = "Default";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MapObjectPhysicsMaterial + 0xb8),"Default");
  lVar1 = *(long *)(TypeInfo_MapObjectPhysicsMaterial + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "IceMaterial";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  return;
}


