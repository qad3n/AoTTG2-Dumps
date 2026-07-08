// Type: GameProgress.GameProgressManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/GameProgressManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/GameProgressManager.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$.ctor
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__17___ctor (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x420c690

void GameProgress_GameProgressManager_<IncrementPlayTime>d__17___ctor
               (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.IDisposable.Dispose
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_IDisposable_Dispose (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x420c740

void GameProgress_GameProgressManager_<IncrementPlayTime>d__17__System_IDisposable_Dispose
               (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,
               MethodInfo *method)

{
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$MoveNext
// il2cpp: bool GameProgress_GameProgressManager__IncrementPlayTime_d__17__MoveNext (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x420c750

bool_conflict
GameProgress_GameProgressManager_<IncrementPlayTime>d__17__MoveNext
          (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_TypedSetting_float__o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar3;
  
  if (DAT_05705043 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05705043 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) ||
       (__this_00 = *(Settings_TypedSetting_float__o **)(lVar2 + 0x30),
       __this_00 == (Settings_TypedSetting_float__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Settings_TypedSetting<float>__set_Value
              (__this_00,(__this_00->fields)._value + 10.0,MethodInfo_Void_set_Value);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
  }
  __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,10.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x420c870

Il2CppObject *
GameProgress_GameProgressManager_<IncrementPlayTime>d__17__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_IEnumerator_Reset (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x420c880

void GameProgress_GameProgressManager_<IncrementPlayTime>d__17__System_Collections_IEnumerator_Reset
               (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameProgress_GameProgressManager__IncrementPlayTime_d__17__System_Collections_IEnumerator_get_Current (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o* __this, const MethodInfo* method);
// 0x420c8c0

Il2CppObject *
GameProgress_GameProgressManager_<IncrementPlayTime>d__17__System_Collections_IEnumerator_get_Current
          (GameProgress_GameProgressManager__IncrementPlayTime_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager$$Init
// il2cpp: void GameProgress_GameProgressManager__Init (const MethodInfo* method);
// 0x420b3d0

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
  GameProgress_QuestHandler_o *__this_02;
  Events_OnLoadScene_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 auVar8 [16];
  
  if (DAT_05705036 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AchievementHandler);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressContainer);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&TypeInfo_GameStatHandler);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_QuestHandler);
    il2cpp_init_method_metadata(&MethodInfo_GameProgressManager_CreateSingleton_GameProgress);
    DAT_05705036 = '\x01';
  }
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar6 = (MethodInfo *)
           Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_GameProgressManager + 0xb8),MethodInfo_GameProgressManager_CreateSingleton_GameProgress);
  **(undefined8 **)(TypeInfo_GameProgressManager + 0xb8) = pMVar6;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GameProgressManager + 0xb8));
  __this_00 = (GameProgress_GameProgressContainer_o *)il2cpp_runtime_glue(TypeInfo_GameProgressContainer);
  GameProgress_GameProgressContainer___ctor(__this_00,pMVar6);
  lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
  *(GameProgress_GameProgressContainer_o **)(lVar3 + 8) = __this_00;
  il2cpp_runtime_glue(lVar3 + 8);
  __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_GameProgressManager + 0xb8);
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (DAT_05705041 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_IncrementPlayTime_d__17);
      DAT_05705041 = '\x01';
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_IncrementPlayTime_d__17);
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine
              (__this,(System_Collections_IEnumerator_o *)pIVar7,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    if (lVar3 != 0) {
      gameStat = *(GameProgress_GameStatContainer_o **)(lVar3 + 0x30);
      auVar8 = il2cpp_runtime_glue(TypeInfo_GameStatHandler);
      GameProgress_GameStatHandler___ctor(auVar8._0_8_,gameStat,auVar8._8_8_);
      lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
      *(GameProgress_GameStatHandler_o **)(lVar3 + 0x10) = auVar8._0_8_;
      il2cpp_runtime_glue(lVar3 + 0x10);
      lVar3 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
      if (lVar3 != 0) {
        pMVar6 = *(MethodInfo **)(lVar3 + 0x20);
        auVar8 = il2cpp_runtime_glue(TypeInfo_AchievementHandler);
        method_00 = auVar8._8_8_;
        __this_01 = auVar8._0_8_;
        if (DAT_0570501c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_QuestHandler);
          DAT_0570501c = '\x01';
          method_00 = extraout_RDX;
        }
        if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX_00;
        }
        GameProgress_QuestHandler___ctor
                  ((GameProgress_QuestHandler_o *)__this_01,(GameProgress_QuestContainer_o *)0x0,
                   method_00);
        (__this_01->fields)._achievement = (GameProgress_AchievementContainer_o *)pMVar6;
        il2cpp_runtime_glue(&(__this_01->fields)._achievement);
        GameProgress_AchievementHandler__LoadAchievements(__this_01,pMVar6);
        GameProgress_AchievementHandler__CacheActiveAchievements(__this_01,pMVar6);
        lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
        *(GameProgress_AchievementHandler_o **)(lVar3 + 0x18) = __this_01;
        il2cpp_runtime_glue(lVar3 + 0x18,__this_01);
        lVar3 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
        if (lVar3 != 0) {
          quest = *(GameProgress_QuestContainer_o **)(lVar3 + 0x28);
          auVar8 = il2cpp_runtime_glue(TypeInfo_QuestHandler);
          __this_02 = auVar8._0_8_;
          GameProgress_QuestHandler___ctor(__this_02,quest,auVar8._8_8_);
          lVar3 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
          *(GameProgress_QuestHandler_o **)(lVar3 + 0x20) = __this_02;
          il2cpp_runtime_glue(lVar3 + 0x20,__this_02);
          lVar3 = MethodInfo_Void_Add;
          pSVar4 = *(System_Collections_Generic_List_object__o **)
                    (*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
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
                il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar4,pIVar7,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              lVar3 = MethodInfo_Void_Add;
              pSVar4 = *(System_Collections_Generic_List_object__o **)
                        (*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
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
                    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar4,pIVar7,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
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
                        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  (pSVar4,pIVar7,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      }
                      value = (Events_OnLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnLoadScene);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$OnApplicationQuit
// il2cpp: void GameProgress_GameProgressManager__OnApplicationQuit (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x420b9f0

void GameProgress_GameProgressManager__OnApplicationQuit
               (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  code *vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  
  if (DAT_05705037 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    DAT_05705037 = '\x01';
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  if (DAT_05705039 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    DAT_05705039 = '\x01';
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
    in_RDX = extraout_RDX_01;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    in_RDX = extraout_RDX_02;
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  vtable_dispatch = *(code **)(*plVar2 + 0x238);
  (*vtable_dispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x240),in_RDX,vtable_dispatch);
  return;
}


// GameProgress.GameProgressManager$$OnLoadScene
// il2cpp: void GameProgress_GameProgressManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x420bb50

void GameProgress_GameProgressManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  GameProgress_AchievementHandler_o *__this;
  GameProgress_QuestHandler_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05705038 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    DAT_05705038 = '\x01';
  }
  if (sceneName != 1) {
    return;
  }
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05705039 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    DAT_05705039 = '\x01';
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  if (plVar2 != (long *)0x0) {
    method_00 = *(MethodInfo **)(*plVar2 + 0x240);
    (**(code **)(*plVar2 + 0x238))();
    __this = *(GameProgress_AchievementHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x18);
    if (__this != (GameProgress_AchievementHandler_o *)0x0) {
      GameProgress_AchievementHandler__LoadAchievements(__this,method_00);
      GameProgress_AchievementHandler__CacheActiveAchievements(__this,method_00);
      __this_00 = *(GameProgress_QuestHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x20);
      if (__this_00 != (GameProgress_QuestHandler_o *)0x0) {
        GameProgress_QuestHandler__LoadQuests(__this_00,method_00);
        GameProgress_QuestHandler__CacheActiveQuests(__this_00,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$Save
// il2cpp: void GameProgress_GameProgressManager__Save (const MethodInfo* method);
// 0x420bac0

void GameProgress_GameProgressManager__Save(MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  code *vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  
  if (DAT_05705039 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    DAT_05705039 = '\x01';
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
    in_RDX = extraout_RDX_00;
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  if (plVar2 != (long *)0x0) {
    vtable_dispatch = *(code **)(*plVar2 + 0x238);
    (*vtable_dispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x240),in_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$GetExpToNext
// il2cpp: int32_t GameProgress_GameProgressManager__GetExpToNext (const MethodInfo* method);
// 0x41fcd60

int32_t GameProgress_GameProgressManager__GetExpToNext(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int32_t iVar4;
  
  if (DAT_0570503a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    DAT_0570503a = '\x01';
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x10);
  }
  if (lVar2 != 0) {
    if (DAT_0570504a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
      DAT_0570504a = '\x01';
    }
    if ((*(long *)(lVar2 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 0x20), lVar3 != 0)) {
      iVar4 = *(int32_t *)(lVar3 + 0x14);
      if (0x31 < iVar4) {
        return 0;
      }
      if (*(System_Collections_Generic_List_int__o **)(lVar2 + 0x10) !=
          (System_Collections_Generic_List_int__o *)0x0) {
        iVar4 = System_Collections_Generic_List<int>__get_Item
                          (*(System_Collections_Generic_List_int__o **)(lVar2 + 0x10),iVar4,
                           MethodInfo_Int32_get_Item);
        return iVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$AddExp
// il2cpp: void GameProgress_GameProgressManager__AddExp (int32_t exp, const MethodInfo* method);
// 0x420bd00

void GameProgress_GameProgressManager__AddExp(int32_t exp,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameStatHandler_o *__this;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *__this_00;
  uint value;
  MethodInfo *method_00;
  
  if (DAT_0570503b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    DAT_0570503b = '\x01';
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GameProgressManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(GameProgress_GameStatHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x10);
  }
  else {
    __this = *(GameProgress_GameStatHandler_o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x10);
  }
  if (__this != (GameProgress_GameStatHandler_o *)0x0) {
    if (DAT_0570504b == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
      DAT_0570504b = '\x01';
    }
    pGVar2 = (__this->fields)._gameStat;
    if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
       (__this_00 = (pGVar2->fields).Exp, __this_00 != (Settings_IntSetting_o *)0x0)) {
      value = exp + (__this_00->fields)._value;
      method_00 = (MethodInfo *)(ulong)value;
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)__this_00,value,MethodInfo_Void_set_Value);
      GameProgress_GameStatHandler__CheckLevelUp(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$RegisterTitanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterTitanKill (Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x420be60

void GameProgress_GameProgressManager__RegisterTitanKill(void)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_0570503c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    DAT_0570503c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this,
               MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    while( true ) {
      __this_00.fields._8_8_ = pIVar3;
      __this_00.fields._list = pSVar2;
      __this_00.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[4].methodPtr)();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$RegisterHumanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterHumanKill (Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x420c000

void GameProgress_GameProgressManager__RegisterHumanKill(void)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_0570503d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    DAT_0570503d = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this,
               MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    while( true ) {
      __this_00.fields._8_8_ = pIVar3;
      __this_00.fields._list = pSVar2;
      __this_00.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[5].methodPtr)();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$RegisterDamage
// il2cpp: void GameProgress_GameProgressManager__RegisterDamage (UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x420c1a0

void GameProgress_GameProgressManager__RegisterDamage(void)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_0570503e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    DAT_0570503e = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this,
               MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    while( true ) {
      __this_00.fields._8_8_ = pIVar3;
      __this_00.fields._list = pSVar2;
      __this_00.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[6].methodPtr)();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$RegisterSpeed
// il2cpp: void GameProgress_GameProgressManager__RegisterSpeed (float speed, const MethodInfo* method);
// 0x420c350

/* WARNING: Removing unreachable block (ram,0x0420c429) */

void GameProgress_GameProgressManager__RegisterSpeed(float speed,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  undefined1 in_stack_ffffffffffffffc8 [12];
  Il2CppObject *pIVar2;
  
  if (DAT_0570503f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    DAT_0570503f = '\x01';
  }
  pIVar2 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,__this,
             MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
  __this_00.fields._version = (int32_t)speed;
  __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
  __this_00.fields._index = in_stack_ffffffffffffffc8._8_4_;
  __this_00.fields._current = pIVar2;
  bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
  if ((char)bVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_01.fields._version = (int32_t)speed;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffc8._0_8_;
  __this_01.fields._index = in_stack_ffffffffffffffc8._8_4_;
  __this_01.fields._current = pIVar2;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
  return;
}


// GameProgress.GameProgressManager$$RegisterInteraction
// il2cpp: void GameProgress_GameProgressManager__RegisterInteraction (UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x420c4f0

void GameProgress_GameProgressManager__RegisterInteraction
               (UnityEngine_GameObject_o *interact,int32_t interactionType,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05705040 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseGameProgressHandler_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    DAT_05705040 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 0x28);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,__this,
               MethodInfo_List_1_T__Enumerator_GameProgress_BaseGameProgre);
    while( true ) {
      __this_00.fields._8_8_ = pIVar3;
      __this_00.fields._list = pSVar2;
      __this_00.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[8].methodPtr)
                (pIVar4,interact,(ulong)(uint)interactionType,pIVar4->klass->vtable[8].method);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameProgressManager$$IncrementPlayTime
// il2cpp: System_Collections_IEnumerator_o* GameProgress_GameProgressManager__IncrementPlayTime (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x420b800

System_Collections_IEnumerator_o *
GameProgress_GameProgressManager__IncrementPlayTime
          (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05705041 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IncrementPlayTime_d__17);
    DAT_05705041 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_IncrementPlayTime_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.GameProgressManager$$.ctor
// il2cpp: void GameProgress_GameProgressManager___ctor (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x420c6b0

void GameProgress_GameProgressManager___ctor
               (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.GameProgressManager$$.cctor
// il2cpp: void GameProgress_GameProgressManager___cctor (const MethodInfo* method);
// 0x420c6c0

void GameProgress_GameProgressManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this;
  
  if (DAT_05705042 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_BaseGameProgressHandler);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseGameProgressHandler);
    DAT_05705042 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseGameProgressHandler);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_GameProgress_BaseGameProgressHandler);
  lVar1 = *(long *)(TypeInfo_GameProgressManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x28) = __this;
  il2cpp_runtime_glue(lVar1 + 0x28,__this);
  return;
}


