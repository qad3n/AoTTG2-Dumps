// Type: GameProgress.GameProgressContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameProgressContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressContainer.cs
// --------------------------------

// GameProgress.GameProgressContainer$$get_FolderPath
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FolderPath (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x181e34890

System_String_o *
GameProgress_GameProgressContainer__get_FolderPath
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_184344db0 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  return TypeInfo_Utility_FolderPaths->static_fields->GameProgress;
}


// GameProgress.GameProgressContainer$$get_FileName
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FileName (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x181e34860

System_String_o *
GameProgress_GameProgressContainer__get_FileName
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameProgress");
    Il2CppMethodInitialized_184344db1 = '\x01';
  }
  return "GameProgress";
}


// GameProgress.GameProgressContainer$$get_Encrypted
// il2cpp: bool GameProgress_GameProgressContainer__get_Encrypted (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
GameProgress_GameProgressContainer__get_Encrypted(GameProgress_GameProgressContainer_o* __this, MethodInfo* method)

{
  return true;
}


// GameProgress.GameProgressContainer$$Save
// il2cpp: void GameProgress_GameProgressContainer__Save (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x181e34760

void GameProgress_GameProgressContainer__Save(GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  GameProgress_QuestContainer_o *__this_00;
  
  __this_00 = (__this->fields).Quest;
  if (__this_00 != (GameProgress_QuestContainer_o *)0x0) {
    GameProgress_QuestContainer__CollectRewards(__this_00,(MethodInfo *)0x0);
    Settings_SaveableSettingsContainer__Save((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressContainer$$.ctor
// il2cpp: void GameProgress_GameProgressContainer___ctor (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x181e34790

void GameProgress_GameProgressContainer___ctor
               (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  GameProgress_AchievementContainer_o *__this_00;
  GameProgress_QuestContainer_o *__this_01;
  GameProgress_GameStatContainer_o *__this_02;
  
  if (Il2CppMethodInitialized_184344db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameStatContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestContainer);
    Il2CppMethodInitialized_184344db2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementContainer);
  GameProgress_AchievementContainer___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Achievement = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Achievement,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestContainer);
  GameProgress_QuestContainer___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Quest = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Quest,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_GameStatContainer);
  GameProgress_GameStatContainer___ctor(__this_02,(MethodInfo *)0x0);
  (__this->fields).GameStat = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameStat,__this_02);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


