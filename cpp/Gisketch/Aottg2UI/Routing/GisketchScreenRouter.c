// Type: Gisketch.Aottg2UI.Routing.GisketchScreenRouter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Routing/GisketchScreenRouter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___ctor(Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass35_0$$<DeactivateActive>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___DeactivateActive_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x1818bfcb0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___DeactivateActive_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  System_Action_o *pSVar1;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
            (__this_00,(__this->fields).oldId,(__this->fields).old,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).afterDeactivate;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass40_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ctor(Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass40_0$$<ShowPrepared>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ShowPrepared_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x1818bfd00

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ShowPrepared_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    view = (__this->fields).old;
    if ((pGVar1->fields)._outgoingView != view) {
      return;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
              (pGVar1,(__this->fields).oldId,view,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      (pGVar1->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._outgoingView,(void *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        (pGVar1->fields)._outgoingId = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._outgoingId,(void *)0x0);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          (pGVar1->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._outgoingExit,(void *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass42_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___ctor(Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass42_0$$<CloseActive>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___CloseActive_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o* __this, const MethodInfo* method);
// 0x1818bfd90

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___CloseActive_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *root;
  DG_Tweening_TweenCallback_o *pDVar1;
  
  if (Il2CppMethodInitialized_184341fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    Il2CppMethodInitialized_184341fa6 = '\x01';
  }
  root = (__this->fields).oldRoot;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,(MethodInfo *)0x0);
  pDVar1 = (__this->fields).afterClose;
  if (pDVar1 != (DG_Tweening_TweenCallback_o *)0x0) {
    (*(code *)(pDVar1->fields).invoke_impl)((pDVar1->fields).method_code,(pDVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41___ctor(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_IDisposable_Dispose(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x1818be8b0

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      (__this_00->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pendingActivation,(void *)0x0);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
                (__this_00,(__this->fields).screen,(__this->fields).id,(MethodInfo *)0x0);
      return false;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x1818be950

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41_System_Collections_IEnume
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39___ctor(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_IDisposable_Dispose(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x1818bec10

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  int iVar5;
  int64_t iVar6;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_CanvasGroup_o *__this_01;
  System_String_o *str2;
  System_String_o *pSVar9;
  int iVar10;
  Il2CppObject *local_res8;
  int64_t local_res18;
  
  if (Il2CppMethodInitialized_184341fa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"replace");
    il2cpp_codegen_initialize_runtime_metadata(&"ms");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.CompleteCached");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.StartCached");
    il2cpp_codegen_initialize_runtime_metadata(&" elapsed=");
    Il2CppMethodInitialized_184341fa7 = '\x01';
  }
  iVar5 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  local_res8 = (Il2CppObject *)0x0;
  local_res18 = 0;
  iVar10 = 0;
  if (iVar5 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
       (pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields)._screenCache,
       pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)(__this->fields).id,&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
      if ((bVar4) && (local_res8 != (Il2CppObject *)0x0)) {
        pUVar2 = local_res8[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          return false;
        }
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
                (__this_00,"replace",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      iVar6 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
      (__this->fields)._startMs_5__2 = iVar6;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                ("ScreenPrewarm.StartCached",(__this->fields).id,(MethodInfo *)0x0);
      screen = (__this->fields).screen;
      pUVar8 = (__this_00->fields)._screenLayer;
      context = (__this_00->fields)._context;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      pGVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                         (screen,pUVar8,context,(MethodInfo *)0x0);
      (__this->fields)._view_5__3 = pGVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._view_5__3,pGVar7);
      if ((__this->fields)._view_5__3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        return false;
      }
      pUVar2 = (UnityEngine_Object_o *)(((__this->fields)._view_5__3)->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        return false;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields)._screenCache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)(__this->fields).id,(Il2CppObject *)(__this->fields)._view_5__3,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_set_Item);
        pGVar7 = (__this->fields)._view_5__3;
        (__this_00->fields)._prewarmCachedView = pGVar7;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmCachedView,pGVar7);
        pGVar7 = (__this->fields)._view_5__3;
        if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          pUVar3 = (pGVar7->fields)._Root_k__BackingField;
          (__this_00->fields)._prewarmHost = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmHost,pUVar3);
          pSVar9 = (__this->fields).id;
          (__this_00->fields)._prewarmId = pSVar9;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmId,pSVar9);
          pGVar7 = (__this->fields)._view_5__3;
          if (((pGVar7 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
              (pUVar3 = (pGVar7->fields)._Root_k__BackingField, pUVar3 != (UnityEngine_GameObject_o *)0x0)) &&
             (pUVar8 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsFirstSibling(pUVar8,(MethodInfo *)0x0);
            pGVar7 = (__this->fields)._view_5__3;
            if ((pGVar7 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
               (pUVar3 = (pGVar7->fields)._Root_k__BackingField, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
              pGVar7 = (__this->fields)._view_5__3;
              if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                pUVar3 = (pGVar7->fields)._Root_k__BackingField;
                if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
                }
                Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar3,true,(MethodInfo *)0x0);
                pGVar7 = (__this->fields)._view_5__3;
                if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                            ((pGVar7->fields)._Root_k__BackingField,false,(MethodInfo *)0x0);
                  pGVar7 = (__this->fields)._view_5__3;
                  if ((pGVar7 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
                     (pUVar3 = (pGVar7->fields)._Root_k__BackingField,
                     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    __this_01 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar3,(MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar4 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar4) {
                      if (__this_01 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818bf0ce;
                      UnityEngine_CanvasGroup__set_alpha(__this_01,0.0,(MethodInfo *)0x0);
                    }
                    iVar5 = (__this->fields).keepAliveFrames;
                    if (iVar5 < 1) {
                      iVar5 = 1;
                    }
                    (__this->fields)._frames_5__4 = iVar5;
                    (__this->fields)._i_5__5 = 0;
                    goto label_1818befd9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar5 != 1) {
      return false;
    }
    iVar10 = (__this->fields)._i_5__5 + 1;
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__5 = iVar10;
    if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      iVar5 = (__this->fields)._frames_5__4;
label_1818befd9:
      if ((iVar10 < iVar5) && ((__this_00->fields)._prewarmCachedView == (__this->fields)._view_5__3)) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
        (__this->fields).__1__state = 1;
        return true;
      }
      pGVar7 = (__this->fields)._view_5__3;
      if ((__this_00->fields)._prewarmCachedView == pGVar7) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView(__this_00,pGVar7,(MethodInfo *)0x0);
        (__this_00->fields)._prewarmCachedView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmCachedView,(void *)0x0);
        (__this_00->fields)._prewarmHost = (UnityEngine_GameObject_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmHost,(void *)0x0);
        (__this_00->fields)._prewarmId = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmId,(void *)0x0);
        pSVar9 = (__this->fields).id;
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        }
        iVar6 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
        local_res18 = iVar6 - (__this->fields)._startMs_5__2;
        str2 = System_Int64__ToString(&local_res18,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat_1969590
                           (pSVar9," elapsed=",str2,"ms",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenPrewarm.CompleteCached",pSVar9,(MethodInfo *)0x0);
      }
      return false;
    }
  }
label_1818bf0ce:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x1818bf0e0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39_System_Collections_IEnu
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37___ctor(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x1818bfac0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bfadf: xor edx, edx
// asm:   0x1818bfae1: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1818bfae6: call 0x1818bfb00  ; Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1()
// asm:   0x1818bfaeb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818bfaf0: test rcx, rcx
// asm:   0x1818bfaf3: jne 0x1818bfafa
// asm:   0x1818bfafa: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 2)) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1
              (__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x1818bf120
// eh: try 0x1818bf22d..0x1818bfa64 -> pad 0x183315a20 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bf9d3: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x1818bf9d8: test rbx, rbx
// asm:   0x1818bf9db: jne 0x1818bfa64
// asm:   0x1818bf9e1: movzx eax, byte ptr [rsp + 0xa0]
// asm:   0x1818bfa64: lea rcx, [rsp + 0x40]
// asm:   0x1818bfa69: call 0x1818a3890  ; il2cpp_runtime_helper_1818a3890()
// asm:   0x1818bfa6e: mov rcx, rbx
// asm:   0x1818bfa71: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  UnityEngine_Object_o *x;
  Il2CppType *handle;
  bool bVar4;
  int iVar5;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this_02;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_CanvasGroup_o *__this_04;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar9;
  int64_t iVar10;
  System_String_o *str2;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this_05;
  int64_t local_res20;
  
  if (Il2CppMethodInitialized_184341fa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"replace");
    il2cpp_codegen_initialize_runtime_metadata(&"ms");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Prewarm ");
    il2cpp_codegen_initialize_runtime_metadata(&" elapsed=");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.Complete");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.Start");
    Il2CppMethodInitialized_184341fa8 = '\x01';
  }
  local_res20 = 0;
  __this_00 = (__this->fields).__4__this;
  iVar5 = (__this->fields).__1__state;
  if (iVar5 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
    bVar4 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = (__this_00->fields)._screenLayer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    bVar4 = System_String__Equals_196c550
                      ((__this_00->fields)._activeId,(__this->fields).id,5,(MethodInfo *)0x0);
    if ((bVar4) ||
       (bVar4 = System_String__Equals_196c550
                          ((__this_00->fields)._pendingId,(__this->fields).id,5,(MethodInfo *)0x0), bVar4)) {
      return false;
    }
    pGVar3 = (__this_00->fields)._context;
    if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (pGVar3->fields).Manifest;
    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                          (__this_01,(__this->fields).id,(MethodInfo *)0x0);
    if (__this_02 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return false;
    }
    bVar4 = Gisketch_Aottg2UI_Data_GisketchScreenDefinition__UsesCachedLifecycle(__this_02,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar11 = (__this->fields).id;
      iVar2 = (__this->fields).keepAliveFrames;
      if (Il2CppMethodInitialized_184341f90 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39);
        Il2CppMethodInitialized_184341f90 = '\x01';
      }
      __this_05 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39
                            );
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_05,(MethodInfo *)0x0);
      (__this_05->fields).__1__state = 0;
      if (__this_05 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *)0x0) {
        (__this_05->fields).__4__this = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields).__4__this,__this_00);
        (__this_05->fields).screen = __this_02;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields).screen,__this_02);
        (__this_05->fields).id = pSVar11;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields).id,pSVar11);
        (__this_05->fields).keepAliveFrames = iVar2;
        (__this->fields).__2__current = (Il2CppObject *)__this_05;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_05);
        (__this->fields).__1__state = 1;
        return true;
      }
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
              (__this_00,"replace",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    iVar10 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
    (__this->fields)._startMs_5__2 = iVar10;
    pSVar11 = System_String__Concat_1969e50("AoTTG Prewarm ",(__this->fields).id,(MethodInfo *)0x0);
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((obj != (System_Type_o *)0x0) &&
       (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
       pIVar6 == (Il2CppObject *)0x0)) {
      pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(pUVar7,pSVar11,components,(MethodInfo *)0x0);
    (__this->fields)._host_5__3 = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._host_5__3,pUVar7);
    pUVar7 = (__this->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__SetParent_2f5a7e0(pUVar8,(__this_00->fields)._screenLayer,false,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__SetAsFirstSibling(pUVar8,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_03 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar7,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    }
    if (Il2CppMethodInitialized_184341fa2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341fa2 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      if (__this_03 == (UnityEngine_RectTransform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_RectTransform__set_anchorMin
                (__this_03,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (__this_03,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMin
                (__this_03,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMax
                (__this_03,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
    }
    pUVar7 = (__this->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_04 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar7,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    if (__this_04 == (UnityEngine_CanvasGroup_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_CanvasGroup__set_alpha(__this_04,0.0,(MethodInfo *)0x0);
    UnityEngine_CanvasGroup__set_interactable(__this_04,false,(MethodInfo *)0x0);
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_04,false,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._host_5__3;
    (__this_00->fields)._prewarmHost = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmHost,pUVar7);
    pSVar11 = (__this->fields).id;
    (__this_00->fields)._prewarmId = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmId,pSVar11);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenPrewarm.Start",(__this->fields).id,(MethodInfo *)0x0);
    (__this->fields).__1__state = -3;
    pUVar7 = (__this->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    pGVar3 = (__this_00->fields)._context;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar9 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                       (__this_02,pUVar8,pGVar3,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      x = (UnityEngine_Object_o *)(pGVar9->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar7 = (pGVar9->fields)._Root_k__BackingField;
        if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      }
    }
    iVar5 = (__this->fields).keepAliveFrames;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    (__this->fields)._frames_5__4 = iVar5;
    (__this->fields)._i_5__5 = 0;
  }
  else {
    if (iVar5 == 1) {
      (__this->fields).__1__state = -1;
      return false;
    }
    if (iVar5 != 2) {
      return false;
    }
    (__this->fields).__1__state = -3;
    piVar1 = &(__this->fields)._i_5__5;
    *piVar1 = *piVar1 + 1;
  }
  if ((__this->fields)._i_5__5 < (__this->fields)._frames_5__4) {
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((__this_00->fields)._prewarmHost == (__this->fields)._host_5__3) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
  else if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._prewarmHost == (__this->fields)._host_5__3) {
    pSVar11 = (__this->fields).id;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    iVar10 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
    local_res20 = iVar10 - (__this->fields)._startMs_5__2;
    str2 = System_Int64__ToString(&local_res20,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_1969590
                        (pSVar11," elapsed=",str2,"ms",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenPrewarm.Complete",pSVar11,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1(__this,(MethodInfo *)0x0)
  ;
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x1818bfb00

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_184341fa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    Il2CppMethodInitialized_184341fa9 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    root = (__this->fields)._host_5__3;
    if ((pGVar1->fields)._prewarmHost == root) {
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,(MethodInfo *)0x0);
      (pGVar1->fields)._prewarmHost = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._prewarmHost,(void *)0x0);
      (pGVar1->fields)._prewarmId = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._prewarmId,(void *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x1818bfa80

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmScreen_d__37_System_Collections_IEnumerato
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, UnityEngine_Transform_o* screenLayer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, UnityEngine_MonoBehaviour_o* runner, const MethodInfo* method);
// 0x1818ad0c0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,UnityEngine_Transform_o *screenLayer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,UnityEngine_MonoBehaviour_o *runner,
               MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__GisketchView__o *__this_00;
  
  if (Il2CppMethodInitialized_184341f84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f84 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GisketchView);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_ctor);
  (__this->fields)._screenCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenCache,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._screenLayer = screenLayer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenLayer,screenLayer);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context,context);
  (__this->fields)._runner = runner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._runner,runner);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_Active
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x1805853f0

Gisketch_Aottg2UI_Building_GisketchView_o*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active(Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, MethodInfo* method)

{
  return (__this->fields)._active;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_ActiveId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x180c8eec0

System_String_o*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId(Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, MethodInfo* method)

{
  return (__this->fields)._activeId;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsTransitioning
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x1818ad310

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._pendingActivation != (UnityEngine_Coroutine_o *)0x0) {
    return true;
  }
  if ((__this->fields)._outgoingExit == (DG_Tweening_Tween_o *)0x0) {
    return false;
  }
  bVar1 = DG_Tweening_TweenExtensions__IsActive((__this->fields)._outgoingExit,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsPrewarming
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x1818ad290

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f85 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  return (__this->fields)._prewarmCachedView != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_CanShowScreen
// il2cpp: System_Func_string__bool__o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_CanShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x18058a5d0

System_Func_string__bool__o*
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_CanShowScreen(Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, MethodInfo* method)

{
  return (__this->fields)._CanShowScreen_k__BackingField;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$set_CanShowScreen
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__set_CanShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Func_string__bool__o* value, const MethodInfo* method);
// 0x18058a960

void
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__set_CanShowScreen(Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Func_string__bool__o* value, MethodInfo* method)

{
  (__this->fields)._CanShowScreen_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CanShowScreen_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$add_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x1818ad1e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ad21f: nop 

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               System_Action_string__GisketchView__o *value,MethodInfo *method)

{
  System_Action_string__GisketchView__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__GisketchView__o *pSVar3;
  System_Action_string__GisketchView__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184341f86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    Il2CppMethodInitialized_184341f86 = '\x01';
  }
  a = (__this->fields).ScreenShown;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string_GisketchView;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).ScreenShown,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$remove_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x1818ad330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ad36f: nop 

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               System_Action_string__GisketchView__o *value,MethodInfo *method)

{
  System_Action_string__GisketchView__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__GisketchView__o *pSVar3;
  System_Action_string__GisketchView__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184341f87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    Il2CppMethodInitialized_184341f87 = '\x01';
  }
  source = (__this->fields).ScreenShown;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string_GisketchView;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).ScreenShown,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowScreen
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x1818aca50
// eh: try 0x1818acb73..0x1818aceec -> pad 0x183319050 (+11 call sites) catch Il2CppExceptionWrapper
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818acd04: jmp 0x1818acec3
// asm:   0x1818acd7e: jmp 0x1818acec3
// asm:   0x1818acde9: jmp 0x1818acec3
// asm:   0x1818ace85: jmp 0x1818acec3
// asm:   0x1818ace87: xor edx, edx
// asm:   0x1818ace89: lea rcx, [rsp + 0x70]
// asm:   0x1818ace8e: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818ace93: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1818ace98: test rcx, rcx
// asm:   0x1818ace9b: jne 0x1818acee6
// asm:   0x1818ace9d: mov rcx, qword ptr [rsp + 0xc8]
// asm:   0x1818acea5: test rcx, rcx
// asm:   0x1818acea8: je 0x1818aceb1
// asm:   0x1818aceaa: xor edx, edx
// asm:   0x1818aceac: call 0x182ecef40  ; Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample()
// asm:   0x1818aceb1: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1818aceb6: test rcx, rcx
// asm:   0x1818aceb9: jne 0x1818aceec
// asm:   0x1818acebb: movzx ebx, byte ptr [rsp + 0xb8]
// asm:   0x1818acee6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818aceec: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317e10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317e15: push rbp
// asm:   0x183317e16: sub rsp, 0x30
// asm:   0x183317e1a: mov rbp, rdx
// asm:   0x183317e1d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183317e21: mov rcx, qword ptr [rax]
// asm:   0x183317e24: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317e28: movabs rax, 0
// asm:   0x183317e32: add rsp, 0x30
// asm:   0x183317e36: pop rbp
// asm:   0x183317e37: ret 
// asm:   0x183319050: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319055: push rbp
// asm:   0x183319056: sub rsp, 0x30
// asm:   0x18331905a: mov rbp, rdx
// asm:   0x18331905d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183319061: mov rcx, qword ptr [rax]
// asm:   0x183319064: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183319068: movabs rax, 0
// asm:   0x183319072: add rsp, 0x30
// asm:   0x183319076: pop rbp
// asm:   0x183319077: ret 

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  Unity_Profiling_ProfilerMarker_Fields markerPtr;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  System_Func_string__bool__o *pSVar2;
  bool bVar3;
  char cVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  Unity_Profiling_ProfilerMarker_o local_res20;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  undefined8 local_48;
  Unity_Profiling_ProfilerMarker_o *local_40;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_38;
  
  if (Il2CppMethodInitialized_184341f88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"route ");
    il2cpp_codegen_initialize_runtime_metadata(&" pending=");
    il2cpp_codegen_initialize_runtime_metadata(&"missing ");
    il2cpp_codegen_initialize_runtime_metadata(&"blocked ");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch screen not found: ");
    il2cpp_codegen_initialize_runtime_metadata(&"skip duplicate ");
    il2cpp_codegen_initialize_runtime_metadata(&"find screen active=");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenRouter.ShowScreen");
    Il2CppMethodInitialized_184341f88 = '\x01';
  }
  local_res20.fields.m_Ptr = (Unity_Profiling_ProfilerMarker_Fields)0;
  local_38.fields._area = (System_String_o *)0x0;
  local_38.fields._detail = (System_String_o *)0x0;
  local_38.fields._startMs._0_4_ = 0;
  local_38.fields._startMs._4_2_ = 0;
  local_38.fields._startMs._6_2_ = 0;
  local_38.fields._enabled = false;
  local_38.fields._hotLoop = false;
  local_38.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
  }
  markerPtr.m_Ptr =
       (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->static_fields->ShowScreenMarker).fields.m_Ptr
  ;
  if (markerPtr.m_Ptr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample(markerPtr.m_Ptr,(MethodInfo *)0x0);
  }
  local_48 = 0;
  local_40 = &local_res20;
  local_res20.fields.m_Ptr =
       (Unity_Profiling_ProfilerMarker_Fields)(Unity_Profiling_ProfilerMarker_Fields)markerPtr.m_Ptr;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_68,"ScreenRouter.ShowScreen",id,(MethodInfo *)0x0);
  local_38.fields._area = (pGVar5->fields)._area;
  local_38.fields._detail = (pGVar5->fields)._detail;
  local_38.fields._startMs = (pGVar5->fields)._startMs;
  local_38.fields._enabled = (pGVar5->fields)._enabled;
  local_38.fields._hotLoop = (pGVar5->fields)._hotLoop;
  local_38.fields._26_6_ = *(undefined6 *)&(pGVar5->fields).field_0x1a;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)&local_38;
  pSVar6 = System_String__Concat_1969590
                     ("find screen active=",(__this->fields)._activeId," pending=",
                      (__this->fields)._pendingId,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar6,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._context;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    __this_00 = (pGVar1->fields).Manifest;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(__this_00,id,(MethodInfo *)0x0);
      if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
        pSVar6 = System_String__Concat_1969e50("missing ",id,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar6,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_1969e50("Gisketch screen not found: ",id,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
        bVar3 = false;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_38,(MethodInfo *)0x0);
        if (local_res20.fields.m_Ptr != 0) {
          Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample
                    ((intptr_t)local_res20.fields.m_Ptr,(MethodInfo *)0x0);
        }
      }
      else {
        bVar3 = System_String__Equals_196c550((__this->fields)._activeId,id,5,(MethodInfo *)0x0);
        if ((bVar3) ||
           (bVar3 = System_String__Equals_196c550((__this->fields)._pendingId,id,5,(MethodInfo *)0x0), bVar3))
        {
          pSVar6 = System_String__Concat_1969e50("skip duplicate ",id,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          }
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                    ("ScreenRouter.ShowScreen",pSVar6,(MethodInfo *)0x0);
          bVar3 = true;
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_38,(MethodInfo *)0x0);
          if (local_res20.fields.m_Ptr != 0) {
            Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample
                      ((intptr_t)local_res20.fields.m_Ptr,(MethodInfo *)0x0);
          }
        }
        else if (((__this->fields)._CanShowScreen_k__BackingField == (System_Func_string__bool__o *)0x0) ||
                (pSVar2 = (__this->fields)._CanShowScreen_k__BackingField,
                cVar4 = (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,id),
                cVar4 != '\0')) {
          pSVar6 = System_String__Concat_1969e50("route ",id,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,pSVar6,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,(MethodInfo *)0x0);
          (__this->fields)._pendingId = id;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId,id);
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared(__this,screen,id,(MethodInfo *)0x0);
          bVar3 = true;
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_38,(MethodInfo *)0x0);
          if (local_res20.fields.m_Ptr != 0) {
            Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample
                      ((intptr_t)local_res20.fields.m_Ptr,(MethodInfo *)0x0);
          }
        }
        else {
          pSVar6 = System_String__Concat_1969e50("blocked ",id,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          }
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                    ("ScreenRouter.ShowScreen",pSVar6,(MethodInfo *)0x0);
          bVar3 = false;
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_38,(MethodInfo *)0x0);
          if (local_res20.fields.m_Ptr != 0) {
            Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample
                      ((intptr_t)local_res20.fields.m_Ptr,(MethodInfo *)0x0);
          }
        }
      }
      return bVar3;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Back
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x1818a9d80
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a9e58: mov r8, rbx
// asm:   0x1818a9f9b: xor r8d, r8d
// asm:   0x1818a9f9e: mov rdx, rbx
// asm:   0x1818a9fa1: mov rcx, rdi
// asm:   0x1818a9fa4: call 0x1818aca50  ; Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen()
// asm:   0x1818a9fa9: jmp 0x1818a9f1d
// asm:   0x1818a9fae: xor al, al
// asm:   0x1818a9fb0: jmp 0x1818a9f1d

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar3;
  Il2CppObject *obj;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar10;
  System_String_o *pSVar11;
  VirtualInvokeData *pVVar12;
  ushort uVar13;
  System_String_o *pSVar15;
  UnityEngine_GameObject_o *pUVar16;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_68;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48 [2];
  UnityEngine_GameObject_o *pUVar14;
  
  if (Il2CppMethodInitialized_184341f89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"-back");
    Il2CppMethodInitialized_184341f89 = '\x01';
  }
  pGVar2 = (__this->fields)._context;
  if ((pGVar2 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (pGVar3 = (pGVar2->fields).Manifest, pGVar3 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0
     )) {
    pGVar10 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                        (pGVar3,(__this->fields)._activeId,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      pSVar15 = (System_String_o *)0x0;
    }
    else {
      bVar9 = System_String__IsNullOrEmpty((pGVar10->fields).backActionId,(MethodInfo *)0x0);
      if (!bVar9) {
        pGVar2 = (__this->fields)._context;
        if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
          pSVar15 = (pGVar10->fields).backActionId;
          obj = (Il2CppObject *)(pGVar2->fields).Actions;
          pSVar11 = System_String__Concat_1969e50
                              ((pGVar10->fields).id,"-back",(MethodInfo *)0x0);
          pUVar14 = (UnityEngine_GameObject_o *)0x0;
          pUVar16 = pUVar14;
          if ((__this->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            pUVar16 = (((__this->fields)._active)->fields)._Root_k__BackingField;
          }
          local_68.fields.ElementId = (System_String_o *)0x0;
          local_68.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
          local_68.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          local_68.fields.InputSource = 0;
          local_68.fields._28_4_ = 0;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_190b9a0
                    (&local_68,pSVar11,pUVar16,(pGVar10->fields).root,2,(MethodInfo *)0x0);
          uVar7 = local_68.fields._24_8_;
          pGVar6 = local_68.fields.Node;
          pUVar16 = local_68.fields.GameObject;
          pSVar11 = local_68.fields.ElementId;
          if (obj == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar4 = obj->klass;
          uVar1 = (pIVar4->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            do {
              if (pIVar5[(longlong)pUVar14].interfaceType ==
                  (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
                pVVar12 = pIVar4->vtable + pIVar5[(longlong)pUVar14].offset;
                goto label_1818a9ee3;
              }
              uVar13 = (short)pUVar14 + 1;
              pUVar14 = (UnityEngine_GameObject_o *)(ulonglong)uVar13;
            } while (uVar13 < uVar1);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0)
          ;
label_1818a9ee3:
          uVar8 = local_68.fields._24_8_;
          local_48[0].fields.ElementId = pSVar11;
          local_48[0].fields.GameObject = pUVar16;
          local_48[0].fields.Node = pGVar6;
          local_68.fields.InputSource = (int32_t)uVar7;
          local_68.fields._28_4_ = SUB84(uVar7,4);
          local_48[0].fields.InputSource = local_68.fields.InputSource;
          local_48[0].fields._28_4_ = local_68.fields._28_4_;
          local_68.fields._24_8_ = uVar8;
          (*pVVar12->methodPtr)(obj,pSVar15,local_48,pVVar12->method);
          return true;
        }
        goto label_1818a9fb5;
      }
      pSVar15 = (pGVar10->fields).backScreenId;
    }
    bVar9 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
    if ((!bVar9) &&
       (bVar9 = System_String__Equals_196c550(pSVar15,(__this->fields)._activeId,5,(MethodInfo *)0x0), !bVar9)
       ) {
      pGVar2 = (__this->fields)._context;
      if ((pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
         (pGVar3 = (pGVar2->fields).Manifest,
         pGVar3 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto label_1818a9fb5;
      pGVar10 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                          (pGVar3,pSVar15,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
        bVar9 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(__this,pSVar15,(MethodInfo *)0x0);
        return bVar9;
      }
    }
    return false;
  }
label_1818a9fb5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RefreshNode
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RefreshNode (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* nodeId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o* options, const MethodInfo* method);
// 0x1818ab7e0

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RefreshNode
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *nodeId,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement,
               Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *options,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_MonoBehaviour_o *pUVar2;
  bool bVar3;
  int32_t index;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this_00;
  UnityEngine_EventSystems_EventSystem_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *value;
  UnityEngine_GameObject_o *pUVar8;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame_d__10_o *routine;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341f8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f8a = '\x01';
  }
  if ((__this->fields)._active == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    return false;
  }
  pUVar4 = (UnityEngine_Object_o *)(((__this->fields)._active)->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if (replacement == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return false;
  }
  bVar3 = System_String__Equals_196c550((replacement->fields).id,nodeId,5,(MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pGVar1 = (__this->fields)._active;
  if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_1818abeb1;
  pUVar4 = (UnityEngine_Object_o *)
           Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,nodeId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if ((pUVar4 == (UnityEngine_Object_o *)0x0) ||
     (pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1818abeb1;
  pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if (options == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) {
    options = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(options,(MethodInfo *)0x0);
    if (options == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_1818abeb1;
  }
  if ((options->fields).PreserveScroll == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)0x0);
  }
  else {
    pGVar1 = (__this->fields)._active;
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_1818abeb1;
    pUVar8 = (pGVar1->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll(pUVar8,(MethodInfo *)0x0);
  }
  if ((options->fields).PreserveFocus == false) {
label_1818abb2e:
    value = (System_String_o *)0x0;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    }
    if (Il2CppMethodInitialized_184341fa3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341fa3 = '\x01';
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818abeb1;
      x = (UnityEngine_Object_o *)(pUVar6->fields).m_CurrentSelected;
    }
    else {
      x = (UnityEngine_Object_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) goto label_1818abb2e;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) goto label_1818abb2e;
    if (x == (UnityEngine_Object_o *)0x0) goto label_1818abeb1;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1818abeb1;
    bVar3 = UnityEngine_Transform__IsChildOf(pUVar5,pUVar7,(MethodInfo *)0x0);
    if (!bVar3) goto label_1818abb2e;
    value = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
  }
  pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      index = UnityEngine_Transform__GetSiblingIndex(pUVar7,(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._active;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree
                  (pGVar1,(UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar4,false,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
        }
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot
                  ((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
        context = (__this->fields)._context;
        pGVar1 = (__this->fields)._active;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                           (replacement,pUVar5,context,pGVar1,(MethodInfo *)0x0);
        if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar5 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetSiblingIndex(pUVar5,index,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._active;
          if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            if ((options->fields).SettleLayout == false) {
              Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutDirty(pGVar1,(MethodInfo *)0x0);
            }
            else {
              pUVar8 = (pGVar1->fields)._Root_k__BackingField;
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
                        (pUVar8,2,(MethodInfo *)0x0);
              pGVar1 = (__this->fields)._active;
              if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_1818abeb1;
              Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(pGVar1,(MethodInfo *)0x0);
            }
            pGVar1 = (__this->fields)._active;
            if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
               (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0)) {
              Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore
                        (__this_00,(pGVar1->fields)._Root_k__BackingField,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._runner;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar3) {
                if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
                }
                bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                if (bVar3) {
                  pGVar1 = (__this->fields)._active;
                  if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_1818abeb1;
                  pUVar2 = (__this->fields)._runner;
                  pUVar8 = (pGVar1->fields)._Root_k__BackingField;
                  if (Il2CppMethodInitialized_184341faf == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&
                               TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10
                              );
                    Il2CppMethodInitialized_184341faf = '\x01';
                  }
                  routine = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10
                                      );
                  System_Object___ctor
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                             (MethodInfo *)0x0);
                  (routine->fields).__1__state = 0;
                  (routine->fields).__4__this = __this_00;
                  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this_00);
                  (routine->fields).root = pUVar8;
                  Il2CppCodeGenWriteBarrier(&(routine->fields).root,pUVar8);
                  if (pUVar2 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_1818abeb1;
                  UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            (pUVar2,(System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
                }
              }
              pGVar1 = (__this->fields)._active;
              if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
              }
              if (Il2CppMethodInitialized_184341fa4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                Il2CppMethodInitialized_184341fa4 = '\x01';
              }
              if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
              }
              pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (((!bVar3) && (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) &&
                 (bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0), !bVar3)) {
                pUVar4 = (UnityEngine_Object_o *)
                         Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,value,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar3 = UnityEngine_Object__op_Inequality
                                  (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar3) {
                  if (pUVar4 == (UnityEngine_Object_o *)0x0) goto label_1818abeb1;
                  bVar3 = UnityEngine_GameObject__get_activeInHierarchy
                                    ((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
                  if (bVar3) {
                    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
                    }
                    pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
                    if (pUVar6 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818abeb1;
                    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                              (pUVar6,(UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
                  }
                }
              }
              return true;
            }
          }
        }
      }
    }
  }
label_1818abeb1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Clear
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x1818aa3d0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *value;
  bool bVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *object;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *pDVar3;
  
  if (Il2CppMethodInitialized_184341f8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184341f8b = '\x01';
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
            (__this,"clear",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184341f93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0_CloseActive_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0);
    Il2CppMethodInitialized_184341f93 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *)0x0)
  goto label_1818aa5f6;
  (object->fields).afterClose = (DG_Tweening_TweenCallback_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(object->fields).afterClose,(void *)0x0);
  if ((__this->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(((__this->fields)._active)->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (__this->fields)._active;
      if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
label_1818aa5f6:
        ThrowNullReferenceException();
      }
      value = (pGVar1->fields)._Root_k__BackingField;
      (object->fields).oldRoot = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).oldRoot,value);
      pGVar1 = (__this->fields)._active;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
      pDVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
      DG_Tweening_TweenCallback___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pDVar3,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0_CloseActive_b__0
                 ,(MethodInfo *)0x0);
      if (t == (DG_Tweening_Tween_o *)0x0) {
        if (pDVar3 == (DG_Tweening_TweenCallback_o *)0x0) goto label_1818aa5f6;
        (*(code *)(pDVar3->fields).invoke_impl)((pDVar3->fields).method_code);
      }
      else {
        DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                  ((Il2CppObject *)t,pDVar3,
                   (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
      }
      (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._active,(void *)0x0);
      goto label_1818aa5a6;
    }
  }
  pDVar3 = (object->fields).afterClose;
  if (pDVar3 != (DG_Tweening_TweenCallback_o *)0x0) {
    (*(code *)(pDVar3->fields).invoke_impl)((pDVar3->fields).method_code);
  }
label_1818aa5a6:
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyCachedViews(__this,(MethodInfo *)0x0);
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active,(void *)0x0);
  (__this->fields)._activeId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId,(void *)0x0);
  (__this->fields)._pendingId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DeactivateActive
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, bool animate, System_Action_o* afterDeactivate, const MethodInfo* method);
// 0x1818aa7c0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,bool animate,
               System_Action_o *afterDeactivate,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  System_String_o *value;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  System_Action_o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o *object;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  
  if (Il2CppMethodInitialized_184341f8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass35_0_DeactivateActive_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass35_0);
    il2cpp_codegen_initialize_runtime_metadata(&"deactivate active");
    Il2CppMethodInitialized_184341f8c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass35_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o *)0x0)
  goto label_1818aaa1a;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  (object->fields).afterDeactivate = afterDeactivate;
  Il2CppCodeGenWriteBarrier(&(object->fields).afterDeactivate,afterDeactivate);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
            (__this,"deactivate active",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._active;
  (object->fields).old = pGVar1;
  Il2CppCodeGenWriteBarrier(&(object->fields).old,pGVar1);
  value = (__this->fields)._activeId;
  (object->fields).oldId = value;
  Il2CppCodeGenWriteBarrier(&(object->fields).oldId,value);
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active,(void *)0x0);
  (__this->fields)._activeId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId,(void *)0x0);
  (__this->fields)._pendingId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId,(void *)0x0);
  if ((object->fields).old != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(((object->fields).old)->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar1 = (object->fields).old;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        root = (pGVar1->fields)._Root_k__BackingField;
        if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
        }
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(root,true,(MethodInfo *)0x0);
        pGVar1 = (object->fields).old;
        if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                    ((pGVar1->fields)._Root_k__BackingField,false,(MethodInfo *)0x0);
          if (animate) {
            pGVar1 = (object->fields).old;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
            if (t != (DG_Tweening_Tween_o *)0x0) {
              action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass35_0_DeactivateActive_b__0
                         ,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                        ((Il2CppObject *)t,action,
                         (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween)
              ;
              return;
            }
          }
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
                    (__this,(object->fields).oldId,(object->fields).old,(MethodInfo *)0x0);
          goto label_1818aa9fd;
        }
      }
label_1818aaa1a:
      ThrowNullReferenceException();
    }
  }
label_1818aa9fd:
  pSVar2 = (object->fields).afterDeactivate;
  if (pSVar2 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$InvalidateScreen
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__InvalidateScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x1818ab380

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__InvalidateScreen
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184341f8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"invalidate ");
    il2cpp_codegen_initialize_runtime_metadata(&"active ");
    il2cpp_codegen_initialize_runtime_metadata(&"outgoing ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenRouter.InvalidateScreen");
    Il2CppMethodInitialized_184341f8d = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar1 = (__this->fields)._context;
    if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (__this_00 = (pGVar1->fields).Manifest,
       __this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
      screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(__this_00,id,(MethodInfo *)0x0);
      if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
        return false;
      }
      pSVar3 = System_String__Concat_1969e50("invalidate ",id,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,pSVar3,(MethodInfo *)0x0);
      bVar2 = System_String__Equals_196c550((__this->fields)._activeId,id,5,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = System_String__Concat_1969e50("active ",id,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.InvalidateScreen",pSVar3,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView(__this,id,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
                  (__this,(__this->fields)._active,(MethodInfo *)0x0);
        (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._active,(void *)0x0);
        (__this->fields)._activeId = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId,(void *)0x0);
        (__this->fields)._pendingId = id;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId,id);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,(MethodInfo *)0x0);
      }
      else {
        bVar2 = System_String__Equals_196c550((__this->fields)._outgoingId,id,5,(MethodInfo *)0x0);
        if (!bVar2) {
          bVar2 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView
                            (__this,id,(MethodInfo *)0x0);
          return bVar2;
        }
        pSVar3 = System_String__Concat_1969e50("outgoing ",id,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.InvalidateScreen",pSVar3,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView(__this,id,(MethodInfo *)0x0);
        if (((__this->fields)._outgoingExit != (DG_Tweening_Tween_o *)0x0) &&
           (bVar2 = DG_Tweening_TweenExtensions__IsActive((__this->fields)._outgoingExit,(MethodInfo *)0x0),
           bVar2)) {
          DG_Tweening_TweenExtensions__Kill((__this->fields)._outgoingExit,false,(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
                  (__this,(__this->fields)._outgoingView,(MethodInfo *)0x0);
        (__this->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingView,(void *)0x0);
        (__this->fields)._outgoingId = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingId,(void *)0x0);
        (__this->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingExit,(void *)0x0);
      }
      return true;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmScreen
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, int32_t keepAliveFrames, const MethodInfo* method);
// 0x1818ab760

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
          int32_t keepAliveFrames,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmScreen_d__37);
    Il2CppMethodInitialized_184341f8e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmScreen_d__37);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).keepAliveFrames = keepAliveFrames;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelPrewarm
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x1818a9fd0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  System_String_o *area;
  bool bVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184341f8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&" reason=");
    Il2CppMethodInitialized_184341f8f = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) || ((__this->fields)._prewarmCachedView != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    pSVar2 = (__this->fields)._prewarmId;
    bVar1 = System_String__IsNullOrEmpty(reason,(MethodInfo *)0x0);
    area = "ScreenPrewarm.Cancel";
    if (bVar1) {
      str1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      str1 = System_String__Concat_1969e50(" reason=",reason,(MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat_1969e50(pSVar2,str1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar2,(MethodInfo *)0x0);
    if ((__this->fields)._prewarmCachedView == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      root = (__this->fields)._prewarmHost;
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,(MethodInfo *)0x0);
    }
    else {
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView
                (__this,(__this->fields)._prewarmCachedView,(MethodInfo *)0x0);
    }
    (__this->fields)._prewarmHost = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prewarmHost,(void *)0x0);
    (__this->fields)._prewarmCachedView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prewarmCachedView,(void *)0x0);
    (__this->fields)._prewarmId = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prewarmId,(void *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmCachedScreen
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, int32_t keepAliveFrames, const MethodInfo* method);
// 0x1818ab6c0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
          int32_t keepAliveFrames,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39);
    Il2CppMethodInitialized_184341f90 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).screen = screen;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).screen,screen);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  (__this_00->fields).keepAliveFrames = keepAliveFrames;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowPrepared
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x1818ac500
// eh: try 0x1818ac66d..0x1818aca43 -> pad 0x183315b20 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ac69f: mov rsi, r14
// asm:   0x1818ac739: mov r12, qword ptr [rip + 0x27f8f08]  ; "null"
// asm:   0x1818ac740: mov r13, qword ptr [rip + 0x27fbb59]  ; "oldRoot="
// asm:   0x1818ac747: mov r15, qword ptr [rip + 0x27d26ba]  ; "ScreenRouter.ShowPrepared"
// asm:   0x1818ac9ff: xor edx, edx
// asm:   0x1818aca01: lea rcx, [rsp + 0x60]
// asm:   0x1818aca06: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818aca0b: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1818aca10: test rcx, rcx
// asm:   0x1818aca13: jne 0x1818aca43
// asm:   0x1818aca43: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  System_String_o *pSVar2;
  UnityEngine_MonoBehaviour_o *pUVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *object;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar5;
  DG_Tweening_Tween_o *t;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *routine;
  UnityEngine_Coroutine_o *value;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *x;
  bool local_78 [16];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_184341f91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass40_0_ShowPrepared_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass40_0);
    il2cpp_codegen_initialize_runtime_metadata(&"oldRoot=");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" oldExit=");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenRouter.ShowPrepared");
    Il2CppMethodInitialized_184341f91 = '\x01';
  }
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)0x0;
  local_48.fields._startMs._0_4_ = 0;
  local_48.fields._startMs._4_2_ = 0;
  local_48.fields._startMs._6_2_ = 0;
  local_48.fields._enabled = false;
  local_48.fields._hotLoop = false;
  local_48.fields._26_6_ = 0;
  local_78[0] = false;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass40_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_68,"ScreenRouter.ShowPrepared",id,(MethodInfo *)0x0);
  local_48.fields._area = (pGVar5->fields)._area;
  local_48.fields._detail = (pGVar5->fields)._detail;
  local_48.fields._startMs = (pGVar5->fields)._startMs;
  local_48.fields._enabled = (pGVar5->fields)._enabled;
  local_48.fields._hotLoop = (pGVar5->fields)._hotLoop;
  local_48.fields._26_6_ = *(undefined6 *)&(pGVar5->fields).field_0x1a;
  t = (DG_Tweening_Tween_o *)0x0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)&local_48;
  pGVar1 = (__this->fields)._active;
  (object->fields).old = pGVar1;
  Il2CppCodeGenWriteBarrier(&(object->fields).old,pGVar1);
  pSVar2 = (__this->fields)._activeId;
  (object->fields).oldId = pSVar2;
  Il2CppCodeGenWriteBarrier(&(object->fields).oldId,pSVar2);
  x = t;
  if ((object->fields).old != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (DG_Tweening_Tween_o *)(((object->fields).old)->fields)._Root_k__BackingField;
  }
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active,(void *)0x0);
  (__this->fields)._activeId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId,(void *)0x0);
  if ((object->fields).old != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pGVar1 = (object->fields).old;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar6 = "oldRoot=";
  pSVar2 = "ScreenRouter.ShowPrepared";
  str1 = "null";
  if (bVar4) {
    if (x == (DG_Tweening_Tween_o *)0x0) {
      ThrowNullReferenceException();
    }
    str1 = UnityEngine_Object__get_name((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
  }
  local_78[0] = t != (DG_Tweening_Tween_o *)0x0;
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  str3 = System_Boolean__ToString(local_78,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_1969590(pSVar6,str1," oldExit=",str3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(pSVar2,pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar4) || (t == (DG_Tweening_Tween_o *)0x0)) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
              (__this,(object->fields).oldId,(object->fields).old,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_48,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked
            ((UnityEngine_GameObject_o *)x,true,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
            ((UnityEngine_GameObject_o *)x,false,(MethodInfo *)0x0);
  pGVar1 = (object->fields).old;
  (__this->fields)._outgoingView = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingView,pGVar1);
  pSVar2 = (object->fields).oldId;
  (__this->fields)._outgoingId = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingId,pSVar2);
  (__this->fields)._outgoingExit = t;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingExit,t);
  pUVar3 = (__this->fields)._runner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields)._runner;
      if (Il2CppMethodInitialized_184341f92 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
        Il2CppMethodInitialized_184341f92 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      if (routine == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *)0x0) {
        ThrowNullReferenceException();
      }
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      (routine->fields).screen = screen;
      Il2CppCodeGenWriteBarrier(&(routine->fields).screen,screen);
      (routine->fields).id = id;
      Il2CppCodeGenWriteBarrier(&(routine->fields).id,id);
      if (pUVar3 == (UnityEngine_MonoBehaviour_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        (pUVar3,(System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
      goto label_1818ac955;
    }
  }
  value = (UnityEngine_Coroutine_o *)0x0;
label_1818ac955:
  (__this->fields)._pendingActivation = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingActivation,value);
  if ((__this->fields)._pendingActivation == (UnityEngine_Coroutine_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,(MethodInfo *)0x0);
  }
  action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
  DG_Tweening_TweenCallback___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass40_0_ShowPrepared_b__0,
             (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
            ((Il2CppObject *)t,action,
             (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_48,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ActivateNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x1818a98c0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this_00;
  
  if (Il2CppMethodInitialized_184341f92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
    Il2CppMethodInitialized_184341f92 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).screen = screen;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).screen,screen);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CloseActive
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, DG_Tweening_TweenCallback_o* afterClose, const MethodInfo* method);
// 0x1818aa600

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               DG_Tweening_TweenCallback_o *afterClose,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *value;
  bool bVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *object;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *pDVar3;
  
  if (Il2CppMethodInitialized_184341f93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0_CloseActive_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0);
    Il2CppMethodInitialized_184341f93 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *)0x0)
  goto label_1818aa7b0;
  (object->fields).afterClose = afterClose;
  Il2CppCodeGenWriteBarrier(&(object->fields).afterClose,afterClose);
  if ((__this->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(((__this->fields)._active)->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (__this->fields)._active;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        value = (pGVar1->fields)._Root_k__BackingField;
        (object->fields).oldRoot = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).oldRoot,value);
        pGVar1 = (__this->fields)._active;
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
        pDVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
        DG_Tweening_TweenCallback___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pDVar3,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0_CloseActive_b__0
                   ,(MethodInfo *)0x0);
        if (t == (DG_Tweening_Tween_o *)0x0) {
          if (pDVar3 == (DG_Tweening_TweenCallback_o *)0x0) goto label_1818aa7b0;
          (*(code *)(pDVar3->fields).invoke_impl)((pDVar3->fields).method_code);
        }
        else {
          DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                    ((Il2CppObject *)t,pDVar3,
                     (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
        }
        (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._active,(void *)0x0);
        return;
      }
label_1818aa7b0:
      ThrowNullReferenceException();
    }
  }
  pDVar3 = (object->fields).afterClose;
  if (pDVar3 != (DG_Tweening_TweenCallback_o *)0x0) {
    (*(code *)(pDVar3->fields).invoke_impl)((pDVar3->fields).method_code,(pDVar3->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Activate
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x1818a9950
// eh: try 0x1818a9a5a..0x1818a9d78 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a9b29: mov rax, qword ptr [rip + 0x27fbb18]  ; "null"
// asm:   0x1818a9d22: xor edx, edx
// asm:   0x1818a9d24: lea rcx, [rsp + 0x48]
// asm:   0x1818a9d29: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818a9d2e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818a9d33: test rcx, rcx
// asm:   0x1818a9d36: jne 0x1818a9d78
// asm:   0x1818a9d78: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Action_string__GisketchView__o *pSVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar5;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar6;
  System_String_o *str1;
  System_String_o *pSVar7;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_184341f94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"play enter");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"view ready root=");
    il2cpp_codegen_initialize_runtime_metadata(&"build view start");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenRouter.Activate");
    il2cpp_codegen_initialize_runtime_metadata(&"screen shown event");
    il2cpp_codegen_initialize_runtime_metadata(&"skip pending mismatch pending=");
    Il2CppMethodInitialized_184341f94 = '\x01';
  }
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)0x0;
  local_50.fields._startMs._0_4_ = 0;
  local_50.fields._startMs._4_2_ = 0;
  local_50.fields._startMs._6_2_ = 0;
  local_50.fields._enabled = false;
  local_50.fields._hotLoop = false;
  local_50.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_70,"ScreenRouter.Activate",id,(MethodInfo *)0x0);
  local_50.fields._area = (pGVar5->fields)._area;
  local_50.fields._detail = (pGVar5->fields)._detail;
  local_50.fields._startMs = (pGVar5->fields)._startMs;
  local_50.fields._enabled = (pGVar5->fields)._enabled;
  local_50.fields._hotLoop = (pGVar5->fields)._hotLoop;
  local_50.fields._26_6_ = *(undefined6 *)&(pGVar5->fields).field_0x1a;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)&local_50;
  bVar4 = System_String__Equals_196c550((__this->fields)._pendingId,id,5,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenRouter.Activate","build view start",(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__GetOrBuildView
                       (__this,screen,id,(MethodInfo *)0x0);
    (__this->fields)._active = pGVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._active,pGVar6);
    pSVar7 = "view ready root=";
    pSVar8 = "ScreenRouter.Activate";
    str1 = "null";
    if ((__this->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pUVar1 = (UnityEngine_Object_o *)(((__this->fields)._active)->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      str1 = "null";
      if (bVar4) {
        pGVar6 = (__this->fields)._active;
        if (pGVar6 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar1 = (UnityEngine_Object_o *)(pGVar6->fields)._Root_k__BackingField;
        if (pUVar1 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        str1 = UnityEngine_Object__get_name(pUVar1,(MethodInfo *)0x0);
      }
    }
    pSVar7 = System_String__Concat_1969e50(pSVar7,str1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(pSVar8,pSVar7,(MethodInfo *)0x0);
    (__this->fields)._activeId = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId,id);
    (__this->fields)._pendingId = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId,(void *)0x0);
    pGVar6 = (__this->fields)._active;
    if (pGVar6 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = (pGVar6->fields)._Root_k__BackingField;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pGVar6 = (__this->fields)._active;
    if (pGVar6 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = (pGVar6->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar2,false,(MethodInfo *)0x0);
    pGVar6 = (__this->fields)._active;
    if (pGVar6 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
              ((pGVar6->fields)._Root_k__BackingField,true,(MethodInfo *)0x0);
    pGVar6 = (__this->fields)._active;
    if (pGVar6 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility
              ((pGVar6->fields)._Root_k__BackingField,(MethodInfo *)0x0);
    pGVar6 = (__this->fields)._active;
    if (pGVar6 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = (pGVar6->fields)._Root_k__BackingField;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenRouter.Activate","play enter",(MethodInfo *)0x0);
    pGVar6 = (__this->fields)._active;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(pGVar6,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).ScreenShown;
    if (pSVar3 != (System_Action_string__GisketchView__o *)0x0) {
      (*(code *)(pSVar3->fields).invoke_impl)
                ((pSVar3->fields).method_code,id,(__this->fields)._active,(pSVar3->fields).method);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenRouter.Activate","screen shown event",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
  }
  else {
    pSVar8 = System_String__Concat_1969e50
                       ("skip pending mismatch pending=",(__this->fields)._pendingId,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate",pSVar8,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelTransition
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x1818aa160

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341f95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f95 = '\x01';
  }
  if ((__this->fields)._pendingActivation != (UnityEngine_Coroutine_o *)0x0) {
    pUVar1 = (__this->fields)._runner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._runner;
      if (pUVar1 == (UnityEngine_MonoBehaviour_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                (pUVar1,(__this->fields)._pendingActivation,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingActivation,(void *)0x0);
  if ((__this->fields)._outgoingExit != (DG_Tweening_Tween_o *)0x0) {
    bVar2 = DG_Tweening_TweenExtensions__IsActive((__this->fields)._outgoingExit,(MethodInfo *)0x0);
    if (bVar2) {
      DG_Tweening_TweenExtensions__Kill((__this->fields)._outgoingExit,false,(MethodInfo *)0x0);
    }
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
            (__this,(__this->fields)._outgoingId,(__this->fields)._outgoingView,(MethodInfo *)0x0);
  (__this->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingExit,(void *)0x0);
  (__this->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingView,(void *)0x0);
  (__this->fields)._outgoingId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingId,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$GetOrBuildView
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__GetOrBuildView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x1818aaf00

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__GetOrBuildView
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *value;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_res10;
  
  if (Il2CppMethodInitialized_184341f96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"cache miss ");
    il2cpp_codegen_initialize_runtime_metadata(&"cache hit ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenRouter.Activate");
    Il2CppMethodInitialized_184341f96 = '\x01';
  }
  local_res10 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    bVar2 = Gisketch_Aottg2UI_Data_GisketchScreenDefinition__UsesCachedLifecycle(screen,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1818ab10a;
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)id,(Il2CppObject **)&local_res10,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
      if ((bVar2) && (local_res10 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
        x = (UnityEngine_Object_o *)(local_res10->fields)._Root_k__BackingField;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = System_String__Concat_1969e50("cache hit ",id,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          }
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                    ("ScreenRouter.Activate",pSVar3,(MethodInfo *)0x0);
          return local_res10;
        }
      }
    }
  }
  pSVar3 = System_String__Concat_1969e50("cache miss ",id,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate",pSVar3,(MethodInfo *)0x0);
  parent = (__this->fields)._screenLayer;
  context = (__this->fields)._context;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  value = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView(screen,parent,context,(MethodInfo *)0x0)
  ;
  if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    bVar2 = Gisketch_Aottg2UI_Data_GisketchScreenDefinition__UsesCachedLifecycle(screen,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_1818ab10a:
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)id,(Il2CppObject *)value,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_set_Item);
    }
  }
  return value;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ReleaseDepartedView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818abec0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_res18;
  
  if (Il2CppMethodInitialized_184341f97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f97 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_184341f98 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
        Il2CppMethodInitialized_184341f98 = '\x01';
      }
      local_res18 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
      if (!bVar1) {
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this_00,(Il2CppObject *)id,(Il2CppObject **)&local_res18,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
        if ((bVar1) && (local_res18 == view)) {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView(__this,view,(MethodInfo *)0x0);
          return;
        }
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView(__this,view,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$IsCachedView
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__IsCachedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818ab610

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__IsCachedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_res10;
  
  if (Il2CppMethodInitialized_184341f98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    Il2CppMethodInitialized_184341f98 = '\x01';
  }
  local_res10 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((!bVar1) && (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)id,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    if (bVar1) {
      return local_res10 == view;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$HideCachedView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818ab110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ab364: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341f99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f99 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pUVar1 = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pUVar2 = (view->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar2,true,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
              ((view->fields)._Root_k__BackingField,false,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if (Il2CppMethodInitialized_184341fa0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341fa0 = '\x01';
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818ab36f;
      x = (UnityEngine_Object_o *)(pUVar4->fields).m_CurrentSelected;
    }
    else {
      x = (UnityEngine_Object_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (((x == (UnityEngine_Object_o *)0x0) ||
            (__this_00 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
            pUVar1 == (UnityEngine_Object_o *)0x0)) ||
           (parent = UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)pUVar1,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_1818ab36f;
        bVar3 = UnityEngine_Transform__IsChildOf(__this_00,parent,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
          }
          pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818ab36f;
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                    (pUVar4,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
        }
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest(view,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility
              ((view->fields)._Root_k__BackingField,(MethodInfo *)0x0);
    pUVar2 = (view->fields)._Root_k__BackingField;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_1818ab36f:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RemoveCachedView
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x1818abfd0

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  Il2CppObject *pIVar2;
  bool bVar3;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184341f9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    Il2CppMethodInitialized_184341f9a = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
  local_res8 = (Il2CppObject *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)id,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    if (!bVar3) {
      return false;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,(Il2CppObject *)id,
                 (MethodInfo_1470BF0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_Remove);
      pIVar2 = local_res8;
      if (Il2CppMethodInitialized_184341f9c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184341f9c = '\x01';
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        x = pIVar2[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          root = pIVar2[1].monitor;
          if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
          }
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(root,false,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                    (pIVar2[1].monitor,true,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(pIVar2[1].monitor,(MethodInfo *)0x0);
        }
      }
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyCachedViews
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyCachedViews (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x1818aaa20
// eh: try 0x1818aab00..0x1818aabb9 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818aabca: mov rdx, qword ptr [rip + 0x2810a2f]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_Dispose
// asm:   0x1818aabd1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818aabd6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818aabdb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818aabe0: test rcx, rcx
// asm:   0x1818aabe3: jne 0x1818aac12
// asm:   0x1818aabe5: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1818aac12: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyCachedViews
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GisketchView__o *pSVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_184341f9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_GisketchView_GetEnumerator
              );
    Il2CppMethodInitialized_184341f9b = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._screenCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__GisketchView__o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_get_Values);
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_00,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_GisketchView_GetEnumerator
                );
      local_48 = (undefined1  [8])local_60._0_8_;
      pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
      local_38 = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_48,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_MoveNext
                          );
        pIVar2 = local_38;
        if (!bVar3) break;
        if (Il2CppMethodInitialized_184341f9c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter)
          ;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184341f9c = '\x01';
        }
        if (pIVar2 != (Il2CppObject *)0x0) {
          x = pIVar2[1].monitor;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            root = pIVar2[1].monitor;
            if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
            }
            Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(root,false,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                      (pIVar2[1].monitor,true,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(pIVar2[1].monitor,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_Dispose
                );
      pSVar1 = (__this->fields)._screenCache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__GisketchView__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   (MethodInfo_13BF1C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_Clear);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818aace0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818aad84: mov rdi, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f9c = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      root = (view->fields)._Root_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(root,false,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                ((view->fields)._Root_k__BackingField,true,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot
                ((view->fields)._Root_k__BackingField,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$SetInputLocked
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked (UnityEngine_GameObject_o* root, bool locked, const MethodInfo* method);
// 0x1818ac310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ac426: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked
               (UnityEngine_GameObject_o *root,bool locked,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this;
  
  if (Il2CppMethodInitialized_184341f9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f9d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
label_1818ac436:
      ThrowNullReferenceException();
    }
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (root,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup
                         );
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818ac436;
      UnityEngine_CanvasGroup__set_interactable(__this,!locked,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this,!locked,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$SetRaycasterEnabled
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled (UnityEngine_GameObject_o* root, bool enabled, const MethodInfo* method);
// 0x1818ac440

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
               (UnityEngine_GameObject_o *root,bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_GraphicRaycaster_o *x;
  
  if (Il2CppMethodInitialized_184341f9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f9e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
label_1818ac4fa:
      ThrowNullReferenceException();
    }
    x = UnityEngine_GameObject__GetComponent_object_
                  (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_GraphicRaycaster_o *)0x0) goto label_1818ac4fa;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,enabled,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ResetRootVisibility
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ac120

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this;
  
  if (Il2CppMethodInitialized_184341f9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f9f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this,1.0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ClearSelectedIfInside
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ClearSelectedIfInside (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818aa260

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ClearSelectedIfInside
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341fa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fa0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818aa3c8;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  else {
    x = (UnityEngine_Object_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (((x != (UnityEngine_Object_o *)0x0) &&
          (__this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
          root != (UnityEngine_GameObject_o *)0x0)) &&
         (parent = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0),
         __this != (UnityEngine_Transform_o *)0x0)) {
        bVar1 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                    (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
label_1818aa3c8:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyRoot
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818aac20

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fa1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x1818acf00

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341fa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fa2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMin
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMax
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$FocusedNodeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__FocusedNodeId (UnityEngine_GameObject_o* scope, const MethodInfo* method);
// 0x1818aad90

System_String_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__FocusedNodeId
          (UnityEngine_GameObject_o *scope,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  System_String_o *pSVar3;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341fa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fa3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818aaeeb;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  else {
    x = (UnityEngine_Object_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)scope,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (((x != (UnityEngine_Object_o *)0x0) &&
          (__this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
          scope != (UnityEngine_GameObject_o *)0x0)) &&
         (parent = UnityEngine_GameObject__get_transform(scope,(MethodInfo *)0x0),
         __this != (UnityEngine_Transform_o *)0x0)) {
        bVar1 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
        if (!bVar1) {
          return (System_String_o *)0x0;
        }
        pSVar3 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
        return pSVar3;
      }
label_1818aaeeb:
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RestoreFocus
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RestoreFocus (Gisketch_Aottg2UI_Building_GisketchView_o* view, System_String_o* focusId, const MethodInfo* method);
// 0x1818ac1e0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RestoreFocus
               (Gisketch_Aottg2UI_Building_GisketchView_o *view,System_String_o *focusId,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341fa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fa4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    bVar1 = System_String__IsNullOrEmpty(focusId,(MethodInfo *)0x0);
    if (!bVar1) {
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Building_GisketchView__Find(view,focusId,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) {
label_1818ac306:
          ThrowNullReferenceException();
        }
        bVar1 = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0)
        ;
        if (bVar1) {
          if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
          }
          pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818ac306;
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                    (pUVar2,(UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor (const MethodInfo* method);
// 0x1818ad060

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor(MethodInfo *method)

{
  intptr_t iVar1;
  
  if (Il2CppMethodInitialized_184341fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch.ScreenRouter.ShowScreen");
    Il2CppMethodInitialized_184341fa5 = '\x01';
  }
  iVar1 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker
                    ("Gisketch.ScreenRouter.ShowScreen",1,0,0,(MethodInfo *)0x0);
  (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->static_fields->ShowScreenMarker).fields.m_Ptr =
       iVar1;
  return;
}


