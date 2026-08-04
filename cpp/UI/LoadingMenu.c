// Type: UI.LoadingMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LoadingMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingMenu.cs
// --------------------------------

// UI.LoadingMenu.<WaitAndHide>d__7$$.ctor
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7___ctor (UI_LoadingMenu__WaitAndHide_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43efaa0

void UI_LoadingMenu__WaitAndHide_d__7___ctor
               (UI_LoadingMenu__WaitAndHide_d__7_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.IDisposable.Dispose
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7__System_IDisposable_Dispose (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x43efad0

void UI_LoadingMenu__WaitAndHide_d__7__System_IDisposable_Dispose
               (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  return;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$MoveNext
// il2cpp: bool UI_LoadingMenu__WaitAndHide_d__7__MoveNext (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x43efae0

bool_conflict
UI_LoadingMenu__WaitAndHide_d__7__MoveNext(UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  UI_LoadingMenu_o *__this_00;
  
  if (g_data_057ae512 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    g_data_057ae512 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar1);
    (__this->fields).__1__state = 1;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar1);
    (__this->fields).__1__state = 2;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar1;
    uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar1);
    (__this->fields).__1__state = 3;
    break;
  case 3:
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_LoadingMenu_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this_00->fields).m_CancellationTokenSource;
    }
    UI_LoadingMenu__Hide(__this_00,method);
  default:
    return 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x43efc10

Il2CppObject *
UI_LoadingMenu__WaitAndHide_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_Reset (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x43efc20

void UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_Reset
               (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

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


// UI.LoadingMenu.<WaitAndHide>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_get_Current (UI_LoadingMenu__WaitAndHide_d__7_o* __this, const MethodInfo* method);
// 0x43efc60

Il2CppObject *
UI_LoadingMenu__WaitAndHide_d__7__System_Collections_IEnumerator_get_Current
          (UI_LoadingMenu__WaitAndHide_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.LoadingMenu$$Setup
// il2cpp: void UI_LoadingMenu__Setup (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x43ef440

void UI_LoadingMenu__Setup(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Threading_CancellationTokenSource_o *__this_00;
  UI_ItemHandler_o *pUVar2;
  UI_EmoteHandler_o *pUVar3;
  UI_EmoteHandler_c *pUVar4;
  code *vtableDispatch;
  undefined8 uVar5;
  long *plVar6;
  char cVar7;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  UI_LoadingBackgroundPanel_o *pUVar10;
  UI_LoadingProgressPanel_o *pUVar11;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar12;
  UI_InGameMenu_o *__this_01;
  System_String_o *pSVar13;
  UI_BasePopup_o *__this_02;
  Il2CppClass *str0;
  Il2CppObject *__this_03;
  MethodInfo_24FB130 **method_01;
  char extraout_DL;
  undefined8 extraout_RDX;
  undefined4 uVar14;
  UI_TipPanel_o *__this_04;
  System_Threading_CancellationTokenSource_o *__this_05;
  UI_InGameMenu_o *__this_06;
  UI_BasePopup_o *pUVar15;
  Il2CppObject *__this_07;
  float fVar16;
  float fVar17;
  
  if (g_data_057ae50f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LoadingBackgroundPanel_CreateDefaultPopup_LoadingBackgro);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LoadingProgressPanel_CreateDefaultPopup_LoadingProgressP);
    g_data_057ae50f = '\x01';
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar10 = (UI_LoadingBackgroundPanel_o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_LoadingBackgroundPanel_CreateDefaultPopup_LoadingBackgro);
  (__this->fields)._backgroundPanel = pUVar10;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._backgroundPanel);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_01 = &MethodInfo_LoadingProgressPanel_CreateDefaultPopup_LoadingProgressP;
  pUVar11 = (UI_LoadingProgressPanel_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_LoadingProgressPanel_CreateDefaultPopup_LoadingProgressP);
  (__this->fields)._progessPanel = pUVar11;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._progessPanel);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)UI_ElementFactory__CreateTipPanel(pUVar9,0,(MethodInfo *)0x0);
  (__this->fields)._tipPanel = (UI_TipPanel_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tipPanel);
  __this_04 = (__this->fields)._tipPanel;
  if (__this_04 != (UI_TipPanel_o *)0x0) {
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar12,8,8,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = __this_04[3].fields.m_CancellationTokenSource;
  if (__this_05 != (System_Threading_CancellationTokenSource_o *)0x0) {
    cVar7 = (char)method_00;
    method_00 = (MethodInfo *)0x0;
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      __this_00 = __this_04[3].fields.m_CancellationTokenSource;
      __this_05 = (System_Threading_CancellationTokenSource_o *)0x0;
      if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UI_TipPanel__SetRandomTip((UI_TipPanel_o *)__this_00,(MethodInfo *)0x0);
        __this_05 = __this_04[3].fields.m_CancellationTokenSource;
        if (__this_05 != (System_Threading_CancellationTokenSource_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            method_00 = (MethodInfo *)0x1;
            UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
            __this_05 = (System_Threading_CancellationTokenSource_o *)0x0;
            if (__this_04[3].monitor != (UI_LoadingBackgroundPanel_o *)0x0) {
              method_00 = (MethodInfo *)0x1;
              UI_LoadingBackgroundPanel__SetRandomBackground(__this_04[3].monitor,1,0,(MethodInfo *)method_01)
              ;
              pUVar15 = __this_04[3].monitor;
              __this_05 = (System_Threading_CancellationTokenSource_o *)0x0;
              if (pUVar15 != (UI_BasePopup_o *)0x0) {
                if (cVar7 == '\0') {
                  method_00 = (pUVar15->klass->vtable)._21_Show.method;
                  (*(pUVar15->klass->vtable)._21_Show.methodPtr)();
                }
                else {
                  method_00 = (MethodInfo *)0x0;
                  UI_BasePopup__ShowImmediate(pUVar15,(MethodInfo *)0x0);
                }
                if (g_data_057ae510 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                  g_data_057ae510 = '\x01';
                }
                pUVar11 = (UI_LoadingProgressPanel_o *)__this_04[3].fields.m_CachedPtr;
                __this_05 = (System_Threading_CancellationTokenSource_o *)0x0;
                if (pUVar11 != (UI_LoadingProgressPanel_o *)0x0) {
                  if (cVar7 == '\0') {
                    UI_LoadingProgressPanel__Show(pUVar11,0.0,method_00);
                    return;
                  }
                  UI_LoadingProgressPanel__ShowImmediate(pUVar11,0.0,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  cVar7 = (char)method_00;
  if (g_data_057ae510 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae510 = '\x01';
  }
  pUVar11 = *(UI_LoadingProgressPanel_o **)&__this_05[2].fields._state;
  __this_06 = (UI_InGameMenu_o *)0x0;
  if (pUVar11 != (UI_LoadingProgressPanel_o *)0x0) {
    fVar17 = 1.0;
    if (fVar16 <= 1.0) {
      fVar17 = fVar16;
    }
    fVar17 = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar17);
    if (extraout_DL == '\0') {
      UI_LoadingProgressPanel__Show(pUVar11,fVar17,method_00);
    }
    else {
      UI_LoadingProgressPanel__ShowImmediate(pUVar11,fVar17,method_00);
    }
    if (cVar7 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_06 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((__this_06->klass->_2).naturalAligment < bVar1) ||
         ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
      UI_InGameMenu__OnFinishLoading(__this_06,(MethodInfo *)0x0);
      if (g_data_057ae511 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
        g_data_057ae511 = '\x01';
      }
      __this_01 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
      __this_06 = __this_01;
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
      if (__this_01 != (UI_InGameMenu_o *)0x0) {
        (__this_01->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)__this_05;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,__this_05);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_05,(System_Collections_IEnumerator_o *)__this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
  il2cpp_runtime_helper_022b2fd0();
  pUVar15 = (UI_BasePopup_o *)(__this_06->fields).CharacterInfoHandler;
  if ((pUVar15 != (UI_BasePopup_o *)0x0) &&
     (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
     pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
    pUVar2 = (__this_06->fields).ItemHandler;
    pUVar15 = (UI_BasePopup_o *)0x0;
    if (pUVar2 != (UI_ItemHandler_o *)0x0) {
      (**(code **)&pUVar2->klass[1]._2.field_count)();
      pUVar3 = (__this_06->fields).EmoteHandler;
      pUVar15 = (UI_BasePopup_o *)0x0;
      if (pUVar3 != (UI_EmoteHandler_o *)0x0) {
        pUVar4 = pUVar3->klass;
        vtableDispatch = *(code **)&pUVar4[1]._2.field_count;
        uVar5._0_2_ = pUVar4[1]._2.interfaces_count;
        uVar5._2_2_ = pUVar4[1]._2.interface_offsets_count;
        uVar5._4_1_ = pUVar4[1]._2.typeHierarchyDepth;
        uVar5._5_1_ = pUVar4[1]._2.genericRecursionDepth;
        uVar5._6_1_ = pUVar4[1]._2.rank;
        uVar5._7_1_ = pUVar4[1]._2.minimumAlignment;
        (*vtableDispatch)(pUVar3,uVar5,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae516 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae516 = '\x01';
  }
  plVar6 = pUVar15[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_BasePopup_o *)0x0;
  pSVar13 = Utility_Util__FormatFloat(fVar16 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar13 != (System_String_o *)0x0) {
    __this_02 = (UI_BasePopup_o *)
                (*(pSVar13->klass->vtable)._3_ToString.methodPtr)
                          (pSVar13,(pSVar13->klass->vtable)._3_ToString.method);
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)__this_02,"%",(MethodInfo *)0x0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x5e8))(plVar6,pSVar13,*(undefined8 *)(*plVar6 + 0x5f0));
      plVar6 = (long *)pUVar15[1].fields.m_CachedPtr;
      __this_02 = (UI_BasePopup_o *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x428))(fVar16);
        UI_BasePopup__ShowImmediate(pUVar15,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae517 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae517 = '\x01';
  }
  plVar6 = __this_02[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (Il2CppClass *)0x0;
  pSVar13 = Utility_Util__FormatFloat(fVar16 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar13 != (System_String_o *)0x0) {
    str0 = (Il2CppClass *)
           (*(pSVar13->klass->vtable)._3_ToString.methodPtr)
                     (pSVar13,(pSVar13->klass->vtable)._3_ToString.method);
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"%",(MethodInfo *)0x0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x5e8))(plVar6,pSVar13,*(undefined8 *)(*plVar6 + 0x5f0));
      plVar6 = (long *)__this_02[1].fields.m_CachedPtr;
      str0 = (Il2CppClass *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x428))(fVar16);
        UI_BasePopup__Show(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
    g_data_057ae511 = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
  uVar14 = 0;
  __this_07 = __this_03;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = uVar14;
    return;
  }
  __this_03[2].klass = str0;
  il2cpp_runtime_helper_022b4080(__this_03 + 2,str0);
  return;
}


// UI.LoadingMenu$$Show
// il2cpp: void UI_LoadingMenu__Show (UI_LoadingMenu_o* __this, bool immediate, const MethodInfo* method);
// 0x43ef540

void UI_LoadingMenu__Show(UI_LoadingMenu_o *__this,bool_conflict immediate,MethodInfo *method)

{
  byte bVar1;
  UI_TipPanel_o *__this_00;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_ItemHandler_o *pUVar4;
  UI_EmoteHandler_o *pUVar5;
  UI_EmoteHandler_c *pUVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  long *plVar8;
  char cVar9;
  bool_conflict bVar10;
  UnityEngine_GameObject_o *pUVar11;
  UI_InGameMenu_o *__this_01;
  System_String_o *pSVar12;
  UI_BasePopup_o *__this_02;
  Il2CppClass *str0;
  Il2CppObject *__this_03;
  MethodInfo *in_RCX;
  char extraout_DL;
  undefined8 extraout_RDX;
  undefined4 uVar13;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  UI_TipPanel_o *__this_04;
  UI_InGameMenu_o *__this_05;
  UI_BasePopup_o *__this_06;
  Il2CppObject *__this_07;
  float fVar14;
  float fVar15;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,immediate);
  __this_04 = (__this->fields)._tipPanel;
  if (__this_04 != (UI_TipPanel_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      __this_00 = (__this->fields)._tipPanel;
      __this_04 = (UI_TipPanel_o *)0x0;
      if (__this_00 != (UI_TipPanel_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UI_TipPanel__SetRandomTip(__this_00,(MethodInfo *)0x0);
        __this_04 = (__this->fields)._tipPanel;
        if (__this_04 != (UI_TipPanel_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            method_00 = (MethodInfo *)0x1;
            UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._backgroundPanel;
            __this_04 = (UI_TipPanel_o *)0x0;
            if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
              method_00 = (MethodInfo *)0x1;
              UI_LoadingBackgroundPanel__SetRandomBackground(pUVar2,1,0,in_RCX);
              pUVar2 = (__this->fields)._backgroundPanel;
              __this_04 = (UI_TipPanel_o *)0x0;
              if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                if ((char)immediate == '\0') {
                  method_00 = (((UI_BasePopup_c *)pUVar2->klass)->vtable)._21_Show.method;
                  (*(((UI_BasePopup_c *)pUVar2->klass)->vtable)._21_Show.methodPtr)();
                }
                else {
                  method_00 = (MethodInfo *)0x0;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
                }
                if (g_data_057ae510 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                  g_data_057ae510 = '\x01';
                }
                pUVar3 = (__this->fields)._progessPanel;
                __this_04 = (UI_TipPanel_o *)0x0;
                if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
                  if ((char)immediate == '\0') {
                    UI_LoadingProgressPanel__Show(pUVar3,0.0,method_00);
                    return;
                  }
                  UI_LoadingProgressPanel__ShowImmediate(pUVar3,0.0,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)method_00;
  if (g_data_057ae510 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae510 = '\x01';
  }
  pUVar3 = (UI_LoadingProgressPanel_o *)__this_04[3].fields.m_CachedPtr;
  __this_05 = (UI_InGameMenu_o *)0x0;
  if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
    fVar15 = 1.0;
    if (fVar14 <= 1.0) {
      fVar15 = fVar14;
    }
    fVar15 = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar15);
    if (extraout_DL == '\0') {
      UI_LoadingProgressPanel__Show(pUVar3,fVar15,method_00);
    }
    else {
      UI_LoadingProgressPanel__ShowImmediate(pUVar3,fVar15,method_00);
    }
    if (cVar9 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_05 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((__this_05->klass->_2).naturalAligment < bVar1) ||
         ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
      UI_InGameMenu__OnFinishLoading(__this_05,(MethodInfo *)0x0);
      if (g_data_057ae511 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
        g_data_057ae511 = '\x01';
      }
      __this_01 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
      __this_05 = __this_01;
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
      if (__this_01 != (UI_InGameMenu_o *)0x0) {
        (__this_01->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)__this_04;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,__this_04);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_04,(System_Collections_IEnumerator_o *)__this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
  il2cpp_runtime_helper_022b2fd0();
  __this_06 = (UI_BasePopup_o *)(__this_05->fields).CharacterInfoHandler;
  if ((__this_06 != (UI_BasePopup_o *)0x0) &&
     (pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0),
     pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
    pUVar4 = (__this_05->fields).ItemHandler;
    __this_06 = (UI_BasePopup_o *)0x0;
    if (pUVar4 != (UI_ItemHandler_o *)0x0) {
      (**(code **)&pUVar4->klass[1]._2.field_count)();
      pUVar5 = (__this_05->fields).EmoteHandler;
      __this_06 = (UI_BasePopup_o *)0x0;
      if (pUVar5 != (UI_EmoteHandler_o *)0x0) {
        pUVar6 = pUVar5->klass;
        vtableDispatch = *(code **)&pUVar6[1]._2.field_count;
        uVar7._0_2_ = pUVar6[1]._2.interfaces_count;
        uVar7._2_2_ = pUVar6[1]._2.interface_offsets_count;
        uVar7._4_1_ = pUVar6[1]._2.typeHierarchyDepth;
        uVar7._5_1_ = pUVar6[1]._2.genericRecursionDepth;
        uVar7._6_1_ = pUVar6[1]._2.rank;
        uVar7._7_1_ = pUVar6[1]._2.minimumAlignment;
        (*vtableDispatch)(pUVar5,uVar7,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae516 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae516 = '\x01';
  }
  plVar8 = __this_06[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_BasePopup_o *)0x0;
  pSVar12 = Utility_Util__FormatFloat(fVar14 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar12 != (System_String_o *)0x0) {
    __this_02 = (UI_BasePopup_o *)
                (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                          (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
    pSVar12 = System_String__Concat_3ae5ba0((System_String_o *)__this_02,"%",(MethodInfo *)0x0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x5e8))(plVar8,pSVar12,*(undefined8 *)(*plVar8 + 0x5f0));
      plVar8 = (long *)__this_06[1].fields.m_CachedPtr;
      __this_02 = (UI_BasePopup_o *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x428))(fVar14);
        UI_BasePopup__ShowImmediate(__this_06,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae517 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae517 = '\x01';
  }
  plVar8 = __this_02[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (Il2CppClass *)0x0;
  pSVar12 = Utility_Util__FormatFloat(fVar14 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar12 != (System_String_o *)0x0) {
    str0 = (Il2CppClass *)
           (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                     (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
    pSVar12 = System_String__Concat_3ae5ba0((System_String_o *)str0,"%",(MethodInfo *)0x0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x5e8))(plVar8,pSVar12,*(undefined8 *)(*plVar8 + 0x5f0));
      plVar8 = (long *)__this_02[1].fields.m_CachedPtr;
      str0 = (Il2CppClass *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x428))(fVar14);
        UI_BasePopup__Show(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
    g_data_057ae511 = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
  uVar13 = 0;
  __this_07 = __this_03;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = uVar13;
    return;
  }
  __this_03[2].klass = str0;
  il2cpp_runtime_helper_022b4080(__this_03 + 2,str0);
  return;
}


// UI.LoadingMenu$$Hide
// il2cpp: void UI_LoadingMenu__Hide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x43ef7e0

void UI_LoadingMenu__Hide(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  UI_LoadingProgressPanel_o *pUVar1;
  UI_LoadingBackgroundPanel_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar4;
  UI_BasePopup_o *__this_01;
  Il2CppClass *str0;
  Il2CppObject *__this_02;
  undefined8 extraout_RDX;
  undefined4 uVar5;
  UI_BasePopup_o *__this_03;
  Il2CppObject *__this_04;
  float fVar6;
  
  __this_03 = (UI_BasePopup_o *)(__this->fields)._tipPanel;
  if (__this_03 != (UI_BasePopup_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._progessPanel;
      __this_03 = (UI_BasePopup_o *)0x0;
      if (pUVar1 != (UI_LoadingProgressPanel_o *)0x0) {
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)();
        pUVar2 = (__this->fields)._backgroundPanel;
        __this_03 = (UI_BasePopup_o *)0x0;
        if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
          vtableDispatch = (pUVar2->klass->vtable)._22_Hide.methodPtr;
          (*vtableDispatch)
                    (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae516 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae516 = '\x01';
  }
  plVar3 = __this_03[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UI_BasePopup_o *)0x0;
  pSVar4 = Utility_Util__FormatFloat(fVar6 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_o *)0x0) {
    __this_01 = (UI_BasePopup_o *)
                (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
    pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)__this_01,"%",(MethodInfo *)0x0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5e8))(plVar3,pSVar4,*(undefined8 *)(*plVar3 + 0x5f0));
      plVar3 = (long *)__this_03[1].fields.m_CachedPtr;
      __this_01 = (UI_BasePopup_o *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x428))(fVar6);
        UI_BasePopup__ShowImmediate(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae517 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae517 = '\x01';
  }
  plVar3 = __this_01[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (Il2CppClass *)0x0;
  pSVar4 = Utility_Util__FormatFloat(fVar6 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_o *)0x0) {
    str0 = (Il2CppClass *)
           (*(pSVar4->klass->vtable)._3_ToString.methodPtr)(pSVar4,(pSVar4->klass->vtable)._3_ToString.method)
    ;
    pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)str0,"%",(MethodInfo *)0x0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5e8))(plVar3,pSVar4,*(undefined8 *)(*plVar3 + 0x5f0));
      plVar3 = (long *)__this_01[1].fields.m_CachedPtr;
      str0 = (Il2CppClass *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x428))(fVar6);
        UI_BasePopup__Show(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
    g_data_057ae511 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
  uVar5 = 0;
  __this_04 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = str0;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,str0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  *(undefined4 *)&__this_04[1].klass = uVar5;
  return;
}


// UI.LoadingMenu$$UpdateLoading
// il2cpp: void UI_LoadingMenu__UpdateLoading (UI_LoadingMenu_o* __this, float percentage, bool finished, bool immediate, const MethodInfo* method);
// 0x43ef670

void UI_LoadingMenu__UpdateLoading
               (UI_LoadingMenu_o *__this,float percentage,bool_conflict finished,bool_conflict immediate,
               MethodInfo *method)

{
  byte bVar1;
  UI_LoadingProgressPanel_o *__this_00;
  UI_ItemHandler_o *pUVar2;
  UI_EmoteHandler_o *pUVar3;
  UI_EmoteHandler_c *pUVar4;
  code *vtableDispatch;
  undefined8 uVar5;
  long *plVar6;
  UI_InGameMenu_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_String_o *pSVar7;
  UI_BasePopup_o *__this_03;
  Il2CppClass *str0;
  Il2CppObject *__this_04;
  undefined8 extraout_RDX;
  undefined4 uVar8;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_05;
  UI_BasePopup_o *__this_06;
  Il2CppObject *__this_07;
  float fVar9;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,finished);
  if (g_data_057ae510 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae510 = '\x01';
  }
  __this_00 = (__this->fields)._progessPanel;
  __this_05 = (UI_InGameMenu_o *)0x0;
  if (__this_00 != (UI_LoadingProgressPanel_o *)0x0) {
    fVar9 = 1.0;
    if (percentage <= 1.0) {
      fVar9 = percentage;
    }
    fVar9 = (float)(-(uint)(0.0 <= percentage) & (uint)fVar9);
    if ((char)immediate == '\0') {
      UI_LoadingProgressPanel__Show(__this_00,fVar9,method_00);
    }
    else {
      UI_LoadingProgressPanel__ShowImmediate(__this_00,fVar9,method_00);
    }
    if ((char)finished == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_05 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((__this_05->klass->_2).naturalAligment < bVar1) ||
         ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
      UI_InGameMenu__OnFinishLoading(__this_05,(MethodInfo *)0x0);
      if (g_data_057ae511 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
        g_data_057ae511 = '\x01';
      }
      __this_01 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
      __this_05 = __this_01;
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
      if (__this_01 != (UI_InGameMenu_o *)0x0) {
        (__this_01->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)__this;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
  il2cpp_runtime_helper_022b2fd0();
  __this_06 = (UI_BasePopup_o *)(__this_05->fields).CharacterInfoHandler;
  if ((__this_06 != (UI_BasePopup_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
    pUVar2 = (__this_05->fields).ItemHandler;
    __this_06 = (UI_BasePopup_o *)0x0;
    if (pUVar2 != (UI_ItemHandler_o *)0x0) {
      (**(code **)&pUVar2->klass[1]._2.field_count)();
      pUVar3 = (__this_05->fields).EmoteHandler;
      __this_06 = (UI_BasePopup_o *)0x0;
      if (pUVar3 != (UI_EmoteHandler_o *)0x0) {
        pUVar4 = pUVar3->klass;
        vtableDispatch = *(code **)&pUVar4[1]._2.field_count;
        uVar5._0_2_ = pUVar4[1]._2.interfaces_count;
        uVar5._2_2_ = pUVar4[1]._2.interface_offsets_count;
        uVar5._4_1_ = pUVar4[1]._2.typeHierarchyDepth;
        uVar5._5_1_ = pUVar4[1]._2.genericRecursionDepth;
        uVar5._6_1_ = pUVar4[1]._2.rank;
        uVar5._7_1_ = pUVar4[1]._2.minimumAlignment;
        (*vtableDispatch)(pUVar3,uVar5,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  fVar9 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae516 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae516 = '\x01';
  }
  plVar6 = __this_06[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = (UI_BasePopup_o *)0x0;
  pSVar7 = Utility_Util__FormatFloat(fVar9 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    __this_03 = (UI_BasePopup_o *)
                (*(pSVar7->klass->vtable)._3_ToString.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable)._3_ToString.method);
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)__this_03,"%",(MethodInfo *)0x0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x5e8))(plVar6,pSVar7,*(undefined8 *)(*plVar6 + 0x5f0));
      plVar6 = (long *)__this_06[1].fields.m_CachedPtr;
      __this_03 = (UI_BasePopup_o *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x428))(fVar9);
        UI_BasePopup__ShowImmediate(__this_06,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar9 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae517 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae517 = '\x01';
  }
  plVar6 = __this_03[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (Il2CppClass *)0x0;
  pSVar7 = Utility_Util__FormatFloat(fVar9 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    str0 = (Il2CppClass *)
           (*(pSVar7->klass->vtable)._3_ToString.methodPtr)(pSVar7,(pSVar7->klass->vtable)._3_ToString.method)
    ;
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"%",(MethodInfo *)0x0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x5e8))(plVar6,pSVar7,*(undefined8 *)(*plVar6 + 0x5f0));
      plVar6 = (long *)__this_03[1].fields.m_CachedPtr;
      str0 = (Il2CppClass *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x428))(fVar9);
        UI_BasePopup__Show(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
    g_data_057ae511 = '\x01';
  }
  __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
  uVar8 = 0;
  __this_07 = __this_04;
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  *(undefined4 *)&__this_04[1].klass = 0;
  if (__this_04 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_07,(MethodInfo *)0x0);
    *(undefined4 *)&__this_07[1].klass = uVar8;
    return;
  }
  __this_04[2].klass = str0;
  il2cpp_runtime_helper_022b4080(__this_04 + 2,str0);
  return;
}


// UI.LoadingMenu$$WaitAndHide
// il2cpp: System_Collections_IEnumerator_o* UI_LoadingMenu__WaitAndHide (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x43efa30

System_Collections_IEnumerator_o * UI_LoadingMenu__WaitAndHide(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
    g_data_057ae511 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.LoadingMenu$$.ctor
// il2cpp: void UI_LoadingMenu___ctor (UI_LoadingMenu_o* __this, const MethodInfo* method);
// 0x43efac0

void UI_LoadingMenu___ctor(UI_LoadingMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


