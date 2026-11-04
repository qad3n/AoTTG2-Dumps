// Type: GameManagers.PlayerInfo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PlayerInfo.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerInfo.cs
// --------------------------------

// GameManagers.PlayerInfo$$.ctor
// il2cpp: void GameManagers_PlayerInfo___ctor (GameManagers_PlayerInfo_o* __this, const MethodInfo* method);
// 0x181e73060

void GameManagers_PlayerInfo___ctor(GameManagers_PlayerInfo_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ProfileSettings);
    Il2CppMethodInitialized_184344f15 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ProfileSettings);
  Settings_ProfileSettings___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Profile = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Profile,__this_00);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


