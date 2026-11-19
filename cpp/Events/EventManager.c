// Type: Events.EventManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Events/EventManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/EventManager.cs
// --------------------------------

// Events.EventManager.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Events_EventManager___c__DisplayClass14_0___ctor (Events_EventManager___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x5dda6a0

void Events_EventManager___c__DisplayClass14_0___ctor
               (Events_EventManager___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Events.EventManager.<>c__DisplayClass14_0$$<InvokePreLoadScene>b__0
// il2cpp: void Events_EventManager___c__DisplayClass14_0___InvokePreLoadScene_b__0 (Events_EventManager___c__DisplayClass14_0_o* __this, System_Delegate_o* handler, const MethodInfo* method);
// 0x5dda9e0

void Events_EventManager___c__DisplayClass14_0___InvokePreLoadScene_b__0
               (Events_EventManager___c__DisplayClass14_0_o *__this,System_Delegate_o *handler,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754824f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_0754824f = '\x01';
  }
  if (handler == (System_Delegate_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((Events_OnPreLoadScene_c *)handler->klass != TypeInfo_Events_OnPreLoadScene) {
    il2cpp_codegen_raise_invalid_cast_exception(handler);
  }
  (*(code *)(handler->fields).invoke_impl)
            ((handler->fields).method_code,(__this->fields).sceneName,(handler->fields).method);
  return;
}


// Events.EventManager.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Events_EventManager___c__DisplayClass15_0___ctor (Events_EventManager___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5dda950

void Events_EventManager___c__DisplayClass15_0___ctor
               (Events_EventManager___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Events.EventManager.<>c__DisplayClass15_0$$<InvokeLoadScene>b__0
// il2cpp: void Events_EventManager___c__DisplayClass15_0___InvokeLoadScene_b__0 (Events_EventManager___c__DisplayClass15_0_o* __this, System_Delegate_o* handler, const MethodInfo* method);
// 0x5ddaa40

void Events_EventManager___c__DisplayClass15_0___InvokeLoadScene_b__0
               (Events_EventManager___c__DisplayClass15_0_o *__this,System_Delegate_o *handler,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548250 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    Il2CppMethodInitialized_07548250 = '\x01';
  }
  if (handler == (System_Delegate_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((Events_OnLoadScene_c *)handler->klass != TypeInfo_Events_OnLoadScene) {
    il2cpp_codegen_raise_invalid_cast_exception(handler);
  }
  (*(code *)(handler->fields).invoke_impl)
            ((handler->fields).method_code,(__this->fields).sceneName,(handler->fields).method);
  return;
}


// Events.EventManager.<SecondTick>d__18$$.ctor
// il2cpp: void Events_EventManager__SecondTick_d__18___ctor (Events_EventManager__SecondTick_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dda9b0

void Events_EventManager__SecondTick_d__18___ctor
               (Events_EventManager__SecondTick_d__18_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Events.EventManager.<SecondTick>d__18$$System.IDisposable.Dispose
// il2cpp: void Events_EventManager__SecondTick_d__18__System_IDisposable_Dispose (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x5ddaaa0

void Events_EventManager__SecondTick_d__18__System_IDisposable_Dispose
               (Events_EventManager__SecondTick_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Events.EventManager.<SecondTick>d__18$$MoveNext
// il2cpp: bool Events_EventManager__SecondTick_d__18__MoveNext (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x5ddaab0

bool Events_EventManager__SecondTick_d__18__MoveNext
               (Events_EventManager__SecondTick_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  Events_OnSecondTick_o *pEVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (Il2CppMethodInitialized_07548251 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07548251 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pEVar2 = TypeInfo_Events_EventManager->static_fields->OnSecondTick;
    if (pEVar2 != (Events_OnSecondTick_o *)0x0) {
      (*(code *)(pEVar2->fields).invoke_impl)((pEVar2->fields).method_code);
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_00,1.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// Events.EventManager.<SecondTick>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Events_EventManager__SecondTick_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x5ddab80

Il2CppObject *
Events_EventManager__SecondTick_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Events_EventManager__SecondTick_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager.<SecondTick>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Events_EventManager__SecondTick_d__18__System_Collections_IEnumerator_Reset (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x5ddab90

void Events_EventManager__SecondTick_d__18__System_Collections_IEnumerator_Reset
               (Events_EventManager__SecondTick_d__18_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Events_EventManager_SecondTick_d__18_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Events.EventManager.<SecondTick>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Events_EventManager__SecondTick_d__18__System_Collections_IEnumerator_get_Current (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x5ddabd0

Il2CppObject *
Events_EventManager__SecondTick_d__18__System_Collections_IEnumerator_get_Current
          (Events_EventManager__SecondTick_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager$$add_OnPreLoadScene
// il2cpp: void Events_EventManager__add_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x5dd9f30

void Events_EventManager__add_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  Events_OnPreLoadScene_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnPreLoadScene_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548242 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_07548242 = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
  while( true ) {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnPreLoadScene_c *)value_00->klass != TypeInfo_Events_OnPreLoadScene)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnPreLoadScene,value_00,a);
    bVar2 = pEVar1 == a;
    a = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$remove_OnPreLoadScene
// il2cpp: void Events_EventManager__remove_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x5dd9fe0

void Events_EventManager__remove_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  Events_OnPreLoadScene_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnPreLoadScene_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548243 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_07548243 = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
  while( true ) {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnPreLoadScene_c *)value_00->klass != TypeInfo_Events_OnPreLoadScene)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnPreLoadScene,value_00,source);
    bVar2 = pEVar1 == source;
    source = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$add_OnLoadScene
// il2cpp: void Events_EventManager__add_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x5dda090

void Events_EventManager__add_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  Events_OnLoadScene_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnLoadScene_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    Il2CppMethodInitialized_07548244 = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnLoadScene;
  while( true ) {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnLoadScene_c *)value_00->klass != TypeInfo_Events_OnLoadScene)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnLoadScene,value_00,a);
    bVar2 = pEVar1 == a;
    a = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$remove_OnLoadScene
// il2cpp: void Events_EventManager__remove_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x5dda140

void Events_EventManager__remove_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  Events_OnLoadScene_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnLoadScene_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    Il2CppMethodInitialized_07548245 = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnLoadScene;
  while( true ) {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnLoadScene_c *)value_00->klass != TypeInfo_Events_OnLoadScene)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnLoadScene,value_00,source);
    bVar2 = pEVar1 == source;
    source = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$add_OnFinishInit
// il2cpp: void Events_EventManager__add_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x5dda1f0

void Events_EventManager__add_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  Events_OnFinishInit_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnFinishInit_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnFinishInit);
    Il2CppMethodInitialized_07548246 = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnFinishInit;
  while( true ) {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnFinishInit_c *)value_00->klass != TypeInfo_Events_OnFinishInit)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnFinishInit,value_00,a);
    bVar2 = pEVar1 == a;
    a = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$remove_OnFinishInit
// il2cpp: void Events_EventManager__remove_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x5dda2a0

void Events_EventManager__remove_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  Events_OnFinishInit_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnFinishInit_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnFinishInit);
    Il2CppMethodInitialized_07548247 = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnFinishInit;
  while( true ) {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnFinishInit_c *)value_00->klass != TypeInfo_Events_OnFinishInit)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnFinishInit,value_00,source);
    bVar2 = pEVar1 == source;
    source = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$add_OnSecondTick
// il2cpp: void Events_EventManager__add_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x5dda350

void Events_EventManager__add_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  Events_OnSecondTick_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnSecondTick_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnSecondTick);
    Il2CppMethodInitialized_07548248 = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnSecondTick;
  while( true ) {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnSecondTick_c *)value_00->klass != TypeInfo_Events_OnSecondTick)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnSecondTick,value_00,a);
    bVar2 = pEVar1 == a;
    a = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$remove_OnSecondTick
// il2cpp: void Events_EventManager__remove_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x5dda400

void Events_EventManager__remove_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  Events_OnSecondTick_o *pEVar1;
  System_Delegate_o *value_00;
  Events_OnSecondTick_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnSecondTick);
    Il2CppMethodInitialized_07548249 = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnSecondTick;
  while( true ) {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((Events_OnSecondTick_c *)value_00->klass != TypeInfo_Events_OnSecondTick)) break;
    pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Events_EventManager->static_fields->OnSecondTick,value_00,source);
    bVar2 = pEVar1 == source;
    source = pEVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Events.EventManager$$Init
// il2cpp: void Events_EventManager__Init (const MethodInfo* method);
// 0x5dda4b0

void Events_EventManager__Init(MethodInfo *method)

{
  Events_EventManager_o *pEVar1;
  Events_EventManager__SecondTick_d__18_o *__this;
  
  if (Il2CppMethodInitialized_0754824a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_EventManager);
    Il2CppMethodInitialized_0754824a = '\x01';
  }
  pEVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Events_EventManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_EventManager);
  TypeInfo_Events_EventManager->static_fields->_instance = pEVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Events_EventManager->static_fields->_instance);
  pEVar1 = TypeInfo_Events_EventManager->static_fields->_instance;
  if (pEVar1 == (Events_EventManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0754824e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_SecondTick_d__18);
    Il2CppMethodInitialized_0754824e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_SecondTick_d__18);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)pEVar1,(System_Collections_IEnumerator_o *)__this,
             (MethodInfo *)0x0);
  return;
}


// Events.EventManager$$InvokePreLoadScene
// il2cpp: void Events_EventManager__InvokePreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5dda5e0

void Events_EventManager__InvokePreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Events_OnPreLoadScene_o *handlers;
  Events_EventManager___c__DisplayClass14_0_o *__this;
  System_Action_Delegate__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754824b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Delegate);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Events_EventManager_c__DisplayClass14_0_InvokePreLoadScene_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_c__DisplayClass14_0);
    Il2CppMethodInitialized_0754824b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_c__DisplayClass14_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Events_EventManager___c__DisplayClass14_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).sceneName = sceneName;
  handlers = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Delegate);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Events_EventManager_c__DisplayClass14_0_InvokePreLoadScene_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  Events_EventManager__InvokeEach((System_Delegate_o *)handlers,__this_00,method_00);
  return;
}


// Events.EventManager$$InvokeLoadScene
// il2cpp: void Events_EventManager__InvokeLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5dda890

void Events_EventManager__InvokeLoadScene(int32_t sceneName,MethodInfo *method)

{
  Events_OnLoadScene_o *handlers;
  Events_EventManager___c__DisplayClass15_0_o *__this;
  System_Action_Delegate__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754824c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Delegate);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Events_EventManager_c__DisplayClass15_0_InvokeLoadScene_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_c__DisplayClass15_0);
    Il2CppMethodInitialized_0754824c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_c__DisplayClass15_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Events_EventManager___c__DisplayClass15_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).sceneName = sceneName;
  handlers = TypeInfo_Events_EventManager->static_fields->OnLoadScene;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Delegate);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Events_EventManager_c__DisplayClass15_0_InvokeLoadScene_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  Events_EventManager__InvokeEach((System_Delegate_o *)handlers,__this_00,method_00);
  return;
}


// Events.EventManager$$InvokeEach
// il2cpp: void Events_EventManager__InvokeEach (System_Delegate_o* handlers, System_Action_Delegate__o* invoke, const MethodInfo* method);
// 0x5dda6b0
// eh: try 0x5dda728..0x5dda72b -> pad 0x5dda73f catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5dda756..0x5dda76d -> pad 0x5dda870 cleanup
// eh: try 0x5dda7c3..0x5dda7c8 -> pad 0x5dda7cd catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5dda7e4..0x5dda870 -> pad 0x5dda874 (+1 call sites) cleanup
// eh: try 0x5dda877..0x5dda87c -> pad 0x5dda884 catch (...) [compiler noexcept guard]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dda73a: jmp 0x5dda835
// asm:   0x5dda73f: mov r13, rax
// asm:   0x5dda742: cmp edx, 1
// asm:   0x5dda745: jne 0x5dda87c
// asm:   0x5dda74b: mov rdi, r13
// asm:   0x5dda74e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dda753: mov r13, rax
// asm:   0x5dda756: mov rdi, r15
// asm:   0x5dda759: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dda75e: mov rcx, qword ptr [r13]
// asm:   0x5dda762: mov rsi, qword ptr [rcx]
// asm:   0x5dda765: mov rdi, rax
// asm:   0x5dda768: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dda76d: test al, al
// asm:   0x5dda76f: je 0x5dda84e
// asm:   0x5dda775: mov r13, qword ptr [r13]
// asm:   0x5dda779: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dda77e: mov rdi, r12
// asm:   0x5dda781: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dda786: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dda78d: jne 0x5dda797
// asm:   0x5dda78f: mov rdi, rax
// asm:   0x5dda792: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dda797: mov rdi, r13
// asm:   0x5dda79a: xor esi, esi
// asm:   0x5dda79c: call 0x69bd800  ; UnityEngine_Debug__LogException()
// asm:   0x5dda7a1: jmp 0x5dda72b
// asm:   0x5dda7cd: mov r13, rax
// asm:   0x5dda7d0: cmp edx, 1
// asm:   0x5dda7d3: jne 0x5dda87c
// asm:   0x5dda7d9: mov rdi, r13
// asm:   0x5dda7dc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dda7e1: mov r13, rax
// asm:   0x5dda7e4: mov rdi, r15
// asm:   0x5dda7e7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dda7ec: mov rcx, qword ptr [r13]
// asm:   0x5dda7f0: mov rsi, qword ptr [rcx]
// asm:   0x5dda7f3: mov rdi, rax
// asm:   0x5dda7f6: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dda7fb: test al, al
// asm:   0x5dda7fd: je 0x5dda84e
// asm:   0x5dda7ff: mov rbx, qword ptr [r13]
// asm:   0x5dda803: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dda808: mov rdi, r12
// asm:   0x5dda80b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dda810: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dda817: jne 0x5dda821
// asm:   0x5dda819: mov rdi, rax
// asm:   0x5dda81c: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dda821: mov rdi, rbx
// asm:   0x5dda824: xor esi, esi
// asm:   0x5dda826: call 0x69bd800  ; UnityEngine_Debug__LogException()
// asm:   0x5dda82b: inc ebp
// asm:   0x5dda82d: mov eax, dword ptr [r14 + 0x18]
// asm:   0x5dda831: cmp ebp, eax
// asm:   0x5dda833: jl 0x5dda7bb
// asm:   0x5dda84e: mov edi, 8
// asm:   0x5dda853: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dda858: mov rcx, qword ptr [r13]
// asm:   0x5dda85c: mov qword ptr [rax], rcx
// asm:   0x5dda85f: lea rsi, [rip + 0x1052c9a]
// asm:   0x5dda866: mov rdi, rax
// asm:   0x5dda869: xor edx, edx
// asm:   0x5dda86b: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dda870: jmp 0x5dda874
// asm:   0x5dda872: jmp 0x5dda874
// asm:   0x5dda874: mov r13, rax
// asm:   0x5dda877: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dda87c: mov rdi, r13
// asm:   0x5dda87f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dda884: mov rdi, rax
// asm:   0x5dda887: call 0x2ab61e0  ; __clang_call_terminate()

void Events_EventManager__InvokeEach
               (System_Delegate_o *handlers,System_Action_Delegate__o *invoke,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Delegate_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (handlers != (System_Delegate_o *)0x0) {
    pSVar3 = (*(handlers->klass->vtable)._9_GetInvocationList.methodPtr)
                       (handlers,(handlers->klass->vtable)._9_GetInvocationList.method);
    if (pSVar3 == (System_Delegate_array *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = (int)pSVar3->max_length;
    if (invoke == (System_Action_Delegate__o *)0x0) {
      if (0 < iVar2) {
        if (iVar2 != 0) {
          ThrowNullReferenceException();
        }
label_05dda844:
        ThrowIndexOutOfRangeException();
      }
    }
    else if (0 < iVar2) {
      uVar4 = pSVar3->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) goto label_05dda844;
        (*(code *)(invoke->fields).invoke_impl)
                  ((invoke->fields).method_code,pSVar3->m_Items[uVar5],(invoke->fields).method);
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar3->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return;
}


// Events.EventManager$$InvokeFinishInit
// il2cpp: void Events_EventManager__InvokeFinishInit (const MethodInfo* method);
// 0x5dda960

void Events_EventManager__InvokeFinishInit(MethodInfo *method)

{
  Events_OnFinishInit_o *pEVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (Il2CppMethodInitialized_0754824d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    Il2CppMethodInitialized_0754824d = '\x01';
    in_RDX = extraout_RDX;
  }
  pEVar1 = TypeInfo_Events_EventManager->static_fields->OnFinishInit;
  if (pEVar1 == (Events_OnFinishInit_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pEVar1->fields).invoke_impl;
  (*vtableDispatch)((pEVar1->fields).method_code,(pEVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// Events.EventManager$$SecondTick
// il2cpp: System_Collections_IEnumerator_o* Events_EventManager__SecondTick (Events_EventManager_o* __this, const MethodInfo* method);
// 0x5dda590

System_Collections_IEnumerator_o *
Events_EventManager__SecondTick(Events_EventManager_o *__this,MethodInfo *method)

{
  Events_EventManager__SecondTick_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_0754824e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_SecondTick_d__18);
    Il2CppMethodInitialized_0754824e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_SecondTick_d__18);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Events.EventManager$$.ctor
// il2cpp: void Events_EventManager___ctor (Events_EventManager_o* __this, const MethodInfo* method);
// 0x5dda9d0

void Events_EventManager___ctor(Events_EventManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


