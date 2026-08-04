// Type: GameProgress.QuestHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestHandler.cs
// --------------------------------

// GameProgress.QuestHandler$$.ctor
// il2cpp: void GameProgress_QuestHandler___ctor (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* quest, const MethodInfo* method);
// 0x4538c10

void GameProgress_QuestHandler___ctor
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *quest,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  Il2CppRGCTXData *__this_07;
  Il2CppRGCTXData *pIVar8;
  Il2CppRGCTXData *pIVar9;
  long *plVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppRGCTXData method_02;
  Il2CppRGCTXData IVar11;
  Il2CppRGCTXData *__this_08;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  GameProgress_QuestItem_o *item;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  Il2CppRGCTXData *pIStack_30;
  
  if (g_data_057aef2d == '\0') {
    pIStack_30 = (Il2CppRGCTXData *)0x4538c33;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_GameProgress_QuestItem);
    pIStack_30 = (Il2CppRGCTXData *)0x4538c3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_QuestItem);
    pIStack_30 = (Il2CppRGCTXData *)0x4538c4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pIStack_30 = (Il2CppRGCTXData *)0x4538c57;
    il2cpp_runtime_helper_023445d0(&"ReachSpeed");
    pIStack_30 = (Il2CppRGCTXData *)0x4538c63;
    il2cpp_runtime_helper_023445d0(&"KillHuman");
    pIStack_30 = (Il2CppRGCTXData *)0x4538c6f;
    il2cpp_runtime_helper_023445d0(&"ShareGas");
    pIStack_30 = (Il2CppRGCTXData *)0x4538c7b;
    il2cpp_runtime_helper_023445d0(&"DealDamage");
    pIStack_30 = (Il2CppRGCTXData *)0x4538c87;
    il2cpp_runtime_helper_023445d0(&"HitDamage");
    pIStack_30 = (Il2CppRGCTXData *)0x4538c93;
    il2cpp_runtime_helper_023445d0(&"CarryPlayer");
    pIStack_30 = (Il2CppRGCTXData *)0x4538c9f;
    il2cpp_runtime_helper_023445d0(&"KillTitan");
    g_data_057aef2d = '\x01';
  }
  pIStack_30 = (Il2CppRGCTXData *)0x4538cb5;
  __this_07 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_QuestItem);
  pIStack_30 = (Il2CppRGCTXData *)0x4538cca;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,MethodInfo_Dictionary_2_System_String_List_1_GameProgress_QuestItem);
  (__this->fields)._activeQuests =
       (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)__this_07;
  pIStack_30 = (Il2CppRGCTXData *)0x4538cda;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._activeQuests,__this_07);
  method_02 = (Il2CppRGCTXData)0x1;
  pIStack_30 = (Il2CppRGCTXData *)0x4538cef;
  __this_08 = TypeInfo_string;
  pIVar8 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
  if (pIVar8 == (Il2CppRGCTXData *)0x0) goto label_04538ef0;
  if (*(int *)(pIVar8 + 3) != 0) {
    pIVar8[4] = "KillTitan";
    pIStack_30 = (Il2CppRGCTXData *)0x4538d1f;
    il2cpp_runtime_helper_022b4080(pIVar8 + 4);
    (__this->fields).TitanKillCategories = (System_String_array *)pIVar8;
    pIStack_30 = (Il2CppRGCTXData *)0x4538d2f;
    il2cpp_runtime_helper_022b4080(&(__this->fields).TitanKillCategories,pIVar8);
    method_02 = (Il2CppRGCTXData)0x1;
    pIStack_30 = (Il2CppRGCTXData *)0x4538d3d;
    __this_08 = TypeInfo_string;
    pIVar9 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
    __this_07 = pIVar8;
    if (pIVar9 == (Il2CppRGCTXData *)0x0) goto label_04538ef0;
    pIVar8 = pIVar9;
    if (*(int *)(pIVar9 + 3) != 0) {
      pIVar9[4] = "KillHuman";
      pIStack_30 = (Il2CppRGCTXData *)0x4538d6d;
      il2cpp_runtime_helper_022b4080(pIVar9 + 4);
      (__this->fields).HumanKillCategories = (System_String_array *)pIVar9;
      pIStack_30 = (Il2CppRGCTXData *)0x4538d7d;
      il2cpp_runtime_helper_022b4080(&(__this->fields).HumanKillCategories,pIVar9);
      method_02 = (Il2CppRGCTXData)0x2;
      pIStack_30 = (Il2CppRGCTXData *)0x4538d8b;
      __this_08 = TypeInfo_string;
      pIVar8 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
      IVar11 = "DealDamage";
      __this_07 = pIVar9;
      if (pIVar8 == (Il2CppRGCTXData *)0x0) goto label_04538ef0;
      if (*(int *)(pIVar8 + 3) != 0) {
        __this_08 = pIVar8 + 4;
        pIVar8[4] = "DealDamage";
        pIStack_30 = (Il2CppRGCTXData *)0x4538db8;
        il2cpp_runtime_helper_022b4080();
        method_02 = IVar11;
        if (1 < *(uint *)(pIVar8 + 3)) {
          pIVar8[5] = "HitDamage";
          pIStack_30 = (Il2CppRGCTXData *)0x4538ddc;
          il2cpp_runtime_helper_022b4080(pIVar8 + 5);
          (__this->fields).DamageCategories = (System_String_array *)pIVar8;
          pIStack_30 = (Il2CppRGCTXData *)0x4538dec;
          il2cpp_runtime_helper_022b4080(&(__this->fields).DamageCategories,pIVar8);
          method_02 = (Il2CppRGCTXData)0x1;
          pIStack_30 = (Il2CppRGCTXData *)0x4538dfa;
          __this_08 = TypeInfo_string;
          pIVar9 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
          __this_07 = pIVar8;
          if (pIVar9 == (Il2CppRGCTXData *)0x0) goto label_04538ef0;
          pIVar8 = pIVar9;
          if (*(int *)(pIVar9 + 3) != 0) {
            pIVar9[4] = "ReachSpeed";
            pIStack_30 = (Il2CppRGCTXData *)0x4538e2a;
            il2cpp_runtime_helper_022b4080(pIVar9 + 4);
            (__this->fields).SpeedCategories = (System_String_array *)pIVar9;
            pIStack_30 = (Il2CppRGCTXData *)0x4538e3a;
            il2cpp_runtime_helper_022b4080(&(__this->fields).SpeedCategories,pIVar9);
            method_02 = (Il2CppRGCTXData)0x2;
            pIStack_30 = (Il2CppRGCTXData *)0x4538e48;
            __this_08 = TypeInfo_string;
            pIVar8 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40();
            IVar11 = "ShareGas";
            __this_07 = pIVar9;
            if (pIVar8 == (Il2CppRGCTXData *)0x0) goto label_04538ef0;
            if (*(int *)(pIVar8 + 3) != 0) {
              __this_08 = pIVar8 + 4;
              pIVar8[4] = "ShareGas";
              pIStack_30 = (Il2CppRGCTXData *)0x4538e75;
              il2cpp_runtime_helper_022b4080();
              method_02 = IVar11;
              if (1 < *(uint *)(pIVar8 + 3)) {
                pIVar8[5] = "CarryPlayer";
                pIStack_30 = (Il2CppRGCTXData *)0x4538e95;
                il2cpp_runtime_helper_022b4080(pIVar8 + 5);
                (__this->fields).InteractionCategories = (System_String_array *)pIVar8;
                pIStack_30 = (Il2CppRGCTXData *)0x4538ea5;
                il2cpp_runtime_helper_022b4080(&(__this->fields).InteractionCategories);
                pIStack_30 = (Il2CppRGCTXData *)0x4538eaf;
                System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                if (quest == (GameProgress_QuestContainer_o *)0x0) {
                  return;
                }
                (__this->fields)._quest = quest;
                pIStack_30 = (Il2CppRGCTXData *)0x4538ec4;
                il2cpp_runtime_helper_022b4080(&__this->fields);
                pIStack_30 = (Il2CppRGCTXData *)0x4538ecc;
                GameProgress_QuestHandler__LoadQuests(__this,(MethodInfo *)quest);
                if (g_data_057aef31 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                  g_data_057aef31 = '\x01';
                }
                pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
                pIVar14 = (Il2CppType *)0x0;
                item = (GameProgress_QuestItem_o *)0x0;
                __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                            (__this->fields)._activeQuests;
                if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_045402dd;
                System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
                pGVar1 = (__this->fields)._quest;
                if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
                    (pSVar2 = (pGVar1->fields).DailyQuestItems,
                    pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
                   (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
                   pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
                pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
                pIVar14 = (Il2CppType *)auStack_48._8_8_;
                item = pGStack_38;
                while (__this_01.fields._8_8_ = pIVar14,
                      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar13,
                      __this_01.fields._current = (Il2CppObject *)item,
                      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                      (char)bVar7 != '\0') {
                  if (item == (GameProgress_QuestItem_o *)0x0) {
label_045402c4:
                    il2cpp_runtime_helper_022b2c90();
label_045402c9:
                    il2cpp_runtime_helper_022b2c90();
                    goto label_045402ce;
                  }
                  pSVar4 = (item->fields).Progress;
                  if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_045402c9;
                  pSVar5 = (item->fields).Amount;
                  if (pSVar5 == (Settings_IntSetting_o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_045402c4;
                  }
                  if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
                    GameProgress_QuestHandler__AddActiveQuest(__this,item,method_00);
                  }
                }
                __this_02.fields._8_8_ = pIVar14;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
                __this_02.fields._current = (Il2CppObject *)item;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
                pGVar1 = (__this->fields)._quest;
                if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
                    (pSVar2 = (pGVar1->fields).WeeklyQuestItems,
                    pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
                   (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
                   pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
                pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
                pIVar14 = (Il2CppType *)auStack_48._8_8_;
                item = pGStack_38;
                while( true ) {
                  __this_03.fields._8_8_ = pIVar14;
                  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
                  __this_03.fields._current = (Il2CppObject *)item;
                  bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
                  if ((char)bVar7 == '\0') {
                    __this_04.fields._8_8_ = pIVar14;
                    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
                    __this_04.fields._current = (Il2CppObject *)item;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
                    return;
                  }
                  if (item == (GameProgress_QuestItem_o *)0x0) break;
                  pSVar4 = (item->fields).Progress;
                  if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_045402d8;
                  pSVar5 = (item->fields).Amount;
                  if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402ce;
                  if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
                    GameProgress_QuestHandler__AddActiveQuest(__this,item,method_01);
                  }
                }
                goto label_045402d3;
              }
            }
          }
        }
      }
    }
  }
  pIStack_30 = (Il2CppRGCTXData *)0x4538ef0;
  il2cpp_runtime_helper_022b2ca0();
  __this_07 = pIVar8;
label_04538ef0:
  pIStack_30 = (Il2CppRGCTXData *)0x4538ef5;
  il2cpp_runtime_helper_022b2c90();
  pGStack_38 = (GameProgress_QuestItem_o *)0x4538f09;
  pIStack_30 = __this_07;
  GameProgress_AchievementHandler__LoadAchievements
            ((GameProgress_AchievementHandler_o *)__this_08,method_02.method);
  GameProgress_AchievementHandler__CacheActiveAchievements
            ((GameProgress_AchievementHandler_o *)__this_08,method_02.method);
  return;
label_045402ce:
  il2cpp_runtime_helper_022b2c90();
label_045402d3:
  il2cpp_runtime_helper_022b2c90();
label_045402d8:
  il2cpp_runtime_helper_022b2c90();
label_045402dd:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar6 = *plVar10;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar14;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
    __this_05.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_06.fields._8_8_ = pIVar14;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
  __this_06.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar12._0_8_);
}


// GameProgress.QuestHandler$$ReloadQuests
// il2cpp: void GameProgress_QuestHandler__ReloadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x453e2c0

void GameProgress_QuestHandler__ReloadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  long *plVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  GameProgress_QuestItem_o *item;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  GameProgress_QuestHandler__LoadQuests(__this,method);
  if (g_data_057aef31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057aef31 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  item = (GameProgress_QuestItem_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045402dd;
  System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
  pGVar1 = (__this->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).DailyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar11 = (Il2CppType *)auStack_48._8_8_;
  item = pGStack_38;
  while (__this_01.fields._8_8_ = pIVar11,
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
        __this_01.fields._current = (Il2CppObject *)item,
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar7 != '\0') {
    if (item == (GameProgress_QuestItem_o *)0x0) {
label_045402c4:
      il2cpp_runtime_helper_022b2c90();
label_045402c9:
      il2cpp_runtime_helper_022b2c90();
      goto label_045402ce;
    }
    pSVar4 = (item->fields).Progress;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_045402c9;
    pSVar5 = (item->fields).Amount;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_045402c4;
    }
    if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
      GameProgress_QuestHandler__AddActiveQuest(__this,item,method_00);
    }
  }
  __this_02.fields._8_8_ = pIVar11;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_02.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  pGVar1 = (__this->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).WeeklyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar11 = (Il2CppType *)auStack_48._8_8_;
  item = pGStack_38;
  while( true ) {
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_03.fields._current = (Il2CppObject *)item;
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar7 == '\0') {
      __this_04.fields._8_8_ = pIVar11;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
      __this_04.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
    if (item == (GameProgress_QuestItem_o *)0x0) break;
    pSVar4 = (item->fields).Progress;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_045402d8;
    pSVar5 = (item->fields).Amount;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402ce;
    if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
      GameProgress_QuestHandler__AddActiveQuest(__this,item,method_01);
    }
  }
label_045402d3:
  il2cpp_runtime_helper_022b2c90();
label_045402d8:
  il2cpp_runtime_helper_022b2c90();
label_045402dd:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar6 = *plVar8;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar11;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_05.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_06.fields._8_8_ = pIVar11;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_06.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar9._0_8_);
label_045402ce:
  il2cpp_runtime_helper_022b2c90();
  goto label_045402d3;
}


// GameProgress.QuestHandler$$GetTimeToQuestReset
// il2cpp: System_String_o* GameProgress_QuestHandler__GetTimeToQuestReset (bool daily, const MethodInfo* method);
// 0x4540430

System_String_o * GameProgress_QuestHandler__GetTimeToQuestReset(bool_conflict daily,MethodInfo *method)

{
  int32_t *piVar1;
  uint64_t uVar2;
  Settings_IntSetting_o *__this;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  int32_t iVar4;
  int iVar5;
  uint uVar6;
  bool_conflict bVar7;
  System_DateTime_o d1;
  Il2CppObject *pIVar8;
  _union_249689 args;
  System_String_o *pSVar9;
  MethodInfo *pMVar10;
  undefined8 uVar11;
  _union_249689 __this_04;
  GameProgress_QuestItem_o *pGVar12;
  System_String_array *pSVar13;
  undefined8 extraout_RAX;
  undefined8 uVar14;
  long *plVar15;
  undefined8 extraout_RAX_00;
  uint uVar16;
  Il2CppObject **ppIVar17;
  long lVar18;
  int32_t extraout_EDX;
  int extraout_EDX_00;
  uint uVar19;
  System_DateTime_Fields *pSVar20;
  ulong uVar21;
  _union_249689 _Var22;
  System_Collections_Generic_List_object__o *unaff_R13;
  System_String_o *unaff_R14;
  MethodInfo_33E0DF0 **ppMVar23;
  ulong uVar24;
  undefined1 auVar25 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar26;
  Il2CppType *pIVar27;
  undefined1 auStack_d8 [16];
  Il2CppObject *pIStack_c8;
  _union_249689 _Stack_c0;
  _union_249689 _Stack_b8;
  System_Collections_Generic_List_object__o *pSStack_b0;
  GameProgress_QuestItem_o *pGStack_a8;
  ulong uStack_a0;
  System_DateTime_Fields *pSStack_98;
  _union_249689 _Stack_88;
  int32_t iStack_7c;
  _union_249689 _Stack_78;
  undefined8 *puStack_70;
  System_Collections_Generic_List_object__o *pSStack_68;
  System_String_o *pSStack_60;
  ulong uStack_58;
  MethodInfo *pMStack_50;
  System_DateTime_Fields local_40;
  System_TimeSpan_Fields local_38;
  
  if (g_data_057aef2e == '\0') {
    pMStack_50 = (MethodInfo *)0x4540455;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    pMStack_50 = (MethodInfo *)0x4540461;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pMStack_50 = (MethodInfo *)0x454046d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    pMStack_50 = (MethodInfo *)0x4540479;
    il2cpp_runtime_helper_023445d0(&"day");
    pMStack_50 = (MethodInfo *)0x4540485;
    il2cpp_runtime_helper_023445d0(&"hour");
    pMStack_50 = (MethodInfo *)0x4540491;
    il2cpp_runtime_helper_023445d0(&"days");
    pMStack_50 = (MethodInfo *)0x454049d;
    il2cpp_runtime_helper_023445d0(&"hours");
    pMStack_50 = (MethodInfo *)0x45404a9;
    il2cpp_runtime_helper_023445d0(&"Resets in: {0} {1}, {2} {3}");
    pMStack_50 = (MethodInfo *)0x45404b5;
    il2cpp_runtime_helper_023445d0(&"Resets in: {0} {1}");
    g_data_057aef2e = '\x01';
  }
  local_38._ticks = 0;
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    pMStack_50 = (MethodInfo *)0x45404dd;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_50 = (MethodInfo *)0x45404e4;
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_40._dateData = 0;
  uVar21 = 0;
  pMStack_50 = (MethodInfo *)0x454050c;
  System_DateTime___ctor_3c90070((System_DateTime_o)&local_40,0x7b2,1,1,(MethodInfo *)0x0);
  pMStack_50 = (MethodInfo *)0x454051b;
  local_38._ticks =
       (int64_t)System_DateTime__op_Subtraction_3c94570
                          (d1,(System_DateTime_o)local_40._dateData,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    pMStack_50 = (MethodInfo *)0x4540587;
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)daily != '\0') {
    pMStack_50 = (MethodInfo *)0x4540543;
    iVar4 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
    local_40._dateData._0_4_ = 0x18 - iVar4;
    pMStack_50 = (MethodInfo *)0x4540563;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_40);
    if (0x18 - iVar4 == 1) {
      ppIVar17 = &"hour";
    }
    else {
      ppIVar17 = &"hours";
    }
    pMStack_50 = (MethodInfo *)0x4540680;
    pSVar9 = System_String__Format_3af78e0("Resets in: {0} {1}",pIVar8,*ppIVar17,(MethodInfo *)0x0);
    return pSVar9;
  }
  pMStack_50 = (MethodInfo *)0x454059a;
  iVar4 = System_TimeSpan__get_Days((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
  lVar18 = (long)(iVar4 + -1);
  iVar5 = (int)((ulong)(lVar18 * -0x6db6db6d) >> 0x20) + iVar4 + -1;
  uVar19 = (((iVar5 >> 2) - (iVar5 >> 0x1f)) * 7 - (iVar4 + -1)) + 6;
  pMVar10 = (MethodInfo *)(ulong)uVar19;
  pMStack_50 = (MethodInfo *)0x45405d5;
  uVar6 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
  uVar16 = (uint)lVar18;
  pMStack_50 = (MethodInfo *)0x45405ec;
  args.genericMethod = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,4);
  local_40._dateData._0_4_ = uVar19;
  _Var22.genericMethod = &g_data_057b9b70;
  pSVar20 = &local_40;
  pMStack_50 = (MethodInfo *)0x4540609;
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
  pSStack_60 = unaff_R14;
  if (args.genericMethod != (Il2CppRGCTXData *)0x0) {
    if (pSVar9 == (System_String_o *)0x0) {
label_04540632:
      if (*(int *)((long)args.genericMethod + 0x18) != 0) {
        ((Il2CppRGCTXData *)((long)args.genericMethod + 0x20))->rgctxDataDummy = pSVar9;
        pMStack_50 = (MethodInfo *)0x454064c;
        il2cpp_runtime_helper_022b4080((Il2CppRGCTXData *)((long)args.genericMethod + 0x20));
        pSVar9 = "Resets in: {0} {1}, {2} {3}";
        pMVar10 = (MethodInfo *)"days";
        if (uVar19 == 1) {
          pMVar10 = (MethodInfo *)"day";
        }
        if (pMVar10 != (MethodInfo *)0x0) {
          pMStack_50 = (MethodInfo *)0x45406a3;
          lVar18 = il2cpp_runtime_helper_023051f0(pMVar10);
          if (lVar18 == 0) goto label_0454078d;
        }
        if (1 < *(uint *)((long)args.genericMethod + 0x18)) {
          uVar19 = 0x18 - uVar6;
          unaff_R13 = (System_Collections_Generic_List_object__o *)(ulong)uVar19;
          ((Il2CppRGCTXData *)((long)args.genericMethod + 0x28))->method = pMVar10;
          pMStack_50 = (MethodInfo *)0x45406cf;
          il2cpp_runtime_helper_022b4080((Il2CppRGCTXData *)((long)args.genericMethod + 0x28),pMVar10);
          local_40._dateData._0_4_ = uVar19;
          pMStack_50 = (MethodInfo *)0x45406e3;
          pMVar10 = (MethodInfo *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if (pMVar10 != (MethodInfo *)0x0) {
            pMStack_50 = (MethodInfo *)0x45406fa;
            lVar18 = il2cpp_runtime_helper_023051f0(pMVar10);
            if (lVar18 == 0) goto label_0454078d;
          }
          if (2 < *(uint *)((long)args.genericMethod + 0x18)) {
            ((Il2CppRGCTXData *)((long)args.genericMethod + 0x30))->rgctxDataDummy = pMVar10;
            pMStack_50 = (MethodInfo *)0x4540719;
            il2cpp_runtime_helper_022b4080((Il2CppRGCTXData *)((long)args.genericMethod + 0x30));
            pMVar10 = (MethodInfo *)"hours";
            if (uVar19 == 1) {
              pMVar10 = (MethodInfo *)"hour";
            }
            if (pMVar10 != (MethodInfo *)0x0) {
              pMStack_50 = (MethodInfo *)0x454074e;
              lVar18 = il2cpp_runtime_helper_023051f0(pMVar10);
              if (lVar18 == 0) goto label_0454078d;
            }
            if (3 < *(uint *)((long)args.genericMethod + 0x18)) {
              ((Il2CppRGCTXData *)((long)args.genericMethod + 0x38))->method = pMVar10;
              pMStack_50 = (MethodInfo *)0x454076c;
              il2cpp_runtime_helper_022b4080((Il2CppRGCTXData *)((long)args.genericMethod + 0x38),pMVar10);
              pMStack_50 = (MethodInfo *)0x4540779;
              pSVar9 = System_String__Format_3af7980(pSVar9,args.genericMethod,(MethodInfo *)0x0);
              return pSVar9;
            }
          }
        }
      }
      pMStack_50 = (MethodInfo *)0x454078d;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pMStack_50 = (MethodInfo *)0x4540629;
      lVar18 = il2cpp_runtime_helper_023051f0(pSVar9);
      if (lVar18 != 0) goto label_04540632;
    }
label_0454078d:
    pMStack_50 = (MethodInfo *)0x4540792;
    uVar11 = il2cpp_runtime_helper_0231b270();
    pSVar20 = (System_DateTime_Fields *)0x0;
    pMStack_50 = (MethodInfo *)0x454079c;
    il2cpp_runtime_helper_022b2b10(uVar11);
    pSStack_60 = pSVar9;
  }
  pMStack_50 = (MethodInfo *)0x45407a1;
  il2cpp_runtime_helper_022b2c90();
  puStack_70 = &g_data_057b9b70;
  uVar24 = uVar21 & 0xffffffff;
  pGVar12 = (GameProgress_QuestItem_o *)(ulong)uVar16;
  iStack_7c = extraout_EDX;
  _Stack_78.genericMethod = args.genericMethod;
  pSStack_68 = unaff_R13;
  uStack_58 = (ulong)uVar6;
  pMStack_50 = pMVar10;
  if (g_data_057aef30 == '\0') {
    pSStack_98 = (System_DateTime_Fields *)0x45407e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_98 = (System_DateTime_Fields *)0x45407f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_98 = (System_DateTime_Fields *)0x45407fc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pSStack_98 = (System_DateTime_Fields *)0x4540808;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pSStack_98 = (System_DateTime_Fields *)0x4540814;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_98 = (System_DateTime_Fields *)0x4540820;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem);
    pSStack_98 = (System_DateTime_Fields *)0x454082c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_98 = (System_DateTime_Fields *)0x4540838;
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Item);
    pSStack_98 = (System_DateTime_Fields *)0x4540844;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_QuestItem);
    pSStack_98 = (System_DateTime_Fields *)0x4540850;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestItem);
    pSStack_98 = (System_DateTime_Fields *)0x454085c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    pSStack_98 = (System_DateTime_Fields *)0x4540868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057aef30 = '\x01';
  }
  if (pSVar20 == (System_DateTime_Fields *)0x0) {
label_04540dc9:
    pSStack_98 = (System_DateTime_Fields *)0x4540dce;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    __this_04 = _Var22;
    ppMVar23 = (MethodInfo_33E0DF0 **)pGVar12;
  }
  else {
    if ((char)uVar16 == '\0') {
      uVar2 = pSVar20[5]._dateData;
    }
    else {
      uVar2 = pSVar20[4]._dateData;
    }
    if (uVar2 == 0) goto label_04540dc9;
    _Stack_88 = (_union_249689)((_union_249689 *)(uVar2 + 0x18))->genericMethod;
    pSStack_98 = (System_DateTime_Fields *)0x45408b0;
    unaff_R13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_QuestItem);
    pSStack_98 = (System_DateTime_Fields *)0x45408c5;
    System_Collections_Generic_List_object____ctor(unaff_R13,MethodInfo_List_1_GameProgress_QuestItem);
    pSStack_98 = (System_DateTime_Fields *)0x45408d4;
    __this_04.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
    pSStack_98 = (System_DateTime_Fields *)0x45408e9;
    System_Collections_Generic_HashSet_object____ctor(__this_04.genericMethod,MethodInfo_HashSet_1_System_String);
    if ((int)uVar21 < 1) {
      return (System_String_o *)unaff_R13;
    }
    _Var22.genericMethod = __this_04.genericMethod;
    if (_Stack_88.genericMethod == (Il2CppRGCTXData *)0x0) goto label_04540dc9;
    ppMVar23 = &MethodInfo_Boolean_Contains;
    while( true ) {
      args = _Stack_88;
      pSStack_98 = (System_DateTime_Fields *)0x4540921;
      uVar6 = UnityEngine_Random__Range_4df2410
                        (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
      pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
      pSStack_98 = (System_DateTime_Fields *)0x4540937;
      pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
      pGVar12 = (GameProgress_QuestItem_o *)ppMVar23;
      if (__this_04.genericMethod == (Il2CppRGCTXData *)0x0) break;
      _Var22.genericMethod = __this_04.genericMethod;
      if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
      pSStack_98 = (System_DateTime_Fields *)0x454095c;
      pMVar10 = (MethodInfo *)
                (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
      pSStack_98 = (System_DateTime_Fields *)0x454096a;
      bVar7 = System_Collections_Generic_HashSet_object___Contains
                        (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
      args = _Stack_88;
      if ((char)bVar7 == '\0') {
label_04540c90:
        pSStack_98 = (System_DateTime_Fields *)0x4540ca5;
        pGVar12 = (GameProgress_QuestItem_o *)il2cpp_runtime_helper_023052d0(TypeInfo_QuestItem);
        pSStack_98 = (System_DateTime_Fields *)0x4540cb0;
        GameProgress_QuestItem___ctor(pGVar12,pMVar10);
        pSStack_98 = (System_DateTime_Fields *)0x4540cc6;
        pIVar8 = System_Collections_Generic_List_object___get_Item
                           (_Stack_88.genericMethod,(int32_t)pSVar20,MethodInfo_QuestItem_get_Item);
        args.genericMethod = __this_04.genericMethod;
        _Var22 = (_union_249689)&MethodInfo_Boolean_Contains;
        if (pGVar12 == (GameProgress_QuestItem_o *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540ce5;
        (*(pGVar12->klass->vtable)._9_Copy.methodPtr)(pGVar12,pIVar8,(pGVar12->klass->vtable)._9_Copy.method);
        __this = (pGVar12->fields).DayCreated;
        if (__this == (Settings_IntSetting_o *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540d05;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this,iStack_7c,MethodInfo_Void_set_Value);
        lVar18 = MethodInfo_Void_Add;
        if (unaff_R13 == (System_Collections_Generic_List_object__o *)0x0) goto label_04540dc9;
        piVar1 = &(unaff_R13->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (unaff_R13->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto label_04540dc9;
        uVar6 = (unaff_R13->fields)._size;
        if (uVar6 < (uint)pSVar3->max_length) {
          (unaff_R13->fields)._size = uVar6 + 1;
          pSVar3->m_Items[(int)uVar6] = (Il2CppObject *)pGVar12;
          pSStack_98 = (System_DateTime_Fields *)0x4540d4f;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar6,pGVar12);
        }
        else {
          pSStack_98 = (System_DateTime_Fields *)0x4540d7a;
          System_Collections_Generic_List_object___AddWithResize
                    (unaff_R13,(Il2CppObject *)pGVar12,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        pSStack_98 = (System_DateTime_Fields *)0x4540d8d;
        pIVar8 = (Il2CppObject *)
                 (*(pGVar12->klass->vtable)._13_GetQuestName.methodPtr)
                           (pGVar12,(pGVar12->klass->vtable)._13_GetQuestName.method);
        pSStack_98 = (System_DateTime_Fields *)0x4540da2;
        System_Collections_Generic_HashSet_object___Add(__this_04.genericMethod,pIVar8,MethodInfo_Boolean_Add);
      }
      else {
        pSStack_98 = (System_DateTime_Fields *)0x4540983;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540999;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x45409b5;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x45409c3;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x45409dc;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x45409f2;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540a0e;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540a1c;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x4540a35;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540a4b;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540a67;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540a75;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x4540a8e;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540aa4;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540ac0;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540ace;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x4540ae7;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540afd;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540b19;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540b27;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x4540b40;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540b56;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540b72;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540b80;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x4540b99;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540baf;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540bcb;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540bd9;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x4540bf2;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540c08;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540c24;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540c32;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        args = _Stack_88;
        if ((char)bVar7 == '\0') goto label_04540c90;
        pSStack_98 = (System_DateTime_Fields *)0x4540c47;
        uVar6 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)_Stack_88.genericMethod + 0x18),(MethodInfo *)0x0);
        pSVar20 = (System_DateTime_Fields *)(ulong)uVar6;
        pSStack_98 = (System_DateTime_Fields *)0x4540c5d;
        pIVar8 = System_Collections_Generic_List_object___get_Item(args.genericMethod,uVar6,MethodInfo_QuestItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
        pSStack_98 = (System_DateTime_Fields *)0x4540c79;
        pMVar10 = (MethodInfo *)
                  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8,pIVar8->klass->vtable[0xd].method);
        pSStack_98 = (System_DateTime_Fields *)0x4540c87;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04.genericMethod,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Contains);
        if ((char)bVar7 == '\0') goto label_04540c90;
      }
      uVar6 = (int)uVar24 - 1;
      uVar24 = (ulong)uVar6;
      if (uVar6 == 0) {
        return (System_String_o *)unaff_R13;
      }
    }
    _Var22.genericMethod = __this_04.genericMethod;
    if (pIVar8 == (Il2CppObject *)0x0) goto label_04540dc9;
  }
  pMVar10 = pIVar8->klass->vtable[0xd].method;
  pSStack_98 = (System_DateTime_Fields *)0x4540de1;
  (*pIVar8->klass->vtable[0xd].methodPtr)(pIVar8);
  pSStack_98 = (System_DateTime_Fields *)0x4540de6;
  il2cpp_runtime_helper_022b2c90();
  _Stack_c0 = args;
  _Stack_b8 = __this_04;
  pSStack_b0 = unaff_R13;
  pGStack_a8 = (GameProgress_QuestItem_o *)ppMVar23;
  uStack_a0 = uVar24;
  pSStack_98 = pSVar20;
  if (g_data_057aef33 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillWeapon_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Weapon");
    g_data_057aef33 = '\x01';
  }
  pSVar26 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar27 = (Il2CppType *)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  if (pMVar10 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d8,
               (System_Collections_Generic_List_object__o *)pMVar10,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    pSVar26 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d8._0_8_;
    pIVar27 = (Il2CppType *)auStack_d8._8_8_;
    pIVar8 = pIStack_c8;
    do {
      do {
        __this_00.fields._8_8_ = pIVar27;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar26;
        __this_00.fields._current = pIVar8;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff08);
        if ((char)bVar7 == '\0') {
          iVar5 = 5;
          goto label_04540f8c;
        }
        if (pIVar8 == (Il2CppObject *)0x0) {
label_04540fb8:
          il2cpp_runtime_helper_022b2c90();
label_04540fbd:
          il2cpp_runtime_helper_022b2c90();
label_04540fc2:
          il2cpp_runtime_helper_022b2c90();
label_04540fc7:
          il2cpp_runtime_helper_022b2ca0();
label_04540fcc:
          il2cpp_runtime_helper_022b2c90();
          goto label_04540fd1;
        }
        if (pIVar8[1].monitor == (System_String_o *)0x0) goto label_04540fbd;
        pSVar13 = System_String__Split(pIVar8[1].monitor,0x3a,0,(MethodInfo *)0x0);
        if (pSVar13 == (System_String_array *)0x0) goto label_04540fc2;
        iVar5 = (int)pSVar13->max_length;
        if (iVar5 == 1) goto label_04540fc7;
        if (iVar5 == 0) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04540fb8;
        }
        pSVar9 = pSVar13->m_Items[1];
        bVar7 = System_String__op_Equality(pSVar13->m_Items[0],"Weapon",(MethodInfo *)0x0);
      } while ((char)bVar7 == '\0');
      if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_QuestHandler + 0xb8) ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04540fcc;
      iVar4 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                         **(undefined8 **)(TypeInfo_QuestHandler + 0xb8),(Il2CppObject *)pSVar9,MethodInfo_KillWeapon_get_Item);
    } while (iVar4 == extraout_EDX_00);
    iVar5 = 4;
label_04540f8c:
    __this_01.fields._8_8_ = pIVar27;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar26;
    __this_01.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
    uVar14 = extraout_RAX;
label_04540f9e:
    return (System_String_o *)CONCAT71((int7)((ulong)uVar14 >> 8),iVar5 != 4);
  }
label_04540fd1:
  auVar25 = il2cpp_runtime_helper_022b2c90();
  uVar11 = auVar25._0_8_;
  if (auVar25._8_4_ == 1) {
    plVar15 = (long *)__cxa_begin_catch(uVar11);
    lVar18 = *plVar15;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar27;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar26;
    __this_02.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
    uVar11 = 0;
    iVar5 = 0;
    uVar14 = extraout_RAX_00;
    if (lVar18 == 0) goto label_04540f9e;
    il2cpp_runtime_helper_022fefe0(lVar18);
  }
  __this_03.fields._8_8_ = pIVar27;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar26;
  __this_03.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
  _Unwind_Resume(uVar11);
}


// GameProgress.QuestHandler$$LoadQuests
// il2cpp: void GameProgress_QuestHandler__LoadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x453f810

void GameProgress_QuestHandler__LoadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  GameProgress_QuestContainer_o *pGVar5;
  Settings_ListSetting_QuestItem__o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  System_Object_array *pSVar8;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  int32_t currentDay;
  bool_conflict bVar10;
  int iVar11;
  System_DateTime_o d1;
  System_String_array *pSVar12;
  UnityEngine_Object_o *__this_09;
  System_String_o *pSVar13;
  System_String_array *__this_10;
  System_Collections_Generic_List_QuestItem__o *pSVar14;
  long *plVar15;
  MethodInfo *method_00;
  GameProgress_QuestHandler_o *pGVar16;
  GameProgress_QuestHandler_o *__this_11;
  MethodInfo *in_R9;
  int iVar17;
  undefined1 auVar18 [12];
  GameProgress_QuestHandler_c *pGVar19;
  Il2CppMethodPointer pIVar20;
  GameProgress_QuestContainer_o *item;
  System_String_array *local_78;
  System_String_array *local_70;
  System_String_array *local_68;
  System_DateTime_Fields local_60;
  _union_249689 local_58;
  GameProgress_QuestHandler_o *local_50;
  undefined1 local_48 [16];
  GameProgress_QuestContainer_o *local_38;
  
  pGVar16 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff68;
  __this_11 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff68;
  if (g_data_057aef2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_QuestItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_QuestItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"QuestList");
    g_data_057aef2f = '\x01';
  }
  local_58.genericMethod = (void *)0x0;
  pGVar19 = (GameProgress_QuestHandler_c *)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  item = (GameProgress_QuestContainer_o *)0x0;
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_60._dateData = 0;
  System_DateTime___ctor_3c90070((System_DateTime_o)&local_60,0x7b2,1,1,(MethodInfo *)0x0);
  local_58 = (_union_249689)
             System_DateTime__op_Subtraction_3c94570
                       (d1,(System_DateTime_o)local_60._dateData,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  currentDay = System_TimeSpan__get_Days((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_QuestContainer);
  GameProgress_QuestContainer___ctor((GameProgress_QuestContainer_o *)pSVar12,method_00);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_09 = ApplicationManagers_ResourceManager__LoadAsset(pSVar13,"QuestList",0,(MethodInfo *)0x0);
  if (__this_09 == (UnityEngine_Object_o *)0x0) goto label_0453ff0c;
  bVar2 = (TypeInfo_TextAsset->_2).naturalAligment;
  if ((__this_09->klass->_2).naturalAligment < bVar2) goto label_0453ff25;
  if ((__this_09->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextAsset) goto label_0453ff25;
  pSVar13 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_09,(MethodInfo *)0x0);
  if (pSVar12 == (System_String_array *)0x0) goto label_0453ff0c;
  pIVar4 = (pSVar12->obj).klass;
  (*(((GameProgress_QuestContainer_VTable *)pIVar4->vtable)->_8_DeserializeFromJsonString).methodPtr)
            (pSVar12,pSVar13,
             (((GameProgress_QuestContainer_VTable *)pIVar4->vtable)->_8_DeserializeFromJsonString).method);
  __this_10 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_10,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  pGVar5 = (__this->fields)._quest;
  if (pGVar5 == (GameProgress_QuestContainer_o *)0x0) goto label_0453ff0c;
  pSVar6 = (pGVar5->fields).DailyQuestItems;
  if (pSVar6 == (Settings_ListSetting_QuestItem__o *)0x0) goto label_0453ff0c;
  pSVar7 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value;
  if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff0c;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar7,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  pGVar19 = (GameProgress_QuestHandler_c *)local_48._0_8_;
  pIVar20 = (Il2CppMethodPointer)local_48._8_8_;
  item = local_38;
  local_78 = __this_10;
  local_70 = pSVar12;
  if (__this_10 == (System_String_array *)0x0) {
    do {
      __this_01.fields._8_8_ = pIVar20;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pGVar19;
      __this_01.fields._current = (Il2CppObject *)item;
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
      if ((char)bVar10 == '\0') goto label_0453fbf5;
      if (item == (GameProgress_QuestContainer_o *)0x0) goto label_0453fef8;
      if ((Il2CppClass *)item[2].klass == (Il2CppClass *)0x0) goto label_0453fefd;
    } while (*(int *)((long)&(((Il2CppClass *)item[2].klass)->_1).name + 4) != currentDay);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (__this_00.fields._8_8_ = pIVar20,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pGVar19,
          __this_00.fields._current = (Il2CppObject *)item,
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68), lVar9 = MethodInfo_Void_Add,
          (char)bVar10 != '\0') {
      if (item == (GameProgress_QuestContainer_o *)0x0) goto label_0453fef8;
      if ((Il2CppClass *)item[2].klass == (Il2CppClass *)0x0) goto label_0453fefd;
      if (*(int *)((long)&(((Il2CppClass *)item[2].klass)->_1).name + 4) == currentDay) {
        pSVar7 = (System_Collections_Generic_List_object__o *)__this_10->max_length;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff16;
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (pSVar7->fields)._items;
        if (pSVar8 == (System_Object_array *)0x0) goto label_0453ff11;
        uVar3 = (pSVar7->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (pSVar7->fields)._size = uVar3 + 1;
          pSVar8->m_Items[(int)uVar3] = (Il2CppObject *)item;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
label_0453fbf5:
  __this_02.fields._8_8_ = pIVar20;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pGVar19;
  __this_02.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  if (__this_10 == (System_String_array *)0x0) goto label_0453ff0c;
  pSVar7 = (System_Collections_Generic_List_object__o *)__this_10->max_length;
  if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff0c;
  pSVar14 = GameProgress_QuestHandler__CreateQuests
                      (pGVar16,(GameProgress_QuestContainer_o *)pSVar12,currentDay,1,
                       3 - (pSVar7->fields)._size,in_R9);
  System_Collections_Generic_List_object___AddRange
            (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pSVar14,MethodInfo_Void_AddRange);
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar12,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  pGVar5 = (__this->fields)._quest;
  if (pGVar5 == (GameProgress_QuestContainer_o *)0x0) goto label_0453ff0c;
  pSVar6 = (pGVar5->fields).WeeklyQuestItems;
  if (pSVar6 == (Settings_ListSetting_QuestItem__o *)0x0) goto label_0453ff0c;
  pSVar7 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value;
  if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff0c;
  iVar17 = (int)((ulong)((long)(currentDay + -1) * -0x6db6db6d) >> 0x20) + currentDay + -1;
  iVar17 = (iVar17 >> 2) - (iVar17 >> 0x1f);
  local_50 = __this;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar7,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  pGVar19 = (GameProgress_QuestHandler_c *)local_48._0_8_;
  pIVar20 = (Il2CppMethodPointer)local_48._8_8_;
  item = local_38;
  local_68 = pSVar12;
  if (pSVar12 == (System_String_array *)0x0) {
    do {
      __this_04.fields._8_8_ = pIVar20;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pGVar19;
      __this_04.fields._current = (Il2CppObject *)item;
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
      if ((char)bVar10 == '\0') goto label_0453fe3a;
      if (item == (GameProgress_QuestContainer_o *)0x0) goto label_0453ff02;
      if ((Il2CppClass *)item[2].klass == (Il2CppClass *)0x0) goto label_0453ff07;
      iVar11 = *(int *)((long)&(((Il2CppClass *)item[2].klass)->_1).name + 4);
      iVar11 = (int)((ulong)((long)(iVar11 + -1) * -0x6db6db6d) >> 0x20) + iVar11 + -1;
    } while ((iVar11 >> 2) - (iVar11 >> 0x1f) != iVar17);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (__this_03.fields._8_8_ = pIVar20,
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pGVar19,
          __this_03.fields._current = (Il2CppObject *)item,
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68), lVar9 = MethodInfo_Void_Add,
          (char)bVar10 != '\0') {
      if (item == (GameProgress_QuestContainer_o *)0x0) goto label_0453ff02;
      if ((Il2CppClass *)item[2].klass == (Il2CppClass *)0x0) goto label_0453ff07;
      iVar11 = *(int *)((long)&(((Il2CppClass *)item[2].klass)->_1).name + 4);
      iVar11 = (int)((ulong)((long)(iVar11 + -1) * -0x6db6db6d) >> 0x20) + iVar11 + -1;
      if ((iVar11 >> 2) - (iVar11 >> 0x1f) == iVar17) {
        pSVar7 = (System_Collections_Generic_List_object__o *)pSVar12->max_length;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff20;
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (pSVar7->fields)._items;
        if (pSVar8 == (System_Object_array *)0x0) goto label_0453ff1b;
        uVar3 = (pSVar7->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (pSVar7->fields)._size = uVar3 + 1;
          pSVar8->m_Items[(int)uVar3] = (Il2CppObject *)item;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
label_0453fe3a:
  __this_05.fields._8_8_ = pIVar20;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pGVar19;
  __this_05.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  while( true ) {
    pGVar16 = local_50;
    if ((local_68 != (System_String_array *)0x0) &&
       (pSVar7 = (System_Collections_Generic_List_object__o *)local_68->max_length,
       pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
      pSVar14 = GameProgress_QuestHandler__CreateQuests
                          (__this_11,(GameProgress_QuestContainer_o *)local_70,currentDay,0,
                           3 - (pSVar7->fields)._size,in_R9);
      System_Collections_Generic_List_object___AddRange
                (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pSVar14,MethodInfo_Void_AddRange);
      pGVar5 = (pGVar16->fields)._quest;
      if ((pGVar5 != (GameProgress_QuestContainer_o *)0x0) &&
         (pSVar6 = (pGVar5->fields).DailyQuestItems, pSVar6 != (Settings_ListSetting_QuestItem__o *)0x0)) {
        (*(pSVar6->klass->vtable)._9_Copy.methodPtr)(pSVar6,local_78,(pSVar6->klass->vtable)._9_Copy.method);
        pGVar5 = (pGVar16->fields)._quest;
        if ((pGVar5 != (GameProgress_QuestContainer_o *)0x0) &&
           (pSVar6 = (pGVar5->fields).WeeklyQuestItems, pSVar6 != (Settings_ListSetting_QuestItem__o *)0x0)) {
          (*(pSVar6->klass->vtable)._9_Copy.methodPtr)(pSVar6,local_68,(pSVar6->klass->vtable)._9_Copy.method)
          ;
          return;
        }
      }
    }
label_0453ff0c:
    il2cpp_runtime_helper_022b2c90();
label_0453ff11:
    il2cpp_runtime_helper_022b2c90();
label_0453ff16:
    il2cpp_runtime_helper_022b2c90();
label_0453ff1b:
    il2cpp_runtime_helper_022b2c90();
label_0453ff20:
    __this_09 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
label_0453ff25:
    auVar18 = il2cpp_runtime_helper_022b2fd0(__this_09);
    if (auVar18._8_4_ != 1) break;
    plVar15 = (long *)__cxa_begin_catch(auVar18._0_8_);
    lVar9 = *plVar15;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar20;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pGVar19;
    __this_06.fields._current = (Il2CppObject *)item;
    __this_11 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff68;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      __this_08.fields._8_8_ = pIVar20;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)pGVar19;
      __this_08.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
label_0454008f:
      _Unwind_Resume(auVar18._0_8_);
    }
  }
  __this_07.fields._8_8_ = pIVar20;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)pGVar19;
  __this_07.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  goto label_0454008f;
label_0453fef8:
  il2cpp_runtime_helper_022b2c90();
label_0453fefd:
  il2cpp_runtime_helper_022b2c90();
label_0453ff02:
  il2cpp_runtime_helper_022b2c90();
label_0453ff07:
  il2cpp_runtime_helper_022b2c90();
  goto label_0453ff0c;
}


// GameProgress.QuestHandler$$CreateQuests
// il2cpp: System_Collections_Generic_List_QuestItem__o* GameProgress_QuestHandler__CreateQuests (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* defaultQuest, int32_t currentDay, bool daily, int32_t count, const MethodInfo* method);
// 0x45407b0

System_Collections_Generic_List_QuestItem__o *
GameProgress_QuestHandler__CreateQuests
          (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *defaultQuest,int32_t currentDay,
          bool_conflict daily,int32_t count,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  Settings_IntSetting_o *__this_00;
  GameProgress_QuestItem_array *pGVar3;
  System_String_o *key;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  uint uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  _union_249689 __this_05;
  MethodInfo *pMVar8;
  GameProgress_QuestItem_o *pGVar9;
  Il2CppObject *pIVar10;
  System_String_array *pSVar11;
  undefined8 extraout_RAX;
  undefined8 uVar12;
  long *plVar13;
  undefined8 extraout_RAX_00;
  int extraout_EDX;
  int iVar14;
  _union_249689 unaff_RBX;
  _union_249689 unaff_R12;
  System_Collections_Generic_List_QuestItem__o *unaff_R13;
  MethodInfo_33E0DF0 **ppMVar16;
  ulong uVar17;
  undefined1 auVar18 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar19;
  Il2CppType *pIVar20;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  _union_249689 _Stack_78;
  _union_249689 _Stack_70;
  System_Collections_Generic_List_QuestItem__o *pSStack_68;
  GameProgress_QuestItem_o *pGStack_60;
  ulong uStack_58;
  GameProgress_QuestContainer_o *pGStack_50;
  _union_249689 local_40;
  int32_t local_34;
  undefined8 uVar15;
  
  uVar17 = (ulong)(uint)count;
  pGVar9 = (GameProgress_QuestItem_o *)(ulong)(uint)daily;
  local_34 = currentDay;
  if (g_data_057aef30 == '\0') {
    pGStack_50 = (GameProgress_QuestContainer_o *)0x45407e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x45407f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x45407fc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540808;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540814;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540820;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x454082c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540838;
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Item);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540844;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_QuestItem);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540850;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestItem);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x454085c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057aef30 = '\x01';
  }
  if (defaultQuest == (GameProgress_QuestContainer_o *)0x0) {
label_04540dc9:
    pGStack_50 = (GameProgress_QuestContainer_o *)0x4540dce;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    __this_05 = unaff_R12;
    ppMVar16 = (MethodInfo_33E0DF0 **)pGVar9;
  }
  else {
    if ((char)daily == '\0') {
      pSVar2 = (defaultQuest->fields).WeeklyQuestItems;
    }
    else {
      pSVar2 = (defaultQuest->fields).DailyQuestItems;
    }
    if (pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0) goto label_04540dc9;
    local_40 = (_union_249689)(pSVar2->fields)._value;
    pGStack_50 = (GameProgress_QuestContainer_o *)0x45408b0;
    unaff_R13 = (System_Collections_Generic_List_QuestItem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_QuestItem);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x45408c5;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)unaff_R13,MethodInfo_List_1_GameProgress_QuestItem);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x45408d4;
    __this_05.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
    pGStack_50 = (GameProgress_QuestContainer_o *)0x45408e9;
    System_Collections_Generic_HashSet_object____ctor(__this_05.genericMethod,MethodInfo_HashSet_1_System_String);
    if (count < 1) {
      return unaff_R13;
    }
    unaff_R12.genericMethod = __this_05.genericMethod;
    if (local_40.genericMethod == (Il2CppRGCTXData *)0x0) goto label_04540dc9;
    ppMVar16 = &MethodInfo_Boolean_Contains;
    while( true ) {
      unaff_RBX = local_40;
      pGStack_50 = (GameProgress_QuestContainer_o *)0x4540921;
      uVar5 = UnityEngine_Random__Range_4df2410
                        (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
      defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
      pGStack_50 = (GameProgress_QuestContainer_o *)0x4540937;
      pIVar10 = System_Collections_Generic_List_object___get_Item(unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
      pGVar9 = (GameProgress_QuestItem_o *)ppMVar16;
      if (__this_05.genericMethod == (Il2CppRGCTXData *)0x0) break;
      unaff_R12.genericMethod = __this_05.genericMethod;
      if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
      pGStack_50 = (GameProgress_QuestContainer_o *)0x454095c;
      pMVar8 = (MethodInfo *)
               (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
      pGStack_50 = (GameProgress_QuestContainer_o *)0x454096a;
      bVar6 = System_Collections_Generic_HashSet_object___Contains
                        (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
      unaff_RBX = local_40;
      if ((char)bVar6 == '\0') {
label_04540c90:
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540ca5;
        pGVar9 = (GameProgress_QuestItem_o *)il2cpp_runtime_helper_023052d0(TypeInfo_QuestItem);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540cb0;
        GameProgress_QuestItem___ctor(pGVar9,pMVar8);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540cc6;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (local_40.genericMethod,(int32_t)defaultQuest,MethodInfo_QuestItem_get_Item);
        unaff_RBX.genericMethod = __this_05.genericMethod;
        unaff_R12 = (_union_249689)&MethodInfo_Boolean_Contains;
        if (pGVar9 == (GameProgress_QuestItem_o *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540ce5;
        (*(pGVar9->klass->vtable)._9_Copy.methodPtr)(pGVar9,pIVar10,(pGVar9->klass->vtable)._9_Copy.method);
        __this_00 = (pGVar9->fields).DayCreated;
        if (__this_00 == (Settings_IntSetting_o *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540d05;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,local_34,MethodInfo_Void_set_Value)
        ;
        lVar4 = MethodInfo_Void_Add;
        if (unaff_R13 == (System_Collections_Generic_List_QuestItem__o *)0x0) goto label_04540dc9;
        piVar1 = &(unaff_R13->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar3 = (unaff_R13->fields)._items;
        if (pGVar3 == (GameProgress_QuestItem_array *)0x0) goto label_04540dc9;
        uVar5 = (unaff_R13->fields)._size;
        if (uVar5 < (uint)pGVar3->max_length) {
          (unaff_R13->fields)._size = uVar5 + 1;
          pGVar3->m_Items[(int)uVar5] = pGVar9;
          pGStack_50 = (GameProgress_QuestContainer_o *)0x4540d4f;
          il2cpp_runtime_helper_022b4080(pGVar3->m_Items + (int)uVar5,pGVar9);
        }
        else {
          pGStack_50 = (GameProgress_QuestContainer_o *)0x4540d7a;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)unaff_R13,(Il2CppObject *)pGVar9,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540d8d;
        pIVar10 = (Il2CppObject *)
                  (*(pGVar9->klass->vtable)._13_GetQuestName.methodPtr)
                            (pGVar9,(pGVar9->klass->vtable)._13_GetQuestName.method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540da2;
        System_Collections_Generic_HashSet_object___Add(__this_05.genericMethod,pIVar10,MethodInfo_Boolean_Add);
      }
      else {
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540983;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540999;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x45409b5;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x45409c3;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x45409dc;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x45409f2;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540a0e;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540a1c;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540a35;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540a4b;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540a67;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540a75;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540a8e;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540aa4;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540ac0;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540ace;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540ae7;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540afd;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540b19;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540b27;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540b40;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540b56;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540b72;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540b80;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540b99;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540baf;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540bcb;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540bd9;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540bf2;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540c08;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540c24;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540c32;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        unaff_RBX = local_40;
        if ((char)bVar6 == '\0') goto label_04540c90;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540c47;
        uVar5 = UnityEngine_Random__Range_4df2410
                          (0,*(int32_t *)((long)local_40.genericMethod + 0x18),(MethodInfo *)0x0);
        defaultQuest = (GameProgress_QuestContainer_o *)(ulong)uVar5;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540c5d;
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (unaff_RBX.genericMethod,uVar5,MethodInfo_QuestItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540c79;
        pMVar8 = (MethodInfo *)
                 (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10,pIVar10->klass->vtable[0xd].method);
        pGStack_50 = (GameProgress_QuestContainer_o *)0x4540c87;
        bVar6 = System_Collections_Generic_HashSet_object___Contains
                          (__this_05.genericMethod,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Contains);
        if ((char)bVar6 == '\0') goto label_04540c90;
      }
      uVar5 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar5;
      if (uVar5 == 0) {
        return unaff_R13;
      }
    }
    unaff_R12.genericMethod = __this_05.genericMethod;
    if (pIVar10 == (Il2CppObject *)0x0) goto label_04540dc9;
  }
  pMVar8 = pIVar10->klass->vtable[0xd].method;
  pGStack_50 = (GameProgress_QuestContainer_o *)0x4540de1;
  (*pIVar10->klass->vtable[0xd].methodPtr)(pIVar10);
  pGStack_50 = (GameProgress_QuestContainer_o *)0x4540de6;
  il2cpp_runtime_helper_022b2c90();
  _Stack_78 = unaff_RBX;
  _Stack_70 = __this_05;
  pSStack_68 = unaff_R13;
  pGStack_60 = (GameProgress_QuestItem_o *)ppMVar16;
  uStack_58 = uVar17;
  pGStack_50 = defaultQuest;
  if (g_data_057aef33 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillWeapon_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Weapon");
    g_data_057aef33 = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar20 = (Il2CppType *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  if (pMVar8 != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
               (System_Collections_Generic_List_object__o *)pMVar8,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)local_90._0_8_;
    pIVar20 = (Il2CppType *)local_90._8_8_;
    pIVar10 = local_80;
    do {
      do {
        __this_01.fields._8_8_ = pIVar20;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
        __this_01.fields._current = pIVar10;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
        if ((char)bVar6 == '\0') {
          iVar14 = 5;
          goto label_04540f8c;
        }
        if (pIVar10 == (Il2CppObject *)0x0) {
label_04540fb8:
          il2cpp_runtime_helper_022b2c90();
label_04540fbd:
          il2cpp_runtime_helper_022b2c90();
label_04540fc2:
          il2cpp_runtime_helper_022b2c90();
label_04540fc7:
          il2cpp_runtime_helper_022b2ca0();
label_04540fcc:
          il2cpp_runtime_helper_022b2c90();
          goto label_04540fd1;
        }
        if (pIVar10[1].monitor == (System_String_o *)0x0) goto label_04540fbd;
        pSVar11 = System_String__Split(pIVar10[1].monitor,0x3a,0,(MethodInfo *)0x0);
        if (pSVar11 == (System_String_array *)0x0) goto label_04540fc2;
        iVar14 = (int)pSVar11->max_length;
        if (iVar14 == 1) goto label_04540fc7;
        if (iVar14 == 0) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04540fb8;
        }
        key = pSVar11->m_Items[1];
        bVar6 = System_String__op_Equality(pSVar11->m_Items[0],"Weapon",(MethodInfo *)0x0);
      } while ((char)bVar6 == '\0');
      if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_QuestHandler + 0xb8) ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04540fcc;
      iVar7 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                         **(undefined8 **)(TypeInfo_QuestHandler + 0xb8),(Il2CppObject *)key,MethodInfo_KillWeapon_get_Item);
    } while (iVar7 == extraout_EDX);
    iVar14 = 4;
label_04540f8c:
    __this_02.fields._8_8_ = pIVar20;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_02.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    uVar12 = extraout_RAX;
label_04540f9e:
    return (System_Collections_Generic_List_QuestItem__o *)CONCAT71((int7)((ulong)uVar12 >> 8),iVar14 != 4);
  }
label_04540fd1:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  uVar15 = auVar18._0_8_;
  if (auVar18._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar15);
    lVar4 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar20;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    uVar15 = 0;
    iVar14 = 0;
    uVar12 = extraout_RAX_00;
    if (lVar4 == 0) goto label_04540f9e;
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar20;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  _Unwind_Resume(uVar15);
}


// GameProgress.QuestHandler$$CacheActiveQuests
// il2cpp: void GameProgress_QuestHandler__CacheActiveQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x45400b0

void GameProgress_QuestHandler__CacheActiveQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  long *plVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  GameProgress_QuestItem_o *item;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (g_data_057aef31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057aef31 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  item = (GameProgress_QuestItem_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045402dd;
  System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
  pGVar1 = (__this->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).DailyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar11 = (Il2CppType *)auStack_48._8_8_;
  item = pGStack_38;
  while (__this_01.fields._8_8_ = pIVar11,
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
        __this_01.fields._current = (Il2CppObject *)item,
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar7 != '\0') {
    if (item == (GameProgress_QuestItem_o *)0x0) {
label_045402c4:
      il2cpp_runtime_helper_022b2c90();
label_045402c9:
      il2cpp_runtime_helper_022b2c90();
      goto label_045402ce;
    }
    pSVar4 = (item->fields).Progress;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_045402c9;
    pSVar5 = (item->fields).Amount;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_045402c4;
    }
    if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
      GameProgress_QuestHandler__AddActiveQuest(__this,item,method_00);
    }
  }
  __this_02.fields._8_8_ = pIVar11;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_02.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  pGVar1 = (__this->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).WeeklyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar11 = (Il2CppType *)auStack_48._8_8_;
  item = pGStack_38;
  while( true ) {
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_03.fields._current = (Il2CppObject *)item;
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar7 == '\0') {
      __this_04.fields._8_8_ = pIVar11;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
      __this_04.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
    if (item == (GameProgress_QuestItem_o *)0x0) break;
    pSVar4 = (item->fields).Progress;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_045402d8;
    pSVar5 = (item->fields).Amount;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402ce;
    if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
      GameProgress_QuestHandler__AddActiveQuest(__this,item,method_01);
    }
  }
label_045402d3:
  il2cpp_runtime_helper_022b2c90();
label_045402d8:
  il2cpp_runtime_helper_022b2c90();
label_045402dd:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar6 = *plVar8;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar11;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_05.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_06.fields._8_8_ = pIVar11;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_06.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar9._0_8_);
label_045402ce:
  il2cpp_runtime_helper_022b2c90();
  goto label_045402d3;
}


// GameProgress.QuestHandler$$AddActiveQuest
// il2cpp: void GameProgress_QuestHandler__AddActiveQuest (GameProgress_QuestHandler_o* __this, GameProgress_QuestItem_o* item, const MethodInfo* method);
// 0x453a1d0

void GameProgress_QuestHandler__AddActiveQuest
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestItem_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *key;
  System_Object_array *pSVar5;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  Il2CppObject *__this_00;
  
  if (g_data_057aef32 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_QuestItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aef32 = '\x01';
  }
  if (((item != (GameProgress_QuestItem_o *)0x0) &&
      (pSVar3 = (item->fields).Category, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests,
     pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    key = (pSVar3->fields)._value;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_QuestItem);
      System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_GameProgress_QuestItem);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0453a350;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar4,(Il2CppObject *)key,(Il2CppObject *)pSVar8,MethodInfo_Void_Add);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar8 = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar4,(Il2CppObject *)key,MethodInfo_List_1_GameProgress_QuestItem_get_Item);
      lVar6 = MethodInfo_Void_Add;
      if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar8->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,item);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar8,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
label_0453a350:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeefa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeefa = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// GameProgress.QuestHandler$$CheckKillConditions
// il2cpp: bool GameProgress_QuestHandler__CheckKillConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, const MethodInfo* method);
// 0x4540df0

bool_conflict
GameProgress_QuestHandler__CheckKillConditions
          (GameProgress_QuestHandler_o *__this,System_Collections_Generic_List_StringSetting__o *conditions,
          int32_t weapon,MethodInfo *method)

{
  System_String_o *key;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  int32_t iVar3;
  System_String_array *pSVar4;
  undefined8 extraout_RAX;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_RAX_00;
  int iVar7;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  undefined8 uVar8;
  
  if (g_data_057aef33 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillWeapon_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Weapon");
    g_data_057aef33 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  if (conditions != (System_Collections_Generic_List_StringSetting__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)conditions,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar11 = (Il2CppType *)auStack_48._8_8_;
    pIVar12 = pIStack_38;
    do {
      do {
        __this_00.fields._8_8_ = pIVar11;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
        __this_00.fields._current = pIVar12;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') {
          iVar7 = 5;
          goto label_04540f8c;
        }
        if (pIVar12 == (Il2CppObject *)0x0) {
label_04540fb8:
          il2cpp_runtime_helper_022b2c90();
label_04540fbd:
          il2cpp_runtime_helper_022b2c90();
label_04540fc2:
          il2cpp_runtime_helper_022b2c90();
label_04540fc7:
          il2cpp_runtime_helper_022b2ca0();
label_04540fcc:
          il2cpp_runtime_helper_022b2c90();
          goto label_04540fd1;
        }
        if (pIVar12[1].monitor == (System_String_o *)0x0) goto label_04540fbd;
        pSVar4 = System_String__Split(pIVar12[1].monitor,0x3a,0,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_array *)0x0) goto label_04540fc2;
        iVar7 = (int)pSVar4->max_length;
        if (iVar7 == 1) goto label_04540fc7;
        if (iVar7 == 0) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04540fb8;
        }
        key = pSVar4->m_Items[1];
        bVar2 = System_String__op_Equality(pSVar4->m_Items[0],"Weapon",(MethodInfo *)0x0);
      } while ((char)bVar2 == '\0');
      if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_QuestHandler + 0xb8) ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04540fcc;
      iVar3 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                         **(undefined8 **)(TypeInfo_QuestHandler + 0xb8),(Il2CppObject *)key,MethodInfo_KillWeapon_get_Item);
    } while (iVar3 == weapon);
    iVar7 = 4;
label_04540f8c:
    __this_01.fields._8_8_ = pIVar11;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_01.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    uVar5 = extraout_RAX;
label_04540f9e:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),iVar7 != 4);
  }
label_04540fd1:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar9._0_8_;
  if (auVar9._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(uVar8);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_02.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    uVar8 = 0;
    iVar7 = 0;
    uVar5 = extraout_RAX_00;
    if (lVar1 == 0) goto label_04540f9e;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar11;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_03.fields._current = pIVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(uVar8);
}


// GameProgress.QuestHandler$$CheckDamageConditions
// il2cpp: bool GameProgress_QuestHandler__CheckDamageConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, int32_t damage, const MethodInfo* method);
// 0x45410c0

bool_conflict
GameProgress_QuestHandler__CheckDamageConditions
          (GameProgress_QuestHandler_o *__this,System_Collections_Generic_List_StringSetting__o *conditions,
          int32_t weapon,int32_t damage,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *s;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar2;
  int32_t iVar3;
  System_String_array *pSVar4;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar5;
  undefined8 extraout_RAX_01;
  long *plVar6;
  undefined8 extraout_RAX_02;
  int iVar7;
  long lVar8;
  System_Collections_Generic_List_object__o *__this_08;
  Il2CppRGCTXData *unaff_R12;
  _union_249689 unaff_R14;
  undefined8 *unaff_R15;
  float fVar9;
  undefined1 auVar10 [12];
  undefined1 in_stack_ffffffffffffff20 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o SStack_b8;
  Il2CppType **ppIStack_a0;
  Il2CppRGCTXData *pIStack_98;
  _union_249689 _Stack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (g_data_057aef34 == '\0') {
    lStack_80._0_2_ = 0x10ee;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillWeapon_get_Item);
    lStack_80._0_2_ = 0x10fa;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    lStack_80._0_2_ = 0x1106;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    lStack_80._0_2_ = 0x1112;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    lStack_80._0_2_ = 0x111e;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    lStack_80._0_2_ = 0x112a;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    lStack_80._0_2_ = 0x1136;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    lStack_80._0_2_ = 0x1142;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&"Weapon");
    lStack_80._0_2_ = 0x114e;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&"Damage");
    g_data_057aef34 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  if (conditions != (System_Collections_Generic_List_StringSetting__o *)0x0) {
    lStack_80._0_2_ = 0x1186;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)conditions,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    unaff_R12 = (Il2CppRGCTXData *)&stack0xffffffffffffff98;
    unaff_R14.genericMethod = &"Weapon";
    unaff_R15 = &"Damage";
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
    do {
      do {
        lStack_80._0_2_ = 0x11cc;
        lStack_80._2_1_ = 'T';
        lStack_80._3_1_ = '\x04';
        lStack_80._4_4_ = 0;
        __this_04.fields._index = damage;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_04.fields._version = weapon;
        __this_04.fields._current = (Il2CppObject *)pSVar12;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_04,(MethodInfo_321A1D0 *)unaff_R12);
        if ((char)bVar2 == '\0') {
          iVar7 = 6;
          goto label_045412b5;
        }
        if (SStack_48.fields._current == (Il2CppObject *)0x0) {
label_045412ed:
          lStack_80._0_2_ = 0x12f2;
          lStack_80._2_1_ = 'T';
          lStack_80._3_1_ = '\x04';
          lStack_80._4_4_ = 0;
          il2cpp_runtime_helper_022b2c90();
label_045412f2:
          lStack_80._0_2_ = 0x12f7;
          lStack_80._2_1_ = 'T';
          lStack_80._3_1_ = '\x04';
          lStack_80._4_4_ = 0;
          il2cpp_runtime_helper_022b2c90();
label_045412f7:
          lStack_80._0_2_ = 0x12fc;
          lStack_80._2_1_ = 'T';
          lStack_80._3_1_ = '\x04';
          lStack_80._4_4_ = 0;
          il2cpp_runtime_helper_022b2c90();
          goto label_045412fc;
        }
        if (SStack_48.fields._current[1].monitor == (System_String_o *)0x0) goto label_045412f2;
        lStack_80._0_2_ = 0x11fd;
        lStack_80._2_1_ = 'T';
        lStack_80._3_1_ = '\x04';
        lStack_80._4_4_ = 0;
        pSVar4 = System_String__Split(SStack_48.fields._current[1].monitor,0x3a,0,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_array *)0x0) {
          lStack_80._0_2_ = 0x12e3;
          lStack_80._2_1_ = 'T';
          lStack_80._3_1_ = '\x04';
          lStack_80._4_4_ = 0;
          il2cpp_runtime_helper_022b2c90();
label_045412e3:
          lStack_80._0_2_ = 0x12e8;
          lStack_80._2_1_ = 'T';
          lStack_80._3_1_ = '\x04';
          lStack_80._4_4_ = 0;
          il2cpp_runtime_helper_022b2ca0();
label_045412e8:
          lStack_80._0_2_ = 0x12ed;
          lStack_80._2_1_ = 'T';
          lStack_80._3_1_ = '\x04';
          lStack_80._4_4_ = 0;
          il2cpp_runtime_helper_022b2ca0();
          goto label_045412ed;
        }
        iVar7 = (int)pSVar4->max_length;
        if (iVar7 == 0) goto label_045412e3;
        if (iVar7 == 1) goto label_045412e8;
        pSVar1 = pSVar4->m_Items[0];
        s = pSVar4->m_Items[1];
        lStack_80._0_2_ = 0x122f;
        lStack_80._2_1_ = 'T';
        lStack_80._3_1_ = '\x04';
        lStack_80._4_4_ = 0;
        bVar2 = System_String__op_Equality(pSVar1,"Weapon",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
            lStack_80._0_2_ = 0x124b;
            lStack_80._2_1_ = 'T';
            lStack_80._3_1_ = '\x04';
            lStack_80._4_4_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_QuestHandler + 0xb8)
              == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_045412f7;
          lStack_80._0_2_ = 0x127a;
          lStack_80._2_1_ = 'T';
          lStack_80._3_1_ = '\x04';
          lStack_80._4_4_ = 0;
          iVar3 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             **(undefined8 **)(TypeInfo_QuestHandler + 0xb8),(Il2CppObject *)s,MethodInfo_KillWeapon_get_Item);
          if (iVar3 == weapon) goto label_04541280;
          goto label_045412a9;
        }
label_04541280:
        lStack_80._0_2_ = 0x128d;
        lStack_80._2_1_ = 'T';
        lStack_80._3_1_ = '\x04';
        lStack_80._4_4_ = 0;
        bVar2 = System_String__op_Equality(pSVar1,"Damage",(MethodInfo *)0x0);
      } while ((char)bVar2 == '\0');
      lStack_80._0_2_ = 0x129f;
      lStack_80._2_1_ = 'T';
      lStack_80._3_1_ = '\x04';
      lStack_80._4_4_ = 0;
      iVar3 = System_Int32__Parse(s,(MethodInfo *)0x0);
    } while (iVar3 <= damage);
label_045412a9:
    iVar7 = 5;
label_045412b5:
    lStack_80._0_2_ = 0x12c9;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    __this_05.fields._index = damage;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_05.fields._version = weapon;
    __this_05.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    uVar5 = extraout_RAX;
label_045412c9:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),iVar7 != 5);
  }
label_045412fc:
  lStack_80._0_2_ = 0x1301;
  lStack_80._2_1_ = 'T';
  lStack_80._3_1_ = '\x04';
  lStack_80._4_4_ = 0;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  ppIStack_a0 = auVar10._0_8_;
  if (auVar10._8_4_ == 1) {
    lStack_80._0_2_ = 0x138b;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    plVar6 = (long *)__cxa_begin_catch(ppIStack_a0);
    lVar8 = *plVar6;
    lStack_80._0_2_ = 0x1393;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    __cxa_end_catch();
    lStack_80._0_2_ = 0x13a7;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    __this_06.fields._index = damage;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_06.fields._version = weapon;
    __this_06.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    iVar7 = 0;
    uVar5 = extraout_RAX_00;
    if (lVar8 == 0) goto label_045412c9;
    lStack_80._0_2_ = 0x13ba;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    ppIStack_a0 = (Il2CppType **)il2cpp_runtime_helper_022fefe0(lVar8);
  }
  else {
    lVar8 = 0;
  }
  lStack_80._0_2_ = 0x13d1;
  lStack_80._2_1_ = 'T';
  lStack_80._3_1_ = '\x04';
  lStack_80._4_4_ = 0;
  __this_07.fields._index = damage;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_07.fields._version = weapon;
  __this_07.fields._current = (Il2CppObject *)pSVar12;
  __this_08 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  if (lVar8 == 0) {
    lStack_80._0_2_ = 0x13de;
    lStack_80._2_1_ = 'T';
    lStack_80._3_1_ = '\x04';
    lStack_80._4_4_ = 0;
    _Unwind_Resume(ppIStack_a0);
  }
  lStack_80._0_2_ = 0x13e6;
  lStack_80._2_1_ = 'T';
  lStack_80._3_1_ = '\x04';
  lStack_80._4_4_ = 0;
  uVar5 = il2cpp_runtime_helper_022fefe0(lVar8);
  lStack_80._0_2_ = 0x13ee;
  lStack_80._2_1_ = 'T';
  lStack_80._3_1_ = '\x04';
  lStack_80._4_4_ = 0;
  fVar9 = (float)il2cpp_runtime_helper_01f66400(uVar5);
  pIStack_98 = unaff_R12;
  _Stack_90 = unaff_R14;
  puStack_88 = unaff_R15;
  lStack_80 = lVar8;
  if (g_data_057aef35 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Speed");
    g_data_057aef35 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator(&SStack_b8,__this_08,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    pSVar11 = SStack_b8.fields._list;
    do {
      __this_00.fields._version = (int32_t)fVar9;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff20._8_4_;
      __this_00.fields._current = (Il2CppObject *)pSVar11;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30);
      if ((char)bVar2 == '\0') {
        iVar7 = 5;
        goto label_04541544;
      }
      if ((Il2CppType *)SStack_b8.fields._current == (Il2CppType *)0x0) {
label_04541570:
        il2cpp_runtime_helper_022b2c90();
label_04541575:
        il2cpp_runtime_helper_022b2c90();
label_0454157a:
        il2cpp_runtime_helper_022b2c90();
label_0454157f:
        il2cpp_runtime_helper_022b2ca0();
        goto label_04541584;
      }
      if (*(System_String_o **)&((Il2CppType *)(SStack_b8.fields._current + 1))->bits ==
          (System_String_o *)0x0) goto label_04541575;
      pSVar4 = System_String__Split
                         (*(System_String_o **)&((Il2CppType *)(SStack_b8.fields._current + 1))->bits,0x3a,0,
                          (MethodInfo *)0x0);
      if (pSVar4 == (System_String_array *)0x0) goto label_0454157a;
      iVar7 = (int)pSVar4->max_length;
      if (iVar7 == 1) goto label_0454157f;
      if (iVar7 == 0) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_04541570;
      }
      pSVar1 = pSVar4->m_Items[1];
      bVar2 = System_String__op_Equality(pSVar4->m_Items[0],"Speed",(MethodInfo *)0x0);
    } while (((char)bVar2 == '\0') ||
            (iVar3 = System_Int32__Parse(pSVar1,(MethodInfo *)0x0), (float)iVar3 <= fVar9));
    iVar7 = 4;
label_04541544:
    __this_01.fields._version = (int32_t)fVar9;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff20._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
    uVar5 = extraout_RAX_01;
label_04541558:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),iVar7 != 4);
  }
label_04541584:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar8 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)fVar9;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff20._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
    iVar7 = 0;
    uVar5 = extraout_RAX_02;
    if (lVar8 == 0) goto label_04541558;
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_03.fields._version = (int32_t)fVar9;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff20._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
  _Unwind_Resume(auVar10._0_8_);
}


// GameProgress.QuestHandler$$CheckSpeedConditions
// il2cpp: bool GameProgress_QuestHandler__CheckSpeedConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, float speed, const MethodInfo* method);
// 0x45413f0

bool_conflict
GameProgress_QuestHandler__CheckSpeedConditions
          (GameProgress_QuestHandler_o *__this,System_Collections_Generic_List_StringSetting__o *conditions,
          float speed,MethodInfo *method)

{
  System_String_o *s;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  int32_t iVar3;
  System_String_array *pSVar4;
  undefined8 extraout_RAX;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_RAX_00;
  int iVar7;
  undefined1 auVar8 [12];
  undefined1 in_stack_ffffffffffffff98 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o SStack_40;
  
  if (g_data_057aef35 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Speed");
    g_data_057aef35 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  if (conditions != (System_Collections_Generic_List_StringSetting__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_40,(System_Collections_Generic_List_object__o *)conditions,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    pSVar9 = SStack_40.fields._list;
    do {
      __this_00.fields._version = (int32_t)speed;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff98._8_4_;
      __this_00.fields._current = (Il2CppObject *)pSVar9;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') {
        iVar7 = 5;
        goto label_04541544;
      }
      if ((Il2CppType *)SStack_40.fields._current == (Il2CppType *)0x0) {
label_04541570:
        il2cpp_runtime_helper_022b2c90();
label_04541575:
        il2cpp_runtime_helper_022b2c90();
label_0454157a:
        il2cpp_runtime_helper_022b2c90();
label_0454157f:
        il2cpp_runtime_helper_022b2ca0();
        goto label_04541584;
      }
      if (*(System_String_o **)&((Il2CppType *)(SStack_40.fields._current + 1))->bits ==
          (System_String_o *)0x0) goto label_04541575;
      pSVar4 = System_String__Split
                         (*(System_String_o **)&((Il2CppType *)(SStack_40.fields._current + 1))->bits,0x3a,0,
                          (MethodInfo *)0x0);
      if (pSVar4 == (System_String_array *)0x0) goto label_0454157a;
      iVar7 = (int)pSVar4->max_length;
      if (iVar7 == 1) goto label_0454157f;
      if (iVar7 == 0) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_04541570;
      }
      s = pSVar4->m_Items[1];
      bVar2 = System_String__op_Equality(pSVar4->m_Items[0],"Speed",(MethodInfo *)0x0);
    } while (((char)bVar2 == '\0') ||
            (iVar3 = System_Int32__Parse(s,(MethodInfo *)0x0), (float)iVar3 <= speed));
    iVar7 = 4;
label_04541544:
    __this_01.fields._version = (int32_t)speed;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff98._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    uVar5 = extraout_RAX;
label_04541558:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),iVar7 != 4);
  }
label_04541584:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)speed;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff98._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    iVar7 = 0;
    uVar5 = extraout_RAX_00;
    if (lVar1 == 0) goto label_04541558;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._version = (int32_t)speed;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff98._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar8._0_8_);
}


// GameProgress.QuestHandler$$RegisterTitanKill
// il2cpp: void GameProgress_QuestHandler__RegisterTitanKill (GameProgress_QuestHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x4541660

void GameProgress_QuestHandler__RegisterTitanKill(void)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *method;
  long *in_RDI;
  System_String_o *unaff_R13;
  ulong uVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  GameProgress_QuestItem_o *__this_03;
  GameProgress_QuestItem_o *pGVar7;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (g_data_057aef36 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"KillTitan");
    g_data_057aef36 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  __this_03 = (GameProgress_QuestItem_o *)0x0;
  lVar1 = in_RDI[4];
  if (lVar1 == 0) {
label_045418df:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)*(ulong *)(lVar1 + 0x18) < 1) {
      return;
    }
    uVar4 = 0;
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      do {
        if ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045418df;
        unaff_R13 = *(System_String_o **)(lVar1 + 0x20 + uVar4 * 8);
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                           (Il2CppObject *)unaff_R13,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          if (((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
               (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_02 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                                     (Il2CppObject *)unaff_R13,MethodInfo_List_1_GameProgress_QuestItem_get_Item),
             __this_02 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045418df;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_02,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
          pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
          pIVar6 = (Il2CppType *)auStack_48._8_8_;
          pGVar7 = pGStack_38;
          while (__this_03 = pGVar7, __this_00.fields._8_8_ = pIVar6,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar5,
                __this_00.fields._current = (Il2CppObject *)__this_03,
                bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                (char)bVar3 != '\0') {
            if (__this_03 == (GameProgress_QuestItem_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_045418df;
            }
            if ((__this_03->fields).Conditions == (Settings_ListSetting_StringSetting__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_045418df;
            }
            pGVar7 = __this_03;
            cVar2 = (**(code **)(*in_RDI + 0x1c8))();
            if ((cVar2 != '\0') &&
               (bVar3 = System_String__op_Equality(unaff_R13,"KillTitan",(MethodInfo *)0x0),
               (char)bVar3 != '\0')) {
              GameProgress_QuestItem__AddProgress(__this_03,1,method);
            }
          }
          __this.fields._8_8_ = pIVar6;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          __this.fields._current = (Il2CppObject *)__this_03;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return;
        }
      } while (uVar4 < *(uint *)(lVar1 + 0x18));
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_01.fields._8_8_ = pIVar6;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
  __this_01.fields._current = (Il2CppObject *)__this_03;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(unaff_R13);
}


// GameProgress.QuestHandler$$RegisterHumanKill
// il2cpp: void GameProgress_QuestHandler__RegisterHumanKill (GameProgress_QuestHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x45419e0

void GameProgress_QuestHandler__RegisterHumanKill(void)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *method;
  long *in_RDI;
  System_String_o *unaff_R13;
  ulong uVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  GameProgress_QuestItem_o *__this_03;
  GameProgress_QuestItem_o *pGVar7;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (g_data_057aef37 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"KillHuman");
    g_data_057aef37 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  __this_03 = (GameProgress_QuestItem_o *)0x0;
  lVar1 = in_RDI[5];
  if (lVar1 == 0) {
label_04541c5f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)*(ulong *)(lVar1 + 0x18) < 1) {
      return;
    }
    uVar4 = 0;
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      do {
        if ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04541c5f;
        unaff_R13 = *(System_String_o **)(lVar1 + 0x20 + uVar4 * 8);
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                           (Il2CppObject *)unaff_R13,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          if (((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
               (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_02 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                                     (Il2CppObject *)unaff_R13,MethodInfo_List_1_GameProgress_QuestItem_get_Item),
             __this_02 == (System_Collections_Generic_List_object__o *)0x0)) goto label_04541c5f;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_02,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
          pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
          pIVar6 = (Il2CppType *)auStack_48._8_8_;
          pGVar7 = pGStack_38;
          while (__this_03 = pGVar7, __this_00.fields._8_8_ = pIVar6,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar5,
                __this_00.fields._current = (Il2CppObject *)__this_03,
                bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                (char)bVar3 != '\0') {
            if (__this_03 == (GameProgress_QuestItem_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04541c5f;
            }
            if ((__this_03->fields).Conditions == (Settings_ListSetting_StringSetting__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04541c5f;
            }
            pGVar7 = __this_03;
            cVar2 = (**(code **)(*in_RDI + 0x1c8))();
            if ((cVar2 != '\0') &&
               (bVar3 = System_String__op_Equality(unaff_R13,"KillHuman",(MethodInfo *)0x0),
               (char)bVar3 != '\0')) {
              GameProgress_QuestItem__AddProgress(__this_03,1,method);
            }
          }
          __this.fields._8_8_ = pIVar6;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          __this.fields._current = (Il2CppObject *)__this_03;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return;
        }
      } while (uVar4 < *(uint *)(lVar1 + 0x18));
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_01.fields._8_8_ = pIVar6;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
  __this_01.fields._current = (Il2CppObject *)__this_03;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(unaff_R13);
}


// GameProgress.QuestHandler$$RegisterDamage
// il2cpp: void GameProgress_QuestHandler__RegisterDamage (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x4541ca0

void GameProgress_QuestHandler__RegisterDamage(void)

{
  long lVar1;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *method;
  MethodInfo *method_00;
  long *in_RDI;
  int32_t in_R8D;
  ulong uVar4;
  GameProgress_QuestItem_o *unaff_R15;
  GameProgress_QuestItem_o *pGVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  GameProgress_QuestItem_o *pGVar8;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (g_data_057aef38 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"DealDamage");
    il2cpp_runtime_helper_023445d0(&"HitDamage");
    g_data_057aef38 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pGVar8 = (GameProgress_QuestItem_o *)0x0;
  lVar1 = in_RDI[6];
  if (lVar1 == 0) {
label_04541f86:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)*(ulong *)(lVar1 + 0x18) < 1) {
      return;
    }
    uVar4 = 0;
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      do {
        if ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04541f86;
        a = *(System_String_o **)(lVar1 + 0x20 + uVar4 * 8);
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                           (Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
        pGVar5 = unaff_R15;
        if ((char)bVar3 != '\0') {
          if (((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
               (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_02 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                                     (Il2CppObject *)a,MethodInfo_List_1_GameProgress_QuestItem_get_Item),
             __this_02 == (System_Collections_Generic_List_object__o *)0x0)) goto label_04541f86;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_02,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
          pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
          pIVar7 = (Il2CppType *)auStack_48._8_8_;
          pGVar8 = pGStack_38;
          while (unaff_R15 = pGVar8, __this_00.fields._8_8_ = pIVar7,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
                __this_00.fields._current = (Il2CppObject *)unaff_R15,
                bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                (char)bVar3 != '\0') {
            pGVar8 = unaff_R15;
            if (unaff_R15 == (GameProgress_QuestItem_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04541f86;
            }
            if ((unaff_R15->fields).Conditions == (Settings_ListSetting_StringSetting__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04541f86;
            }
            cVar2 = (**(code **)(*in_RDI + 0x1d8))();
            pGVar5 = unaff_R15;
            if (cVar2 != '\0') {
              bVar3 = System_String__op_Equality(a,"HitDamage",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
                bVar3 = System_String__op_Equality(a,"DealDamage",(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  GameProgress_QuestItem__AddProgress(unaff_R15,in_R8D,method_00);
                }
              }
              else {
                GameProgress_QuestItem__AddProgress(unaff_R15,1,method);
              }
            }
          }
          __this.fields._8_8_ = pIVar7;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
          __this.fields._current = (Il2CppObject *)unaff_R15;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          pGVar8 = unaff_R15;
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return;
        }
        unaff_R15 = pGVar5;
      } while (uVar4 < *(uint *)(lVar1 + 0x18));
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_01.fields._8_8_ = pIVar7;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_01.fields._current = (Il2CppObject *)pGVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(unaff_R15);
}


// GameProgress.QuestHandler$$RegisterSpeed
// il2cpp: void GameProgress_QuestHandler__RegisterSpeed (GameProgress_QuestHandler_o* __this, float speed, const MethodInfo* method);
// 0x4541fd0

void GameProgress_QuestHandler__RegisterSpeed
               (GameProgress_QuestHandler_o *__this,float speed,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  Il2CppObject *__this_03;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_04;
  MethodInfo *method_00;
  ulong uVar7;
  System_String_o *unaff_R12;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (g_data_057aef39 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"ReachSpeed");
    g_data_057aef39 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSVar2 = (__this->fields).SpeedCategories;
  if (pSVar2 == (System_String_array *)0x0) {
label_0454225c:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)pSVar2->max_length < 1) {
      return;
    }
    uVar7 = 0;
    if ((pSVar2->max_length & 0xffffffff) != 0) {
      do {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0454225c;
        unaff_R12 = pSVar2->m_Items[uVar7];
        bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar6 != '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
          if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_04 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_List_1_GameProgress_QuestItem_get_Item),
             __this_04 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0454225c;
          System_Collections_Generic_List_object___GetEnumerator(&SStack_48,__this_04,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
          __this_03 = SStack_48.fields._current;
          pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_01.fields._version = (int32_t)speed,
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
                __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
                __this_01.fields._current = (Il2CppObject *)pSVar8,
                bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                (char)bVar6 != '\0') {
            if ((GameProgress_QuestItem_o *)__this_03 == (GameProgress_QuestItem_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0454225c;
            }
            pSVar4 = ((GameProgress_QuestItem_Fields *)((long)__this_03 + 0x10))->Conditions;
            if (pSVar4 == (Settings_ListSetting_StringSetting__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0454225c;
            }
            cVar5 = (*(__this->klass->vtable)._11_CheckSpeedConditions.methodPtr)
                              (speed,__this,(pSVar4->fields)._value,
                               (__this->klass->vtable)._11_CheckSpeedConditions.method);
            if ((cVar5 != '\0') &&
               (bVar6 = System_String__op_Equality(unaff_R12,"ReachSpeed",(MethodInfo *)0x0),
               (char)bVar6 != '\0')) {
              GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_03,1,method_00);
            }
          }
          __this_00.fields._version = (int32_t)speed;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_00.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_00.fields._current = (Il2CppObject *)pSVar8;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        }
        uVar7 = uVar7 + 1;
        uVar1 = (uint)pSVar2->max_length;
        if ((long)(int)uVar1 <= (long)uVar7) {
          return;
        }
      } while (uVar7 < uVar1);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_02.fields._version = (int32_t)speed;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_02.fields._current = (Il2CppObject *)pSVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(unaff_R12);
}


// GameProgress.QuestHandler$$RegisterInteraction
// il2cpp: void GameProgress_QuestHandler__RegisterInteraction (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x45422a0

void GameProgress_QuestHandler__RegisterInteraction
               (GameProgress_QuestHandler_o *__this,UnityEngine_GameObject_o *interact,int32_t interactionType
               ,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  Il2CppObject *__this_03;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this_04;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uVar5;
  System_String_o *unaff_R13;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (g_data_057aef3a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey,interact,CONCAT44(in_register_00000014,interactionType));
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&"CarryHuman");
    il2cpp_runtime_helper_023445d0(&"ShareGas");
    g_data_057aef3a = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSVar2 = (__this->fields).InteractionCategories;
  if (pSVar2 == (System_String_array *)0x0) {
label_04542549:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)pSVar2->max_length < 1) {
      return;
    }
    uVar5 = 0;
    if ((pSVar2->max_length & 0xffffffff) != 0) {
      do {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04542549;
        unaff_R13 = pSVar2->m_Items[uVar5];
        bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar4 != '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
          if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_04 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_List_1_GameProgress_QuestItem_get_Item),
             __this_04 == (System_Collections_Generic_List_object__o *)0x0)) goto label_04542549;
          System_Collections_Generic_List_object___GetEnumerator(&SStack_48,__this_04,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
          __this_03 = SStack_48.fields._current;
          pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_01.fields._8_8_ = __this,
                __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
                __this_01.fields._current = (Il2CppObject *)pSVar6,
                bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                (char)bVar4 != '\0') {
            bVar4 = System_String__op_Equality(unaff_R13,"ShareGas",(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              bVar4 = System_String__op_Equality(unaff_R13,"CarryHuman",(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if ((GameProgress_QuestItem_o *)__this_03 == (GameProgress_QuestItem_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_04542549;
                }
                GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_03,1,method_01);
              }
            }
            else {
              if ((GameProgress_QuestItem_o *)__this_03 == (GameProgress_QuestItem_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04542549;
              }
              GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_03,1,method_00);
            }
          }
          __this_00.fields._8_8_ = __this;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
          __this_00.fields._current = (Il2CppObject *)pSVar6;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar2->max_length;
        if ((long)(int)uVar1 <= (long)uVar5) {
          return;
        }
      } while (uVar5 < uVar1);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_02.fields._8_8_ = __this;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_02.fields._current = (Il2CppObject *)pSVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(unaff_R13);
}


// GameProgress.QuestHandler$$.cctor
// il2cpp: void GameProgress_QuestHandler___cctor (const MethodInfo* method);
// 0x4542590

void GameProgress_QuestHandler___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__T__o *pSVar1;
  
  if (g_data_057aef3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_GameProgress_KillWeapon_EnumT);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057aef3b = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = Utility_Util__EnumToDict_Int32Enum_(MethodInfo_Dictionary_2_System_String_GameProgress_KillWeapon_EnumT);
  **(undefined8 **)(TypeInfo_QuestHandler + 0xb8) = pSVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_QuestHandler + 0xb8),pSVar1);
  return;
}


