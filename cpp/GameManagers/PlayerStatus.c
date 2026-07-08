// Type: GameManagers.PlayerStatus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/PlayerStatus.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/PlayerProperty.cs  [prior source available (delta unverified)]
// --------------------------------

// GameManagers.PlayerStatus$$.ctor
// il2cpp: void GameManagers_PlayerStatus___ctor (GameManagers_PlayerStatus_o* __this, const MethodInfo* method);
// 0x423b170

void GameManagers_PlayerStatus___ctor(GameManagers_PlayerStatus_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerStatus$$.cctor
// il2cpp: void GameManagers_PlayerStatus___cctor (const MethodInfo* method);
// 0x423b180

void GameManagers_PlayerStatus___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05705164 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    il2cpp_init_method_metadata(&"Dead");
    il2cpp_init_method_metadata(&"Alive");
    il2cpp_init_method_metadata(&"Spectating");
    DAT_05705164 = '\x01';
  }
  **(undefined8 **)(TypeInfo_PlayerStatus + 0xb8) = "Alive";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_PlayerStatus + 0xb8),"Alive");
  lVar1 = *(long *)(TypeInfo_PlayerStatus + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Dead";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_PlayerStatus + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Spectating";
  il2cpp_runtime_glue(lVar1 + 0x10);
  return;
}


