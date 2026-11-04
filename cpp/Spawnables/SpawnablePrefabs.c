// Type: Spawnables.SpawnablePrefabs
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SpawnablePrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnablePrefabs.cs
// --------------------------------

// Spawnables.SpawnablePrefabs$$.ctor
// il2cpp: void Spawnables_SpawnablePrefabs___ctor (Spawnables_SpawnablePrefabs_o* __this, const MethodInfo* method);
// 0x18054c890

void
Spawnables_SpawnablePrefabs___ctor(Spawnables_SpawnablePrefabs_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Spawnables.SpawnablePrefabs$$.cctor
// il2cpp: void Spawnables_SpawnablePrefabs___cctor (const MethodInfo* method);
// 0x181dcf260

void Spawnables_SpawnablePrefabs___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock1Spawnable");
    il2cpp_codegen_initialize_runtime_metadata(&"SupplySpawnable");
    Il2CppMethodInitialized_1843449fc = '\x01';
  }
  TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply = "SupplySpawnable";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply,"SupplySpawnable");
  TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1 = "Rock1Spawnable";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1,"Rock1Spawnable")
  ;
  return;
}


