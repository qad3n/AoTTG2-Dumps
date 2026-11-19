// Type: Gisketch.Aottg2UI.Actions.GisketchSearchActivator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchActivator.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x53a4a20

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$<Activate>g__OnScreenShown|0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___Activate_g__OnScreenShown_0 (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, System_String_o* screenId, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x53a5340

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___Activate_g__OnScreenShown_0
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this,
               System_String_o *screenId,Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  bool bVar3;
  System_Action_string__GisketchView__o *__this_01;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this_02;
  
  if (Il2CppMethodInitialized_07542bde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
              );
    Il2CppMethodInitialized_07542bde = '\x01';
  }
  pGVar1 = (__this->fields).entry;
  if (pGVar1 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar3 = System_String__Equals_52ffe30
                      (screenId,(pGVar1->fields)._ScreenId_k__BackingField,5,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pGVar2 = (__this->fields).root;
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_00 = (pGVar2->fields)._Screens_k__BackingField;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
      System_Action_object__object____ctor
                ((System_Action_object__object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
                 ,(MethodInfo_4A89FC0 *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
                  (__this_00,__this_01,(MethodInfo *)0x0);
        pGVar1 = (__this->fields).entry;
        pGVar2 = (__this->fields).root;
        if (Il2CppMethodInitialized_07542bd6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4);
          Il2CppMethodInitialized_07542bd6 = '\x01';
        }
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4
                              );
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        (__this_02->fields).__1__state = 0;
        (__this_02->fields).entry = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).entry);
        (__this_02->fields).root = pGVar2;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).root);
        (__this_02->fields).view = view;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).view);
        if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)pGVar2,(System_Collections_IEnumerator_o *)__this_02,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x53a4ac0

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
// 0x53a54a0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x53a54b0

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar3;
  bool bVar4;
  int32_t iVar5;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_07542bdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bdf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar4 = false;
  if (iVar1 == 2) {
    iVar5 = -1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    x = (__this->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    pGVar2 = (__this->fields).view;
    if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return false;
    }
    pGVar3 = (__this->fields).entry;
    if (Il2CppMethodInitialized_07542bd7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
      Il2CppMethodInitialized_07542bd7 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).entry = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).entry);
    (__this_00->fields).view = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).view);
    (__this_00->fields).playSpotlight = true;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    bVar4 = true;
    iVar5 = 2;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    bVar4 = true;
    iVar5 = 1;
  }
  (__this->fields).__1__state = iVar5;
  return bVar4;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x53a5600

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x53a5610

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4_System_Collections_IEnume
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x53a5650

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x53a4b70

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
// 0x53a5660

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x53a5670

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar3;
  UnityEngine_Object_o *pUVar4;
  bool bVar5;
  int iVar6;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *pGVar7;
  UnityEngine_GameObject_o *pUVar8;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX_03;
  
  if (Il2CppMethodInitialized_07542be0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542be0 = '\x01';
    in_RDX = extraout_RDX;
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pGVar3 = (__this->fields).entry;
    if (pGVar3 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      return false;
    }
    if ((__this->fields).view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return false;
    }
    bVar5 = System_String__IsNullOrEmpty((pGVar3->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
    pMVar9 = extraout_RDX_00;
    if (!bVar5) {
      pGVar2 = (__this->fields).view;
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_053a5b9f;
      pUVar4 = (UnityEngine_Object_o *)(pGVar2->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar9 = extraout_RDX_01;
      if (bVar5) {
        pGVar2 = (__this->fields).view;
        if ((pGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
           (pGVar3 = (__this->fields).entry, pGVar3 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0))
        goto label_053a5b9f;
        pUVar8 = (pGVar2->fields)._Root_k__BackingField;
        pSVar1 = (pGVar3->fields)._SectionId_k__BackingField;
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
        }
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select(pUVar8,pSVar1,true,(MethodInfo *)0x0);
        pMVar9 = extraout_RDX_02;
      }
    }
    pGVar3 = (__this->fields).entry;
    if ((pGVar3 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
       (pGVar2 = (__this->fields).view, pGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0))
    goto label_053a5b9f;
    bVar5 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__PrepareTarget
                      ((pGVar3->fields)._TargetId_k__BackingField,(pGVar2->fields)._Root_k__BackingField,
                       pMVar9);
    if (bVar5) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    goto label_053a57d8;
  case 1:
    (__this->fields).__1__state = -1;
label_053a57d8:
    (__this->fields)._target_5__2 = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._target_5__2);
    (__this->fields)._i_5__3 = 0;
    in_RDX = extraout_RDX_03;
label_053a580c:
    pUVar8 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                       ((__this->fields).entry,(__this->fields).view,in_RDX);
    (__this->fields)._target_5__2 = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._target_5__2);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
label_053a5859:
      pUVar4 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        return false;
      }
      pGVar3 = (__this->fields).entry;
      if (pGVar3 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
label_053a5b9f:
        ThrowNullReferenceException();
      }
      bVar5 = System_String__IsNullOrEmpty((pGVar3->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
      if (!bVar5) {
        pGVar2 = (__this->fields).view;
        if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_053a5b9f;
        pUVar4 = (UnityEngine_Object_o *)(pGVar2->fields)._Root_k__BackingField;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pGVar2 = (__this->fields).view;
          if ((pGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
             (pGVar3 = (__this->fields).entry, pGVar3 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0
             )) goto label_053a5b9f;
          pUVar8 = (pGVar2->fields)._Root_k__BackingField;
          pSVar1 = (pGVar3->fields)._SectionId_k__BackingField;
          if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
          }
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select(pUVar8,pSVar1,true,(MethodInfo *)0x0);
        }
      }
      pGVar3 = (__this->fields).entry;
      pGVar2 = (__this->fields).view;
      if (Il2CppMethodInitialized_07542bd8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
        Il2CppMethodInitialized_07542bd8 = '\x01';
      }
      pGVar7 = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
      System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
      (pGVar7->fields).__1__state = 0;
      (pGVar7->fields).entry = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).entry);
      (pGVar7->fields).view = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).view);
      (__this->fields).__2__current = (Il2CppObject *)pGVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 3;
    }
    else {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__3 + 1;
    (__this->fields)._i_5__3 = iVar6;
    if (iVar6 < 0x10) goto label_053a580c;
    goto label_053a5859;
  case 3:
    (__this->fields).__1__state = -1;
    if ((__this->fields).playSpotlight == false) {
      return false;
    }
    if (Il2CppMethodInitialized_07542bd9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
      Il2CppMethodInitialized_07542bd9 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 4;
    break;
  case 4:
    (__this->fields).__1__state = -1;
    pGVar2 = (__this->fields).view;
    if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_053a5b9f;
    pUVar8 = (pGVar2->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar8,2,(MethodInfo *)0x0);
    pGVar3 = (__this->fields).entry;
    pGVar2 = (__this->fields).view;
    if (Il2CppMethodInitialized_07542bd8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
      Il2CppMethodInitialized_07542bd8 = '\x01';
    }
    pGVar7 = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    (pGVar7->fields).__1__state = 0;
    (pGVar7->fields).entry = pGVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).entry);
    (pGVar7->fields).view = pGVar2;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).view);
    (__this->fields).__2__current = (Il2CppObject *)pGVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 5;
    break;
  case 5:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 6;
    break;
  case 6:
    (__this->fields).__1__state = -1;
    pUVar8 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                       ((__this->fields).entry,(__this->fields).view,in_RDX);
    targetAddress = &(__this->fields)._target_5__2;
    (__this->fields)._target_5__2 = pUVar8;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar9 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      return false;
    }
    bVar5 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(*targetAddress,pMVar9);
    if (bVar5) {
      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play(*targetAddress,pMVar9);
    }
  default:
    return false;
  }
  return true;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x53a6330

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x53a6340

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5_System_Collections_IEnumerato
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x53a6380

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x53a4c10

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
// 0x53a6390

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x53a63a0

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *root;
  bool bVar2;
  int iVar3;
  UnityEngine_Object_o *x;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07542be1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542be1 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    iVar3 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar3;
    if (8 < iVar3) {
      return false;
    }
  }
  else {
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                ((__this->fields).entry,(__this->fields).view,in_RDX);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = false;
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus((UnityEngine_GameObject_o *)x,pMVar4);
    pGVar1 = (__this->fields).view;
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = (pGVar1->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = false;
    pMVar4 = (MethodInfo *)0x2;
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,2,(MethodInfo *)0x0);
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible((UnityEngine_GameObject_o *)x,pMVar4);
    if (!bVar2) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      bVar5 = true;
    }
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x53a6650

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x53a6660

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6_System_Collections_IEn
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x53a66a0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x53a4c80

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
// 0x53a66b0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x53a66c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a6784: jmp 0x53a671c

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
               MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07542be2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_07542be2 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    (__this->fields)._start_5__2 = fVar5;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar4 = false;
  bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if (bVar3) {
    bVar4 = false;
    fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    if (fVar5 - (__this->fields)._start_5__2 < 0.35) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      bVar4 = true;
    }
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x53a67a0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x53a67b0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7_System_Collections_IEnumera
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x53a67f0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x539a8f0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,Gisketch_Aottg2UI_GisketchUIRoot_o *root
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_Fields *targetAddress;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this_00;
  System_Action_string__GisketchView__o *pSVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o **targetAddress_00;
  
  if (Il2CppMethodInitialized_07542bd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0);
    Il2CppMethodInitialized_07542bd5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).entry = entry;
    Il2CppCodeGenWriteBarrier(&targetAddress->entry);
    targetAddress_00 = &(__this->fields).root;
    (__this->fields).root = root;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    if ((__this->fields).entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      return;
    }
    pGVar1 = *targetAddress_00;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      return;
    }
    if (*targetAddress_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      if (((*targetAddress_00)->fields)._Screens_k__BackingField ==
          (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        return;
      }
      if (targetAddress->entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        bVar5 = System_String__IsNullOrEmpty
                          ((targetAddress->entry->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
        if (!bVar5) {
          if (((targetAddress->entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
              (*targetAddress_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) ||
             (pGVar2 = ((*targetAddress_00)->fields)._Screens_k__BackingField,
             pGVar2 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) goto label_0539abd3;
          bVar5 = System_String__Equals_52ffe30
                            ((targetAddress->entry->fields)._ScreenId_k__BackingField,
                             (pGVar2->fields)._activeId,5,(MethodInfo *)0x0);
          if (!bVar5) {
            if (*targetAddress_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              pGVar2 = ((*targetAddress_00)->fields)._Screens_k__BackingField;
              pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
              System_Action_object__object____ctor
                        ((System_Action_object__object__o *)pSVar6,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
                         ,(MethodInfo_4A89FC0 *)0x0);
              if (pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown
                          (pGVar2,pSVar6,(MethodInfo *)0x0);
                if (((*targetAddress_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
                    (targetAddress->entry != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) &&
                   (pGVar2 = ((*targetAddress_00)->fields)._Screens_k__BackingField,
                   pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
                  bVar5 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                                    (pGVar2,(targetAddress->entry->fields)._ScreenId_k__BackingField,
                                     (MethodInfo *)0x0);
                  if (bVar5) {
                    return;
                  }
                  if (*targetAddress_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    pGVar2 = ((*targetAddress_00)->fields)._Screens_k__BackingField;
                    pSVar6 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
                    System_Action_object__object____ctor
                              ((System_Action_object__object__o *)pSVar6,(Il2CppObject *)__this,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
                               ,(MethodInfo_4A89FC0 *)0x0);
                    if (pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
                                (pGVar2,pSVar6,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            goto label_0539abd3;
          }
        }
        pGVar1 = *targetAddress_00;
        if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (pGVar2 = (pGVar1->fields)._Screens_k__BackingField,
           pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
          pGVar3 = targetAddress->entry;
          pGVar4 = (pGVar2->fields)._active;
          if (Il2CppMethodInitialized_07542bd6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4);
            Il2CppMethodInitialized_07542bd6 = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4
                                );
          System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
          (__this_00->fields).__1__state = 0;
          (__this_00->fields).entry = pGVar3;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).entry);
          (__this_00->fields).root = pGVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).root);
          (__this_00->fields).view = pGVar4;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).view);
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)pGVar1,(System_Collections_IEnumerator_o *)__this_00,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0539abd3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusAfterBuild
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x53a4a30

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,Gisketch_Aottg2UI_GisketchUIRoot_o *root,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this;
  
  if (Il2CppMethodInitialized_07542bd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4);
    Il2CppMethodInitialized_07542bd6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).entry);
  (__this->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root);
  (__this->fields).view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).view);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusInView
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, bool playSpotlight, const MethodInfo* method);
// 0x53a4ae0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,bool playSpotlight,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this;
  
  if (Il2CppMethodInitialized_07542bd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
    Il2CppMethodInitialized_07542bd7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).entry);
  (__this->fields).view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).view);
  (__this->fields).playSpotlight = playSpotlight;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$RevealUntilVisible
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x53a4b90

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this;
  
  if (Il2CppMethodInitialized_07542bd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
    Il2CppMethodInitialized_07542bd8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).entry);
  (__this->fields).view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).view);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$WaitForMotion
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion (const MethodInfo* method);
// 0x53a4c30

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this;
  
  if (Il2CppMethodInitialized_07542bd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
    Il2CppMethodInitialized_07542bd9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x53a4ca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a4e57: jmp 0x53a4d8e

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Transform_o *root;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  UnityEngine_Object_o *local_30;
  
  if (Il2CppMethodInitialized_07542bda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bda = '\x01';
  }
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_053a4e5c;
  pUVar3 = (UnityEngine_Object_o *)(entry->fields)._Target_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (entry->fields)._Target_k__BackingField;
  }
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_053a4e5c;
  value = (entry->fields)._TargetId_k__BackingField;
  if (Il2CppMethodInitialized_07542b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    Il2CppMethodInitialized_07542b42 = '\x01';
  }
  local_30 = (UnityEngine_Object_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)0x0;
  if (bVar2) {
label_053a4d81:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(view->fields)._elements;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_053a4e5c;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)value,(Il2CppObject **)&local_30,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    if (bVar2) {
      pUVar3 = local_30;
      goto label_053a4d81;
    }
    pUVar3 = (UnityEngine_Object_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar3 = (UnityEngine_Object_o *)
             Gisketch_Aottg2UI_Actions_GisketchSearchActivator__MaterializeTarget
                       ((entry->fields)._TargetId_k__BackingField,(view->fields)._Root_k__BackingField,
                        method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__IsNullOrEmpty((entry->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
      if (!bVar2) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        root = (UnityEngine_Transform_o *)0x0;
        bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        method_01 = extraout_RDX;
        if (bVar2) {
          __this_00 = (view->fields)._Root_k__BackingField;
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_053a4e5c:
            ThrowNullReferenceException();
          }
          root = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          method_01 = extraout_RDX_00;
        }
        pUVar3 = (UnityEngine_Object_o *)
                 Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
                           (root,(entry->fields)._SectionId_k__BackingField,method_01);
      }
    }
  }
  return (UnityEngine_GameObject_o *)pUVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$MaterializeTarget
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__MaterializeTarget (System_String_o* targetId, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53a4e70

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__MaterializeTarget
          (System_String_o *targetId,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar7;
  long lVar8;
  ulong uVar9;
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07542bdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bdb = '\x01';
  }
  local_38 = (UnityEngine_Object_o *)0x0;
  bVar4 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if (root != (UnityEngine_GameObject_o *)0x0) {
        pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object_
                           (root,true,
                            (MethodInfo_353C0B0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour);
        if (pSVar5 != (System_Object_array *)0x0) {
          if (0 < (int)pSVar5->max_length) {
            uVar6 = pSVar5->max_length & 0xffffffff;
            uVar9 = 0;
            do {
              if (uVar6 <= uVar9) {
                ThrowIndexOutOfRangeException();
              }
              obj = il2cpp_vm_Object_IsInst
                              (pSVar5->m_Items[uVar9],
                               (Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer);
              if (obj != (Il2CppObject *)0x0) {
                pIVar2 = obj->klass;
                uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
                if (uVar6 != 0) {
                  pIVar3 = (pIVar2->_1).interfaceOffsets;
                  lVar8 = 0;
                  do {
                    if (*(Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer_c **)
                         ((long)&pIVar3->interfaceType + lVar8) ==
                        TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer) {
                      pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
                      goto label_053a4ff2;
                    }
                    lVar8 = lVar8 + 0x10;
                  } while (uVar6 * 0x10 != lVar8);
                }
                pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                                   (obj,(Il2CppClass *)
                                        TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer,0
                                   );
label_053a4ff2:
                bVar4 = (*pVVar7->methodPtr)
                                  (obj,targetId,(UnityEngine_GameObject_o **)&local_38,pVVar7->method);
                x = local_38;
                if (bVar4) {
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar4) {
                    return (UnityEngine_GameObject_o *)local_38;
                  }
                }
              }
              uVar9 = uVar9 + 1;
              uVar1 = (uint)pSVar5->max_length;
              uVar6 = (ulong)uVar1;
            } while ((long)uVar9 < (long)(int)uVar1);
          }
          return (UnityEngine_GameObject_o *)0x0;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$PrepareTarget
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__PrepareTarget (System_String_o* targetId, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53a51b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a52ed: nop dword ptr [rax]
// asm:   0x53a52ff: jmp 0x53a5280
// asm:   0x53a531c: xor ebx, ebx
// asm:   0x53a531e: jmp 0x53a5322

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__PrepareTarget
               (System_String_o *targetId,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *obj;
  ulong uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_07542bdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bdc = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((root == (UnityEngine_GameObject_o *)0x0) ||
         (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object_
                             (root,true,
                              (MethodInfo_353C0B0 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour),
         pSVar5 == (System_Object_array *)0x0)) {
        ThrowNullReferenceException();
      }
      if (0 < (int)pSVar5->max_length) {
        uVar6 = pSVar5->max_length & 0xffffffff;
        uVar8 = 0;
        do {
          if (uVar6 <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          obj = il2cpp_vm_Object_IsInst
                          (pSVar5->m_Items[uVar8],
                           (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer);
          if (obj != (Il2CppObject *)0x0) {
            pIVar2 = obj->klass;
            uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar6 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar9 = 0;
              do {
                if (*(Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer_c **)
                     ((long)&pIVar3->interfaceType + lVar9) ==
                    TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer) {
                  pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
                  goto label_053a528d;
                }
                lVar9 = lVar9 + 0x10;
              } while (uVar6 * 0x10 != lVar9);
            }
            pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                               (obj,(Il2CppClass *)
                                    TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer,0);
label_053a528d:
            bVar4 = (*pVVar7->methodPtr)(obj,targetId,pVVar7->method);
            if (bVar4) {
              return true;
            }
          }
          uVar8 = uVar8 + 1;
          uVar1 = (uint)pSVar5->max_length;
          uVar6 = (ulong)uVar1;
        } while ((long)uVar8 < (long)(int)uVar1);
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FindSection
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection (UnityEngine_Transform_o* root, System_String_o* sectionId, const MethodInfo* method);
// 0x53a5060
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a5142: nop word ptr cs:[rax + rax]
// asm:   0x53a51a6: jmp 0x53a50c3

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
          (UnityEngine_Transform_o *root,System_String_o *sectionId,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *value;
  System_String_o *__this;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *root_00;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  int index;
  
  if (Il2CppMethodInitialized_07542bdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-section-");
    Il2CppMethodInitialized_07542bdd = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    value = System_String__Concat_52f0320("-section-",sectionId,(MethodInfo *)0x0);
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (__this = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0),
       __this == (System_String_o *)0x0)) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__EndsWith_52ff780(__this,value,5,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
      return pUVar3;
    }
    index = 0;
    iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
    if (0 < iVar2) {
      do {
        root_00 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection(root_00,sectionId,method_00);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          return (UnityEngine_GameObject_o *)x;
        }
        index = index + 1;
        iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
      } while (index < iVar2);
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


