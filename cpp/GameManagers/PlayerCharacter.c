// Type: GameManagers.PlayerCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameManagers/PlayerCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerCharacter$$.ctor
// il2cpp: void GameManagers_PlayerCharacter___ctor (GameManagers_PlayerCharacter_o* __this, const MethodInfo* method);
// 0x5957ed0

void GameManagers_PlayerCharacter___ctor(GameManagers_PlayerCharacter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerCharacter$$.cctor
// il2cpp: void GameManagers_PlayerCharacter___cctor (const MethodInfo* method);
// 0x5957ee0

void GameManagers_PlayerCharacter___cctor(MethodInfo *method)

{
  GameManagers_PlayerCharacter_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_075458b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_075458b9 = '\x01';
  }
  TypeInfo_GameManagers_PlayerCharacter->static_fields->Human = "Human";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerCharacter->static_fields->Human);
  pGVar1 = TypeInfo_GameManagers_PlayerCharacter->static_fields;
  pGVar1->Titan = "Titan";
  Il2CppCodeGenWriteBarrier(&pGVar1->Titan);
  pGVar1 = TypeInfo_GameManagers_PlayerCharacter->static_fields;
  pGVar1->Shifter = "Shifter";
  Il2CppCodeGenWriteBarrier(&pGVar1->Shifter);
  return;
}


