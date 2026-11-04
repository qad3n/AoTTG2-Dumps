// Type: Gisketch.Aottg2UI.Actions.GisketchSearchActivator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchActivator.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___ctor(Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$<Activate>g__OnScreenShown|0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___Activate_g__OnScreenShown_0 (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, System_String_o* screenId, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x18190b050

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___Activate_g__OnScreenShown_0
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this,
               System_String_o *screenId,Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  bool bVar3;
  System_Action_string__GisketchView__o *__this_01;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_18434225f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
              );
    Il2CppMethodInitialized_18434225f = '\x01';
  }
  pGVar1 = (__this->fields).entry;
  if (pGVar1 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar3 = System_String__Equals_196c550
                      (screenId,(pGVar1->fields)._ScreenId_k__BackingField,5,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pGVar2 = (__this->fields).root;
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_00 = (pGVar2->fields)._Screens_k__BackingField;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
      System_Action_object__object____ctor
                ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_01,
                 (Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
                 ,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
                  (__this_00,__this_01,(MethodInfo *)0x0);
        pGVar2 = (__this->fields).root;
        routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                            ((__this->fields).entry,pGVar2,view,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)pGVar2,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4___ctor(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_IDisposable_Dispose(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x181909840

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *value;
  Gisketch_Aottg2UI_Building_GisketchView_o *value_00;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_184342260 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342260 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    x = (__this->fields).root;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar2) && ((__this->fields).view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      value = (__this->fields).entry;
      value_00 = (__this->fields).view;
      if (Il2CppMethodInitialized_184342258 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
        Il2CppMethodInitialized_184342258 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).entry = value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).entry,value);
      (__this_00->fields).view = value_00;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).view,value_00);
      (__this_00->fields).playSpotlight = true;
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
  else if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x1819099a0

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5___ctor(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_IDisposable_Dispose(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x1819099e0

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar4;
  UnityEngine_Object_o *pUVar5;
  char cVar6;
  bool bVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar8;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this_00;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *pUVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_184342261 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342261 = '\x01';
  }
  uVar11 = 0;
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    if ((__this->fields).entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      return false;
    }
    if ((__this->fields).view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return false;
    }
    bVar7 = System_String__IsNullOrEmpty
                      ((((__this->fields).entry)->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
    if (!bVar7) {
      pGVar4 = (__this->fields).view;
      if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_181909f2d;
      pUVar5 = (UnityEngine_Object_o *)(pGVar4->fields)._Root_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pGVar4 = (__this->fields).view;
        if ((pGVar4 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
           (pGVar2 = (__this->fields).entry, pGVar2 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0))
        goto label_181909f2d;
        pUVar10 = (pGVar4->fields)._Root_k__BackingField;
        pSVar3 = (pGVar2->fields)._SectionId_k__BackingField;
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
        }
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select(pUVar10,pSVar3,true,(MethodInfo *)0x0);
      }
    }
    pGVar2 = (__this->fields).entry;
    if ((pGVar2 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
       (pGVar4 = (__this->fields).view, pGVar4 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0))
    goto label_181909f2d;
    pSVar3 = (pGVar2->fields)._TargetId_k__BackingField;
    pUVar5 = (UnityEngine_Object_o *)(pGVar4->fields)._Root_k__BackingField;
    if (Il2CppMethodInitialized_18434225d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434225d = '\x01';
    }
    bVar7 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        if ((pUVar5 == (UnityEngine_Object_o *)0x0) ||
           (pUVar8 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                               ((UnityEngine_GameObject_o *)pUVar5,true,
                                (MethodInfo_6F5750 *)
                                MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour),
           pUVar8 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) goto label_181909f2d;
        for (; (int)uVar11 < (int)pUVar8->max_length; uVar11 = uVar11 + 1) {
          if ((uint)pUVar8->max_length <= uVar11) {
            ThrowIndexOutOfRangeException();
          }
          pIVar9 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)(&pUVar8->m_Items[0].klass)[(int)uVar11],
                              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer)
          ;
          if ((pIVar9 != (Il2CppObject *)0x0) && (cVar6 = il2cpp_runtime_helper_180014780(0), cVar6 != '\0')) {
            (__this->fields).__2__current = (Il2CppObject *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
      }
    }
    goto label_181909c29;
  case 1:
    (__this->fields).__1__state = -1;
label_181909c29:
    (__this->fields)._target_5__2 = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._target_5__2,(void *)0x0);
    (__this->fields)._i_5__3 = 0;
label_181909c48:
    if ((__this->fields)._i_5__3 < 0x10) {
      pUVar10 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                          ((__this->fields).entry,(__this->fields).view,(MethodInfo *)0x0);
      (__this->fields)._target_5__2 = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._target_5__2,pUVar10);
      pUVar5 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
    pUVar5 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      pGVar2 = (__this->fields).entry;
      if (pGVar2 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
label_181909f2d:
        ThrowNullReferenceException();
      }
      bVar7 = System_String__IsNullOrEmpty((pGVar2->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
      if (!bVar7) {
        pGVar4 = (__this->fields).view;
        if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_181909f2d;
        pUVar5 = (UnityEngine_Object_o *)(pGVar4->fields)._Root_k__BackingField;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pGVar4 = (__this->fields).view;
          if ((pGVar4 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
             (pGVar2 = (__this->fields).entry, pGVar2 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0
             )) goto label_181909f2d;
          pUVar10 = (pGVar4->fields)._Root_k__BackingField;
          pSVar3 = (pGVar2->fields)._SectionId_k__BackingField;
          if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
          }
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select(pUVar10,pSVar3,true,(MethodInfo *)0x0);
        }
      }
      pIVar9 = (Il2CppObject *)
               Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible
                         ((__this->fields).entry,(__this->fields).view,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
      (__this->fields).__1__state = 3;
      return true;
    }
    break;
  case 2:
    piVar1 = &(__this->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    (__this->fields).__1__state = -1;
    goto label_181909c48;
  case 3:
    (__this->fields).__1__state = -1;
    if ((__this->fields).playSpotlight != false) {
      if (Il2CppMethodInitialized_18434225a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
        Il2CppMethodInitialized_18434225a = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 4;
      return true;
    }
    break;
  case 4:
    pGVar4 = (__this->fields).view;
    (__this->fields).__1__state = -1;
    if (pGVar4 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pUVar10 = (pGVar4->fields)._Root_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar10,2,(MethodInfo *)0x0);
      pIVar9 = (Il2CppObject *)
               Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible
                         ((__this->fields).entry,(__this->fields).view,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
      (__this->fields).__1__state = 5;
      return true;
    }
    goto label_181909f2d;
  case 5:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 6;
    return true;
  case 6:
    (__this->fields).__1__state = -1;
    pUVar10 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                        ((__this->fields).entry,(__this->fields).view,(MethodInfo *)0x0);
    (__this->fields)._target_5__2 = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._target_5__2,pUVar10);
    pUVar5 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar7) &&
       (bVar7 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible
                          ((__this->fields)._target_5__2,(MethodInfo *)0x0), bVar7)) {
      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play((__this->fields)._target_5__2,(MethodInfo *)0x0)
      ;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x181909f50

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6___ctor(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_IDisposable_Dispose(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x18190a0c0

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  UnityEngine_GameObject_o *root;
  bool bVar4;
  UnityEngine_Object_o *x;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  
  if (Il2CppMethodInitialized_184342262 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342262 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields)._i_5__2 = 0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    piVar1 = &(__this->fields)._i_5__2;
    *piVar1 = *piVar1 + 1;
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._i_5__2 < 9) {
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                  ((__this->fields).entry,(__this->fields).view,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    if (Il2CppMethodInitialized_184342264 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184342264 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_18190a2be;
        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                  (pUVar5,(UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Actions_GisketchScrollFocus__RevealAtCenter
                ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    }
    pGVar3 = (__this->fields).view;
    if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
label_18190a2be:
      ThrowNullReferenceException();
    }
    root = (pGVar3->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,2,(MethodInfo *)0x0);
    bVar4 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible
                      ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    if (!bVar4) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x18190a2d0

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7___ctor(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_IDisposable_Dispose(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x18190b8b0

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__MoveNext
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184342263 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_184342263 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    fVar3 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    (__this->fields)._start_5__2 = fVar3;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if ((bVar2) &&
     (fVar3 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0),
     fVar3 - (__this->fields)._start_5__2 < 0.35)) {
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x18190b960

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x181905970

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,Gisketch_Aottg2UI_GisketchUIRoot_o *root
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *object;
  System_Action_string__GisketchView__o *pSVar5;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184342256 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0);
    Il2CppMethodInitialized_184342256 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *)0x0) {
    (object->fields).entry = entry;
    Il2CppCodeGenWriteBarrier(&(object->fields).entry,entry);
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    if ((object->fields).entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      return;
    }
    pGVar1 = (object->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    pGVar1 = (object->fields).root;
    if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      if ((pGVar1->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0
         ) {
        return;
      }
      pGVar2 = (object->fields).entry;
      if (pGVar2 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        bVar4 = System_String__IsNullOrEmpty((pGVar2->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
        if (!bVar4) {
          pGVar2 = (object->fields).entry;
          if (((pGVar2 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) ||
              (pGVar1 = (object->fields).root, pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) ||
             (pGVar3 = (pGVar1->fields)._Screens_k__BackingField,
             pGVar3 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) goto label_181905bef;
          bVar4 = System_String__Equals_196c550
                            ((pGVar2->fields)._ScreenId_k__BackingField,(pGVar3->fields)._activeId,5,
                             (MethodInfo *)0x0);
          if (!bVar4) {
            pGVar1 = (object->fields).root;
            if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              pGVar3 = (pGVar1->fields)._Screens_k__BackingField;
              pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
              System_Action_object__object____ctor
                        ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)pSVar5,
                         (Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
                         ,(MethodInfo *)0x0);
              if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown
                          (pGVar3,pSVar5,(MethodInfo *)0x0);
                pGVar1 = (object->fields).root;
                if (((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
                    (pGVar2 = (object->fields).entry,
                    pGVar2 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) &&
                   (pGVar3 = (pGVar1->fields)._Screens_k__BackingField,
                   pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
                  bVar4 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                                    (pGVar3,(pGVar2->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
                  if (bVar4) {
                    return;
                  }
                  pGVar1 = (object->fields).root;
                  if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    pGVar3 = (pGVar1->fields)._Screens_k__BackingField;
                    pSVar5 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_System_Action_string_GisketchView);
                    System_Action_object__object____ctor
                              ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)pSVar5,
                               (Il2CppObject *)object,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0
                               ,(MethodInfo *)0x0);
                    if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
                                (pGVar3,pSVar5,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            goto label_181905bef;
          }
        }
        pGVar1 = (object->fields).root;
        if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (pGVar3 = (pGVar1->fields)._Screens_k__BackingField,
           pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
          routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                              ((object->fields).entry,pGVar1,(pGVar3->fields)._active,(MethodInfo *)0x0);
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)pGVar1,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181905bef:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusAfterBuild
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181905d50

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,Gisketch_Aottg2UI_GisketchUIRoot_o *root,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this;
  
  if (Il2CppMethodInitialized_184342257 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4);
    Il2CppMethodInitialized_184342257 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).entry,entry);
  (__this->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root,root);
  (__this->fields).view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).view,view);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusInView
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, bool playSpotlight, const MethodInfo* method);
// 0x181905de0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,bool playSpotlight,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this;
  
  if (Il2CppMethodInitialized_184342258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
    Il2CppMethodInitialized_184342258 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).entry,entry);
  (__this->fields).view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).view,view);
  (__this->fields).playSpotlight = playSpotlight;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$RevealUntilVisible
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1819060f0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this;
  
  if (Il2CppMethodInitialized_184342259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
    Il2CppMethodInitialized_184342259 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).entry = entry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).entry,entry);
  (__this->fields).view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields).view,view);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$WaitForMotion
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion (const MethodInfo* method);
// 0x181906480

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this;
  
  if (Il2CppMethodInitialized_18434225a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
    Il2CppMethodInitialized_18434225a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181906180
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181906259: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x18190625e: jmp 0x181906262
// asm:   0x1819063b0: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x1819063b5: jmp 0x1819063b9

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  char cVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *root;
  UnityEngine_Object_o *pUVar6;
  uint uVar7;
  UnityEngine_Object_o *local_res8;
  
  if (Il2CppMethodInitialized_18434225b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434225b = '\x01';
  }
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_181906462;
  pUVar6 = (UnityEngine_Object_o *)(entry->fields)._Target_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (entry->fields)._Target_k__BackingField;
  }
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_181906462;
  pSVar1 = (entry->fields)._TargetId_k__BackingField;
  if (Il2CppMethodInitialized_1843421c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    Il2CppMethodInitialized_1843421c3 = '\x01';
  }
  local_res8 = (UnityEngine_Object_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  if (bVar2) {
label_181906260:
    pUVar6 = (UnityEngine_Object_o *)0x0;
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(view->fields)._elements;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)pSVar1,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    pUVar6 = local_res8;
    if (!bVar2) goto label_181906260;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar1 = (entry->fields)._TargetId_k__BackingField;
    pUVar6 = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if (Il2CppMethodInitialized_18434225c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434225c = '\x01';
    }
    local_res8 = (UnityEngine_Object_o *)0x0;
    bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((pUVar6 == (UnityEngine_Object_o *)0x0) ||
           (pUVar4 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                               ((UnityEngine_GameObject_o *)pUVar6,true,
                                (MethodInfo_6F5750 *)
                                MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour),
           pUVar4 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
          ThrowNullReferenceException();
        }
        for (uVar7 = 0; (int)uVar7 < (int)pUVar4->max_length; uVar7 = uVar7 + 1) {
          if ((uint)pUVar4->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          pIVar5 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)(&pUVar4->m_Items[0].klass)[(int)uVar7],
                              (Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (cVar3 = il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer,
                                    pIVar5,pSVar1,&local_res8), pUVar6 = local_res8, cVar3 != '\0')) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar2 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pUVar6 = local_res8;
            if (bVar2) goto label_1819063b9;
          }
        }
      }
    }
    pUVar6 = (UnityEngine_Object_o *)0x0;
label_1819063b9:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__IsNullOrEmpty((entry->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
      pUVar6 = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
      if (!bVar2) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          __this_00 = (view->fields)._Root_k__BackingField;
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_181906462:
            ThrowNullReferenceException();
          }
          root = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        }
        else {
          root = (UnityEngine_Transform_o *)0x0;
        }
        pUVar6 = (UnityEngine_Object_o *)
                 Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
                           (root,(entry->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
      }
    }
  }
  return (UnityEngine_GameObject_o *)pUVar6;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$MaterializeTarget
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__MaterializeTarget (System_String_o* targetId, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x181905e60
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181905f1d: nop dword ptr [rax]
// asm:   0x181905f9a: mov rax, qword ptr [rsp + 0x40]
// asm:   0x181905f9f: jmp 0x181905fa3

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__MaterializeTarget
          (System_String_o *targetId,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  char cVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  Il2CppObject *pIVar4;
  uint uVar5;
  UnityEngine_Object_o *local_res8;
  
  if (Il2CppMethodInitialized_18434225c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434225c = '\x01';
  }
  local_res8 = (UnityEngine_Object_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((root == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                             (root,true,
                              (MethodInfo_6F5750 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour),
         pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
        ThrowNullReferenceException();
      }
      for (uVar5 = 0; (int)uVar5 < (int)pUVar3->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pUVar3->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        pIVar4 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)(&pUVar3->m_Items[0].klass)[(int)uVar5],
                            (Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (cVar2 = il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetMaterializer,
                                  pIVar4,targetId,&local_res8), x = local_res8, cVar2 != '\0')) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            return (UnityEngine_GameObject_o *)local_res8;
          }
        }
      }
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$PrepareTarget
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__PrepareTarget (System_String_o* targetId, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x181905fd0

bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__PrepareTarget
               (System_String_o *targetId,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  Il2CppObject *pIVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_18434225d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434225d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((root == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                             (root,true,
                              (MethodInfo_6F5750 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MonoBehaviour),
         pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
        ThrowNullReferenceException();
      }
      uVar5 = 0;
      while( true ) {
        if ((int)pUVar3->max_length <= (int)uVar5) {
          return false;
        }
        if ((uint)pUVar3->max_length <= uVar5) break;
        pIVar4 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)(&pUVar3->m_Items[0].klass)[(int)uVar5],
                            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (cVar2 = il2cpp_runtime_helper_180014780(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSearchTargetPreparer,pIVar4,
                                  targetId), cVar2 != '\0')) {
          return true;
        }
        uVar5 = uVar5 + 1;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FindSection
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection (UnityEngine_Transform_o* root, System_String_o* sectionId, const MethodInfo* method);
// 0x181905c00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181905cb9: nop dword ptr [rax]
// asm:   0x181905d18: mov rax, rdi
// asm:   0x181905d1b: jmp 0x181905d2b

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
          (UnityEngine_Transform_o *root,System_String_o *sectionId,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *value;
  System_String_o *__this;
  UnityEngine_Transform_o *root_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar3;
  int index;
  
  if (Il2CppMethodInitialized_18434225e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-section-");
    Il2CppMethodInitialized_18434225e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    value = System_String__Concat_1969e50("-section-",sectionId,(MethodInfo *)0x0);
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (__this = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0),
       __this == (System_String_o *)0x0)) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__EndsWith_196bd20(__this,value,5,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
      return pUVar3;
    }
    for (index = 0; iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0), index < iVar2;
        index = index + 1) {
      root_00 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection(root_00,sectionId,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return (UnityEngine_GameObject_o *)x;
      }
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


