// Type: Map.MapObjectCollideMode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapObjectCollideMode.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapLoader.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapObjectCollideMode$$.cctor
// il2cpp: void Map_MapObjectCollideMode___cctor (const MethodInfo* method);
// 0x3dac350

void Map_MapObjectCollideMode___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05702796 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&"Physical");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Region");
    DAT_05702796 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8) = "Physical";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MapObjectCollideMode + 0xb8),"Physical");
  lVar1 = *(long *)(TypeInfo_MapObjectCollideMode + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Region";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_MapObjectCollideMode + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "None";
  il2cpp_runtime_glue(lVar1 + 0x10);
  return;
}


