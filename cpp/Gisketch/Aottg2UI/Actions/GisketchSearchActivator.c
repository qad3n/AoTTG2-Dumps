// Type: Gisketch.Aottg2UI.Actions.GisketchSearchActivator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchActivator.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3b2b110

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<>c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$<Activate>g__OnScreenShown|0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0___Activate_g__OnScreenShown_0 (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o* __this, System_String_o* screenId, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b2b690

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<>c__DisplayClass3_0__<Activate>g__OnScreenShown_0
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator___c__DisplayClass3_0_o *__this,
               System_String_o *screenId,Gisketch_Aottg2UI_Building_GisketchView_o *view,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  bool_conflict bVar3;
  System_Action_string__GisketchView__o *value;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  
  if (DAT_057015d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string__GisketchView);
    il2cpp_init_method_metadata(&MethodInfo_Void__Activate_g__OnScreenShown_0);
    DAT_057015d2 = '\x01';
  }
  pGVar1 = (__this->fields).entry;
  if (pGVar1 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    bVar3 = System_String__Equals
                      (screenId,(pGVar1->fields)._ScreenId_k__BackingField,5,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar2 = (__this->fields).root;
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                  (pGVar2->fields)._Manifest_k__BackingField;
      value = (System_Action_string__GisketchView__o *)il2cpp_runtime_glue(TypeInfo_Action_string__GisketchView);
      method_00 = (MethodInfo *)0x0;
      System_Action<object__object>___ctor();
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__remove_ScreenShown
                  (__this_00,value,(MethodInfo *)0x0);
        pGVar2 = (__this->fields).root;
        routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                            ((__this->fields).entry,pGVar2,view,method_00);
        if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine
                    ((UnityEngine_MonoBehaviour_o *)pGVar2,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b2b1c0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusAfterBuild>d__4___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b2b780

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusAfterBuild>d__4__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b2b790

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusAfterBuild>d__4__MoveNext
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
  
  if (DAT_057015d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015d3 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    x = (__this->fields).root;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return 0;
    }
    pGVar2 = (__this->fields).view;
    if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pIVar3 = (Il2CppClass *)(__this->fields).entry;
      if (DAT_057015cd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_FocusInView_d__5);
        DAT_057015cd = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FocusInView_d__5);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = pIVar3;
        il2cpp_runtime_glue(__this_00 + 2,pIVar3);
        __this_00[2].monitor = pGVar2;
        il2cpp_runtime_glue(&__this_00[2].monitor,pGVar2);
        *(undefined1 *)&__this_00[3].klass = 1;
        (__this->fields).__2__current = __this_00;
        il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
        (__this->fields).__1__state = 2;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b2b8f0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusAfterBuild>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b2b900

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusAfterBuild>d__4__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o* __this, const MethodInfo* method);
// 0x3b2b940

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusAfterBuild>d__4__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild_d__4_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b2b270

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusInView>d__5___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b2b950

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusInView>d__5__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b2b960

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusInView>d__5__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
          MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  Il2CppRGCTXData *pIVar4;
  UnityEngine_Object_o *pUVar5;
  int iVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGVar9;
  UnityEngine_GameObject_o *pUVar10;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar11;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined8 unaff_RBX;
  MethodInfo *pMVar12;
  
  if (DAT_057015d4 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057015d4 = '\x01';
    in_RDX = extraout_RDX;
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pGVar11 = (__this->fields).entry;
    if (pGVar11 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      return 0;
    }
    if ((__this->fields).view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return 0;
    }
    bVar7 = System_String__IsNullOrEmpty
                      ((pGVar11->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pGVar3 = (__this->fields).view;
      if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto LAB_03b2be91;
      pUVar5 = (UnityEngine_Object_o *)(pGVar3->fields)._Root_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar12 = (MethodInfo *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality
                        (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pGVar3 = (__this->fields).view;
        if ((pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
           (pGVar11 = (__this->fields).entry,
           pGVar11 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) goto LAB_03b2be91;
        pUVar10 = (pGVar3->fields)._Root_k__BackingField;
        pIVar4 = ((_union_13 *)&(pGVar11->fields)._SectionId_k__BackingField)->rgctx_data;
        if (DAT_057015de == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Object);
          DAT_057015de = '\x01';
        }
        pGVar9 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator(pUVar10,pMVar12);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar9,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if (pGVar9 == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0)
          goto LAB_03b2be91;
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
                    (pGVar9,(System_String_o *)pIVar4,1,(MethodInfo *)pGVar11);
        }
      }
    }
    (__this->fields)._target_5__2 = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._target_5__2,0);
    (__this->fields)._i_5__3 = 0;
    in_RDX = extraout_RDX_00;
LAB_03b2bc0e:
    pUVar10 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                        ((__this->fields).entry,(__this->fields).view,in_RDX);
    (__this->fields)._target_5__2 = pUVar10;
    il2cpp_runtime_glue(&(__this->fields)._target_5__2);
    pUVar5 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)pUVar5 >> 8),1);
    }
    goto LAB_03b2bc5b;
  case 1:
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__3 + 1;
    (__this->fields)._i_5__3 = iVar6;
    if (iVar6 < 0x10) goto LAB_03b2bc0e;
LAB_03b2bc5b:
    pUVar5 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return 0;
    }
    pGVar11 = (__this->fields).entry;
    if (pGVar11 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      bVar7 = System_String__IsNullOrEmpty
                        ((pGVar11->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pGVar3 = (__this->fields).view;
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto LAB_03b2be91;
        pUVar5 = (UnityEngine_Object_o *)(pGVar3->fields)._Root_k__BackingField;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar12 = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Inequality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pGVar3 = (__this->fields).view;
          if ((pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) ||
             (pGVar11 = (__this->fields).entry,
             pGVar11 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)) goto LAB_03b2be91;
          pUVar10 = (pGVar3->fields)._Root_k__BackingField;
          pIVar4 = ((_union_13 *)&(pGVar11->fields)._SectionId_k__BackingField)->rgctx_data;
          if (DAT_057015de == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Object);
            DAT_057015de = '\x01';
          }
          pGVar9 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator
                             (pUVar10,pMVar12);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar9,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (pGVar9 == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0)
            goto LAB_03b2be91;
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
                      (pGVar9,(System_String_o *)pIVar4,1,(MethodInfo *)pGVar11);
          }
        }
      }
      pIVar2 = (Il2CppClass *)(__this->fields).entry;
      pGVar3 = (__this->fields).view;
      if (DAT_057015ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_RevealUntilVisible_d__6);
        DAT_057015ce = '\x01';
      }
      pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RevealUntilVisible_d__6);
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar8[1].klass = 0;
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar8[2].klass = pIVar2;
        il2cpp_runtime_glue(pIVar8 + 2,pIVar2);
        pIVar8[2].monitor = pGVar3;
        il2cpp_runtime_glue(&pIVar8[2].monitor,pGVar3);
        (__this->fields).__2__current = pIVar8;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
        (__this->fields).__1__state = 2;
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar8 >> 8),1);
      }
    }
LAB_03b2be91:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  case 2:
    (__this->fields).__1__state = -1;
    if ((char)(__this->fields).playSpotlight != '\0') {
      if (DAT_057015cf == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitForMotion_d__7);
        DAT_057015cf = '\x01';
      }
      pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForMotion_d__7);
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar8[1].klass = 0;
      (__this->fields).__2__current = pIVar8;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
      (__this->fields).__1__state = 3;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar8 >> 8),1);
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pIVar2 = (Il2CppClass *)(__this->fields).entry;
    pGVar3 = (__this->fields).view;
    if (DAT_057015ce == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_RevealUntilVisible_d__6);
      DAT_057015ce = '\x01';
    }
    pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RevealUntilVisible_d__6);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[2].klass = pIVar2;
      il2cpp_runtime_glue(pIVar8 + 2,pIVar2);
      pIVar8[2].monitor = pGVar3;
      il2cpp_runtime_glue(&pIVar8[2].monitor,pGVar3);
      (__this->fields).__2__current = pIVar8;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
      (__this->fields).__1__state = 4;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar8 >> 8),1);
    }
    goto LAB_03b2be91;
  case 4:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 5;
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  case 5:
    (__this->fields).__1__state = -1;
    pUVar10 = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
                        ((__this->fields).entry,(__this->fields).view,in_RDX);
    ppUVar1 = &(__this->fields)._target_5__2;
    (__this->fields)._target_5__2 = pUVar10;
    il2cpp_runtime_glue(ppUVar1);
    pUVar5 = (UnityEngine_Object_o *)(__this->fields)._target_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return 0;
    }
    bVar7 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(*ppUVar1,pMVar12);
    if ((char)bVar7 != '\0') {
      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Play(*ppUVar1,pMVar12);
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b2c6f0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusInView>d__5__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b2c700

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusInView>d__5__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o* __this, const MethodInfo* method);
// 0x3b2c740

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<FocusInView>d__5__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b2b310

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<RevealUntilVisible>d__6___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this
               ,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b2c750

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<RevealUntilVisible>d__6__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this
               ,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b2c760

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<RevealUntilVisible>d__6__MoveNext
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
  
  if (DAT_057015d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015d5 = '\x01';
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
    il2cpp_init_class();
  }
  bVar3 = 0;
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus((UnityEngine_GameObject_o *)x,method_00);
    bVar3 = 0;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible
                      ((UnityEngine_GameObject_o *)x,method_00);
    if ((char)bVar2 == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b2c9d0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<RevealUntilVisible>d__6__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b2c9e0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<RevealUntilVisible>d__6__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this
               ,MethodInfo *method)

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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o* __this, const MethodInfo* method);
// 0x3b2ca20

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<RevealUntilVisible>d__6__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible_d__6_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7___ctor (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b2b380

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<WaitForMotion>d__7___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_IDisposable_Dispose (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b2ca30

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<WaitForMotion>d__7__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__MoveNext (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b2ca40

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<WaitForMotion>d__7__MoveNext
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
          MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_057015d6 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057015d6 = '\x01';
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
    il2cpp_init_class();
  }
  bVar3 = 0;
  bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    bVar3 = 0;
    fVar4 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    if (fVar4 - (__this->fields)._start_5__2 < 0.35) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b2cb20

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<WaitForMotion>d__7__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b2cb30

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<WaitForMotion>d__7__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
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


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o* __this, const MethodInfo* method);
// 0x3b2cb70

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator_<WaitForMotion>d__7__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion_d__7_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b23ee0

void Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root_00;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar4;
  bool_conflict bVar5;
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *routine;
  System_Action_string__GisketchView__o *value;
  MethodInfo *in_RCX;
  void **ppvVar6;
  
  if (DAT_057015cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string__GisketchView);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__Activate_g__OnScreenShown_0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    DAT_057015cb = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    pIVar1 = __this + 1;
    __this[1].klass = (Il2CppClass *)entry;
    il2cpp_runtime_glue(pIVar1,entry);
    ppvVar6 = &__this[1].monitor;
    __this[1].monitor = root;
    il2cpp_runtime_glue(ppvVar6);
    if (__this[1].klass == (Il2CppClass *)0x0) {
      return;
    }
    x = *ppvVar6;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (*ppvVar6 != (void *)0x0) {
      if (*(long *)((long)*ppvVar6 + 0xa8) == 0) {
        return;
      }
      if (pIVar1->klass != (Il2CppClass *)0x0) {
        bVar5 = System_String__IsNullOrEmpty((pIVar1->klass->_1).byval_arg.data,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (((pIVar1->klass == (Il2CppClass *)0x0) || (*ppvVar6 == (void *)0x0)) ||
             (lVar2 = *(long *)((long)*ppvVar6 + 0xa8), lVar2 == 0)) goto LAB_03b240f1;
          in_RCX = (MethodInfo *)0x0;
          bVar5 = System_String__Equals
                            ((pIVar1->klass->_1).byval_arg.data,*(System_String_o **)(lVar2 + 0x30),
                             5,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*ppvVar6 != (void *)0x0) {
              pGVar4 = *(Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o **)((long)*ppvVar6 + 0xa8)
              ;
              value = (System_Action_string__GisketchView__o *)il2cpp_runtime_glue(TypeInfo_Action_string__GisketchView);
              System_Action<object__object>___ctor();
              if (pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                Gisketch_Aottg2UI_Routing_GisketchScreenRouter__add_ScreenShown
                          (pGVar4,value,(MethodInfo *)0x0);
                if (((*ppvVar6 != (void *)0x0) && (pIVar1->klass != (Il2CppClass *)0x0)) &&
                   (pGVar4 = *(Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o **)
                              ((long)*ppvVar6 + 0xa8),
                   pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
                  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                            (pGVar4,(pIVar1->klass->_1).byval_arg.data,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto LAB_03b240f1;
          }
        }
        root_00 = *ppvVar6;
        if ((root_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (pGVar3 = (root_00->fields)._Manifest_k__BackingField,
           pGVar3 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
          routine = Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar1->klass,
                               root_00,(Gisketch_Aottg2UI_Building_GisketchView_o *)
                                       (pGVar3->fields).screens,in_RCX);
          UnityEngine_MonoBehaviour__StartCoroutine
                    ((UnityEngine_MonoBehaviour_o *)root_00,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03b240f1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusAfterBuild
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b2b120

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusAfterBuild
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_GisketchUIRoot_o *root,Gisketch_Aottg2UI_Building_GisketchView_o *view,
          MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057015cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FocusAfterBuild_d__4);
    DAT_057015cc = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FocusAfterBuild_d__4);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[3].klass = (Il2CppClass *)entry;
    il2cpp_runtime_glue(__this + 3,entry);
    __this[2].klass = (Il2CppClass *)root;
    il2cpp_runtime_glue(__this + 2,root);
    __this[2].monitor = view;
    il2cpp_runtime_glue(&__this[2].monitor,view);
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusInView
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, bool playSpotlight, const MethodInfo* method);
// 0x3b2b1e0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FocusInView
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,bool_conflict playSpotlight,
          MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057015cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FocusInView_d__5);
    DAT_057015cd = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FocusInView_d__5);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)entry;
    il2cpp_runtime_glue(__this + 2,entry);
    __this[2].monitor = view;
    il2cpp_runtime_glue(&__this[2].monitor,view);
    *(char *)&__this[3].klass = (char)playSpotlight;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$RevealUntilVisible
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b2b290

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__RevealUntilVisible
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057015ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RevealUntilVisible_d__6);
    DAT_057015ce = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RevealUntilVisible_d__6);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)entry;
    il2cpp_runtime_glue(__this + 2,entry);
    __this[2].monitor = view;
    il2cpp_runtime_glue(&__this[2].monitor,view);
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$WaitForMotion
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion (const MethodInfo* method);
// 0x3b2b330

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__WaitForMotion(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057015cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForMotion_d__7);
    DAT_057015cf = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForMotion_d__7);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b2b3a0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Target
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  System_String_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Transform_o *root;
  UnityEngine_Object_o *pUVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Object_o *local_30;
  
  if (DAT_057015d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015d0 = '\x01';
  }
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto LAB_03b2b526;
  pUVar3 = (UnityEngine_Object_o *)(entry->fields)._Target_k__BackingField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (entry->fields)._Target_k__BackingField;
  }
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto LAB_03b2b526;
  value = (entry->fields)._TargetId_k__BackingField;
  if (DAT_05701563 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05701563 = '\x01';
  }
  local_30 = (UnityEngine_Object_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)0x0;
  if ((char)bVar2 == '\0') {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(view->fields)._elements;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03b2b526;
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this,(Il2CppObject *)value,(Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    pUVar3 = local_30;
    if ((char)bVar2 != '\0') goto LAB_03b2b481;
    pUVar3 = (UnityEngine_Object_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
LAB_03b2b481:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__IsNullOrEmpty
                      ((entry->fields)._SectionId_k__BackingField,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Object_o *)(view->fields)._Root_k__BackingField;
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      root = (UnityEngine_Transform_o *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if ((char)bVar2 != '\0') {
        __this_00 = (view->fields)._Root_k__BackingField;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
LAB_03b2b526:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        root = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        method_00 = extraout_RDX_00;
      }
      pUVar3 = (UnityEngine_Object_o *)
               Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
                         (root,(entry->fields)._SectionId_k__BackingField,method_00);
    }
  }
  return (UnityEngine_GameObject_o *)pUVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FindSection
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection (UnityEngine_Transform_o* root, System_String_o* sectionId, const MethodInfo* method);
// 0x3b2b530

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
          (UnityEngine_Transform_o *root,System_String_o *sectionId,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *value;
  System_String_o *__this;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *root_00;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  int index;
  
  if (DAT_057015d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"-section-");
    DAT_057015d1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    value = System_String__Concat("-section-",sectionId,(MethodInfo *)0x0);
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (__this = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0),
       __this == (System_String_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_String__EndsWith(__this,value,5,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
      return pUVar3;
    }
    index = 0;
    iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
    if (0 < iVar2) {
      do {
        root_00 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_Actions_GisketchSearchActivator__FindSection
                      (root_00,sectionId,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return (UnityEngine_GameObject_o *)x;
        }
        index = index + 1;
        iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
      } while (index < iVar2);
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


