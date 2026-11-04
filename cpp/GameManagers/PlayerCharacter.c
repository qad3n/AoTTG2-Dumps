// Type: GameManagers.PlayerCharacter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerCharacter$$.ctor
// il2cpp: void GameManagers_PlayerCharacter___ctor (GameManagers_PlayerCharacter_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_PlayerCharacter___ctor(GameManagers_PlayerCharacter_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerCharacter$$.cctor
// il2cpp: void GameManagers_PlayerCharacter___cctor (const MethodInfo* method);
// 0x181e72f70

void GameManagers_PlayerCharacter___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_184344f18 = '\x01';
  }
  TypeInfo_GameManagers_PlayerCharacter->static_fields->Human = "Human";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,"Human");
  TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan = "Titan";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,"Titan");
  TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter = "Shifter";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,"Shifter");
  return;
}


