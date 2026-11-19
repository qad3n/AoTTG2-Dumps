// Type: Map.MapObjectCollideMode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapObjectCollideMode.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectCollideMode$$.cctor
// il2cpp: void Map_MapObjectCollideMode___cctor (const MethodInfo* method);
// 0x599ec30

void Map_MapObjectCollideMode___cctor(MethodInfo *method)

{
  Map_MapObjectCollideMode_StaticFields *pMVar1;
  
  if (Il2CppMethodInitialized_07545a76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&"Physical");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_07545a76 = '\x01';
  }
  TypeInfo_Map_MapObjectCollideMode->static_fields->Physical = "Physical";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectCollideMode->static_fields->Physical);
  pMVar1 = TypeInfo_Map_MapObjectCollideMode->static_fields;
  pMVar1->Region = "Region";
  Il2CppCodeGenWriteBarrier(&pMVar1->Region);
  pMVar1 = TypeInfo_Map_MapObjectCollideMode->static_fields;
  pMVar1->None = "None";
  Il2CppCodeGenWriteBarrier(&pMVar1->None);
  return;
}


