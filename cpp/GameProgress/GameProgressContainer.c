// Type: GameProgress.GameProgressContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/GameProgressContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/GameProgressContainer.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.GameProgressContainer$$get_FolderPath
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FolderPath (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x420aa50

System_String_o *
GameProgress_GameProgressContainer__get_FolderPath
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05705033 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    DAT_05705033 = '\x01';
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x40);
}


// GameProgress.GameProgressContainer$$get_FileName
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FileName (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x420aac0

System_String_o *
GameProgress_GameProgressContainer__get_FileName
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  if (DAT_05705034 == '\0') {
    il2cpp_init_method_metadata(&"GameProgress");
    DAT_05705034 = '\x01';
  }
  return "GameProgress";
}


// GameProgress.GameProgressContainer$$get_Encrypted
// il2cpp: bool GameProgress_GameProgressContainer__get_Encrypted (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x420aaf0

bool_conflict
GameProgress_GameProgressContainer__get_Encrypted
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// GameProgress.GameProgressContainer$$Save
// il2cpp: void GameProgress_GameProgressContainer__Save (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x420ab00

void GameProgress_GameProgressContainer__Save
               (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  GameProgress_QuestContainer_o *__this_00;
  
  __this_00 = (__this->fields).Quest;
  if (__this_00 != (GameProgress_QuestContainer_o *)0x0) {
    GameProgress_QuestContainer__CollectRewards(__this_00,method);
    Settings_SaveableSettingsContainer__Save
              ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressContainer$$.ctor
// il2cpp: void GameProgress_GameProgressContainer___ctor (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x420adc0

void GameProgress_GameProgressContainer___ctor
               (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  Il2CppClass *__this_00;
  MethodInfo *method_01;
  GameProgress_GameStatContainer_o *__this_01;
  
  if (DAT_05705035 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AchievementContainer);
    il2cpp_init_method_metadata(&TypeInfo_GameStatContainer);
    il2cpp_init_method_metadata(&TypeInfo_QuestContainer);
    DAT_05705035 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_AchievementContainer);
  if (DAT_0570501b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_AchievementItem);
    DAT_0570501b = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)__this_00,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  method_00->klass = __this_00;
  il2cpp_runtime_glue(&method_00->klass);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)method_00,(MethodInfo *)0x0);
  (__this->fields).Achievement = (GameProgress_AchievementContainer_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).Achievement);
  method_01 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_QuestContainer);
  GameProgress_QuestContainer___ctor((GameProgress_QuestContainer_o *)method_01,method_00);
  (__this->fields).Quest = (GameProgress_QuestContainer_o *)method_01;
  il2cpp_runtime_glue(&(__this->fields).Quest);
  __this_01 = (GameProgress_GameStatContainer_o *)il2cpp_runtime_glue(TypeInfo_GameStatContainer);
  GameProgress_GameStatContainer___ctor(__this_01,method_01);
  (__this->fields).GameStat = __this_01;
  il2cpp_runtime_glue(&(__this->fields).GameStat);
  Settings_SaveableSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


