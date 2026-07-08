// Type: GameProgress.QuestContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/QuestContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/QuestContainer.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.QuestContainer$$CollectRewards
// il2cpp: void GameProgress_QuestContainer__CollectRewards (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x420ab30

void GameProgress_QuestContainer__CollectRewards
               (GameProgress_QuestContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  GameProgress_QuestItem_o *pGVar6;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
  if (DAT_05705050 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Value);
    DAT_05705050 = '\x01';
  }
  pSVar1 = (__this->fields).DailyQuestItems;
  if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar2,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar5 = (Il2CppType *)local_48._8_8_;
    pGVar6 = local_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar5;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_00.fields._current = (Il2CppObject *)pGVar6;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') break;
      if (pGVar6 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      GameProgress_QuestItem__CollectReward(pGVar6,(MethodInfo *)0x0);
    }
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
    __this_01.fields._current = (Il2CppObject *)pGVar6;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    pSVar1 = (__this->fields).WeeklyQuestItems;
    if ((pSVar1 != (Settings_ListSetting_QuestItem__o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar2,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
      pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar5 = (Il2CppType *)local_48._8_8_;
      pGVar6 = local_38;
      while( true ) {
        __this_02.fields._8_8_ = pIVar5;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
        __this_02.fields._current = (Il2CppObject *)pGVar6;
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar3 == '\0') {
          __this_03.fields._8_8_ = pIVar5;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
          __this_03.fields._current = (Il2CppObject *)pGVar6;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          return;
        }
        if (pGVar6 == (GameProgress_QuestItem_o *)0x0) break;
        GameProgress_QuestItem__CollectReward(pGVar6,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestContainer$$.ctor
// il2cpp: void GameProgress_QuestContainer___ctor (GameProgress_QuestContainer_o* __this, const MethodInfo* method);
// 0x420aef0

void GameProgress_QuestContainer___ctor(GameProgress_QuestContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_QuestItem__o *pSVar1;
  
  if (DAT_05705051 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_GameProgress_QuestItem);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_QuestItem);
    DAT_05705051 = '\x01';
  }
  pSVar1 = (Settings_ListSetting_QuestItem__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  (__this->fields).DailyQuestItems = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).DailyQuestItems,pSVar1);
  pSVar1 = (Settings_ListSetting_QuestItem__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  (__this->fields).WeeklyQuestItems = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).WeeklyQuestItems);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


