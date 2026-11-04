// Type: GameProgress.GameProgressManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameProgress/GameProgressManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressManager.cs
// --------------------------------

// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$.ctor
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__19___ctor (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameProgress_GameProgressManager__IncrementPlayTime_d__19___ctor(GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.IDisposable.Dispose
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_IDisposable_Dispose (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x180547020

void
GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_IDisposable_Dispose(GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, MethodInfo* method)

{
  return;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$MoveNext
// il2cpp: bool GameProgress_GameProgressManager__IncrementPlayTime_d__19__MoveNext (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x181e3d160

bool GameProgress_GameProgressManager__IncrementPlayTime_d__19__MoveNext
               (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameProgressContainer_o *pGVar2;
  GameProgress_GameStatContainer_o *pGVar3;
  Settings_FloatSetting_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  
  if (Il2CppMethodInitialized_184344dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184344dc2 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
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
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,10.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return true;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager.<IncrementPlayTime>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_IEnumerator_Reset (GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, const MethodInfo* method);
// 0x181e3d280

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
// 0x180573e90

Il2CppObject*
GameProgress_GameProgressManager__IncrementPlayTime_d__19__System_Collections_IEnumerator_get_Current(GameProgress_GameProgressManager__IncrementPlayTime_d__19_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameProgress.GameProgressManager$$Init
// il2cpp: void GameProgress_GameProgressManager__Init (const MethodInfo* method);
// 0x181e34ba0

void GameProgress_GameProgressManager__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  GameProgress_GameProgressManager_o *pGVar6;
  GameProgress_GameProgressContainer_o *pGVar7;
  GameProgress_AchievementContainer_o *pGVar8;
  GameProgress_QuestContainer_o *pGVar9;
  GameProgress_GameStatContainer_o *pGVar10;
  GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *routine;
  GameProgress_GameStatHandler_o *pGVar11;
  GameProgress_AchievementHandler_o *pGVar12;
  GameProgress_QuestHandler_o *pGVar13;
  Events_OnLoadScene_o *value;
  
  if (Il2CppMethodInitialized_184344db3 == '\0') {
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
    Il2CppMethodInitialized_184344db3 = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  pGVar6 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_GameProgress_GameProgressManager->static_fields->_instance,
                      (MethodInfo_798ED0 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_GameProgressManager);
  TypeInfo_GameProgress_GameProgressManager->static_fields->_instance = pGVar6;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_GameProgressManager->static_fields->_instance,pGVar6);
  pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_GameProgressContainer);
  if (Il2CppMethodInitialized_184344db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameStatContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestContainer);
    Il2CppMethodInitialized_184344db2 = '\x01';
  }
  pGVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementContainer);
  GameProgress_AchievementContainer___ctor(pGVar8,(MethodInfo *)0x0);
  (pGVar7->fields).Achievement = pGVar8;
  Il2CppCodeGenWriteBarrier(&(pGVar7->fields).Achievement,pGVar8);
  pGVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestContainer);
  GameProgress_QuestContainer___ctor(pGVar9,(MethodInfo *)0x0);
  (pGVar7->fields).Quest = pGVar9;
  Il2CppCodeGenWriteBarrier(&(pGVar7->fields).Quest,pGVar9);
  pGVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_GameStatContainer);
  GameProgress_GameStatContainer___ctor(pGVar10,(MethodInfo *)0x0);
  (pGVar7->fields).GameStat = pGVar10;
  Il2CppCodeGenWriteBarrier(&(pGVar7->fields).GameStat,pGVar10);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)pGVar7,(MethodInfo *)0x0);
  TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress = pGVar7;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress,pGVar7);
  if (TypeInfo_GameProgress_GameProgressManager->static_fields->_instance !=
      (GameProgress_GameProgressManager_o *)0x0) {
    pGVar6 = TypeInfo_GameProgress_GameProgressManager->static_fields->_instance;
    if (Il2CppMethodInitialized_184344dc0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
      Il2CppMethodInitialized_184344dc0 = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pGVar6,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    pGVar7 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if (pGVar7 == (GameProgress_GameProgressContainer_o *)0x0) goto label_181e350fe;
    pGVar10 = (pGVar7->fields).GameStat;
    pGVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_GameStatHandler);
    GameProgress_GameStatHandler___ctor(pGVar11,pGVar10,(MethodInfo *)0x0);
    TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler = pGVar11;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler,pGVar11);
    pGVar7 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if (pGVar7 == (GameProgress_GameProgressContainer_o *)0x0) goto label_181e350fe;
    pGVar8 = (pGVar7->fields).Achievement;
    pGVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler);
    if (Il2CppMethodInitialized_184344d97 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
      Il2CppMethodInitialized_184344d97 = '\x01';
    }
    if ((TypeInfo_GameProgress_QuestHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
    }
    GameProgress_QuestHandler___ctor
              ((GameProgress_QuestHandler_o *)pGVar12,(GameProgress_QuestContainer_o *)0x0,(MethodInfo *)0x0);
    (pGVar12->fields)._achievement = pGVar8;
    Il2CppCodeGenWriteBarrier(&(pGVar12->fields)._achievement,pGVar8);
    GameProgress_AchievementHandler__LoadAchievements(pGVar12,(MethodInfo *)0x0);
    GameProgress_AchievementHandler__CacheActiveAchievements(pGVar12,(MethodInfo *)0x0);
    TypeInfo_GameProgress_GameProgressManager->static_fields->_achievementHandler = pGVar12;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameProgress_GameProgressManager->static_fields->_achievementHandler,pGVar12);
    pGVar7 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if (pGVar7 == (GameProgress_GameProgressContainer_o *)0x0) goto label_181e350fe;
    pGVar9 = (pGVar7->fields).Quest;
    pGVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
    GameProgress_QuestHandler___ctor(pGVar13,pGVar9,(MethodInfo *)0x0);
    TypeInfo_GameProgress_GameProgressManager->static_fields->_questHandler = pGVar13;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_GameProgress_GameProgressManager->static_fields->_questHandler,pGVar13);
    pMVar5 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
    pSVar3 = (System_Collections_Generic_List_object__o *)
             TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_181e350fe;
    pGVar11 = TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar3->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) goto label_181e350fe;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_181e35104;
      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pGVar11;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pGVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar3,(Il2CppObject *)pGVar11,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
    pSVar3 = (System_Collections_Generic_List_object__o *)
             TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_181e350fe;
    pGVar12 = TypeInfo_GameProgress_GameProgressManager->static_fields->_achievementHandler;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar3->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) goto label_181e350fe;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_181e35104;
      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pGVar12;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pGVar12);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar3,(Il2CppObject *)pGVar12,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_Add;
    pSVar3 = (System_Collections_Generic_List_object__o *)
             TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
      pGVar13 = TypeInfo_GameProgress_GameProgressManager->static_fields->_questHandler;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar3->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) {
label_181e35104:
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pGVar13;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pGVar13);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,(Il2CppObject *)pGVar13,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method
                    );
        }
        value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
        Events_OnLoadScene___ctor
                  ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_GameProgress_GameProgressManager_OnLoadScene,(MethodInfo *)0x0);
        Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e350fe:
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$OnApplicationQuit
// il2cpp: void GameProgress_GameProgressManager__OnApplicationQuit (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x181e35110

void GameProgress_GameProgressManager__OnApplicationQuit
               (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344db4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_184344db4 = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  GameProgress_GameProgressManager__Save((MethodInfo *)0x0);
  return;
}


// GameProgress.GameProgressManager$$OnLoadScene
// il2cpp: void GameProgress_GameProgressManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181e35150

void GameProgress_GameProgressManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  GameProgress_AchievementHandler_o *__this;
  GameProgress_QuestHandler_o *__this_00;
  
  if (Il2CppMethodInitialized_184344db5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_184344db5 = '\x01';
  }
  if (sceneName == 1) {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GameProgress_GameProgressManager__Save((MethodInfo *)0x0);
    __this = TypeInfo_GameProgress_GameProgressManager->static_fields->_achievementHandler;
    if (__this != (GameProgress_AchievementHandler_o *)0x0) {
      GameProgress_AchievementHandler__LoadAchievements(__this,(MethodInfo *)0x0);
      GameProgress_AchievementHandler__CacheActiveAchievements(__this,(MethodInfo *)0x0);
      __this_00 = TypeInfo_GameProgress_GameProgressManager->static_fields->_questHandler;
      if (__this_00 != (GameProgress_QuestHandler_o *)0x0) {
        GameProgress_QuestHandler__LoadQuests(__this_00,(MethodInfo *)0x0);
        GameProgress_QuestHandler__CacheActiveQuests(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// GameProgress.GameProgressManager$$Save
// il2cpp: void GameProgress_GameProgressManager__Save (const MethodInfo* method);
// 0x181e35950

void GameProgress_GameProgressManager__Save(MethodInfo *method)

{
  GameProgress_GameProgressContainer_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344db6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_184344db6 = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  if (pGVar1 != (GameProgress_GameProgressContainer_o *)0x0) {
    (*(pGVar1->klass->vtable)._18_Save.methodPtr)(pGVar1,(pGVar1->klass->vtable)._18_Save.method);
    return;
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$GetExpToNext
// il2cpp: int32_t GameProgress_GameProgressManager__GetExpToNext (const MethodInfo* method);
// 0x181e34a90

int32_t GameProgress_GameProgressManager__GetExpToNext(MethodInfo *method)

{
  GameProgress_GameStatHandler_o *pGVar1;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this;
  int32_t iVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  
  if (Il2CppMethodInitialized_184344db7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_184344db7 = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler;
  if (pGVar1 != (GameProgress_GameStatHandler_o *)0x0) {
    if (Il2CppMethodInitialized_184344dca == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_184344dca = '\x01';
    }
    pGVar2 = (pGVar1->fields)._gameStat;
    if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if (0x31 < (pSVar3->fields)._value) {
        return 0;
      }
      __this = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(pGVar1->fields)._expPerLevel;
      if (__this != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
        SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (__this,(((pGVar2->fields).Level)->fields)._value,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        iVar5._0_2_ = SVar4.fields.First;
        iVar5._2_2_ = SVar4.fields.Last;
        return iVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$AddExp
// il2cpp: void GameProgress_GameProgressManager__AddExp (int32_t exp, const MethodInfo* method);
// 0x181e348e0

void GameProgress_GameProgressManager__AddExp(int32_t exp,MethodInfo *method)

{
  GameProgress_GameStatHandler_o *__this;
  
  if (Il2CppMethodInitialized_184344db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_184344db8 = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler;
  if (__this != (GameProgress_GameStatHandler_o *)0x0) {
    GameProgress_GameStatHandler__AddExp(__this,exp,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$ClearGameStat
// il2cpp: void GameProgress_GameProgressManager__ClearGameStat (int32_t record, const MethodInfo* method);
// 0x181e349f0

void GameProgress_GameProgressManager__ClearGameStat(int32_t record,MethodInfo *method)

{
  GameProgress_GameProgressContainer_o *pGVar1;
  GameProgress_GameStatContainer_o *__this;
  
  if (Il2CppMethodInitialized_184344db9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_184344db9 = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  if (TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress !=
      (GameProgress_GameProgressContainer_o *)0x0) {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if ((pGVar1 != (GameProgress_GameProgressContainer_o *)0x0) &&
       (__this = (pGVar1->fields).GameStat, __this != (GameProgress_GameStatContainer_o *)0x0)) {
      GameProgress_GameStatContainer__Clear(__this,record,(MethodInfo *)0x0);
      GameProgress_GameProgressManager__Save((MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// GameProgress.GameProgressManager$$ClearAllGameStats
// il2cpp: void GameProgress_GameProgressManager__ClearAllGameStats (const MethodInfo* method);
// 0x181e34950

void GameProgress_GameProgressManager__ClearAllGameStats(MethodInfo *method)

{
  GameProgress_GameProgressContainer_o *pGVar1;
  GameProgress_GameStatContainer_o *__this;
  
  if (Il2CppMethodInitialized_184344dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    Il2CppMethodInitialized_184344dba = '\x01';
  }
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  if (TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress !=
      (GameProgress_GameProgressContainer_o *)0x0) {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
    if ((pGVar1 != (GameProgress_GameProgressContainer_o *)0x0) &&
       (__this = (pGVar1->fields).GameStat, __this != (GameProgress_GameStatContainer_o *)0x0)) {
      GameProgress_GameStatContainer__ClearAll(__this,(MethodInfo *)0x0);
      GameProgress_GameProgressManager__Save((MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// GameProgress.GameProgressManager$$RegisterTitanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterTitanKill (Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x181e357d0
// eh: try 0x181e358b0..0x181e35938 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e35902: mov rdx, qword ptr [rip + 0x223feaf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x181e35909: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e3590e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e35913: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e35918: test rcx, rcx
// asm:   0x181e3591b: jne 0x181e35938
// asm:   0x181e35938: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void GameProgress_GameProgressManager__RegisterTitanKill
               (Characters_BasicTitan_o *victim,GameProgress_KillMethod_o *method,MethodInfo *methodInfo)

{
  System_Collections_Generic_List_T__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_184344dbb = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_T__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_48,__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    local_28.fields._current = local_48.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      local_48.fields._list._0_4_ = (method->fields).Weapon;
      local_48.fields._list._4_4_ = *(undefined4 *)&(method->fields).field_0x4;
      local_48.fields._index = *(int32_t *)&(method->fields).Special;
      local_48.fields._version = *(int32_t *)((longlong)&(method->fields).Special + 4);
      (*(local_28.fields._current)->klass->vtable[4].methodPtr)
                (local_28.fields._current,victim,&local_48,(local_28.fields._current)->klass->vtable[4].method
                );
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterHumanKill
// il2cpp: void GameProgress_GameProgressManager__RegisterHumanKill (Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x181e35380
// eh: try 0x181e35460..0x181e354e8 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e354b2: mov rdx, qword ptr [rip + 0x22402ff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x181e354b9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e354be: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e354c3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e354c8: test rcx, rcx
// asm:   0x181e354cb: jne 0x181e354e8
// asm:   0x181e354e8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void GameProgress_GameProgressManager__RegisterHumanKill
               (Characters_Human_o *victim,GameProgress_KillMethod_o *method,MethodInfo *methodInfo)

{
  System_Collections_Generic_List_T__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344dbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_184344dbc = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_T__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_48,__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    local_28.fields._current = local_48.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      local_48.fields._list._0_4_ = (method->fields).Weapon;
      local_48.fields._list._4_4_ = *(undefined4 *)&(method->fields).field_0x4;
      local_48.fields._index = *(int32_t *)&(method->fields).Special;
      local_48.fields._version = *(int32_t *)((longlong)&(method->fields).Special + 4);
      (*(local_28.fields._current)->klass->vtable[5].methodPtr)
                (local_28.fields._current,victim,&local_48,(local_28.fields._current)->klass->vtable[5].method
                );
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterDamage
// il2cpp: void GameProgress_GameProgressManager__RegisterDamage (UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x181e35200
// eh: try 0x181e352e4..0x181e35370 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e35342: mov rdx, qword ptr [rip + 0x224046f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x181e35349: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e3534e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e35353: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e35358: test rcx, rcx
// asm:   0x181e3535b: jne 0x181e35370
// asm:   0x181e35370: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void GameProgress_GameProgressManager__RegisterDamage
               (UnityEngine_GameObject_o *victim,GameProgress_KillMethod_o *method,int32_t damage,
               MethodInfo *methodInfo)

{
  System_Collections_Generic_List_T__o *__this;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184344dbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_184344dbd = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_T__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_68,__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    local_48.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      local_68.fields._list._0_4_ = (method->fields).Weapon;
      local_68.fields._list._4_4_ = *(undefined4 *)&(method->fields).field_0x4;
      local_68.fields._index = *(int32_t *)&(method->fields).Special;
      local_68.fields._version = *(int32_t *)((longlong)&(method->fields).Special + 4);
      (*(local_48.fields._current)->klass->vtable[6].methodPtr)
                (local_48.fields._current,victim,&local_68,damage,
                 (local_48.fields._current)->klass->vtable[6].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterSpeed
// il2cpp: void GameProgress_GameProgressManager__RegisterSpeed (float speed, const MethodInfo* method);
// 0x181e35670
// eh: try 0x181e35750..0x181e357c1 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e35795: mov rdx, qword ptr [rip + 0x224001c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x181e3579c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e357a1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e357a6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e357ab: test rcx, rcx
// asm:   0x181e357ae: jne 0x181e357c1
// asm:   0x181e357c1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void GameProgress_GameProgressManager__RegisterSpeed(float speed,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this;
  bool bVar1;
  undefined4 in_XMM0_Db;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  System_Collections_Generic_List_Enumerator_object__o local_38 [2];
  
  if (Il2CppMethodInitialized_184344dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_184344dbe = '\x01';
  }
  local_38[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38[0].fields._index = 0;
  local_38[0].fields._version = 0;
  local_38[0].fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_T__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    local_38[0].fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    local_38[0].fields._index = local_50._8_4_;
    local_38[0].fields._version = local_50._12_4_;
    local_38[0].fields._current = local_40;
    local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50._8_8_ = local_38;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (local_38,(MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
        return;
      }
      if (local_38[0].fields._current == (Il2CppObject *)0x0) break;
      (*(local_38[0].fields._current)->klass->vtable[7].methodPtr)
                (local_38[0].fields._current,CONCAT44(in_XMM0_Db,speed),
                 (local_38[0].fields._current)->klass->vtable[7].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$RegisterInteraction
// il2cpp: void GameProgress_GameProgressManager__RegisterInteraction (UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x181e35500
// eh: try 0x181e355e0..0x181e35659 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e355dc: nop dword ptr [rax]
// asm:   0x181e35628: mov rdx, qword ptr [rip + 0x2240189]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose
// asm:   0x181e3562f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e35634: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e35639: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e3563e: test rcx, rcx
// asm:   0x181e35641: jne 0x181e35659
// asm:   0x181e35659: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void GameProgress_GameProgressManager__RegisterInteraction
               (UnityEngine_GameObject_o *interact,int32_t interactionType,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344dbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    Il2CppMethodInitialized_184344dbf = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  __this = (System_Collections_Generic_List_T__o *)
           TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers;
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_MoveNext
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseGameProgressHandler_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      (*(local_28.fields._current)->klass->vtable[8].methodPtr)
                (local_28.fields._current,interact,(ulonglong)(uint)interactionType,
                 (local_28.fields._current)->klass->vtable[8].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// GameProgress.GameProgressManager$$IncrementPlayTime
// il2cpp: System_Collections_IEnumerator_o* GameProgress_GameProgressManager__IncrementPlayTime (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x181e34b50

System_Collections_IEnumerator_o *
GameProgress_GameProgressManager__IncrementPlayTime
          (GameProgress_GameProgressManager_o *__this,MethodInfo *method)

{
  GameProgress_GameProgressManager__IncrementPlayTime_d__19_o *__this_00;
  
  if (Il2CppMethodInitialized_184344dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
    Il2CppMethodInitialized_184344dc0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager_IncrementPlayTime_d__19);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameProgress.GameProgressManager$$.ctor
// il2cpp: void GameProgress_GameProgressManager___ctor (GameProgress_GameProgressManager_o* __this, const MethodInfo* method);
// 0x180528540

void
GameProgress_GameProgressManager___ctor(GameProgress_GameProgressManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.GameProgressManager$$.cctor
// il2cpp: void GameProgress_GameProgressManager___cctor (const MethodInfo* method);
// 0x181e359c0

void GameProgress_GameProgressManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_BaseGameProgressHandler__o *__this;
  
  if (Il2CppMethodInitialized_184344dc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_BaseGameProgressHandler);
    Il2CppMethodInitialized_184344dc1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseGameProgressHandler);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseGameProgressHandler_ctor);
  TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_GameProgressManager->static_fields->_handlers,__this);
  return;
}


