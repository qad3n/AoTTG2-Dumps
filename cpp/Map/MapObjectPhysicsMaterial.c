// Type: Map.MapObjectPhysicsMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObjectPhysicsMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectPhysicsMaterial$$.cctor
// il2cpp: void Map_MapObjectPhysicsMaterial___cctor (const MethodInfo* method);
// 0x599eec0

void Map_MapObjectPhysicsMaterial___cctor(MethodInfo *method)

{
  Map_MapObjectPhysicsMaterial_StaticFields *pMVar1;
  
  if (Il2CppMethodInitialized_07545a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectPhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&"IceMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07545a78 = '\x01';
  }
  TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Default = "Default";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Default);
  pMVar1 = TypeInfo_Map_MapObjectPhysicsMaterial->static_fields;
  pMVar1->Ice = "IceMaterial";
  Il2CppCodeGenWriteBarrier(&pMVar1->Ice);
  return;
}


