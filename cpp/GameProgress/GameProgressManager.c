// Type: GameProgress.GameProgressManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameProgressManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// --------------------------------

// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$.ctor
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__19___ctor (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x59216a0

void GameProgress_GameProgressManager__IncrementPlayTime_d__19___ctor
               (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.IDisposable.Dispose
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_IDisposable_Dispose (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x5921750

void GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_IDisposable_Dispose
               (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this,MethodInfo *method)

{
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$MoveNext
// il2cpp: bool GameProgress_GameProgressManager__IncrementPlayTime_d__19__MoveNext (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x5921760

bool GameProgress_GameProgressManager__IncrementPlayTime_d__19__MoveNext
               (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameProgressContainer_o *pGVar2;
  GameProgress_GameStatContainer_o *pGVar3;
  Settings_FloatSetting_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  
  if (Il2CppMethodInitialized_07545756 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07545756 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if (((pGVar2 == (GameProgress_GameProgressContainer_o *)0x0) ||
        (pGVar3 = (pGVar2->fields).GameStat, pGVar3 == (GameProgress_GameStatContainer_o *)0x0)) ||
       (__this_00 = (pGVar3->fields).PlayTime, __this_00 == (Settings_FloatSetting_o *)0x0)) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)__this_00,(__this_00->fields)._value + 10.0,
               (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,10.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x5921880

Il2CppObject *
GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_IEnumerator_Reset (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x5921890

void GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_IEnumerator_Reset
               (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_IEnumerator_get_Current (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x59218d0

Il2CppObject *
GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_IEnumerator_get_Current
          (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager$$Init
// il2cpp: void GameProgress_GameProgressManager__Init (const MethodInfo* method);
// 0x591fb30

void GameProgress_GameProgressManager__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameProgress_GameProgressManager_StaticFields *pGVar3;
  GameProgress_GameProgressManager_o *__this;
  GameProgress_GameStatContainer_o *gameStat;
  GameProgress_QuestContainer_o *quest;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  GameProgress_GameProgressContainer_o *pGVar7;
  GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this_00;
  GameProgress_GameStatHandler_o *pGVar8;
  GameProgress_AchievementHandler_o *pGVar9;
  GameProgress_QuestHandler_o *pGVar10;
  Events_OnLoadScene_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07545747 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameProgress_GameProgressManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameStatHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_GameProgressManager);
    Il2CppMethodInitialized_07545747 = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  pMVar6 = (MethodInfo *)
           Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_GameProgress_GameProgressManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_GameProgressManager);
  TypeInfo_GameProgress_GameProgressManager->static_fields->_instance =
       (GameProgress_GameProgressManager_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_GameProgressManager->static_fields->_instance);
  pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_GameProgressContainer);
  GameProgress_GameProgressContainer___ctor(pGVar7,pMVar6);
  pGVar3 = TypeInfo_GameProgress_GameProgressManager->static_fields;
  pGVar3->GameProgress = pGVar7;
  Il2CppCodeGenWriteBarrier(&pGVar3->GameProgress);
  __this = TypeInfo_GameProgress_GameProgressManager->static_fields->_instance;
  if (__this != (GameProgress_GameProgressManager_o *)0x0) {
    if (Il2CppMethodInitialized_07545754 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
      Il2CppMethodInitialized_07545754 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    pGVar7 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if (pGVar7 != (GameProgress_GameProgressContainer_o *)0x0) {
      gameStat = (pGVar7->fields).GameStat;
      pGVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_GameStatHandler);
      GameProgress_GameStatHandler___ctor(pGVar8,gameStat,method_00);
      pGVar3 = TypeInfo_GameProgress_GameProgressManager->static_fields;
      pGVar3->_gameStatHandler = pGVar8;
      Il2CppCodeGenWriteBarrier(&pGVar3->_gameStatHandler);
      pGVar7 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
      if (pGVar7 != (GameProgress_GameProgressContainer_o *)0x0) {
        pMVar6 = (MethodInfo *)(pGVar7->fields).Achievement;
        pGVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler);
        method_01 = extraout_RDX;
        if (Il2CppMethodInitialized_07545727 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
          Il2CppMethodInitialized_07545727 = '\x01';
          method_01 = extraout_RDX_00;
        }
        if ((TypeInfo_GameProgress_QuestHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
          method_01 = extraout_RDX_01;
        }
        GameProgress_QuestHandler___ctor
                  ((GameProgress_QuestHandler_o *)pGVar9,(GameProgress_QuestContainer_o *)0x0,method_01);
        (pGVar9->fields)._achievement = (GameProgress_AchievementContainer_o *)pMVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar9->fields)._achievement);
        GameProgress_AchievementHandler__LoadAchievements(pGVar9,pMVar6);
        GameProgress_AchievementHandler__CacheActiveAchievements(pGVar9,pMVar6);
        pGVar3 = TypeInfo_GameProgress_GameProgressManager->static_fields;
        pGVar3->_achievementHandler = pGVar9;
        Il2CppCodeGenWriteBarrier(&pGVar3->_achievementHandler);
        pGVar7 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
        if (pGVar7 != (GameProgress_GameProgressContainer_o *)0x0) {
          quest = (pGVar7->fields).Quest;
          pGVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
          GameProgress_QuestHandler___ctor(pGVar10,quest,method_02);
          pGVar3 = TypeInfo_GameProgress_GameProgressManager->static_fields;
          pGVar3->_questHandler = pGVar10;
          Il2CppCodeGenWriteBarrier(&pGVar3->_questHandler);
          pMVar6 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
          pSVar4 = (System_Collections_Generic_List_object__o *)
                   TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
          if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
            pGVar8 = TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar4->fields)._items;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)pGVar8;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar4,(Il2CppObject *)pGVar8,
                           (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
              }
              pMVar6 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
              pSVar4 = (System_Collections_Generic_List_object__o *)
                       TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
              if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
                pGVar9 = TypeInfo_GameProgress_GameProgressManager->static_fields->_achievementHandler;
                piVar1 = &(pSVar4->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (pSVar4->fields)._items;
                if (pSVar5 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar4->fields)._size;
                  if (uVar2 < (uint)pSVar5->max_length) {
                    (pSVar4->fields)._size = uVar2 + 1;
                    pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)pGVar9;
                    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar4,(Il2CppObject *)pGVar9,
                               (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
                  }
                  pMVar6 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
                  pSVar4 = (System_Collections_Generic_List_object__o *)
                           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
                  if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
                    pGVar10 = TypeInfo_GameProgress_GameProgressManager->static_fields->_questHandler;
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (pSVar4->fields)._items;
                    if (pSVar5 != (System_Object_array *)0x0) {
                      uVar2 = (pSVar4->fields)._size;
                      if (uVar2 < (uint)pSVar5->max_length) {
                        (pSVar4->fields)._size = uVar2 + 1;
                        pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)pGVar10;
                        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  (pSVar4,(Il2CppObject *)pGVar10,
                                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
                      }
                      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
                      Events_OnLoadScene___ctor
                                (__this_01,(Il2CppObject *)0x0,
                                 (intptr_t)MethodInfo_GameProgress_GameProgressManager_OnLoadScene,
                                 (MethodInfo *)0x0);
                      Events_EventManager__add_OnLoadScene(__this_01,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$OnApplicationQuit
// il2cpp: void GameProgress_GameProgressManager__OnApplicationQuit (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x5920150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592016d: cmp byte ptr [rip + 0x1c255d6], 0

void GameProgress_GameProgressManager__OnApplicationQuit
               (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  GameProgress_GameProgressContainer_o *pGVar2;
  
  if (Il2CppMethodInitialized_07545748 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_07545748 = '\x01';
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  if (Il2CppMethodInitialized_0754574a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_0754574a = '\x01';
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  else {
    pGVar2 = *(GameProgress_GameProgressContainer_o **)
              ((long)((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->static_fields + 8);
  }
  if (pGVar2 == (GameProgress_GameProgressContainer_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pGVar2->klass->vtable)._18_Save.methodPtr)(pGVar2,(pGVar2->klass->vtable)._18_Save.method);
  return;
}


// GameProgress.GameProgressManager$$OnLoadScene
// il2cpp: void GameProgress_GameProgressManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x59202b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59202ea: cmp byte ptr [rip + 0x1c25459], 0
// asm:   0x59202f1: je 0x592032a
// asm:   0x592030f: jmp 0x59203be

void GameProgress_GameProgressManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  GameProgress_GameProgressContainer_o *pGVar2;
  GameProgress_AchievementHandler_o *__this;
  GameProgress_QuestHandler_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545749 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_07545749 = '\x01';
  }
  if (sceneName != 1) {
    return;
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  if (Il2CppMethodInitialized_0754574a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_0754574a = '\x01';
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  else {
    pGVar2 = *(GameProgress_GameProgressContainer_o **)
              ((long)((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->static_fields + 8);
  }
  if (pGVar2 != (GameProgress_GameProgressContainer_o *)0x0) {
    method_00 = (pGVar2->klass->vtable)._18_Save.method;
    (*(pGVar2->klass->vtable)._18_Save.methodPtr)(pGVar2,method_00);
    __this = TypeInfo_GameProgress_GameProgressManager->static_fields->_achievementHandler;
    if (__this != (GameProgress_AchievementHandler_o *)0x0) {
      GameProgress_AchievementHandler__LoadAchievements(__this,method_00);
      GameProgress_AchievementHandler__CacheActiveAchievements(__this,method_00);
      __this_00 = TypeInfo_GameProgress_GameProgressManager->static_fields->_questHandler;
      if (__this_00 != (GameProgress_QuestHandler_o *)0x0) {
        GameProgress_QuestHandler__LoadQuests(__this_00,method_00);
        GameProgress_QuestHandler__CacheActiveQuests(__this_00,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$Save
// il2cpp: void GameProgress_GameProgressManager__Save (const MethodInfo* method);
// 0x5920220

void GameProgress_GameProgressManager__Save(MethodInfo *method)

{
  uint32_t uVar1;
  GameProgress_GameProgressContainer_o *pGVar2;
  
  if (Il2CppMethodInitialized_0754574a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_0754574a = '\x01';
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  else {
    pGVar2 = *(GameProgress_GameProgressContainer_o **)
              ((long)((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->static_fields + 8);
  }
  if (pGVar2 == (GameProgress_GameProgressContainer_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pGVar2->klass->vtable)._18_Save.methodPtr)(pGVar2,(pGVar2->klass->vtable)._18_Save.method);
  return;
}


// GameProgress.GameProgressManager$$GetExpToNext
// il2cpp: int32_t GameProgress_GameProgressManager__GetExpToNext (const MethodInfo* method);
// 0x59203f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592041d: jmp 0x59204bf

int32_t GameProgress_GameProgressManager__GetExpToNext(MethodInfo *method)

{
  uint32_t uVar1;
  GameProgress_GameStatHandler_o *pGVar2;
  GameProgress_GameStatContainer_o *pGVar3;
  Settings_IntSetting_o *pSVar4;
  System_Collections_Generic_List_int__o *__this;
  int32_t iVar5;
  
  if (Il2CppMethodInitialized_0754574b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_0754574b = '\x01';
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler;
  }
  else {
    pGVar2 = *(GameProgress_GameStatHandler_o **)
              ((long)((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->static_fields + 0x10);
  }
  if (pGVar2 != (GameProgress_GameStatHandler_o *)0x0) {
    if (Il2CppMethodInitialized_0754575e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_0754575e = '\x01';
    }
    pGVar3 = (pGVar2->fields)._gameStat;
    if ((pGVar3 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar4 = (pGVar3->fields).Level, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      iVar5 = (pSVar4->fields)._value;
      if (0x31 < iVar5) {
        return 0;
      }
      __this = (pGVar2->fields)._expPerLevel;
      if (__this != (System_Collections_Generic_List_int__o *)0x0) {
        iVar5 = System_Collections_Generic_List_int___get_Item
                          (__this,iVar5,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        return iVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$AddExp
// il2cpp: void GameProgress_GameProgressManager__AddExp (int32_t exp, const MethodInfo* method);
// 0x5920540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5920571: jmp 0x5920610

void GameProgress_GameProgressManager__AddExp(int32_t exp,MethodInfo *method)

{
  uint32_t uVar1;
  GameProgress_GameStatHandler_o *__this;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *__this_00;
  uint value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754574c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_0754574c = '\x01';
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    __this = TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler;
  }
  else {
    __this = *(GameProgress_GameStatHandler_o **)
              ((long)((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->static_fields + 0x10);
  }
  if (__this != (GameProgress_GameStatHandler_o *)0x0) {
    if (Il2CppMethodInitialized_0754575f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
      Il2CppMethodInitialized_0754575f = '\x01';
    }
    pGVar2 = (__this->fields)._gameStat;
    if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
       (__this_00 = (pGVar2->fields).Exp, __this_00 != (Settings_IntSetting_o *)0x0)) {
      value = exp + (__this_00->fields)._value;
      method_00 = (MethodInfo *)(ulong)value;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,value,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      GameProgress_GameStatHandler__CheckLevelUp(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$ClearGameStat
// il2cpp: void GameProgress_GameProgressManager__ClearGameStat (int32_t record, const MethodInfo* method);
// 0x5920690

void GameProgress_GameProgressManager__ClearGameStat(int32_t record,MethodInfo *method)

{
  uint32_t uVar1;
  GameProgress_GameStatContainer_o *__this;
  GameProgress_GameProgressContainer_o *pGVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (Il2CppMethodInitialized_0754574d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_0754574d = '\x01';
    in_RDX = extraout_RDX_00;
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor != 0) goto label_059206ba;
label_0592077c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    in_RDX = extraout_RDX_01;
  }
  else {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) goto label_0592077c;
label_059206ba:
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  if (pGVar2 == (GameProgress_GameProgressContainer_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    in_RDX = extraout_RDX;
    if (pGVar2 == (GameProgress_GameProgressContainer_o *)0x0) goto label_059207df;
  }
  __this = (pGVar2->fields).GameStat;
  if (__this != (GameProgress_GameStatContainer_o *)0x0) {
    GameProgress_GameStatContainer__Clear(__this,record,in_RDX);
    if (Il2CppMethodInitialized_0754574a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
      Il2CppMethodInitialized_0754574a = '\x01';
      uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
      pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    }
    else {
      pGVar2 = *(GameProgress_GameProgressContainer_o **)
                ((long)((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->static_fields + 8);
    }
    if (pGVar2 != (GameProgress_GameProgressContainer_o *)0x0) {
      (*(pGVar2->klass->vtable)._18_Save.methodPtr)(pGVar2,(pGVar2->klass->vtable)._18_Save.method);
      return;
    }
  }
label_059207df:
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$ClearAllGameStats
// il2cpp: void GameProgress_GameProgressManager__ClearAllGameStats (const MethodInfo* method);
// 0x5920a40

void GameProgress_GameProgressManager__ClearAllGameStats(MethodInfo *method)

{
  uint32_t uVar1;
  GameProgress_GameStatContainer_o *__this;
  GameProgress_GameProgressContainer_o *pGVar2;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754574e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_0754574e = '\x01';
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor != 0) goto label_05920a65;
label_05920b1f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  else {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) goto label_05920b1f;
label_05920a65:
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  if (pGVar2 == (GameProgress_GameProgressContainer_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if (pGVar2 == (GameProgress_GameProgressContainer_o *)0x0) goto label_05920b7c;
  }
  __this = (pGVar2->fields).GameStat;
  if (__this != (GameProgress_GameStatContainer_o *)0x0) {
    GameProgress_GameStatContainer__ClearAll(__this,in_RSI);
    if (Il2CppMethodInitialized_0754574a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
      Il2CppMethodInitialized_0754574a = '\x01';
      uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
      pGVar2 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    }
    else {
      pGVar2 = *(GameProgress_GameProgressContainer_o **)
                ((long)((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager)->static_fields + 8);
    }
    if (pGVar2 != (GameProgress_GameProgressContainer_o *)0x0) {
      (*(pGVar2->klass->vtable)._18_Save.methodPtr)(pGVar2,(pGVar2->klass->vtable)._18_Save.method);
      return;
    }
  }
label_05920b7c:
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterTitanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterTitanKill (Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x5920ec0
// eh: try 0x5920f93..0x5920fe8 -> pad 0x5920ff1 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5921009..0x592100e -> pad 0x592102d cleanup
// eh: try 0x5921030..0x592103a -> pad 0x5921042 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5920fed: jmp 0x5920ff1
// asm:   0x5920fef: jmp 0x5920ff1
// asm:   0x5920ff1: mov rbx, rax
// asm:   0x5920ff4: cmp edx, 1
// asm:   0x5920ff7: jne 0x5921030
// asm:   0x5920ff9: mov rdi, rbx
// asm:   0x5920ffc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5921001: mov rbx, qword ptr [rax]
// asm:   0x5921004: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5921009: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592100e: lea rax, [rip + 0x196c71b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x5921015: mov rsi, qword ptr [rax]
// asm:   0x5921018: mov rdi, rsp
// asm:   0x592101b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5921020: test rbx, rbx
// asm:   0x5921023: je 0x5920fd6
// asm:   0x5921025: mov rdi, rbx
// asm:   0x5921028: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x592102d: mov rbx, rax
// asm:   0x5921030: lea rdi, [rsp + 0x20]
// asm:   0x5921035: call 0x2fd2540  ; il2cpp_runtime_helper_02fd2540()
// asm:   0x592103a: mov rdi, rbx
// asm:   0x592103d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5921042: mov rdi, rax
// asm:   0x5921045: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_GameProgressManager__RegisterTitanKill
               (Characters_BasicTitan_o *victim,GameProgress_KillMethod_o method,MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_0754574f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_0754574f = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_object__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,__this,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
  local_38 = 0;
  local_30 = (undefined1 *)&local_58;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext)
    ;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
      return;
    }
    if (local_58.fields._current == (Il2CppObject *)0x0) break;
    (*(local_58.fields._current)->klass->vtable[4].methodPtr)
              (local_58.fields._current,victim,(ulong)(uint)method.fields.Weapon,method.fields.Special,
               (local_58.fields._current)->klass->vtable[4].method);
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterHumanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterHumanKill (Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x5921050
// eh: try 0x5921123..0x5921178 -> pad 0x5921181 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5921199..0x592119e -> pad 0x59211bd cleanup
// eh: try 0x59211c0..0x59211ca -> pad 0x59211d2 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592117d: jmp 0x5921181
// asm:   0x592117f: jmp 0x5921181
// asm:   0x5921181: mov rbx, rax
// asm:   0x5921184: cmp edx, 1
// asm:   0x5921187: jne 0x59211c0
// asm:   0x5921189: mov rdi, rbx
// asm:   0x592118c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5921191: mov rbx, qword ptr [rax]
// asm:   0x5921194: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5921199: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592119e: lea rax, [rip + 0x196c58b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x59211a5: mov rsi, qword ptr [rax]
// asm:   0x59211a8: mov rdi, rsp
// asm:   0x59211ab: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59211b0: test rbx, rbx
// asm:   0x59211b3: je 0x5921166
// asm:   0x59211b5: mov rdi, rbx
// asm:   0x59211b8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59211bd: mov rbx, rax
// asm:   0x59211c0: lea rdi, [rsp + 0x20]
// asm:   0x59211c5: call 0x2fd2570  ; il2cpp_runtime_helper_02fd2570()
// asm:   0x59211ca: mov rdi, rbx
// asm:   0x59211cd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59211d2: mov rdi, rax
// asm:   0x59211d5: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_GameProgressManager__RegisterHumanKill
               (Characters_Human_o *victim,GameProgress_KillMethod_o method,MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07545750 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_07545750 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_object__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,__this,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
  local_38 = 0;
  local_30 = (undefined1 *)&local_58;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext)
    ;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
      return;
    }
    if (local_58.fields._current == (Il2CppObject *)0x0) break;
    (*(local_58.fields._current)->klass->vtable[5].methodPtr)
              (local_58.fields._current,victim,(ulong)(uint)method.fields.Weapon,method.fields.Special,
               (local_58.fields._current)->klass->vtable[5].method);
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterDamage
// il2cpp: void GameProgress_GameProgressManager__RegisterDamage (UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x59211e0
// eh: try 0x59212c3..0x592131d -> pad 0x5921326 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x592133e..0x5921343 -> pad 0x5921362 cleanup
// eh: try 0x5921365..0x592136f -> pad 0x5921377 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5921322: jmp 0x5921326
// asm:   0x5921324: jmp 0x5921326
// asm:   0x5921326: mov rbx, rax
// asm:   0x5921329: cmp edx, 1
// asm:   0x592132c: jne 0x5921365
// asm:   0x592132e: mov rdi, rbx
// asm:   0x5921331: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5921336: mov rbx, qword ptr [rax]
// asm:   0x5921339: mov qword ptr [rsp + 0x18], rbx
// asm:   0x592133e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5921343: lea rax, [rip + 0x196c3e6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x592134a: mov rsi, qword ptr [rax]
// asm:   0x592134d: mov rdi, rsp
// asm:   0x5921350: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5921355: test rbx, rbx
// asm:   0x5921358: je 0x5921309
// asm:   0x592135a: mov rdi, rbx
// asm:   0x592135d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5921362: mov rbx, rax
// asm:   0x5921365: lea rdi, [rsp + 0x18]
// asm:   0x592136a: call 0x2fd25a0  ; il2cpp_runtime_helper_02fd25a0()
// asm:   0x592136f: mov rdi, rbx
// asm:   0x5921372: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5921377: mov rdi, rax
// asm:   0x592137a: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_GameProgressManager__RegisterDamage
               (UnityEngine_GameObject_o *victim,GameProgress_KillMethod_o method,int32_t damage,
               MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545751 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_07545751 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (0 < damage) {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    __this = (System_Collections_Generic_List_object__o *)
             TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,__this,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    local_40 = 0;
    local_38 = (undefined1 *)&local_58;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext
                        );
      if (!bVar1) break;
      if (local_58.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*(local_58.fields._current)->klass->vtable[6].methodPtr)
                (local_58.fields._current,victim,(ulong)(uint)method.fields.Weapon,method.fields.Special,
                 (ulong)(uint)damage,(local_58.fields._current)->klass->vtable[6].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
  }
  return;
}


// GameProgress.GameProgressManager$$RegisterSpeed
// il2cpp: void GameProgress_GameProgressManager__RegisterSpeed (float speed, const MethodInfo* method);
// 0x5921380
// eh: try 0x5921453..0x59214a2 -> pad 0x59214ab (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59214c3..0x59214c8 -> pad 0x59214e9 cleanup
// eh: try 0x59214ec..0x59214f6 -> pad 0x59214fe catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59214a7: jmp 0x59214ab
// asm:   0x59214a9: jmp 0x59214ab
// asm:   0x59214ab: mov rbx, rax
// asm:   0x59214ae: cmp edx, 1
// asm:   0x59214b1: jne 0x59214ec
// asm:   0x59214b3: mov rdi, rbx
// asm:   0x59214b6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59214bb: mov rbx, qword ptr [rax]
// asm:   0x59214be: mov qword ptr [rsp + 0x28], rbx
// asm:   0x59214c3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59214c8: lea rax, [rip + 0x196c261]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x59214cf: mov rsi, qword ptr [rax]
// asm:   0x59214d2: lea rdi, [rsp + 0x10]
// asm:   0x59214d7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59214dc: test rbx, rbx
// asm:   0x59214df: je 0x5921495
// asm:   0x59214e1: mov rdi, rbx
// asm:   0x59214e4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59214e9: mov rbx, rax
// asm:   0x59214ec: lea rdi, [rsp + 0x28]
// asm:   0x59214f1: call 0x2fd25d0  ; il2cpp_runtime_helper_02fd25d0()
// asm:   0x59214f6: mov rdi, rbx
// asm:   0x59214f9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59214fe: mov rdi, rax
// asm:   0x5921501: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_GameProgressManager__RegisterSpeed(float speed,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  undefined8 local_20;
  System_Collections_Generic_List_Enumerator_T__o *local_18;
  
  if (Il2CppMethodInitialized_07545752 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_07545752 = '\x01';
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_object__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_38,__this,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
  local_20 = 0;
  local_18 = &local_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext)
    ;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
      return;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) break;
    (*(local_38.fields._current)->klass->vtable[7].methodPtr)
              (speed,local_38.fields._current,(local_38.fields._current)->klass->vtable[7].method);
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterInteraction
// il2cpp: void GameProgress_GameProgressManager__RegisterInteraction (UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x5921510
// eh: try 0x59215e3..0x5921633 -> pad 0x592163c (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5921654..0x5921659 -> pad 0x5921678 cleanup
// eh: try 0x592167b..0x5921685 -> pad 0x592168d catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5921638: jmp 0x592163c
// asm:   0x592163a: jmp 0x592163c
// asm:   0x592163c: mov rbx, rax
// asm:   0x592163f: cmp edx, 1
// asm:   0x5921642: jne 0x592167b
// asm:   0x5921644: mov rdi, rbx
// asm:   0x5921647: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592164c: mov rbx, qword ptr [rax]
// asm:   0x592164f: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5921654: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5921659: lea rax, [rip + 0x196c0d0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x5921660: mov rsi, qword ptr [rax]
// asm:   0x5921663: mov rdi, rsp
// asm:   0x5921666: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x592166b: test rbx, rbx
// asm:   0x592166e: je 0x5921623
// asm:   0x5921670: mov rdi, rbx
// asm:   0x5921673: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5921678: mov rbx, rax
// asm:   0x592167b: lea rdi, [rsp + 0x18]
// asm:   0x5921680: call 0x2fd2600  ; il2cpp_runtime_helper_02fd2600()
// asm:   0x5921685: mov rdi, rbx
// asm:   0x5921688: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x592168d: mov rdi, rax
// asm:   0x5921690: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_GameProgressManager__RegisterInteraction
               (UnityEngine_GameObject_o *interact,int32_t interactionType,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_07545753 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_07545753 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_object__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_48,__this,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
  uStack_30 = 0;
  puStack_28 = (undefined1 *)&SStack_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext)
    ;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
      return;
    }
    if (SStack_48.fields._current == (Il2CppObject *)0x0) break;
    (*(SStack_48.fields._current)->klass->vtable[8].methodPtr)
              (SStack_48.fields._current,interact,(ulong)(uint)interactionType,
               (SStack_48.fields._current)->klass->vtable[8].method);
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$IncrementPlayTime
// il2cpp: System_Collections_IEnumerator_o* GameProgress_GameProgressManager__IncrementPlayTime (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x591ff60

System_Collections_IEnumerator_o *
GameProgress_GameProgressManager__IncrementPlayTime
          (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this_00;
  
  if (Il2CppMethodInitialized_07545754 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
    Il2CppMethodInitialized_07545754 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.GameProgressManager$$.ctor
// il2cpp: void GameProgress_GameProgressManager___ctor (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x59216c0

void GameProgress_GameProgressManager___ctor(GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.GameProgressManager$$.cctor
// il2cpp: void GameProgress_GameProgressManager___cctor (const MethodInfo* method);
// 0x59216d0

void GameProgress_GameProgressManager___cctor(MethodInfo *method)

{
  GameProgress_GameProgressManager_StaticFields *pGVar1;
  System_Collections_Generic_List_object__o *__this;
  
  if (Il2CppMethodInitialized_07545755 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_BaseGameProgressHandler);
    Il2CppMethodInitialized_07545755 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseGameProgressHandler);
  System_Collections_Generic_List_object____ctor
            (__this,(MethodInfo_395C910 *)
                    MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_ctor);
  pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields;
  pGVar1->_handlers = (System_Collections_Generic_List_BaseGameProgressHandler__o *)__this;
  Il2CppCodeGenWriteBarrier(&pGVar1->_handlers);
  return;
}


