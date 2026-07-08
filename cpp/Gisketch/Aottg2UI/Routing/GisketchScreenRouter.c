// Type: Gisketch.Aottg2UI.Routing.GisketchScreenRouter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Routing/GisketchScreenRouter.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x3ae4190

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<>c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass29_0$$<ShowPrepared>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0___ShowPrepared_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x3ae4b70

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<>c__DisplayClass29_0__<ShowPrepared>b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  MethodInfo *in_RDX;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    view = (__this->fields).old;
    if ((pGVar1->fields)._outgoingView != view) {
      return;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
              ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)__this,view,in_RDX);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      (pGVar1->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      il2cpp_runtime_glue(&(pGVar1->fields)._outgoingView,0);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        (pGVar1->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
        il2cpp_runtime_glue(&(pGVar1->fields)._outgoingExit,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x3ae49c0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<>c__DisplayClass31_0___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass31_0$$<CloseActive>b__0
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0___CloseActive_b__0 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x3ae4bd0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<>c__DisplayClass31_0__<CloseActive>b__0
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *root;
  DG_Tweening_TweenCallback_o *pDVar1;
  code *vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_057013bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    DAT_057013bc = '\x01';
  }
  root = (__this->fields).oldRoot;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method);
  pDVar1 = (__this->fields).afterClose;
  if (pDVar1 != (DG_Tweening_TweenCallback_o *)0x0) {
    vtable_dispatch = (code *)(pDVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pDVar1->fields).method_code,(pDVar1->fields).method,extraout_RDX,
               vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ae49a0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<ActivateNextFrame>d__30___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3ae4c40

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<ActivateNextFrame>d__30__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3ae4c50

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<ActivateNextFrame>d__30__MoveNext
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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this_00->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
    bVar2 = 0;
    il2cpp_runtime_glue(&(__this_00->fields)._pendingActivation,0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate
              (__this_00,(__this->fields).screen,(__this->fields).id,in_RCX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
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
// 0x3ae4ce0

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<ActivateNextFrame>d__30__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3ae4cf0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<ActivateNextFrame>d__30__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
               MethodInfo *method)

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


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o* __this, const MethodInfo* method);
// 0x3ae4d30

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<ActivateNextFrame>d__30__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame_d__30_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ae40b0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_IDisposable_Dispose (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3ae4d40

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__<>m__Finally1(__this,method);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__MoveNext (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3ae4d60

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__MoveNext
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  System_Diagnostics_Stopwatch_o *pSVar2;
  UnityEngine_Object_o *x;
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
  int iVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lStack_38;
  
  if (DAT_057013bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"replace");
    il2cpp_init_method_metadata(&"ms");
    il2cpp_init_method_metadata(&"AoTTG Prewarm ");
    il2cpp_init_method_metadata(&" elapsed=");
    il2cpp_init_method_metadata(&"ScreenPrewarm.Complete");
    il2cpp_init_method_metadata(&"ScreenPrewarm.Start");
    DAT_057013bd = '\x01';
  }
  lStack_38 = 0;
  iVar4 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -3;
    iVar4 = (__this->fields)._i_5__5 + 1;
    (__this->fields)._i_5__5 = iVar4;
    if (iVar4 < (__this->fields)._frames_5__4) {
      if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((__this_00->fields)._prewarmHost == (__this->fields)._host_5__3) goto LAB_03ae52db;
    }
    else if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return 0;
    }
    bVar3 = System_String__IsNullOrEmpty((__this->fields).id,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar10 = (__this_00->fields)._screenLayer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if ((char)bVar3 != '\0') {
      return 0;
    }
    bVar3 = System_String__Equals
                      ((__this_00->fields)._activeId,(__this->fields).id,5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    bVar3 = System_String__Equals
                      ((__this_00->fields)._pendingId,(__this->fields).id,5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    pGVar1 = (__this_00->fields)._context;
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = (pGVar1->fields).Manifest;
    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (__this_01,(__this->fields).id,method_00);
    if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return 0;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this_00,"replace",method_01);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05701413 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
      DAT_05701413 = '\x01';
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
    if (pSVar2 == (System_Diagnostics_Stopwatch_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar5 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar2,(MethodInfo *)0x0);
    (__this->fields)._startMs_5__2 = iVar5;
    pSVar6 = System_String__Concat("AoTTG Prewarm ",(__this->fields).id,(MethodInfo *)0x0);
    components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    handle.fields.value = TypeRef_RectTransform.fields.value;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSVar7 != (System_Type_o *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pSVar7,(((components->obj).klass)->_1).element_class), lVar8 == 0
       )) {
      uVar12 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar12,0);
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar7;
    il2cpp_runtime_glue(components->m_Items,pSVar7);
    pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(pUVar9,pSVar6,components,(MethodInfo *)0x0);
    (__this->fields)._host_5__3 = pUVar9;
    il2cpp_runtime_glue(&(__this->fields)._host_5__3);
    pUVar9 = (__this->fields)._host_5__3;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Transform__SetParent(pUVar10,(__this_00->fields)._screenLayer,0,(MethodInfo *)0x0);
    pUVar9 = (__this->fields)._host_5__3;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Transform__SetAsFirstSibling(pUVar10,(MethodInfo *)0x0);
    pUVar9 = (__this->fields)._host_5__3;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_04 = MethodInfo_RectTransform_GetComponent_RectTransform;
    rect = (UnityEngine_RectTransform_o *)
           UnityEngine_GameObject__GetComponent<object>(pUVar9,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch(rect,method_04);
    pUVar9 = (__this->fields)._host_5__3;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_02 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar9,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    if (__this_02 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_CanvasGroup__set_alpha(__this_02,0.0,(MethodInfo *)0x0);
    UnityEngine_CanvasGroup__set_interactable(__this_02,0,(MethodInfo *)0x0);
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_02,0,(MethodInfo *)0x0);
    (__this_00->fields)._prewarmHost = (__this->fields)._host_5__3;
    il2cpp_runtime_glue(&(__this_00->fields)._prewarmHost);
    (__this_00->fields)._prewarmId = (__this->fields).id;
    il2cpp_runtime_glue(&(__this_00->fields)._prewarmId);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenPrewarm.Start",(__this->fields).id,method_02);
    (__this->fields).__1__state = -3;
    pUVar9 = (__this->fields)._host_5__3;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
    pGVar1 = (__this_00->fields)._context;
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pGVar11 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                        (screen,(UnityEngine_Transform_o *)method,pGVar1,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      x = (UnityEngine_Object_o *)(pGVar11->fields)._Root_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar9 = (pGVar11->fields)._Root_k__BackingField;
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        method = (MethodInfo *)0x1;
        UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
      }
    }
    iVar4 = (__this->fields).keepAliveFrames;
    iVar13 = 1;
    if (0 < iVar4) {
      iVar13 = iVar4;
    }
    (__this->fields)._frames_5__4 = iVar13;
    (__this->fields)._i_5__5 = 0;
    if ((__this_00->fields)._prewarmHost == (__this->fields)._host_5__3) {
LAB_03ae52db:
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
  }
  if ((__this_00->fields)._prewarmHost == (__this->fields)._host_5__3) {
    pSVar6 = (__this->fields).id;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05701413 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
      DAT_05701413 = '\x01';
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
    if (pSVar2 == (System_Diagnostics_Stopwatch_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar5 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar2,(MethodInfo *)0x0);
    lStack_38 = iVar5 - (__this->fields)._startMs_5__2;
    str2 = System_Int64__ToString((int64_t)&lStack_38,(MethodInfo *)0x0);
    method = (MethodInfo *)
             System_String__Concat(pSVar6," elapsed=",str2,"ms",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("ScreenPrewarm.Complete",(System_String_o *)method,method_03);
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__<>m__Finally1(__this,method);
  return 0;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27____m__Finally1 (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3ae5750

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__<>m__Finally1
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  UnityEngine_GameObject_o *root;
  
  if (DAT_057013be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    DAT_057013be = '\x01';
  }
  (__this->fields).__1__state = -1;
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    root = (__this->fields)._host_5__3;
    if ((pGVar1->fields)._prewarmHost != root) {
      return;
    }
    if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method);
    (pGVar1->fields)._prewarmHost = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_glue(&(pGVar1->fields)._prewarmHost,0);
    (pGVar1->fields)._prewarmId = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(pGVar1->fields)._prewarmId,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3ae5800

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3ae5810

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
               MethodInfo *method)

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


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o* __this, const MethodInfo* method);
// 0x3ae5850

Il2CppObject *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter_<PrewarmScreen>d__27__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, UnityEngine_Transform_o* screenLayer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, UnityEngine_MonoBehaviour_o* runner, const MethodInfo* method);
// 0x3ae2c80

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               UnityEngine_Transform_o *screenLayer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               UnityEngine_MonoBehaviour_o *runner,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._screenLayer = screenLayer;
  il2cpp_runtime_glue(&(__this->fields)._screenLayer,screenLayer);
  (__this->fields)._context = context;
  il2cpp_runtime_glue(&(__this->fields)._context,context);
  (__this->fields)._runner = runner;
  il2cpp_runtime_glue(&__this->fields,runner);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_Active
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3ae2ce0

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_Active
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  return (__this->fields)._active;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_ActiveId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3ae2cf0

System_String_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_ActiveId
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  return (__this->fields)._activeId;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsTransitioning
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3ae2d00

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
// 0x3ae2d20

bool_conflict
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  
  if (DAT_057013ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013ab = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$add_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x3ae2d70

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
  
  if (DAT_057013ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string__GisketchView);
    DAT_057013ac = '\x01';
  }
  a = (__this->fields).ScreenShown;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string__GisketchView;
    lVar4 = 0;
    if (pSVar3 != (System_Delegate_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,TypeInfo_Action_string__GisketchView);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3,uVar1);
      }
    }
    pSVar2 = (System_Action_string__GisketchView__o *)
             il2cpp_glue_022c2530(&(__this->fields).ScreenShown,lVar4,a);
    bVar5 = a != pSVar2;
    a = pSVar2;
  } while (bVar5);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$remove_ScreenShown
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_Action_string__GisketchView__o* value, const MethodInfo* method);
// 0x3ae2e20

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
  
  if (DAT_057013ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string__GisketchView);
    DAT_057013ad = '\x01';
  }
  source = (__this->fields).ScreenShown;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string__GisketchView;
    lVar4 = 0;
    if (pSVar3 != (System_Delegate_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,TypeInfo_Action_string__GisketchView);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3,uVar1);
      }
    }
    pSVar2 = (System_Action_string__GisketchView__o *)
             il2cpp_glue_022c2530(&(__this->fields).ScreenShown,lVar4,source);
    bVar5 = source != pSVar2;
    source = pSVar2;
  } while (bVar5);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowScreen
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3ae2ed0

/* WARNING: Removing unreachable block (ram,0x03ae31ea) */
/* WARNING: Removing unreachable block (ram,0x03ae31fc) */

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  long markerPtr;
  undefined8 in_stack_ffffffffffffff78;
  long lVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppClass *pIVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppType *pIVar10;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  if (DAT_057013ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"route ");
    il2cpp_init_method_metadata(&" pending=");
    il2cpp_init_method_metadata(&"missing ");
    il2cpp_init_method_metadata(&"Gisketch screen not found: ");
    il2cpp_init_method_metadata(&"skip duplicate ");
    il2cpp_init_method_metadata(&"find screen active=");
    il2cpp_init_method_metadata(&"ScreenRouter.ShowScreen");
    DAT_057013ae = '\x01';
  }
  pIVar7 = (Il2CppMethodPointer)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  markerPtr = **(long **)(TypeInfo_GisketchScreenRouter + 0xb8);
  if (markerPtr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample(markerPtr,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_01.fields._detail = (System_String_o *)markerPtr;
  __this_01.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
  __this_01.fields._startMs = (int64_t)pIVar7;
  __this_01.fields._24_8_ = pIVar9;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_01,&local_58,"ScreenRouter.ShowScreen",(MethodInfo *)id);
  pIVar8 = (Il2CppClass *)local_58.klass;
  pIVar10 = local_58.monitor;
  pSVar4 = System_String__Concat
                     ("find screen active=",(__this->fields)._activeId," pending=",
                      (__this->fields)._pendingId,(MethodInfo *)0x0);
  pMVar5 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar5 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar4,pMVar5);
  pGVar2 = (__this->fields)._context;
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = (pGVar2->fields).Manifest;
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  screen = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(__this_00,id,method_01);
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    pSVar4 = System_String__Concat("missing ",id,(MethodInfo *)0x0);
    pMVar5 = extraout_RDX_03;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar5 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar4,pMVar5);
    lVar6 = markerPtr;
    pSVar4 = System_String__Concat("Gisketch screen not found: ",id,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = System_String__Concat("route ",id,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this,pSVar4,method_02);
    bVar3 = System_String__Equals((__this->fields)._activeId,id,5,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      ppSVar1 = &(__this->fields)._pendingId;
      method_00 = (MethodInfo *)0x0;
      pMVar5 = (MethodInfo *)id;
      bVar3 = System_String__Equals(*ppSVar1,id,5,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,pMVar5);
        *ppSVar1 = id;
        lVar6 = markerPtr;
        il2cpp_runtime_glue(ppSVar1,id);
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared(__this,screen,id,method_00);
        goto LAB_03ae31b6;
      }
    }
    pSVar4 = System_String__Concat("skip duplicate ",id,(MethodInfo *)0x0);
    pMVar5 = extraout_RDX_01;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar5 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.ShowScreen",pSVar4,pMVar5);
    lVar6 = markerPtr;
  }
LAB_03ae31b6:
  __this_02.fields._detail = (System_String_o *)lVar6;
  __this_02.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
  __this_02.fields._startMs = (int64_t)pIVar8;
  __this_02.fields._24_8_ = pIVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  if (markerPtr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(markerPtr,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Back
// il2cpp: bool Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3ae3d20

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
  bool_conflict bVar5;
  System_String_o *value;
  
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (pGVar2 = (pGVar1->fields).Manifest,
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
    pGVar4 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (pGVar2,(__this->fields)._activeId,in_RDX);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      value = (System_String_o *)0x0;
    }
    else {
      value = (pGVar4->fields).backScreenId;
    }
    bVar5 = 0;
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar5 = 0;
      bVar3 = System_String__Equals(value,(__this->fields)._activeId,5,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pGVar1 = (__this->fields)._context;
        if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
           (pGVar2 = (pGVar1->fields).Manifest,
           pGVar2 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto LAB_03ae3db6;
        pGVar4 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                           (pGVar2,value,method_00);
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
          bVar5 = 0;
        }
        else {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(__this,value,method_01);
          bVar5 = 1;
        }
      }
    }
    return bVar5;
  }
LAB_03ae3db6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Clear
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3ae3dc0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057013af == '\0') {
    il2cpp_init_method_metadata(&"clear");
    DAT_057013af = '\x01';
    in_RDX = extraout_RDX;
  }
  method_01 = "clear";
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
            (__this,(System_String_o *)"clear",in_RDX);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition(__this,method_01);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
            (__this,(DG_Tweening_TweenCallback_o *)0x0,method_00);
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._active,0);
  (__this->fields)._activeId = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._activeId,0);
  (__this->fields)._pendingId = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._pendingId,0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmScreen
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* id, int32_t keepAliveFrames, const MethodInfo* method);
// 0x3ae4020

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,System_String_o *id,
          int32_t keepAliveFrames,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057013b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PrewarmScreen_d__27);
    DAT_057013b0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_PrewarmScreen_d__27);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)id;
    il2cpp_runtime_glue(__this_00 + 2,id);
    *(int32_t *)&__this_00[3].klass = keepAliveFrames;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelPrewarm
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, System_String_o* reason, const MethodInfo* method);
// 0x3ae34a0

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
  
  if (DAT_057013b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"ScreenPrewarm.Cancel");
    il2cpp_init_method_metadata(&" reason=");
    DAT_057013b1 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._prewarmHost;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  str0 = (__this->fields)._prewarmId;
  bVar2 = System_String__IsNullOrEmpty(reason,(MethodInfo *)0x0);
  area = "ScreenPrewarm.Cancel";
  if ((char)bVar2 == '\0') {
    str1 = System_String__Concat(" reason=",reason,(MethodInfo *)0x0);
  }
  else {
    str1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  ppUVar1 = &(__this->fields)._prewarmHost;
  method_00 = (MethodInfo *)System_String__Concat(str0,str1,(MethodInfo *)0x0);
  method_01 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
    method_01 = extraout_RDX_00;
  }
  ppSVar3 = &(__this->fields)._prewarmId;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,(System_String_o *)method_00,method_01)
  ;
  root = *ppUVar1;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot(root,method_00);
  *ppUVar1 = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  *ppSVar3 = (System_String_o *)0x0;
  il2cpp_runtime_glue(ppSVar3,0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowPrepared
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x3ae36f0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowPrepared
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_MonoBehaviour_o *pUVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_String_o *area;
  bool_conflict bVar3;
  Il2CppObject *__this_02;
  DG_Tweening_Tween_o *pDVar4;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar5;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar6;
  DG_Tweening_TweenCallback_o *action;
  byte bVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  UnityEngine_Object_o *x;
  void **ppvVar9;
  undefined7 in_stack_ffffffffffffff58;
  undefined1 uVar10;
  undefined8 in_stack_ffffffffffffff68;
  DG_Tweening_Tween_o *t;
  undefined8 in_stack_ffffffffffffff70;
  Il2CppClass *local_78;
  Il2CppType *pIStack_70;
  System_String_Fields local_68;
  _union_13 _Stack_60;
  System_String_o local_58;
  _union_13 _Stack_40;
  MethodInfo *pMVar8;
  
  if (DAT_057013b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_init_method_metadata(&MethodInfo_Void__ShowPrepared_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass29_0);
    il2cpp_init_method_metadata(&"oldRoot=");
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&" oldExit=");
    il2cpp_init_method_metadata(&"ScreenRouter.ShowPrepared");
    DAT_057013b2 = '\x01';
  }
  local_68 = (System_String_Fields)0x0;
  _Stack_60 = (_union_13)0x0;
  local_78 = (Il2CppClass *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  uVar10 = 0;
  __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass29_0);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_02[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_02 + 1,__this);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_00.fields._area._7_1_ = uVar10;
  __this_00.fields._area._0_7_ = in_stack_ffffffffffffff58;
  __this_00.fields._detail = (System_String_o *)screen;
  __this_00.fields._startMs = in_stack_ffffffffffffff68;
  __this_00.fields._enabled = (int)in_stack_ffffffffffffff70;
  __this_00.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_00,&local_58,"ScreenRouter.ShowPrepared",(MethodInfo *)id);
  local_68 = local_58.fields;
  _Stack_60.methodMetadataHandle = _Stack_40.methodMetadataHandle;
  local_78 = (Il2CppClass *)local_58.klass;
  pIStack_70 = local_58.monitor;
  ppvVar9 = &__this_02[1].monitor;
  __this_02[1].monitor = (__this->fields)._active;
  il2cpp_runtime_glue(ppvVar9);
  if (*ppvVar9 == (void *)0x0) {
    x = (UnityEngine_Object_o *)0x0;
  }
  else {
    x = *(UnityEngine_Object_o **)((long)*ppvVar9 + 0x18);
  }
  (__this->fields)._active = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  il2cpp_runtime_glue();
  (__this->fields)._activeId = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._activeId);
  view = *ppvVar9;
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pDVar4 = (DG_Tweening_Tween_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar5 = "oldRoot=";
  area = "ScreenRouter.ShowPrepared";
  str1 = "null";
  if ((char)bVar3 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    str1 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
  }
  uVar10 = pDVar4 != (DG_Tweening_Tween_o *)0x0;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  str3 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff5f,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat(pSVar5,str1," oldExit=",str3,(MethodInfo *)0x0);
  pMVar8 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar8 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar5,pMVar8);
  t = pDVar4;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar7 = pDVar4 == (DG_Tweening_Tween_o *)0x0 | (byte)bVar3;
  pMVar8 = (MethodInfo *)CONCAT71((int7)((ulong)str3 >> 8),bVar7);
  if (bVar7 != 0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,pMVar8);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView(__this,*ppvVar9,method_00);
    goto LAB_03ae3b3f;
  }
  method_01 = extraout_RDX_01;
  if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
    il2cpp_init_class();
    method_01 = extraout_RDX_02;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked
            ((UnityEngine_GameObject_o *)x,1,method_01);
  (__this->fields)._outgoingView = *ppvVar9;
  il2cpp_runtime_glue(&(__this->fields)._outgoingView);
  (__this->fields)._outgoingExit = pDVar4;
  il2cpp_runtime_glue(&(__this->fields)._outgoingExit);
  pUVar2 = (__this->fields)._runner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_03ae3ad7:
    pUVar6 = (UnityEngine_Coroutine_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto LAB_03ae3ad7;
    pUVar2 = (__this->fields)._runner;
    routine = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame
                        (__this,screen,id,pMVar8);
    if (pUVar2 == (UnityEngine_MonoBehaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar6 = UnityEngine_MonoBehaviour__StartCoroutine(pUVar2,routine,(MethodInfo *)0x0);
  }
  (__this->fields)._pendingActivation = pUVar6;
  il2cpp_runtime_glue(&(__this->fields)._pendingActivation);
  if ((__this->fields)._pendingActivation == (UnityEngine_Coroutine_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate(__this,screen,id,pMVar8);
  }
  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__OnComplete<object>((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
LAB_03ae3b3f:
  __this_01.fields._area._7_1_ = uVar10;
  __this_01.fields._area._0_7_ = in_stack_ffffffffffffff58;
  __this_01.fields._detail = (System_String_o *)screen;
  __this_01.fields._startMs = (int64_t)t;
  __this_01.fields._24_8_ = __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_78);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ActivateNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x3ae4900

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ActivateNextFrame
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,System_String_o *id,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057013b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ActivateNextFrame_d__30);
    DAT_057013b3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ActivateNextFrame_d__30);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = screen;
    il2cpp_runtime_glue(&__this_00[2].monitor,screen);
    __this_00[3].klass = (Il2CppClass *)id;
    il2cpp_runtime_glue(__this_00 + 3,id);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CloseActive
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, DG_Tweening_TweenCallback_o* afterClose, const MethodInfo* method);
// 0x3ae3e50

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CloseActive
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,
               DG_Tweening_TweenCallback_o *afterClose,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_Object_o *x;
  void *pvVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  Gisketch_Aottg2UI_Building_GisketchView_o **ppGVar4;
  
  if (DAT_057013b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_init_method_metadata(&MethodInfo_Void__CloseActive_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass31_0);
    DAT_057013b4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass31_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_03ae4013;
  __this_00[1].monitor = afterClose;
  il2cpp_runtime_glue(&__this_00[1].monitor);
  pGVar1 = (__this->fields)._active;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(pGVar1->fields)._Root_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      ppGVar4 = &(__this->fields)._active;
      if (*ppGVar4 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        __this_00[1].klass = (Il2CppClass *)((*ppGVar4)->fields)._Root_k__BackingField;
        il2cpp_runtime_glue(__this_00 + 1);
        pGVar1 = *ppGVar4;
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_init_class();
        }
        t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(pGVar1,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        if (t == (DG_Tweening_Tween_o *)0x0) {
          if (action == (DG_Tweening_TweenCallback_o *)0x0) goto LAB_03ae4013;
          (*(code *)(action->fields).invoke_impl)
                    ((action->fields).method_code,(action->fields).method);
        }
        else {
          DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                    ((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
        }
        *ppGVar4 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        il2cpp_runtime_glue(ppGVar4,0);
        return;
      }
LAB_03ae4013:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  pvVar2 = __this_00[1].monitor;
  if (pvVar2 != (void *)0x0) {
    (**(code **)((long)pvVar2 + 0x18))
              (*(undefined8 *)((long)pvVar2 + 0x40),*(undefined8 *)((long)pvVar2 + 0x28));
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Activate
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Activate (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, System_String_o* id, const MethodInfo* method);
// 0x3ae41a0

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
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar7;
  System_String_o *str1;
  System_String_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
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
  MethodInfo *pMVar10;
  undefined8 in_stack_ffffffffffffff78;
  System_String_o *in_stack_ffffffffffffff80;
  Il2CppMethodPointer pIVar11;
  Il2CppClass *pIVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppType *pIVar14;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  if (DAT_057013b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"play enter");
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"build view done root=");
    il2cpp_init_method_metadata(&"build view start");
    il2cpp_init_method_metadata(&"ScreenRouter.Activate");
    il2cpp_init_method_metadata(&"screen shown event");
    il2cpp_init_method_metadata(&"skip pending mismatch pending=");
    DAT_057013b5 = '\x01';
  }
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_00.fields._detail = in_stack_ffffffffffffff80;
  __this_00.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
  __this_00.fields._startMs = (int64_t)pIVar11;
  __this_00.fields._24_8_ = pIVar13;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_00,&local_58,"ScreenRouter.Activate",(MethodInfo *)id);
  pIVar12 = (Il2CppClass *)local_58.klass;
  pIVar14 = local_58.monitor;
  bVar6 = System_String__Equals((__this->fields)._pendingId,id,5,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._pendingId;
  if ((char)bVar6 == '\0') {
    pSVar8 = System_String__Concat("skip pending mismatch pending=",*ppSVar1,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_01;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar10 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate",pSVar8,pMVar10);
  }
  else {
    pMVar10 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar10 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","build view start",pMVar10);
    context = (__this->fields)._context;
    pUVar9 = (__this->fields)._screenLayer;
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pGVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                       (screen,pUVar9,context,(MethodInfo *)0x0);
    ppGVar2 = &(__this->fields)._active;
    (__this->fields)._active = pGVar7;
    il2cpp_runtime_glue(ppGVar2);
    pSVar8 = "build view done root=";
    str1 = "null";
    in_stack_ffffffffffffff80 = "ScreenRouter.Activate";
    if (*ppGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pUVar3 = (UnityEngine_Object_o *)((*ppGVar2)->fields)._Root_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      str1 = "null";
      if ((char)bVar6 != '\0') {
        if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar3 = (UnityEngine_Object_o *)((*ppGVar2)->fields)._Root_k__BackingField;
        if (pUVar3 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        str1 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
      }
    }
    pSVar8 = System_String__Concat(pSVar8,str1,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_03;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar10 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(in_stack_ffffffffffffff80,pSVar8,pMVar10);
    (__this->fields)._activeId = id;
    il2cpp_runtime_glue(&(__this->fields)._activeId,id);
    *ppSVar1 = (System_String_o *)0x0;
    il2cpp_runtime_glue(ppSVar1,0);
    if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = ((*ppGVar2)->fields)._Root_k__BackingField;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
    if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = ((*ppGVar2)->fields)._Root_k__BackingField;
    pMVar10 = extraout_RDX_05;
    if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar10 = extraout_RDX_06;
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked(pUVar4,0,pMVar10);
    if (*ppGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = ((*ppGVar2)->fields)._Root_k__BackingField;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar9 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Transform__SetAsLastSibling(pUVar9,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","play enter",method_00);
    pGVar7 = *ppGVar2;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(pGVar7,(MethodInfo *)0x0);
    pSVar5 = (__this->fields).ScreenShown;
    pMVar10 = extraout_RDX_07;
    if (pSVar5 != (System_Action_string__GisketchView__o *)0x0) {
      (*(code *)(pSVar5->fields).invoke_impl)
                ((pSVar5->fields).method_code,id,*ppGVar2,(pSVar5->fields).method);
      pMVar10 = extraout_RDX_08;
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar10 = extraout_RDX_09;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenRouter.Activate","screen shown event",pMVar10);
  }
  __this_01.fields._detail = in_stack_ffffffffffffff80;
  __this_01.fields._area = (System_String_o *)in_stack_ffffffffffffff78;
  __this_01.fields._startMs = (int64_t)pIVar12;
  __this_01.fields._24_8_ = pIVar14;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelTransition
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, const MethodInfo* method);
// 0x3ae3610

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelTransition
               (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  DG_Tweening_Tween_o **ppDVar2;
  UnityEngine_MonoBehaviour_o *pUVar3;
  bool_conflict bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  DG_Tweening_Tween_o *t;
  
  if (DAT_057013b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013b6 = '\x01';
  }
  ppUVar1 = &(__this->fields)._pendingActivation;
  if ((__this->fields)._pendingActivation != (UnityEngine_Coroutine_o *)0x0) {
    pUVar3 = (__this->fields)._runner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar3 = (__this->fields)._runner;
      if (pUVar3 == (UnityEngine_MonoBehaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_MonoBehaviour__StopCoroutine(pUVar3,*ppUVar1,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._pendingActivation = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(ppUVar1);
  ppDVar2 = &(__this->fields)._outgoingExit;
  t = (__this->fields)._outgoingExit;
  method_00 = extraout_RDX;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    bVar4 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
    if ((char)bVar4 != '\0') {
      t = *ppDVar2;
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
    }
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView
            ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)t,(__this->fields)._outgoingView,
             method_00);
  (__this->fields)._outgoingExit = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_glue(ppDVar2,0);
  (__this->fields)._outgoingView = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._outgoingView,0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyView
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyView (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3ae4740

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
  
  if (DAT_057013b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013b7 = '\x01';
  }
  if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    x = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      root = (view->fields)._Root_k__BackingField;
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
        il2cpp_init_class();
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
// 0x3ae47e0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__SetInputLocked
               (UnityEngine_GameObject_o *root,bool_conflict locked,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_CanvasGroup_o *__this;
  uint value;
  
  if (DAT_057013b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013b8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    __this = (UnityEngine_CanvasGroup_o *)
             UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      __this = (UnityEngine_CanvasGroup_o *)
               UnityEngine_GameObject__AddComponent<object>(root,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      return;
    }
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      value = (uint)(byte)((byte)locked ^ 1);
      UnityEngine_CanvasGroup__set_interactable(__this,value,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyRoot
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3ae40d0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057013b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013b9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar1 == '\0') {
    UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3ae49d0

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057013ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013ba = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_0570136e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570136e = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)
                    *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor (const MethodInfo* method);
// 0x3ae4b10

void Gisketch_Aottg2UI_Routing_GisketchScreenRouter___cctor(MethodInfo *method)

{
  intptr_t iVar1;
  
  if (DAT_057013bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&"Gisketch.ScreenRouter.ShowScreen");
    DAT_057013bb = '\x01';
  }
  iVar1 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker
                    ("Gisketch.ScreenRouter.ShowScreen",1,0,0,(MethodInfo *)0x0);
  **(intptr_t **)(TypeInfo_GisketchScreenRouter + 0xb8) = iVar1;
  return;
}


