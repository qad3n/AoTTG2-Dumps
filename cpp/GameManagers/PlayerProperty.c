// Type: GameManagers.PlayerProperty
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/PlayerProperty.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.PlayerProperty$$.ctor
// il2cpp: void GameManagers_PlayerProperty___ctor (GameManagers_PlayerProperty_o* __this, const MethodInfo* method);
// 0x456f630

void GameManagers_PlayerProperty___ctor(GameManagers_PlayerProperty_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerProperty$$.cctor
// il2cpp: void GameManagers_PlayerProperty___cctor (const MethodInfo* method);
// 0x456f640

void GameManagers_PlayerProperty___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057af052 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"tier_ids");
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"SpectateID");
    il2cpp_runtime_helper_023445d0(&"CharacterViewId");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"patreon_status");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Loadout");
    il2cpp_runtime_helper_023445d0(&"entitlements");
    il2cpp_runtime_helper_023445d0(&"CameraDistance");
    il2cpp_runtime_helper_023445d0(&"CustomLogicHash");
    il2cpp_runtime_helper_023445d0(&"SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"display_name");
    il2cpp_runtime_helper_023445d0(&"Ping");
    il2cpp_runtime_helper_023445d0(&"patreon_linked");
    il2cpp_runtime_helper_023445d0(&"Status");
    il2cpp_runtime_helper_023445d0(&"sub");
    il2cpp_runtime_helper_023445d0(&"CustomAddonHash");
    il2cpp_runtime_helper_023445d0(&"CustomMapHash");
    il2cpp_runtime_helper_023445d0(&"email_verified");
    il2cpp_runtime_helper_023445d0(&"roles");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057af052 = '\x01';
  }
  **(undefined8 **)(TypeInfo_PlayerProperty + 0xb8) = "Name";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_PlayerProperty + 0xb8),"Name");
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "Guild";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "Status";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "CharacterViewId";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Character";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "CustomMapHash";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "CustomLogicHash";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "CustomAddonHash";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "Team";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "Loadout";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "Kills";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "Deaths";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "HighestDamage";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "TotalDamage";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x70) = "SpawnPoint";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x78) = "CameraDistance";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x80) = "Ping";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x88) = "SpectateID";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x90) = "sub";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x90);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0x98) = "display_name";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x98);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0xa0) = "email_verified";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa0);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0xa8) = "roles";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa8);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0xb0) = "patreon_status";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xb0);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0xb8) = "patreon_linked";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xb8);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 0xc0) = "tier_ids";
  il2cpp_runtime_helper_022b4080(lVar1 + 0xc0);
  lVar1 = *(long *)(TypeInfo_PlayerProperty + 0xb8);
  *(undefined8 *)(lVar1 + 200) = "entitlements";
  il2cpp_runtime_helper_022b4080(lVar1 + 200);
  return;
}


