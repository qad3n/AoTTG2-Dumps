// Type: Gisketch.Aottg2UI.Routing.GisketchScreenRouter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Routing/GisketchScreenRouter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x3b4e810

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass29_0$$<ShowPrepared>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0___ShowPrepared_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x3b4f1f0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0___ShowPrepared_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar2;
  MethodInfo *in_RDX;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o *pGVar3;
  
  pGVar1 = (__this->fields).__4__this;
  pGVar3 = __this;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    method = (MethodInfo *)(__this->fields).old;
    if ((MethodInfo *)(pGVar1->fields)._outgoingView != method) {
      return;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
              ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)__this,
               (Gisketch_Aottg2UI_Building_GisketchView_o *)method,in_RDX);
    pGVar1 = (__this->fields).__4__this;
    pGVar3 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o *)0x0;
    if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      (pGVar1->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      method = (MethodInfo *)0x0;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields)._outgoingView);
      pGVar1 = (__this->fields).__4__this;
      pGVar3 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o *)0x0;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        (pGVar1->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields)._outgoingExit,0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cdc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    g_data_057a9cdc = '\x01';
  }
  pGVar1 = (pGVar3->fields).__4__this;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot((UnityEngine_GameObject_o *)pGVar1,method);
  pGVar2 = (pGVar3->fields).old;
  if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    (*(code *)(pGVar2->fields)._Root_k__BackingField)
              (pGVar2[1].fields._elements,(pGVar2->fields)._SearchEntries_k__BackingField);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x3b4f040

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass31_0$$<CloseActive>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0___CloseActive_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x3b4f250

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0___CloseActive_b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *root;
  DG_Tweening_TweenCallback_o *pDVar1;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  if (g_data_057a9cdc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    g_data_057a9cdc = '\x01';
  }
  root = (__this->fields).oldRoot;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method);
  pDVar1 = (__this->fields).afterClose;
  if (pDVar1 != (DG_Tweening_TweenCallback_o *)0x0) {
    vtableDispatch = (code *)(pDVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pDVar1->fields).method_code,(pDVar1->fields).method,extraout_RDX,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b4f020

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3b4f2c0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3b4f2d0

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__MoveNext
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  MethodInfo *in_RCX;
  bool_conflict bVar2;
  undefined8 unaff_R14;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this->fields).__2__current;
    }
    (__this_00->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
    bVar2 = 0;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pendingActivation,0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
              (__this_00,(__this->fields).screen,(__this->fields).id,in_RCX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3b4f360

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3b4f370

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
               MethodInfo *method)

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


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3b4f3b0

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b4e730

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3b4f3c0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27____m__Finally1(__this,method);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3b4f3e0

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__MoveNext
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  UnityEngine_Object_o *x;
  System_Diagnostics_Stopwatch_c *pSVar2;
  Il2CppClass *root;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  int iVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  int64_t iVar5;
  System_String_o *pSVar6;
  System_Type_array *components;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_CanvasGroup_o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar11;
  System_String_o *str2;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  System_Diagnostics_Stopwatch_o *pSVar15;
  System_Diagnostics_Stopwatch_o *pSVar16;
  undefined1 auVar17 [12];
  long lStack_38;
  
  if (g_data_057a9cdd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"replace");
    il2cpp_runtime_helper_023445d0(&"ms");
    il2cpp_runtime_helper_023445d0(&"AoTTG Prewarm ");
    il2cpp_runtime_helper_023445d0(&" elapsed=");
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Complete");
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Start");
    g_data_057a9cdd = '\x01';
  }
  lStack_38 = 0;
  iVar4 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -3;
    iVar4 = (__this->fields)._i_5__5 + 1;
    (__this->fields)._i_5__5 = iVar4;
    if (iVar4 < (__this->fields)._frames_5__4) {
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        if ((__this_00->fields)._prewarmHost == (__this->fields)._host_5__3) {
label_03b4f95b:
          (__this->fields).__2__current = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
          (__this->fields).__1__state = 1;
          return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
        }
        goto label_03b4f98d;
      }
      il2cpp_runtime_helper_022b2c90();
label_03b4fa72:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_03b4fa72;
label_03b4f98d:
      if ((__this_00->fields)._prewarmHost != (__this->fields)._host_5__3) {
label_03b4fa54:
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27____m__Finally1(__this,method);
        return 0;
      }
      pSVar6 = (__this->fields).id;
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9d36 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
        g_data_057a9d36 = '\x01';
      }
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
      if (pSVar15 != (System_Diagnostics_Stopwatch_o *)0x0) {
        iVar5 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar15,(MethodInfo *)0x0);
        lStack_38 = iVar5 - (__this->fields)._startMs_5__2;
        str2 = System_Int64__ToString((int64_t)&lStack_38,(MethodInfo *)0x0);
        method = (MethodInfo *)
                 System_String__Concat_3af7470(pSVar6," elapsed=",str2,"ms",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                  ("ScreenPrewarm.Complete",(System_String_o *)method,method_03);
        goto label_03b4fa54;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_03b4fa7c:
    il2cpp_runtime_helper_022b2c90();
label_03b4fa81:
    il2cpp_runtime_helper_022b2c90();
label_03b4fa86:
    il2cpp_runtime_helper_022b2c90();
label_03b4fa8b:
    il2cpp_runtime_helper_022b2c90();
label_03b4fa90:
    il2cpp_runtime_helper_022b2c90();
label_03b4fa95:
    il2cpp_runtime_helper_022b2ca0();
label_03b4fa9a:
    il2cpp_runtime_helper_022b2c90();
label_03b4fa9f:
    il2cpp_runtime_helper_022b2c90();
label_03b4faa4:
    il2cpp_runtime_helper_022b2c90();
label_03b4faa9:
    il2cpp_runtime_helper_022b2c90();
label_03b4faae:
    il2cpp_runtime_helper_022b2c90();
label_03b4fab3:
    il2cpp_runtime_helper_022b2c90();
label_03b4fab8:
    il2cpp_runtime_helper_022b2c90();
label_03b4fabd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return 0;
    }
    bVar3 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_03b4fa7c;
    pUVar10 = (__this_00->fields)._screenLayer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    bVar3 = System_String__Equals_3af50f0
                      ((__this_00->fields)._activeId,(__this->fields).id,5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    bVar3 = System_String__Equals_3af50f0
                      ((__this_00->fields)._pendingId,(__this->fields).id,5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    pGVar1 = (__this_00->fields)._context;
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_03b4fa81;
    __this_01 = (pGVar1->fields).Manifest;
    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) goto label_03b4fa86;
    screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (__this_01,(__this->fields).id,method_00);
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return 0;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this_00,"replace",method_01);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9d36 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
      g_data_057a9d36 = '\x01';
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
    if (pSVar15 == (System_Diagnostics_Stopwatch_o *)0x0) goto label_03b4fa8b;
    iVar5 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar15,(MethodInfo *)0x0);
    (__this->fields)._startMs_5__2 = iVar5;
    pSVar6 = System_String__Concat_3ae5ba0("AoTTG Prewarm ",(__this->fields).id,(MethodInfo *)0x0);
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle.fields.value = TypeRef_RectTransform.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_03b4fa90;
    if ((pSVar7 == (System_Type_o *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 != 0)) {
      if ((int)components->max_length == 0) goto label_03b4fa95;
      components->m_Items[0] = pSVar7;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar7);
      pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar9,pSVar6,components,(MethodInfo *)0x0);
      (__this->fields)._host_5__3 = pUVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._host_5__3);
      pUVar9 = (__this->fields)._host_5__3;
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_03b4fa9a;
      pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_03b4fa9f;
      UnityEngine_Transform__SetParent_4e09e30(pUVar10,(__this_00->fields)._screenLayer,0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields)._host_5__3;
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_03b4faa4;
      pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_03b4faa9;
      UnityEngine_Transform__SetAsFirstSibling(pUVar10,(MethodInfo *)0x0);
      pUVar9 = (__this->fields)._host_5__3;
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_03b4faae;
      method_04 = MethodInfo_RectTransform_GetComponent_RectTransform;
      rect = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_(pUVar9,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch(rect,method_04);
      pUVar9 = (__this->fields)._host_5__3;
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_03b4fab3;
      __this_02 = (UnityEngine_CanvasGroup_o *)
                  UnityEngine_GameObject__AddComponent_object_(pUVar9,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
      if (__this_02 == (UnityEngine_CanvasGroup_o *)0x0) goto label_03b4fab8;
      UnityEngine_CanvasGroup__set_alpha(__this_02,0.0,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_interactable(__this_02,0,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this_02,0,(MethodInfo *)0x0);
      (__this_00->fields)._prewarmHost = (__this->fields)._host_5__3;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._prewarmHost);
      (__this_00->fields)._prewarmId = (__this->fields).id;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._prewarmId);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenPrewarm.Start",(__this->fields).id,method_02);
      (__this->fields).__1__state = -3;
      pUVar9 = (__this->fields)._host_5__3;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        method = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
        pGVar1 = (__this_00->fields)._context;
        if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar11 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                            (screen,(UnityEngine_Transform_o *)method,pGVar1,(MethodInfo *)0x0);
        if (pGVar11 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          x = (UnityEngine_Object_o *)(pGVar11->fields)._Root_k__BackingField;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar9 = (pGVar11->fields)._Root_k__BackingField;
            if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_03b4fad1;
            method = (MethodInfo *)0x1;
            UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
          }
        }
        iVar4 = (__this->fields).keepAliveFrames;
        iVar14 = 1;
        if (0 < iVar4) {
          iVar14 = iVar4;
        }
        (__this->fields)._frames_5__4 = iVar14;
        (__this->fields)._i_5__5 = 0;
        if ((__this_00->fields)._prewarmHost == (__this->fields)._host_5__3) goto label_03b4f95b;
        goto label_03b4f98d;
      }
      goto label_03b4fabd;
    }
  }
  uVar12 = il2cpp_runtime_helper_0231b270();
  method = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2b10(uVar12);
label_03b4fad1:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  uVar12 = auVar17._0_8_;
  if (auVar17._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar12);
    lVar8 = *plVar13;
    __cxa_end_catch();
    if (lVar8 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02098af0(__this);
    uVar12 = il2cpp_runtime_helper_022fefe0(lVar8);
    if (lVar8 != 0) {
      iVar4 = (__this->fields).__1__state;
      if ((iVar4 == 1) || (iVar4 == -3)) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27____m__Finally1(__this,method);
      }
      uVar12 = il2cpp_runtime_helper_022fefe0(lVar8);
      il2cpp_runtime_helper_01f66400(uVar12);
      if (g_data_057a9d36 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
        g_data_057a9d36 = '\x01';
        iVar4 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
      }
      else {
        iVar4 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
      }
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar15 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
      }
      else {
        pSVar15 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
      }
      if (pSVar15 == (System_Diagnostics_Stopwatch_o *)0x0) {
        bVar3 = il2cpp_runtime_helper_022b2c90();
        pSVar16 = pSVar15;
        if (g_data_057a9cde == '\0') {
          pSVar16 = (System_Diagnostics_Stopwatch_o *)&TypeInfo_GisketchScreenRouter;
          bVar3 = il2cpp_runtime_helper_023445d0();
          g_data_057a9cde = '\x01';
        }
        *(undefined4 *)&(pSVar15->fields).elapsed = 0xffffffff;
        pSVar2 = pSVar15[1].klass;
        if (pSVar2 != (System_Diagnostics_Stopwatch_c *)0x0) {
          root = (Il2CppClass *)pSVar15[1].fields.started;
          if ((pSVar2->_1).parent != root) {
            return bVar3;
          }
          if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot((UnityEngine_GameObject_o *)root,method)
          ;
          (pSVar2->_1).parent = (Il2CppClass *)0x0;
          il2cpp_runtime_helper_022b4080(&(pSVar2->_1).parent,0);
          (pSVar2->_1).generic_class = (void *)0x0;
          bVar3 = il2cpp_runtime_helper_022b4080(&(pSVar2->_1).generic_class,0);
          return bVar3;
        }
        il2cpp_runtime_helper_022b2c90();
        return (bool_conflict)(pSVar16->fields).started;
      }
      iVar5 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar15,(MethodInfo *)0x0);
      return (bool_conflict)iVar5;
    }
  }
  _Unwind_Resume(uVar12);
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27____m__Finally1 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3b4fdd0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27____m__Finally1
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  UnityEngine_GameObject_o *root;
  
  if (g_data_057a9cde == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cde = '\x01';
  }
  (__this->fields).__1__state = -1;
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    root = (__this->fields)._host_5__3;
    if ((pGVar1->fields)._prewarmHost != root) {
      return;
    }
    if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method);
    (pGVar1->fields)._prewarmHost = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields)._prewarmHost,0);
    (pGVar1->fields)._prewarmId = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields)._prewarmId,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3b4fe80

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3b4fe90

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               MethodInfo *method)

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


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3b4fed0

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, UnityEngine_Transform_o* screenLayer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, UnityEngine_MonoBehaviour_o* runner, const MethodInfo* method);
// 0x3b4d300

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,UnityEngine_Transform_o *screenLayer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,UnityEngine_MonoBehaviour_o *runner,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._screenLayer = screenLayer;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._screenLayer,screenLayer);
  (__this->fields)._context = context;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._context,context);
  (__this->fields)._runner = runner;
  il2cpp_runtime_helper_022b4080(&__this->fields,runner);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_Active
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3b4d360

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  return (__this->fields)._active;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_ActiveId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3b4d370

System_String_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  return (__this->fields)._activeId;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsTransitioning
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3b4d380

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  bool_conflict bVar1;
  undefined8 in_RAX;
  
  if ((__this->fields)._pendingActivation != (UnityEngine_Coroutine_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  t = (__this->fields)._outgoingExit;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsPrewarming
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3b4d3a0

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  
  if (g_data_057a9ccb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ccb = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$add_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x3b4d3f0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               System_Action_string__GisketchView__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_string__GisketchView__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__GisketchView__o *a;
  bool bVar5;
  
  if (g_data_057a9ccc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_GisketchView);
    g_data_057a9ccc = '\x01';
  }
  a = (__this->fields).ScreenShown;
  while( true ) {
    pSVar3 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string_GisketchView;
    lVar4 = 0;
    if ((pSVar3 != (System_Delegate_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string_GisketchView), lVar4 == 0))
    break;
    pSVar2 = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_02300640(&(__this->fields).ScreenShown,lVar4,a);
    bVar5 = a == pSVar2;
    a = pSVar2;
    if (bVar5) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$remove_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x3b4d4a0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               System_Action_string__GisketchView__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_string__GisketchView__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__GisketchView__o *source;
  bool bVar5;
  
  if (g_data_057a9ccd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_GisketchView);
    g_data_057a9ccd = '\x01';
  }
  source = (__this->fields).ScreenShown;
  while( true ) {
    pSVar3 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    uVar1 = TypeInfo_Action_string_GisketchView;
    lVar4 = 0;
    if ((pSVar3 != (System_Delegate_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string_GisketchView), lVar4 == 0))
    break;
    pSVar2 = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_02300640(&(__this->fields).ScreenShown,lVar4,source)
    ;
    bVar5 = source == pSVar2;
    source = pSVar2;
    if (bVar5) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowScreen
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b4d550

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  long markerPtr;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  System_String_o *message;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  long markerPtr_00;
  undefined1 auVar9 [12];
  undefined8 in_stack_ffffffffffffff78;
  long lVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppClass *pIVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppType *pIVar14;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  if (g_data_057a9cce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"route ");
    il2cpp_runtime_helper_023445d0(&" pending=");
    il2cpp_runtime_helper_023445d0(&"missing ");
    il2cpp_runtime_helper_023445d0(&"Gisketch screen not found: ");
    il2cpp_runtime_helper_023445d0(&"skip duplicate ");
    il2cpp_runtime_helper_023445d0(&"find screen active=");
    il2cpp_runtime_helper_023445d0(&"ScreenRouter.ShowScreen");
    g_data_057a9cce = '\x01';
  }
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  markerPtr_00 = **(long **)(TypeInfo_GisketchScreenRouter + 0xb8);
  if (markerPtr_00 != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample(markerPtr_00,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_01.fields._detail = (System_String_o *)markerPtr_00;
  __this_01.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
  __this_01.fields._startMs = (int64_t)pIVar11;
  __this_01.fields._24_8_ = pIVar13;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_01,&local_58,"ScreenRouter.ShowScreen",(MethodInfo *)id);
  pIVar12 = (Il2CppClass *)local_58.klass;
  pIVar14 = local_58.monitor;
  pSVar4 = System_String__Concat_3af7470
                     ("find screen active=",(__this->fields)._activeId," pending=",(__this->fields)._pendingId,
                      (MethodInfo *)0x0);
  pMVar8 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar4,pMVar8);
  pGVar2 = (__this->fields)._context;
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_03b4d872;
  __this_00 = (pGVar2->fields).Manifest;
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) goto label_03b4d877;
  screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(__this_00,id,method_01);
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    pSVar4 = System_String__Concat_3ae5ba0("missing ",id,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_03;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar4,pMVar8);
    lVar10 = markerPtr_00;
    message = System_String__Concat_3ae5ba0("Gisketch screen not found: ",id,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = (System_String_o *)0x0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = System_String__Concat_3ae5ba0("route ",id,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,pSVar4,method_02);
    bVar3 = System_String__Equals_3af50f0((__this->fields)._activeId,id,5,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      ppSVar1 = &(__this->fields)._pendingId;
      method_00 = (MethodInfo *)0x0;
      pMVar8 = (MethodInfo *)id;
      bVar3 = System_String__Equals_3af50f0(*ppSVar1,id,5,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,pMVar8);
        *ppSVar1 = id;
        lVar10 = markerPtr_00;
        il2cpp_runtime_helper_022b4080(ppSVar1,id);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared(__this,screen,id,method_00);
        pSVar4 = (System_String_o *)0x0;
        goto label_03b4d836;
      }
    }
    pSVar4 = System_String__Concat_3ae5ba0("skip duplicate ",id,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_01;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar4,pMVar8);
    pSVar4 = (System_String_o *)0x0;
    lVar10 = markerPtr_00;
  }
label_03b4d836:
  do {
    __this_02.fields._detail = (System_String_o *)lVar10;
    __this_02.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
    __this_02.fields._startMs = (int64_t)pIVar12;
    __this_02.fields._24_8_ = pIVar14;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
    if (pSVar4 != (System_String_o *)0x0) goto label_03b4d87c;
    pSVar4 = (System_String_o *)0x0;
    markerPtr = markerPtr_00;
    markerPtr_00 = lVar10;
    while( true ) {
      if (markerPtr != 0) {
        Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(markerPtr,(MethodInfo *)0x0);
      }
      if (pSVar4 == (System_String_o *)0x0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(pSVar4);
label_03b4d872:
      il2cpp_runtime_helper_022b2c90();
label_03b4d877:
      il2cpp_runtime_helper_022b2c90();
      lVar10 = markerPtr_00;
label_03b4d87c:
      markerPtr_00 = lVar10;
      auVar9 = il2cpp_runtime_helper_022fefe0(pSVar4);
      uVar5 = auVar9._0_8_;
      if (auVar9._8_4_ == 1) break;
      __this_03.fields._detail = (System_String_o *)markerPtr_00;
      __this_03.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
      __this_03.fields._startMs = (int64_t)pIVar12;
      __this_03.fields._24_8_ = pIVar14;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_03,(MethodInfo *)&stack0xffffffffffffff88);
      if (auVar9._8_4_ != 1) {
        if (markerPtr_00 != 0) {
          Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(markerPtr_00,(MethodInfo *)0x0);
        }
        _Unwind_Resume(uVar5);
      }
      plVar7 = (long *)__cxa_begin_catch(uVar5);
      pSVar4 = (System_String_o *)*plVar7;
      __cxa_end_catch();
      markerPtr = markerPtr_00;
    }
    puVar6 = (undefined8 *)__cxa_begin_catch(uVar5);
    pSVar4 = (System_String_o *)*puVar6;
    __cxa_end_catch();
    lVar10 = markerPtr_00;
  } while( true );
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Back
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3b4e3a0

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar4;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  bool_conflict bVar5;
  MethodInfo *method_04;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *value;
  
  pGVar1 = (__this->fields)._context;
  __this_00 = __this;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (pGVar2 = (pGVar1->fields).Manifest, __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0,
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
    pGVar4 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (pGVar2,(__this->fields)._activeId,in_RDX);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      value = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
    }
    else {
      value = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(pGVar4->fields).backScreenId;
    }
    bVar5 = 0;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar5 = 0;
      __this_00 = value;
      bVar3 = System_String__Equals_3af50f0
                        ((System_String_o *)value,(__this->fields)._activeId,5,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pGVar1 = (__this->fields)._context;
        if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
           (pGVar2 = (pGVar1->fields).Manifest,
           __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0,
           pGVar2 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto label_03b4e436;
        pGVar4 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                           (pGVar2,(System_String_o *)value,method_00);
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
          bVar5 = 0;
        }
        else {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                    (__this,(System_String_o *)value,method_01);
          bVar5 = 1;
        }
      }
    }
    return bVar5;
  }
label_03b4e436:
  il2cpp_runtime_helper_022b2c90();
  method_02 = extraout_RDX;
  if (g_data_057a9ccf == '\0') {
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057a9ccf = '\x01';
    method_02 = extraout_RDX_00;
  }
  method_04 = "clear";
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
            (__this_00,(System_String_o *)"clear",method_02);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this_00,method_04);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
            (__this_00,(DG_Tweening_TweenCallback_o *)0x0,method_03);
  (__this_00->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._active,0);
  (__this_00->fields)._activeId = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._activeId,0);
  (__this_00->fields)._pendingId = (System_String_o *)0x0;
  bVar3 = il2cpp_runtime_helper_022b4080(&(__this_00->fields)._pendingId,0);
  return bVar3;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Clear
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3b4e440

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057a9ccf == '\0') {
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057a9ccf = '\x01';
    in_RDX = extraout_RDX;
  }
  method_01 = "clear";
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,(System_String_o *)"clear",in_RDX)
  ;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,method_01);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
            (__this,(DG_Tweening_TweenCallback_o *)0x0,method_00);
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._active,0);
  (__this->fields)._activeId = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._activeId,0);
  (__this->fields)._pendingId = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingId,0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmScreen
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, int32_t keepAliveFrames, const MethodInfo* method);
// 0x3b4e6a0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
          int32_t keepAliveFrames,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057a9cd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PrewarmScreen_d__27);
    g_data_057a9cd0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PrewarmScreen_d__27);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)id;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,id);
    *(int32_t *)&__this_00[3].klass = keepAliveFrames;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelPrewarm
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x3b4db20

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *reason,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Object_o *x;
  System_String_o *str0;
  UnityEngine_GameObject_o *root;
  System_String_o *area;
  bool_conflict bVar2;
  System_String_o *str1;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  System_String_o **ppSVar3;
  
  if (g_data_057a9cd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Cancel");
    il2cpp_runtime_helper_023445d0(&" reason=");
    g_data_057a9cd1 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  str0 = (__this->fields)._prewarmId;
  bVar2 = System_String__IsNullOrEmpty(reason,(MethodInfo *)0x0);
  area = "ScreenPrewarm.Cancel";
  if ((char)bVar2 == '\0') {
    str1 = System_String__Concat_3ae5ba0(" reason=",reason,(MethodInfo *)0x0);
  }
  else {
    str1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  ppUVar1 = &(__this->fields)._prewarmHost;
  method_00 = (MethodInfo *)System_String__Concat_3ae5ba0(str0,str1,(MethodInfo *)0x0);
  method_01 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_01 = extraout_RDX_00;
  }
  ppSVar3 = &(__this->fields)._prewarmId;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,(System_String_o *)method_00,method_01);
  root = *ppUVar1;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method_00);
  *ppUVar1 = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  *ppSVar3 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppSVar3,0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowPrepared
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x3b4dd70

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_MonoBehaviour_o *pUVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  System_String_o *area;
  bool_conflict bVar5;
  Il2CppObject *__this_04;
  DG_Tweening_Tween_o *pDVar6;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar7;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar8;
  DG_Tweening_TweenCallback_o *action;
  long *plVar9;
  undefined8 uVar10;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_05;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar11;
  byte bVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar14;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_04;
  long lVar15;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_06;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *value;
  void **ppvVar16;
  undefined1 auVar17 [12];
  undefined7 in_stack_ffffffffffffff58;
  undefined1 uVar18;
  DG_Tweening_Tween_o *in_stack_ffffffffffffff68;
  Il2CppObject *in_stack_ffffffffffffff70;
  Il2CppClass *local_78;
  Il2CppType *pIStack_70;
  System_String_Fields local_68;
  _union_13 _Stack_60;
  System_String_o local_58;
  _union_13 _Stack_40;
  MethodInfo *pMVar13;
  
  if (g_data_057a9cd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ShowPrepared_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass29_0);
    il2cpp_runtime_helper_023445d0(&"oldRoot=");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&" oldExit=");
    il2cpp_runtime_helper_023445d0(&"ScreenRouter.ShowPrepared");
    g_data_057a9cd2 = '\x01';
  }
  local_68._stringLength = 0;
  local_68._firstChar = 0;
  local_68._6_2_ = 0;
  _Stack_60.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_78 = (Il2CppClass *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  uVar18 = 0;
  __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass29_0);
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_03b4e1dd:
    il2cpp_runtime_helper_022b2c90();
label_03b4e1e2:
    auVar17 = il2cpp_runtime_helper_022b2c90();
    uVar10 = auVar17._0_8_;
    if (auVar17._8_4_ == 1) {
      plVar9 = (long *)__cxa_begin_catch(uVar10);
      lVar15 = *plVar9;
      __cxa_end_catch();
      __this_02.fields._area._7_1_ = uVar18;
      __this_02.fields._area._0_7_ = in_stack_ffffffffffffff58;
      __this_02.fields._detail = (System_String_o *)screen;
      __this_02.fields._startMs = (int64_t)in_stack_ffffffffffffff68;
      __this_02.fields._24_8_ = in_stack_ffffffffffffff70;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&local_78);
      if (lVar15 == 0) {
        return;
      }
      uVar10 = il2cpp_runtime_helper_022fefe0(lVar15);
    }
    else {
      lVar15 = 0;
    }
    __this_03.fields._area._7_1_ = uVar18;
    __this_03.fields._area._0_7_ = in_stack_ffffffffffffff58;
    __this_03.fields._detail = (System_String_o *)screen;
    __this_03.fields._startMs = (int64_t)in_stack_ffffffffffffff68;
    __this_03.fields._24_8_ = in_stack_ffffffffffffff70;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_03,(MethodInfo *)&local_78);
    if (lVar15 != 0) {
      __this_05 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)il2cpp_runtime_helper_022fefe0(lVar15);
      il2cpp_runtime_helper_01f66400();
      pGVar3 = (__this_05->fields)._context;
      __this_06 = __this_05;
      if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
        pGVar4 = (pGVar3->fields).Manifest;
        __this_06 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
          pGVar11 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                              (pGVar4,(__this_05->fields)._activeId,method_01);
          if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
            value = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
          }
          else {
            value = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(pGVar11->fields).backScreenId;
          }
          bVar5 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
          if (((char)bVar5 != '\0') ||
             (__this_06 = value,
             bVar5 = System_String__Equals_3af50f0
                               ((System_String_o *)value,(__this_05->fields)._activeId,5,(MethodInfo *)0x0),
             (char)bVar5 != '\0')) {
            return;
          }
          pGVar3 = (__this_05->fields)._context;
          if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
            pGVar4 = (pGVar3->fields).Manifest;
            __this_06 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
            if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
              pGVar11 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                                  (pGVar4,(System_String_o *)value,method_02);
              if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
                return;
              }
              Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                        (__this_05,(System_String_o *)value,method_03);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar13 = extraout_RDX_03;
      if (g_data_057a9ccf == '\0') {
        il2cpp_runtime_helper_023445d0(&"clear");
        g_data_057a9ccf = '\x01';
        pMVar13 = extraout_RDX_04;
      }
      pMVar14 = "clear";
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
                (__this_06,(System_String_o *)"clear",pMVar13);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this_06,pMVar14);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
                (__this_06,(DG_Tweening_TweenCallback_o *)0x0,method_04);
      (__this_06->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_06->fields)._active,0);
      (__this_06->fields)._activeId = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_06->fields)._activeId,0);
      (__this_06->fields)._pendingId = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_06->fields)._pendingId,0);
      return;
    }
    _Unwind_Resume(uVar10);
  }
  __this_04[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(__this_04 + 1,__this);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_00.fields._area._7_1_ = uVar18;
  __this_00.fields._area._0_7_ = in_stack_ffffffffffffff58;
  __this_00.fields._detail = (System_String_o *)screen;
  __this_00.fields._startMs = (int64_t)in_stack_ffffffffffffff68;
  __this_00.fields._24_8_ = in_stack_ffffffffffffff70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_00,&local_58,"ScreenRouter.ShowPrepared",(MethodInfo *)id);
  local_68 = local_58.fields;
  _Stack_60.methodMetadataHandle = _Stack_40.methodMetadataHandle;
  local_78 = (Il2CppClass *)local_58.klass;
  pIStack_70 = local_58.monitor;
  ppvVar16 = &__this_04[1].monitor;
  __this_04[1].monitor = (__this->fields)._active;
  il2cpp_runtime_helper_022b4080(ppvVar16);
  if (*ppvVar16 == (void *)0x0) {
    x = (UnityEngine_Object_o *)0x0;
  }
  else {
    x = *(UnityEngine_Object_o **)((long)*ppvVar16 + 0x18);
  }
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  (__this->fields)._activeId = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._activeId);
  view = *ppvVar16;
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pDVar6 = (DG_Tweening_Tween_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    in_stack_ffffffffffffff70 = __this_04;
  }
  else {
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    in_stack_ffffffffffffff70 = __this_04;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar7 = "oldRoot=";
  area = "ScreenRouter.ShowPrepared";
  str1 = "null";
  if ((char)bVar5 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) goto label_03b4e1dd;
    str1 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
  }
  uVar18 = pDVar6 != (DG_Tweening_Tween_o *)0x0;
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str3 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff5f,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_3af7470(pSVar7,str1," oldExit=",str3,(MethodInfo *)0x0);
  pMVar13 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar13 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar7,pMVar13);
  in_stack_ffffffffffffff68 = pDVar6;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar12 = pDVar6 == (DG_Tweening_Tween_o *)0x0 | (byte)bVar5;
  pMVar13 = (MethodInfo *)CONCAT71((int7)((ulong)str3 >> 8),bVar12);
  if (bVar12 != 0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,pMVar13);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView(__this,*ppvVar16,method_00);
    goto label_03b4e1bf;
  }
  pMVar14 = extraout_RDX_01;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar14 = extraout_RDX_02;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked((UnityEngine_GameObject_o *)x,1,pMVar14);
  (__this->fields)._outgoingView = *ppvVar16;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._outgoingView);
  (__this->fields)._outgoingExit = pDVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._outgoingExit);
  pUVar2 = (__this->fields)._runner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b4e157:
    pUVar8 = (UnityEngine_Coroutine_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_03b4e157;
    pUVar2 = (__this->fields)._runner;
    routine = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame(__this,screen,id,pMVar13);
    if (pUVar2 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_03b4e1e2;
    pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar2,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingActivation = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingActivation);
  if ((__this->fields)._pendingActivation == (UnityEngine_Coroutine_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,pMVar13);
  }
  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
            ((Il2CppObject *)in_stack_ffffffffffffff68,action,MethodInfo_Tween_OnComplete_Tween);
label_03b4e1bf:
  __this_01.fields._area._7_1_ = uVar18;
  __this_01.fields._area._0_7_ = in_stack_ffffffffffffff58;
  __this_01.fields._detail = (System_String_o *)screen;
  __this_01.fields._startMs = (int64_t)in_stack_ffffffffffffff68;
  __this_01.fields._24_8_ = in_stack_ffffffffffffff70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_78);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ActivateNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x3b4ef80

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057a9cd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ActivateNextFrame_d__30);
    g_data_057a9cd3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ActivateNextFrame_d__30);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = screen;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,screen);
    __this_00[3].klass = (Il2CppClass *)id;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,id);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CloseActive
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, DG_Tweening_TweenCallback_o* afterClose, const MethodInfo* method);
// 0x3b4e4d0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               DG_Tweening_TweenCallback_o *afterClose,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  char *pcVar2;
  char **ppcVar3;
  bool_conflict bVar4;
  Il2CppClass *__this_00;
  DG_Tweening_Tween_o *t;
  Il2CppClass *action;
  Il2CppObject *__this_01;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  Il2CppClass *pIVar6;
  Il2CppClass *x;
  Il2CppObject *__this_02;
  Gisketch_Aottg2UI_Building_GisketchView_o **ppGVar7;
  
  if (g_data_057a9cd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CloseActive_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    g_data_057a9cd4 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
  pIVar6 = (Il2CppClass *)0x0;
  x = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppClass *)0x0) goto label_03b4e693;
  ppcVar3 = &(__this_00->_1).namespaze;
  (__this_00->_1).namespaze = (char *)afterClose;
  il2cpp_runtime_helper_022b4080(ppcVar3);
  pGVar1 = (__this->fields)._active;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (Il2CppClass *)(pGVar1->fields)._Root_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar6 = (Il2CppClass *)0x0;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      ppGVar7 = &(__this->fields)._active;
      if (*ppGVar7 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        ((DG_Tweening_TweenCallback_Fields *)&(__this_00->_1).name)->method_ptr =
             (intptr_t)((*ppGVar7)->fields)._Root_k__BackingField;
        il2cpp_runtime_helper_022b4080((DG_Tweening_TweenCallback_Fields *)&(__this_00->_1).name);
        pGVar1 = *ppGVar7;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
        action = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        x = action;
        DG_Tweening_TweenCallback___ctor();
        if (t == (DG_Tweening_Tween_o *)0x0) {
          pIVar6 = __this_00;
          if (action == (Il2CppClass *)0x0) goto label_03b4e693;
          (*(code *)(action->_1).namespaze)
                    ((action->_1).element_class,*(intptr_t *)&(action->_1).byval_arg.bits);
        }
        else {
          DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                    ((Il2CppObject *)t,(DG_Tweening_TweenCallback_o *)action,MethodInfo_Tween_OnComplete_Tween);
        }
        *ppGVar7 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        il2cpp_runtime_helper_022b4080(ppGVar7,0);
        return;
      }
label_03b4e693:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9cd0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PrewarmScreen_d__27);
        g_data_057a9cd0 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PrewarmScreen_d__27);
      uVar5 = 0;
      __this_02 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].monitor = x;
        il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,x);
        __this_01[2].klass = pIVar6;
        il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar6);
        *(undefined4 *)&__this_01[3].klass = extraout_EDX;
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&__this_02[1].klass = uVar5;
      return;
    }
  }
  pcVar2 = *ppcVar3;
  if (pcVar2 != (char *)0x0) {
    (**(code **)(pcVar2 + 0x18))(*(undefined8 *)(pcVar2 + 0x40),*(undefined8 *)(pcVar2 + 0x28));
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Activate
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x3b4e820

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o **ppGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Action_string__GisketchView__o *pSVar5;
  long lVar6;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar8;
  System_String_o *str1;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  long *plVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar12;
  undefined1 auVar13 [12];
  undefined8 in_stack_ffffffffffffff78;
  System_String_o *in_stack_ffffffffffffff80;
  Il2CppMethodPointer pIVar14;
  Il2CppClass *pIVar15;
  Il2CppMethodPointer pIVar16;
  Il2CppType *pIVar17;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  if (g_data_057a9cd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"play enter");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"build view done root=");
    il2cpp_runtime_helper_023445d0(&"build view start");
    il2cpp_runtime_helper_023445d0(&"ScreenRouter.Activate");
    il2cpp_runtime_helper_023445d0(&"screen shown event");
    il2cpp_runtime_helper_023445d0(&"skip pending mismatch pending=");
    g_data_057a9cd5 = '\x01';
  }
  pIVar14 = (Il2CppMethodPointer)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_00.fields._detail = in_stack_ffffffffffffff80;
  __this_00.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
  __this_00.fields._startMs = (int64_t)pIVar14;
  __this_00.fields._24_8_ = pIVar16;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_00,&local_58,"ScreenRouter.Activate",(MethodInfo *)id);
  pIVar15 = (Il2CppClass *)local_58.klass;
  pIVar17 = local_58.monitor;
  bVar7 = System_String__Equals_3af50f0((__this->fields)._pendingId,id,5,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._pendingId;
  if ((char)bVar7 == '\0') {
    pSVar9 = System_String__Concat_3ae5ba0("skip pending mismatch pending=",*ppSVar1,(MethodInfo *)0x0);
    pMVar12 = extraout_RDX_01;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar12 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate",pSVar9,pMVar12);
    goto label_03b4ebef;
  }
  pMVar12 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar12 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","build view start",pMVar12);
  context = (__this->fields)._context;
  pUVar10 = (__this->fields)._screenLayer;
  if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                     (screen,pUVar10,context,(MethodInfo *)0x0);
  ppGVar2 = &(__this->fields)._active;
  (__this->fields)._active = pGVar8;
  il2cpp_runtime_helper_022b4080(ppGVar2);
  pSVar9 = "build view done root=";
  str1 = "null";
  in_stack_ffffffffffffff80 = "ScreenRouter.Activate";
  if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
label_03b4ea87:
    pSVar9 = System_String__Concat_3ae5ba0(pSVar9,str1,(MethodInfo *)0x0);
    pMVar12 = extraout_RDX_03;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar12 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(in_stack_ffffffffffffff80,pSVar9,pMVar12);
    (__this->fields)._activeId = id;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._activeId);
    *ppSVar1 = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b4ec0d:
      il2cpp_runtime_helper_022b2c90();
label_03b4ec12:
      il2cpp_runtime_helper_022b2c90();
label_03b4ec17:
      il2cpp_runtime_helper_022b2c90();
label_03b4ec1c:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pUVar4 = ((*ppGVar2)->fields)._Root_k__BackingField;
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_03b4ec0d;
      UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
      if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_03b4ec12;
      pUVar4 = ((*ppGVar2)->fields)._Root_k__BackingField;
      pMVar12 = extraout_RDX_05;
      if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX_06;
      }
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar4,0,pMVar12);
      if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_03b4ec17;
      pUVar4 = ((*ppGVar2)->fields)._Root_k__BackingField;
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_03b4ec1c;
      pUVar10 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling(pUVar10,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","play enter",method_00);
        pGVar8 = *ppGVar2;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(pGVar8,(MethodInfo *)0x0);
        pSVar5 = (__this->fields).ScreenShown;
        pMVar12 = extraout_RDX_07;
        if (pSVar5 != (System_Action_string__GisketchView__o *)0x0) {
          (*(code *)(pSVar5->fields).invoke_impl)
                    ((pSVar5->fields).method_code,id,*ppGVar2,(pSVar5->fields).method);
          pMVar12 = extraout_RDX_08;
        }
        if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar12 = extraout_RDX_09;
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","screen shown event",pMVar12);
label_03b4ebef:
        __this_01.fields._detail = in_stack_ffffffffffffff80;
        __this_01.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
        __this_01.fields._startMs = (int64_t)pIVar15;
        __this_01.fields._24_8_ = pIVar17;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                  (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)((*ppGVar2)->fields)._Root_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    str1 = "null";
    if ((char)bVar7 == '\0') goto label_03b4ea87;
    if (*ppGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pUVar3 = (UnityEngine_Object_o *)((*ppGVar2)->fields)._Root_k__BackingField;
      if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_03b4ec2b;
      str1 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
      goto label_03b4ea87;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b4ec2b:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar6 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._detail = in_stack_ffffffffffffff80;
    __this_02.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
    __this_02.fields._startMs = (int64_t)pIVar15;
    __this_02.fields._24_8_ = pIVar17;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_03.fields._detail = in_stack_ffffffffffffff80;
  __this_03.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
  __this_03.fields._startMs = (int64_t)pIVar15;
  __this_03.fields._24_8_ = pIVar17;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_03,(MethodInfo *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar13._0_8_);
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelTransition
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3b4dc90

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  DG_Tweening_Tween_o **ppDVar2;
  int iVar3;
  UnityEngine_MonoBehaviour_o *pUVar4;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  System_String_o *area;
  bool_conflict bVar7;
  Il2CppObject *__this_04;
  Il2CppClass *pIVar8;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar9;
  System_Collections_IEnumerator_o *routine;
  DG_Tweening_TweenCallback_o *action;
  long *plVar10;
  undefined8 uVar11;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_05;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar12;
  byte bVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar15;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_05;
  long lVar16;
  DG_Tweening_Tween_o *t;
  Il2CppClass *__this_06;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_07;
  UnityEngine_Object_o *pUVar17;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *value;
  void **ppvVar18;
  undefined1 auVar19 [12];
  undefined7 in_stack_ffffffffffffff40;
  undefined1 uVar20;
  Il2CppClass *in_stack_ffffffffffffff50;
  Il2CppObject *in_stack_ffffffffffffff58;
  Il2CppClass *pIStack_90;
  Il2CppType *pIStack_88;
  System_String_Fields SStack_80;
  _union_13 _Stack_78;
  System_String_o SStack_70;
  _union_13 _Stack_58;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGStack_48;
  MethodInfo *pMVar14;
  
  if (g_data_057a9cd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cd6 = '\x01';
  }
  ppUVar1 = &(__this->fields)._pendingActivation;
  if ((__this->fields)._pendingActivation == (UnityEngine_Coroutine_o *)0x0) {
label_03b4dcfe:
    (__this->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    ppDVar2 = &(__this->fields)._outgoingExit;
    t = (__this->fields)._outgoingExit;
    pMVar14 = extraout_RDX;
    if ((t != (DG_Tweening_Tween_o *)0x0) &&
       (bVar7 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0), pMVar14 = extraout_RDX_00,
       (char)bVar7 != '\0')) {
      t = *ppDVar2;
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
      pMVar14 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
              ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)t,(__this->fields)._outgoingView,pMVar14);
    (__this->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppDVar2,0);
    (__this->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._outgoingView,0);
    return;
  }
  pUVar4 = (__this->fields)._runner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') goto label_03b4dcfe;
  __this_06 = (Il2CppClass *)(__this->fields)._runner;
  if (__this_06 != (Il2CppClass *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this_06,*ppUVar1,(MethodInfo *)0x0);
    goto label_03b4dcfe;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_48 = __this;
  if (g_data_057a9cd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ShowPrepared_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass29_0);
    il2cpp_runtime_helper_023445d0(&"oldRoot=");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&" oldExit=");
    il2cpp_runtime_helper_023445d0(&"ScreenRouter.ShowPrepared");
    g_data_057a9cd2 = '\x01';
  }
  SStack_80._stringLength = 0;
  SStack_80._firstChar = 0;
  SStack_80._6_2_ = 0;
  _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_90 = (Il2CppClass *)0x0;
  pIStack_88 = (Il2CppType *)0x0;
  uVar20 = 0;
  __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass29_0);
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_03b4e1dd:
    il2cpp_runtime_helper_022b2c90();
label_03b4e1e2:
    auVar19 = il2cpp_runtime_helper_022b2c90();
    uVar11 = auVar19._0_8_;
    if (auVar19._8_4_ == 1) {
      plVar10 = (long *)__cxa_begin_catch(uVar11);
      lVar16 = *plVar10;
      __cxa_end_catch();
      __this_02.fields._area._7_1_ = uVar20;
      __this_02.fields._area._0_7_ = in_stack_ffffffffffffff40;
      __this_02.fields._detail = (System_String_o *)pGVar12;
      __this_02.fields._startMs = (int64_t)in_stack_ffffffffffffff50;
      __this_02.fields._24_8_ = in_stack_ffffffffffffff58;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&pIStack_90);
      if (lVar16 == 0) {
        return;
      }
      uVar11 = il2cpp_runtime_helper_022fefe0(lVar16);
    }
    else {
      lVar16 = 0;
    }
    __this_03.fields._area._7_1_ = uVar20;
    __this_03.fields._area._0_7_ = in_stack_ffffffffffffff40;
    __this_03.fields._detail = (System_String_o *)pGVar12;
    __this_03.fields._startMs = (int64_t)in_stack_ffffffffffffff50;
    __this_03.fields._24_8_ = in_stack_ffffffffffffff58;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_03,(MethodInfo *)&pIStack_90);
    if (lVar16 != 0) {
      __this_05 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)il2cpp_runtime_helper_022fefe0(lVar16);
      il2cpp_runtime_helper_01f66400();
      pGVar5 = (__this_05->fields)._context;
      __this_07 = __this_05;
      if (pGVar5 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
        pGVar6 = (pGVar5->fields).Manifest;
        __this_07 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
          pGVar12 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                              (pGVar6,(__this_05->fields)._activeId,method_02);
          if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
            value = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
          }
          else {
            value = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(pGVar12->fields).backScreenId;
          }
          bVar7 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
          if (((char)bVar7 != '\0') ||
             (__this_07 = value,
             bVar7 = System_String__Equals_3af50f0
                               ((System_String_o *)value,(__this_05->fields)._activeId,5,(MethodInfo *)0x0),
             (char)bVar7 != '\0')) {
            return;
          }
          pGVar5 = (__this_05->fields)._context;
          if (pGVar5 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
            pGVar6 = (pGVar5->fields).Manifest;
            __this_07 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
              pGVar12 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                                  (pGVar6,(System_String_o *)value,method_03);
              if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
                return;
              }
              Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                        (__this_05,(System_String_o *)value,method_04);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar14 = extraout_RDX_06;
      if (g_data_057a9ccf == '\0') {
        il2cpp_runtime_helper_023445d0(&"clear");
        g_data_057a9ccf = '\x01';
        pMVar14 = extraout_RDX_07;
      }
      pMVar15 = "clear";
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
                (__this_07,(System_String_o *)"clear",pMVar14);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this_07,pMVar15);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
                (__this_07,(DG_Tweening_TweenCallback_o *)0x0,method_05);
      (__this_07->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_07->fields)._active,0);
      (__this_07->fields)._activeId = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_07->fields)._activeId,0);
      (__this_07->fields)._pendingId = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_07->fields)._pendingId,0);
      return;
    }
    _Unwind_Resume(uVar11);
  }
  __this_04[1].klass = __this_06;
  il2cpp_runtime_helper_022b4080(__this_04 + 1,__this_06);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_70.klass = (System_String_c *)0x0;
  SStack_70.monitor = (Il2CppType *)0x0;
  SStack_70.fields._stringLength = 0;
  SStack_70.fields._firstChar = 0;
  SStack_70.fields._6_2_ = 0;
  _Stack_58.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_00.fields._area._7_1_ = uVar20;
  __this_00.fields._area._0_7_ = in_stack_ffffffffffffff40;
  __this_00.fields._detail = (System_String_o *)pGVar12;
  __this_00.fields._startMs = (int64_t)in_stack_ffffffffffffff50;
  __this_00.fields._24_8_ = in_stack_ffffffffffffff58;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&SStack_70,"ScreenRouter.ShowPrepared",method_00);
  SStack_80 = SStack_70.fields;
  _Stack_78.methodMetadataHandle = _Stack_58.methodMetadataHandle;
  pIStack_90 = (Il2CppClass *)SStack_70.klass;
  pIStack_88 = SStack_70.monitor;
  ppvVar18 = &__this_04[1].monitor;
  __this_04[1].monitor = *(void **)&(__this_06->_1).byval_arg.bits;
  il2cpp_runtime_helper_022b4080(ppvVar18);
  if (*ppvVar18 == (void *)0x0) {
    pUVar17 = (UnityEngine_Object_o *)0x0;
  }
  else {
    pUVar17 = *(UnityEngine_Object_o **)((long)*ppvVar18 + 0x18);
  }
  *(undefined8 *)&(__this_06->_1).byval_arg.bits = 0;
  il2cpp_runtime_helper_022b4080();
  (__this_06->_1).this_arg.data = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this_06->_1).this_arg);
  view = *ppvVar18;
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pIVar8 = (Il2CppClass *)0x0;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    in_stack_ffffffffffffff58 = __this_04;
  }
  else {
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = (Il2CppClass *)Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    in_stack_ffffffffffffff58 = __this_04;
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = "oldRoot=";
  area = "ScreenRouter.ShowPrepared";
  str1 = "null";
  if ((char)bVar7 != '\0') {
    if (pUVar17 == (UnityEngine_Object_o *)0x0) goto label_03b4e1dd;
    str1 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
  }
  uVar20 = pIVar8 != (Il2CppClass *)0x0;
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str3 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff47,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3af7470(pSVar9,str1," oldExit=",str3,(MethodInfo *)0x0);
  pMVar14 = extraout_RDX_02;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar14 = extraout_RDX_03;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar9,pMVar14);
  in_stack_ffffffffffffff50 = pIVar8;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar13 = pIVar8 == (Il2CppClass *)0x0 | (byte)bVar7;
  pMVar14 = (MethodInfo *)CONCAT71((int7)((ulong)str3 >> 8),bVar13);
  if (bVar13 != 0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
              ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)__this_06,pGVar12,
               (System_String_o *)method_00,pMVar14);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
              ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)__this_06,*ppvVar18,method_01);
    goto label_03b4e1bf;
  }
  pMVar15 = extraout_RDX_04;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = extraout_RDX_05;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked
            ((UnityEngine_GameObject_o *)pUVar17,1,pMVar15);
  (__this_06->_1).declaringType = *ppvVar18;
  il2cpp_runtime_helper_022b4080(&(__this_06->_1).declaringType);
  (__this_06->_1).castClass = pIVar8;
  il2cpp_runtime_helper_022b4080(&(__this_06->_1).castClass);
  pUVar17 = (UnityEngine_Object_o *)(__this_06->_1).name;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_03b4e157:
    pIVar8 = (Il2CppClass *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto label_03b4e157;
    pUVar4 = (UnityEngine_MonoBehaviour_o *)(__this_06->_1).name;
    routine = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame
                        ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)__this_06,pGVar12,
                         (System_String_o *)method_00,pMVar14);
    if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_03b4e1e2;
    pIVar8 = (Il2CppClass *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar4,routine,(MethodInfo *)0x0);
  }
  (__this_06->_1).element_class = pIVar8;
  il2cpp_runtime_helper_022b4080(&(__this_06->_1).element_class);
  if ((__this_06->_1).element_class == (Il2CppClass *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
              ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)__this_06,pGVar12,
               (System_String_o *)method_00,pMVar14);
  }
  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
            ((Il2CppObject *)in_stack_ffffffffffffff50,action,MethodInfo_Tween_OnComplete_Tween);
label_03b4e1bf:
  __this_01.fields._area._7_1_ = uVar20;
  __this_01.fields._area._0_7_ = in_stack_ffffffffffffff40;
  __this_01.fields._detail = (System_String_o *)pGVar12;
  __this_01.fields._startMs = (int64_t)in_stack_ffffffffffffff50;
  __this_01.fields._24_8_ = in_stack_ffffffffffffff58;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&pIStack_90);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b4edc0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057a9cd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cd7 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      root = (view->fields)._Root_k__BackingField;
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      method_01 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(root,0,method_00);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot
                ((view->fields)._Root_k__BackingField,method_01);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$SetInputLocked
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked (UnityEngine_GameObject_o* root, bool locked, const MethodInfo* method);
// 0x3b4ee60

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked
               (UnityEngine_GameObject_o *root,bool_conflict locked,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppClass *__this;
  Il2CppObject *__this_00;
  Il2CppClass *extraout_RDX;
  uint value;
  undefined4 uVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_01;
  
  if (g_data_057a9cd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cd8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = (void *)0x0;
  pIVar4 = (Il2CppClass *)root;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    __this = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this = (Il2CppClass *)UnityEngine_GameObject__AddComponent_object_(root,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar3 = (void *)0x0;
    pIVar4 = __this;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    if (__this != (Il2CppClass *)0x0) {
      value = (uint)(byte)((byte)locked ^ 1);
      UnityEngine_CanvasGroup__set_interactable((UnityEngine_CanvasGroup_o *)__this,value,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts((UnityEngine_CanvasGroup_o *)__this,value,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ActivateNextFrame_d__30);
    g_data_057a9cd3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ActivateNextFrame_d__30);
  uVar2 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = uVar2;
    return;
  }
  __this_00[2].klass = pIVar4;
  il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar4);
  __this_00[2].monitor = pvVar3;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pvVar3);
  __this_00[3].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyRoot
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b4e750

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9cd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cd9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar1 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b4f050

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool_conflict bVar1;
  intptr_t iVar2;
  
  if (g_data_057a9cda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cda = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8)
               ,(MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cdb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&"Gisketch.ScreenRouter.ShowScreen");
    g_data_057a9cdb = '\x01';
  }
  iVar2 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker
                    ("Gisketch.ScreenRouter.ShowScreen",1,0,0,(MethodInfo *)0x0);
  **(intptr_t **)(TypeInfo_GisketchScreenRouter + 0xb8) = iVar2;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor (const MethodInfo* method);
// 0x3b4f190

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor(MethodInfo *method)

{
  intptr_t iVar1;
  
  if (g_data_057a9cdb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&"Gisketch.ScreenRouter.ShowScreen");
    g_data_057a9cdb = '\x01';
  }
  iVar1 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker
                    ("Gisketch.ScreenRouter.ShowScreen",1,0,0,(MethodInfo *)0x0);
  **(intptr_t **)(TypeInfo_GisketchScreenRouter + 0xb8) = iVar1;
  return;
}


