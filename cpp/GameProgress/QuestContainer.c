// Type: GameProgress.QuestContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestContainer.cs
// --------------------------------

// GameProgress.QuestContainer$$CollectRewards
// il2cpp: void GameProgress_QuestContainer__CollectRewards (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x453d180

void GameProgress_QuestContainer__CollectRewards(GameProgress_QuestContainer_o *__this,MethodInfo *method)

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
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  GameProgress_QuestItem_o *__this_06;
  GameProgress_QuestItem_o *__this_07;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
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
  __this_06 = (GameProgress_QuestItem_o *)0x0;
  pSVar1 = (__this->fields).DailyQuestItems;
  if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar2,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar9 = (Il2CppType *)local_48._8_8_;
    __this_06 = local_38;
    while (__this_00.fields._8_8_ = pIVar9,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
          __this_00.fields._current = (Il2CppObject *)__this_06, pMVar6 = MethodInfo_Boolean_MoveNext,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar4 != '\0') {
      if (__this_06 == (GameProgress_QuestItem_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0453d2f7;
      }
      GameProgress_QuestItem__CollectReward(__this_06,pMVar6);
    }
    __this_01.fields._8_8_ = pIVar9;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_01.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    pSVar1 = (__this->fields).WeeklyQuestItems;
    if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar2,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar9 = (Il2CppType *)local_48._8_8_;
      __this_07 = local_38;
      while( true ) {
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_02.fields._current = (Il2CppObject *)__this_07;
        pMVar6 = MethodInfo_Boolean_MoveNext;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar4 == '\0') {
          __this_03.fields._8_8_ = pIVar9;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
          __this_03.fields._current = (Il2CppObject *)__this_07;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          return;
        }
        __this_06 = (GameProgress_QuestItem_o *)0x0;
        if (__this_07 == (GameProgress_QuestItem_o *)0x0) break;
        GameProgress_QuestItem__CollectReward(__this_07,pMVar6);
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
    __this_04.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_05.fields._8_8_ = pIVar9;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_05.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// GameProgress.QuestContainer$$.ctor
// il2cpp: void GameProgress_QuestContainer___ctor (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x453d540

void GameProgress_QuestContainer___ctor(GameProgress_QuestContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  
  if (g_data_057aef2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_QuestItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_QuestItem);
    g_data_057aef2c = '\x01';
  }
  pSVar1 = (Settings_ListSetting_QuestItem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  (__this->fields).DailyQuestItems = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).DailyQuestItems,pSVar1);
  pSVar1 = (Settings_ListSetting_QuestItem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  (__this->fields).WeeklyQuestItems = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeeklyQuestItems);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


