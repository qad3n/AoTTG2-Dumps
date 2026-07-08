// Type: Map.MapObjectPhysicsMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapObjectPhysicsMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapLoader.cs  [prior source available (delta unverified)]
// --------------------------------

// Map.MapObjectPhysicsMaterial$$.cctor
// il2cpp: void Map_MapObjectPhysicsMaterial___cctor (const MethodInfo* method);
// 0x3dac5e0

void Map_MapObjectPhysicsMaterial___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05702798 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectPhysicsMaterial);
    il2cpp_init_method_metadata(&"IceMaterial");
    il2cpp_init_method_metadata(&"Default");
    DAT_05702798 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MapObjectPhysicsMaterial + 0xb8) = "Default";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MapObjectPhysicsMaterial + 0xb8),"Default");
  lVar1 = *(long *)(TypeInfo_MapObjectPhysicsMaterial + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "IceMaterial";
  il2cpp_runtime_glue(lVar1 + 8);
  return;
}


