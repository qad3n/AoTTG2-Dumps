// Type: Projectiles.ProjectilePrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/ProjectilePrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ProjectilePrefabs.cs
// --------------------------------

// Projectiles.ProjectilePrefabs$$.ctor
// il2cpp: void Projectiles_ProjectilePrefabs___ctor (Projectiles_ProjectilePrefabs_o* __this, const MethodInfo* method);
// 0x4208360

void Projectiles_ProjectilePrefabs___ctor(Projectiles_ProjectilePrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Projectiles.ProjectilePrefabs$$.cctor
// il2cpp: void Projectiles_ProjectilePrefabs___cctor (const MethodInfo* method);
// 0x4208370

void Projectiles_ProjectilePrefabs___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ad8ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Flare");
    il2cpp_runtime_helper_023445d0(&"Rock2");
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"Rock1");
    g_data_057ad8ec = '\x01';
  }
  **(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8) = "Thunderspear";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ProjectilePrefabs + 0xb8),"Thunderspear");
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "CannonBall";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Flare";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "BladeThrow";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "SmokeBomb";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Rock1";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Rock2";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  return;
}


