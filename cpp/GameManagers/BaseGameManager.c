// Type: GameManagers.BaseGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/BaseGameManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/BaseGameManager.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$.ctor
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2___ctor (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4210580

void GameManagers_BaseGameManager_<WaitAndLoad>d__2___ctor
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.IDisposable.Dispose
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_IDisposable_Dispose (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x4210660

void GameManagers_BaseGameManager_<WaitAndLoad>d__2__System_IDisposable_Dispose
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$MoveNext
// il2cpp: bool GameManagers_BaseGameManager__WaitAndLoad_d__2__MoveNext (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x4210670

bool_conflict
GameManagers_BaseGameManager_<WaitAndLoad>d__2__MoveNext
          (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager_o *pGVar1;
  long *plVar2;
  char cVar3;
  bool_conflict bVar4;
  
  if (DAT_05705069 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05705069 = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    pGVar1 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pGVar1 == (GameManagers_BaseGameManager_o *)0x0) {
LAB_04210761:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar3 = (*(pGVar1->klass->vtable)._56_IsFinishedLoading.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable)._56_IsFinishedLoading.method);
    if (cVar3 == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)pGVar1 >> 8),1);
    }
    else {
      (*(pGVar1->klass->vtable)._57_OnFinishLoading.methodPtr)
                (pGVar1,(pGVar1->klass->vtable)._57_OnFinishLoading.method);
      plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar2 == (long *)0x0) goto LAB_04210761;
      (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = 0;
      Weather_WeatherManager__OnFinishLoading((MethodInfo *)0x0);
    }
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x4210770

Il2CppObject *
GameManagers_BaseGameManager_<WaitAndLoad>d__2__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_Reset (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x4210780

void GameManagers_BaseGameManager_<WaitAndLoad>d__2__System_Collections_IEnumerator_Reset
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

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


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_get_Current (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x42107c0

Il2CppObject *
GameManagers_BaseGameManager_<WaitAndLoad>d__2__System_Collections_IEnumerator_get_Current
          (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.BaseGameManager$$Awake
// il2cpp: void GameManagers_BaseGameManager__Awake (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x4210480

void GameManagers_BaseGameManager__Awake(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.BaseGameManager$$Start
// il2cpp: void GameManagers_BaseGameManager__Start (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x4210490

void GameManagers_BaseGameManager__Start(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05705067 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndLoad_d__2);
    DAT_05705067 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndLoad_d__2);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.BaseGameManager$$WaitAndLoad
// il2cpp: System_Collections_IEnumerator_o* GameManagers_BaseGameManager__WaitAndLoad (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x4210510

System_Collections_IEnumerator_o *
GameManagers_BaseGameManager__WaitAndLoad(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05705067 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndLoad_d__2);
    DAT_05705067 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndLoad_d__2);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.BaseGameManager$$IsFinishedLoading
// il2cpp: bool GameManagers_BaseGameManager__IsFinishedLoading (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x42105a0

bool_conflict
GameManagers_BaseGameManager__IsFinishedLoading
          (GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  
  if (DAT_05705068 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_05705068 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x10);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x10);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(char **)(TypeInfo_MapManager + 0xb8) >> 8),
                    **(char **)(TypeInfo_MapManager + 0xb8) != '\0');
  }
  return 0;
}


// GameManagers.BaseGameManager$$OnFinishLoading
// il2cpp: void GameManagers_BaseGameManager__OnFinishLoading (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x4210640

void GameManagers_BaseGameManager__OnFinishLoading
               (GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.BaseGameManager$$.ctor
// il2cpp: void GameManagers_BaseGameManager___ctor (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x4210650

void GameManagers_BaseGameManager___ctor(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


