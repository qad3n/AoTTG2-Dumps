// Type: Spawnables.SpawnablePrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SpawnablePrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnablePrefabs.cs
// --------------------------------

// Spawnables.SpawnablePrefabs$$.ctor
// il2cpp: void Spawnables_SpawnablePrefabs___ctor (Spawnables_SpawnablePrefabs_o* __this, const MethodInfo* method);
// 0x586dd90

void Spawnables_SpawnablePrefabs___ctor(Spawnables_SpawnablePrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Spawnables.SpawnablePrefabs$$.cctor
// il2cpp: void Spawnables_SpawnablePrefabs___cctor (const MethodInfo* method);
// 0x586dda0

void Spawnables_SpawnablePrefabs___cctor(MethodInfo *method)

{
  Spawnables_SpawnablePrefabs_StaticFields *pSVar1;
  
  if (Il2CppMethodInitialized_07545158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock1Spawnable");
    il2cpp_codegen_initialize_runtime_metadata(&"SupplySpawnable");
    Il2CppMethodInitialized_07545158 = '\x01';
  }
  TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply = "SupplySpawnable";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Supply);
  pSVar1 = TypeInfo_Spawnables_SpawnablePrefabs->static_fields;
  pSVar1->Rock1 = "Rock1Spawnable";
  Il2CppCodeGenWriteBarrier(&pSVar1->Rock1);
  return;
}


