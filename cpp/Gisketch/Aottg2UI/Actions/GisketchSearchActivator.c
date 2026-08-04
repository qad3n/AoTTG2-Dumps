// Type: Gisketch.Aottg2UI.Actions.GisketchSearchActivator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchActivator.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3b97c40

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$<Activate>g__OnScreenShown|0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___Activate_g__OnScreenShown_0 (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, System_String_o* screenId, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b981c0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___Activate_g__OnScreenShown_0
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this,
               System_String_o *screenId,Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  bool_conflict bVar3;
  System_Action_string__GisketchView__o *value;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  
  if (g_data_057a9f0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_GisketchView);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Activate_g__OnScreenShown_0);
    g_data_057a9f0a = '\x01';
  }
  pGVar1 = (__this->fields).entry;
  if (pGVar1 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar3 = System_String__Equals_3af50f0
                      (screenId,(pGVar1->fields)._ScreenId_k__BackingField,5,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar2 = (__this->fields).root;
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                  (pGVar2->fields)._Manifest_k__BackingField;
      value = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string_GisketchView);
      method_00 = (MethodInfo *)0x0;
      System_Action_object__object____ctor();
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown(__this_00,value,(MethodInfo *)0x0);
        pGVar2 = (__this->fields).root;
        routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                            ((__this->fields).entry,pGVar2,view,method_00);
        if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pGVar2,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b97cf0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b982b0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b982c0

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar2;
  Il2CppClass *pIVar3;
  bool_conflict bVar4;
  Il2CppObject *__this_00;
  undefined8 unaff_RBX;
  Il2CppObject *pIVar5;
  
  if (g_data_057a9f0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f0b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    x = (__this->fields).root;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return 0;
    }
    pGVar2 = (__this->fields).view;
    if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pIVar3 = (Il2CppClass *)(__this->fields).entry;
      if (g_data_057a9f05 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FocusInView_d__5);
        g_data_057a9f05 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FocusInView_d__5);
      pIVar5 = __this_00;
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = pIVar3;
        il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar3);
        __this_00[2].monitor = pGVar2;
        il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pGVar2);
        *(undefined1 *)&__this_00[3].klass = 1;
        (__this->fields).__2__current = __this_00;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
        (__this->fields).__1__state = 2;
        return 1;
      }
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)pIVar5[1].monitor;
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b98420

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b98430

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b98470

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b97da0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b98480

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b98490

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar4;
  Il2CppRGCTXData *pIVar5;
  UnityEngine_CanvasGroup_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  int iVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGVar8;
  UnityEngine_GameObject_o *pUVar9;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_RectTransform_o *__this_01;
  System_Type_array *components;
  System_Type_o *pSVar14;
  long lVar15;
  Il2CppClass *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Canvas_o *__this_04;
  Il2CppObject *pIVar16;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Sequence_o *pDVar17;
  DG_Tweening_TweenCallback_float__o *pDVar18;
  DG_Tweening_Tweener_o *pDVar19;
  DG_Tweening_Tween_o *pDVar20;
  uint *method_00;
  uint extraout_EDX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined8 unaff_RBX;
  MethodInfo *pMVar21;
  MethodInfo *method_01;
  System_String_array *unaff_R12;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Rect_o UVar27;
  UnityEngine_Rect_o rect_00;
  UnityEngine_Rect_o rect_01;
  UnityEngine_Rect_o rect_02;
  float fStack_118;
  float fStack_114;
  float fStack_f8;
  float fStack_f4;
  UnityEngine_Bounds_o UStack_88;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGStack_70;
  System_String_array *pSStack_68;
  
  if (g_data_057a9f0c == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9f0c = '\x01';
    in_RDX = extraout_RDX;
  }
  method_00 = &switchD_03b984d3::switchdataD_00d20584;
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pGVar4 = (__this->fields).entry;
    if (pGVar4 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      return 0;
    }
    if ((__this->fields).view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return 0;
    }
    pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
              (pGVar4->fields)._SectionId_k__BackingField;
    pMVar21 = (MethodInfo *)0x0;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pGVar10,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pGVar3 = (__this->fields).view;
      if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_03b989c1;
      pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)(pGVar3->fields)._Root_k__BackingField
      ;
      unaff_R12 = (System_String_array *)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar21 = (MethodInfo *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pGVar3 = (__this->fields).view;
        if ((pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
           (method_00 = (uint *)(__this->fields).entry,
           (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)method_00 ==
           (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) goto label_03b989c1;
        pUVar9 = (pGVar3->fields)._Root_k__BackingField;
        pIVar5 = ((_union_13 *)
                 &(((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)method_00)->fields).
                  _SectionId_k__BackingField)->rgctx_data;
        if (g_data_057a9f16 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9f16 = '\x01';
        }
        pGVar8 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator(pUVar9,pMVar21);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar21 = (MethodInfo *)0x0;
        pGVar10 = pGVar8;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if (pGVar8 == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) goto label_03b989c1;
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_3a99f70
                    (pGVar8,(System_String_o *)pIVar5,1,(MethodInfo *)method_00);
        }
      }
    }
    (__this->fields)._target_5__2 = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._target_5__2,0);
    (__this->fields)._i_5__3 = 0;
    in_RDX = extraout_RDX_00;
label_03b9873e:
    pUVar9 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                       ((__this->fields).entry,(__this->fields).view,in_RDX);
    (__this->fields)._target_5__2 = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._target_5__2);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)pUVar13 >> 8),1);
    }
    goto label_03b9878b;
  case 1:
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__3 + 1;
    (__this->fields)._i_5__3 = iVar6;
    if (iVar6 < 0x10) goto label_03b9873e;
label_03b9878b:
    pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)(__this->fields)._target_5__2;
    unaff_R12 = (System_String_array *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar21 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return 0;
    }
    pGVar4 = (__this->fields).entry;
    if (pGVar4 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
                (pGVar4->fields)._SectionId_k__BackingField;
      pMVar21 = (MethodInfo *)0x0;
      bVar7 = System_String__IsNullOrEmpty((System_String_o *)pGVar10,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pGVar3 = (__this->fields).view;
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_03b989c1;
        pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
                  (pGVar3->fields)._Root_k__BackingField;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar21 = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pGVar3 = (__this->fields).view;
          if ((pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
             (method_00 = (uint *)(__this->fields).entry,
             (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)method_00 ==
             (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) goto label_03b989c1;
          pUVar9 = (pGVar3->fields)._Root_k__BackingField;
          pIVar5 = ((_union_13 *)
                   &(((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)method_00)->fields).
                    _SectionId_k__BackingField)->rgctx_data;
          if (g_data_057a9f16 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9f16 = '\x01';
          }
          pGVar8 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator(pUVar9,pMVar21);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar21 = (MethodInfo *)0x0;
          pGVar10 = pGVar8;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (pGVar8 == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) goto label_03b989c1;
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_3a99f70
                      (pGVar8,(System_String_o *)pIVar5,1,(MethodInfo *)method_00);
          }
        }
      }
      unaff_R12 = (System_String_array *)(__this->fields).entry;
      pGVar3 = (__this->fields).view;
      if (g_data_057a9f06 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RevealUntilVisible_d__6);
        g_data_057a9f06 = '\x01';
      }
      pGVar8 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealUntilVisible_d__6);
      pMVar21 = (MethodInfo *)0x0;
      pGVar10 = pGVar8;
      System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
      *(int32_t *)&(pGVar8->fields).m_CachedPtr = 0;
      if (pGVar8 != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
        (pGVar8->fields)._sectionIds = unaff_R12;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields)._sectionIds,unaff_R12);
        (pGVar8->fields)._prefix = (System_String_o *)pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields)._prefix,pGVar3);
        (__this->fields).__2__current = (Il2CppObject *)pGVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pGVar8);
        (__this->fields).__1__state = 2;
        return (bool_conflict)CONCAT71((int7)((ulong)pGVar8 >> 8),1);
      }
    }
label_03b989c1:
    il2cpp_runtime_helper_022b2c90();
    method_01 = pMVar21;
    if (g_data_057a9f16 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9f16 = '\x01';
    }
    pGVar10 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator
                        ((UnityEngine_GameObject_o *)pGVar10,method_01);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar8 = pGVar10;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return bVar7;
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_3a99f70
                (pGVar10,(System_String_o *)pMVar21,extraout_EDX & 0xff,(MethodInfo *)method_00);
      return extraout_EAX;
    }
    il2cpp_runtime_helper_022b2c90();
    pGStack_70 = pGVar10;
    pSStack_68 = unaff_R12;
    if (g_data_057a9f10 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponentInParent_Canvas);
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnKill_Sequence);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass1_0);
      il2cpp_runtime_helper_023445d0(&"AoTTG Search Spotlight");
      g_data_057a9f10 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass1_0);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar12 = (UnityEngine_Transform_o *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_03b98bda:
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar13 = (UnityEngine_Object_o *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (pGVar8 == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) goto label_03b99204;
        pUVar13 = (UnityEngine_Object_o *)
                  UnityEngine_GameObject__GetComponentInParent_object_
                            ((UnityEngine_GameObject_o *)pGVar8,MethodInfo_Canvas_GetComponentInParent_Canvas);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (UnityEngine_RectTransform_o *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (pUVar13 == (UnityEngine_Object_o *)0x0) goto label_03b99204;
        __this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar13,MethodInfo_RectTransform_GetComponent_RectTransform);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return bVar7;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return bVar7;
      }
      components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      handle.fields.value = TypeRef_RectTransform.fields.value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (components == (System_Type_array *)0x0) goto label_03b99204;
      if ((pSVar14 != (System_Type_o *)0x0) &&
         (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14,(((components->obj).klass)->_1).element_class), lVar15 == 0))
      goto label_03b9920e;
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar14;
        il2cpp_runtime_helper_022b4080(components->m_Items,pSVar14);
        __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440
                  ((UnityEngine_GameObject_o *)__this_02,"AoTTG Search Spotlight",components,(MethodInfo *)0x0);
        if (pIVar11 != (Il2CppObject *)0x0) {
          pIVar2 = pIVar11 + 1;
          pIVar11[1].klass = __this_02;
          il2cpp_runtime_helper_022b4080(pIVar2);
          if (((pIVar11[1].klass != (Il2CppClass *)0x0) &&
              (__this_03 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pIVar11[1].klass,(MethodInfo *)0x0),
              pUVar13 != (UnityEngine_Object_o *)0x0)) &&
             (parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
             __this_03 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_4e09e30(__this_03,parent,0,(MethodInfo *)0x0);
            if (pIVar2->klass != (Il2CppClass *)0x0) {
              pMVar21 = MethodInfo_RectTransform_GetComponent_RectTransform;
              rect = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)pIVar2->klass,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
              Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,pMVar21);
              if ((pIVar2->klass != (Il2CppClass *)0x0) &&
                 (__this_04 = (UnityEngine_Canvas_o *)
                              UnityEngine_GameObject__AddComponent_object_
                                        ((UnityEngine_GameObject_o *)pIVar2->klass,MethodInfo_Canvas_AddComponent_Canvas),
                 __this_04 != (UnityEngine_Canvas_o *)0x0)) {
                UnityEngine_Canvas__set_overrideSorting(__this_04,1,(MethodInfo *)0x0);
                UnityEngine_Canvas__set_sortingOrder(__this_04,900,(MethodInfo *)0x0);
                if (pIVar2->klass != (Il2CppClass *)0x0) {
                  pIVar16 = UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)pIVar2->klass,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
                  pIVar11[1].monitor = pIVar16;
                  il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor);
                  if (pIVar11[1].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
                    UnityEngine_CanvasGroup__set_blocksRaycasts(pIVar11[1].monitor,0,(MethodInfo *)0x0);
                    __this_00 = pIVar11[1].monitor;
                    if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
                      UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
                      if (g_data_057a9f11 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                        g_data_057a9f11 = '\x01';
                      }
                      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                                (&UStack_88,(UnityEngine_Transform_o *)__this_01,pUVar12,(MethodInfo *)0x0);
                      if ((pIVar2->klass != (Il2CppClass *)0x0) &&
                         (pUVar12 = UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pIVar2->klass,(MethodInfo *)0x0),
                         __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                        fStack_f8 = UStack_88.fields.m_Center.fields.x;
                        fStack_f4 = UStack_88.fields.m_Center.fields.y;
                        fStack_118 = UStack_88.fields.m_Extents.fields.x;
                        fStack_114 = UStack_88.fields.m_Extents.fields.y;
                        fVar24 = (fStack_f8 - fStack_118) + -10.0;
                        fVar25 = (fStack_f4 - fStack_114) + -10.0;
                        pMVar21 = (MethodInfo *)0x0;
                        UVar27 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
                        fVar22 = UVar27.fields.m_XMin;
                        fVar26 = ((fStack_114 + fStack_f4 + 10.0) - fVar25) + fVar25;
                        fVar23 = fVar22 + UVar27.fields.m_Width;
                        rect_00.fields.m_Width = fVar23 - fVar22;
                        rect_00.fields.m_YMin = fVar26;
                        rect_00.fields.m_XMin = fVar22;
                        rect_00.fields.m_Height = (UVar27.fields.m_Height + UVar27.fields.m_YMin) - fVar26;
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar12,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_00,
                                   pMVar21);
                        rect_01.fields.m_Height = fVar25 - UVar27.fields.m_YMin;
                        rect_01.fields.m_Width = rect_00.fields.m_Width;
                        rect_01.fields.m_XMin = (float)(int)UVar27.fields._0_8_;
                        rect_01.fields.m_YMin = (float)(int)((ulong)UVar27.fields._0_8_ >> 0x20);
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar12,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_01,
                                   pMVar21);
                        UVar27.fields.m_Width = fVar24 - fVar22;
                        UVar27.fields.m_YMin = fVar25;
                        UVar27.fields.m_XMin = fVar22;
                        UVar27.fields.m_Height = fVar26 - fVar25;
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar12,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),UVar27,
                                   pMVar21);
                        fVar24 = ((fStack_f8 + fStack_118 + 10.0) - fVar24) + fVar24;
                        rect_02.fields.m_Width = fVar23 - fVar24;
                        rect_02.fields.m_YMin = fVar25;
                        rect_02.fields.m_XMin = fVar24;
                        rect_02.fields.m_Height = fVar26 - fVar25;
                        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                  (pUVar12,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_02,
                                   pMVar21);
                        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                        DG_Tweening_TweenCallback___ctor();
                        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pDVar17 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                        pDVar18 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                        DG_Tweening_TweenCallback_float____ctor();
                        pDVar19 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,pDVar18,(MethodInfo *)0x0);
                        pDVar17 = DG_Tweening_TweenSettingsExtensions__Append
                                            (pDVar17,(DG_Tweening_Tween_o *)pDVar19,(MethodInfo *)0x0);
                        pDVar17 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                            (pDVar17,0.18,(MethodInfo *)0x0);
                        pDVar18 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                        DG_Tweening_TweenCallback_float____ctor();
                        pDVar19 = DG_Tweening_DOVirtual__Float(1.0,0.0,0.18,pDVar18,(MethodInfo *)0x0);
                        pDVar17 = DG_Tweening_TweenSettingsExtensions__Append
                                            (pDVar17,(DG_Tweening_Tween_o *)pDVar19,(MethodInfo *)0x0);
                        pIVar11 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                            ((Il2CppObject *)pDVar17,1,MethodInfo_Sequence_SetUpdate_Sequence);
                        pIVar11 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                            (pIVar11,action,MethodInfo_Sequence_OnComplete_Sequence);
                        pDVar20 = (DG_Tweening_Tween_o *)
                                  DG_Tweening_TweenSettingsExtensions__OnKill_object_
                                            (pIVar11,action,MethodInfo_Sequence_OnKill_Sequence);
                        if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pDVar20 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                            (pDVar20,0,(MethodInfo *)0x0);
                        return (bool_conflict)pDVar20;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_03b99204;
      }
    }
    else {
      if (pGVar8 != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
        pUVar12 = (UnityEngine_Transform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pGVar8,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        goto label_03b98bda;
      }
label_03b99204:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2ca0();
label_03b9920e:
    lVar15 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(lVar15,0);
    return (bool_conflict)*(undefined8 *)(lVar15 + 0x18);
  case 2:
    (__this->fields).__1__state = -1;
    if ((char)(__this->fields).playSpotlight != '\0') {
      if (g_data_057a9f07 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForMotion_d__7);
        g_data_057a9f07 = '\x01';
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForMotion_d__7);
      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar11[1].klass = 0;
      (__this->fields).__2__current = pIVar11;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar11);
      (__this->fields).__1__state = 3;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar11 >> 8),1);
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    unaff_R12 = (System_String_array *)(__this->fields).entry;
    pGVar3 = (__this->fields).view;
    if (g_data_057a9f06 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RevealUntilVisible_d__6);
      g_data_057a9f06 = '\x01';
    }
    pGVar8 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealUntilVisible_d__6);
    pMVar21 = (MethodInfo *)0x0;
    pGVar10 = pGVar8;
    System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
    *(int32_t *)&(pGVar8->fields).m_CachedPtr = 0;
    if (pGVar8 != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
      (pGVar8->fields)._sectionIds = unaff_R12;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields)._sectionIds,unaff_R12);
      (pGVar8->fields)._prefix = (System_String_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields)._prefix,pGVar3);
      (__this->fields).__2__current = (Il2CppObject *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pGVar8);
      (__this->fields).__1__state = 4;
      return (bool_conflict)CONCAT71((int7)((ulong)pGVar8 >> 8),1);
    }
    goto label_03b989c1;
  case 4:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 5;
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  case 5:
    (__this->fields).__1__state = -1;
    pUVar9 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                       ((__this->fields).entry,(__this->fields).view,in_RDX);
    ppUVar1 = &(__this->fields)._target_5__2;
    (__this->fields)._target_5__2 = pUVar9;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar21 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return 0;
    }
    bVar7 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(*ppUVar1,pMVar21);
    if ((char)bVar7 != '\0') {
      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play(*ppUVar1,pMVar21);
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b99220

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b99230

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b99270

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b97e40

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b99280

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b99290

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
          MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  bool_conflict bVar3;
  
  if (g_data_057a9f0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f0d = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if (8 < iVar1) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                ((__this->fields).entry,(__this->fields).view,in_RDX);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = 0;
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus((UnityEngine_GameObject_o *)x,method_00);
    bVar3 = 0;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible((UnityEngine_GameObject_o *)x,method_00);
    if ((char)bVar2 == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b99500

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b99510

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b99550

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b97eb0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b99560

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b99570

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (g_data_057a9f0e == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9f0e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = *(int *)(TypeInfo_GisketchMotionDriver + 0xe4);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    fVar4 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    (__this->fields)._start_5__2 = fVar4;
    iVar1 = *(int *)(TypeInfo_GisketchMotionDriver + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = 0;
  bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    bVar3 = 0;
    fVar4 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    if (fVar4 - (__this->fields)._start_5__2 < 0.35) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b99650

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b99660

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b996a0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b90030

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,Gisketch_Aottg2UI_GisketchUIRoot_o *root
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root_00;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  System_Action_string__GisketchView__Fields *pSVar3;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o **ppGVar4;
  bool_conflict bVar5;
  System_Action_string__GisketchView__o *pSVar6;
  System_Collections_IEnumerator_o *routine;
  System_Action_string__GisketchView__o *value;
  System_Collections_Generic_List_object__o *pSVar7;
  MethodInfo *in_RCX;
  System_Action_string__GisketchView__o *__this_00;
  
  if (g_data_057a9f03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_GisketchView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Activate_g__OnScreenShown_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    g_data_057a9f03 = '\x01';
  }
  pSVar6 = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_00 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (pSVar6 != (System_Action_string__GisketchView__o *)0x0) {
    pSVar3 = &pSVar6->fields;
    (pSVar6->fields).method_ptr = (intptr_t)entry;
    il2cpp_runtime_helper_022b4080(pSVar3,entry);
    ppGVar4 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o **)&(pSVar6->fields).invoke_impl;
    (pSVar6->fields).invoke_impl = (intptr_t)root;
    il2cpp_runtime_helper_022b4080(ppGVar4);
    if ((UnityEngine_MonoBehaviour_o *)(pSVar6->fields).method_ptr == (UnityEngine_MonoBehaviour_o *)0x0) {
      return;
    }
    __this_00 = (System_Action_string__GisketchView__o *)*ppGVar4;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (*ppGVar4 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      if ((*ppGVar4)[1].fields.Registry == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
        return;
      }
      if ((UnityEngine_MonoBehaviour_o *)pSVar3->method_ptr != (UnityEngine_MonoBehaviour_o *)0x0) {
        __this_00 = (System_Action_string__GisketchView__o *)
                    ((UnityEngine_MonoBehaviour_o *)pSVar3->method_ptr)[1].klass;
        bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_00,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if ((((UnityEngine_MonoBehaviour_o *)pSVar3->method_ptr == (UnityEngine_MonoBehaviour_o *)0x0) ||
              (*ppGVar4 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) ||
             (pGVar1 = (*ppGVar4)[1].fields.Registry,
             pGVar1 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0)) goto label_03b90241;
          __this_00 = (System_Action_string__GisketchView__o *)
                      ((UnityEngine_MonoBehaviour_o *)pSVar3->method_ptr)[1].klass;
          in_RCX = (MethodInfo *)0x0;
          bVar5 = System_String__Equals_3af50f0
                            ((System_String_o *)__this_00,(System_String_o *)pGVar1[2].klass,5,
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*ppGVar4 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
              pSVar6 = (System_Action_string__GisketchView__o *)(*ppGVar4)[1].fields.Registry;
              value = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string_GisketchView);
              __this_00 = value;
              System_Action_object__object____ctor();
              if (pSVar6 != (System_Action_string__GisketchView__o *)0x0) {
                Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown
                          ((Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)pSVar6,value,(MethodInfo *)0x0)
                ;
                __this_00 = pSVar6;
                if ((*ppGVar4 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
                   ((UnityEngine_MonoBehaviour_o *)pSVar3->method_ptr != (UnityEngine_MonoBehaviour_o *)0x0))
                {
                  __this = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(*ppGVar4)[1].fields.Registry;
                  __this_00 = (System_Action_string__GisketchView__o *)0x0;
                  if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                              (__this,(System_String_o *)
                                      ((UnityEngine_MonoBehaviour_o *)pSVar3->method_ptr)[1].klass,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            goto label_03b90241;
          }
        }
        root_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)*ppGVar4;
        if ((root_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (pGVar2 = (root_00->fields)._Manifest_k__BackingField,
           pGVar2 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
          routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pSVar3->method_ptr,root_00,
                               (Gisketch_Aottg2UI_Building_GisketchView_o *)(pGVar2->fields).screens,in_RCX);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)root_00,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_03b90241:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ebb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchDropdownItemFeedback);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
    g_data_057a9ebb = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
  (__this_00->fields).delegate_trampoline = (intptr_t)pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).delegate_trampoline,pSVar7);
  pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchDropdownItemFeedback);
  System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
  (__this_00->fields).extra_arg = (intptr_t)pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).extra_arg);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusAfterBuild
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b97c50

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,Gisketch_Aottg2UI_GisketchUIRoot_o *root,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057a9f04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FocusAfterBuild_d__4);
    g_data_057a9f04 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FocusAfterBuild_d__4);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[3].klass = (Il2CppClass *)entry;
    il2cpp_runtime_helper_022b4080(__this + 3,entry);
    __this[2].klass = (Il2CppClass *)root;
    il2cpp_runtime_helper_022b4080(__this + 2,root);
    __this[2].monitor = view;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,view);
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusInView
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, bool playSpotlight, const MethodInfo* method);
// 0x3b97d10

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,bool_conflict playSpotlight,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057a9f05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FocusInView_d__5);
    g_data_057a9f05 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FocusInView_d__5);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)entry;
    il2cpp_runtime_helper_022b4080(__this + 2,entry);
    __this[2].monitor = view;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,view);
    *(char *)&__this[3].klass = (char)playSpotlight;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$RevealUntilVisible
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b97dc0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057a9f06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RevealUntilVisible_d__6);
    g_data_057a9f06 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RevealUntilVisible_d__6);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)entry;
    il2cpp_runtime_helper_022b4080(__this + 2,entry);
    __this[2].monitor = view;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,view);
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$WaitForMotion
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion (const MethodInfo* method);
// 0x3b97e60

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057a9f07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForMotion_d__7);
    g_data_057a9f07 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForMotion_d__7);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b97ed0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool_conflict bVar2;
  int32_t iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o *pSVar6;
  System_String_o *__this_01;
  UnityEngine_Object_o *pUVar7;
  undefined4 extraout_var;
  System_Action_string__GisketchView__o *value;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *view_00;
  int iVar9;
  Gisketch_Aottg2UI_Building_GisketchView_o *str1;
  Gisketch_Aottg2UI_Building_GisketchView_o *a;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_02;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar10;
  UnityEngine_Object_o *local_30;
  
  str1 = view;
  __this_02 = entry;
  if (g_data_057a9f08 == '\0') {
    __this_02 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9f08 = '\x01';
  }
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b98056;
  __this_02 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(entry->fields)._Target_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str1 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (entry->fields)._Target_k__BackingField;
  }
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_03b98056;
  pSVar6 = (entry->fields)._TargetId_k__BackingField;
  if (g_data_057a9e92 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9e92 = '\x01';
  }
  local_30 = (UnityEngine_Object_o *)0x0;
  str1 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Object_o *)0x0;
  if ((char)bVar2 == '\0') {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(view->fields)._elements;
    __this_02 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b98056;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)pSVar6,(Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    pUVar7 = local_30;
    if ((char)bVar2 != '\0') goto label_03b97fb1;
    pUVar7 = (UnityEngine_Object_o *)0x0;
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
label_03b97fb1:
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (UnityEngine_GameObject_o *)pUVar7;
  }
  bVar2 = System_String__IsNullOrEmpty((entry->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
  if ((char)bVar2 != '\0') {
    return (UnityEngine_GameObject_o *)pUVar7;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  str1 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar8 = extraout_RDX;
  if ((char)bVar2 != '\0') {
    pUVar5 = (view->fields)._Root_k__BackingField;
    __this_02 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
label_03b98056:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9f09 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057a9f09 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (UnityEngine_GameObject_o *)0x0;
      }
      a = str1;
      pGVar10 = "-section-";
      pSVar6 = System_String__Concat_3ae5ba0
                         ((System_String_o *)"-section-",(System_String_o *)str1,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        a = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
        pGVar10 = __this_02;
        __this_01 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
        if (__this_01 != (System_String_o *)0x0) {
          bVar2 = System_String__EndsWith_3af4a10(__this_01,pSVar6,5,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            return pUVar5;
          }
          iVar9 = 0;
          iVar3 = UnityEngine_Transform__get_childCount
                            ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
          if (iVar3 < 1) {
            return (UnityEngine_GameObject_o *)0x0;
          }
          while( true ) {
            pUVar4 = UnityEngine_Transform__GetChild
                               ((UnityEngine_Transform_o *)__this_02,iVar9,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_Object_o *)
                     Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
                               (pUVar4,(System_String_o *)str1,method_00);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar2 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') break;
            iVar9 = iVar9 + 1;
            iVar3 = UnityEngine_Transform__get_childCount
                              ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
            if (iVar3 <= iVar9) {
              return (UnityEngine_GameObject_o *)0x0;
            }
          }
          return (UnityEngine_GameObject_o *)pUVar7;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9f0a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_GisketchView);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Activate_g__OnScreenShown_0);
        g_data_057a9f0a = '\x01';
      }
      pGVar1 = (pGVar10->fields)._Node_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        bVar2 = System_String__Equals_3af50f0((System_String_o *)a,(pGVar1->fields).text,5,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar2);
        }
        pUVar5 = (pGVar10->fields)._Target_k__BackingField;
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = pUVar5[5].monitor;
          value = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string_GisketchView);
          pMVar8 = (MethodInfo *)0x0;
          System_Action_object__object____ctor();
          if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
            Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
                      (__this_00,value,(MethodInfo *)0x0);
            root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pGVar10->fields)._Target_k__BackingField;
            routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                                 (pGVar10->fields)._Node_k__BackingField,root,view_00,pMVar8);
            if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              pUVar5 = (UnityEngine_GameObject_o *)
                       UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                 ((UnityEngine_MonoBehaviour_o *)root,routine,(MethodInfo *)0x0);
              return pUVar5;
            }
          }
        }
      }
      pUVar5 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b2c90();
      return pUVar5;
    }
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_00;
  }
  pUVar5 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
                     (pUVar4,(entry->fields)._SectionId_k__BackingField,pMVar8);
  return pUVar5;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FindSection
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection (UnityEngine_Transform_o* root, System_String_o* sectionId, const MethodInfo* method);
// 0x3b98060

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
          (UnityEngine_Transform_o *root,System_String_o *sectionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this;
  System_String_c *root_00;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *value;
  System_String_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *root_01;
  UnityEngine_Object_o *x;
  undefined4 extraout_var;
  System_Action_string__GisketchView__o *value_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  int index;
  System_String_o *a;
  System_String_o *pSVar4;
  
  if (g_data_057a9f09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"-section-");
    g_data_057a9f09 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (UnityEngine_GameObject_o *)0x0;
  }
  a = sectionId;
  pSVar4 = "-section-";
  value = System_String__Concat_3ae5ba0("-section-",sectionId,(MethodInfo *)0x0);
  if (root != (UnityEngine_Transform_o *)0x0) {
    a = (System_String_o *)0x0;
    pSVar4 = (System_String_o *)root;
    __this_00 = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__EndsWith_3af4a10(__this_00,value,5,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
        return pUVar3;
      }
      index = 0;
      iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
      if (iVar2 < 1) {
        return (UnityEngine_GameObject_o *)0x0;
      }
      while( true ) {
        root_01 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection(root_01,sectionId,method_01);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') break;
        index = index + 1;
        iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
        if (iVar2 <= index) {
          return (UnityEngine_GameObject_o *)0x0;
        }
      }
      return (UnityEngine_GameObject_o *)x;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9f0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string_GisketchView);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Activate_g__OnScreenShown_0);
    g_data_057a9f0a = '\x01';
  }
  if (pSVar4->fields != (System_String_Fields)0x0) {
    bVar1 = System_String__Equals_3af50f0
                      (a,*(System_String_o **)((long)pSVar4->fields + 0x20),5,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar1);
    }
    if (pSVar4[1].klass != (System_String_c *)0x0) {
      __this = ((pSVar4[1].klass)->_1).fields;
      value_00 = (System_Action_string__GisketchView__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string_GisketchView);
      method_00 = (MethodInfo *)0x0;
      System_Action_object__object____ctor();
      if (__this != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown(__this,value_00,(MethodInfo *)0x0);
        root_00 = pSVar4[1].klass;
        routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                            ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pSVar4->fields,
                             (Gisketch_Aottg2UI_GisketchUIRoot_o *)root_00,view,method_00);
        if (root_00 != (System_String_c *)0x0) {
          pUVar3 = (UnityEngine_GameObject_o *)
                   UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             ((UnityEngine_MonoBehaviour_o *)root_00,routine,(MethodInfo *)0x0);
          return pUVar3;
        }
      }
    }
  }
  pUVar3 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar3;
}


