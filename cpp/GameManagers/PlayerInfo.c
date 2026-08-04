// Type: GameManagers.PlayerInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerInfo.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerInfo.cs
// --------------------------------

// GameManagers.PlayerInfo$$.ctor
// il2cpp: void GameManagers_PlayerInfo___ctor (GameManagers_PlayerInfo_o* __this, const MethodInfo* method);
// 0x455dee0

void GameManagers_PlayerInfo___ctor(GameManagers_PlayerInfo_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings_o *__this_00;
  
  if (g_data_057af051 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
    g_data_057af051 = '\x01';
  }
  __this_00 = (Settings_ProfileSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
  Settings_ProfileSettings___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Profile = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Profile);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


