// Type: GameManagers.BaseGameManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/BaseGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/BaseGameManager.cs
// --------------------------------

// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$.ctor
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2___ctor (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_BaseGameManager__WaitAndLoad_d__2___ctor(GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.IDisposable.Dispose
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_IDisposable_Dispose (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_BaseGameManager__WaitAndLoad_d__2__System_IDisposable_Dispose(GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$MoveNext
// il2cpp: bool GameManagers_BaseGameManager__WaitAndLoad_d__2__MoveNext (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x181e41d90

bool GameManagers_BaseGameManager__WaitAndLoad_d__2__MoveNext
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager_o *pGVar1;
  Cameras_BaseCamera_o *pCVar2;
  bool bVar3;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_184344de9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344de9 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  pGVar1 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pGVar1 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar3 = (*(pGVar1->klass->vtable)._56_IsFinishedLoading.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable)._56_IsFinishedLoading.method);
    if (!bVar3) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
    (*(pGVar1->klass->vtable)._57_OnFinishLoading.methodPtr)
              (pGVar1,(System_Type_o *)(pGVar1->klass->vtable)._57_OnFinishLoading.method,in_R8);
    pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
      (*(pCVar2->klass->vtable)._5_OnFinishLoading.methodPtr)
                (pCVar2,(System_Int32_array *)(pCVar2->klass->vtable)._5_OnFinishLoading.method,in_R8);
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      Weather_WeatherManager__OnFinishLoading((MethodInfo *)0x0);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_Reset (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x181e41ea0

void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_Reset
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_BaseGameManager_WaitAndLoad_d__2_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_get_Current (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_get_Current(GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.BaseGameManager$$Awake
// il2cpp: void GameManagers_BaseGameManager__Awake (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_BaseGameManager__Awake(GameManagers_BaseGameManager_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.BaseGameManager$$Start
// il2cpp: void GameManagers_BaseGameManager__Start (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x181e32220

void GameManagers_BaseGameManager__Start(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager__WaitAndLoad_d__2_o *routine;
  
  if (Il2CppMethodInitialized_184344de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_BaseGameManager_WaitAndLoad_d__2);
    Il2CppMethodInitialized_184344de7 = '\x01';
  }
  routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_BaseGameManager_WaitAndLoad_d__2);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// GameManagers.BaseGameManager$$WaitAndLoad
// il2cpp: System_Collections_IEnumerator_o* GameManagers_BaseGameManager__WaitAndLoad (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x181e322a0

System_Collections_IEnumerator_o *
GameManagers_BaseGameManager__WaitAndLoad(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this_00;
  
  if (Il2CppMethodInitialized_184344de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_BaseGameManager_WaitAndLoad_d__2);
    Il2CppMethodInitialized_184344de7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_BaseGameManager_WaitAndLoad_d__2)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.BaseGameManager$$IsFinishedLoading
// il2cpp: bool GameManagers_BaseGameManager__IsFinishedLoading (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x181e32170

bool GameManagers_BaseGameManager__IsFinishedLoading
               (GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  bool addonsLoaded;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344de8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_184344de8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  bVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicLoaded;
  addonsLoaded = TypeInfo_CustomLogic_CustomLogicManager->static_fields->AddonsLoaded;
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  bVar1 = Map_ContentLoadingState__IsFinished
                    (bVar1,addonsLoaded,TypeInfo_Map_MapManager->static_fields->MapLoaded,(MethodInfo *)0x0);
  return bVar1;
}


// GameManagers.BaseGameManager$$OnFinishLoading
// il2cpp: void GameManagers_BaseGameManager__OnFinishLoading (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_BaseGameManager__OnFinishLoading(GameManagers_BaseGameManager_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.BaseGameManager$$.ctor
// il2cpp: void GameManagers_BaseGameManager___ctor (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x18190eda0

void
GameManagers_BaseGameManager___ctor(GameManagers_BaseGameManager_o* __this, MethodInfo* method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


