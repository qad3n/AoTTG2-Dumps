// Type: Spawnables.SpawnablePrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Spawnables/SpawnablePrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnablePrefabs.cs
// --------------------------------

// Spawnables.SpawnablePrefabs$$.ctor
// il2cpp: void Spawnables_SpawnablePrefabs___ctor (Spawnables_SpawnablePrefabs_o* __this, const MethodInfo* method);
// 0x40845a0

void Spawnables_SpawnablePrefabs___ctor(Spawnables_SpawnablePrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Spawnables.SpawnablePrefabs$$.cctor
// il2cpp: void Spawnables_SpawnablePrefabs___cctor (const MethodInfo* method);
// 0x40845b0

void Spawnables_SpawnablePrefabs___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac3c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpawnablePrefabs);
    il2cpp_runtime_helper_023445d0(&"Rock1Spawnable");
    il2cpp_runtime_helper_023445d0(&"SupplySpawnable");
    g_data_057ac3c6 = '\x01';
  }
  **(undefined8 **)(TypeInfo_SpawnablePrefabs + 0xb8) = "SupplySpawnable";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_SpawnablePrefabs + 0xb8),"SupplySpawnable");
  lVar1 = *(long *)(TypeInfo_SpawnablePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Rock1Spawnable";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  return;
}


