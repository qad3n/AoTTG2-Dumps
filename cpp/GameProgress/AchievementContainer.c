// Type: GameProgress.AchievementContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/AchievementContainer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/AchievementContainer.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.AchievementContainer$$GetAchievementCount
// il2cpp: GameProgress_AchievementCount_o* GameProgress_AchievementContainer__GetAchievementCount (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x41fbc20

GameProgress_AchievementCount_o *
GameProgress_AchievementContainer__GetAchievementCount
          (GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ListSetting_AchievementItem__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  GameProgress_AchievementCount_o *__this_04;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  GameProgress_QuestItem_o *__this_05;
  GameProgress_QuestItem_o *pGVar6;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
  if (DAT_0570501a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AchievementCount);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AchievementItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_AchievementItem__get_Value);
    il2cpp_init_method_metadata(&"Silver");
    il2cpp_init_method_metadata(&"Bronze");
    il2cpp_init_method_metadata(&"Gold");
    DAT_0570501a = '\x01';
  }
  __this_04 = (GameProgress_AchievementCount_o *)il2cpp_runtime_glue(TypeInfo_AchievementCount);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).AchievementItems;
  if ((pSVar2 != (Settings_ListSetting_AchievementItem__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
    pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar5 = (Il2CppType *)local_48._8_8_;
    __this_05 = local_38;
    if (__this_04 == (GameProgress_AchievementCount_o *)0x0) {
      while (__this_02.fields._8_8_ = pIVar5,
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar4,
            __this_02.fields._current = (Il2CppObject *)__this_05,
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar3 != '\0') {
        if (__this_05 == (GameProgress_QuestItem_o *)0x0) goto LAB_041fbf50;
        if ((Il2CppClass *)__this_05[1].klass == (Il2CppClass *)0x0) goto LAB_041fbf55;
        pGVar6 = __this_05;
        bVar3 = System_String__op_Equality
                          ((System_String_o *)(((Il2CppClass *)__this_05[1].klass)->_1).namespaze,
                           "Bronze",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((Il2CppClass *)__this_05[1].klass == (Il2CppClass *)0x0) goto LAB_041fbf5a;
        bVar3 = System_String__op_Equality
                          ((System_String_o *)(((Il2CppClass *)__this_05[1].klass)->_1).namespaze,
                           "Silver",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((Il2CppClass *)__this_05[1].klass == (Il2CppClass *)0x0) goto LAB_041fbf5f;
        bVar3 = System_String__op_Equality
                          ((System_String_o *)(((Il2CppClass *)__this_05[1].klass)->_1).namespaze,
                           "Gold",(MethodInfo *)0x0);
        __this_05 = pGVar6;
        if ((char)bVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this_05 = local_38, __this_01.fields._8_8_ = pIVar5,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar4,
            __this_01.fields._current = (Il2CppObject *)__this_05,
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar3 != '\0') {
        if (__this_05 == (GameProgress_QuestItem_o *)0x0) {
LAB_041fbf50:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (__this_05[1].klass == (GameProgress_QuestItem_c *)0x0) {
LAB_041fbf55:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pGVar6 = __this_05;
        bVar3 = System_String__op_Equality
                          ((System_String_o *)((__this_05[1].klass)->_1).namespaze,"Bronze",
                           (MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (__this_05[1].klass == (GameProgress_QuestItem_c *)0x0) {
LAB_041fbf5a:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar3 = System_String__op_Equality
                            ((System_String_o *)((__this_05[1].klass)->_1).namespaze,"Silver",
                             (MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            if (__this_05[1].klass == (GameProgress_QuestItem_c *)0x0) {
LAB_041fbf5f:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar3 = System_String__op_Equality
                              ((System_String_o *)((__this_05[1].klass)->_1).namespaze,"Gold",
                               (MethodInfo *)0x0);
            local_38 = pGVar6;
            if ((char)bVar3 != '\0') {
              piVar1 = &(__this_04->fields).TotalGold;
              *piVar1 = *piVar1 + 1;
              bVar3 = GameProgress_QuestItem__Finished(__this_05,(MethodInfo *)0x0);
              local_38 = pGVar6;
              if ((char)bVar3 != '\0') {
                piVar1 = &(__this_04->fields).FinishedGold;
                *piVar1 = *piVar1 + 1;
              }
            }
          }
          else {
            piVar1 = &(__this_04->fields).TotalSilver;
            *piVar1 = *piVar1 + 1;
            bVar3 = GameProgress_QuestItem__Finished(__this_05,(MethodInfo *)0x0);
            local_38 = pGVar6;
            if ((char)bVar3 != '\0') {
              piVar1 = &(__this_04->fields).FinishedSilver;
              *piVar1 = *piVar1 + 1;
            }
          }
        }
        else {
          piVar1 = &(__this_04->fields).TotalBronze;
          *piVar1 = *piVar1 + 1;
          bVar3 = GameProgress_QuestItem__Finished(__this_05,(MethodInfo *)0x0);
          local_38 = pGVar6;
          if ((char)bVar3 != '\0') {
            (__this_04->fields).FinishedBronze = (__this_04->fields).FinishedBronze + 1;
          }
        }
      }
    }
    __this_03.fields._8_8_ = pIVar5;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    if (__this_04 != (GameProgress_AchievementCount_o *)0x0) {
      (__this_04->fields).TotalAll =
           (__this_04->fields).TotalSilver + (__this_04->fields).TotalBronze +
           (__this_04->fields).TotalGold;
      (__this_04->fields).FinishedAll =
           (__this_04->fields).FinishedSilver + (__this_04->fields).FinishedBronze +
           (__this_04->fields).FinishedGold;
      return __this_04;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.AchievementContainer$$.ctor
// il2cpp: void GameProgress_AchievementContainer___ctor (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x42069b0

void GameProgress_AchievementContainer___ctor
               (GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_AchievementItem__o *__this_00;
  
  if (DAT_0570501b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_AchievementItem);
    DAT_0570501b = '\x01';
  }
  __this_00 = (Settings_ListSetting_AchievementItem__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)__this_00,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  (__this->fields).AchievementItems = __this_00;
  il2cpp_runtime_glue(&(__this->fields).AchievementItems);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


