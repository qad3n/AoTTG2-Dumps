// Type: Projectiles.ProjectilePrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/ProjectilePrefabs.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/ProjectilePrefabs.cs  [prior source available (delta unverified)]
// --------------------------------

// Projectiles.ProjectilePrefabs$$.ctor
// il2cpp: void Projectiles_ProjectilePrefabs___ctor (Projectiles_ProjectilePrefabs_o* __this, const MethodInfo* method);
// 0x3f19270

void Projectiles_ProjectilePrefabs___ctor
               (Projectiles_ProjectilePrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Projectiles.ProjectilePrefabs$$.cctor
// il2cpp: void Projectiles_ProjectilePrefabs___cctor (const MethodInfo* method);
// 0x3f19280

void Projectiles_ProjectilePrefabs___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05703ccb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Flare");
    il2cpp_init_method_metadata(&"Rock2");
    il2cpp_init_method_metadata(&"CannonBall");
    il2cpp_init_method_metadata(&"SmokeBomb");
    il2cpp_init_method_metadata(&"Thunderspear");
    il2cpp_init_method_metadata(&"Rock1");
    DAT_05703ccb = '\x01';
  }
  **(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8) = "Thunderspear";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ProjectilePrefabs + 0xb8),"Thunderspear");
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "CannonBall";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Flare";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "BladeThrow";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "SmokeBomb";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Rock1";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_ProjectilePrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Rock2";
  il2cpp_runtime_glue(lVar1 + 0x30);
  return;
}


