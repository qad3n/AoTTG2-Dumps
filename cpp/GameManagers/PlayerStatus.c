// Type: GameManagers.PlayerStatus
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerStatus.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerStatus$$.ctor
// il2cpp: void GameManagers_PlayerStatus___ctor (GameManagers_PlayerStatus_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_PlayerStatus___ctor(GameManagers_PlayerStatus_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerStatus$$.cctor
// il2cpp: void GameManagers_PlayerStatus___cctor (const MethodInfo* method);
// 0x181e73800

void GameManagers_PlayerStatus___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&"Dead");
    il2cpp_codegen_initialize_runtime_metadata(&"Alive");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating");
    Il2CppMethodInitialized_184344f17 = '\x01';
  }
  TypeInfo_GameManagers_PlayerStatus->static_fields->Alive = "Alive";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerStatus->static_fields->Alive,"Alive");
  TypeInfo_GameManagers_PlayerStatus->static_fields->Dead = "Dead";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerStatus->static_fields->Dead,"Dead");
  TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating = "Spectating";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,"Spectating");
  return;
}


