// Type: GameManagers.PlayerProperty
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerProperty.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerProperty$$.ctor
// il2cpp: void GameManagers_PlayerProperty___ctor (GameManagers_PlayerProperty_o* __this, const MethodInfo* method);
// 0x59578f0

void GameManagers_PlayerProperty___ctor(GameManagers_PlayerProperty_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerProperty$$.cctor
// il2cpp: void GameManagers_PlayerProperty___cctor (const MethodInfo* method);
// 0x5957900

void GameManagers_PlayerProperty___cctor(MethodInfo *method)

{
  GameManagers_PlayerProperty_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_075458b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"tier_ids");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateID");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterViewId");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"patreon_status");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"entitlements");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomLogicHash");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"display_name");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"patreon_linked");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"sub");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAddonHash");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomMapHash");
    il2cpp_codegen_initialize_runtime_metadata(&"email_verified");
    il2cpp_codegen_initialize_runtime_metadata(&"roles");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_075458b7 = '\x01';
  }
  TypeInfo_GameManagers_PlayerProperty->static_fields->Name = "Name";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerProperty->static_fields->Name);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Guild = "Guild";
  Il2CppCodeGenWriteBarrier(&pGVar1->Guild);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Status = "Status";
  Il2CppCodeGenWriteBarrier(&pGVar1->Status);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->CharacterViewId = "CharacterViewId";
  Il2CppCodeGenWriteBarrier(&pGVar1->CharacterViewId);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Character = "Character";
  Il2CppCodeGenWriteBarrier(&pGVar1->Character);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->CustomMapHash = "CustomMapHash";
  Il2CppCodeGenWriteBarrier(&pGVar1->CustomMapHash);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->CustomLogicHash = "CustomLogicHash";
  Il2CppCodeGenWriteBarrier(&pGVar1->CustomLogicHash);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->CustomAddonHash = "CustomAddonHash";
  Il2CppCodeGenWriteBarrier(&pGVar1->CustomAddonHash);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Team = "Team";
  Il2CppCodeGenWriteBarrier(&pGVar1->Team);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Loadout = "Loadout";
  Il2CppCodeGenWriteBarrier(&pGVar1->Loadout);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Kills = "Kills";
  Il2CppCodeGenWriteBarrier(&pGVar1->Kills);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Deaths = "Deaths";
  Il2CppCodeGenWriteBarrier(&pGVar1->Deaths);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->HighestDamage = "HighestDamage";
  Il2CppCodeGenWriteBarrier(&pGVar1->HighestDamage);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->TotalDamage = "TotalDamage";
  Il2CppCodeGenWriteBarrier(&pGVar1->TotalDamage);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->SpawnPoint = "SpawnPoint";
  Il2CppCodeGenWriteBarrier(&pGVar1->SpawnPoint);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->CameraDistance = "CameraDistance";
  Il2CppCodeGenWriteBarrier(&pGVar1->CameraDistance);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Ping = "Ping";
  Il2CppCodeGenWriteBarrier(&pGVar1->Ping);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->SpectateID = "SpectateID";
  Il2CppCodeGenWriteBarrier(&pGVar1->SpectateID);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->AccountId = "sub";
  Il2CppCodeGenWriteBarrier(&pGVar1->AccountId);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->DisplayName = "display_name";
  Il2CppCodeGenWriteBarrier(&pGVar1->DisplayName);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->EmailVerified = "email_verified";
  Il2CppCodeGenWriteBarrier(&pGVar1->EmailVerified);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->AuthoritativeRoles = "roles";
  Il2CppCodeGenWriteBarrier(&pGVar1->AuthoritativeRoles);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->PatreonStatus = "patreon_status";
  Il2CppCodeGenWriteBarrier(&pGVar1->PatreonStatus);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->PatreonLinked = "patreon_linked";
  Il2CppCodeGenWriteBarrier(&pGVar1->PatreonLinked);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->TierIds = "tier_ids";
  Il2CppCodeGenWriteBarrier(&pGVar1->TierIds);
  pGVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields;
  pGVar1->Entitlements = "entitlements";
  Il2CppCodeGenWriteBarrier(&pGVar1->Entitlements);
  return;
}


