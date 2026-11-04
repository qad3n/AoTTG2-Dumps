// Type: Events.EventManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Events/EventManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/EventManager.cs
// --------------------------------

// Events.EventManager.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Events_EventManager___c__DisplayClass14_0___ctor (Events_EventManager___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Events_EventManager___c__DisplayClass14_0___ctor(Events_EventManager___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Events.EventManager.<>c__DisplayClass14_0$$<InvokePreLoadScene>b__0
// il2cpp: void Events_EventManager___c__DisplayClass14_0___InvokePreLoadScene_b__0 (Events_EventManager___c__DisplayClass14_0_o* __this, System_Delegate_o* handler, const MethodInfo* method);
// 0x182340900

void Events_EventManager___c__DisplayClass14_0___InvokePreLoadScene_b__0
               (Events_EventManager___c__DisplayClass14_0_o *__this,System_Delegate_o *handler,
               MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843477b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_1843477b7 = '\x01';
  }
  if (handler == (System_Delegate_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (System_Delegate_o *)0x0;
  if ((Events_OnPreLoadScene_c *)handler->klass == TypeInfo_Events_OnPreLoadScene) {
    pSVar1 = handler;
  }
  if (pSVar1 != (System_Delegate_o *)0x0) {
    pSVar1 = (System_Delegate_o *)0x0;
    if ((Events_OnPreLoadScene_c *)handler->klass == TypeInfo_Events_OnPreLoadScene) {
      pSVar1 = handler;
    }
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,(__this->fields).sceneName,(pSVar1->fields).method);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(handler);
}


// Events.EventManager.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Events_EventManager___c__DisplayClass15_0___ctor (Events_EventManager___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Events_EventManager___c__DisplayClass15_0___ctor(Events_EventManager___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Events.EventManager.<>c__DisplayClass15_0$$<InvokeLoadScene>b__0
// il2cpp: void Events_EventManager___c__DisplayClass15_0___InvokeLoadScene_b__0 (Events_EventManager___c__DisplayClass15_0_o* __this, System_Delegate_o* handler, const MethodInfo* method);
// 0x182340980

void Events_EventManager___c__DisplayClass15_0___InvokeLoadScene_b__0
               (Events_EventManager___c__DisplayClass15_0_o *__this,System_Delegate_o *handler,
               MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843477b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    Il2CppMethodInitialized_1843477b8 = '\x01';
  }
  if (handler == (System_Delegate_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (System_Delegate_o *)0x0;
  if ((Events_OnLoadScene_c *)handler->klass == TypeInfo_Events_OnLoadScene) {
    pSVar1 = handler;
  }
  if (pSVar1 != (System_Delegate_o *)0x0) {
    pSVar1 = (System_Delegate_o *)0x0;
    if ((Events_OnLoadScene_c *)handler->klass == TypeInfo_Events_OnLoadScene) {
      pSVar1 = handler;
    }
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,(__this->fields).sceneName,(pSVar1->fields).method);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(handler);
}


// Events.EventManager.<SecondTick>d__18$$.ctor
// il2cpp: void Events_EventManager__SecondTick_d__18___ctor (Events_EventManager__SecondTick_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Events_EventManager__SecondTick_d__18___ctor(Events_EventManager__SecondTick_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Events.EventManager.<SecondTick>d__18$$System.IDisposable.Dispose
// il2cpp: void Events_EventManager__SecondTick_d__18__System_IDisposable_Dispose (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
Events_EventManager__SecondTick_d__18__System_IDisposable_Dispose(Events_EventManager__SecondTick_d__18_o* __this, MethodInfo* method)

{
  return;
}


// Events.EventManager.<SecondTick>d__18$$MoveNext
// il2cpp: bool Events_EventManager__SecondTick_d__18__MoveNext (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x182340260

bool Events_EventManager__SecondTick_d__18__MoveNext
               (Events_EventManager__SecondTick_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  Events_OnSecondTick_o *pEVar2;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_1843477b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_1843477b9 = '\x01';
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
    pEVar2 = TypeInfo_Events_EventManager->static_fields->OnSecondTick;
    if (pEVar2 != (Events_OnSecondTick_o *)0x0) {
      (*(code *)(pEVar2->fields).invoke_impl)((pEVar2->fields).method_code,(pEVar2->fields).method);
    }
  }
  __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_00,1.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
  (__this->fields).__1__state = 1;
  return true;
}


// Events.EventManager.<SecondTick>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Events_EventManager__SecondTick_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Events_EventManager__SecondTick_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(Events_EventManager__SecondTick_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager.<SecondTick>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Events_EventManager__SecondTick_d__18__System_Collections_IEnumerator_Reset (Events_EventManager__SecondTick_d__18_o* __this, const MethodInfo* method);
// 0x182340330

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
// 0x180573e90

Il2CppObject*
Events_EventManager__SecondTick_d__18__System_Collections_IEnumerator_get_Current(Events_EventManager__SecondTick_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Events.EventManager$$add_OnPreLoadScene
// il2cpp: void Events_EventManager__add_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x182337240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233728c: nop dword ptr [rax]

void Events_EventManager__add_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnPreLoadScene_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnPreLoadScene_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_1843477aa = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnPreLoadScene_c *)pSVar1->klass == TypeInfo_Events_OnPreLoadScene) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnPreLoadScene);
      }
    }
    pEVar2 = (Events_OnPreLoadScene_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnPreLoadScene);
    bVar4 = pEVar2 == a;
    a = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$remove_OnPreLoadScene
// il2cpp: void Events_EventManager__remove_OnPreLoadScene (Events_OnPreLoadScene_o* value, const MethodInfo* method);
// 0x182337540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233758c: nop dword ptr [rax]

void Events_EventManager__remove_OnPreLoadScene(Events_OnPreLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnPreLoadScene_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnPreLoadScene_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_1843477ab = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnPreLoadScene_c *)pSVar1->klass == TypeInfo_Events_OnPreLoadScene) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnPreLoadScene);
      }
    }
    pEVar2 = (Events_OnPreLoadScene_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnPreLoadScene);
    bVar4 = pEVar2 == source;
    source = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$add_OnLoadScene
// il2cpp: void Events_EventManager__add_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x182337180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823371cc: nop dword ptr [rax]

void Events_EventManager__add_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnLoadScene_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnLoadScene_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    Il2CppMethodInitialized_1843477ac = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnLoadScene;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnLoadScene_c *)pSVar1->klass == TypeInfo_Events_OnLoadScene) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnLoadScene);
      }
    }
    pEVar2 = (Events_OnLoadScene_o *)il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnLoadScene);
    bVar4 = pEVar2 == a;
    a = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$remove_OnLoadScene
// il2cpp: void Events_EventManager__remove_OnLoadScene (Events_OnLoadScene_o* value, const MethodInfo* method);
// 0x182337480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823374cc: nop dword ptr [rax]

void Events_EventManager__remove_OnLoadScene(Events_OnLoadScene_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnLoadScene_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnLoadScene_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    Il2CppMethodInitialized_1843477ad = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnLoadScene;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnLoadScene_c *)pSVar1->klass == TypeInfo_Events_OnLoadScene) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnLoadScene);
      }
    }
    pEVar2 = (Events_OnLoadScene_o *)il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnLoadScene);
    bVar4 = pEVar2 == source;
    source = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$add_OnFinishInit
// il2cpp: void Events_EventManager__add_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x1823370c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233710c: nop dword ptr [rax]

void Events_EventManager__add_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnFinishInit_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnFinishInit_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnFinishInit);
    Il2CppMethodInitialized_1843477ae = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnFinishInit;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnFinishInit_c *)pSVar1->klass == TypeInfo_Events_OnFinishInit) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnFinishInit);
      }
    }
    pEVar2 = (Events_OnFinishInit_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnFinishInit);
    bVar4 = pEVar2 == a;
    a = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$remove_OnFinishInit
// il2cpp: void Events_EventManager__remove_OnFinishInit (Events_OnFinishInit_o* value, const MethodInfo* method);
// 0x1823373c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233740c: nop dword ptr [rax]

void Events_EventManager__remove_OnFinishInit(Events_OnFinishInit_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnFinishInit_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnFinishInit_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnFinishInit);
    Il2CppMethodInitialized_1843477af = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnFinishInit;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnFinishInit_c *)pSVar1->klass == TypeInfo_Events_OnFinishInit) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnFinishInit);
      }
    }
    pEVar2 = (Events_OnFinishInit_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnFinishInit);
    bVar4 = pEVar2 == source;
    source = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$add_OnSecondTick
// il2cpp: void Events_EventManager__add_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x182337300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233734c: nop dword ptr [rax]

void Events_EventManager__add_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnSecondTick_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnSecondTick_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnSecondTick);
    Il2CppMethodInitialized_1843477b0 = '\x01';
  }
  a = TypeInfo_Events_EventManager->static_fields->OnSecondTick;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnSecondTick_c *)pSVar1->klass == TypeInfo_Events_OnSecondTick) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnSecondTick);
      }
    }
    pEVar2 = (Events_OnSecondTick_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnSecondTick);
    bVar4 = pEVar2 == a;
    a = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$remove_OnSecondTick
// il2cpp: void Events_EventManager__remove_OnSecondTick (Events_OnSecondTick_o* value, const MethodInfo* method);
// 0x182337600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233764c: nop dword ptr [rax]

void Events_EventManager__remove_OnSecondTick(Events_OnSecondTick_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  Events_OnSecondTick_o *pEVar2;
  System_Delegate_o *pSVar3;
  Events_OnSecondTick_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843477b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnSecondTick);
    Il2CppMethodInitialized_1843477b1 = '\x01';
  }
  source = TypeInfo_Events_EventManager->static_fields->OnSecondTick;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((Events_OnSecondTick_c *)pSVar1->klass == TypeInfo_Events_OnSecondTick) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_Events_OnSecondTick);
      }
    }
    pEVar2 = (Events_OnSecondTick_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnSecondTick);
    bVar4 = pEVar2 == source;
    source = pEVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Events.EventManager$$Init
// il2cpp: void Events_EventManager__Init (const MethodInfo* method);
// 0x182336cb0

void Events_EventManager__Init(MethodInfo *method)

{
  Events_EventManager_o *pEVar1;
  Events_EventManager__SecondTick_d__18_o *routine;
  
  if (Il2CppMethodInitialized_1843477b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_EventManager);
    Il2CppMethodInitialized_1843477b2 = '\x01';
  }
  pEVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Events_EventManager->static_fields->_instance,
                      (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_EventManager);
  TypeInfo_Events_EventManager->static_fields->_instance = pEVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Events_EventManager->static_fields->_instance,pEVar1);
  if (TypeInfo_Events_EventManager->static_fields->_instance != (Events_EventManager_o *)0x0) {
    pEVar1 = TypeInfo_Events_EventManager->static_fields->_instance;
    if (Il2CppMethodInitialized_1843477b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_SecondTick_d__18);
      Il2CppMethodInitialized_1843477b6 = '\x01';
    }
    routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_SecondTick_d__18);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pEVar1,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Events.EventManager$$InvokePreLoadScene
// il2cpp: void Events_EventManager__InvokePreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x182336fa0

void Events_EventManager__InvokePreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Events_OnPreLoadScene_o *handlers;
  Events_EventManager___c__DisplayClass14_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_1843477b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Delegate);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Events_EventManager_c__DisplayClass14_0_InvokePreLoadScene_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_c__DisplayClass14_0);
    Il2CppMethodInitialized_1843477b3 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_c__DisplayClass14_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Events_EventManager___c__DisplayClass14_0_o *)0x0) {
    (object->fields).sceneName = sceneName;
    handlers = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Delegate);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Events_EventManager_c__DisplayClass14_0_InvokePreLoadScene_b__0,
               (MethodInfo *)0x0);
    Events_EventManager__InvokeEach
              ((System_Delegate_o *)handlers,(System_Action_Delegate__o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Events.EventManager$$InvokeLoadScene
// il2cpp: void Events_EventManager__InvokeLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x182336ed0

void Events_EventManager__InvokeLoadScene(int32_t sceneName,MethodInfo *method)

{
  Events_OnLoadScene_o *handlers;
  Events_EventManager___c__DisplayClass15_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_1843477b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Delegate);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Events_EventManager_c__DisplayClass15_0_InvokeLoadScene_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_c__DisplayClass15_0);
    Il2CppMethodInitialized_1843477b4 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_c__DisplayClass15_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Events_EventManager___c__DisplayClass15_0_o *)0x0) {
    (object->fields).sceneName = sceneName;
    handlers = TypeInfo_Events_EventManager->static_fields->OnLoadScene;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Delegate);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Events_EventManager_c__DisplayClass15_0_InvokeLoadScene_b__0,
               (MethodInfo *)0x0);
    Events_EventManager__InvokeEach
              ((System_Delegate_o *)handlers,(System_Action_Delegate__o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Events.EventManager$$InvokeEach
// il2cpp: void Events_EventManager__InvokeEach (System_Delegate_o* handlers, System_Action_Delegate__o* invoke, const MethodInfo* method);
// 0x182336da0
// eh: try 0x182336e0c..0x182336e78 -> pad 0x183319640 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182336def: nop 
// asm:   0x182336e12: mov ebx, dword ptr [rsp + 0x38]
// asm:   0x182336e16: lea eax, [rbx - 1]
// asm:   0x182336e19: movsxd rcx, eax
// asm:   0x182336e1c: mov rdi, qword ptr [rsp + rcx*8 + 0x30]
// asm:   0x182336e21: lea rcx, [rip + 0x1dc4610]  ; TypeInfo_UnityEngine_Debug
// asm:   0x182336e28: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182336e2d: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182336e34: jne 0x182336e3e
// asm:   0x182336e36: mov rcx, rax
// asm:   0x182336e39: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182336e3e: xor edx, edx
// asm:   0x182336e40: mov rcx, rdi
// asm:   0x182336e43: call 0x182ec31f0  ; UnityEngine_Debug__LogException()
// asm:   0x182336e48: dec ebx
// asm:   0x182336e4a: mov dword ptr [rsp + 0x38], ebx
// asm:   0x182336e4e: mov rsi, qword ptr [rsp + 0x68]
// asm:   0x182336e53: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x182336e58: mov ebx, dword ptr [rsp + 0x60]
// asm:   0x182336e64: add rsp, 0x40
// asm:   0x182336e68: pop rdi
// asm:   0x182336e69: pop rsi
// asm:   0x182336e6a: pop rbx
// asm:   0x183319640: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319645: push rbx
// asm:   0x183319646: push rbp
// asm:   0x183319647: push rdi
// asm:   0x183319648: sub rsp, 0x20
// asm:   0x18331964c: mov rbp, rdx
// asm:   0x18331964f: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183319653: mov rax, qword ptr [rdi]
// asm:   0x183319656: mov rbx, qword ptr [rax]
// asm:   0x183319659: lea rcx, [rip + 0xd5f8f8]  ; TypeInfo_System_Exception
// asm:   0x183319660: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183319665: mov rcx, rax
// asm:   0x183319668: mov rdx, rbx
// asm:   0x18331966b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183319670: test al, al
// asm:   0x183319672: mov rax, qword ptr [rdi]
// asm:   0x183319675: je 0x18331968f
// asm:   0x183319677: movsxd rcx, dword ptr [rbp + 0x38]
// asm:   0x18331967b: mov qword ptr [rbp + rcx*8 + 0x30], rax
// asm:   0x183319680: inc dword ptr [rbp + 0x38]
// asm:   0x183319683: movabs rax, 0
// asm:   0x18331968d: jmp 0x1833196a4
// asm:   0x18331968f: mov qword ptr [rbp + 0x20], rax
// asm:   0x183319693: lea rdx, [rip + 0xcc28ee]
// asm:   0x18331969a: lea rcx, [rbp + 0x20]
// asm:   0x18331969e: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833196a4: add rsp, 0x20
// asm:   0x1833196a8: pop rdi
// asm:   0x1833196a9: pop rbp
// asm:   0x1833196aa: pop rbx
// asm:   0x1833196ab: ret 

void Events_EventManager__InvokeEach
               (System_Delegate_o *handlers,System_Action_Delegate__o *invoke,MethodInfo *method)

{
  uint uVar1;
  System_Delegate_array *pSVar2;
  uint uVar3;
  
  if (handlers != (System_Delegate_o *)0x0) {
    pSVar2 = (*(handlers->klass->vtable)._9_GetInvocationList.methodPtr)
                       (handlers,(handlers->klass->vtable)._9_GetInvocationList.method);
    uVar3 = 0;
    if (pSVar2 == (System_Delegate_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (; uVar1 = (uint)pSVar2->max_length, (int)uVar3 < (int)uVar1; uVar3 = uVar3 + 1) {
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (invoke == (System_Action_Delegate__o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(code *)(invoke->fields).invoke_impl)
                ((invoke->fields).method_code,pSVar2->m_Items[(int)uVar3],(invoke->fields).method);
    }
  }
  return;
}


// Events.EventManager$$InvokeFinishInit
// il2cpp: void Events_EventManager__InvokeFinishInit (const MethodInfo* method);
// 0x182336e80

void Events_EventManager__InvokeFinishInit(MethodInfo *method)

{
  Events_OnFinishInit_o *pEVar1;
  
  if (Il2CppMethodInitialized_1843477b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
    Il2CppMethodInitialized_1843477b5 = '\x01';
  }
  pEVar1 = TypeInfo_Events_EventManager->static_fields->OnFinishInit;
  if (pEVar1 != (Events_OnFinishInit_o *)0x0) {
    (*(code *)(pEVar1->fields).invoke_impl)((pEVar1->fields).method_code,(pEVar1->fields).method);
    return;
  }
  return;
}


// Events.EventManager$$SecondTick
// il2cpp: System_Collections_IEnumerator_o* Events_EventManager__SecondTick (Events_EventManager_o* __this, const MethodInfo* method);
// 0x182337070

System_Collections_IEnumerator_o *
Events_EventManager__SecondTick(Events_EventManager_o *__this,MethodInfo *method)

{
  Events_EventManager__SecondTick_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_1843477b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager_SecondTick_d__18);
    Il2CppMethodInitialized_1843477b6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_EventManager_SecondTick_d__18);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Events.EventManager$$.ctor
// il2cpp: void Events_EventManager___ctor (Events_EventManager_o* __this, const MethodInfo* method);
// 0x180528540

void
Events_EventManager___ctor(Events_EventManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


