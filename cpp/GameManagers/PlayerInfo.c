// Type: GameManagers.PlayerInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/PlayerInfo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/PlayerInfo.cs  [prior source available (delta unverified)]
// --------------------------------

// GameManagers.PlayerInfo$$.ctor
// il2cpp: void GameManagers_PlayerInfo___ctor (GameManagers_PlayerInfo_o* __this, const MethodInfo* method);
// 0x423ac00

void GameManagers_PlayerInfo___ctor(GameManagers_PlayerInfo_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings_o *__this_00;
  
  if (DAT_05705162 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ProfileSettings);
    DAT_05705162 = '\x01';
  }
  __this_00 = (Settings_ProfileSettings_o *)il2cpp_runtime_glue(TypeInfo_ProfileSettings);
  Settings_ProfileSettings___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Profile = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Profile);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


