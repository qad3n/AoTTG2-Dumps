// Type: Map.MapObjectCollideWith
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapObjectCollideWith.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapLoader.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapObjectCollideWith$$.cctor
// il2cpp: void Map_MapObjectCollideWith___cctor (const MethodInfo* method);
// 0x3dac410

void Map_MapObjectCollideWith___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05702797 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&"Hitboxes");
    il2cpp_init_method_metadata(&"Characters");
    il2cpp_init_method_metadata(&"MapEditor");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Entities");
    il2cpp_init_method_metadata(&"All");
    il2cpp_init_method_metadata(&"Projectiles");
    il2cpp_init_method_metadata(&"Humans");
    il2cpp_init_method_metadata(&"MapObjects");
    DAT_05702797 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8) = "All";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MapObjectCollideWith + 0xb8),"All");
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "MapObjects";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Characters";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Titans";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Humans";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Projectiles";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Entities";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "Hitboxes";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideWith + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "MapEditor";
  il2cpp_runtime_glue(lVar1 + 0x40);
  return;
}


