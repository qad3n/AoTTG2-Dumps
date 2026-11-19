// Type: GameManagers.UnsavedPlayerInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/GameManagers/UnsavedPlayerInfo.cs
// Prior real C# source: none
// --------------------------------

// GameManagers.UnsavedPlayerInfo$$CreateProfile
// il2cpp: Settings_ProfileSettings_o* GameManagers_UnsavedPlayerInfo__CreateProfile (GameManagers_UnsavedPlayerInfo_o* __this, const MethodInfo* method);
// 0x59578a0

Settings_ProfileSettings_o *
GameManagers_UnsavedPlayerInfo__CreateProfile(GameManagers_UnsavedPlayerInfo_o *__this,MethodInfo *method)

{
  Settings_UnsavedProfileSettings_o *__this_00;
  
  if (Il2CppMethodInitialized_075458b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_UnsavedProfileSettings);
    Il2CppMethodInitialized_075458b6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UnsavedProfileSettings);
  Settings_UnsavedProfileSettings___ctor(__this_00,(MethodInfo *)0x0);
  return (Settings_ProfileSettings_o *)__this_00;
}


// GameManagers.UnsavedPlayerInfo$$.ctor
// il2cpp: void GameManagers_UnsavedPlayerInfo___ctor (GameManagers_UnsavedPlayerInfo_o* __this, const MethodInfo* method);
// 0x59578e0

void GameManagers_UnsavedPlayerInfo___ctor(GameManagers_UnsavedPlayerInfo_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


