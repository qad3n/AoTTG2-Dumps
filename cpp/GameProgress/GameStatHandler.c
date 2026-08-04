// Type: GameProgress.GameStatHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameStatHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatHandler.cs
// --------------------------------

// GameProgress.GameStatHandler$$.ctor
// il2cpp: void GameProgress_GameStatHandler___ctor (GameProgress_GameStatHandler_o* __this, GameProgress_GameStatContainer_o* gameStat, const MethodInfo* method);
// 0x453dea0

void GameProgress_GameStatHandler___ctor
               (GameProgress_GameStatHandler_o *__this,GameProgress_GameStatContainer_o *gameStat,
               MethodInfo *method)

{
  GameProgress_GameStatHandler_Fields *pGVar1;
  int32_t *piVar2;
  uint uVar3;
  System_Collections_Generic_List_int__o *__this_00;
  System_Int32_array *pSVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  GameProgress_QuestContainer_o *pGVar5;
  Settings_ListSetting_QuestItem__o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  GameProgress_QuestItem_o *pGVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_IntSetting_o *pSVar10;
  long lVar11;
  int32_t iVar12;
  bool_conflict bVar13;
  System_Collections_Generic_List_int__o *__this_02;
  long *plVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar15;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 *puVar16;
  undefined8 **ppuVar17;
  int index;
  uint item;
  Il2CppClass *method_02;
  GameProgress_AchievementHandler_o *pGVar18;
  GameProgress_AchievementHandler_o *__this_03;
  GameProgress_AchievementHandler_o *__this_04;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  GameProgress_GameStatHandler_o *pGVar19;
  float fVar20;
  undefined1 auVar21 [12];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  GameProgress_GameStatHandler_o *pGStack_40;
  undefined8 *puStack_38;
  System_Collections_Generic_List_int__o *pSStack_30;
  
  if (g_data_057aef24 == '\0') {
    pSStack_30 = (System_Collections_Generic_List_int__o *)0x453dec3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_30 = (System_Collections_Generic_List_int__o *)0x453decf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    pSStack_30 = (System_Collections_Generic_List_int__o *)0x453dedb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    pSStack_30 = (System_Collections_Generic_List_int__o *)0x453dee7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057aef24 = '\x01';
  }
  pSStack_30 = (System_Collections_Generic_List_int__o *)0x453defd;
  __this_02 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  pSStack_30 = (System_Collections_Generic_List_int__o *)0x453df12;
  System_Collections_Generic_List_int____ctor(__this_02,MethodInfo_List_1_System_Int32);
  pGVar1 = &__this->fields;
  (__this->fields)._expPerLevel = __this_02;
  pSStack_30 = (System_Collections_Generic_List_int__o *)0x453df25;
  il2cpp_runtime_helper_022b4080(pGVar1);
  pSStack_30 = (System_Collections_Generic_List_int__o *)0x453df2f;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._gameStat = gameStat;
  pSStack_30 = (System_Collections_Generic_List_int__o *)0x453df3f;
  method_02 = (Il2CppClass *)gameStat;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._gameStat);
  lVar11 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._expPerLevel;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    __this = (GameProgress_GameStatHandler_o *)&MethodInfo_Void_Add;
    piVar2 = &(__this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Int32_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pSVar4->m_Items[(int)uVar3] = 500;
      }
      else {
        method_02 = (Il2CppClass *)0x1f4;
        pSStack_30 = (System_Collections_Generic_List_int__o *)0x453df99;
        System_Collections_Generic_List_int___AddWithResize
                  (__this_00,500,*(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      gameStat = (GameProgress_GameStatContainer_o *)0x0;
      unaff_R12 = &MethodInfo_Int32_get_Item;
      while (__this_02 = pGVar1->_expPerLevel, __this_02 != (System_Collections_Generic_List_int__o *)0x0) {
        index = (int)gameStat;
        pSStack_30 = (System_Collections_Generic_List_int__o *)0x453dfe5;
        method_02 = (Il2CppClass *)gameStat;
        iVar12 = System_Collections_Generic_List_int___get_Item(__this_02,index,MethodInfo_Int32_get_Item);
        lVar11 = MethodInfo_Void_Add;
        piVar2 = &(__this_02->fields)._version;
        *piVar2 = *piVar2 + 1;
        pSVar4 = (__this_02->fields)._items;
        if (pSVar4 == (System_Int32_array *)0x0) break;
        fVar20 = (float)iVar12 * 1.2;
        if (2000.0 <= fVar20) {
          fVar20 = 2000.0;
        }
        item = (uint)fVar20;
        method_02 = (Il2CppClass *)(ulong)item;
        uVar3 = (__this_02->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_02->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = item;
          gameStat = (GameProgress_GameStatContainer_o *)(ulong)(index + 1U);
          if (index + 1U == 0x31) {
            return;
          }
        }
        else {
          pSStack_30 = (System_Collections_Generic_List_int__o *)0x453dfc7;
          System_Collections_Generic_List_int___AddWithResize
                    (__this_02,item,
                     *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          gameStat = (GameProgress_GameStatContainer_o *)(ulong)(index + 1U);
          if (index + 1U == 0x31) {
            return;
          }
        }
      }
    }
  }
  pSStack_30 = (System_Collections_Generic_List_int__o *)0x453e039;
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this_02;
  if (g_data_057aef12 == '\0') {
    puStack_38 = (undefined8 *)0x453e0a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef12 = '\x01';
    uVar15 = extraout_RDX_00;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e0bc;
label_0453e05d:
    if (g_data_057aef14 != '\0') goto label_0453e066;
label_0453e0ca:
    puStack_38 = (undefined8 *)0x453e0d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    uVar15 = extraout_RDX_02;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e0e9;
label_0453e072:
    plVar14 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  else {
    uVar15 = extraout_RDX;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e05d;
label_0453e0bc:
    puStack_38 = (undefined8 *)0x453e0c1;
    il2cpp_runtime_helper_02337ed0();
    uVar15 = extraout_RDX_01;
    if (g_data_057aef14 == '\0') goto label_0453e0ca;
label_0453e066:
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e072;
label_0453e0e9:
    puStack_38 = (undefined8 *)0x453e0ee;
    il2cpp_runtime_helper_02337ed0();
    plVar14 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    uVar15 = extraout_RDX_03;
  }
  if (plVar14 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar14 + 0x238);
    (*UNRECOVERED_JUMPTABLE_00)(plVar14,*(undefined8 *)(*plVar14 + 0x240),uVar15,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  puStack_38 = (undefined8 *)0x453e106;
  il2cpp_runtime_helper_022b2c90();
  puStack_38 = &TypeInfo_GameProgressManager;
  if (g_data_057aef14 == '\0') {
    pGStack_40 = (GameProgress_GameStatHandler_o *)0x453e15d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    uVar15 = extraout_RDX_05;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e177;
label_0453e12d:
    plVar14 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  else {
    uVar15 = extraout_RDX_04;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e12d;
label_0453e177:
    pGStack_40 = (GameProgress_GameStatHandler_o *)0x453e17c;
    il2cpp_runtime_helper_02337ed0();
    plVar14 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    uVar15 = extraout_RDX_06;
  }
  if (plVar14 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar14 + 0x238);
    (*UNRECOVERED_JUMPTABLE_00)(plVar14,*(undefined8 *)(*plVar14 + 0x240),uVar15,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  pGStack_40 = (GameProgress_GameStatHandler_o *)0x453e194;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  puStack_48 = &TypeInfo_GameProgressManager;
  ppuVar17 = (undefined8 **)&uStack_50;
  puVar16 = (undefined8 *)((ulong)plVar14 & 0xffffffff);
  pGStack_40 = __this;
  if (g_data_057aef13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef13 = '\x01';
  }
  if ((int)plVar14 != 1) {
    return;
  }
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aef14 == '\0') goto label_0453e21a;
label_0453e1e3:
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e1ef;
label_0453e239:
    il2cpp_runtime_helper_02337ed0();
    pGVar18 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar18 != (GameProgress_AchievementHandler_o *)0x0) goto label_0453e251;
label_0453e2ae:
    __this_04 = pGVar18;
    il2cpp_runtime_helper_022b2c90();
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_04,(MethodInfo *)method_02);
    pGVar19 = (GameProgress_GameStatHandler_o *)&TypeInfo_GameProgressManager;
  }
  else {
    if (g_data_057aef14 != '\0') goto label_0453e1e3;
label_0453e21a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e239;
label_0453e1ef:
    pGVar18 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar18 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
label_0453e251:
    method_02 = pGVar18->klass[1]._1.castClass;
    (*(code *)pGVar18->klass[1]._1.element_class)();
    __this_03 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x18);
    puVar16 = (undefined8 *)0x0;
    if (__this_03 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_AchievementHandler__LoadAchievements(__this_03,(MethodInfo *)method_02);
    GameProgress_AchievementHandler__CacheActiveAchievements(__this_03,(MethodInfo *)method_02);
    __this_04 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x20);
    puVar16 = (undefined8 *)0x0;
    pGVar18 = __this_03;
    if (__this_04 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_04,(MethodInfo *)method_02);
    ppuVar17 = &puStack_38;
    puVar16 = puStack_48;
    pGVar19 = pGStack_40;
  }
  *(GameProgress_GameStatContainer_o **)((long)ppuVar17 + -8) = gameStat;
  *(GameProgress_GameStatHandler_Fields **)((long)ppuVar17 + -0x10) = pGVar1;
  *(GameProgress_GameStatHandler_o **)((long)ppuVar17 + -0x18) = pGVar19;
  *(undefined8 *)((long)ppuVar17 + -0x20) = unaff_R13;
  *(undefined8 **)((long)ppuVar17 + -0x28) = unaff_R12;
  *(undefined8 **)((long)ppuVar17 + -0x30) = puVar16;
  if (g_data_057aef31 == '\0') {
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45400d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45400e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45400ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45400fa;
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x4540106;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x4540112;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454011e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057aef31 = '\x01';
  }
  *(undefined8 *)((long)ppuVar17 + -0x68) = 0;
  *(undefined8 *)((long)ppuVar17 + -0x60) = 0;
  *(undefined8 *)((long)ppuVar17 + -0x58) = 0;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_04->fields)._activeQuests;
  if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045402dd;
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x4540152;
  System_Collections_Generic_Dictionary_object__object___Clear(__this_01,MethodInfo_Void_Clear);
  pGVar5 = (__this_04->fields)._quest;
  if (((pGVar5 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar6 = (pGVar5->fields).DailyQuestItems, pSVar6 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar7 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
     pSVar7 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454018f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppuVar17 + -0x48),pSVar7,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)ppuVar17 + -0x58) = *(undefined8 *)((long)ppuVar17 + -0x38);
  *(undefined8 *)((long)ppuVar17 + -0x68) = *(undefined8 *)((long)ppuVar17 + -0x48);
  *(undefined8 *)((long)ppuVar17 + -0x60) = *(undefined8 *)((long)ppuVar17 + -0x40);
  while( true ) {
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45401bc;
    bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o)
                        *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar17 + -0x68)
                        ,(MethodInfo_321A1D0 *)((long)ppuVar17 + -0x68));
    if ((char)bVar13 == '\0') break;
    pGVar8 = *(GameProgress_QuestItem_o **)((long)ppuVar17 + -0x58);
    if (pGVar8 == (GameProgress_QuestItem_o *)0x0) {
label_045402c4:
      *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402c9;
      il2cpp_runtime_helper_022b2c90();
label_045402c9:
      *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402ce;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402ce;
    }
    pSVar9 = (pGVar8->fields).Progress;
    if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_045402c9;
    pSVar10 = (pGVar8->fields).Amount;
    if (pSVar10 == (Settings_IntSetting_o *)0x0) {
      *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402c4;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402c4;
    }
    if ((pSVar9->fields)._value < (pSVar10->fields)._value) {
      *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45401f8;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_04,pGVar8,method_00);
    }
  }
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454020c;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar17 + -0x68),
             (MethodInfo_321A1C0 *)((long)ppuVar17 + -0x68));
  pGVar5 = (__this_04->fields)._quest;
  if (((pGVar5 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar6 = (pGVar5->fields).WeeklyQuestItems, pSVar6 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar7 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value,
     pSVar7 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x4540242;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppuVar17 + -0x48),pSVar7,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)ppuVar17 + -0x58) = *(undefined8 *)((long)ppuVar17 + -0x38);
  *(undefined8 *)((long)ppuVar17 + -0x68) = *(undefined8 *)((long)ppuVar17 + -0x48);
  *(undefined8 *)((long)ppuVar17 + -0x60) = *(undefined8 *)((long)ppuVar17 + -0x40);
  while( true ) {
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454026c;
    bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o)
                        *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar17 + -0x68)
                        ,(MethodInfo_321A1D0 *)((long)ppuVar17 + -0x68));
    if ((char)bVar13 == '\0') {
      *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402b0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar17 + -0x68),
                 (MethodInfo_321A1C0 *)((long)ppuVar17 + -0x68));
      return;
    }
    pGVar8 = *(GameProgress_QuestItem_o **)((long)ppuVar17 + -0x58);
    if (pGVar8 == (GameProgress_QuestItem_o *)0x0) break;
    pSVar9 = (pGVar8->fields).Progress;
    if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_045402d8;
    pSVar10 = (pGVar8->fields).Amount;
    if (pSVar10 == (Settings_IntSetting_o *)0x0) goto label_045402ce;
    if ((pSVar9->fields)._value < (pSVar10->fields)._value) {
      *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454029c;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_04,pGVar8,method_01);
    }
  }
label_045402d3:
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402d8;
  il2cpp_runtime_helper_022b2c90();
label_045402d8:
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402dd;
  il2cpp_runtime_helper_022b2c90();
label_045402dd:
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402e2;
  auVar21 = il2cpp_runtime_helper_022b2c90();
  if (auVar21._8_4_ == 1) {
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x4540363;
    plVar14 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar11 = *plVar14;
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454036b;
    __cxa_end_catch();
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454037d;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar17 + -0x68),
               (MethodInfo_321A1C0 *)((long)ppuVar17 + -0x68));
    if (lVar11 == 0) {
      return;
    }
    *(undefined8 *)((long)ppuVar17 + -0x70) = 0x454038e;
    il2cpp_runtime_helper_022fefe0(lVar11);
  }
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45403a7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar17 + -0x68),
             (MethodInfo_321A1C0 *)((long)ppuVar17 + -0x68));
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x4540416;
  _Unwind_Resume(auVar21._0_8_);
label_045402ce:
  *(undefined8 *)((long)ppuVar17 + -0x70) = 0x45402d3;
  il2cpp_runtime_helper_022b2c90();
  goto label_045402d3;
}


// GameProgress.GameStatHandler$$GetExpToNext
// il2cpp: int32_t GameProgress_GameStatHandler__GetExpToNext (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x453e3c0

int32_t GameProgress_GameStatHandler__GetExpToNext(GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  int32_t iVar5;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  bool_conflict bVar6;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  long *plVar7;
  undefined8 extraout_RDX;
  uint uVar8;
  uint uVar9;
  MethodInfo *pMVar10;
  int iVar11;
  GameProgress_GameStatHandler_o *pGVar12;
  MethodInfo_2A23FA0 **__this_07;
  MethodInfo_2A23FA0 **ppMVar13;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_T__o *pSVar15;
  Il2CppMethodPointer pIVar16;
  Il2CppObject *pIVar17;
  
  uVar8 = (uint)method;
  pGVar12 = __this;
  if (g_data_057aef25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    pGVar12 = (GameProgress_GameStatHandler_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef25 = '\x01';
  }
  iVar11 = (int)pGVar12;
  pGVar2 = (__this->fields)._gameStat;
  if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    uVar8 = (pSVar3->fields)._value;
    if (0x31 < (int)uVar8) {
      return 0;
    }
    __this_00 = (__this->fields)._expPerLevel;
    iVar11 = 0;
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      iVar5 = System_Collections_Generic_List_int___get_Item(__this_00,uVar8,MethodInfo_Int32_get_Item);
      return iVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef16 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_GameProgressManager[7].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_GameProgressManager[7].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_01 = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    __this_07 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
  }
  else {
    __this_01 = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    __this_07 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
  }
  TypeInfo_GameProgressManager = (GameProgress_GameStatHandler_o *)__this_07;
  if (__this_01 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    if (g_data_057aef26 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      __this_07 = &MethodInfo_Void_set_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef26 = '\x01';
    }
    pGVar2 = (GameProgress_GameStatContainer_o *)(__this_01->fields)._objectsTable;
    if (pGVar2 != (GameProgress_GameStatContainer_o *)0x0) {
      pSVar3 = (pGVar2->fields).Exp;
      __this_07 = (MethodInfo_2A23FA0 **)0x0;
      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
        uVar8 = iVar11 + (pSVar3->fields)._value;
        pMVar10 = (MethodInfo *)(ulong)uVar8;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar3,uVar8,MethodInfo_Void_set_Value);
        GameProgress_GameStatHandler__CheckLevelUp((GameProgress_GameStatHandler_o *)__this_01,pMVar10);
        return extraout_EAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar13 = __this_07;
  uVar9 = uVar8;
  if (g_data_057aef26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar13 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  pGVar2 = (((GameProgress_GameStatHandler_o *)__this_07)->fields)._gameStat;
  if (pGVar2 != (GameProgress_GameStatContainer_o *)0x0) {
    pSVar3 = (pGVar2->fields).Exp;
    ppMVar13 = (MethodInfo_2A23FA0 **)0x0;
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      uVar8 = uVar8 + (pSVar3->fields)._value;
      pMVar10 = (MethodInfo *)(ulong)uVar8;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar3,uVar8,MethodInfo_Void_set_Value);
      GameProgress_GameStatHandler__CheckLevelUp((GameProgress_GameStatHandler_o *)__this_07,pMVar10);
      return extraout_EAX_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    g_data_057aef17 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  pIVar17 = (Il2CppObject *)0x0;
  if (*(int *)((long)&TypeInfo_GameProgressManager[7].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (System_Collections_Generic_List_object__o *)((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Exp;
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,__this_02,
               MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    while( true ) {
      __this_03.fields._8_8_ = pIVar16;
      __this_03.fields._list = pSVar15;
      __this_03.fields._current = pIVar17;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
      if ((char)bVar6 == '\0') {
        __this_04.fields._8_8_ = pIVar16;
        __this_04.fields._list = pSVar15;
        __this_04.fields._current = pIVar17;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        return extraout_EAX_01;
      }
      if (pIVar17 == (Il2CppObject *)0x0) break;
      (*pIVar17->klass->vtable[4].methodPtr)
                (pIVar17,ppMVar13,(ulong)uVar9,extraout_RDX,pIVar17->klass->vtable[4].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar16;
    __this_05.fields._list = pSVar15;
    __this_05.fields._current = pIVar17;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar4 == 0) {
      return extraout_EAX_02;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_06.fields._8_8_ = pIVar16;
  __this_06.fields._list = pSVar15;
  __this_06.fields._current = pIVar17;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar14._0_8_);
}


// GameProgress.GameStatHandler$$AddExp
// il2cpp: void GameProgress_GameStatHandler__AddExp (GameProgress_GameStatHandler_o* __this, int32_t exp, const MethodInfo* method);
// 0x453e520

void GameProgress_GameStatHandler__AddExp
               (GameProgress_GameStatHandler_o *__this,int32_t exp,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_IntSetting_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  uint uVar5;
  MethodInfo *method_00;
  MethodInfo_2A23FA0 **ppMVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  ppMVar6 = (MethodInfo_2A23FA0 **)__this;
  uVar5 = exp;
  if (g_data_057aef26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar6 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if (pGVar1 != (GameProgress_GameStatContainer_o *)0x0) {
    __this_00 = (pGVar1->fields).Exp;
    ppMVar6 = (MethodInfo_2A23FA0 **)0x0;
    if (__this_00 != (Settings_IntSetting_o *)0x0) {
      uVar5 = exp + (__this_00->fields)._value;
      method_00 = (MethodInfo *)(ulong)uVar5;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,uVar5,MethodInfo_Void_set_Value);
      GameProgress_GameStatHandler__CheckLevelUp(__this,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    g_data_057aef17 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_01,
               MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    while( true ) {
      __this_02.fields._8_8_ = pIVar9;
      __this_02.fields._list = pSVar8;
      __this_02.fields._current = pIVar10;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
      if ((char)bVar3 == '\0') {
        __this_03.fields._8_8_ = pIVar9;
        __this_03.fields._list = pSVar8;
        __this_03.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
        return;
      }
      if (pIVar10 == (Il2CppObject *)0x0) break;
      (*pIVar10->klass->vtable[4].methodPtr)
                (pIVar10,ppMVar6,(ulong)uVar5,extraout_RDX,pIVar10->klass->vtable[4].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar9;
    __this_04.fields._list = pSVar8;
    __this_04.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_05.fields._8_8_ = pIVar9;
  __this_05.fields._list = pSVar8;
  __this_05.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  _Unwind_Resume(auVar7._0_8_);
}


// GameProgress.GameStatHandler$$CheckLevelUp
// il2cpp: void GameProgress_GameStatHandler__CheckLevelUp (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x453f220

void GameProgress_GameStatHandler__CheckLevelUp(GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Settings_TypedSetting_int__c *pSVar3;
  void *pvVar4;
  Settings_TypedSetting_int__o *pSVar5;
  Settings_TypedSetting_float__o *__this_00;
  int32_t iVar6;
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  undefined8 *unaff_RBP;
  undefined8 *puVar8;
  Settings_TypedSetting_int__Fields __this_01;
  Settings_TypedSetting_int__Fields __this_02;
  float fVar9;
  float value;
  undefined1 auVar10 [16];
  
code_r0x0453f220:
  *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
  __this_01 = (Settings_TypedSetting_int__Fields)__this;
  if (g_data_057aef27 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f23b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f247;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_01 = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f253;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef27 = '\x01';
  }
  pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this + 0x18))->klass;
  if (((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
      (pvVar4 = (pSVar3->_1).byval_arg.data, pvVar4 != (void *)0x0)) &&
     (__this_01 = *(Settings_TypedSetting_int__Fields *)&(pSVar3->_1).byval_arg.bits,
     __this_01 != (Settings_TypedSetting_int__Fields)0x0)) {
    iVar6 = *(int32_t *)((long)pvVar4 + 0x14);
    if (iVar6 < 0x32) {
      uVar1 = *(uint *)((long)__this_01 + 0x14);
      unaff_RBP = (undefined8 *)(ulong)uVar1;
      if ((int)uVar1 < 1) {
        return;
      }
      __this_01 = *(Settings_TypedSetting_int__Fields *)((long)__this + 0x10);
      if (__this_01 != (Settings_TypedSetting_int__Fields)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f2e8;
        iVar6 = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)__this_01,iVar6,MethodInfo_Int32_get_Item);
        if ((int)uVar1 < iVar6) {
          return;
        }
        pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this + 0x18))->klass;
        if ((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
           (__this_01 = (Settings_TypedSetting_int__Fields)(pSVar3->_1).byval_arg.data,
           __this_01 != (Settings_TypedSetting_int__Fields)0x0)) {
          iVar2 = *(int *)((long)__this_01 + 0x14);
          unaff_RBP = &MethodInfo_Void_set_Value;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f31b;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_01,iVar2 + 1,MethodInfo_Void_set_Value);
          pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this + 0x18))->klass;
          if (pSVar3 != (Settings_TypedSetting_int__c *)0x0) {
            pSVar5 = *(Settings_TypedSetting_int__o **)&(pSVar3->_1).byval_arg.bits;
            __this_01.DefaultValue = 0;
            __this_01._value = 0;
            if (pSVar5 != (Settings_TypedSetting_int__o *)0x0) {
              Settings_TypedSetting_int___set_Value(pSVar5,0,MethodInfo_Void_set_Value);
              return;
            }
          }
        }
      }
    }
    else {
      unaff_RBP = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f29b;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_01,0,MethodInfo_Void_set_Value);
      pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this + 0x18))->klass;
      if (pSVar3 != (Settings_TypedSetting_int__c *)0x0) {
        pSVar5 = (pSVar3->_1).byval_arg.data;
        __this_01.DefaultValue = 0;
        __this_01._value = 0;
        if (pSVar5 != (Settings_TypedSetting_int__o *)0x0) {
          Settings_TypedSetting_int___set_Value(pSVar5,0x32,MethodInfo_Void_set_Value);
          return;
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f343;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_RBP;
  *(GameProgress_GameStatHandler_o **)((long)register0x00000020 + -0x28) = __this;
  *(long *)((long)register0x00000020 + -0x30) = auVar10._0_8_;
  puVar8 = (undefined8 *)(auVar10._8_8_ & 0xffffffff);
  __this = (GameProgress_GameStatHandler_o *)__this_01;
  if (g_data_057aef28 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f36d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this = (GameProgress_GameStatHandler_o *)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f379;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef28 = '\x01';
  }
  switch(auVar10._8_8_ & 0xffffffff) {
  case 0:
    if (*(char **)((long)__this_01 + 0x18) == (char *)0x0) break;
    __this = *(GameProgress_GameStatHandler_o **)(*(char **)((long)__this_01 + 0x18) + 0x48);
joined_r0x0453f417:
    if ((Settings_TypedSetting_int__Fields)__this == (Settings_TypedSetting_int__Fields)0x0) break;
    iVar2 = *(int *)((long)__this + 0x14);
    puVar8 = &MethodInfo_Void_set_Value;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f433;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this,iVar2 + 1,MethodInfo_Void_set_Value);
    if ((*(char **)((long)__this_01 + 0x18) == (char *)0x0) ||
       (__this = *(GameProgress_GameStatHandler_o **)(*(char **)((long)__this_01 + 0x18) + 0x40),
       (Settings_TypedSetting_int__Fields)__this == (Settings_TypedSetting_int__Fields)0x0)) break;
    iVar2 = *(int *)((long)__this + 0x14);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f454;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this,iVar2 + 1,MethodInfo_Void_set_Value);
    if (g_data_057aef26 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f469;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      __this = (GameProgress_GameStatHandler_o *)&MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f475;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef26 = '\x01';
    }
    if (*(char **)((long)__this_01 + 0x18) == (char *)0x0) break;
    pSVar5 = *(Settings_TypedSetting_int__o **)(*(char **)((long)__this_01 + 0x18) + 0x28);
    __this._0_4_ = 0;
    __this._4_4_ = 0;
    if (pSVar5 == (Settings_TypedSetting_int__o *)0x0) break;
    iVar2 = (pSVar5->fields)._value;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f49d;
    Settings_TypedSetting_int___set_Value(pSVar5,iVar2 + 10,MethodInfo_Void_set_Value);
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x28);
    unaff_RBP = *(undefined8 **)((long)register0x00000020 + -0x20);
    in_RAX = extraout_RAX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (GameProgress_GameStatHandler_o *)__this_01;
    goto code_r0x0453f220;
  case 1:
    if (*(char **)((long)__this_01 + 0x18) != (char *)0x0) {
      __this = *(GameProgress_GameStatHandler_o **)(*(char **)((long)__this_01 + 0x18) + 0x50);
      goto joined_r0x0453f417;
    }
    break;
  case 2:
    if (*(char **)((long)__this_01 + 0x18) != (char *)0x0) {
      __this = *(GameProgress_GameStatHandler_o **)(*(char **)((long)__this_01 + 0x18) + 0x58);
      goto joined_r0x0453f417;
    }
    break;
  case 3:
    if (*(char **)((long)__this_01 + 0x18) != (char *)0x0) {
      __this = *(GameProgress_GameStatHandler_o **)(*(char **)((long)__this_01 + 0x18) + 0x60);
      goto joined_r0x0453f417;
    }
    break;
  default:
    if (*(char **)((long)__this_01 + 0x18) != (char *)0x0) {
      __this = *(GameProgress_GameStatHandler_o **)(*(char **)((long)__this_01 + 0x18) + 0x68);
      goto joined_r0x0453f417;
    }
  }
  *(code **)((long)register0x00000020 + -0x38) = GameProgress_GameStatHandler__RegisterHumanKill;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 **)((long)register0x00000020 + -0x38) = puVar8;
  *(Settings_TypedSetting_int__Fields *)((long)register0x00000020 + -0x40) = __this_01;
  *(long *)((long)register0x00000020 + -0x48) = auVar10._0_8_;
  __this_02 = (Settings_TypedSetting_int__Fields)__this;
  if (g_data_057aef29 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f4cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_02 = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f4d9;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef29 = '\x01';
  }
  switch(auVar10._8_8_ & 0xffffffff) {
  case 0:
    pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this + 0x18))->klass;
    if (pSVar3 != (Settings_TypedSetting_int__c *)0x0) {
      __this_02 = (Settings_TypedSetting_int__Fields)(pSVar3->_1).klass;
      goto joined_r0x0453f569;
    }
label_0453f639:
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f63e;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x50) = uVar7;
    pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this_02 + 0x18))->klass;
    if ((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
       (__this_02.DefaultValue = 0, __this_02._value = 0,
       (pSVar3->_1).implementedInterfaces != (Il2CppClass **)0x0)) {
      GameProgress_DamageSetting__Register();
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x453f66c;
    fVar9 = (float)il2cpp_runtime_helper_022b2c90();
    *(GameProgress_GameStatHandler_o **)((long)register0x00000020 + -0x58) = __this;
    if (g_data_057aef2a == '\0') {
      *(float *)((long)register0x00000020 + -0x5c) = fVar9;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x453f696;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x453f6a2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      fVar9 = *(float *)((long)register0x00000020 + -0x5c);
      g_data_057aef2a = '\x01';
    }
    pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this_02 + 0x18))->klass;
    if ((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
       (__this_00 = *(Settings_TypedSetting_float__o **)&(pSVar3->_1).this_arg.bits,
       __this_00 != (Settings_TypedSetting_float__o *)0x0)) {
      value = (__this_00->fields)._value;
      if (value <= fVar9) {
        value = fVar9;
      }
      Settings_TypedSetting_float___set_Value(__this_00,value,MethodInfo_Void_set_Value);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x453f6e3;
    il2cpp_runtime_helper_022b2c90();
    return;
  case 1:
    if (*(char **)((long)__this + 0x18) != (char *)0x0) {
      __this_02 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)__this + 0x18) + 0x80);
joined_r0x0453f569:
      if (__this_02 != (Settings_TypedSetting_int__Fields)0x0) goto label_0453f5ab;
    }
    goto label_0453f639;
  case 2:
    if (*(char **)((long)__this + 0x18) == (char *)0x0) goto label_0453f639;
    __this_02 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)__this + 0x18) + 0x88);
    break;
  case 3:
    if (*(char **)((long)__this + 0x18) == (char *)0x0) goto label_0453f639;
    __this_02 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)__this + 0x18) + 0x90);
    break;
  default:
    if (*(char **)((long)__this + 0x18) == (char *)0x0) goto label_0453f639;
    __this_02 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)__this + 0x18) + 0xa0);
    break;
  case 6:
    if (*(char **)((long)__this + 0x18) == (char *)0x0) goto label_0453f639;
    __this_02 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)__this + 0x18) + 0x98);
  }
  if (__this_02 == (Settings_TypedSetting_int__Fields)0x0) goto label_0453f639;
label_0453f5ab:
  iVar2 = *(int *)((long)__this_02 + 0x14);
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f5c1;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,iVar2 + 1,MethodInfo_Void_set_Value);
  if ((*(char **)((long)__this + 0x18) == (char *)0x0) ||
     (__this_02 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)__this + 0x18) + 0x70),
     __this_02 == (Settings_TypedSetting_int__Fields)0x0)) goto label_0453f639;
  iVar2 = *(int *)((long)__this_02 + 0x14);
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f5e2;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,iVar2 + 1,MethodInfo_Void_set_Value);
  if (g_data_057aef26 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f5f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_02 = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f603;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  if (*(char **)((long)__this + 0x18) == (char *)0x0) goto label_0453f639;
  pSVar5 = *(Settings_TypedSetting_int__o **)(*(char **)((long)__this + 0x18) + 0x28);
  __this_02.DefaultValue = 0;
  __this_02._value = 0;
  if (pSVar5 == (Settings_TypedSetting_int__o *)0x0) goto label_0453f639;
  iVar2 = (pSVar5->fields)._value;
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x453f62b;
  Settings_TypedSetting_int___set_Value(pSVar5,iVar2 + 10,MethodInfo_Void_set_Value);
  unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x40);
  unaff_RBP = *(undefined8 **)((long)register0x00000020 + -0x38);
  in_RAX = extraout_RAX_00;
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
  goto code_r0x0453f220;
}


// GameProgress.GameStatHandler$$RegisterTitanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterTitanKill (GameProgress_GameStatHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x453f350

void GameProgress_GameStatHandler__RegisterTitanKill(void)

{
  uint uVar1;
  int iVar2;
  Settings_TypedSetting_int__c *pSVar3;
  void *pvVar4;
  Settings_TypedSetting_int__o *pSVar5;
  Settings_TypedSetting_float__o *__this;
  int32_t iVar6;
  undefined8 uVar7;
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar8;
  undefined8 in_RDX;
  Settings_TypedSetting_int__Fields unaff_RBX;
  undefined1 *puVar9;
  undefined8 *unaff_RBP;
  undefined8 *puVar10;
  Settings_TypedSetting_int__Fields in_RDI;
  Settings_TypedSetting_int__Fields __this_00;
  float fVar11;
  float value;
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = in_RDX;
  auVar12._0_8_ = in_RAX;
  do {
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Settings_TypedSetting_int__Fields *)((long)register0x00000020 + -0x10) = unaff_RBX;
    puVar9 = (undefined1 *)((long)register0x00000020 + -0x18);
    *(long *)((long)register0x00000020 + -0x18) = auVar12._0_8_;
    puVar10 = (undefined8 *)(auVar12._8_8_ & 0xffffffff);
    unaff_RBX = in_RDI;
    if (g_data_057aef28 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f36d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      unaff_RBX = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f379;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef28 = '\x01';
    }
    switch(auVar12._8_8_ & 0xffffffff) {
    case 0:
      if ((*(char **)((long)in_RDI + 0x18) == (char *)0x0) ||
         (unaff_RBX = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x48),
         unaff_RBX == (Settings_TypedSetting_int__Fields)0x0)) break;
label_0453f41d:
      iVar2 = *(int *)((long)unaff_RBX + 0x14);
      puVar10 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f433;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_RBX,iVar2 + 1,MethodInfo_Void_set_Value);
      if ((*(char **)((long)in_RDI + 0x18) == (char *)0x0) ||
         (unaff_RBX = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x40),
         unaff_RBX == (Settings_TypedSetting_int__Fields)0x0)) break;
      iVar2 = *(int *)((long)unaff_RBX + 0x14);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f454;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_RBX,iVar2 + 1,MethodInfo_Void_set_Value);
      if (g_data_057aef26 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f469;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
        unaff_RBX = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f475;
        il2cpp_runtime_helper_023445d0();
        g_data_057aef26 = '\x01';
      }
      if (*(char **)((long)in_RDI + 0x18) == (char *)0x0) break;
      pSVar5 = *(Settings_TypedSetting_int__o **)(*(char **)((long)in_RDI + 0x18) + 0x28);
      unaff_RBX.DefaultValue = 0;
      unaff_RBX._value = 0;
      if (pSVar5 == (Settings_TypedSetting_int__o *)0x0) break;
      iVar2 = (pSVar5->fields)._value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f49d;
      Settings_TypedSetting_int___set_Value(pSVar5,iVar2 + 10,MethodInfo_Void_set_Value);
      uVar8 = *(undefined8 *)((long)register0x00000020 + -0x10);
      unaff_RBP = *(undefined8 **)((long)register0x00000020 + -8);
      uVar7 = extraout_RAX;
      puVar9 = (undefined1 *)register0x00000020;
      unaff_RBX = in_RDI;
      goto GameProgress_GameStatHandler__CheckLevelUp;
    case 1:
      if (*(char **)((long)in_RDI + 0x18) != (char *)0x0) {
        unaff_RBX = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x50);
joined_r0x0453f417:
        if (unaff_RBX != (Settings_TypedSetting_int__Fields)0x0) goto label_0453f41d;
      }
      break;
    case 2:
      if (*(char **)((long)in_RDI + 0x18) != (char *)0x0) {
        unaff_RBX = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x58);
        goto joined_r0x0453f417;
      }
      break;
    case 3:
      if (*(char **)((long)in_RDI + 0x18) != (char *)0x0) {
        unaff_RBX = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x60);
        goto joined_r0x0453f417;
      }
      break;
    default:
      if (*(char **)((long)in_RDI + 0x18) != (char *)0x0) {
        unaff_RBX = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x68);
        goto joined_r0x0453f417;
      }
    }
    *(code **)((long)register0x00000020 + -0x20) = GameProgress_GameStatHandler__RegisterHumanKill;
    auVar12 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)((long)register0x00000020 + -0x20) = puVar10;
    *(Settings_TypedSetting_int__Fields *)((long)register0x00000020 + -0x28) = in_RDI;
    *(long *)((long)register0x00000020 + -0x30) = auVar12._0_8_;
    __this_00 = unaff_RBX;
    if (g_data_057aef29 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f4cd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      __this_00 = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f4d9;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef29 = '\x01';
    }
    switch(auVar12._8_8_ & 0xffffffff) {
    case 0:
      pSVar3 = ((Settings_TypedSetting_int__o *)((long)unaff_RBX + 0x18))->klass;
      if (pSVar3 == (Settings_TypedSetting_int__c *)0x0) goto label_0453f639;
      __this_00 = (Settings_TypedSetting_int__Fields)(pSVar3->_1).klass;
      break;
    case 1:
      if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f639;
      __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x80);
      break;
    case 2:
      if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f639;
      __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x88);
      break;
    case 3:
      if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f639;
      __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x90);
      break;
    default:
      if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f639;
      __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0xa0);
      break;
    case 6:
      if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f639;
      __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x98);
    }
    if (__this_00 == (Settings_TypedSetting_int__Fields)0x0) {
label_0453f639:
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f63e;
      uVar8 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)register0x00000020 + -0x38) = uVar8;
      pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this_00 + 0x18))->klass;
      if ((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
         (__this_00.DefaultValue = 0, __this_00._value = 0,
         (pSVar3->_1).implementedInterfaces != (Il2CppClass **)0x0)) {
        GameProgress_DamageSetting__Register();
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x453f66c;
      fVar11 = (float)il2cpp_runtime_helper_022b2c90();
      *(Settings_TypedSetting_int__Fields *)((long)register0x00000020 + -0x40) = unaff_RBX;
      if (g_data_057aef2a == '\0') {
        *(float *)((long)register0x00000020 + -0x44) = fVar11;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x453f696;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x453f6a2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        fVar11 = *(float *)((long)register0x00000020 + -0x44);
        g_data_057aef2a = '\x01';
      }
      pSVar3 = ((Settings_TypedSetting_int__o *)((long)__this_00 + 0x18))->klass;
      if ((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
         (__this = *(Settings_TypedSetting_float__o **)&(pSVar3->_1).this_arg.bits,
         __this != (Settings_TypedSetting_float__o *)0x0)) {
        value = (__this->fields)._value;
        if (value <= fVar11) {
          value = fVar11;
        }
        Settings_TypedSetting_float___set_Value(__this,value,MethodInfo_Void_set_Value);
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x453f6e3;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    iVar2 = *(int *)((long)__this_00 + 0x14);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f5c1;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,iVar2 + 1,MethodInfo_Void_set_Value);
    if ((*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) ||
       (__this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x70),
       __this_00 == (Settings_TypedSetting_int__Fields)0x0)) goto label_0453f639;
    iVar2 = *(int *)((long)__this_00 + 0x14);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f5e2;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,iVar2 + 1,MethodInfo_Void_set_Value);
    if (g_data_057aef26 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f5f7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      __this_00 = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f603;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef26 = '\x01';
    }
    if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f639;
    pSVar5 = *(Settings_TypedSetting_int__o **)(*(char **)((long)unaff_RBX + 0x18) + 0x28);
    __this_00.DefaultValue = 0;
    __this_00._value = 0;
    if (pSVar5 == (Settings_TypedSetting_int__o *)0x0) goto label_0453f639;
    iVar2 = (pSVar5->fields)._value;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x453f62b;
    Settings_TypedSetting_int___set_Value(pSVar5,iVar2 + 10,MethodInfo_Void_set_Value);
    uVar8 = *(undefined8 *)((long)register0x00000020 + -0x28);
    unaff_RBP = *(undefined8 **)((long)register0x00000020 + -0x20);
    uVar7 = extraout_RAX_00;
GameProgress_GameStatHandler__CheckLevelUp:
    *(undefined8 **)(puVar9 + -8) = unaff_RBP;
    *(undefined8 *)(puVar9 + -0x10) = uVar8;
    register0x00000020 = (BADSPACEBASE *)(puVar9 + -0x18);
    *(undefined8 *)(puVar9 + -0x18) = uVar7;
    in_RDI = unaff_RBX;
    if (g_data_057aef27 == '\0') {
      *(undefined8 *)(puVar9 + -0x20) = 0x453f23b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
      *(undefined8 *)(puVar9 + -0x20) = 0x453f247;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      in_RDI = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
      *(undefined8 *)(puVar9 + -0x20) = 0x453f253;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef27 = '\x01';
    }
    pSVar3 = ((Settings_TypedSetting_int__o *)((long)unaff_RBX + 0x18))->klass;
    if (((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
        (pvVar4 = (pSVar3->_1).byval_arg.data, pvVar4 != (void *)0x0)) &&
       (in_RDI = *(Settings_TypedSetting_int__Fields *)&(pSVar3->_1).byval_arg.bits,
       in_RDI != (Settings_TypedSetting_int__Fields)0x0)) {
      iVar6 = *(int32_t *)((long)pvVar4 + 0x14);
      if (iVar6 < 0x32) {
        uVar1 = *(uint *)((long)in_RDI + 0x14);
        unaff_RBP = (undefined8 *)(ulong)uVar1;
        if ((int)uVar1 < 1) {
          return;
        }
        in_RDI = *(Settings_TypedSetting_int__Fields *)((long)unaff_RBX + 0x10);
        if (in_RDI != (Settings_TypedSetting_int__Fields)0x0) {
          *(undefined8 *)(puVar9 + -0x20) = 0x453f2e8;
          iVar6 = System_Collections_Generic_List_int___get_Item
                            ((System_Collections_Generic_List_int__o *)in_RDI,iVar6,MethodInfo_Int32_get_Item);
          if ((int)uVar1 < iVar6) {
            return;
          }
          pSVar3 = ((Settings_TypedSetting_int__o *)((long)unaff_RBX + 0x18))->klass;
          if ((pSVar3 != (Settings_TypedSetting_int__c *)0x0) &&
             (in_RDI = (Settings_TypedSetting_int__Fields)(pSVar3->_1).byval_arg.data,
             in_RDI != (Settings_TypedSetting_int__Fields)0x0)) {
            iVar2 = *(int *)((long)in_RDI + 0x14);
            unaff_RBP = &MethodInfo_Void_set_Value;
            *(undefined8 *)(puVar9 + -0x20) = 0x453f31b;
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)in_RDI,iVar2 + 1,MethodInfo_Void_set_Value);
            pSVar3 = ((Settings_TypedSetting_int__o *)((long)unaff_RBX + 0x18))->klass;
            if (pSVar3 != (Settings_TypedSetting_int__c *)0x0) {
              pSVar5 = *(Settings_TypedSetting_int__o **)&(pSVar3->_1).byval_arg.bits;
              in_RDI.DefaultValue = 0;
              in_RDI._value = 0;
              if (pSVar5 != (Settings_TypedSetting_int__o *)0x0) {
                Settings_TypedSetting_int___set_Value(pSVar5,0,MethodInfo_Void_set_Value);
                return;
              }
            }
          }
        }
      }
      else {
        unaff_RBP = &MethodInfo_Void_set_Value;
        *(undefined8 *)(puVar9 + -0x20) = 0x453f29b;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)in_RDI,0,MethodInfo_Void_set_Value);
        pSVar3 = ((Settings_TypedSetting_int__o *)((long)unaff_RBX + 0x18))->klass;
        if (pSVar3 != (Settings_TypedSetting_int__c *)0x0) {
          pSVar5 = (pSVar3->_1).byval_arg.data;
          in_RDI.DefaultValue = 0;
          in_RDI._value = 0;
          if (pSVar5 != (Settings_TypedSetting_int__o *)0x0) {
            Settings_TypedSetting_int___set_Value(pSVar5,0x32,MethodInfo_Void_set_Value);
            return;
          }
        }
      }
    }
    *(undefined8 *)(puVar9 + -0x20) = 0x453f343;
    auVar12 = il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// GameProgress.GameStatHandler$$RegisterHumanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterHumanKill (GameProgress_GameStatHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x453f4b0

void GameProgress_GameStatHandler__RegisterHumanKill(void)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  Settings_TypedSetting_int__o *pSVar4;
  Settings_TypedSetting_int__c *pSVar5;
  Settings_TypedSetting_float__o *__this;
  int32_t iVar6;
  undefined8 uVar7;
  undefined8 extraout_RAX;
  undefined8 in_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar8;
  undefined8 in_RDX;
  Settings_TypedSetting_int__Fields unaff_RBX;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  Settings_TypedSetting_int__Fields in_RDI;
  Settings_TypedSetting_int__Fields __this_00;
  float fVar11;
  float value;
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = in_RDX;
  auVar12._0_8_ = in_RAX;
code_r0x0453f4b0:
  *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
  *(Settings_TypedSetting_int__Fields *)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(long *)((long)register0x00000020 + -0x18) = auVar12._0_8_;
  __this_00 = in_RDI;
  if (g_data_057aef29 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f4cd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_00 = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f4d9;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef29 = '\x01';
  }
  switch(auVar12._8_8_ & 0xffffffff) {
  case 0:
    pSVar5 = ((Settings_TypedSetting_int__o *)((long)in_RDI + 0x18))->klass;
    if (pSVar5 == (Settings_TypedSetting_int__c *)0x0) goto label_0453f639;
    __this_00 = (Settings_TypedSetting_int__Fields)(pSVar5->_1).klass;
    break;
  case 1:
    if (*(char **)((long)in_RDI + 0x18) == (char *)0x0) goto label_0453f639;
    __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x80);
    break;
  case 2:
    if (*(char **)((long)in_RDI + 0x18) == (char *)0x0) goto label_0453f639;
    __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x88);
    break;
  case 3:
    if (*(char **)((long)in_RDI + 0x18) == (char *)0x0) goto label_0453f639;
    __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x90);
    break;
  default:
    if (*(char **)((long)in_RDI + 0x18) == (char *)0x0) goto label_0453f639;
    __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0xa0);
    break;
  case 6:
    if (*(char **)((long)in_RDI + 0x18) == (char *)0x0) goto label_0453f639;
    __this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x98);
  }
  if (__this_00 == (Settings_TypedSetting_int__Fields)0x0) {
label_0453f639:
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f63e;
    uVar8 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x20) = uVar8;
    pSVar5 = ((Settings_TypedSetting_int__o *)((long)__this_00 + 0x18))->klass;
    if ((pSVar5 != (Settings_TypedSetting_int__c *)0x0) &&
       (__this_00.DefaultValue = 0, __this_00._value = 0,
       (pSVar5->_1).implementedInterfaces != (Il2CppClass **)0x0)) {
      GameProgress_DamageSetting__Register();
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x28) = 0x453f66c;
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
    *(Settings_TypedSetting_int__Fields *)((long)register0x00000020 + -0x28) = in_RDI;
    if (g_data_057aef2a == '\0') {
      *(float *)((long)register0x00000020 + -0x2c) = fVar11;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x453f696;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x453f6a2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      fVar11 = *(float *)((long)register0x00000020 + -0x2c);
      g_data_057aef2a = '\x01';
    }
    pSVar5 = ((Settings_TypedSetting_int__o *)((long)__this_00 + 0x18))->klass;
    if ((pSVar5 != (Settings_TypedSetting_int__c *)0x0) &&
       (__this = *(Settings_TypedSetting_float__o **)&(pSVar5->_1).this_arg.bits,
       __this != (Settings_TypedSetting_float__o *)0x0)) {
      value = (__this->fields)._value;
      if (value <= fVar11) {
        value = fVar11;
      }
      Settings_TypedSetting_float___set_Value(__this,value,MethodInfo_Void_set_Value);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x453f6e3;
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  iVar2 = *(int *)((long)__this_00 + 0x14);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f5c1;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,iVar2 + 1,MethodInfo_Void_set_Value);
  if ((*(char **)((long)in_RDI + 0x18) == (char *)0x0) ||
     (__this_00 = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)in_RDI + 0x18) + 0x70),
     __this_00 == (Settings_TypedSetting_int__Fields)0x0)) goto label_0453f639;
  iVar2 = *(int *)((long)__this_00 + 0x14);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f5e2;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,iVar2 + 1,MethodInfo_Void_set_Value);
  if (g_data_057aef26 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f5f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_00 = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f603;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  if (*(char **)((long)in_RDI + 0x18) == (char *)0x0) goto label_0453f639;
  pSVar4 = *(Settings_TypedSetting_int__o **)(*(char **)((long)in_RDI + 0x18) + 0x28);
  __this_00.DefaultValue = 0;
  __this_00._value = 0;
  if (pSVar4 == (Settings_TypedSetting_int__o *)0x0) goto label_0453f639;
  iVar2 = (pSVar4->fields)._value;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x453f62b;
  Settings_TypedSetting_int___set_Value(pSVar4,iVar2 + 10,MethodInfo_Void_set_Value);
  uVar8 = *(undefined8 *)((long)register0x00000020 + -0x10);
  puVar10 = *(undefined8 **)((long)register0x00000020 + -8);
  uVar7 = extraout_RAX_00;
  puVar9 = (undefined1 *)register0x00000020;
GameProgress_GameStatHandler__CheckLevelUp:
  *(undefined8 **)(puVar9 + -8) = puVar10;
  *(undefined8 *)(puVar9 + -0x10) = uVar8;
  *(undefined8 *)(puVar9 + -0x18) = uVar7;
  unaff_RBX = in_RDI;
  if (g_data_057aef27 == '\0') {
    *(undefined8 *)(puVar9 + -0x20) = 0x453f23b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    *(undefined8 *)(puVar9 + -0x20) = 0x453f247;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    unaff_RBX = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)(puVar9 + -0x20) = 0x453f253;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef27 = '\x01';
  }
  pSVar5 = ((Settings_TypedSetting_int__o *)((long)in_RDI + 0x18))->klass;
  if (((pSVar5 != (Settings_TypedSetting_int__c *)0x0) &&
      (pvVar3 = (pSVar5->_1).byval_arg.data, pvVar3 != (void *)0x0)) &&
     (unaff_RBX = *(Settings_TypedSetting_int__Fields *)&(pSVar5->_1).byval_arg.bits,
     unaff_RBX != (Settings_TypedSetting_int__Fields)0x0)) {
    iVar6 = *(int32_t *)((long)pvVar3 + 0x14);
    if (iVar6 < 0x32) {
      uVar1 = *(uint *)((long)unaff_RBX + 0x14);
      puVar10 = (undefined8 *)(ulong)uVar1;
      if ((int)uVar1 < 1) {
        return;
      }
      unaff_RBX = *(Settings_TypedSetting_int__Fields *)((long)in_RDI + 0x10);
      if (unaff_RBX != (Settings_TypedSetting_int__Fields)0x0) {
        *(undefined8 *)(puVar9 + -0x20) = 0x453f2e8;
        iVar6 = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)unaff_RBX,iVar6,MethodInfo_Int32_get_Item);
        if ((int)uVar1 < iVar6) {
          return;
        }
        pSVar5 = ((Settings_TypedSetting_int__o *)((long)in_RDI + 0x18))->klass;
        if ((pSVar5 != (Settings_TypedSetting_int__c *)0x0) &&
           (unaff_RBX = (Settings_TypedSetting_int__Fields)(pSVar5->_1).byval_arg.data,
           unaff_RBX != (Settings_TypedSetting_int__Fields)0x0)) {
          iVar2 = *(int *)((long)unaff_RBX + 0x14);
          puVar10 = &MethodInfo_Void_set_Value;
          *(undefined8 *)(puVar9 + -0x20) = 0x453f31b;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)unaff_RBX,iVar2 + 1,MethodInfo_Void_set_Value);
          pSVar5 = ((Settings_TypedSetting_int__o *)((long)in_RDI + 0x18))->klass;
          if (pSVar5 != (Settings_TypedSetting_int__c *)0x0) {
            pSVar4 = *(Settings_TypedSetting_int__o **)&(pSVar5->_1).byval_arg.bits;
            unaff_RBX.DefaultValue = 0;
            unaff_RBX._value = 0;
            if (pSVar4 != (Settings_TypedSetting_int__o *)0x0) {
              Settings_TypedSetting_int___set_Value(pSVar4,0,MethodInfo_Void_set_Value);
              return;
            }
          }
        }
      }
    }
    else {
      puVar10 = &MethodInfo_Void_set_Value;
      *(undefined8 *)(puVar9 + -0x20) = 0x453f29b;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_RBX,0,MethodInfo_Void_set_Value);
      pSVar5 = ((Settings_TypedSetting_int__o *)((long)in_RDI + 0x18))->klass;
      if (pSVar5 != (Settings_TypedSetting_int__c *)0x0) {
        pSVar4 = (pSVar5->_1).byval_arg.data;
        unaff_RBX.DefaultValue = 0;
        unaff_RBX._value = 0;
        if (pSVar4 != (Settings_TypedSetting_int__o *)0x0) {
          Settings_TypedSetting_int___set_Value(pSVar4,0x32,MethodInfo_Void_set_Value);
          return;
        }
      }
    }
  }
  *(undefined8 *)(puVar9 + -0x20) = 0x453f343;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 **)(puVar9 + -0x20) = puVar10;
  *(Settings_TypedSetting_int__Fields *)(puVar9 + -0x28) = in_RDI;
  register0x00000020 = (BADSPACEBASE *)(puVar9 + -0x30);
  *(long *)(puVar9 + -0x30) = auVar12._0_8_;
  unaff_RBP = (undefined8 *)(auVar12._8_8_ & 0xffffffff);
  in_RDI = unaff_RBX;
  if (g_data_057aef28 == '\0') {
    *(undefined8 *)(puVar9 + -0x38) = 0x453f36d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    in_RDI = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)(puVar9 + -0x38) = 0x453f379;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef28 = '\x01';
  }
  switch(auVar12._8_8_ & 0xffffffff) {
  case 0:
    if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f4ab;
    in_RDI = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x48);
    break;
  case 1:
    goto switchD_0453f395_caseD_1;
  case 2:
    if (*(char **)((long)unaff_RBX + 0x18) != (char *)0x0) {
      in_RDI = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x58);
joined_r0x0453f3e1:
      if (in_RDI != (Settings_TypedSetting_int__Fields)0x0) goto label_0453f41d;
    }
    goto label_0453f4ab;
  case 3:
    if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f4ab;
    in_RDI = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x60);
    break;
  default:
    if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f4ab;
    in_RDI = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x68);
  }
  if (in_RDI == (Settings_TypedSetting_int__Fields)0x0) goto label_0453f4ab;
label_0453f41d:
  iVar2 = *(int *)((long)in_RDI + 0x14);
  unaff_RBP = &MethodInfo_Void_set_Value;
  *(undefined8 *)(puVar9 + -0x38) = 0x453f433;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)in_RDI,iVar2 + 1,MethodInfo_Void_set_Value);
  if ((*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) ||
     (in_RDI = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x40),
     in_RDI == (Settings_TypedSetting_int__Fields)0x0)) goto label_0453f4ab;
  iVar2 = *(int *)((long)in_RDI + 0x14);
  *(undefined8 *)(puVar9 + -0x38) = 0x453f454;
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)in_RDI,iVar2 + 1,MethodInfo_Void_set_Value);
  if (g_data_057aef26 == '\0') {
    *(undefined8 *)(puVar9 + -0x38) = 0x453f469;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    in_RDI = (Settings_TypedSetting_int__Fields)&MethodInfo_Void_set_Value;
    *(undefined8 *)(puVar9 + -0x38) = 0x453f475;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  if (*(char **)((long)unaff_RBX + 0x18) == (char *)0x0) goto label_0453f4ab;
  pSVar4 = *(Settings_TypedSetting_int__o **)(*(char **)((long)unaff_RBX + 0x18) + 0x28);
  in_RDI.DefaultValue = 0;
  in_RDI._value = 0;
  if (pSVar4 == (Settings_TypedSetting_int__o *)0x0) goto label_0453f4ab;
  iVar2 = (pSVar4->fields)._value;
  *(undefined8 *)(puVar9 + -0x38) = 0x453f49d;
  Settings_TypedSetting_int___set_Value(pSVar4,iVar2 + 10,MethodInfo_Void_set_Value);
  uVar8 = *(undefined8 *)(puVar9 + -0x28);
  puVar10 = *(undefined8 **)(puVar9 + -0x20);
  uVar7 = extraout_RAX;
  puVar9 = puVar9 + -0x18;
  in_RDI = unaff_RBX;
  goto GameProgress_GameStatHandler__CheckLevelUp;
switchD_0453f395_caseD_1:
  if (*(char **)((long)unaff_RBX + 0x18) != (char *)0x0) {
    in_RDI = *(Settings_TypedSetting_int__Fields *)(*(char **)((long)unaff_RBX + 0x18) + 0x50);
    goto joined_r0x0453f3e1;
  }
label_0453f4ab:
  *(code **)(puVar9 + -0x38) = GameProgress_GameStatHandler__RegisterHumanKill;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  goto code_r0x0453f4b0;
}


// GameProgress.GameStatHandler$$RegisterDamage
// il2cpp: void GameProgress_GameStatHandler__RegisterDamage (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x453f640

void GameProgress_GameStatHandler__RegisterDamage(void)

{
  long *plVar1;
  Settings_TypedSetting_float__o *__this;
  long in_RDI;
  float fVar2;
  float value;
  
  plVar1 = (long *)(in_RDI + 0x18);
  if ((*plVar1 != 0) && (in_RDI = 0, *(long *)(*plVar1 + 0xa8) != 0)) {
    GameProgress_DamageSetting__Register();
    return;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef2a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057aef2a = '\x01';
  }
  if ((*(long *)(in_RDI + 0x18) != 0) &&
     (__this = *(Settings_TypedSetting_float__o **)(*(long *)(in_RDI + 0x18) + 0x38),
     __this != (Settings_TypedSetting_float__o *)0x0)) {
    value = (__this->fields)._value;
    if (value <= fVar2) {
      value = fVar2;
    }
    Settings_TypedSetting_float___set_Value(__this,value,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// GameProgress.GameStatHandler$$RegisterSpeed
// il2cpp: void GameProgress_GameStatHandler__RegisterSpeed (GameProgress_GameStatHandler_o* __this, float speed, const MethodInfo* method);
// 0x453f670

void GameProgress_GameStatHandler__RegisterSpeed
               (GameProgress_GameStatHandler_o *__this,float speed,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_FloatSetting_o *__this_00;
  float value;
  
  if (g_data_057aef2a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057aef2a = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
     (__this_00 = (pGVar1->fields).HighestSpeed, __this_00 != (Settings_FloatSetting_o *)0x0)) {
    value = (__this_00->fields)._value;
    if (value <= speed) {
      value = speed;
    }
    Settings_TypedSetting_float___set_Value((Settings_TypedSetting_float__o *)__this_00,value,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// GameProgress.GameStatHandler$$RegisterInteraction
// il2cpp: void GameProgress_GameStatHandler__RegisterInteraction (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t type, const MethodInfo* method);
// 0x453f6f0

void GameProgress_GameStatHandler__RegisterInteraction
               (GameProgress_GameStatHandler_o *__this,UnityEngine_GameObject_o *interact,int32_t type,
               MethodInfo *method)

{
  return;
}


