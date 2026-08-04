// Type: GameManagers.BaseGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/BaseGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/BaseGameManager.cs
// --------------------------------

// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$.ctor
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2___ctor (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x45427b0

void GameManagers_BaseGameManager__WaitAndLoad_d__2___ctor
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.IDisposable.Dispose
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_IDisposable_Dispose (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x45428e0

void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_IDisposable_Dispose
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$MoveNext
// il2cpp: bool GameManagers_BaseGameManager__WaitAndLoad_d__2__MoveNext (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x45428f0

bool_conflict
GameManagers_BaseGameManager__WaitAndLoad_d__2__MoveNext
          (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager_o *pGVar1;
  long *plVar2;
  char cVar3;
  bool_conflict bVar4;
  long *plVar5;
  
  plVar5 = (long *)__this;
  if (g_data_057aef44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    plVar5 = &TypeInfo_WeatherManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef44 = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    pGVar1 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pGVar1 == (GameManagers_BaseGameManager_o *)0x0) {
label_045429e1:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)
             (((GameManagers_BaseGameManager__WaitAndLoad_d__2_o *)plVar5)->fields).__2__current;
    }
    cVar3 = (*(pGVar1->klass->vtable)._56_IsFinishedLoading.methodPtr)
                      (pGVar1,(pGVar1->klass->vtable)._56_IsFinishedLoading.method);
    if (cVar3 == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)pGVar1 >> 8),1);
    }
    else {
      (*(pGVar1->klass->vtable)._57_OnFinishLoading.methodPtr)
                (pGVar1,(pGVar1->klass->vtable)._57_OnFinishLoading.method);
      plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      plVar5 = (long *)0x0;
      if (plVar2 == (long *)0x0) goto label_045429e1;
      (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
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
// 0x45429f0

Il2CppObject *
GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_Reset (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x4542a00

void GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_Reset
               (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

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


// GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_get_Current (GameManagers_BaseGameManager__WaitAndLoad_d__2_o* __this, const MethodInfo* method);
// 0x4542a40

Il2CppObject *
GameManagers_BaseGameManager__WaitAndLoad_d__2__System_Collections_IEnumerator_get_Current
          (GameManagers_BaseGameManager__WaitAndLoad_d__2_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.BaseGameManager$$Awake
// il2cpp: void GameManagers_BaseGameManager__Awake (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x45426b0

void GameManagers_BaseGameManager__Awake(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.BaseGameManager$$Start
// il2cpp: void GameManagers_BaseGameManager__Start (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x45426c0

void GameManagers_BaseGameManager__Start(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this_02;
  
  if (g_data_057aef42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndLoad_d__2);
    g_data_057aef42 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndLoad_d__2);
  pIVar2 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndLoad_d__2);
    g_data_057aef42 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndLoad_d__2);
  uVar1 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar2;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar2);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar1;
  return;
}


// GameManagers.BaseGameManager$$WaitAndLoad
// il2cpp: System_Collections_IEnumerator_o* GameManagers_BaseGameManager__WaitAndLoad (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x4542740

System_Collections_IEnumerator_o *
GameManagers_BaseGameManager__WaitAndLoad(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057aef42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndLoad_d__2);
    g_data_057aef42 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndLoad_d__2);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// GameManagers.BaseGameManager$$IsFinishedLoading
// il2cpp: bool GameManagers_BaseGameManager__IsFinishedLoading (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x45427d0

bool_conflict
GameManagers_BaseGameManager__IsFinishedLoading(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if (g_data_057aef43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    g_data_057aef43 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  else {
    lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x11);
    }
    else {
      cVar1 = *(char *)(lVar3 + 0x11);
    }
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(char **)(TypeInfo_MapManager + 0xb8) >> 8),
                    **(char **)(TypeInfo_MapManager + 0xb8) != '\0');
  }
  return 0;
}


// GameManagers.BaseGameManager$$OnFinishLoading
// il2cpp: void GameManagers_BaseGameManager__OnFinishLoading (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x45428c0

void GameManagers_BaseGameManager__OnFinishLoading(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.BaseGameManager$$.ctor
// il2cpp: void GameManagers_BaseGameManager___ctor (GameManagers_BaseGameManager_o* __this, const MethodInfo* method);
// 0x45428d0

void GameManagers_BaseGameManager___ctor(GameManagers_BaseGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


