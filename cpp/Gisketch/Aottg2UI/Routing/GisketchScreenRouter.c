// Type: Gisketch.Aottg2UI.Routing.GisketchScreenRouter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Routing/GisketchScreenRouter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x5350090

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass35_0$$<DeactivateActive>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___DeactivateActive_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x53515c0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0___DeactivateActive_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  System_Action_o *pSVar1;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
            (__this_00,(__this->fields).oldId,(__this->fields).old,in_RCX);
  pSVar1 = (__this->fields).afterDeactivate;
  if (pSVar1 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass40_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x5350e60

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass40_0$$<ShowPrepared>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ShowPrepared_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x5351600

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0___ShowPrepared_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  MethodInfo *in_RCX;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    view = (pGVar1->fields)._outgoingView;
    if (view != (__this->fields).old) {
      return;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
              (pGVar1,(__this->fields).oldId,view,in_RCX);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      (pGVar1->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._outgoingView);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        (pGVar1->fields)._outgoingId = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._outgoingId);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          (pGVar1->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._outgoingExit);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass42_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o* __this, const MethodInfo* method);
// 0x5350f20

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass42_0$$<CloseActive>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___CloseActive_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o* __this, const MethodInfo* method);
// 0x5351680

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0___CloseActive_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *root;
  DG_Tweening_TweenCallback_o *pDVar1;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  if (Il2CppMethodInitialized_07542922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    Il2CppMethodInitialized_07542922 = '\x01';
  }
  root = (__this->fields).oldRoot;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method);
  pDVar1 = (__this->fields).afterClose;
  if (pDVar1 == (DG_Tweening_TweenCallback_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pDVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pDVar1->fields).method_code,(pDVar1->fields).method,extraout_RDX,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5350f00

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x53516f0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x5351700

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  MethodInfo *in_RCX;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pendingActivation);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
              (__this_00,(__this->fields).screen,(__this->fields).id,in_RCX);
  }
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x5351780

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o* __this, const MethodInfo* method);
// 0x5351790

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
// 0x53517d0

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5350e40

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x53517e0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x53517f0
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535199b: jmp 0x5351e06
// asm:   0x5351a97: jmp 0x5351e06
// asm:   0x5351d3c: lea rdi, [r12 + 0x18]
// asm:   0x5351d41: mov qword ptr [r12 + 0x18], 0
// asm:   0x5351d4a: xor esi, esi
// asm:   0x5351d4c: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5351d51: mov dword ptr [r12 + 0x10], 1
// asm:   0x5351d5a: mov bl, 1
// asm:   0x5351d5c: jmp 0x53519de
// asm:   0x5351dae: xor ebx, ebx
// asm:   0x5351db0: xor esi, esi
// asm:   0x5351db2: call 0x63082b0  ; System_Diagnostics_Stopwatch__get_ElapsedMilliseconds()
// asm:   0x5351db7: sub rax, qword ptr [r12 + 0x40]
// asm:   0x5351dbc: mov qword ptr [rsp + 0x10], rax
// asm:   0x5351dc1: lea rdi, [rsp + 0x10]
// asm:   0x5351dc6: xor esi, esi
// asm:   0x5351dc8: call 0x55b83b0  ; System_Int64__ToString()
// asm:   0x5351dcd: lea rcx, [rip + 0x1f7c92c]  ; " elapsed="
// asm:   0x5351dd4: mov rsi, qword ptr [rcx]
// asm:   0x5351dd7: lea rcx, [rip + 0x1fa6b92]  ; "ms"
// asm:   0x5351dde: mov rcx, qword ptr [rcx]
// asm:   0x5351de1: mov rdi, r14
// asm:   0x5351de4: mov rdx, rax
// asm:   0x5351de7: xor r8d, r8d
// asm:   0x5351dea: call 0x5402810  ; System_String__Concat()
// asm:   0x5351def: lea rcx, [rip + 0x1f95c0a]  ; "ScreenPrewarm.CompleteCached"
// asm:   0x5351df6: mov rdi, qword ptr [rcx]
// asm:   0x5351df9: mov rsi, rax
// asm:   0x5351dfc: call 0x534df60  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark()
// asm:   0x5351e01: jmp 0x53519de

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o **targetAddress;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  System_Diagnostics_Stopwatch_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_GameObject_o *pUVar4;
  bool bVar5;
  int iVar6;
  int64_t iVar7;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar8;
  UnityEngine_Transform_o *pUVar9;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  System_String_o *str2;
  System_String_o *pSVar10;
  int iVar11;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar12;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  System_String_o **__this_02;
  Il2CppObject *pIStack_40;
  long lStack_38;
  
  __this_02 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07542923 == '\0') {
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
    __this_02 = &" elapsed=";
    il2cpp_codegen_initialize_runtime_metadata(&" elapsed=");
    Il2CppMethodInitialized_07542923 = '\x01';
    in_RDX = extraout_RDX;
  }
  pIStack_40 = (Il2CppObject *)0x0;
  iVar6 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar6 == 1) {
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__5 + 1;
    (__this->fields)._i_5__5 = iVar6;
    if (iVar6 < (__this->fields)._frames_5__4) {
      if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_05351e06;
      pGVar8 = (__this_00->fields)._prewarmCachedView;
      view = (__this->fields)._view_5__3;
      if (pGVar8 == view) goto label_05351d3c;
      goto label_053519d7;
    }
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_05351e06;
    view = (__this->fields)._view_5__3;
    if ((__this_00->fields)._prewarmCachedView != view) {
      return false;
    }
  }
  else {
    if (iVar6 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) ||
       (pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields)._screenCache,
       pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05351e06;
    bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)(__this->fields).id,&pIStack_40,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    pMVar12 = extraout_RDX_00;
    if ((bVar5) && (pIStack_40 != (Il2CppObject *)0x0)) {
      pUVar2 = pIStack_40[1].monitor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar12 = extraout_RDX_01;
      if (bVar5) {
        return false;
      }
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this_00,"replace",pMVar12);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      if (Il2CppMethodInitialized_075429aa == '\0') goto label_05351aae;
label_05351977:
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor != 0)
      goto label_05351987;
label_05351ad1:
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
    }
    else {
      if (Il2CppMethodInitialized_075429aa != '\0') goto label_05351977;
label_05351aae:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      Il2CppMethodInitialized_075429aa = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
      goto label_05351ad1;
label_05351987:
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
    }
    if (pSVar3 == (System_Diagnostics_Stopwatch_o *)0x0) goto label_05351e06;
    iVar7 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar3,(MethodInfo *)0x0);
    (__this->fields)._startMs_5__2 = iVar7;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenPrewarm.StartCached",(__this->fields).id,method_00)
    ;
    screen = (__this->fields).screen;
    context = (__this_00->fields)._context;
    pUVar9 = (__this_00->fields)._screenLayer;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                       (screen,pUVar9,context,(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._view_5__3;
    (__this->fields)._view_5__3 = pGVar8;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pGVar8 = (__this->fields)._view_5__3;
    if (pGVar8 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return false;
    }
    pUVar2 = (UnityEngine_Object_o *)(pGVar8->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      return false;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_00->fields)._screenCache;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05351e06;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)(__this->fields).id,(Il2CppObject *)(__this->fields)._view_5__3,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_set_Item);
    (__this_00->fields)._prewarmCachedView = (__this->fields)._view_5__3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmCachedView);
    pGVar8 = (__this->fields)._view_5__3;
    if (pGVar8 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_05351e06;
    (__this_00->fields)._prewarmHost = (pGVar8->fields)._Root_k__BackingField;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmHost);
    (__this_00->fields)._prewarmId = (__this->fields).id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmId);
    pGVar8 = (__this->fields)._view_5__3;
    if (((pGVar8 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
        (pUVar4 = (pGVar8->fields)._Root_k__BackingField, pUVar4 == (UnityEngine_GameObject_o *)0x0)) ||
       (pUVar9 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_05351e06;
    UnityEngine_Transform__SetAsFirstSibling(pUVar9,(MethodInfo *)0x0);
    if ((*targetAddress == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
       (pUVar4 = ((*targetAddress)->fields)._Root_k__BackingField, pUVar4 == (UnityEngine_GameObject_o *)0x0))
    goto label_05351e06;
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
    if (*targetAddress == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_05351e06;
    pUVar4 = ((*targetAddress)->fields)._Root_k__BackingField;
    pMVar12 = extraout_RDX_02;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
      pMVar12 = extraout_RDX_03;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar4,true,pMVar12);
    if (*targetAddress == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_05351e06;
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
              (((*targetAddress)->fields)._Root_k__BackingField,false,method_01);
    if ((*targetAddress == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
       (pUVar4 = ((*targetAddress)->fields)._Root_k__BackingField, pUVar4 == (UnityEngine_GameObject_o *)0x0))
    goto label_05351e06;
    __this_01 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                UnityEngine_GameObject__GetComponent_object_
                          (pUVar4,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    __this_02 = (System_String_o **)__this_01;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    in_RDX = extraout_RDX_04;
    if (bVar5) {
      if (__this_01 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_05351e06;
      UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)__this_01,0.0,(MethodInfo *)0x0);
      in_RDX = extraout_RDX_05;
      __this_02 = (System_String_o **)__this_01;
    }
    iVar6 = (__this->fields).keepAliveFrames;
    iVar11 = 1;
    if (1 < iVar6) {
      iVar11 = iVar6;
    }
    (__this->fields)._frames_5__4 = iVar11;
    (__this->fields)._i_5__5 = 0;
    pGVar8 = (__this_00->fields)._prewarmCachedView;
    view = (__this->fields)._view_5__3;
    if (pGVar8 == view) {
label_05351d3c:
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
label_053519d7:
    if (pGVar8 != view) {
      return false;
    }
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView
            ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)__this_02,view,in_RDX);
  (__this_00->fields)._prewarmCachedView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmCachedView);
  (__this_00->fields)._prewarmHost = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmHost);
  (__this_00->fields)._prewarmId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmId);
  pSVar10 = (__this->fields).id;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    if (Il2CppMethodInitialized_075429aa == '\0') goto label_05351d73;
label_05351a73:
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor != 0)
    goto label_05351a83;
label_05351d96:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  }
  else {
    if (Il2CppMethodInitialized_075429aa != '\0') goto label_05351a73;
label_05351d73:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    Il2CppMethodInitialized_075429aa = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
    goto label_05351d96;
label_05351a83:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  }
  if (pSVar3 != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar7 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar3,(MethodInfo *)0x0);
    lStack_38 = iVar7 - (__this->fields)._startMs_5__2;
    str2 = System_Int64__ToString(&lStack_38,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat_5302810
                        (pSVar10," elapsed=",str2,"ms",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenPrewarm.CompleteCached",pSVar10,method_02);
    return false;
  }
label_05351e06:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x5351e90

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o* __this, const MethodInfo* method);
// 0x5351ea0

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
// 0x5351ee0

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5350c80

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x5351ef0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 2) || (iVar1 == -3)) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1(__this,method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x5351f10
// eh: try 0x5352051..0x5352611 -> pad 0x535266b (+53 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5352683..0x5352688 -> pad 0x535268d cleanup
// eh: try 0x5352690..0x535269a -> pad 0x53526a2 catch (...) [compiler noexcept guard]
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5352611: jmp 0x535266b
// asm:   0x5352613: jmp 0x535266b
// asm:   0x5352615: jmp 0x535266b
// asm:   0x5352617: jmp 0x535266b
// asm:   0x5352619: jmp 0x535266b
// asm:   0x535261b: jmp 0x535266b
// asm:   0x535261d: jmp 0x535266b
// asm:   0x535261f: jmp 0x535266b
// asm:   0x5352621: jmp 0x535266b
// asm:   0x5352623: jmp 0x535266b
// asm:   0x5352625: jmp 0x535266b
// asm:   0x5352627: jmp 0x535266b
// asm:   0x5352629: jmp 0x535266b
// asm:   0x535262b: jmp 0x535266b
// asm:   0x535262d: jmp 0x535266b
// asm:   0x535262f: jmp 0x535266b
// asm:   0x5352631: jmp 0x535266b
// asm:   0x5352633: jmp 0x535266b
// asm:   0x5352635: jmp 0x535266b
// asm:   0x5352637: jmp 0x535266b
// asm:   0x5352639: jmp 0x535266b
// asm:   0x535263b: jmp 0x535266b
// asm:   0x535263d: jmp 0x535266b
// asm:   0x535263f: jmp 0x535266b
// asm:   0x5352641: jmp 0x535266b
// asm:   0x5352643: jmp 0x535266b
// asm:   0x5352645: jmp 0x535266b
// asm:   0x5352647: jmp 0x535266b
// asm:   0x5352649: jmp 0x535266b
// asm:   0x535264b: jmp 0x535266b
// asm:   0x535264d: jmp 0x535266b
// asm:   0x535264f: jmp 0x535266b
// asm:   0x5352651: jmp 0x535266b
// asm:   0x5352653: jmp 0x535266b
// asm:   0x5352655: jmp 0x535266b
// asm:   0x5352657: jmp 0x535266b
// asm:   0x5352659: jmp 0x535266b
// asm:   0x535265b: jmp 0x535266b
// asm:   0x535265d: jmp 0x535266b
// asm:   0x535265f: jmp 0x535266b
// asm:   0x5352661: jmp 0x535266b
// asm:   0x5352663: jmp 0x535266b
// asm:   0x5352665: jmp 0x535266b
// asm:   0x5352667: jmp 0x535266b
// asm:   0x5352669: jmp 0x535266b
// asm:   0x535266b: mov rbx, rax
// asm:   0x535266e: cmp edx, 1
// asm:   0x5352671: jne 0x5352690
// asm:   0x5352673: mov rdi, rbx
// asm:   0x5352676: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x535267b: mov rbx, qword ptr [rax]
// asm:   0x535267e: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5352683: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5352688: jmp 0x535255a
// asm:   0x535268d: mov rbx, rax
// asm:   0x5352690: lea rdi, [rsp + 0x10]
// asm:   0x5352695: call 0x2d4aa20  ; il2cpp_runtime_helper_02d4aa20()
// asm:   0x535269a: mov rdi, rbx
// asm:   0x535269d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53526a2: mov rdi, rax
// asm:   0x53526a5: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__MoveNext
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  UnityEngine_Object_o *x;
  System_Diagnostics_Stopwatch_o *__this_02;
  Il2CppType *handle;
  long lVar2;
  bool bVar3;
  int iVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  int64_t iVar5;
  System_String_o *pSVar6;
  System_Type_array *components;
  System_Type_o *value;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_CanvasGroup_o *__this_03;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar9;
  System_String_o *str2;
  Il2CppObject *pIVar10;
  int iVar11;
  UnityEngine_GameObject_o *pUVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_c *method_05;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *pGStack_50;
  long lStack_48;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o **ppGStack_40;
  int64_t iStack_38;
  
  pGStack_50 = __this;
  if (Il2CppMethodInitialized_07542924 == '\0') {
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
    Il2CppMethodInitialized_07542924 = '\x01';
  }
  iStack_38 = 0;
  lStack_48 = 0;
  ppGStack_40 = &pGStack_50;
  iVar4 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar4 == 2) {
    (__this->fields).__1__state = -3;
    iVar4 = (__this->fields)._i_5__5 + 1;
    (__this->fields)._i_5__5 = iVar4;
    if ((__this->fields)._frames_5__4 <= iVar4) {
      if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar7 = (__this_00->fields)._prewarmHost;
      pUVar12 = (__this->fields)._host_5__3;
      goto label_05352487;
    }
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  else {
    if (iVar4 == 1) {
      (__this->fields).__1__state = -1;
      return false;
    }
    if (iVar4 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    bVar3 = System_String__IsNullOrEmpty((pGStack_50->fields).id,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = (__this_00->fields)._screenLayer;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    bVar3 = System_String__Equals_52ffe30
                      ((__this_00->fields)._activeId,(pGStack_50->fields).id,5,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    bVar3 = System_String__Equals_52ffe30
                      ((__this_00->fields)._pendingId,(pGStack_50->fields).id,5,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    pGVar1 = (__this_00->fields)._context;
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (pGVar1->fields).Manifest;
    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (__this_01,(pGStack_50->fields).id,method_00);
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return false;
    }
    if ((screen->fields).lifecycle != 1) {
      pIVar10 = (Il2CppObject *)
                Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen
                          (__this_00,screen,(pGStack_50->fields).id,(pGStack_50->fields).keepAliveFrames,in_R8
                          );
      (pGStack_50->fields).__2__current = pIVar10;
      Il2CppCodeGenWriteBarrier(&(pGStack_50->fields).__2__current);
      (pGStack_50->fields).__1__state = 1;
      return true;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this_00,"replace",method_01);
    method_05 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    iVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)method_05);
    (pGStack_50->fields)._startMs_5__2 = iVar5;
    pSVar6 = System_String__Concat_52f0320("AoTTG Prewarm ",(pGStack_50->fields).id,(MethodInfo *)0x0);
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    value = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_codegen_array_element_type_check((System_Array_o *)components,(Il2CppObject *)value);
    il2cpp_runtime_helper_02ad5c00(components,0,value);
    pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(pUVar7,pSVar6,components,(MethodInfo *)0x0);
    (pGStack_50->fields)._host_5__3 = pUVar7;
    Il2CppCodeGenWriteBarrier(&(pGStack_50->fields)._host_5__3);
    pUVar7 = (pGStack_50->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__SetParent_692d510(pUVar8,(__this_00->fields)._screenLayer,false,(MethodInfo *)0x0);
    pUVar7 = (pGStack_50->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__SetAsFirstSibling(pUVar8,(MethodInfo *)0x0);
    pUVar7 = (pGStack_50->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_04 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
    rect = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch(rect,method_04);
    pUVar7 = (pGStack_50->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_03 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar7,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    if (__this_03 == (UnityEngine_CanvasGroup_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_CanvasGroup__set_alpha(__this_03,0.0,(MethodInfo *)0x0);
    UnityEngine_CanvasGroup__set_interactable(__this_03,false,(MethodInfo *)0x0);
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_03,false,(MethodInfo *)0x0);
    (__this_00->fields)._prewarmHost = (pGStack_50->fields)._host_5__3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmHost);
    (__this_00->fields)._prewarmId = (pGStack_50->fields).id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._prewarmId);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenPrewarm.Start",(pGStack_50->fields).id,method_02);
    (pGStack_50->fields).__1__state = -3;
    pUVar7 = (pGStack_50->fields)._host_5__3;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    method = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    pGVar1 = (__this_00->fields)._context;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar9 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                       (screen,(UnityEngine_Transform_o *)method,pGVar1,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      x = (UnityEngine_Object_o *)(pGVar9->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar7 = (pGVar9->fields)._Root_k__BackingField;
        if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        method = (MethodInfo *)0x1;
        UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      }
    }
    iVar4 = (pGStack_50->fields).keepAliveFrames;
    iVar11 = 1;
    if (1 < iVar4) {
      iVar11 = iVar4;
    }
    (pGStack_50->fields)._frames_5__4 = iVar11;
    (pGStack_50->fields)._i_5__5 = 0;
    __this = pGStack_50;
  }
  pUVar7 = (__this_00->fields)._prewarmHost;
  pUVar12 = (__this->fields)._host_5__3;
  if (pUVar7 == pUVar12) {
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (pGStack_50->fields).__1__state = 2;
    return true;
  }
label_05352487:
  if (pUVar7 == pUVar12) {
    pSVar6 = (__this->fields).id;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    if (Il2CppMethodInitialized_075429aa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      Il2CppMethodInitialized_075429aa = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    __this_02 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
    if (__this_02 == (System_Diagnostics_Stopwatch_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar5 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_02,(MethodInfo *)0x0);
    iStack_38 = iVar5 - (pGStack_50->fields)._startMs_5__2;
    str2 = System_Int64__ToString(&iStack_38,(MethodInfo *)0x0);
    method = (MethodInfo *)
             System_String__Concat_5302810
                       (pSVar6," elapsed=",str2,"ms",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenPrewarm.Complete",(System_String_o *)method,method_03);
    __this = pGStack_50;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1(__this,method);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    il2cpp_runtime_helper_02d4b050(*ppGStack_40);
    il2cpp_codegen_rethrow(lVar2);
  }
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x53526b0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37____m__Finally1
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_07542925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    Il2CppMethodInitialized_07542925 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    ThrowNullReferenceException();
  }
  root = (pGVar1->fields)._prewarmHost;
  if (root != (__this->fields)._host_5__3) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method);
  (pGVar1->fields)._prewarmHost = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._prewarmHost);
  (pGVar1->fields)._prewarmId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._prewarmId);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x5352760

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o* __this, const MethodInfo* method);
// 0x5352770

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
// 0x53527b0

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, UnityEngine_Transform_o* screenLayer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, UnityEngine_MonoBehaviour_o* runner, const MethodInfo* method);
// 0x534d6f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534d72c: cmp byte ptr [rip + 0x21f5153], 0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,UnityEngine_Transform_o *screenLayer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,UnityEngine_MonoBehaviour_o *runner,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__GisketchView__o *__this_00;
  
  if (Il2CppMethodInitialized_07542900 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542900 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GisketchView);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_ctor);
  (__this->fields)._screenCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenCache);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._screenLayer = screenLayer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenLayer);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context);
  (__this->fields)._runner = runner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._runner);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_Active
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534d860

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  return (__this->fields)._active;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_ActiveId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534d870

System_String_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  return (__this->fields)._activeId;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsTransitioning
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534d880

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  bool bVar1;
  
  if ((__this->fields)._pendingActivation != (UnityEngine_Coroutine_o *)0x0) {
    return true;
  }
  t = (__this->fields)._outgoingExit;
  if (t == (DG_Tweening_Tween_o *)0x0) {
    return false;
  }
  bVar1 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsPrewarming
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534d8a0

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542901 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542901 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    bVar2 = (__this->fields)._prewarmCachedView != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_CanShowScreen
// il2cpp: System_Func_string__bool__o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_CanShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534d910

System_Func_string__bool__o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_CanShowScreen
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  return (__this->fields)._CanShowScreen_k__BackingField;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$set_CanShowScreen
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__set_CanShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Func_string__bool__o* value, const MethodInfo* method);
// 0x534d920

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__set_CanShowScreen
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_Func_string__bool__o *value,
               MethodInfo *method)

{
  (__this->fields)._CanShowScreen_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CanShowScreen_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$add_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x534d930

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               System_Action_string__GisketchView__o *value,MethodInfo *method)

{
  System_Action_string__GisketchView__c *pSVar1;
  System_Action_string__GisketchView__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__GisketchView__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07542902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    Il2CppMethodInitialized_07542902 = '\x01';
  }
  a = (__this->fields).ScreenShown;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string_GisketchView;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&(__this->fields).ScreenShown,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$remove_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x534d9e0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               System_Action_string__GisketchView__o *value,MethodInfo *method)

{
  System_Action_string__GisketchView__c *pSVar1;
  System_Action_string__GisketchView__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__GisketchView__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07542903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    Il2CppMethodInitialized_07542903 = '\x01';
  }
  source = (__this->fields).ScreenShown;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string_GisketchView;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&(__this->fields).ScreenShown,value_00,source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowScreen
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x534da90
// eh: try 0x534dbb2..0x534dee2 -> pad 0x534dea2 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x534def3..0x534defd -> pad 0x534df34 catch (...) [compiler noexcept guard]
// eh: try 0x534df15..0x534df1a -> pad 0x534df1f cleanup
// eh: try 0x534df22..0x534df2c -> pad 0x534df34 catch (...) [compiler noexcept guard]
// asm: 56 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534de7c: mov rdi, rbx
// asm:   0x534de7f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534de8e: mov rdi, rbx
// asm:   0x534de91: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534de96: jmp 0x534dec2
// asm:   0x534de98: jmp 0x534dec2
// asm:   0x534de9a: jmp 0x534dec2
// asm:   0x534de9c: jmp 0x534dec2
// asm:   0x534de9e: jmp 0x534dec2
// asm:   0x534dea0: jmp 0x534dec2
// asm:   0x534dea2: jmp 0x534deb0
// asm:   0x534dea4: jmp 0x534dec2
// asm:   0x534dea6: jmp 0x534dec2
// asm:   0x534dea8: jmp 0x534dec2
// asm:   0x534deaa: jmp 0x534dec2
// asm:   0x534deac: jmp 0x534dec2
// asm:   0x534deae: jmp 0x534dec2
// asm:   0x534deb0: mov rbx, rdx
// asm:   0x534deb3: mov r14, rax
// asm:   0x534deb6: jmp 0x534defd
// asm:   0x534deb8: jmp 0x534dec2
// asm:   0x534deba: mov rbx, rdx
// asm:   0x534debd: mov r14, rax
// asm:   0x534dec0: jmp 0x534df00
// asm:   0x534dec2: mov rbx, rdx
// asm:   0x534dec5: mov r14, rax
// asm:   0x534dec8: cmp ebx, 1
// asm:   0x534decb: jne 0x534def3
// asm:   0x534decd: mov rdi, r14
// asm:   0x534ded0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534ded5: mov rbx, qword ptr [rax]
// asm:   0x534ded8: mov qword ptr [rsp + 0x10], rbx
// asm:   0x534dedd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534dee2: xor r14d, r14d
// asm:   0x534dee5: mov bpl, 1
// asm:   0x534dee8: jmp 0x534dd6e
// asm:   0x534deed: mov rbx, rdx
// asm:   0x534def0: mov r14, rax
// asm:   0x534def3: lea rdi, [rsp + 0x10]
// asm:   0x534def8: call 0x2d4a960  ; il2cpp_runtime_helper_02d4a960()
// asm:   0x534defd: xor r15d, r15d
// asm:   0x534df00: cmp ebx, 1
// asm:   0x534df03: jne 0x534df22
// asm:   0x534df05: mov rdi, r14
// asm:   0x534df08: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534df0d: mov rbx, qword ptr [rax]
// asm:   0x534df10: mov qword ptr [rsp + 0x30], rbx
// asm:   0x534df15: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534df1a: jmp 0x534dd8b
// asm:   0x534df1f: mov r14, rax
// asm:   0x534df22: lea rdi, [rsp + 0x30]
// asm:   0x534df27: call 0x2d4a980  ; il2cpp_runtime_helper_02d4a980()
// asm:   0x534df2c: mov rdi, r14
// asm:   0x534df2f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x534df34: mov rdi, rax
// asm:   0x534df37: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  System_String_o **targetAddress;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_StaticFields markerPtr;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  System_Func_string__bool__o *pSVar2;
  bool bVar3;
  char cVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  MethodInfo *method_00;
  MethodInfo *in_RCX;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_StaticFields local_90;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  undefined8 local_68;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_StaticFields *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_07542904 == '\0') {
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
    Il2CppMethodInitialized_07542904 = '\x01';
  }
  local_90.ShowScreenMarker.fields.m_Ptr =
       (Unity_Profiling_ProfilerMarker_o)(Unity_Profiling_ProfilerMarker_Fields)0x0;
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
  }
  markerPtr.ShowScreenMarker.fields.m_Ptr =
       (Unity_Profiling_ProfilerMarker_o)
       (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->static_fields->ShowScreenMarker).fields.m_Ptr
  ;
  if (markerPtr.ShowScreenMarker.fields.m_Ptr != (Unity_Profiling_ProfilerMarker_Fields)0x0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample
              ((intptr_t)markerPtr.ShowScreenMarker.fields.m_Ptr,(MethodInfo *)0x0);
  }
  local_68 = 0;
  local_60 = &local_90;
  local_90.ShowScreenMarker.fields.m_Ptr = markerPtr.ShowScreenMarker.fields.m_Ptr;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  local_88.fields._startMs._0_4_ = 0;
  local_88.fields._startMs._4_2_ = 0;
  local_88.fields._startMs._6_2_ = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(&local_88,"ScreenRouter.ShowScreen",id,in_RCX);
  local_58.fields._startMs = local_88.fields._startMs;
  local_58.fields._enabled = local_88.fields._enabled;
  local_58.fields._hotLoop = local_88.fields._hotLoop;
  local_58.fields._26_6_ = local_88.fields._26_6_;
  local_58.fields._area = local_88.fields._area;
  local_58.fields._detail = local_88.fields._detail;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)&local_58;
  pSVar5 = System_String__Concat_5302810
                     ("find screen active=",(__this->fields)._activeId," pending=",
                      (__this->fields)._pendingId,(MethodInfo *)0x0);
  pMVar6 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar6 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar5,pMVar6);
  pGVar1 = (__this->fields)._context;
  if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pGVar1->fields).Manifest;
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(__this_00,id,method_01);
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    pSVar5 = System_String__Concat_52f0320("missing ",id,(MethodInfo *)0x0);
    pMVar6 = extraout_RDX_03;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      pMVar6 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar5,pMVar6);
    pSVar5 = System_String__Concat_52f0320("Gisketch screen not found: ",id,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    screen = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
label_0534dd6c:
    bVar3 = false;
    goto label_0534dd71;
  }
  bVar3 = System_String__Equals_52ffe30((__this->fields)._activeId,id,5,(MethodInfo *)0x0);
  if (bVar3) {
label_0534dcac:
    screen = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)
             System_String__Concat_52f0320("skip duplicate ",id,(MethodInfo *)0x0);
    pMVar6 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      pMVar6 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenRouter.ShowScreen",(System_String_o *)screen,pMVar6);
  }
  else {
    targetAddress = &(__this->fields)._pendingId;
    pMVar6 = (MethodInfo *)0x0;
    bVar3 = System_String__Equals_52ffe30(*targetAddress,id,5,(MethodInfo *)0x0);
    if (bVar3) goto label_0534dcac;
    pSVar2 = (__this->fields)._CanShowScreen_k__BackingField;
    if ((pSVar2 != (System_Func_string__bool__o *)0x0) &&
       (cVar4 = (*(code *)(pSVar2->fields).invoke_impl)
                          ((pSVar2->fields).method_code,id,(pSVar2->fields).method), cVar4 == '\0')) {
      screen = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)
               System_String__Concat_52f0320("blocked ",id,(MethodInfo *)0x0);
      pMVar6 = extraout_RDX_05;
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        pMVar6 = extraout_RDX_06;
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                ("ScreenRouter.ShowScreen",(System_String_o *)screen,pMVar6);
      goto label_0534dd6c;
    }
    method_00 = (MethodInfo *)System_String__Concat_52f0320("route ",id,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
              (__this,(System_String_o *)method_00,method_02);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,method_00);
    *targetAddress = id;
    Il2CppCodeGenWriteBarrier(targetAddress);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared(__this,screen,id,pMVar6);
  }
  bVar3 = true;
label_0534dd71:
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,(MethodInfo *)screen);
  if (local_90.ShowScreenMarker.fields.m_Ptr != (Unity_Profiling_ProfilerMarker_Fields)0x0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample
              ((intptr_t)local_90.ShowScreenMarker.fields.m_Ptr,(MethodInfo *)0x0);
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Back
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534ea00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534eb9c: nop dword ptr [rax]
// asm:   0x534ebfe: xor ebx, ebx
// asm:   0x534ec00: jmp 0x534ebee

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar2;
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar6;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar7;
  System_String_o *elementId;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar10;
  UnityEngine_GameObject_o *gameObject;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_68;
  System_String_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_38;
  int32_t iStack_30;
  undefined4 uStack_2c;
  
  if (Il2CppMethodInitialized_07542905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"-back");
    Il2CppMethodInitialized_07542905 = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (pGVar2 = (pGVar1->fields).Manifest, pGVar2 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0
     )) {
label_0534ec02:
    ThrowNullReferenceException();
  }
  pGVar7 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                     (pGVar2,(__this->fields)._activeId,in_RDX);
  if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    pSVar11 = (System_String_o *)0x0;
  }
  else {
    bVar6 = System_String__IsNullOrEmpty((pGVar7->fields).backActionId,(MethodInfo *)0x0);
    if (!bVar6) {
      pGVar1 = (__this->fields)._context;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
        obj = (Il2CppObject *)(pGVar1->fields).Actions;
        pSVar11 = (pGVar7->fields).backActionId;
        gameObject = (UnityEngine_GameObject_o *)0x0;
        elementId = System_String__Concat_52f0320((pGVar7->fields).id,"-back",(MethodInfo *)0x0)
        ;
        pGVar3 = (__this->fields)._active;
        if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          gameObject = (pGVar3->fields)._Root_k__BackingField;
        }
        local_68.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        local_68.fields.InputSource = 0;
        local_68.fields._28_4_ = 0;
        local_68.fields.ElementId = (System_String_o *)0x0;
        local_68.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
                  (&local_68,elementId,gameObject,(pGVar7->fields).root,2,(MethodInfo *)0x0);
        if (obj != (Il2CppObject *)0x0) {
          local_38 = local_68.fields.Node;
          iStack_30 = local_68.fields.InputSource;
          uStack_2c = local_68.fields._28_4_;
          local_48 = local_68.fields.ElementId;
          pUStack_40 = local_68.fields.GameObject;
          pIVar4 = obj->klass;
          uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)
                   ((long)&pIVar5->interfaceType + lVar10) ==
                  TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
                pVVar8 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar10);
                goto label_0534ebcd;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_0534ebcd:
          context.fields.GameObject = pUStack_40;
          context.fields.ElementId = local_48;
          context.fields.Node = local_38;
          context.fields.InputSource = iStack_30;
          context.fields._28_4_ = uStack_2c;
          (*pVVar8->methodPtr)(obj,pSVar11,context,pVVar8->method);
          return true;
        }
      }
      goto label_0534ec02;
    }
    pSVar11 = (pGVar7->fields).backScreenId;
  }
  bVar6 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
  if ((!bVar6) &&
     (bVar6 = System_String__Equals_52ffe30(pSVar11,(__this->fields)._activeId,5,(MethodInfo *)0x0), !bVar6))
  {
    pGVar1 = (__this->fields)._context;
    if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (pGVar2 = (pGVar1->fields).Manifest,
       pGVar2 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto label_0534ec02;
    pGVar7 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(pGVar2,pSVar11,method_00);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      bVar6 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(__this,pSVar11,method_01);
      return bVar6;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RefreshNode
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RefreshNode (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* nodeId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o* options, const MethodInfo* method);
// 0x534ec10
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534f061: mov rdi, rbx
// asm:   0x534f064: mov rsi, qword ptr [rsp + 0x10]
// asm:   0x534f069: call 0x534f8d0  ; Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RestoreFocus()
// asm:   0x534f06e: mov bl, 1
// asm:   0x534f070: jmp 0x534ee1a

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
  System_String_o *focusId;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar6;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_03;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_c *method_01;
  
  if (Il2CppMethodInitialized_07542906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542906 = '\x01';
  }
  pGVar1 = (__this->fields)._active;
  if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    return false;
  }
  pUVar4 = (UnityEngine_Object_o *)(pGVar1->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (replacement == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return false;
  }
  if (bVar3) {
    return false;
  }
  bVar3 = System_String__Equals_52ffe30((replacement->fields).id,nodeId,5,(MethodInfo *)0x0);
  if (!bVar3) {
    return false;
  }
  pGVar1 = (__this->fields)._active;
  if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_0534f075;
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
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0534f075;
  pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if (options == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) {
    options = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    pMVar7 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(options,(MethodInfo *)0x0);
    if (options == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_0534f075;
  }
  if ((options->fields).PreserveScroll == false) {
    method_01 = TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)method_01);
    if ((options->fields).PreserveFocus != false) goto label_0534edf3;
label_0534ee52:
    focusId = (System_String_o *)0x0;
  }
  else {
    pGVar1 = (__this->fields)._active;
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_0534f075;
    pUVar6 = (pGVar1->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll(pUVar6,pMVar7);
    if ((options->fields).PreserveFocus == false) goto label_0534ee52;
label_0534edf3:
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    }
    focusId = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__FocusedNodeId
                        ((UnityEngine_GameObject_o *)pUVar4,pMVar7);
  }
  pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0);
    __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      index = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._active;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree
                  (pGVar1,(UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
        pMVar7 = (MethodInfo *)0x0;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar4,false,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
        }
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot((UnityEngine_GameObject_o *)pUVar4,pMVar7)
        ;
        context = (__this->fields)._context;
        pGVar1 = (__this->fields)._active;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        pUVar6 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                           (replacement,pUVar5,context,pGVar1,(MethodInfo *)0x0);
        if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetSiblingIndex(pUVar5,index,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._active;
          if ((options->fields).SettleLayout == false) {
            if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_0534f075;
            Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutDirty(pGVar1,(MethodInfo *)0x0);
            pMVar7 = extraout_RDX_00;
          }
          else {
            if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_0534f075;
            pUVar6 = (pGVar1->fields)._Root_k__BackingField;
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar6,2,(MethodInfo *)0x0)
            ;
            pGVar1 = (__this->fields)._active;
            if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_0534f075;
            Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(pGVar1,(MethodInfo *)0x0);
            pMVar7 = extraout_RDX;
          }
          pGVar1 = (__this->fields)._active;
          if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
             (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0)) {
            Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore
                      (__this_00,(pGVar1->fields)._Root_k__BackingField,pMVar7);
            pUVar2 = (__this->fields)._runner;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pMVar7 = extraout_RDX_01;
            if (bVar3) {
              if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
              }
              bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              pMVar7 = method_00;
              if (bVar3) {
                pGVar1 = (__this->fields)._active;
                if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                  pUVar2 = (__this->fields)._runner;
                  routine = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame
                                      (__this_00,(pGVar1->fields)._Root_k__BackingField,method_00);
                  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
                    UnityEngine_MonoBehaviour__StartCoroutine_691c390(pUVar2,routine,(MethodInfo *)0x0);
                    pMVar7 = extraout_RDX_02;
                    goto label_0534f045;
                  }
                }
                goto label_0534f075;
              }
            }
label_0534f045:
            pGVar1 = (__this->fields)._active;
            if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
              pMVar7 = extraout_RDX_03;
            }
            Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RestoreFocus(pGVar1,focusId,pMVar7);
            return true;
          }
        }
      }
    }
  }
label_0534f075:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Clear
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534fa00

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *pMVar1;
  
  if (Il2CppMethodInitialized_07542907 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_07542907 = '\x01';
    in_RDX = extraout_RDX;
  }
  pMVar1 = (MethodInfo *)"clear";
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,"clear",in_RDX);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,pMVar1);
  pMVar1 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
            (__this,(DG_Tweening_TweenCallback_o *)0x0,method_00);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyCachedViews(__this,pMVar1);
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active);
  (__this->fields)._activeId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId);
  (__this->fields)._pendingId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DeactivateActive
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, bool animate, System_Action_o* afterDeactivate, const MethodInfo* method);
// 0x534fde0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DeactivateActive
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,bool animate,
               System_Action_o *afterDeactivate,MethodInfo *method)

{
  System_Action_o **targetAddress;
  Gisketch_Aottg2UI_Building_GisketchView_o **targetAddress_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  System_Action_o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o *__this_00;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  MethodInfo *method_01;
  System_String_o **targetAddress_01;
  
  if (Il2CppMethodInitialized_07542908 == '\0') {
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
    Il2CppMethodInitialized_07542908 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass35_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass35_0_o *)0x0)
  goto label_0535008a;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  targetAddress = &(__this_00->fields).afterDeactivate;
  (__this_00->fields).afterDeactivate = afterDeactivate;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pMVar4 = (MethodInfo *)"deactivate active";
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,"deactivate active",method_00);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,pMVar4);
  targetAddress_00 = &(__this_00->fields).old;
  (__this_00->fields).old = (__this->fields)._active;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  targetAddress_01 = &(__this_00->fields).oldId;
  (__this_00->fields).oldId = (__this->fields)._activeId;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active);
  (__this->fields)._activeId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId);
  (__this->fields)._pendingId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId);
  pGVar1 = (__this_00->fields).old;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(pGVar1->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (*targetAddress_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        root = ((*targetAddress_00)->fields)._Root_k__BackingField;
        pMVar4 = extraout_RDX;
        if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
          pMVar4 = extraout_RDX_00;
        }
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(root,true,pMVar4);
        if (*targetAddress_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                    (((*targetAddress_00)->fields)._Root_k__BackingField,false,method_01);
          if (animate) {
            pGVar1 = *targetAddress_00;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
            }
            t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
            if (t != (DG_Tweening_Tween_o *)0x0) {
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        (__this_01,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass35_0_DeactivateActive_b__0
                         ,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                        ((Il2CppObject *)t,__this_01,
                         (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween
                        );
              return;
            }
          }
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
                    (__this,*targetAddress_01,*targetAddress_00,method);
          goto label_05350052;
        }
      }
label_0535008a:
      ThrowNullReferenceException();
    }
  }
label_05350052:
  pSVar2 = *targetAddress;
  if (pSVar2 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$InvalidateScreen
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__InvalidateScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5350360

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__InvalidateScreen
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  bool bVar5;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  DG_Tweening_Tween_o *t;
  
  if (Il2CppMethodInitialized_07542909 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"invalidate ");
    il2cpp_codegen_initialize_runtime_metadata(&"active ");
    il2cpp_codegen_initialize_runtime_metadata(&"outgoing ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenRouter.InvalidateScreen");
    Il2CppMethodInitialized_07542909 = '\x01';
  }
  bVar5 = false;
  bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar1 = (__this->fields)._context;
    if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (__this_00 = (pGVar1->fields).Manifest,
       __this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
      ThrowNullReferenceException();
    }
    screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(__this_00,id,method_00);
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      bVar5 = false;
    }
    else {
      pSVar3 = System_String__Concat_52f0320("invalidate ",id,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,pSVar3,method_01);
      pMVar4 = (MethodInfo *)0x0;
      bVar2 = System_String__Equals_52ffe30((__this->fields)._activeId,id,5,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = System_String__Concat_52f0320("active ",id,(MethodInfo *)0x0);
        method_02 = extraout_RDX;
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          method_02 = extraout_RDX_00;
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.InvalidateScreen",pSVar3,method_02);
        __this_01 = __this;
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView(__this,id,method_03);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
                  (__this_01,(__this->fields)._active,method_04);
        (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._active);
        (__this->fields)._activeId = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId);
        (__this->fields)._pendingId = id;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingId);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,pMVar4);
      }
      else {
        bVar2 = System_String__Equals_52ffe30((__this->fields)._outgoingId,id,5,(MethodInfo *)0x0);
        if (!bVar2) {
          bVar2 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView(__this,id,method_05);
          return bVar2;
        }
        pSVar3 = System_String__Concat_52f0320("outgoing ",id,(MethodInfo *)0x0);
        pMVar4 = extraout_RDX_01;
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          pMVar4 = extraout_RDX_02;
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.InvalidateScreen",pSVar3,pMVar4);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView(__this,id,method_06);
        targetAddress = &(__this->fields)._outgoingExit;
        t = (__this->fields)._outgoingExit;
        pMVar4 = extraout_RDX_03;
        if (t != (DG_Tweening_Tween_o *)0x0) {
          bVar2 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0);
          pMVar4 = extraout_RDX_04;
          if (bVar2) {
            t = *targetAddress;
            DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
            pMVar4 = extraout_RDX_05;
          }
        }
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
                  ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)t,(__this->fields)._outgoingView,pMVar4
                  );
        (__this->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingView);
        (__this->fields)._outgoingId = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingId);
        (__this->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
      bVar5 = true;
    }
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmScreen
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, int32_t keepAliveFrames, const MethodInfo* method);
// 0x5350bf0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
          int32_t keepAliveFrames,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__37_o *__this_00;
  
  if (Il2CppMethodInitialized_0754290a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmScreen_d__37);
    Il2CppMethodInitialized_0754290a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmScreen_d__37);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  (__this_00->fields).keepAliveFrames = keepAliveFrames;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelPrewarm
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x534e160

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  System_String_o **targetAddress_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool bVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchView_o **targetAddress_01;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  
  if (Il2CppMethodInitialized_0754290b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&" reason=");
    Il2CppMethodInitialized_0754290b = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields)._prewarmCachedView == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    return;
  }
  pSVar2 = (__this->fields)._prewarmId;
  bVar1 = System_String__IsNullOrEmpty(reason,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)"ScreenPrewarm.Cancel";
  if (bVar1) {
    str1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    str1 = System_String__Concat_52f0320(" reason=",reason,(MethodInfo *)0x0);
  }
  pSVar2 = System_String__Concat_52f0320(pSVar2,str1,(MethodInfo *)0x0);
  pMVar3 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar3 = extraout_RDX_00;
  }
  targetAddress = &(__this->fields)._prewarmHost;
  targetAddress_00 = &(__this->fields)._prewarmId;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark((System_String_o *)__this_00,pSVar2,pMVar3);
  pMVar3 = (MethodInfo *)(__this->fields)._prewarmCachedView;
  targetAddress_01 = &(__this->fields)._prewarmCachedView;
  if (pMVar3 == (MethodInfo *)0x0) {
    root = *targetAddress;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,pMVar3);
  }
  else {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView
              (__this_00,(Gisketch_Aottg2UI_Building_GisketchView_o *)pMVar3,method_00);
  }
  *targetAddress = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  *targetAddress_01 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  *targetAddress_00 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmCachedScreen
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, int32_t keepAliveFrames, const MethodInfo* method);
// 0x5350da0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
          int32_t keepAliveFrames,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmCachedScreen_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_0754290c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39);
    Il2CppMethodInitialized_0754290c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).screen = screen;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).screen);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  (__this_00->fields).keepAliveFrames = keepAliveFrames;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowPrepared
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x534e420
// eh: try 0x534e5a3..0x534e96e -> pad 0x534e9a2 (+31 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534e9be..0x534e9c3 -> pad 0x534e9de cleanup
// eh: try 0x534e9e1..0x534e9eb -> pad 0x534e9f3 catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534e651: jmp 0x534e66d
// asm:   0x534e96e: jmp 0x534e9a6
// asm:   0x534e970: jmp 0x534e9a6
// asm:   0x534e972: jmp 0x534e9a6
// asm:   0x534e974: jmp 0x534e9a6
// asm:   0x534e976: jmp 0x534e9a6
// asm:   0x534e978: jmp 0x534e9a6
// asm:   0x534e97a: jmp 0x534e9a6
// asm:   0x534e97c: jmp 0x534e9a6
// asm:   0x534e97e: jmp 0x534e9a6
// asm:   0x534e980: jmp 0x534e9a6
// asm:   0x534e982: jmp 0x534e9a6
// asm:   0x534e984: jmp 0x534e9a6
// asm:   0x534e986: jmp 0x534e9a6
// asm:   0x534e988: jmp 0x534e9a6
// asm:   0x534e98a: jmp 0x534e9a6
// asm:   0x534e98c: jmp 0x534e9a6
// asm:   0x534e98e: jmp 0x534e9a6
// asm:   0x534e990: jmp 0x534e9a6
// asm:   0x534e992: jmp 0x534e9a6
// asm:   0x534e994: jmp 0x534e9a6
// asm:   0x534e996: jmp 0x534e9a6
// asm:   0x534e998: jmp 0x534e9a6
// asm:   0x534e99a: jmp 0x534e9a6
// asm:   0x534e99c: jmp 0x534e9a6
// asm:   0x534e99e: jmp 0x534e9a6
// asm:   0x534e9a0: jmp 0x534e9a6
// asm:   0x534e9a2: jmp 0x534e9a6
// asm:   0x534e9a4: jmp 0x534e9a6
// asm:   0x534e9a6: mov rbx, rax
// asm:   0x534e9a9: cmp edx, 1
// asm:   0x534e9ac: jne 0x534e9e1
// asm:   0x534e9ae: mov rdi, rbx
// asm:   0x534e9b1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534e9b6: mov rbx, qword ptr [rax]
// asm:   0x534e9b9: mov qword ptr [rsp + 0x30], rbx
// asm:   0x534e9be: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534e9c3: lea rdi, [rsp + 0x60]
// asm:   0x534e9c8: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x534e9cd: test rbx, rbx
// asm:   0x534e9d0: je 0x534e94d
// asm:   0x534e9d6: mov rdi, rbx
// asm:   0x534e9d9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534e9de: mov rbx, rax
// asm:   0x534e9e1: lea rdi, [rsp + 0x30]
// asm:   0x534e9e6: call 0x2d4a9b0  ; il2cpp_runtime_helper_02d4a9b0()
// asm:   0x534e9eb: mov rdi, rbx
// asm:   0x534e9ee: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x534e9f3: mov rdi, rax
// asm:   0x534e9f6: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o **targetAddress;
  System_String_o **targetAddress_00;
  uint32_t uVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_MonoBehaviour_o *pUVar2;
  System_String_o *area;
  bool bVar3;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *__this_00;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this_01;
  UnityEngine_Coroutine_o *pUVar5;
  DG_Tweening_TweenCallback_o *__this_02;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Object_o *x;
  bool local_b1;
  DG_Tweening_Tween_o *local_b0;
  Gisketch_Aottg2UI_Building_GisketchView_o **local_a8;
  System_String_o *local_a0;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *local_98;
  System_String_o **local_90;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  local_98 = screen;
  if (Il2CppMethodInitialized_0754290d == '\0') {
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
    Il2CppMethodInitialized_0754290d = '\x01';
  }
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  local_b1 = false;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass40_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass40_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  local_88.fields._startMs._0_4_ = 0;
  local_88.fields._startMs._4_2_ = 0;
  local_88.fields._startMs._6_2_ = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(&local_88,"ScreenRouter.ShowPrepared",id,method);
  local_58.fields._startMs = local_88.fields._startMs;
  local_58.fields._enabled = local_88.fields._enabled;
  local_58.fields._hotLoop = local_88.fields._hotLoop;
  local_58.fields._26_6_ = local_88.fields._26_6_;
  local_58.fields._area = local_88.fields._area;
  local_58.fields._detail = local_88.fields._detail;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)&local_58;
  local_a8 = &(__this_00->fields).old;
  (__this_00->fields).old = (__this->fields)._active;
  Il2CppCodeGenWriteBarrier(local_a8);
  local_90 = &(__this_00->fields).oldId;
  (__this_00->fields).oldId = (__this->fields)._activeId;
  Il2CppCodeGenWriteBarrier(local_90);
  targetAddress = &(__this->fields)._active;
  if (*local_a8 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)0x0;
  }
  else {
    x = (UnityEngine_Object_o *)((*local_a8)->fields)._Root_k__BackingField;
  }
  *targetAddress = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  local_a0 = id;
  local_60 = __this_00;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields)._activeId;
  *targetAddress_00 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  view = *local_a8;
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    local_b0 = (DG_Tweening_Tween_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    local_b0 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar4 = "oldRoot=";
  area = "ScreenRouter.ShowPrepared";
  if (bVar3) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    str1 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
  }
  else {
    str1 = "null";
  }
  local_b1 = local_b0 != (DG_Tweening_Tween_o *)0x0;
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  str3 = System_Boolean__ToString(&local_b1,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_5302810(pSVar4,str1," oldExit=",str3,(MethodInfo *)0x0);
  pMVar6 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar6 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar4,pMVar6);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar6 = (MethodInfo *)CONCAT71((int7)((ulong)str3 >> 8),local_b0 == (DG_Tweening_Tween_o *)0x0);
  if (bVar3 || local_b0 == (DG_Tweening_Tween_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,local_98,local_a0,pMVar6);
    __this_02 = (DG_Tweening_TweenCallback_o *)*local_90;
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
              (__this,(System_String_o *)__this_02,*local_a8,pMVar6);
    goto label_0534e943;
  }
  method_00 = extraout_RDX_01;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    method_00 = extraout_RDX_02;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked((UnityEngine_GameObject_o *)x,true,method_00)
  ;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
            ((UnityEngine_GameObject_o *)x,false,method_01);
  (__this->fields)._outgoingView = *local_a8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingView);
  (__this->fields)._outgoingId = *local_90;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingId);
  (__this->fields)._outgoingExit = local_b0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingExit);
  pUVar2 = (__this->fields)._runner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (!bVar3) goto label_0534e8d9;
    pUVar2 = (__this->fields)._runner;
    if (Il2CppMethodInitialized_0754290e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
      Il2CppMethodInitialized_0754290e = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields).__1__state = 0;
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).screen = local_98;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).screen);
    (__this_01->fields).id = local_a0;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).id);
    if (pUVar2 == (UnityEngine_MonoBehaviour_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                       (pUVar2,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
  }
  else {
label_0534e8d9:
    pUVar5 = (UnityEngine_Coroutine_o *)0x0;
  }
  (__this->fields)._pendingActivation = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingActivation);
  if ((__this->fields)._pendingActivation == (UnityEngine_Coroutine_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,local_98,local_a0,pMVar6);
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
  DG_Tweening_TweenCallback___ctor
            (__this_02,(Il2CppObject *)local_60,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass40_0_ShowPrepared_b__0,
             (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
            ((Il2CppObject *)local_b0,__this_02,
             (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
label_0534e943:
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,(MethodInfo *)__this_02);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ActivateNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x5350e70

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__41_o *__this_00;
  
  if (Il2CppMethodInitialized_0754290e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
    Il2CppMethodInitialized_0754290e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).screen = screen;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).screen);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CloseActive
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, DG_Tweening_TweenCallback_o* afterClose, const MethodInfo* method);
// 0x534fa90

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               DG_Tweening_TweenCallback_o *afterClose,MethodInfo *method)

{
  DG_Tweening_TweenCallback_o **targetAddress;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *__this_00;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *pDVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o **targetAddress_00;
  
  if (Il2CppMethodInitialized_0754290f == '\0') {
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
    Il2CppMethodInitialized_0754290f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass42_0_o *)0x0)
  goto label_0534fc53;
  targetAddress = &(__this_00->fields).afterClose;
  (__this_00->fields).afterClose = afterClose;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pGVar1 = (__this->fields)._active;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(pGVar1->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      targetAddress_00 = &(__this->fields)._active;
      if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
label_0534fc53:
        ThrowNullReferenceException();
      }
      (__this_00->fields).oldRoot = ((*targetAddress_00)->fields)._Root_k__BackingField;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).oldRoot);
      pGVar1 = *targetAddress_00;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
      pDVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
      DG_Tweening_TweenCallback___ctor
                (pDVar3,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0_CloseActive_b__0
                 ,(MethodInfo *)0x0);
      if (t == (DG_Tweening_Tween_o *)0x0) {
        if (pDVar3 == (DG_Tweening_TweenCallback_o *)0x0) goto label_0534fc53;
        (*(code *)(pDVar3->fields).invoke_impl)((pDVar3->fields).method_code,(pDVar3->fields).method);
      }
      else {
        DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                  ((Il2CppObject *)t,pDVar3,
                   (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
      }
      *targetAddress_00 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      return;
    }
  }
  pDVar3 = *targetAddress;
  if (pDVar3 == (DG_Tweening_TweenCallback_o *)0x0) {
    return;
  }
  (*(code *)(pDVar3->fields).invoke_impl)((pDVar3->fields).method_code,(pDVar3->fields).method);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Activate
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x5350730
// eh: try 0x535084e..0x5350b66 -> pad 0x5350b8e (+27 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5350bad..0x5350bb2 -> pad 0x5350bcd cleanup
// eh: try 0x5350bd0..0x5350bd8 -> pad 0x5350be0 catch (...) [compiler noexcept guard]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5350b66: jmp 0x5350b96
// asm:   0x5350b68: jmp 0x5350b96
// asm:   0x5350b6a: jmp 0x5350b96
// asm:   0x5350b6c: jmp 0x5350b96
// asm:   0x5350b6e: jmp 0x5350b96
// asm:   0x5350b70: jmp 0x5350b96
// asm:   0x5350b72: jmp 0x5350b96
// asm:   0x5350b74: jmp 0x5350b96
// asm:   0x5350b76: jmp 0x5350b96
// asm:   0x5350b78: jmp 0x5350b96
// asm:   0x5350b7a: jmp 0x5350b96
// asm:   0x5350b7c: jmp 0x5350b96
// asm:   0x5350b7e: jmp 0x5350b96
// asm:   0x5350b80: jmp 0x5350b96
// asm:   0x5350b82: jmp 0x5350b96
// asm:   0x5350b84: jmp 0x5350b96
// asm:   0x5350b86: jmp 0x5350b96
// asm:   0x5350b88: jmp 0x5350b96
// asm:   0x5350b8a: jmp 0x5350b96
// asm:   0x5350b8c: jmp 0x5350b96
// asm:   0x5350b8e: jmp 0x5350b96
// asm:   0x5350b90: jmp 0x5350b96
// asm:   0x5350b92: jmp 0x5350b96
// asm:   0x5350b94: jmp 0x5350b96
// asm:   0x5350b96: mov rbx, rax
// asm:   0x5350b99: cmp edx, 1
// asm:   0x5350b9c: jne 0x5350bd0
// asm:   0x5350b9e: mov rdi, rbx
// asm:   0x5350ba1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5350ba6: mov rbx, qword ptr [rax]
// asm:   0x5350ba9: mov qword ptr [rsp], rbx
// asm:   0x5350bad: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5350bb2: lea rdi, [rsp + 0x30]
// asm:   0x5350bb7: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5350bbc: test rbx, rbx
// asm:   0x5350bbf: je 0x5350b25
// asm:   0x5350bc5: mov rdi, rbx
// asm:   0x5350bc8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5350bcd: mov rbx, rax
// asm:   0x5350bd0: mov rdi, rsp
// asm:   0x5350bd3: call 0x2d4a9d0  ; il2cpp_runtime_helper_02d4a9d0()
// asm:   0x5350bd8: mov rdi, rbx
// asm:   0x5350bdb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5350be0: mov rdi, rax
// asm:   0x5350be3: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
               MethodInfo *method)

{
  System_String_o **targetAddress;
  Gisketch_Aottg2UI_Building_GisketchView_o **targetAddress_00;
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Action_string__GisketchView__o *pSVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar5;
  System_String_o *str1;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  System_String_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_07542910 == '\0') {
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
    Il2CppMethodInitialized_07542910 = '\x01';
  }
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  local_88.fields._startMs._0_4_ = 0;
  local_88.fields._startMs._4_2_ = 0;
  local_88.fields._startMs._6_2_ = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(&local_88,"ScreenRouter.Activate",id,method);
  local_58.fields._startMs = local_88.fields._startMs;
  local_58.fields._enabled = local_88.fields._enabled;
  local_58.fields._hotLoop = local_88.fields._hotLoop;
  local_58.fields._26_6_ = local_88.fields._26_6_;
  local_58.fields._area = local_88.fields._area;
  local_58.fields._detail = local_88.fields._detail;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)&local_58;
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = System_String__Equals_52ffe30((__this->fields)._pendingId,id,5,(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._pendingId;
  if (!bVar4) {
    pMVar6 = (MethodInfo *)
             System_String__Concat_52f0320("skip pending mismatch pending=",*targetAddress,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      pMVar8 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenRouter.Activate",(System_String_o *)pMVar6,pMVar8);
    goto label_05350b1b;
  }
  pMVar6 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar6 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","build view start",pMVar6);
  pGVar5 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__GetOrBuildView(__this,screen,id,pMVar8);
  targetAddress_00 = &(__this->fields)._active;
  (__this->fields)._active = pGVar5;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pSVar7 = "view ready root=";
  local_60 = "ScreenRouter.Activate";
  if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
label_05350978:
    str1 = "null";
  }
  else {
    pUVar1 = (UnityEngine_Object_o *)((*targetAddress_00)->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) goto label_05350978;
    if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar1 = (UnityEngine_Object_o *)((*targetAddress_00)->fields)._Root_k__BackingField;
    if (pUVar1 == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    str1 = UnityEngine_Object__get_name(pUVar1,(MethodInfo *)0x0);
  }
  pSVar7 = System_String__Concat_52f0320(pSVar7,str1,(MethodInfo *)0x0);
  pMVar8 = extraout_RDX_03;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar8 = extraout_RDX_04;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(local_60,pSVar7,pMVar8);
  (__this->fields)._activeId = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeId);
  *targetAddress = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = ((*targetAddress_00)->fields)._Root_k__BackingField;
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = ((*targetAddress_00)->fields)._Root_k__BackingField;
  pMVar8 = extraout_RDX_05;
  if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    pMVar8 = extraout_RDX_06;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar2,false,pMVar8);
  if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar8 = (MethodInfo *)0x1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
            (((*targetAddress_00)->fields)._Root_k__BackingField,true,method_00);
  if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility
            (((*targetAddress_00)->fields)._Root_k__BackingField,pMVar8);
  if (*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = ((*targetAddress_00)->fields)._Root_k__BackingField;
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","play enter",method_01)
  ;
  pGVar5 = *targetAddress_00;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(pGVar5,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).ScreenShown;
  pMVar8 = extraout_RDX_07;
  if (pSVar3 != (System_Action_string__GisketchView__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)
              ((pSVar3->fields).method_code,id,*targetAddress_00,(pSVar3->fields).method);
    pMVar8 = extraout_RDX_08;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar8 = extraout_RDX_09;
  }
  pMVar6 = (MethodInfo *)"screen shown event";
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","screen shown event",pMVar8);
label_05350b1b:
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,pMVar6);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelTransition
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534e310

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  DG_Tweening_Tween_o **targetAddress_00;
  UnityEngine_MonoBehaviour_o *pUVar1;
  DG_Tweening_Tween_o *t;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07542911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542911 = '\x01';
  }
  targetAddress = &(__this->fields)._pendingActivation;
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
      UnityEngine_MonoBehaviour__StopCoroutine_691c6e0(pUVar1,*targetAddress,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields)._outgoingExit;
  t = (__this->fields)._outgoingExit;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    bVar2 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0);
    if (bVar2) {
      DG_Tweening_TweenExtensions__Kill(*targetAddress_00,false,(MethodInfo *)0x0);
    }
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
            (__this,(__this->fields)._outgoingId,(__this->fields)._outgoingView,in_RCX);
  (__this->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  (__this->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingView);
  (__this->fields)._outgoingId = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outgoingId);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$GetOrBuildView
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__GetOrBuildView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x5350f30

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__GetOrBuildView
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_30;
  
  if (Il2CppMethodInitialized_07542912 == '\0') {
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
    Il2CppMethodInitialized_07542912 = '\x01';
  }
  local_30 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  if ((screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) &&
     ((screen->fields).lifecycle != 1)) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05351141;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)id,(Il2CppObject **)&local_30,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    if ((bVar2) && (local_30 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      x = (UnityEngine_Object_o *)(local_30->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = System_String__Concat_52f0320("cache hit ",id,(MethodInfo *)0x0);
        pMVar4 = extraout_RDX_01;
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          pMVar4 = extraout_RDX_02;
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate",pSVar3,pMVar4);
        return local_30;
      }
    }
  }
  pSVar3 = System_String__Concat_52f0320("cache miss ",id,(MethodInfo *)0x0);
  pMVar4 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar4 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate",pSVar3,pMVar4);
  context = (__this->fields)._context;
  parent = (__this->fields)._screenLayer;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  value = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView(screen,parent,context,(MethodInfo *)0x0)
  ;
  if ((screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) &&
     ((screen->fields).lifecycle != 1)) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05351141:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)id,(Il2CppObject *)value,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_set_Item);
  }
  return value;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ReleaseDepartedView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5350280

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ReleaseDepartedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_28;
  
  if (Il2CppMethodInitialized_07542913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542913 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_07542914 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
        Il2CppMethodInitialized_07542914 = '\x01';
      }
      local_28 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)id;
      bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
      method_01 = extraout_RDX;
      if (!bVar1) {
        __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(__this->fields)._screenCache;
        if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                           (Il2CppObject *)id,(Il2CppObject **)&local_28,
                           (MethodInfo_4AAF440 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
        method_01 = method_00;
        if ((bVar1) && (local_28 == view)) {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView(__this_00,view,method_00);
          return;
        }
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView(__this_00,view,method_01);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$IsCachedView
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__IsCachedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5351220

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__IsCachedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_28;
  
  if (Il2CppMethodInitialized_07542914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    Il2CppMethodInitialized_07542914 = '\x01';
  }
  local_28 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  bVar2 = false;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) && (!bVar1)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)id,(Il2CppObject **)&local_28,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    if (bVar1) {
      bVar2 = local_28 == view;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$HideCachedView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5350ca0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__HideCachedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542915 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542915 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (view->fields)._Root_k__BackingField;
      pMVar3 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
        pMVar3 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar1,true,pMVar3);
      pMVar3 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                ((view->fields)._Root_k__BackingField,false,method_00);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ClearSelectedIfInside
                ((view->fields)._Root_k__BackingField,pMVar3);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      pMVar3 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest(view,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility
                ((view->fields)._Root_k__BackingField,pMVar3);
      pUVar1 = (view->fields)._Root_k__BackingField;
      if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RemoveCachedView
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x53505e0

bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RemoveCachedView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_20;
  
  if (Il2CppMethodInitialized_07542916 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
    Il2CppMethodInitialized_07542916 = '\x01';
  }
  local_20 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05350677:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)id,(Il2CppObject **)&local_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_TryGetValue);
  if (bVar1) {
    __this_01 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(__this->fields)._screenCache;
    if (__this_01 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_05350677;
    System_Collections_Generic_Dictionary_object__object___Remove
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,(Il2CppObject *)id,
               (MethodInfo_4AAED10 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_Remove);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView(__this_01,local_20,method_00);
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyCachedViews
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyCachedViews (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x534fc60
// eh: try 0x534fd33..0x534fd49 -> pad 0x534fd86 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x534fd9e..0x534fda3 -> pad 0x534fdc2 cleanup
// eh: try 0x534fdc5..0x534fdcf -> pad 0x534fdd7 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534fd84: jmp 0x534fd86
// asm:   0x534fd86: mov r14, rax
// asm:   0x534fd89: cmp edx, 1
// asm:   0x534fd8c: jne 0x534fdc5
// asm:   0x534fd8e: mov rdi, r14
// asm:   0x534fd91: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534fd96: mov rbx, qword ptr [rax]
// asm:   0x534fd99: mov qword ptr [rsp + 0x20], rbx
// asm:   0x534fd9e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x534fda3: lea rax, [rip + 0x1f40206]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_Dispose
// asm:   0x534fdaa: mov rsi, qword ptr [rax]
// asm:   0x534fdad: mov rdi, rsp
// asm:   0x534fdb0: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x534fdb5: test rbx, rbx
// asm:   0x534fdb8: je 0x534fd5d
// asm:   0x534fdba: mov rdi, rbx
// asm:   0x534fdbd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x534fdc2: mov r14, rax
// asm:   0x534fdc5: lea rdi, [rsp + 0x20]
// asm:   0x534fdca: call 0x2d4a9f0  ; il2cpp_runtime_helper_02d4a9f0()
// asm:   0x534fdcf: mov rdi, r14
// asm:   0x534fdd2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x534fdd7: mov rdi, rax
// asm:   0x534fdda: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyCachedViews
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  undefined1 local_48 [16];
  Gisketch_Aottg2UI_Building_GisketchView_o *local_38;
  UnityEngine_Transform_o *local_28;
  System_Collections_Generic_Dictionary_string__GisketchView__o *local_20;
  
  if (Il2CppMethodInitialized_07542917 == '\0') {
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
    Il2CppMethodInitialized_07542917 = '\x01';
  }
  local_48._0_8_ = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c *)0x0;
  local_48._8_8_ = (void *)0x0;
  local_38 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (pSVar1,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
                 __this_00,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_GisketchView_GetEnumerator
                );
      local_28 = (UnityEngine_Transform_o *)0x0;
      local_20 = (System_Collections_Generic_Dictionary_string__GisketchView__o *)local_48;
      while( true ) {
        __this_01 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)local_48;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_48,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_MoveNext
                          );
        if (!bVar2) break;
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView(__this_01,local_38,method_00);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchView_Dispose
                );
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._screenCache;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Clear
                  (pSVar1,(MethodInfo_4AAD690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_GisketchView_Clear);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5350680

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_07542918 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542918 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      root = (view->fields)._Root_k__BackingField;
      pMVar2 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
        pMVar2 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(root,false,pMVar2);
      pMVar2 = (MethodInfo *)0x1;
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
                ((view->fields)._Root_k__BackingField,true,method_00);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot((view->fields)._Root_k__BackingField,pMVar2)
      ;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$SetInputLocked
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked (UnityEngine_GameObject_o* root, bool locked, const MethodInfo* method);
// 0x53500a0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked
               (UnityEngine_GameObject_o *root,bool locked,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this;
  
  if (Il2CppMethodInitialized_07542919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542919 = '\x01';
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
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (root,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_interactable(__this,!locked,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this,!locked,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$SetRaycasterEnabled
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled (UnityEngine_GameObject_o* root, bool enabled, const MethodInfo* method);
// 0x53501c0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetRaycasterEnabled
               (UnityEngine_GameObject_o *root,bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_GraphicRaycaster_o *x;
  
  if (Il2CppMethodInitialized_0754291a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754291a = '\x01';
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
    x = UnityEngine_GameObject__GetComponent_object_
                  (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (x != (UnityEngine_UI_GraphicRaycaster_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,enabled,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ResetRootVisibility
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5351150

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ResetRootVisibility
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this;
  
  if (Il2CppMethodInitialized_0754291b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754291b = '\x01';
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
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup)
    ;
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
// 0x53512b0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ClearSelectedIfInside
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_0754291c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754291c = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_05351415;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
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
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
                    (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
label_05351415:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyRoot
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x534f670

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754291d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754291d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__ReleaseAll(root,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5351420

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754291e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754291e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$FocusedNodeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__FocusedNodeId (UnityEngine_GameObject_o* scope, const MethodInfo* method);
// 0x534f520

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
  
  if (Il2CppMethodInitialized_0754291f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754291f = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_0534f660;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
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
        if (bVar1) {
          pSVar3 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
          return pSVar3;
        }
        return (System_String_o *)0x0;
      }
label_0534f660:
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RestoreFocus
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RestoreFocus (Gisketch_Aottg2UI_Building_GisketchView_o* view, System_String_o* focusId, const MethodInfo* method);
// 0x534f8d0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RestoreFocus
               (Gisketch_Aottg2UI_Building_GisketchView_o *view,System_String_o *focusId,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_07542920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542920 = '\x01';
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
  if (((!bVar1) && (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) &&
     (bVar1 = System_String__IsNullOrEmpty(focusId,(MethodInfo *)0x0), !bVar1)) {
    x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Building_GisketchView__Find(view,focusId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        bVar1 = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0)
        ;
        if (!bVar1) {
          return;
        }
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
                    (pUVar2,(UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor (const MethodInfo* method);
// 0x5351560

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor(MethodInfo *method)

{
  intptr_t iVar1;
  
  if (Il2CppMethodInitialized_07542921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch.ScreenRouter.ShowScreen");
    Il2CppMethodInitialized_07542921 = '\x01';
  }
  iVar1 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker
                    ("Gisketch.ScreenRouter.ShowScreen",1,0,0,(MethodInfo *)0x0);
  (TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter->static_fields->ShowScreenMarker).fields.m_Ptr =
       iVar1;
  return;
}


