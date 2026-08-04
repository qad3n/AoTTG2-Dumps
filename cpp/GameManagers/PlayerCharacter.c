// Type: GameManagers.PlayerCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerCharacter$$.ctor
// il2cpp: void GameManagers_PlayerCharacter___ctor (GameManagers_PlayerCharacter_o* __this, const MethodInfo* method);
// 0x456fc10

void GameManagers_PlayerCharacter___ctor(GameManagers_PlayerCharacter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerCharacter$$.cctor
// il2cpp: void GameManagers_PlayerCharacter___cctor (const MethodInfo* method);
// 0x456fc20

void GameManagers_PlayerCharacter___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057af054 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    g_data_057af054 = '\x01';
  }
  **(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8) = "Human";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_PlayerCharacter + 0xb8),"Human");
  lVar1 = *(long *)(TypeInfo_PlayerCharacter + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Titan";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_PlayerCharacter + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Shifter";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  return;
}


