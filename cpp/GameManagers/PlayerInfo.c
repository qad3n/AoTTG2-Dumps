// Type: GameManagers.PlayerInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/PlayerInfo.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerInfo.cs
// --------------------------------

// GameManagers.PlayerInfo$$Setup
// il2cpp: void GameManagers_PlayerInfo__Setup (GameManagers_PlayerInfo_o* __this, const MethodInfo* method);
// 0x5957820

void GameManagers_PlayerInfo__Setup(GameManagers_PlayerInfo_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  
  pSVar1 = (*(__this->klass->vtable)._14_CreateProfile.methodPtr)
                     (__this,(__this->klass->vtable)._14_CreateProfile.method);
  (__this->fields).Profile = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Profile);
  Settings_BaseSettingsContainer__Setup((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.PlayerInfo$$CreateProfile
// il2cpp: Settings_ProfileSettings_o* GameManagers_PlayerInfo__CreateProfile (GameManagers_PlayerInfo_o* __this, const MethodInfo* method);
// 0x5957850

Settings_ProfileSettings_o *
GameManagers_PlayerInfo__CreateProfile(GameManagers_PlayerInfo_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings_o *__this_00;
  
  if (Il2CppMethodInitialized_075458b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ProfileSettings);
    Il2CppMethodInitialized_075458b5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ProfileSettings);
  Settings_ProfileSettings___ctor((Settings_UnsavedProfileSettings_o *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// GameManagers.PlayerInfo$$.ctor
// il2cpp: void GameManagers_PlayerInfo___ctor (GameManagers_PlayerInfo_o* __this, const MethodInfo* method);
// 0x5957890

void GameManagers_PlayerInfo___ctor(GameManagers_PlayerInfo_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


