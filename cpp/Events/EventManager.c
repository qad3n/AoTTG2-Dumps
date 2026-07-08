// Type: Events.EventManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Events/EventManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/EventManager.cs  [CHANGED since prior version]
// --------------------------------

// Events.EventManager.<SecondTick>d__17$$.ctor
// il2cpp: void Events_EventManager__SecondTick_d__17___ctor (Events_EventManager__SecondTick_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x414d550

void Events_EventManager_<SecondTick>d__17___ctor
               (Events_EventManager__SecondTick_d__17_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Events.EventManager.<SecondTick>d__17$$System.IDisposable.Dispose
// il2cpp: void Events_EventManager__SecondTick_d__17__System_IDisposable_Dispose (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x414d580

void Events_EventManager_<SecondTick>d__17__System_IDisposable_Dispose
               (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Events.EventManager.<SecondTick>d__17$$MoveNext
// il2cpp: bool Events_EventManager__SecondTick_d__17__MoveNext (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x414d590

bool_conflict
Events_EventManager_<SecondTick>d__17__MoveNext
          (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  undefined8 uVar3;
  
  if (DAT_057049d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_057049d0 = '\x01';
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
  __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_00,1.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_00;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// Events.EventManager.<SecondTick>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Events_EventManager__SecondTick_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x414d660

Il2CppObject *
Events_EventManager_<SecondTick>d__17__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager.<SecondTick>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Events_EventManager__SecondTick_d__17__System_Collections_IEnumerator_Reset (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x414d670

void Events_EventManager_<SecondTick>d__17__System_Collections_IEnumerator_Reset
               (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

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


// Events.EventManager.<SecondTick>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Events_EventManager__SecondTick_d__17__System_Collections_IEnumerator_get_Current (Events_EventManager__SecondTick_d__17_o* __this, const MethodInfo* method);
// 0x414d6b0

Il2CppObject *
Events_EventManager_<SecondTick>d__17__System_Collections_IEnumerator_get_Current
          (Events_EventManager__SecondTick_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager$$add_OnPreLoadScene
// il2cpp: void Events_EventManager__add_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x414cd30

void Events_EventManager__add_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_057049c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    DAT_057049c3 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 8);
  while( true ) {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnPreLoadScene)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 8,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$remove_OnPreLoadScene
// il2cpp: void Events_EventManager__remove_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x414cdf0

void Events_EventManager__remove_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_057049c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    DAT_057049c4 = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 8);
  while( true ) {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnPreLoadScene)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 8,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$add_OnLoadScene
// il2cpp: void Events_EventManager__add_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x414ceb0

void Events_EventManager__add_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_057049c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    DAT_057049c5 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10);
  while( true ) {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnLoadScene)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$remove_OnLoadScene
// il2cpp: void Events_EventManager__remove_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x414cf70

void Events_EventManager__remove_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_057049c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    DAT_057049c6 = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10);
  while( true ) {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnLoadScene)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$add_OnFinishInit
// il2cpp: void Events_EventManager__add_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x414d030

void Events_EventManager__add_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_057049c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnFinishInit);
    DAT_057049c7 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18);
  while( true ) {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnFinishInit)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$remove_OnFinishInit
// il2cpp: void Events_EventManager__remove_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x414d0f0

void Events_EventManager__remove_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_057049c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnFinishInit);
    DAT_057049c8 = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18);
  while( true ) {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnFinishInit)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$add_OnSecondTick
// il2cpp: void Events_EventManager__add_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x414d1b0

void Events_EventManager__add_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_057049c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnSecondTick);
    DAT_057049c9 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20);
  while( true ) {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnSecondTick)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$remove_OnSecondTick
// il2cpp: void Events_EventManager__remove_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x414d270

void Events_EventManager__remove_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_057049ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&TypeInfo_OnSecondTick);
    DAT_057049ca = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20);
  while( true ) {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_OnSecondTick)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_EventManager + 0xb8) + 0x20,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Events.EventManager$$Init
// il2cpp: void Events_EventManager__Init (const MethodInfo* method);
// 0x414d330

void Events_EventManager__Init(MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_057049cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    il2cpp_init_method_metadata(&MethodInfo_EventManager_CreateSingleton_EventManager);
    DAT_057049cb = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_EventManager + 0xb8),MethodInfo_EventManager_CreateSingleton_EventManager);
  **(undefined8 **)(TypeInfo_EventManager + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_EventManager + 0xb8));
  __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_EventManager + 0xb8);
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (DAT_057049cf == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SecondTick_d__17);
      DAT_057049cf = '\x01';
    }
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SecondTick_d__17);
    System_Object___ctor(pIVar1,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar1[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine
              (__this,(System_Collections_IEnumerator_o *)pIVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Events.EventManager$$InvokePreLoadScene
// il2cpp: void Events_EventManager__InvokePreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x414d460

void Events_EventManager__InvokePreLoadScene(int32_t sceneName,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057049cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    DAT_057049cc = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_EventManager + 0xb8) + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),sceneName,*(undefined8 *)(lVar1 + 0x28),
               *(code **)(lVar1 + 0x18));
    return;
  }
  return;
}


// Events.EventManager$$InvokeLoadScene
// il2cpp: void Events_EventManager__InvokeLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x414d4b0

void Events_EventManager__InvokeLoadScene(int32_t sceneName,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057049cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    DAT_057049cd = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),sceneName,*(undefined8 *)(lVar1 + 0x28),
               *(code **)(lVar1 + 0x18));
    return;
  }
  return;
}


// Events.EventManager$$InvokeFinishInit
// il2cpp: void Events_EventManager__InvokeFinishInit (const MethodInfo* method);
// 0x414d500

void Events_EventManager__InvokeFinishInit(MethodInfo *method)

{
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_057049ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventManager);
    DAT_057049ce = '\x01';
    in_RDX = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_EventManager + 0xb8) + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),in_RDX,
               *(code **)(lVar1 + 0x18));
    return;
  }
  return;
}


// Events.EventManager$$SecondTick
// il2cpp: System_Collections_IEnumerator_o* Events_EventManager__SecondTick (Events_EventManager_o* __this, const MethodInfo* method);
// 0x414d410

System_Collections_IEnumerator_o *
Events_EventManager__SecondTick(Events_EventManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057049cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SecondTick_d__17);
    DAT_057049cf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SecondTick_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Events.EventManager$$.ctor
// il2cpp: void Events_EventManager___ctor (Events_EventManager_o* __this, const MethodInfo* method);
// 0x414d570

void Events_EventManager___ctor(Events_EventManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


