// Type: GameManagers.PlayerStatus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerStatus.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerStatus$$.ctor
// il2cpp: void GameManagers_PlayerStatus___ctor (GameManagers_PlayerStatus_o* __this, const MethodInfo* method);
// 0x456fb40

void GameManagers_PlayerStatus___ctor(GameManagers_PlayerStatus_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerStatus$$.cctor
// il2cpp: void GameManagers_PlayerStatus___cctor (const MethodInfo* method);
// 0x456fb50

void GameManagers_PlayerStatus___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057af053 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    il2cpp_runtime_helper_023445d0(&"Dead");
    il2cpp_runtime_helper_023445d0(&"Alive");
    il2cpp_runtime_helper_023445d0(&"Spectating");
    g_data_057af053 = '\x01';
  }
  **(undefined8 **)(TypeInfo_PlayerStatus + 0xb8) = "Alive";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_PlayerStatus + 0xb8),"Alive");
  lVar1 = *(long *)(TypeInfo_PlayerStatus + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Dead";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_PlayerStatus + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Spectating";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  return;
}


