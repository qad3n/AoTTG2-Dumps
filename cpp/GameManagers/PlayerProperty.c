// Type: GameManagers.PlayerProperty
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerProperty.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerProperty$$.ctor
// il2cpp: void GameManagers_PlayerProperty___ctor (GameManagers_PlayerProperty_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_PlayerProperty___ctor(GameManagers_PlayerProperty_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerProperty$$.cctor
// il2cpp: void GameManagers_PlayerProperty___cctor (const MethodInfo* method);
// 0x181e730d0

void GameManagers_PlayerProperty___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f16 == '\0') {
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
    Il2CppMethodInitialized_184344f16 = '\x01';
  }
  TypeInfo_GameManagers_PlayerProperty->static_fields->Name = "Name";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"Name");
  TypeInfo_GameManagers_PlayerProperty->static_fields->Guild = "Guild";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,"Guild")
  ;
  TypeInfo_GameManagers_PlayerProperty->static_fields->Status = "Status";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->Status,"Status");
  TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId = "CharacterViewId";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId,"CharacterViewId");
  TypeInfo_GameManagers_PlayerProperty->static_fields->Character = "Character";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->Character,"Character");
  TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash = "CustomMapHash";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash,"CustomMapHash");
  TypeInfo_GameManagers_PlayerProperty->static_fields->CustomLogicHash = "CustomLogicHash";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->CustomLogicHash,"CustomLogicHash");
  TypeInfo_GameManagers_PlayerProperty->static_fields->CustomAddonHash = "CustomAddonHash";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->CustomAddonHash,"CustomAddonHash");
  TypeInfo_GameManagers_PlayerProperty->static_fields->Team = "Team";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"Team");
  TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout = "Loadout";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,"Loadout");
  TypeInfo_GameManagers_PlayerProperty->static_fields->Kills = "Kills";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,"Kills")
  ;
  TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths = "Deaths";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,"Deaths");
  TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage = "HighestDamage";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,"HighestDamage");
  TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage = "TotalDamage";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,"TotalDamage");
  TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint = "SpawnPoint";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,"SpawnPoint");
  TypeInfo_GameManagers_PlayerProperty->static_fields->CameraDistance = "CameraDistance";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->CameraDistance,"CameraDistance");
  TypeInfo_GameManagers_PlayerProperty->static_fields->Ping = "Ping";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_PlayerProperty->static_fields->Ping,"Ping");
  TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID = "SpectateID";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,"SpectateID");
  TypeInfo_GameManagers_PlayerProperty->static_fields->AccountId = "sub";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->AccountId,"sub");
  TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName = "display_name";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName,"display_name");
  TypeInfo_GameManagers_PlayerProperty->static_fields->EmailVerified = "email_verified";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->EmailVerified,"email_verified");
  TypeInfo_GameManagers_PlayerProperty->static_fields->AuthoritativeRoles = "roles";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->AuthoritativeRoles,"roles");
  TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonStatus = "patreon_status";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonStatus,"patreon_status");
  TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked = "patreon_linked";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,"patreon_linked");
  TypeInfo_GameManagers_PlayerProperty->static_fields->TierIds = "tier_ids";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->TierIds,"tier_ids");
  TypeInfo_GameManagers_PlayerProperty->static_fields->Entitlements = "entitlements";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_PlayerProperty->static_fields->Entitlements,"entitlements");
  return;
}


