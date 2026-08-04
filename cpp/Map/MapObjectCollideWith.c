// Type: Map.MapObjectCollideWith
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObjectCollideWith.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectCollideWith$$.cctor
// il2cpp: void Map_MapObjectCollideWith___cctor (const MethodInfo* method);
// 0x40b1bb0

void Map_MapObjectCollideWith___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac4cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    il2cpp_runtime_helper_023445d0(&"Hitboxes");
    il2cpp_runtime_helper_023445d0(&"Characters");
    il2cpp_runtime_helper_023445d0(&"MapEditor");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Entities");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Projectiles");
    il2cpp_runtime_helper_023445d0(&"Humans");
    il2cpp_runtime_helper_023445d0(&"MapObjects");
    g_data_057ac4cc = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8) = "All";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MapObjectCollideWith + 0xb8),"All");
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "MapObjects";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Characters";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Titans";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Humans";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Projectiles";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Entities";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Hitboxes";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "MapEditor";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  return;
}


