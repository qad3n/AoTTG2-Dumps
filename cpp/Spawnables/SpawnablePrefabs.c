// Type: Spawnables.SpawnablePrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Spawnables/SpawnablePrefabs.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Spawnables/SpawnablePrefabs.cs  [prior source available (delta unverified)]
// --------------------------------

// Spawnables.SpawnablePrefabs$$.ctor
// il2cpp: void Spawnables_SpawnablePrefabs___ctor (Spawnables_SpawnablePrefabs_o* __this, const MethodInfo* method);
// 0x3d8ec50

void Spawnables_SpawnablePrefabs___ctor(Spawnables_SpawnablePrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Spawnables.SpawnablePrefabs$$.cctor
// il2cpp: void Spawnables_SpawnablePrefabs___cctor (const MethodInfo* method);
// 0x3d8ec60

void Spawnables_SpawnablePrefabs___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05702716 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnablePrefabs);
    il2cpp_init_method_metadata(&"Rock1Spawnable");
    il2cpp_init_method_metadata(&"SupplySpawnable");
    DAT_05702716 = '\x01';
  }
  **(undefined8 **)(TypeInfo_SpawnablePrefabs + 0xb8) = "SupplySpawnable";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SpawnablePrefabs + 0xb8),"SupplySpawnable");
  lVar1 = *(long *)(TypeInfo_SpawnablePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Rock1Spawnable";
  il2cpp_runtime_glue(lVar1 + 8);
  return;
}


