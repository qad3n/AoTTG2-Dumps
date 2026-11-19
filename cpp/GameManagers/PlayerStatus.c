// Type: GameManagers.PlayerStatus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameManagers/PlayerStatus.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerStatus$$.ctor
// il2cpp: void GameManagers_PlayerStatus___ctor (GameManagers_PlayerStatus_o* __this, const MethodInfo* method);
// 0x5957e00

void GameManagers_PlayerStatus___ctor(GameManagers_PlayerStatus_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerStatus$$.cctor
// il2cpp: void GameManagers_PlayerStatus___cctor (const MethodInfo* method);
// 0x5957e10

void GameManagers_PlayerStatus___cctor(MethodInfo *method)

{
  GameManagers_PlayerStatus_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_075458b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&"Dead");
    il2cpp_codegen_initialize_runtime_metadata(&"Alive");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating");
    Il2CppMethodInitialized_075458b8 = '\x01';
  }
  TypeInfo_GameManagers_PlayerStatus->static_fields->Alive = "Alive";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerStatus->static_fields->Alive);
  pGVar1 = TypeInfo_GameManagers_PlayerStatus->static_fields;
  pGVar1->Dead = "Dead";
  Il2CppCodeGenWriteBarrier(&pGVar1->Dead);
  pGVar1 = TypeInfo_GameManagers_PlayerStatus->static_fields;
  pGVar1->Spectating = "Spectating";
  Il2CppCodeGenWriteBarrier(&pGVar1->Spectating);
  return;
}


