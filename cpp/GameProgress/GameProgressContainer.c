// Type: GameProgress.GameProgressContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameProgress/GameProgressContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressContainer.cs
// --------------------------------

// GameProgress.GameProgressContainer$$get_FolderPath
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FolderPath (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x591f1d0

System_String_o *
GameProgress_GameProgressContainer__get_FolderPath
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545744 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_07545744 = '\x01';
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    return TypeInfo_Utility_FolderPaths->static_fields->GameProgress;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Utility_FolderPaths)->static_fields + 0x38);
}


// GameProgress.GameProgressContainer$$get_FileName
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FileName (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x591f240

System_String_o *
GameProgress_GameProgressContainer__get_FileName
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545745 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameProgress");
    Il2CppMethodInitialized_07545745 = '\x01';
  }
  return "GameProgress";
}


// GameProgress.GameProgressContainer$$get_Encrypted
// il2cpp: bool GameProgress_GameProgressContainer__get_Encrypted (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x591f270

bool GameProgress_GameProgressContainer__get_Encrypted
               (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  return true;
}


// GameProgress.GameProgressContainer$$Save
// il2cpp: void GameProgress_GameProgressContainer__Save (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x591f280

void GameProgress_GameProgressContainer__Save(GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  GameProgress_QuestContainer_o *__this_00;
  
  __this_00 = (__this->fields).Quest;
  if (__this_00 == (GameProgress_QuestContainer_o *)0x0) {
    ThrowNullReferenceException();
  }
  GameProgress_QuestContainer__CollectRewards(__this_00,method);
  Settings_SaveableSettingsContainer__Save((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.GameProgressContainer$$.ctor
// il2cpp: void GameProgress_GameProgressContainer___ctor (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x591f520

void GameProgress_GameProgressContainer___ctor
               (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  Settings_ListSetting_AchievementItem__o *__this_00;
  MethodInfo *method_01;
  GameProgress_GameStatContainer_o *__this_01;
  
  if (Il2CppMethodInitialized_07545746 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameStatContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestContainer);
    Il2CppMethodInitialized_07545746 = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementContainer);
  if (Il2CppMethodInitialized_07545726 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_AchievementItem);
    Il2CppMethodInitialized_07545726 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)__this_00,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_AchievementItem_ctor);
  method_00->parameters = (Il2CppType **)__this_00;
  Il2CppCodeGenWriteBarrier(&method_00->parameters);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)method_00,(MethodInfo *)0x0);
  (__this->fields).Achievement = (GameProgress_AchievementContainer_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Achievement);
  method_01 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestContainer);
  GameProgress_QuestContainer___ctor((GameProgress_QuestContainer_o *)method_01,method_00);
  (__this->fields).Quest = (GameProgress_QuestContainer_o *)method_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Quest);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_GameStatContainer);
  GameProgress_GameStatContainer___ctor(__this_01,method_01);
  (__this->fields).GameStat = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameStat);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


