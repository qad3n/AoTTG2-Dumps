// Type: GameProgress.GameProgressContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameProgressContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressContainer.cs
// --------------------------------

// GameProgress.GameProgressContainer$$get_FolderPath
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FolderPath (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x453d0a0

System_String_o *
GameProgress_GameProgressContainer__get_FolderPath
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aef0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    g_data_057aef0e = '\x01';
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x40);
}


// GameProgress.GameProgressContainer$$get_FileName
// il2cpp: System_String_o* GameProgress_GameProgressContainer__get_FileName (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x453d110

System_String_o *
GameProgress_GameProgressContainer__get_FileName
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  if (g_data_057aef0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"GameProgress");
    g_data_057aef0f = '\x01';
  }
  return "GameProgress";
}


// GameProgress.GameProgressContainer$$get_Encrypted
// il2cpp: bool GameProgress_GameProgressContainer__get_Encrypted (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x453d140

bool_conflict
GameProgress_GameProgressContainer__get_Encrypted
          (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// GameProgress.GameProgressContainer$$Save
// il2cpp: void GameProgress_GameProgressContainer__Save (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x453d150

void GameProgress_GameProgressContainer__Save(GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *pMVar6;
  GameProgress_QuestContainer_o *__this_06;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  GameProgress_QuestItem_o *__this_07;
  GameProgress_QuestItem_o *__this_08;
  undefined1 auStack_50 [16];
  GameProgress_QuestItem_o *pGStack_40;
  Il2CppRGCTXData *pIStack_38;
  
  __this_06 = (__this->fields).Quest;
  if (__this_06 != (GameProgress_QuestContainer_o *)0x0) {
    GameProgress_QuestContainer__CollectRewards(__this_06,method);
    Settings_SaveableSettingsContainer__Save((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_38 = (Il2CppRGCTXData *)__this;
  if (g_data_057aef2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    g_data_057aef2b = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  __this_07 = (GameProgress_QuestItem_o *)0x0;
  pSVar1 = (__this_06->fields).DailyQuestItems;
  if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,pSVar2,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_50._0_8_;
    pIVar9 = (Il2CppType *)auStack_50._8_8_;
    __this_07 = pGStack_40;
    while (__this_00.fields._8_8_ = pIVar9,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
          __this_00.fields._current = (Il2CppObject *)__this_07, pMVar6 = MethodInfo_Boolean_MoveNext,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90), (char)bVar4 != '\0') {
      if (__this_07 == (GameProgress_QuestItem_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0453d2f7;
      }
      GameProgress_QuestItem__CollectReward(__this_07,pMVar6);
    }
    __this_01.fields._8_8_ = pIVar9;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_01.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    pSVar1 = (__this_06->fields).WeeklyQuestItems;
    if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,pSVar2,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_50._0_8_;
      pIVar9 = (Il2CppType *)auStack_50._8_8_;
      __this_08 = pGStack_40;
      while( true ) {
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_02.fields._current = (Il2CppObject *)__this_08;
        pMVar6 = MethodInfo_Boolean_MoveNext;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90);
        if ((char)bVar4 == '\0') {
          __this_03.fields._8_8_ = pIVar9;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
          __this_03.fields._current = (Il2CppObject *)__this_08;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
          return;
        }
        __this_07 = (GameProgress_QuestItem_o *)0x0;
        if (__this_08 == (GameProgress_QuestItem_o *)0x0) break;
        GameProgress_QuestItem__CollectReward(__this_08,pMVar6);
      }
label_0453d2f7:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar9;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_04.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_05.fields._8_8_ = pIVar9;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_05.fields._current = (Il2CppObject *)__this_07;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar7._0_8_);
}


// GameProgress.GameProgressContainer$$.ctor
// il2cpp: void GameProgress_GameProgressContainer___ctor (GameProgress_GameProgressContainer_o* __this, const MethodInfo* method);
// 0x453d410

void GameProgress_GameProgressContainer___ctor
               (GameProgress_GameProgressContainer_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  Il2CppClass *__this_00;
  MethodInfo *method_01;
  GameProgress_GameStatContainer_o *__this_01;
  
  if (g_data_057aef10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AchievementContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameStatContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestContainer);
    g_data_057aef10 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AchievementContainer);
  if (g_data_057aeef6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_AchievementItem);
    g_data_057aeef6 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_00,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  method_00->klass = __this_00;
  il2cpp_runtime_helper_022b4080(&method_00->klass);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)method_00,(MethodInfo *)0x0);
  (__this->fields).Achievement = (GameProgress_AchievementContainer_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Achievement);
  method_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_QuestContainer);
  GameProgress_QuestContainer___ctor((GameProgress_QuestContainer_o *)method_01,method_00);
  (__this->fields).Quest = (GameProgress_QuestContainer_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Quest);
  __this_01 = (GameProgress_GameStatContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameStatContainer);
  GameProgress_GameStatContainer___ctor(__this_01,method_01);
  (__this->fields).GameStat = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GameStat);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


