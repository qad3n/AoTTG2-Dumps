// Type: Events.EventManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Events/EventManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/EventManager.cs
// --------------------------------

// Events.EventManager.<SecondTick>d__17$$.ctor
// il2cpp: void Events_EventManager__SecondTick_d__17___ctor (Events_EventManager__SecondTick_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4480560

void Events_EventManager__SecondTick_d__17___ctor
               (Events_EventManager__SecondTick_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Events.EventManager.<SecondTick>d__17$$System.IDisposable.Dispose
// il2cpp: void Events_EventManager__SecondTick_d__17__System_IDisposable_Dispose (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x4480590

void Events_EventManager__SecondTick_d__17__System_IDisposable_Dispose
               (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Events.EventManager.<SecondTick>d__17$$MoveNext
// il2cpp: bool Events_EventManager__SecondTick_d__17__MoveNext (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x44805a0

bool_conflict
Events_EventManager__SecondTick_d__17__MoveNext
          (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  undefined8 uVar3;
  
  if (g_data_057ae896 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    g_data_057ae896 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
  }
  __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_00,1.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_00;
  uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// Events.EventManager.<SecondTick>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Events_EventManager__SecondTick_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x4480670

Il2CppObject *
Events_EventManager__SecondTick_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager.<SecondTick>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Events_EventManager__SecondTick_d__17__System_Collections_IEnumerator_Reset (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x4480680

void Events_EventManager__SecondTick_d__17__System_Collections_IEnumerator_Reset
               (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

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


// Events.EventManager.<SecondTick>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Events_EventManager__SecondTick_d__17__System_Collections_IEnumerator_get_Current (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x44806c0

Il2CppObject *
Events_EventManager__SecondTick_d__17__System_Collections_IEnumerator_get_Current
          (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager$$add_OnPreLoadScene
// il2cpp: void Events_EventManager__add_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x447fd40

void Events_EventManager__add_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (g_data_057ae889 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    g_data_057ae889 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 8);
  while ((pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_OnPreLoadScene))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 8,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$remove_OnPreLoadScene
// il2cpp: void Events_EventManager__remove_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x447fe00

void Events_EventManager__remove_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (g_data_057ae88a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    g_data_057ae88a = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 8);
  while ((pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_OnPreLoadScene))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 8,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$add_OnLoadScene
// il2cpp: void Events_EventManager__add_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x447fec0

void Events_EventManager__add_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (g_data_057ae88b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    g_data_057ae88b = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10);
  while ((pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_OnLoadScene))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$remove_OnLoadScene
// il2cpp: void Events_EventManager__remove_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x447ff80

void Events_EventManager__remove_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (g_data_057ae88c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    g_data_057ae88c = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10);
  while ((pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_OnLoadScene))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$add_OnFinishInit
// il2cpp: void Events_EventManager__add_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x4480040

void Events_EventManager__add_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (g_data_057ae88d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnFinishInit);
    g_data_057ae88d = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18);
  while ((pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == _DAT_0557bc18))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$remove_OnFinishInit
// il2cpp: void Events_EventManager__remove_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x4480100

void Events_EventManager__remove_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (g_data_057ae88e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnFinishInit);
    g_data_057ae88e = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18);
  while ((pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == _DAT_0557bc18))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$add_OnSecondTick
// il2cpp: void Events_EventManager__add_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x44801c0

void Events_EventManager__add_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (g_data_057ae88f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnSecondTick);
    g_data_057ae88f = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20);
  while ((pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_OnSecondTick))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$remove_OnSecondTick
// il2cpp: void Events_EventManager__remove_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x4480280

void Events_EventManager__remove_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (g_data_057ae890 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnSecondTick);
    g_data_057ae890 = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20);
  while ((pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_OnSecondTick))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Events.EventManager$$Init
// il2cpp: void Events_EventManager__Init (const MethodInfo* method);
// 0x4480340

void Events_EventManager__Init(MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppObject *pIVar1;
  
  if (g_data_057ae891 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EventManager_CreateSingleton_EventManager);
    g_data_057ae891 = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_EventManager + 0xb8),MethodInfo_EventManager_CreateSingleton_EventManager);
  **(undefined8 **)(TypeInfo_EventManager + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_EventManager + 0xb8));
  __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_EventManager + 0xb8);
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae895 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SecondTick_d__17);
      g_data_057ae895 = '\x01';
    }
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(_DAT_055810c8);
    System_Object___ctor(pIVar1,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar1[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              (__this,(System_Collections_IEnumerator_o *)pIVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae895 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SecondTick_d__17);
    g_data_057ae895 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(_DAT_055810c8);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = 0;
  return;
}


// Events.EventManager$$InvokePreLoadScene
// il2cpp: void Events_EventManager__InvokePreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x4480470

void Events_EventManager__InvokePreLoadScene(int32_t sceneName,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae892 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    g_data_057ae892 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_EventManager + 0xb8) + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),sceneName,*(undefined8 *)(lVar1 + 0x28),*(code **)(lVar1 + 0x18))
    ;
    return;
  }
  return;
}


// Events.EventManager$$InvokeLoadScene
// il2cpp: void Events_EventManager__InvokeLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x44804c0

void Events_EventManager__InvokeLoadScene(int32_t sceneName,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae893 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    g_data_057ae893 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),sceneName,*(undefined8 *)(lVar1 + 0x28),*(code **)(lVar1 + 0x18))
    ;
    return;
  }
  return;
}


// Events.EventManager$$InvokeFinishInit
// il2cpp: void Events_EventManager__InvokeFinishInit (const MethodInfo* method);
// 0x4480510

void Events_EventManager__InvokeFinishInit(MethodInfo *method)

{
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae894 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventManager);
    g_data_057ae894 = '\x01';
    in_RDX = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),in_RDX,*(code **)(lVar1 + 0x18));
    return;
  }
  return;
}


// Events.EventManager$$SecondTick
// il2cpp: System_Collections_IEnumerator_o* Events_EventManager__SecondTick (Events_EventManager_o* __this, const MethodInfo* method);
// 0x4480420

System_Collections_IEnumerator_o *
Events_EventManager__SecondTick(Events_EventManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ae895 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SecondTick_d__17);
    g_data_057ae895 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(_DAT_055810c8);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Events.EventManager$$.ctor
// il2cpp: void Events_EventManager___ctor (Events_EventManager_o* __this, const MethodInfo* method);
// 0x4480580

void Events_EventManager___ctor(Events_EventManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


