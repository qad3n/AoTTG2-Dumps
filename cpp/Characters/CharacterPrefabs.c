// Type: Characters.CharacterPrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CharacterPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterPrefabs.cs
// --------------------------------

// Characters.CharacterPrefabs$$.ctor
// il2cpp: void Characters_CharacterPrefabs___ctor (Characters_CharacterPrefabs_o* __this, const MethodInfo* method);
// 0x42aa570

void Characters_CharacterPrefabs___ctor(Characters_CharacterPrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.CharacterPrefabs$$.cctor
// il2cpp: void Characters_CharacterPrefabs___cctor (const MethodInfo* method);
// 0x42aa580

void Characters_CharacterPrefabs___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057add84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPrefabs);
    il2cpp_runtime_helper_023445d0(&"Horse/Prefabs/Horse");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/WallColossal");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/Armored");
    il2cpp_runtime_helper_023445d0(&"Human/Prefabs/HumanPlayer");
    il2cpp_runtime_helper_023445d0(&"Titans/Prefabs/BasicTitan");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/Annie");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/Eren");
    g_data_057add84 = '\x01';
  }
  **(undefined8 **)(TypeInfo_CharacterPrefabs + 0xb8) = "Human/Prefabs/HumanPlayer";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CharacterPrefabs + 0xb8),"Human/Prefabs/HumanPlayer");
  lVar1 = *(long *)(TypeInfo_CharacterPrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Titans/Prefabs/BasicTitan";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CharacterPrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Horse/Prefabs/Horse";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CharacterPrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Shifters/Prefabs/Eren";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CharacterPrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Shifters/Prefabs/Annie";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CharacterPrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Shifters/Prefabs/Armored";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CharacterPrefabs + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "Shifters/Prefabs/WallColossal";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  return;
}


