// Type: GameProgress.GameProgressManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameProgressManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// --------------------------------

// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$.ctor
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__17___ctor (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x453edc0

void GameProgress_GameProgressManager__IncrementPlayTime_d__17___ctor
               (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.IDisposable.Dispose
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_IDisposable_Dispose (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x453ee70

void GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_IDisposable_Dispose
               (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$MoveNext
// il2cpp: bool GameProgress_GameProgressManager__IncrementPlayTime_d__17__MoveNext (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x453ee80

bool_conflict
GameProgress_GameProgressManager__IncrementPlayTime_d__17__MoveNext
          (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_TypedSetting_float__o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar3;
  long lVar4;
  
  if (g_data_057aef1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    g_data_057aef1e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    lVar4 = TypeInfo_GameProgressManager;
    if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) ||
       (__this_00 = *(Settings_TypedSetting_float__o **)(lVar2 + 0x30), lVar4 = 0,
       __this_00 == (Settings_TypedSetting_float__o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)*(undefined8 *)(lVar4 + 0x18);
    }
    Settings_TypedSetting_float___set_Value(__this_00,(__this_00->fields)._value + 10.0,MethodInfo_Void_set_Value);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
  }
  __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,10.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x453efa0

Il2CppObject *
GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_IEnumerator_Reset (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x453efb0

void GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_IEnumerator_Reset
               (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_IEnumerator_get_Current (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x453eff0

Il2CppObject *
GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_IEnumerator_get_Current
          (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager$$Init
// il2cpp: void GameProgress_GameProgressManager__Init (const MethodInfo* method);
// 0x453da20

void GameProgress_GameProgressManager__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  UnityEngine_MonoBehaviour_o *__this;
  GameProgress_GameStatContainer_o *gameStat;
  GameProgress_QuestContainer_o *quest;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  GameProgress_GameProgressContainer_o *__this_00;
  Il2CppObject *pIVar7;
  GameProgress_AchievementHandler_o *__this_01;
  Events_OnLoadScene_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 auVar8 [16];
  
  if (g_data_057aef11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AchievementHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameStatHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameProgressManager_CreateSingleton_GameProgressManager);
    g_data_057aef11 = '\x01';
  }
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)
           Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_GameProgressManager + 0xb8),MethodInfo_GameProgressManager_CreateSingleton_GameProgressManager);
  **(undefined8 **)(TypeInfo_GameProgressManager + 0xb8) = pMVar6;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GameProgressManager + 0xb8));
  __this_00 = (GameProgress_GameProgressContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameProgressContainer);
  GameProgress_GameProgressContainer___ctor(__this_00,pMVar6);
  lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
  *(GameProgress_GameProgressContainer_o **)(lVar3 + 8) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar3 + 8);
  __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_GameProgressManager + 0xb8);
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057aef1c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_IncrementPlayTime_d__17);
      g_data_057aef1c = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_IncrementPlayTime_d__17);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              (__this,(System_Collections_IEnumerator_o *)pIVar7,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (lVar3 != 0) {
      gameStat = *(GameProgress_GameStatContainer_o **)(lVar3 + 0x30);
      auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_GameStatHandler);
      GameProgress_GameStatHandler___ctor(auVar8._0_8_,gameStat,auVar8._8_8_);
      lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
      *(GameProgress_GameStatHandler_o **)(lVar3 + 0x10) = auVar8._0_8_;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x10);
      lVar3 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
      if (lVar3 != 0) {
        pMVar6 = *(MethodInfo **)(lVar3 + 0x20);
        auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_AchievementHandler);
        method_00 = auVar8._8_8_;
        __this_01 = auVar8._0_8_;
        if (g_data_057aeef7 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
          g_data_057aeef7 = '\x01';
          method_00 = extraout_RDX;
        }
        if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_00;
        }
        GameProgress_QuestHandler___ctor
                  ((GameProgress_QuestHandler_o *)__this_01,(GameProgress_QuestContainer_o *)0x0,method_00);
        (__this_01->fields)._achievement = (GameProgress_AchievementContainer_o *)pMVar6;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._achievement);
        GameProgress_AchievementHandler__LoadAchievements(__this_01,pMVar6);
        GameProgress_AchievementHandler__CacheActiveAchievements(__this_01,pMVar6);
        lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
        *(GameProgress_AchievementHandler_o **)(lVar3 + 0x18) = __this_01;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x18);
        lVar3 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
        if (lVar3 != 0) {
          quest = *(GameProgress_QuestContainer_o **)(lVar3 + 0x28);
          auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_QuestHandler);
          GameProgress_QuestHandler___ctor(auVar8._0_8_,quest,auVar8._8_8_);
          lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
          *(GameProgress_QuestHandler_o **)(lVar3 + 0x20) = auVar8._0_8_;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
          lVar3 = MethodInfo_Void_Add;
          pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
          if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
            pIVar7 = *(Il2CppObject **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x10);
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar4->fields)._items;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = pIVar7;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar4,pIVar7,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              lVar3 = MethodInfo_Void_Add;
              pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
              if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
                pIVar7 = *(Il2CppObject **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x18);
                piVar1 = &(pSVar4->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (pSVar4->fields)._items;
                if (pSVar5 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar4->fields)._size;
                  if (uVar2 < (uint)pSVar5->max_length) {
                    (pSVar4->fields)._size = uVar2 + 1;
                    pSVar5->m_Items[(int)uVar2] = pIVar7;
                    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar4,pIVar7,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar3 = MethodInfo_Void_Add;
                  pSVar4 = *(System_Collections_Generic_List_object__o **)
                            (*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
                  if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
                    pIVar7 = *(Il2CppObject **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x20);
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (pSVar4->fields)._items;
                    if (pSVar5 != (System_Object_array *)0x0) {
                      uVar2 = (pSVar4->fields)._size;
                      if (uVar2 < (uint)pSVar5->max_length) {
                        (pSVar4->fields)._size = uVar2 + 1;
                        pSVar5->m_Items[(int)uVar2] = pIVar7;
                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  (pSVar4,pIVar7,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
                        ;
                      }
                      value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
                      Events_OnLoadScene___ctor();
                      Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IncrementPlayTime_d__17);
    g_data_057aef1c = '\x01';
  }
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_IncrementPlayTime_d__17);
  System_Object___ctor(pIVar7,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar7[1].klass = 0;
  return;
}


// GameProgress.GameProgressManager$$OnApplicationQuit
// il2cpp: void GameProgress_GameProgressManager__OnApplicationQuit (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x453e040

void GameProgress_GameProgressManager__OnApplicationQuit
               (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  code *vtableDispatch;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  GameProgress_QuestItem_o *pGVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  long lVar7;
  bool_conflict bVar8;
  long *plVar9;
  undefined8 extraout_RDX;
  undefined8 uVar10;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 unaff_RBP;
  GameProgress_AchievementHandler_o *pGVar13;
  GameProgress_AchievementHandler_o *__this_01;
  GameProgress_AchievementHandler_o *__this_02;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar14 [12];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_10;
  
  if (g_data_057aef12 == '\0') {
    puStack_10 = (undefined8 *)0x453e0a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef12 = '\x01';
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e0bc;
label_0453e05d:
    if (g_data_057aef14 != '\0') goto label_0453e066;
label_0453e0ca:
    puStack_10 = (undefined8 *)0x453e0d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e0e9;
label_0453e072:
    plVar9 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e05d;
label_0453e0bc:
    puStack_10 = (undefined8 *)0x453e0c1;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aef14 == '\0') goto label_0453e0ca;
label_0453e066:
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e072;
label_0453e0e9:
    puStack_10 = (undefined8 *)0x453e0ee;
    il2cpp_runtime_helper_02337ed0();
    plVar9 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
    return;
  }
  puStack_10 = (undefined8 *)0x453e106;
  il2cpp_runtime_helper_022b2c90();
  puStack_10 = &TypeInfo_GameProgressManager;
  if (g_data_057aef14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    uVar10 = extraout_RDX_00;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e177;
label_0453e12d:
    plVar9 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  else {
    uVar10 = extraout_RDX;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e12d;
label_0453e177:
    il2cpp_runtime_helper_02337ed0();
    plVar9 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    uVar10 = extraout_RDX_01;
  }
  if (plVar9 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar9 + 0x238);
    (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x240),uVar10,vtableDispatch);
    return;
  }
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  puStack_20 = &TypeInfo_GameProgressManager;
  ppuVar12 = (undefined8 **)&uStack_28;
  puVar11 = (undefined8 *)((ulong)plVar9 & 0xffffffff);
  if (g_data_057aef13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef13 = '\x01';
  }
  if ((int)plVar9 != 1) {
    return;
  }
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aef14 == '\0') goto label_0453e21a;
label_0453e1e3:
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e1ef;
label_0453e239:
    il2cpp_runtime_helper_02337ed0();
    pGVar13 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar13 != (GameProgress_AchievementHandler_o *)0x0) goto label_0453e251;
label_0453e2ae:
    __this_02 = pGVar13;
    il2cpp_runtime_helper_022b2c90();
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_02,method);
    unaff_R14 = &TypeInfo_GameProgressManager;
  }
  else {
    if (g_data_057aef14 != '\0') goto label_0453e1e3;
label_0453e21a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e239;
label_0453e1ef:
    pGVar13 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar13 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
label_0453e251:
    method = (MethodInfo *)pGVar13->klass[1]._1.castClass;
    (*(code *)pGVar13->klass[1]._1.element_class)();
    __this_01 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x18);
    puVar11 = (undefined8 *)0x0;
    if (__this_01 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_AchievementHandler__LoadAchievements(__this_01,method);
    GameProgress_AchievementHandler__CacheActiveAchievements(__this_01,method);
    __this_02 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x20);
    puVar11 = (undefined8 *)0x0;
    pGVar13 = __this_01;
    if (__this_02 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_02,method);
    ppuVar12 = &puStack_10;
    puVar11 = puStack_20;
  }
  *(undefined8 *)((long)ppuVar12 + -8) = unaff_RBP;
  *(undefined8 *)((long)ppuVar12 + -0x10) = unaff_R15;
  *(undefined8 **)((long)ppuVar12 + -0x18) = unaff_R14;
  *(undefined8 *)((long)ppuVar12 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppuVar12 + -0x28) = unaff_R12;
  *(undefined8 **)((long)ppuVar12 + -0x30) = puVar11;
  if (g_data_057aef31 == '\0') {
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45400d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45400e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45400ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45400fa;
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x4540106;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x4540112;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454011e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057aef31 = '\x01';
  }
  *(undefined8 *)((long)ppuVar12 + -0x68) = 0;
  *(undefined8 *)((long)ppuVar12 + -0x60) = 0;
  *(undefined8 *)((long)ppuVar12 + -0x58) = 0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_02->fields)._activeQuests;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045402dd;
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x4540152;
  System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
  pGVar1 = (__this_02->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).DailyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454018f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppuVar12 + -0x48),pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)ppuVar12 + -0x58) = *(undefined8 *)((long)ppuVar12 + -0x38);
  *(undefined8 *)((long)ppuVar12 + -0x68) = *(undefined8 *)((long)ppuVar12 + -0x48);
  *(undefined8 *)((long)ppuVar12 + -0x60) = *(undefined8 *)((long)ppuVar12 + -0x40);
  while( true ) {
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45401bc;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar12 + -0x68),
                       (MethodInfo_321A1D0 *)((long)ppuVar12 + -0x68));
    if ((char)bVar8 == '\0') break;
    pGVar4 = *(GameProgress_QuestItem_o **)((long)ppuVar12 + -0x58);
    if (pGVar4 == (GameProgress_QuestItem_o *)0x0) {
label_045402c4:
      *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402c9;
      il2cpp_runtime_helper_022b2c90();
label_045402c9:
      *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402ce;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402ce;
    }
    pSVar5 = (pGVar4->fields).Progress;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402c9;
    pSVar6 = (pGVar4->fields).Amount;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) {
      *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402c4;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402c4;
    }
    if ((pSVar5->fields)._value < (pSVar6->fields)._value) {
      *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45401f8;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_02,pGVar4,method_00);
    }
  }
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454020c;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar12 + -0x68),
             (MethodInfo_321A1C0 *)((long)ppuVar12 + -0x68));
  pGVar1 = (__this_02->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).WeeklyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x4540242;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppuVar12 + -0x48),pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)ppuVar12 + -0x58) = *(undefined8 *)((long)ppuVar12 + -0x38);
  *(undefined8 *)((long)ppuVar12 + -0x68) = *(undefined8 *)((long)ppuVar12 + -0x48);
  *(undefined8 *)((long)ppuVar12 + -0x60) = *(undefined8 *)((long)ppuVar12 + -0x40);
  while( true ) {
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454026c;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar12 + -0x68),
                       (MethodInfo_321A1D0 *)((long)ppuVar12 + -0x68));
    if ((char)bVar8 == '\0') {
      *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402b0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar12 + -0x68),
                 (MethodInfo_321A1C0 *)((long)ppuVar12 + -0x68));
      return;
    }
    pGVar4 = *(GameProgress_QuestItem_o **)((long)ppuVar12 + -0x58);
    if (pGVar4 == (GameProgress_QuestItem_o *)0x0) break;
    pSVar5 = (pGVar4->fields).Progress;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402d8;
    pSVar6 = (pGVar4->fields).Amount;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_045402ce;
    if ((pSVar5->fields)._value < (pSVar6->fields)._value) {
      *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454029c;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_02,pGVar4,method_01);
    }
  }
  goto label_045402d3;
label_045402ce:
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402d3;
  il2cpp_runtime_helper_022b2c90();
label_045402d3:
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402d8;
  il2cpp_runtime_helper_022b2c90();
label_045402d8:
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402dd;
  il2cpp_runtime_helper_022b2c90();
label_045402dd:
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45402e2;
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x4540363;
    plVar9 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar7 = *plVar9;
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454036b;
    __cxa_end_catch();
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454037d;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar12 + -0x68),
               (MethodInfo_321A1C0 *)((long)ppuVar12 + -0x68));
    if (lVar7 == 0) {
      return;
    }
    *(undefined8 *)((long)ppuVar12 + -0x70) = 0x454038e;
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x45403a7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppuVar12 + -0x68),
             (MethodInfo_321A1C0 *)((long)ppuVar12 + -0x68));
  *(undefined8 *)((long)ppuVar12 + -0x70) = 0x4540416;
  _Unwind_Resume(auVar14._0_8_);
}


// GameProgress.GameProgressManager$$OnLoadScene
// il2cpp: void GameProgress_GameProgressManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x453e1a0

void GameProgress_GameProgressManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  GameProgress_QuestItem_o *pGVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  long lVar7;
  undefined8 uVar8;
  bool_conflict bVar9;
  long *plVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  GameProgress_AchievementHandler_o *pGVar11;
  GameProgress_AchievementHandler_o *__this_00;
  GameProgress_AchievementHandler_o *__this_01;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar12 [12];
  undefined1 auStack_18 [8];
  
  if (g_data_057aef13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef13 = '\x01';
  }
  if (sceneName != 1) {
    return;
  }
  uVar8 = 1;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aef14 != '\0') goto label_0453e1e3;
label_0453e21a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e1ef;
label_0453e239:
    il2cpp_runtime_helper_02337ed0();
    pGVar11 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar11 != (GameProgress_AchievementHandler_o *)0x0) goto label_0453e251;
label_0453e2ae:
    __this_01 = pGVar11;
    unaff_RBX = uVar8;
    il2cpp_runtime_helper_022b2c90();
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_01,method);
    register0x00000020 = (BADSPACEBASE *)auStack_18;
    unaff_R14 = &TypeInfo_GameProgressManager;
  }
  else {
    if (g_data_057aef14 == '\0') goto label_0453e21a;
label_0453e1e3:
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e239;
label_0453e1ef:
    pGVar11 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar11 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
label_0453e251:
    method = (MethodInfo *)pGVar11->klass[1]._1.castClass;
    (*(code *)pGVar11->klass[1]._1.element_class)();
    __this_00 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x18);
    uVar8 = 0;
    if (__this_00 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_AchievementHandler__LoadAchievements(__this_00,method);
    GameProgress_AchievementHandler__CacheActiveAchievements(__this_00,method);
    __this_01 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x20);
    uVar8 = 0;
    pGVar11 = __this_00;
    if (__this_01 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_01,method);
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057aef31 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45400d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45400e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45400ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45400fa;
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4540106;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4540112;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454011e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057aef31 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._activeQuests;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045402dd;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4540152;
  System_Collections_Generic_Dictionary_object__object___Clear(__this,MethodInfo_Void_Clear);
  pGVar1 = (__this_01->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).DailyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454018f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)register0x00000020 + -0x48),pSVar3,
             MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)register0x00000020 + -0x58) = *(undefined8 *)((long)register0x00000020 + -0x38);
  *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0x48);
  *(undefined8 *)((long)register0x00000020 + -0x60) = *(undefined8 *)((long)register0x00000020 + -0x40);
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45401bc;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)
                        ((long)register0x00000020 + -0x68),
                       (MethodInfo_321A1D0 *)((long)register0x00000020 + -0x68));
    if ((char)bVar9 == '\0') break;
    pGVar4 = *(GameProgress_QuestItem_o **)((long)register0x00000020 + -0x58);
    if (pGVar4 == (GameProgress_QuestItem_o *)0x0) {
label_045402c4:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402c9;
      il2cpp_runtime_helper_022b2c90();
label_045402c9:
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402ce;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402ce;
    }
    pSVar5 = (pGVar4->fields).Progress;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402c9;
    pSVar6 = (pGVar4->fields).Amount;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402c4;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402c4;
    }
    if ((pSVar5->fields)._value < (pSVar6->fields)._value) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45401f8;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_01,pGVar4,method_00);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454020c;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)register0x00000020 + -0x68),
             (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x68));
  pGVar1 = (__this_01->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).WeeklyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4540242;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)register0x00000020 + -0x48),pSVar3,
             MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)register0x00000020 + -0x58) = *(undefined8 *)((long)register0x00000020 + -0x38);
  *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0x48);
  *(undefined8 *)((long)register0x00000020 + -0x60) = *(undefined8 *)((long)register0x00000020 + -0x40);
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454026c;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)
                        ((long)register0x00000020 + -0x68),
                       (MethodInfo_321A1D0 *)((long)register0x00000020 + -0x68));
    if ((char)bVar9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402b0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)
                  ((long)register0x00000020 + -0x68),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x68))
      ;
      return;
    }
    pGVar4 = *(GameProgress_QuestItem_o **)((long)register0x00000020 + -0x58);
    if (pGVar4 == (GameProgress_QuestItem_o *)0x0) break;
    pSVar5 = (pGVar4->fields).Progress;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402d8;
    pSVar6 = (pGVar4->fields).Amount;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_045402ce;
    if ((pSVar5->fields)._value < (pSVar6->fields)._value) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454029c;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_01,pGVar4,method_01);
    }
  }
label_045402d3:
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402d8;
  il2cpp_runtime_helper_022b2c90();
label_045402d8:
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402dd;
  il2cpp_runtime_helper_022b2c90();
label_045402dd:
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402e2;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4540363;
    plVar10 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar7 = *plVar10;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454036b;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454037d;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)
                ((long)register0x00000020 + -0x68),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x68));
    if (lVar7 == 0) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x454038e;
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45403a7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)register0x00000020 + -0x68),
             (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x68));
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4540416;
  _Unwind_Resume(auVar12._0_8_);
label_045402ce:
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x45402d3;
  il2cpp_runtime_helper_022b2c90();
  goto label_045402d3;
}


// GameProgress.GameProgressManager$$Save
// il2cpp: void GameProgress_GameProgressManager__Save (const MethodInfo* method);
// 0x453e110

void GameProgress_GameProgressManager__Save(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  GameProgress_QuestItem_o *pGVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  long lVar7;
  bool_conflict bVar8;
  long *plVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 unaff_RBP;
  Il2CppClass *in_RSI;
  GameProgress_AchievementHandler_o *pGVar12;
  GameProgress_AchievementHandler_o *__this_00;
  GameProgress_AchievementHandler_o *__this_01;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar13 [12];
  undefined8 uStack_20;
  undefined8 *puStack_18;
  
  if (g_data_057aef14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e177;
label_0453e12d:
    plVar9 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e12d;
label_0453e177:
    il2cpp_runtime_helper_02337ed0();
    plVar9 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
    return;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  puStack_18 = &TypeInfo_GameProgressManager;
  puVar11 = &uStack_20;
  puVar10 = (undefined8 *)((ulong)plVar9 & 0xffffffff);
  if (g_data_057aef13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef13 = '\x01';
  }
  if ((int)plVar9 != 1) {
    return;
  }
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aef14 == '\0') goto label_0453e21a;
label_0453e1e3:
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) != 0) goto label_0453e1ef;
label_0453e239:
    il2cpp_runtime_helper_02337ed0();
    pGVar12 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar12 != (GameProgress_AchievementHandler_o *)0x0) goto label_0453e251;
label_0453e2ae:
    __this_01 = pGVar12;
    il2cpp_runtime_helper_022b2c90();
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_01,(MethodInfo *)in_RSI);
    unaff_R14 = &TypeInfo_GameProgressManager;
  }
  else {
    if (g_data_057aef14 != '\0') goto label_0453e1e3;
label_0453e21a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef14 = '\x01';
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) goto label_0453e239;
label_0453e1ef:
    pGVar12 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (pGVar12 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
label_0453e251:
    in_RSI = pGVar12->klass[1]._1.castClass;
    (*(code *)pGVar12->klass[1]._1.element_class)();
    __this_00 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x18);
    puVar10 = (undefined8 *)0x0;
    if (__this_00 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_AchievementHandler__LoadAchievements(__this_00,(MethodInfo *)in_RSI);
    GameProgress_AchievementHandler__CacheActiveAchievements(__this_00,(MethodInfo *)in_RSI);
    __this_01 = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x20);
    puVar10 = (undefined8 *)0x0;
    pGVar12 = __this_00;
    if (__this_01 == (GameProgress_AchievementHandler_o *)0x0) goto label_0453e2ae;
    GameProgress_QuestHandler__LoadQuests((GameProgress_QuestHandler_o *)__this_01,(MethodInfo *)in_RSI);
    puVar11 = (undefined8 *)&stack0xfffffffffffffff8;
    puVar10 = puStack_18;
  }
  *(undefined8 *)((long)puVar11 + -8) = unaff_RBP;
  *(undefined8 *)((long)puVar11 + -0x10) = unaff_R15;
  *(undefined8 **)((long)puVar11 + -0x18) = unaff_R14;
  *(undefined8 *)((long)puVar11 + -0x20) = unaff_R13;
  *(undefined8 *)((long)puVar11 + -0x28) = unaff_R12;
  *(undefined8 **)((long)puVar11 + -0x30) = puVar10;
  if (g_data_057aef31 == '\0') {
    *(undefined8 *)((long)puVar11 + -0x70) = 0x45400d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x45400e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x45400ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x45400fa;
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4540106;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4540112;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    *(undefined8 *)((long)puVar11 + -0x70) = 0x454011e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057aef31 = '\x01';
  }
  *(undefined8 *)((long)puVar11 + -0x68) = 0;
  *(undefined8 *)((long)puVar11 + -0x60) = 0;
  *(undefined8 *)((long)puVar11 + -0x58) = 0;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)(__this_01->fields)._activeQuests;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_045402dd;
  *(undefined8 *)((long)puVar11 + -0x70) = 0x4540152;
  System_Collections_Generic_Dictionary_object__object___Clear(__this,MethodInfo_Void_Clear);
  pGVar1 = (__this_01->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).DailyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)puVar11 + -0x70) = 0x454018f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)puVar11 + -0x48),pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)puVar11 + -0x58) = *(undefined8 *)((long)puVar11 + -0x38);
  *(undefined8 *)((long)puVar11 + -0x68) = *(undefined8 *)((long)puVar11 + -0x48);
  *(undefined8 *)((long)puVar11 + -0x60) = *(undefined8 *)((long)puVar11 + -0x40);
  while( true ) {
    *(undefined8 *)((long)puVar11 + -0x70) = 0x45401bc;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar11 + -0x68),
                       (MethodInfo_321A1D0 *)((long)puVar11 + -0x68));
    if ((char)bVar8 == '\0') break;
    pGVar4 = *(GameProgress_QuestItem_o **)((long)puVar11 + -0x58);
    if (pGVar4 == (GameProgress_QuestItem_o *)0x0) {
label_045402c4:
      *(undefined8 *)((long)puVar11 + -0x70) = 0x45402c9;
      il2cpp_runtime_helper_022b2c90();
label_045402c9:
      *(undefined8 *)((long)puVar11 + -0x70) = 0x45402ce;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402ce;
    }
    pSVar5 = (pGVar4->fields).Progress;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402c9;
    pSVar6 = (pGVar4->fields).Amount;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) {
      *(undefined8 *)((long)puVar11 + -0x70) = 0x45402c4;
      il2cpp_runtime_helper_022b2c90();
      goto label_045402c4;
    }
    if ((pSVar5->fields)._value < (pSVar6->fields)._value) {
      *(undefined8 *)((long)puVar11 + -0x70) = 0x45401f8;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_01,pGVar4,method_00);
    }
  }
  *(undefined8 *)((long)puVar11 + -0x70) = 0x454020c;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar11 + -0x68),
             (MethodInfo_321A1C0 *)((long)puVar11 + -0x68));
  pGVar1 = (__this_01->fields)._quest;
  if (((pGVar1 == (GameProgress_QuestContainer_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).WeeklyQuestItems, pSVar2 == (Settings_ListSetting_QuestItem__o *)0x0)) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_045402dd;
  *(undefined8 *)((long)puVar11 + -0x70) = 0x4540242;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)((long)puVar11 + -0x48),pSVar3,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  *(undefined8 *)((long)puVar11 + -0x58) = *(undefined8 *)((long)puVar11 + -0x38);
  *(undefined8 *)((long)puVar11 + -0x68) = *(undefined8 *)((long)puVar11 + -0x48);
  *(undefined8 *)((long)puVar11 + -0x60) = *(undefined8 *)((long)puVar11 + -0x40);
  while( true ) {
    *(undefined8 *)((long)puVar11 + -0x70) = 0x454026c;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o)
                       *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar11 + -0x68),
                       (MethodInfo_321A1D0 *)((long)puVar11 + -0x68));
    if ((char)bVar8 == '\0') {
      *(undefined8 *)((long)puVar11 + -0x70) = 0x45402b0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar11 + -0x68),
                 (MethodInfo_321A1C0 *)((long)puVar11 + -0x68));
      return;
    }
    pGVar4 = *(GameProgress_QuestItem_o **)((long)puVar11 + -0x58);
    if (pGVar4 == (GameProgress_QuestItem_o *)0x0) break;
    pSVar5 = (pGVar4->fields).Progress;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_045402d8;
    pSVar6 = (pGVar4->fields).Amount;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_045402ce;
    if ((pSVar5->fields)._value < (pSVar6->fields)._value) {
      *(undefined8 *)((long)puVar11 + -0x70) = 0x454029c;
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)__this_01,pGVar4,method_01);
    }
  }
  goto label_045402d3;
label_045402ce:
  *(undefined8 *)((long)puVar11 + -0x70) = 0x45402d3;
  il2cpp_runtime_helper_022b2c90();
label_045402d3:
  *(undefined8 *)((long)puVar11 + -0x70) = 0x45402d8;
  il2cpp_runtime_helper_022b2c90();
label_045402d8:
  *(undefined8 *)((long)puVar11 + -0x70) = 0x45402dd;
  il2cpp_runtime_helper_022b2c90();
label_045402dd:
  *(undefined8 *)((long)puVar11 + -0x70) = 0x45402e2;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    *(undefined8 *)((long)puVar11 + -0x70) = 0x4540363;
    plVar9 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar7 = *plVar9;
    *(undefined8 *)((long)puVar11 + -0x70) = 0x454036b;
    __cxa_end_catch();
    *(undefined8 *)((long)puVar11 + -0x70) = 0x454037d;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar11 + -0x68),
               (MethodInfo_321A1C0 *)((long)puVar11 + -0x68));
    if (lVar7 == 0) {
      return;
    }
    *(undefined8 *)((long)puVar11 + -0x70) = 0x454038e;
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  *(undefined8 *)((long)puVar11 + -0x70) = 0x45403a7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar11 + -0x68),
             (MethodInfo_321A1C0 *)((long)puVar11 + -0x68));
  *(undefined8 *)((long)puVar11 + -0x70) = 0x4540416;
  _Unwind_Resume(auVar13._0_8_);
}


// GameProgress.GameProgressManager$$GetExpToNext
// il2cpp: int32_t GameProgress_GameProgressManager__GetExpToNext (const MethodInfo* method);
// 0x453e2e0

int32_t GameProgress_GameProgressManager__GetExpToNext(MethodInfo *method)

{
  int iVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  System_Collections_Hashtable_o *pSVar3;
  long lVar4;
  System_Collections_ArrayList_o *__this;
  GameProgress_GameStatContainer_o *pGVar5;
  Settings_IntSetting_o *pSVar6;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  int32_t iVar7;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  bool_conflict bVar8;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  long *plVar9;
  undefined8 extraout_RDX;
  uint uVar10;
  uint in_ESI;
  MethodInfo *pMVar11;
  int iVar12;
  GameProgress_GameStatHandler_o *pGVar13;
  GameProgress_GameStatHandler_o *pGVar14;
  MethodInfo_2A23FA0 **__this_06;
  MethodInfo_2A23FA0 **ppMVar15;
  undefined1 auVar16 [12];
  System_Collections_Generic_List_T__o *pSVar17;
  Il2CppMethodPointer pIVar18;
  Il2CppObject *pIVar19;
  
  if (g_data_057aef15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    g_data_057aef15 = '\x01';
    iVar12 = *(int *)((long)&TypeInfo_GameProgressManager[7].klass + 4);
  }
  else {
    iVar12 = *(int *)((long)&TypeInfo_GameProgressManager[7].klass + 4);
  }
  if (iVar12 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    pGVar13 = TypeInfo_GameProgressManager;
  }
  else {
    pSVar2 = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    pGVar13 = TypeInfo_GameProgressManager;
  }
  TypeInfo_GameProgressManager = pGVar13;
  if (pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    if (g_data_057aef25 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
      pGVar13 = (GameProgress_GameStatHandler_o *)&MethodInfo_Int32_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef25 = '\x01';
    }
    pSVar3 = (pSVar2->fields)._objectsTable;
    if ((pSVar3 != (System_Collections_Hashtable_o *)0x0) &&
       (lVar4 = *(long *)&(pSVar3->fields)._loadsize, lVar4 != 0)) {
      in_ESI = *(uint *)(lVar4 + 0x14);
      if (0x31 < (int)in_ESI) {
        return 0;
      }
      __this = (pSVar2->fields)._objectsArray;
      pGVar13 = (GameProgress_GameStatHandler_o *)0x0;
      if (__this != (System_Collections_ArrayList_o *)0x0) {
        iVar7 = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)__this,in_ESI,MethodInfo_Int32_get_Item);
        return iVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = pGVar13;
  if (g_data_057aef25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    pGVar14 = (GameProgress_GameStatHandler_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef25 = '\x01';
  }
  iVar12 = (int)pGVar14;
  pGVar5 = (pGVar13->fields)._gameStat;
  if ((pGVar5 != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar6 = (pGVar5->fields).Level, pSVar6 != (Settings_IntSetting_o *)0x0)) {
    in_ESI = (pSVar6->fields)._value;
    if (0x31 < (int)in_ESI) {
      return 0;
    }
    __this_00 = (pGVar13->fields)._expPerLevel;
    iVar12 = 0;
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      iVar7 = System_Collections_Generic_List_int___get_Item(__this_00,in_ESI,MethodInfo_Int32_get_Item);
      return iVar7;
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
    pSVar2 = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    __this_06 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
  }
  else {
    pSVar2 = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    __this_06 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
  }
  TypeInfo_GameProgressManager = (GameProgress_GameStatHandler_o *)__this_06;
  if (pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    if (g_data_057aef26 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      __this_06 = &MethodInfo_Void_set_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef26 = '\x01';
    }
    pGVar5 = (GameProgress_GameStatContainer_o *)(pSVar2->fields)._objectsTable;
    if (pGVar5 != (GameProgress_GameStatContainer_o *)0x0) {
      pSVar6 = (pGVar5->fields).Exp;
      __this_06 = (MethodInfo_2A23FA0 **)0x0;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        uVar10 = iVar12 + (pSVar6->fields)._value;
        pMVar11 = (MethodInfo *)(ulong)uVar10;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar6,uVar10,MethodInfo_Void_set_Value);
        GameProgress_GameStatHandler__CheckLevelUp((GameProgress_GameStatHandler_o *)pSVar2,pMVar11);
        return extraout_EAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar15 = __this_06;
  uVar10 = in_ESI;
  if (g_data_057aef26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar15 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  pGVar5 = (((GameProgress_GameStatHandler_o *)__this_06)->fields)._gameStat;
  if (pGVar5 != (GameProgress_GameStatContainer_o *)0x0) {
    pSVar6 = (pGVar5->fields).Exp;
    ppMVar15 = (MethodInfo_2A23FA0 **)0x0;
    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
      in_ESI = in_ESI + (pSVar6->fields)._value;
      pMVar11 = (MethodInfo *)(ulong)in_ESI;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar6,in_ESI,MethodInfo_Void_set_Value);
      GameProgress_GameStatHandler__CheckLevelUp((GameProgress_GameStatHandler_o *)__this_06,pMVar11);
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
  pSVar17 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  pIVar19 = (Il2CppObject *)0x0;
  if (*(int *)((long)&TypeInfo_GameProgressManager[7].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (System_Collections_Generic_List_object__o *)((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Exp;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,__this_01,
               MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    while( true ) {
      __this_02.fields._8_8_ = pIVar18;
      __this_02.fields._list = pSVar17;
      __this_02.fields._current = pIVar19;
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      if ((char)bVar8 == '\0') {
        __this_03.fields._8_8_ = pIVar18;
        __this_03.fields._list = pSVar17;
        __this_03.fields._current = pIVar19;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        return extraout_EAX_01;
      }
      if (pIVar19 == (Il2CppObject *)0x0) break;
      (*pIVar19->klass->vtable[4].methodPtr)
                (pIVar19,ppMVar15,(ulong)uVar10,extraout_RDX,pIVar19->klass->vtable[4].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar4 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar18;
    __this_04.fields._list = pSVar17;
    __this_04.fields._current = pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar4 == 0) {
      return extraout_EAX_02;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_05.fields._8_8_ = pIVar18;
  __this_05.fields._list = pSVar17;
  __this_05.fields._current = pIVar19;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar16._0_8_);
}


// GameProgress.GameProgressManager$$AddExp
// il2cpp: void GameProgress_GameProgressManager__AddExp (int32_t exp, const MethodInfo* method);
// 0x453e430

void GameProgress_GameProgressManager__AddExp(int32_t exp,MethodInfo *method)

{
  int iVar1;
  System_Collections_Specialized_OrderedDictionary_o *__this;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  uint uVar7;
  uint uVar8;
  MethodInfo *pMVar9;
  MethodInfo_2A23FA0 **__this_05;
  MethodInfo_2A23FA0 **ppMVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppObject *pIVar14;
  
  uVar7 = (uint)method;
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
    __this = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    __this_05 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
  }
  else {
    __this = ((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Settings;
    __this_05 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
  }
  TypeInfo_GameProgressManager = (GameProgress_GameStatHandler_o *)__this_05;
  if (__this != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    if (g_data_057aef26 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      __this_05 = &MethodInfo_Void_set_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057aef26 = '\x01';
    }
    pGVar2 = (GameProgress_GameStatContainer_o *)(__this->fields)._objectsTable;
    if (pGVar2 != (GameProgress_GameStatContainer_o *)0x0) {
      pSVar3 = (pGVar2->fields).Exp;
      __this_05 = (MethodInfo_2A23FA0 **)0x0;
      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
        uVar7 = exp + (pSVar3->fields)._value;
        pMVar9 = (MethodInfo *)(ulong)uVar7;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar3,uVar7,MethodInfo_Void_set_Value);
        GameProgress_GameStatHandler__CheckLevelUp((GameProgress_GameStatHandler_o *)__this,pMVar9);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar10 = __this_05;
  uVar8 = uVar7;
  if (g_data_057aef26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar10 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef26 = '\x01';
  }
  pGVar2 = (((GameProgress_GameStatHandler_o *)__this_05)->fields)._gameStat;
  if (pGVar2 != (GameProgress_GameStatContainer_o *)0x0) {
    pSVar3 = (pGVar2->fields).Exp;
    ppMVar10 = (MethodInfo_2A23FA0 **)0x0;
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      uVar7 = uVar7 + (pSVar3->fields)._value;
      pMVar9 = (MethodInfo *)(ulong)uVar7;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar3,uVar7,MethodInfo_Void_set_Value);
      GameProgress_GameStatHandler__CheckLevelUp((GameProgress_GameStatHandler_o *)__this_05,pMVar9);
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
  pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  if (*(int *)((long)&TypeInfo_GameProgressManager[7].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (System_Collections_Generic_List_object__o *)((TypeInfo_GameProgressManager[5].fields._gameStat)->fields).Exp;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff88,__this_00,
               MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    while( true ) {
      __this_01.fields._8_8_ = pIVar13;
      __this_01.fields._list = pSVar12;
      __this_01.fields._current = pIVar14;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = pIVar13;
        __this_02.fields._list = pSVar12;
        __this_02.fields._current = pIVar14;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
        return;
      }
      if (pIVar14 == (Il2CppObject *)0x0) break;
      (*pIVar14->klass->vtable[4].methodPtr)
                (pIVar14,ppMVar10,(ulong)uVar8,extraout_RDX,pIVar14->klass->vtable[4].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar4 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar13;
    __this_03.fields._list = pSVar12;
    __this_03.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar13;
  __this_04.fields._list = pSVar12;
  __this_04.fields._current = pIVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar11._0_8_);
}


// GameProgress.GameProgressManager$$RegisterTitanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterTitanKill (Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x453e590

void GameProgress_GameProgressManager__RegisterTitanKill(void)

{
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057aef17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    g_data_057aef17 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this,MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler
              );
    while( true ) {
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = pSVar5;
      __this_00.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[4].methodPtr)();
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar6;
  __this_03.fields._list = pSVar5;
  __this_03.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar4._0_8_);
}


// GameProgress.GameProgressManager$$RegisterHumanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterHumanKill (Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x453e730

void GameProgress_GameProgressManager__RegisterHumanKill(void)

{
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057aef18 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    g_data_057aef18 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this,MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler
              );
    while( true ) {
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = pSVar5;
      __this_00.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[5].methodPtr)();
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar6;
  __this_03.fields._list = pSVar5;
  __this_03.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar4._0_8_);
}


// GameProgress.GameProgressManager$$RegisterDamage
// il2cpp: void GameProgress_GameProgressManager__RegisterDamage (UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x453e8d0

void GameProgress_GameProgressManager__RegisterDamage(void)

{
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057aef19 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    g_data_057aef19 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this,MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler
              );
    while( true ) {
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = pSVar5;
      __this_00.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[6].methodPtr)();
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar6;
  __this_03.fields._list = pSVar5;
  __this_03.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar4._0_8_);
}


// GameProgress.GameProgressManager$$RegisterSpeed
// il2cpp: void GameProgress_GameProgressManager__RegisterSpeed (float speed, const MethodInfo* method);
// 0x453ea80

void GameProgress_GameProgressManager__RegisterSpeed(float speed,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  undefined1 in_stack_ffffffffffffffc8 [12];
  Il2CppObject *pIVar5;
  
  if (g_data_057aef1a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    g_data_057aef1a = '\x01';
  }
  pIVar5 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,__this,MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler
              );
    __this_00.fields._version = (int32_t)speed;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
    __this_00.fields._index = in_stack_ffffffffffffffc8._8_4_;
    __this_00.fields._current = pIVar5;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
    if ((char)bVar2 == '\0') {
      __this_01.fields._version = (int32_t)speed;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffffc8._8_4_;
      __this_01.fields._current = pIVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)speed;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffffc8._8_4_;
    __this_02.fields._current = pIVar5;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._version = (int32_t)speed;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffffc8._8_4_;
  __this_03.fields._current = pIVar5;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// GameProgress.GameProgressManager$$RegisterInteraction
// il2cpp: void GameProgress_GameProgressManager__RegisterInteraction (UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x453ec20

void GameProgress_GameProgressManager__RegisterInteraction
               (UnityEngine_GameObject_o *interact,int32_t interactionType,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057aef1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
    g_data_057aef1b = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,__this,MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler
              );
    while( true ) {
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = pSVar5;
      __this_00.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[8].methodPtr)
                (pIVar7,interact,(ulong)(uint)interactionType,pIVar7->klass->vtable[8].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar6;
  __this_03.fields._list = pSVar5;
  __this_03.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// GameProgress.GameProgressManager$$IncrementPlayTime
// il2cpp: System_Collections_IEnumerator_o* GameProgress_GameProgressManager__IncrementPlayTime (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x453de50

System_Collections_IEnumerator_o *
GameProgress_GameProgressManager__IncrementPlayTime
          (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057aef1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IncrementPlayTime_d__17);
    g_data_057aef1c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_IncrementPlayTime_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.GameProgressManager$$.ctor
// il2cpp: void GameProgress_GameProgressManager___ctor (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x453ede0

void GameProgress_GameProgressManager___ctor(GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.GameProgressManager$$.cctor
// il2cpp: void GameProgress_GameProgressManager___cctor (const MethodInfo* method);
// 0x453edf0

void GameProgress_GameProgressManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this;
  
  if (g_data_057aef1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_BaseGameProgressHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseGameProgressHandler);
    g_data_057aef1d = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseGameProgressHandler);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_GameProgress_BaseGameProgressHandler);
  lVar1 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x28) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,__this);
  return;
}


