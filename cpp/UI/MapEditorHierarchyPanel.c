// Type: UI.MapEditorHierarchyPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorHierarchyPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyPanel.cs
// --------------------------------

// UI.MapEditorHierarchyPanel.<>c__DisplayClass35_0$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___ctor (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x4428590

void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___ctor
               (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass35_0$$<CreateMapItem>b__0
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___CreateMapItem_b__0 (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x4428ce0

void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___CreateMapItem_b__0
               (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  int iVar1;
  uint item;
  long lVar2;
  Settings_KeybindSetting_o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_BasePopup__o *__this_02;
  Map_MapScriptBaseObject_o *pMVar5;
  UI_MapEditorHierarchyPanel_o *pUVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  bool_conflict bVar8;
  Map_MapObject_o *pMVar9;
  UI_MapEditorMenu_o *__this_07;
  long *plVar10;
  MethodInfo *method_00;
  UI_MapEditorMenu_o *__this_08;
  GameManagers_MapEditorGameManager_o *pGVar11;
  float fVar12;
  undefined1 auVar13 [12];
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_T__o *pSVar16;
  Il2CppMethodPointer pIVar17;
  Il2CppObject *pIVar18;
  float fStack_38;
  float fStack_34;
  
  pMVar9 = (__this->fields).obj;
  if ((pMVar9 == (Map_MapObject_o *)0x0) ||
     (pMVar5 = (pMVar9->fields).ScriptObject, pMVar5 == (Map_MapScriptBaseObject_o *)0x0)) {
label_04428d05:
    il2cpp_runtime_helper_022b2c90();
    pMVar9 = (__this->fields).obj;
    if (((pMVar9 != (Map_MapObject_o *)0x0) &&
        ((pMVar9->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) &&
       ((__this->fields).__4__this != (UI_MapEditorHierarchyPanel_o *)0x0)) {
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae66f == '\0') {
      il2cpp_runtime_helper_023445d0(&"Map Info");
      g_data_057ae66f = '\x01';
    }
    return;
  }
  pUVar6 = (__this->fields).__4__this;
  __this = (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o *)0x0;
  if (pUVar6 == (UI_MapEditorHierarchyPanel_o *)0x0) goto label_04428d05;
  item = (pMVar5->fields).Id;
  method_00 = (MethodInfo *)(ulong)item;
  if (g_data_057ae66c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae66c = '\x01';
  }
  __this_08 = (pUVar6->fields)._menu;
  if (__this_08 == (UI_MapEditorMenu_o *)0x0) goto label_0442892b;
  bVar7 = UI_MapEditorMenu__IsPopupActive(__this_08,method_00);
  if ((char)bVar7 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x50), lVar2 == 0)) goto label_0442892b;
  __this_00 = *(Settings_KeybindSetting_o **)(lVar2 + 0x80);
  __this_08 = (UI_MapEditorMenu_o *)0x0;
  if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_0442892b;
  bVar7 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
  __this_08 = (UI_MapEditorMenu_o *)(pUVar6->fields)._selected;
  if (__this_08 == (UI_MapEditorMenu_o *)0x0) goto label_0442892b;
  bVar8 = System_Collections_Generic_HashSet_int___Contains
                    ((System_Collections_Generic_HashSet_int__o *)__this_08,item,MethodInfo_Boolean_Contains);
  if ((char)bVar8 == '\0') {
    pSVar3 = (pUVar6->fields)._selected;
    if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0442892b;
    iVar1 = (pSVar3->fields)._count;
    if ((~(byte)bVar7 & iVar1 != 0) != 0) {
      if (iVar1 < 1) goto label_04428905;
      pGVar11 = (pUVar6->fields)._gameManager;
      if (pGVar11 == (GameManagers_MapEditorGameManager_o *)0x0) {
        __this_08 = (UI_MapEditorMenu_o *)0x0;
        goto label_0442892b;
      }
      goto label_04428894;
    }
label_0442889b:
    pGVar11 = (pUVar6->fields)._gameManager;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = (UI_MapEditorMenu_o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    if ((__this_08 == (UI_MapEditorMenu_o *)0x0) ||
       (pMVar9 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__object___get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)__this_08,item,
                            MethodInfo_MapObject_get_Item), pGVar11 == (GameManagers_MapEditorGameManager_o *)0x0)) {
label_0442892b:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae6a2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
        g_data_057ae6a2 = '\x01';
      }
      pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
      pIVar17 = (Il2CppMethodPointer)0x0;
      pIVar18 = (Il2CppObject *)0x0;
      __this_02 = (__this_08->fields)._popups;
      if (__this_02 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,
                   (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
        do {
          __this_03.fields._8_8_ = pIVar17;
          __this_03.fields._list = pSVar16;
          __this_03.fields._current = pIVar18;
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
          if ((char)bVar7 == '\0') {
            __this_04.fields._8_8_ = pIVar17;
            __this_04.fields._list = pSVar16;
            __this_04.fields._current = pIVar18;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
            return;
          }
        } while (pIVar18 != (Il2CppObject *)0x0);
        il2cpp_runtime_helper_022b2c90();
      }
      auVar13 = il2cpp_runtime_helper_022b2c90();
      if (auVar13._8_4_ == 1) {
        plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
        lVar2 = *plVar10;
        __cxa_end_catch();
        __this_05.fields._8_8_ = pIVar17;
        __this_05.fields._list = pSVar16;
        __this_05.fields._current = pIVar18;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        if (lVar2 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar2);
      }
      __this_06.fields._8_8_ = pIVar17;
      __this_06.fields._list = pSVar16;
      __this_06.fields._current = pIVar18;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      _Unwind_Resume(auVar13._0_8_);
    }
    GameManagers_MapEditorGameManager__SelectObject(pGVar11,pMVar9,(MethodInfo *)0x0);
    pGVar11 = (pUVar6->fields)._gameManager;
    __this_08 = (UI_MapEditorMenu_o *)0x0;
    if (pGVar11 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0442892b;
  }
  else {
    pGVar11 = (pUVar6->fields)._gameManager;
    if ((byte)bVar7 == 0) {
      if ((pGVar11 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (pSVar4 = (pGVar11->fields).SelectedObjects,
         pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_0442892b;
      if ((pSVar4->fields)._count < 2) {
        lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
          __this_01 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_08 = (UI_MapEditorMenu_o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
          if ((((__this_08 != (UI_MapEditorMenu_o *)0x0) &&
               (pIVar18 = System_Collections_Generic_Dictionary_int__object___get_Item
                                    ((System_Collections_Generic_Dictionary_int__object__o *)__this_08,item,
                                     MethodInfo_MapObject_get_Item), pIVar18 != (Il2CppObject *)0x0)) &&
              (__this_08 = pIVar18[1].monitor, __this_08 != (UI_MapEditorMenu_o *)0x0)) &&
             (__this_07 = (UI_MapEditorMenu_o *)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_08,(MethodInfo *)0x0),
             __this_07 != (UI_MapEditorMenu_o *)0x0)) {
            UVar14 = UnityEngine_Transform__get_position
                               ((UnityEngine_Transform_o *)__this_07,(MethodInfo *)0x0);
            __this_08 = __this_07;
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UVar15 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
              fStack_38 = UVar14.fields.x;
              fStack_34 = UVar14.fields.y;
              value.fields.x = UVar15.fields.x * -50.0 + fStack_38;
              value.fields.y = UVar15.fields.y * -50.0 + fStack_34;
              value.fields.z = UVar15.fields.z * -50.0 + UVar14.fields.z;
              UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
              goto label_04428905;
            }
          }
        }
        goto label_0442892b;
      }
label_04428894:
      GameManagers_MapEditorGameManager__DeselectAll(pGVar11,(MethodInfo *)0x0);
      goto label_0442889b;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = (UI_MapEditorMenu_o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    if ((__this_08 == (UI_MapEditorMenu_o *)0x0) ||
       (pMVar9 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__object___get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)__this_08,item,
                            MethodInfo_MapObject_get_Item), pGVar11 == (GameManagers_MapEditorGameManager_o *)0x0))
    goto label_0442892b;
    GameManagers_MapEditorGameManager__DeselectObject(pGVar11,pMVar9,(MethodInfo *)0x0);
    pGVar11 = (pUVar6->fields)._gameManager;
    if (pGVar11 == (GameManagers_MapEditorGameManager_o *)0x0) {
      __this_08 = (UI_MapEditorMenu_o *)0x0;
      goto label_0442892b;
    }
  }
  GameManagers_MapEditorGameManager__OnSelectionChange(pGVar11,(MethodInfo *)0x0);
label_04428905:
  (pUVar6->fields)._lastClickedItem = item;
  fVar12 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (pUVar6->fields)._lastclickedTime = fVar12;
  return;
}


// UI.MapEditorHierarchyPanel.<>c__DisplayClass35_0$$<CreateMapItem>b__1
// il2cpp: void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___CreateMapItem_b__1 (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x4428d10

void UI_MapEditorHierarchyPanel___c__DisplayClass35_0___CreateMapItem_b__1
               (UI_MapEditorHierarchyPanel___c__DisplayClass35_0_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  
  pMVar1 = (__this->fields).obj;
  if (((pMVar1 != (Map_MapObject_o *)0x0) &&
      ((pMVar1->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0)) &&
     ((__this->fields).__4__this != (UI_MapEditorHierarchyPanel_o *)0x0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae66f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Map Info");
    g_data_057ae66f = '\x01';
  }
  return;
}


// UI.MapEditorHierarchyPanel$$get_Width
// il2cpp: float UI_MapEditorHierarchyPanel__get_Width (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x44266e0

float UI_MapEditorHierarchyPanel__get_Width(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 260.0;
}


// UI.MapEditorHierarchyPanel$$get_Height
// il2cpp: float UI_MapEditorHierarchyPanel__get_Height (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x44266f0

float UI_MapEditorHierarchyPanel__get_Height(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 1005.0;
}


// UI.MapEditorHierarchyPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_TopBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4426700

float UI_MapEditorHierarchyPanel__get_TopBarHeight(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorHierarchyPanel__get_BottomBarHeight (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4426710

float UI_MapEditorHierarchyPanel__get_BottomBarHeight(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorHierarchyPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorHierarchyPanel__get_VerticalSpacing (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4426720

float UI_MapEditorHierarchyPanel__get_VerticalSpacing(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MapEditorHierarchyPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_HorizontalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4426730

int32_t UI_MapEditorHierarchyPanel__get_HorizontalPadding
                  (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorHierarchyPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorHierarchyPanel__get_VerticalPadding (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4426740

int32_t UI_MapEditorHierarchyPanel__get_VerticalPadding
                  (UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorHierarchyPanel$$Setup
// il2cpp: void UI_MapEditorHierarchyPanel__Setup (UI_MapEditorHierarchyPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4426750

void UI_MapEditorHierarchyPanel__Setup
               (UI_MapEditorHierarchyPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int *piVar1;
  UI_MapEditorCustomLogicPopup_o **ppUVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  UI_KeybindPopup_o *pUVar6;
  UI_SetNamePopup_o *__this_00;
  UI_SelectListPopup_o *__this_01;
  UI_MapEditorInspectPanel_o *__this_02;
  UI_MapEditorBrushPanel_o *__this_03;
  UI_MapEditorInfoPopup_o *pUVar7;
  System_Threading_CancellationTokenSource_o *__this_04;
  InvokerMethod pIVar8;
  UI_MapEditorSettingsPopup_o *pUVar9;
  UI_MapEditorAddComponentPopup_o *__this_05;
  long lVar10;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_12;
  UnityEngine_Object_o *obj;
  bool_conflict bVar11;
  int iVar12;
  System_String_o *pSVar13;
  UI_ElementStyle_o *pUVar14;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UI_InputSettingElement_o *pUVar17;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_Text_o *method_00;
  Il2CppClass *pIVar18;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_13;
  System_String_o *pSVar19;
  MethodInfo *method_01;
  UnityEngine_UI_LayoutGroup_o *__this_14;
  UnityEngine_RectOffset_o *__this_15;
  long *plVar20;
  int iVar21;
  UI_MapEditorSettingsPopup_c *method_02;
  int iVar22;
  long *unaff_RBX;
  UI_MapEditorMenu_o *pUVar23;
  undefined8 *unaff_RBP;
  int32_t iVar24;
  UI_MapEditorMenu_o *pUVar25;
  System_String_o *in_R8;
  Settings_StringSetting_o *unaff_R12;
  UI_MapEditorMenu_o *unaff_R13;
  undefined1 auVar26 [12];
  undefined4 in_stack_ffffffffffffff10;
  int iVar27;
  UI_MapEditorMenu_o *in_stack_ffffffffffffff18;
  _union_236485 _Var28;
  _union_236485 _Stack_c0;
  Il2CppType *pIStack_b8;
  UnityEngine_Object_o *pUStack_b0;
  _union_236485 _Stack_a0;
  Il2CppType *pIStack_98;
  UnityEngine_Object_o *pUStack_90;
  UnityEngine_Events_UnityAction_o *pUStack_88;
  Settings_StringSetting_o *pSStack_80;
  UI_MapEditorMenu_o *pUStack_78;
  UI_BasePanel_o *pUStack_70;
  UI_MapEditorHierarchyPanel_o *pUStack_68;
  undefined8 *puStack_60;
  
  if (g_data_057ae669 == '\0') {
    puStack_60 = (undefined8 *)0x442677d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    puStack_60 = (undefined8 *)0x4426789;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    puStack_60 = (undefined8 *)0x4426795;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    puStack_60 = (undefined8 *)0x44267a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    puStack_60 = (undefined8 *)0x44267ad;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__32_0);
    puStack_60 = (undefined8 *)0x44267b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__32_1);
    puStack_60 = (undefined8 *)0x44267c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__32_2);
    puStack_60 = (undefined8 *)0x44267d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    puStack_60 = (undefined8 *)0x44267dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    puStack_60 = (undefined8 *)0x44267e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    puStack_60 = (undefined8 *)0x44267f5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    puStack_60 = (undefined8 *)0x4426801;
    il2cpp_runtime_helper_023445d0(&"0/0");
    puStack_60 = (undefined8 *)0x442680d;
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/ArrowRightIcon");
    puStack_60 = (undefined8 *)0x4426819;
    il2cpp_runtime_helper_023445d0(&"");
    puStack_60 = (undefined8 *)0x4426825;
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/ArrowLeftIcon");
    g_data_057ae669 = '\x01';
  }
  puStack_60 = (undefined8 *)0x4426839;
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pIVar18 = TypeInfo_MapEditorGameManager;
  pUVar25 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar25 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
label_044268c8:
    puStack_60 = (undefined8 *)0x44268cd;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._gameManager);
    unaff_RBX = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) {
      pUVar25 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar25 != (UI_MapEditorMenu_o *)0x0) goto label_044268f0;
label_0442696b:
      (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
label_0442697d:
      puStack_60 = (undefined8 *)0x4426982;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
      puStack_60 = (undefined8 *)0x4426995;
      pSVar13 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      unaff_RBP = &TypeInfo_ElementStyle;
      puStack_60 = (undefined8 *)0x44269a8;
      pUVar14 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      puStack_60 = (undefined8 *)0x44269c8;
      UI_ElementStyle___ctor(pUVar14,0x12,0.0,20.0,pSVar13,(MethodInfo *)0x0);
      (__this->fields)._style = pUVar14;
      puStack_60 = (undefined8 *)0x44269de;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._style,pUVar14);
      puStack_60 = (undefined8 *)0x44269f1;
      unaff_RBX = (long *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      puStack_60 = (undefined8 *)0x44269fd;
      parent = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      puStack_60 = (undefined8 *)0x4426a1d;
      UI_ElementStyle___ctor
                ((UI_ElementStyle_o *)parent,0x12,0.0,20.0,(System_String_o *)unaff_RBX,(MethodInfo *)0x0);
      pUVar25 = (UI_MapEditorMenu_o *)(__this->fields).SinglePanel;
      puStack_60 = (undefined8 *)0x4426a35;
      pUVar15 = UI_ElementFactory__CreateHorizontalGroup
                          ((UnityEngine_Transform_o *)pUVar25,10.0,3,(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
        puStack_60 = (undefined8 *)0x4426a48;
        pUVar16 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
        (__this->fields)._topGroup = pUVar16;
        puStack_60 = (undefined8 *)0x4426a5e;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._topGroup,pUVar16);
        unaff_R12 = (__this->fields)._searchSetting;
        unaff_R13 = (UI_MapEditorMenu_o *)(__this->fields)._topGroup;
        unaff_RBP = &TypeInfo_UnityAction;
        puStack_60 = (undefined8 *)0x4426a7c;
        unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        puStack_60 = (undefined8 *)0x4426a96;
        UnityEngine_Events_UnityAction___ctor();
        puStack_60 = (undefined8 *)0x4426ae2;
        pUVar25 = unaff_R13;
        in_R8 = "";
        pUVar15 = UI_ElementFactory__CreateInputSetting
                            ((UnityEngine_Transform_o *)unaff_R13,(UI_ElementStyle_o *)parent,
                             (Settings_BaseSetting_o *)unaff_R12,"","",100.0,32.0,0,
                             (UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)unaff_RBX,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
          puStack_60 = (undefined8 *)0x4426afd;
          pUVar17 = (UI_InputSettingElement_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
          (__this->fields)._searchInput = pUVar17;
          puStack_60 = (undefined8 *)0x4426b13;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._searchInput,pUVar17);
          pUVar14 = (__this->fields)._style;
          pUVar16 = (__this->fields)._topGroup;
          puStack_60 = (undefined8 *)0x4426b2a;
          onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          puStack_60 = (undefined8 *)0x4426b44;
          UnityEngine_Events_UnityAction___ctor();
          puStack_60 = (undefined8 *)0x4426b6a;
          UI_ElementFactory__CreateIconButton
                    (pUVar16,pUVar14,"Icons/Navigation/ArrowLeftIcon",18.0,18.0,onClick,(MethodInfo *)0x0);
          unaff_R12 = (Settings_StringSetting_o *)(__this->fields)._style;
          unaff_R13 = (UI_MapEditorMenu_o *)(__this->fields)._topGroup;
          puStack_60 = (undefined8 *)0x4426b81;
          unaff_RBX = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          puStack_60 = (undefined8 *)0x4426b9b;
          UnityEngine_Events_UnityAction___ctor();
          puStack_60 = (undefined8 *)0x4426bc1;
          UI_ElementFactory__CreateIconButton
                    ((UnityEngine_Transform_o *)unaff_R13,(UI_ElementStyle_o *)unaff_R12,"Icons/Navigation/ArrowRightIcon",18.0,
                     18.0,(UnityEngine_Events_UnityAction_o *)unaff_RBX,(MethodInfo *)0x0);
          puStack_60 = (undefined8 *)0x4426bd7;
          UI_BasePanel__CreateHorizontalDivider
                    ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
          pUVar25 = (UI_MapEditorMenu_o *)(__this->fields)._topGroup;
          in_R8 = (System_String_o *)&g_data_00000004;
          puStack_60 = (undefined8 *)0x4426bfb;
          pUVar15 = UI_ElementFactory__CreateDefaultLabel
                              ((UnityEngine_Transform_o *)pUVar25,(UI_ElementStyle_o *)parent,"0/0",0,4
                               ,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            puStack_60 = (undefined8 *)0x4426c12;
            method_00 = (UnityEngine_UI_Text_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_Text_GetComponent_Text);
            (__this->fields)._pageLabel = method_00;
            puStack_60 = (undefined8 *)0x4426c28;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._pageLabel);
            UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)method_00);
            return;
          }
        }
      }
      goto label_04426c46;
    }
    puStack_60 = (undefined8 *)0x4426958;
    il2cpp_runtime_helper_02337ed0();
    pUVar25 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar25 == (UI_MapEditorMenu_o *)0x0) goto label_0442696b;
label_044268f0:
    pIVar18 = TypeInfo_MapEditorMenu;
    bVar3 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if ((bVar3 <= (((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).naturalAligment) &&
       ((((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        TypeInfo_MapEditorMenu)) {
      (__this->fields)._menu = pUVar25;
      if ((bVar3 <= (((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).naturalAligment) &&
         ((((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] ==
          pIVar18)) goto label_0442697d;
    }
  }
  else {
    bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((bVar3 <= (((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).naturalAligment) &&
       ((((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        TypeInfo_MapEditorGameManager)) {
      (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar25;
      if ((bVar3 <= (((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).naturalAligment) &&
         ((((GameManagers_MapEditorGameManager_c *)pUVar25->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] ==
          pIVar18)) goto label_044268c8;
    }
  }
  puStack_60 = (undefined8 *)0x4426c46;
  il2cpp_runtime_helper_022b2fd0(pUVar25,pIVar18);
label_04426c46:
  puStack_60 = (undefined8 *)0x4426c4b;
  il2cpp_runtime_helper_022b2c90();
  pUStack_88 = (UnityEngine_Events_UnityAction_o *)unaff_RBX;
  pSStack_80 = unaff_R12;
  pUStack_78 = unaff_R13;
  pUStack_70 = parent;
  pUStack_68 = __this;
  puStack_60 = unaff_RBP;
  if (g_data_057ae66a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae66a = '\x01';
  }
  iVar27 = 0;
  _Stack_c0.genericMethod = (Il2CppObject *)0x0;
  pIStack_b8 = (Il2CppType *)0x0;
  pUStack_b0 = (UnityEngine_Object_o *)0x0;
  _Var28.genericMethod = (Il2CppObject *)0x0;
  pUVar6 = (pUVar25->fields).KeybindPopup;
  if (pUVar6 != (UI_KeybindPopup_o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_a0,
               (System_Collections_Generic_List_object__o *)pUVar6,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pUStack_b0 = pUStack_90;
    _Stack_c0 = _Stack_a0;
    pIStack_b8 = pIStack_98;
    __this = (UI_MapEditorHierarchyPanel_o *)&_Stack_c0;
    pUVar23 = pUVar25;
    while (__this_06.fields._list._4_4_ = iVar27, __this_06.fields._list._0_4_ = in_stack_ffffffffffffff10,
          __this_06.fields._8_8_ = pUVar23, __this_06.fields._current = _Var28.genericMethod,
          bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_06,(MethodInfo_321A1D0 *)__this), obj = pUStack_b0, (char)bVar11 != '\0')
    {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    }
    __this_07.fields._list._4_4_ = iVar27;
    __this_07.fields._list._0_4_ = in_stack_ffffffffffffff10;
    __this_07.fields._8_8_ = pUVar23;
    __this_07.fields._current = _Var28.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&_Stack_c0);
    pUVar6 = (pUVar25->fields).KeybindPopup;
    in_stack_ffffffffffffff18 = pUVar23;
    if (pUVar6 != (UI_KeybindPopup_o *)0x0) {
      piVar1 = (int *)((long)&(pUVar6->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      iVar24 = *(int32_t *)&(pUVar6->fields).m_CancellationTokenSource;
      *(undefined4 *)&(pUVar6->fields).m_CancellationTokenSource = 0;
      if (0 < iVar24) {
        System_Array__Clear((System_Array_o *)(pUVar6->fields).m_CachedPtr,0,iVar24,(MethodInfo *)0x0);
      }
      __this_00 = (pUVar25->fields).SetNamePopup;
      in_stack_ffffffffffffff18 = pUVar23;
      if (__this_00 != (UI_SetNamePopup_o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Clear
                  ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,MethodInfo_Void_Clear);
        __this_01 = (pUVar25->fields).SelectListPopup;
        in_stack_ffffffffffffff18 = pUVar23;
        if (__this_01 != (UI_SelectListPopup_o *)0x0) {
          System_Collections_Generic_Dictionary_int__int___Clear
                    ((System_Collections_Generic_Dictionary_int__int__o *)__this_01,MethodInfo_Void_Clear);
          __this_02 = (pUVar25->fields).InspectPanel;
          in_stack_ffffffffffffff18 = pUVar23;
          if (__this_02 != (UI_MapEditorInspectPanel_o *)0x0) {
            System_Collections_Generic_Dictionary_int__int___Clear
                      ((System_Collections_Generic_Dictionary_int__int__o *)__this_02,MethodInfo_Void_Clear);
            __this_03 = (pUVar25->fields).BrushPanel;
            in_stack_ffffffffffffff18 = pUVar23;
            if (__this_03 != (UI_MapEditorBrushPanel_o *)0x0) {
              System_Collections_Generic_HashSet_int___Clear
                        ((System_Collections_Generic_HashSet_int__o *)__this_03,MethodInfo_Void_Clear);
              __this = (UI_MapEditorHierarchyPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_Map_MapObject);
              pUVar7 = (pUVar25->fields).InfoPopup;
              in_stack_ffffffffffffff18 = pUVar23;
              if ((pUVar7 != (UI_MapEditorInfoPopup_o *)0x0) &&
                 (__this_04 = (pUVar7->fields).m_CancellationTokenSource,
                 __this_04 != (System_Threading_CancellationTokenSource_o *)0x0)) {
                pSVar13 = System_String__ToLower((System_String_o *)__this_04,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                in_stack_ffffffffffffff18 = pUVar23;
                if (((System_Collections_Generic_Dictionary_int__object__o *)
                     **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                     (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                   (__this_13 = System_Collections_Generic_Dictionary_int__object___get_Values
                                          ((System_Collections_Generic_Dictionary_int__object__o *)
                                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma),
                   in_stack_ffffffffffffff18 = pUVar23,
                   __this_13 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
                {
                  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)&_Stack_a0,__this_13,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
                  _Var28 = _Stack_a0;
                  if ((_union_236485 *)__this == (_union_236485 *)0x0) {
                    do {
                      __this_09.fields._dictionary._4_4_ = iVar27;
                      __this_09.fields._dictionary._0_4_ = in_stack_ffffffffffffff10;
                      __this_09.fields._8_8_ = pUVar23;
                      __this_09.fields._currentValue = _Var28.genericMethod;
                      bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                         (__this_09,(MethodInfo_32443D0 *)&stack0xffffffffffffff20);
                      if ((char)bVar11 == '\0') goto label_044271b0;
                      bVar11 = System_String__op_Equality(pSVar13,"",(MethodInfo *)0x0);
                      if ((char)bVar11 != '\0') break;
                      if (pUStack_90 == (UnityEngine_Object_o *)0x0) goto label_04427364;
                      if (pUStack_90[1].monitor == (void *)0x0) goto label_04427369;
                      pSVar19 = *(System_String_o **)((long)pUStack_90[1].monitor + 0x30);
                      if (pSVar19 == (System_String_o *)0x0) goto label_0442736e;
                      pSVar19 = System_String__ToLower(pSVar19,(MethodInfo *)0x0);
                      if (pSVar19 == (System_String_o *)0x0) goto label_04427373;
                      bVar11 = System_String__Contains(pSVar19,pSVar13,(MethodInfo *)0x0);
                      if ((char)bVar11 != '\0') break;
                      if (pUStack_90[1].monitor == (void *)0x0) goto label_0442737d;
                      pSVar19 = System_Int32__ToString((int)pUStack_90[1].monitor + 0x20,(MethodInfo *)0x0);
                      bVar11 = System_String__op_Equality(pSVar19,pSVar13,(MethodInfo *)0x0);
                    } while ((char)bVar11 == '\0');
                    il2cpp_runtime_helper_022b2c90();
label_044271b0:
                    __this_10.fields._dictionary._4_4_ = iVar27;
                    __this_10.fields._dictionary._0_4_ = in_stack_ffffffffffffff10;
                    __this_10.fields._8_8_ = pUVar23;
                    __this_10.fields._currentValue = _Var28.genericMethod;
                    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                              (__this_10,(MethodInfo_32443C0 *)&stack0xffffffffffffff20);
                    in_stack_ffffffffffffff18 = pUVar23;
                    goto label_044271c9;
                  }
label_0442700a:
                  __this_08.fields._dictionary._4_4_ = iVar27;
                  __this_08.fields._dictionary._0_4_ = in_stack_ffffffffffffff10;
                  __this_08.fields._8_8_ = pUVar23;
                  __this_08.fields._currentValue = _Var28.genericMethod;
                  bVar11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                     (__this_08,(MethodInfo_32443D0 *)&stack0xffffffffffffff20);
                  if ((char)bVar11 == '\0') goto label_044271b0;
                  bVar11 = System_String__op_Equality(pSVar13,"",(MethodInfo *)0x0);
                  if ((char)bVar11 != '\0') goto label_044270b0;
                  if (pUStack_90 == (UnityEngine_Object_o *)0x0) {
label_04427364:
                    il2cpp_runtime_helper_022b2c90();
                  }
                  else if (pUStack_90[1].monitor != (void *)0x0) {
                    pSVar19 = *(System_String_o **)((long)pUStack_90[1].monitor + 0x30);
                    if (pSVar19 != (System_String_o *)0x0) {
                      pSVar19 = System_String__ToLower(pSVar19,(MethodInfo *)0x0);
                      if (pSVar19 != (System_String_o *)0x0) {
                        bVar11 = System_String__Contains(pSVar19,pSVar13,(MethodInfo *)0x0);
                        if ((char)bVar11 != '\0') goto label_044270b0;
                        if (pUStack_90[1].monitor != (void *)0x0) goto code_r0x04427085;
                        goto label_0442737d;
                      }
                      goto label_04427373;
                    }
                    goto label_0442736e;
                  }
label_04427369:
                  il2cpp_runtime_helper_022b2c90();
label_0442736e:
                  il2cpp_runtime_helper_022b2c90();
label_04427373:
                  il2cpp_runtime_helper_022b2c90();
label_04427378:
                  il2cpp_runtime_helper_022b2c90();
label_0442737d:
                  il2cpp_runtime_helper_022b2c90();
                  in_stack_ffffffffffffff18 = pUVar23;
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    pUVar23 = in_stack_ffffffffffffff18;
    auVar26 = il2cpp_runtime_helper_022b2c90();
    if (auVar26._8_4_ != 1) {
label_0442752a:
      __this_12.fields._dictionary._4_4_ = iVar27;
      __this_12.fields._dictionary._0_4_ = in_stack_ffffffffffffff10;
      __this_12.fields._8_8_ = pUVar23;
      __this_12.fields._currentValue = _Var28.genericMethod;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                (__this_12,(MethodInfo_32443C0 *)&stack0xffffffffffffff20);
      _Unwind_Resume(auVar26._0_8_);
    }
    in_stack_ffffffffffffff18 = pUVar23;
    plVar20 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar10 = *plVar20;
    __cxa_end_catch();
    __this_11.fields._dictionary._4_4_ = iVar27;
    __this_11.fields._dictionary._0_4_ = in_stack_ffffffffffffff10;
    __this_11.fields._8_8_ = in_stack_ffffffffffffff18;
    __this_11.fields._currentValue = _Var28.genericMethod;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_11,(MethodInfo_32443C0 *)&stack0xffffffffffffff20);
    if (lVar10 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar10);
      pUVar23 = in_stack_ffffffffffffff18;
      goto label_0442752a;
    }
label_044271c9:
    if ((_union_236485 *)__this != (_union_236485 *)0x0) {
      iVar5 = *(int *)((long)__this + 0x18);
      iVar27 = (int)((ulong)((long)(iVar5 + -1) * -0x77777777) >> 0x20) + iVar5 + -1;
      iVar27 = ((iVar27 >> 4) - (iVar27 >> 0x1f)) + 1;
      ppUVar2 = &(pUVar23->fields).CustomLogicPopup;
      iVar12 = *(int *)&(pUVar23->fields).CustomLogicPopup;
      iVar22 = iVar27;
      if (iVar12 <= iVar27) {
        iVar22 = iVar12;
      }
      iVar21 = 1;
      if (0 < iVar12) {
        iVar21 = iVar22;
      }
      *(int *)&(pUVar23->fields).CustomLogicPopup = iVar21;
      pUVar9 = (pUVar23->fields).SettingsPopup;
      pSVar13 = System_Int32__ToString((int32_t)ppUVar2,(MethodInfo *)0x0);
      pSVar19 = System_Int32__ToString((int32_t)&stack0xffffffffffffff14,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)System_String__Concat_3af7150(pSVar13,"/",pSVar19,(MethodInfo *)0x0);
      if (pUVar9 != (UI_MapEditorSettingsPopup_o *)0x0) {
        method_02 = pUVar9->klass;
        (**(code **)&method_02[1]._2.element_size)
                  ((Il2CppMethodPointer)pUVar9,method_01,*(void **)&method_02[1]._2.static_fields_size,
                   (void **)method_02,in_R8);
        iVar12 = *(int *)ppUVar2;
        pUVar25 = in_stack_ffffffffffffff18;
        if (-0x7fffffe3 < iVar12 * 0x1e) {
          iVar22 = iVar12 * 0x1e + -0x1e;
          do {
            if (iVar22 < iVar5) {
              method_01 = (MethodInfo *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this,iVar22,MethodInfo_MapObject_get_Item);
              UI_MapEditorHierarchyPanel__CreateMapItem
                        ((UI_MapEditorHierarchyPanel_o *)in_stack_ffffffffffffff18,
                         (Map_MapObject_o *)method_01,0,(MethodInfo *)method_02);
              iVar12 = *(int *)&(in_stack_ffffffffffffff18->fields).CustomLogicPopup;
            }
            iVar22 = iVar22 + 1;
            method_02 = (UI_MapEditorSettingsPopup_c *)(ulong)(uint)(iVar12 * 0x1e);
          } while (iVar22 < iVar12 * 0x1e);
        }
        UI_MapEditorHierarchyPanel__SyncSelectedItems
                  ((UI_MapEditorHierarchyPanel_o *)in_stack_ffffffffffffff18,method_01);
        __this_05 = (in_stack_ffffffffffffff18->fields).AddComponentPopup;
        in_stack_ffffffffffffff18 = pUVar25;
        if (__this_05 != (UI_MapEditorAddComponentPopup_o *)0x0) {
          __this_14 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_05,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          __this_15 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
          if (iVar5 < 1) {
            iVar24 = 0;
          }
          else {
            iVar24 = 10;
          }
          in_R8 = (System_String_o *)0x0;
          UnityEngine_RectOffset___ctor_4dbeaf0(__this_15,iVar24,0,0,0,(MethodInfo *)0x0);
          in_stack_ffffffffffffff18 = pUVar25;
          if (__this_14 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            UnityEngine_UI_LayoutGroup__set_padding(__this_14,__this_15,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  } while( true );
code_r0x04427085:
  pSVar19 = System_Int32__ToString((int)pUStack_90[1].monitor + 0x20,(MethodInfo *)0x0);
  bVar11 = System_String__op_Equality(pSVar19,pSVar13,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
label_044270b0:
    lVar10 = MethodInfo_Void_Add;
    *(int *)((long)__this + 0x1c) = *(int *)((long)__this + 0x1c) + 1;
    pIVar8 = ((_union_236485 *)((long)__this + 0x10))->genericMethod;
    if (pIVar8 == (InvokerMethod)0x0) goto label_04427378;
    uVar4 = *(uint *)((long)__this + 0x18);
    if (uVar4 < *(uint *)(pIVar8 + 0x18)) {
      *(uint *)((long)__this + 0x18) = uVar4 + 1;
      *(UnityEngine_Object_o **)(pIVar8 + (long)(int)uVar4 * 8 + 0x20) = pUStack_90;
      il2cpp_runtime_helper_022b4080(pIVar8 + (long)(int)uVar4 * 8 + 0x20,pUStack_90);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pUStack_90,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto label_0442700a;
}


// UI.MapEditorHierarchyPanel$$Show
// il2cpp: void UI_MapEditorHierarchyPanel__Show (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x44275e0

void UI_MapEditorHierarchyPanel__Show(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$Sync
// il2cpp: void UI_MapEditorHierarchyPanel__Sync (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4426c50

void UI_MapEditorHierarchyPanel__Sync(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__int__o *pSVar5;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Settings_StringSetting_o *pSVar6;
  InvokerMethod pIVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_Transform_o *__this_02;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_09;
  UnityEngine_Object_o *obj;
  bool_conflict bVar10;
  int iVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_10;
  System_String_o *pSVar13;
  MethodInfo *method_00;
  UnityEngine_UI_LayoutGroup_o *__this_11;
  UnityEngine_RectOffset_o *__this_12;
  long *plVar14;
  int iVar15;
  UnityEngine_UI_Text_c *method_01;
  int iVar16;
  UI_MapEditorHierarchyPanel_o *pUVar17;
  int32_t iVar18;
  void *in_R8;
  _union_236485 *unaff_R15;
  undefined1 auVar19 [12];
  undefined4 in_stack_ffffffffffffff68;
  int iVar20;
  UI_MapEditorHierarchyPanel_o *in_stack_ffffffffffffff70;
  _union_236485 _Var21;
  _union_236485 local_68;
  Il2CppType *pIStack_60;
  UnityEngine_Object_o *local_58;
  _union_236485 local_48;
  Il2CppType *pIStack_40;
  UnityEngine_Object_o *local_38;
  
  if (g_data_057ae66a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae66a = '\x01';
  }
  iVar20 = 0;
  local_68.genericMethod = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  _Var21.genericMethod = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields)._items;
  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
    unaff_R15 = &local_68;
    pUVar17 = __this;
    while (__this_03.fields._list._4_4_ = iVar20, __this_03.fields._list._0_4_ = in_stack_ffffffffffffff68,
          __this_03.fields._8_8_ = pUVar17, __this_03.fields._current = _Var21.genericMethod,
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_03,(MethodInfo_321A1D0 *)unaff_R15), obj = local_58, (char)bVar10 != '\0'
          ) {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    }
    __this_04.fields._list._4_4_ = iVar20;
    __this_04.fields._list._0_4_ = in_stack_ffffffffffffff68;
    __this_04.fields._8_8_ = pUVar17;
    __this_04.fields._current = _Var21.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_68);
    pSVar4 = (__this->fields)._items;
    in_stack_ffffffffffffff70 = pUVar17;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar18 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < iVar18) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar18,(MethodInfo *)0x0);
      }
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
      in_stack_ffffffffffffff70 = pUVar17;
      if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Clear(__this_00,MethodInfo_Void_Clear);
        pSVar5 = (__this->fields)._idToIndex;
        in_stack_ffffffffffffff70 = pUVar17;
        if (pSVar5 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          System_Collections_Generic_Dictionary_int__int___Clear(pSVar5,MethodInfo_Void_Clear);
          pSVar5 = (__this->fields)._indexToId;
          in_stack_ffffffffffffff70 = pUVar17;
          if (pSVar5 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
            System_Collections_Generic_Dictionary_int__int___Clear(pSVar5,MethodInfo_Void_Clear);
            __this_01 = (__this->fields)._selected;
            in_stack_ffffffffffffff70 = pUVar17;
            if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              System_Collections_Generic_HashSet_int___Clear(__this_01,MethodInfo_Void_Clear);
              unaff_R15 = (_union_236485 *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)unaff_R15,MethodInfo_List_1_Map_MapObject);
              pSVar6 = (__this->fields)._searchSetting;
              in_stack_ffffffffffffff70 = pUVar17;
              if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
                 (pSVar12 = (pSVar6->fields)._value, pSVar12 != (System_String_o *)0x0)) {
                pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                in_stack_ffffffffffffff70 = pUVar17;
                if (((System_Collections_Generic_Dictionary_int__object__o *)
                     **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                     (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                   (__this_10 = System_Collections_Generic_Dictionary_int__object___get_Values
                                          ((System_Collections_Generic_Dictionary_int__object__o *)
                                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma),
                   in_stack_ffffffffffffff70 = pUVar17,
                   __this_10 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
                {
                  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)&local_48,__this_10,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
                  _Var21 = local_48;
                  if (unaff_R15 == (_union_236485 *)0x0) {
                    do {
                      __this_06.fields._dictionary._4_4_ = iVar20;
                      __this_06.fields._dictionary._0_4_ = in_stack_ffffffffffffff68;
                      __this_06.fields._8_8_ = pUVar17;
                      __this_06.fields._currentValue = _Var21.genericMethod;
                      bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                         (__this_06,(MethodInfo_32443D0 *)&stack0xffffffffffffff78);
                      if ((char)bVar10 == '\0') goto label_044271b0;
                      bVar10 = System_String__op_Equality(pSVar12,"",(MethodInfo *)0x0);
                      if ((char)bVar10 != '\0') break;
                      if (local_38 == (UnityEngine_Object_o *)0x0) goto label_04427364;
                      if (local_38[1].monitor == (void *)0x0) goto label_04427369;
                      pSVar13 = *(System_String_o **)((long)local_38[1].monitor + 0x30);
                      if (pSVar13 == (System_String_o *)0x0) goto label_0442736e;
                      pSVar13 = System_String__ToLower(pSVar13,(MethodInfo *)0x0);
                      if (pSVar13 == (System_String_o *)0x0) goto label_04427373;
                      bVar10 = System_String__Contains(pSVar13,pSVar12,(MethodInfo *)0x0);
                      if ((char)bVar10 != '\0') break;
                      if (local_38[1].monitor == (void *)0x0) goto label_0442737d;
                      pSVar13 = System_Int32__ToString((int)local_38[1].monitor + 0x20,(MethodInfo *)0x0);
                      bVar10 = System_String__op_Equality(pSVar13,pSVar12,(MethodInfo *)0x0);
                    } while ((char)bVar10 == '\0');
                    il2cpp_runtime_helper_022b2c90();
label_044271b0:
                    __this_07.fields._dictionary._4_4_ = iVar20;
                    __this_07.fields._dictionary._0_4_ = in_stack_ffffffffffffff68;
                    __this_07.fields._8_8_ = pUVar17;
                    __this_07.fields._currentValue = _Var21.genericMethod;
                    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                              (__this_07,(MethodInfo_32443C0 *)&stack0xffffffffffffff78);
                    in_stack_ffffffffffffff70 = pUVar17;
                    goto label_044271c9;
                  }
label_0442700a:
                  __this_05.fields._dictionary._4_4_ = iVar20;
                  __this_05.fields._dictionary._0_4_ = in_stack_ffffffffffffff68;
                  __this_05.fields._8_8_ = pUVar17;
                  __this_05.fields._currentValue = _Var21.genericMethod;
                  bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                     (__this_05,(MethodInfo_32443D0 *)&stack0xffffffffffffff78);
                  if ((char)bVar10 == '\0') goto label_044271b0;
                  bVar10 = System_String__op_Equality(pSVar12,"",(MethodInfo *)0x0);
                  if ((char)bVar10 != '\0') goto label_044270b0;
                  if (local_38 == (UnityEngine_Object_o *)0x0) {
label_04427364:
                    il2cpp_runtime_helper_022b2c90();
                  }
                  else if (local_38[1].monitor != (void *)0x0) {
                    pSVar13 = *(System_String_o **)((long)local_38[1].monitor + 0x30);
                    if (pSVar13 != (System_String_o *)0x0) {
                      pSVar13 = System_String__ToLower(pSVar13,(MethodInfo *)0x0);
                      if (pSVar13 != (System_String_o *)0x0) {
                        bVar10 = System_String__Contains(pSVar13,pSVar12,(MethodInfo *)0x0);
                        if ((char)bVar10 != '\0') goto label_044270b0;
                        if (local_38[1].monitor != (void *)0x0) goto code_r0x04427085;
                        goto label_0442737d;
                      }
                      goto label_04427373;
                    }
                    goto label_0442736e;
                  }
label_04427369:
                  il2cpp_runtime_helper_022b2c90();
label_0442736e:
                  il2cpp_runtime_helper_022b2c90();
label_04427373:
                  il2cpp_runtime_helper_022b2c90();
label_04427378:
                  il2cpp_runtime_helper_022b2c90();
label_0442737d:
                  il2cpp_runtime_helper_022b2c90();
                  in_stack_ffffffffffffff70 = pUVar17;
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    pUVar17 = in_stack_ffffffffffffff70;
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ != 1) {
label_0442752a:
      __this_09.fields._dictionary._4_4_ = iVar20;
      __this_09.fields._dictionary._0_4_ = in_stack_ffffffffffffff68;
      __this_09.fields._8_8_ = pUVar17;
      __this_09.fields._currentValue = _Var21.genericMethod;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                (__this_09,(MethodInfo_32443C0 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar19._0_8_);
    }
    in_stack_ffffffffffffff70 = pUVar17;
    plVar14 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar9 = *plVar14;
    __cxa_end_catch();
    __this_08.fields._dictionary._4_4_ = iVar20;
    __this_08.fields._dictionary._0_4_ = in_stack_ffffffffffffff68;
    __this_08.fields._8_8_ = in_stack_ffffffffffffff70;
    __this_08.fields._currentValue = _Var21.genericMethod;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_08,(MethodInfo_32443C0 *)&stack0xffffffffffffff78);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      pUVar17 = in_stack_ffffffffffffff70;
      goto label_0442752a;
    }
label_044271c9:
    if (unaff_R15 != (_union_236485 *)0x0) {
      iVar3 = *(int *)(unaff_R15 + 3);
      iVar20 = (int)((ulong)((long)(iVar3 + -1) * -0x77777777) >> 0x20) + iVar3 + -1;
      iVar20 = ((iVar20 >> 4) - (iVar20 >> 0x1f)) + 1;
      piVar1 = &(pUVar17->fields)._currentPage;
      iVar11 = (pUVar17->fields)._currentPage;
      iVar16 = iVar20;
      if (iVar11 <= iVar20) {
        iVar16 = iVar11;
      }
      iVar15 = 1;
      if (0 < iVar11) {
        iVar15 = iVar16;
      }
      (pUVar17->fields)._currentPage = iVar15;
      pUVar8 = (pUVar17->fields)._pageLabel;
      pSVar12 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
      pSVar13 = System_Int32__ToString((int32_t)&stack0xffffffffffffff6c,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)System_String__Concat_3af7150(pSVar12,"/",pSVar13,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
        method_01 = pUVar8->klass;
        (*(method_01->vtable)._75_set_text.methodPtr)
                  ((Il2CppMethodPointer)pUVar8,method_00,(method_01->vtable)._75_set_text.method,
                   (void **)method_01,in_R8);
        iVar11 = *piVar1;
        pUVar17 = in_stack_ffffffffffffff70;
        if (-0x7fffffe3 < iVar11 * 0x1e) {
          iVar16 = iVar11 * 0x1e + -0x1e;
          do {
            if (iVar16 < iVar3) {
              method_00 = (MethodInfo *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)unaff_R15,iVar16,
                                     MethodInfo_MapObject_get_Item);
              UI_MapEditorHierarchyPanel__CreateMapItem
                        (in_stack_ffffffffffffff70,(Map_MapObject_o *)method_00,0,(MethodInfo *)method_01);
              iVar11 = (in_stack_ffffffffffffff70->fields)._currentPage;
            }
            iVar16 = iVar16 + 1;
            method_01 = (UnityEngine_UI_Text_c *)(ulong)(uint)(iVar11 * 0x1e);
          } while (iVar16 < iVar11 * 0x1e);
        }
        UI_MapEditorHierarchyPanel__SyncSelectedItems(in_stack_ffffffffffffff70,method_00);
        __this_02 = (in_stack_ffffffffffffff70->fields)._topGroup;
        in_stack_ffffffffffffff70 = pUVar17;
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          __this_11 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_02,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          __this_12 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
          if (iVar3 < 1) {
            iVar18 = 0;
          }
          else {
            iVar18 = 10;
          }
          in_R8 = (void *)0x0;
          UnityEngine_RectOffset___ctor_4dbeaf0(__this_12,iVar18,0,0,0,(MethodInfo *)0x0);
          in_stack_ffffffffffffff70 = pUVar17;
          if (__this_11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            UnityEngine_UI_LayoutGroup__set_padding(__this_11,__this_12,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  } while( true );
code_r0x04427085:
  pSVar13 = System_Int32__ToString((int)local_38[1].monitor + 0x20,(MethodInfo *)0x0);
  bVar10 = System_String__op_Equality(pSVar13,pSVar12,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
label_044270b0:
    lVar9 = MethodInfo_Void_Add;
    *(int *)((long)unaff_R15 + 0x1c) = *(int *)((long)unaff_R15 + 0x1c) + 1;
    pIVar7 = unaff_R15[2].genericMethod;
    if (pIVar7 == (InvokerMethod)0x0) goto label_04427378;
    uVar2 = *(uint *)(unaff_R15 + 3);
    if (uVar2 < *(uint *)(pIVar7 + 0x18)) {
      *(uint *)(unaff_R15 + 3) = uVar2 + 1;
      *(UnityEngine_Object_o **)(pIVar7 + (long)(int)uVar2 * 8 + 0x20) = local_38;
      il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar2 * 8 + 0x20,local_38);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)unaff_R15,(Il2CppObject *)local_38,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto label_0442700a;
}


// UI.MapEditorHierarchyPanel$$CreateMapItem
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorHierarchyPanel__CreateMapItem (UI_MapEditorHierarchyPanel_o* __this, Map_MapObject_o* obj, int32_t level, const MethodInfo* method);
// 0x44275f0

UnityEngine_GameObject_o *
UI_MapEditorHierarchyPanel__CreateMapItem
          (UI_MapEditorHierarchyPanel_o *__this,Map_MapObject_o *obj,int32_t level,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar3;
  long lVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  UnityEngine_TextGenerator_o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  System_Collections_Generic_HashSet_int__o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_int__o __this_05;
  System_Collections_Generic_List_Enumerator_int__o __this_06;
  int32_t key;
  Il2CppType **ppIVar10;
  bool_conflict bVar11;
  UnityEngine_UI_Text_o *in_RAX;
  UnityEngine_UI_Text_o *__this_07;
  UnityEngine_UI_Text_o *__this_08;
  UnityEngine_UI_Text_o *pUVar12;
  UnityEngine_UI_Text_o *pUVar13;
  UnityEngine_UI_LayoutGroup_o *__this_09;
  UnityEngine_UI_Text_o *__this_10;
  System_Collections_Generic_List_TSource__o *__this_11;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_GameObject_o *extraout_RAX;
  long *plVar16;
  MethodInfo_255A0F0 **unaff_RBP;
  UnityEngine_UI_Text_o *__this_12;
  undefined8 unaff_R13;
  float fVar17;
  UnityEngine_Color_o UVar18;
  undefined1 auVar19 [12];
  undefined8 in_stack_ffffffffffffff30;
  Il2CppObject *pIVar20;
  _union_332950 _Var21;
  _union_332950 _Stack_a0;
  Il2CppType *pIStack_98;
  Il2CppType **ppIStack_90;
  _union_332950 _Stack_80;
  Il2CppType *pIStack_78;
  Il2CppType **ppIStack_70;
  UnityEngine_UI_Text_o *pUStack_68;
  UnityEngine_UI_Text_o *pUStack_60;
  undefined8 uStack_58;
  UnityEngine_UI_Text_o *pUStack_50;
  UI_MapEditorHierarchyPanel_o *pUStack_48;
  UnityEngine_UI_Text_o *pUStack_40;
  UnityEngine_UI_Text_o *local_38;
  
  __this_10 = (UnityEngine_UI_Text_o *)(ulong)(uint)level;
  local_38 = in_RAX;
  if (g_data_057ae66b == '\0') {
    pUStack_40 = (UnityEngine_UI_Text_o *)0x442761c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427628;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427634;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427640;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x442764c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHirarchyButton_AddComponent_MapEditorHirarchyBu);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427658;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427664;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427670;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x442767c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427688;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427694;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateMapItem_b__0);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateMapItem_b__1);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass35_0);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276c4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276d0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276dc;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276e8;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pUStack_40 = (UnityEngine_UI_Text_o *)0x44276f4;
    il2cpp_runtime_helper_023445d0(&"Text");
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427700;
    il2cpp_runtime_helper_023445d0(&"ArrowDownButton");
    pUStack_40 = (UnityEngine_UI_Text_o *)0x442770c;
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/MapEditorHierarchyButton");
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427718;
    il2cpp_runtime_helper_023445d0(&"Highlight");
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427724;
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427730;
    il2cpp_runtime_helper_023445d0(&"ArrowRightButton");
    g_data_057ae66b = '\x01';
  }
  pUStack_40 = (UnityEngine_UI_Text_o *)0x4427746;
  __this_07 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
  pUStack_40 = (UnityEngine_UI_Text_o *)0x4427753;
  __this_12 = __this_07;
  System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
  if (__this_07 != (UnityEngine_UI_Text_o *)0x0) {
    (__this_07->fields).m_CachedPtr = (intptr_t)__this;
    pUStack_40 = (UnityEngine_UI_Text_o *)0x442776e;
    il2cpp_runtime_helper_022b4080(&__this_07->fields,__this);
    unaff_RBP = (MethodInfo_255A0F0 **)&(__this_07->fields).m_CancellationTokenSource;
    (__this_07->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)obj;
    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427785;
    __this_12 = (UnityEngine_UI_Text_o *)unaff_RBP;
    il2cpp_runtime_helper_022b4080(unaff_RBP,obj);
    pSVar3 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
             (__this_07->fields).m_CancellationTokenSource;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
       (lVar4 = *(long *)&pSVar3->m_Items[0].fields, lVar4 != 0)) {
      unaff_R13 = *(undefined8 *)(lVar4 + 0x30);
      pUStack_40 = (UnityEngine_UI_Text_o *)0x44277b9;
      __this_08 = (UnityEngine_UI_Text_o *)
                  UI_ElementFactory__InstantiateAndBind
                            ((__this->fields).SinglePanel,"Prefabs/Misc/MapEditorHierarchyButton",(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      __this_12 = (UnityEngine_UI_Text_o *)(__this->fields)._items;
      if (__this_12 != (UnityEngine_UI_Text_o *)0x0) {
        piVar1 = (int32_t *)((long)&(__this_12->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar5 = (System_Object_array *)(__this_12->fields).m_CachedPtr;
        obj = (Map_MapObject_o *)__this_08;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&(__this_12->fields).m_CancellationTokenSource;
          if (uVar2 < (uint)pSVar5->max_length) {
            *(uint *)&(__this_12->fields).m_CancellationTokenSource = uVar2 + 1;
            __this_12 = (UnityEngine_UI_Text_o *)(pSVar5->m_Items + (int)uVar2);
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)__this_08;
            pUStack_40 = (UnityEngine_UI_Text_o *)0x442780b;
            il2cpp_runtime_helper_022b4080(__this_12,__this_08);
            pSVar3 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*unaff_RBP;
          }
          else {
            pUStack_40 = (UnityEngine_UI_Text_o *)0x4427830;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_12,(Il2CppObject *)__this_08,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            pSVar3 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*unaff_RBP;
          }
          if (((pSVar3 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
              (lVar4 = *(long *)&pSVar3->m_Items[0].fields, lVar4 != 0)) &&
             (__this_12 = (UnityEngine_UI_Text_o *)(__this->fields)._idToItem,
             __this_12 != (UnityEngine_UI_Text_o *)0x0)) {
            pUStack_40 = (UnityEngine_UI_Text_o *)0x442786f;
            System_Collections_Generic_Dictionary_int__object___Add
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this_12,
                       *(int32_t *)(lVar4 + 0x20),(Il2CppObject *)__this_08,MethodInfo_Void_Add);
            if ((((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*unaff_RBP !=
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
                (lVar4 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                   *unaff_RBP)->m_Items[0].fields, lVar4 != 0)) &&
               ((pSVar6 = (__this->fields)._items,
                pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0 &&
                (__this_12 = (UnityEngine_UI_Text_o *)(__this->fields)._idToIndex, local_38 = __this_10,
                __this_12 != (UnityEngine_UI_Text_o *)0x0)))) {
              pUStack_40 = (UnityEngine_UI_Text_o *)0x44278c5;
              System_Collections_Generic_Dictionary_int__int___Add
                        ((System_Collections_Generic_Dictionary_int__int__o *)__this_12,
                         *(int32_t *)(lVar4 + 0x20),(pSVar6->fields)._size + -1,MethodInfo_Void_Add);
              pSVar6 = (__this->fields)._items;
              __this_10 = (UnityEngine_UI_Text_o *)&MethodInfo_Void_Add;
              if (((pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*unaff_RBP !=
                   (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) &&
                 ((lVar4 = *(long *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     *unaff_RBP)->m_Items[0].fields, lVar4 != 0 &&
                  (__this_12 = (UnityEngine_UI_Text_o *)(__this->fields)._indexToId,
                  __this_12 != (UnityEngine_UI_Text_o *)0x0)))) {
                pUStack_40 = (UnityEngine_UI_Text_o *)0x4427910;
                System_Collections_Generic_Dictionary_int__int___Add
                          ((System_Collections_Generic_Dictionary_int__int__o *)__this_12,
                           (pSVar6->fields)._size + -1,*(int32_t *)(lVar4 + 0x20),MethodInfo_Void_Add);
                if (__this_08 != (UnityEngine_UI_Text_o *)0x0) {
                  pUStack_40 = (UnityEngine_UI_Text_o *)0x4427923;
                  __this_12 = __this_08;
                  pUVar12 = (UnityEngine_UI_Text_o *)
                            UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)__this_08,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427940;
                    pUVar13 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Transform__Find
                                        ((UnityEngine_Transform_o *)pUVar12,"Highlight",(MethodInfo *)0x0);
                    __this_12 = pUVar12;
                    if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                      pUStack_40 = (UnityEngine_UI_Text_o *)0x4427953;
                      pUVar14 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
                      __this_12 = pUVar13;
                      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                        pUStack_40 = (UnityEngine_UI_Text_o *)0x4427968;
                        UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
                        pUStack_40 = (UnityEngine_UI_Text_o *)0x4427972;
                        __this_12 = __this_08;
                        pUVar12 = (UnityEngine_UI_Text_o *)
                                  UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)__this_08,(MethodInfo *)0x0);
                        if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                          pUStack_40 = (UnityEngine_UI_Text_o *)0x442798f;
                          pUVar13 = (UnityEngine_UI_Text_o *)
                                    UnityEngine_Transform__Find
                                              ((UnityEngine_Transform_o *)pUVar12,"Text",
                                               (MethodInfo *)0x0);
                          __this_10 = (UnityEngine_UI_Text_o *)&"Text";
                          __this_12 = pUVar12;
                          if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                            pUStack_40 = (UnityEngine_UI_Text_o *)0x44279aa;
                            pUVar12 = (UnityEngine_UI_Text_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar13,MethodInfo_Text_GetComponent_Text);
                            __this_12 = pUVar13;
                            if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                              pUStack_40 = (UnityEngine_UI_Text_o *)0x44279cc;
                              (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
                                        (pUVar12,unaff_R13,(pUVar12->klass->vtable)._75_set_text.method);
                              pUStack_40 = (UnityEngine_UI_Text_o *)0x44279db;
                              UnityEngine_UI_Text__set_horizontalOverflow(pUVar12,1,(MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                pUStack_40 = (UnityEngine_UI_Text_o *)0x44279f3;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pUStack_40 = (UnityEngine_UI_Text_o *)0x4427a1c;
                              UVar18 = UI_UIManager__GetThemeColor
                                                 ("DefaultPanel","DefaultLabel","TextColor","DefaultPanel",
                                                  (MethodInfo *)0x0);
                              pUStack_40 = (UnityEngine_UI_Text_o *)0x4427a30;
                              (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                                        (UVar18.fields.r,UVar18.fields._8_8_,pUVar12);
                              pUStack_40 = (UnityEngine_UI_Text_o *)0x4427a3a;
                              __this_12 = __this_08;
                              pUVar13 = (UnityEngine_UI_Text_o *)
                                        UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)__this_08,(MethodInfo *)0x0);
                              unaff_RBP = (MethodInfo_255A0F0 **)pUVar12;
                              if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                pUStack_40 = (UnityEngine_UI_Text_o *)0x4427a50;
                                pUVar15 = UnityEngine_Transform__Find
                                                    ((UnityEngine_Transform_o *)pUVar13,"Text",
                                                     (MethodInfo *)0x0);
                                __this_12 = pUVar13;
                                if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                  pUStack_40 = (UnityEngine_UI_Text_o *)0x4427a6b;
                                  pIVar20 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar15,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                  pUStack_40 = (UnityEngine_UI_Text_o *)0x4427a81;
                                  __this_12 = (UnityEngine_UI_Text_o *)__this;
                                  fVar17 = (float)(*(__this->klass->vtable)._5_get_Width.methodPtr)
                                                            (__this,(__this->klass->vtable)._5_get_Width.
                                                                    method);
                                  __this_10 = (UnityEngine_UI_Text_o *)0x0;
                                  if (pIVar20 != (Il2CppObject *)0x0) {
                                    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427aa5;
                                    (*pIVar20->klass->vtable[0x24].methodPtr)
                                              (fVar17 + -40.0,pIVar20,pIVar20->klass->vtable[0x24].method);
                                    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427ab7;
                                    __this_09 = (UnityEngine_UI_LayoutGroup_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_08,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup)
                                    ;
                                    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427ac9;
                                    __this_10 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
                                    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427aeb;
                                    __this_12 = __this_10;
                                    UnityEngine_RectOffset___ctor_4dbeaf0
                                              ((UnityEngine_RectOffset_o *)__this_10,(int)local_38 * 10 + 10,0
                                               ,0,0,(MethodInfo *)0x0);
                                    unaff_RBP = (MethodInfo_255A0F0 **)0x0;
                                    if (__this_09 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
                                      pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b01;
                                      UnityEngine_UI_LayoutGroup__set_padding
                                                (__this_09,(UnityEngine_RectOffset_o *)__this_10,
                                                 (MethodInfo *)0x0);
                                      unaff_RBP = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
                                      pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b14;
                                      pIVar20 = UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_08,MethodInfo_LayoutElement_GetComponent_LayoutElement)
                                      ;
                                      pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b2a;
                                      __this_12 = (UnityEngine_UI_Text_o *)__this;
                                      (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                                (__this,(__this->klass->vtable)._5_get_Width.method);
                                      __this_10 = (UnityEngine_UI_Text_o *)0x0;
                                      if (pIVar20 != (Il2CppObject *)0x0) {
                                        pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b46;
                                        (*pIVar20->klass->vtable[0x20].methodPtr)
                                                  (pIVar20,pIVar20->klass->vtable[0x20].method);
                                        pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b52;
                                        pIVar20 = UnityEngine_GameObject__GetComponent_object_
                                                            ((UnityEngine_GameObject_o *)__this_08,
                                                             MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                        pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b68;
                                        __this_12 = (UnityEngine_UI_Text_o *)__this;
                                        (*(__this->klass->vtable)._5_get_Width.methodPtr)
                                                  (__this,(__this->klass->vtable)._5_get_Width.method);
                                        __this_10 = (UnityEngine_UI_Text_o *)0x0;
                                        if (pIVar20 != (Il2CppObject *)0x0) {
                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b84;
                                          (*pIVar20->klass->vtable[0x24].methodPtr)
                                                    (pIVar20,pIVar20->klass->vtable[0x24].method);
                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427b96;
                                          UnityEngine_GameObject__AddComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_08,MethodInfo_RectMask2D_AddComponent_RectMask2D);
                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427ba8;
                                          __this_10 = (UnityEngine_UI_Text_o *)
                                                      UnityEngine_GameObject__AddComponent_object_
                                                                ((UnityEngine_GameObject_o *)__this_08,
                                                                 MethodInfo_MapEditorHirarchyButton_AddComponent_MapEditorHirarchyBu);
                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427bbb;
                                          __this = (UI_MapEditorHierarchyPanel_o *)
                                                   il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427bd5;
                                          UnityEngine_Events_UnityAction___ctor();
                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427bde;
                                          unaff_RBP = (MethodInfo_255A0F0 **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427bf8;
                                          __this_12 = (UnityEngine_UI_Text_o *)unaff_RBP;
                                          UnityEngine_Events_UnityAction___ctor();
                                          if (__this_10 != (UnityEngine_UI_Text_o *)0x0) {
                                            __this_00 = (__this_10->fields).m_TextCacheForLayout;
                                            __this_12 = (UnityEngine_UI_Text_o *)0x0;
                                            if (__this_00 != (UnityEngine_TextGenerator_o *)0x0) {
                                              pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c1b;
                                              UnityEngine_Events_UnityEvent__AddListener
                                                        ((UnityEngine_Events_UnityEvent_o *)__this_00,
                                                         (UnityEngine_Events_UnityAction_o *)__this,
                                                         (MethodInfo *)0x0);
                                              *(MethodInfo_255A0F0 ***)
                                               &(__this_10->fields).m_DisableFontTextureRebuiltCallback =
                                                   unaff_RBP;
                                              pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c34;
                                              il2cpp_runtime_helper_022b4080(&(__this_10->fields).
                                                                  m_DisableFontTextureRebuiltCallback);
                                              pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c40;
                                              UnityEngine_UI_Selectable__set_transition
                                                        ((UnityEngine_UI_Selectable_o *)__this_10,0,
                                                         (MethodInfo *)0x0);
                                              pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c4a;
                                              __this_12 = __this_08;
                                              pUVar12 = (UnityEngine_UI_Text_o *)
                                                        UnityEngine_GameObject__get_transform
                                                                  ((UnityEngine_GameObject_o *)__this_08,
                                                                   (MethodInfo *)0x0);
                                              if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                                                pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c67;
                                                pUVar13 = (UnityEngine_UI_Text_o *)
                                                          UnityEngine_Transform__Find
                                                                    ((UnityEngine_Transform_o *)pUVar12,
                                                                     "ArrowRightButton",(MethodInfo *)0x0);
                                                __this_12 = pUVar12;
                                                if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                                  pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c76;
                                                  pUVar14 = UnityEngine_Component__get_gameObject
                                                                      ((UnityEngine_Component_o *)pUVar13,
                                                                       (MethodInfo *)0x0);
                                                  __this_12 = pUVar13;
                                                  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c87;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar14,0,(MethodInfo *)0x0);
                                                    pUStack_40 = (UnityEngine_UI_Text_o *)0x4427c91;
                                                    __this_12 = __this_08;
                                                    pUVar12 = (UnityEngine_UI_Text_o *)
                                                              UnityEngine_GameObject__get_transform
                                                                        ((UnityEngine_GameObject_o *)__this_08
                                                                         ,(MethodInfo *)0x0);
                                                    if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                                                      pUStack_40 = (UnityEngine_UI_Text_o *)0x4427caa;
                                                      pUVar13 = (UnityEngine_UI_Text_o *)
                                                                UnityEngine_Transform__Find
                                                                          ((UnityEngine_Transform_o *)pUVar12,
                                                                           "ArrowDownButton",(MethodInfo *)0x0);
                                                      __this_12 = pUVar12;
                                                      if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                                        pUStack_40 = (UnityEngine_UI_Text_o *)0x4427cb9;
                                                        pUVar14 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)
                                                                             pUVar13,(MethodInfo *)0x0);
                                                        __this_12 = pUVar13;
                                                        if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                                                          pUStack_40 = (UnityEngine_UI_Text_o *)0x4427cca;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar14,0,(MethodInfo *)0x0);
                                                          return (UnityEngine_GameObject_o *)__this_08;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pUStack_40 = (UnityEngine_UI_Text_o *)0x4427ce1;
  il2cpp_runtime_helper_022b2c90();
  pUStack_68 = __this_10;
  pUStack_60 = __this_07;
  uStack_58 = unaff_R13;
  pUStack_50 = (UnityEngine_UI_Text_o *)obj;
  pUStack_48 = __this;
  pUStack_40 = (UnityEngine_UI_Text_o *)unaff_RBP;
  if (g_data_057ae66d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&"Highlight");
    g_data_057ae66d = '\x01';
  }
  _Stack_a0.genericMethod = (Il2CppObject *)0x0;
  pIStack_98 = (Il2CppType *)0x0;
  ppIStack_90 = (Il2CppType **)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  _Var21.genericMethod = (Il2CppObject *)0x0;
  __this_11 = System_Linq_Enumerable__ToList_int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)
                         (__this_12->fields).m_ColorTweenRunner,MethodInfo_List_1_System_Int32_ToList_Int32);
  if (__this_11 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_04428233;
  System_Collections_Generic_List_int___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_80,
             (System_Collections_Generic_List_int__o *)__this_11,MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
  ppIStack_90 = ppIStack_70;
  _Stack_a0 = _Stack_80;
  pIStack_98 = pIStack_78;
  while( true ) {
    do {
      do {
        __this_01.fields._8_8_ = pIVar20;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
        __this_01.fields._16_8_ = _Var21.genericMethod;
        bVar11 = System_Collections_Generic_List_Enumerator_int___MoveNext
                           (__this_01,(MethodInfo_3215510 *)&_Stack_a0);
        if ((char)bVar11 == '\0') {
          __this_02.fields._8_8_ = pIVar20;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
          __this_02.fields._16_8_ = _Var21.genericMethod;
          System_Collections_Generic_List_Enumerator_int___Dispose(__this_02,(MethodInfo_3215500 *)&_Stack_a0)
          ;
          goto label_04427ff3;
        }
        key = (int32_t)ppIStack_90;
        pIVar20 = (Il2CppObject *)0x0;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044281cf;
        System_Collections_Generic_Dictionary_int__object___TryGetValue
                  ((System_Collections_Generic_Dictionary_int__object__o *)
                   **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,(Il2CppObject **)&stack0xffffffffffffff38,
                   MethodInfo_Boolean_TryGetValue);
        lVar4 = *(long *)&(__this_12->fields).m_IncludeForMasking;
        if (lVar4 == 0) goto label_044281d4;
        pSVar7 = *(System_Collections_Generic_HashSet_object__o **)(lVar4 + 0x38);
        if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044281d9;
        bVar11 = System_Collections_Generic_HashSet_object___Contains(pSVar7,pIVar20,MethodInfo_Boolean_Contains);
      } while ((char)bVar11 != '\0');
      pSVar8 = (System_Collections_Generic_HashSet_int__o *)(__this_12->fields).m_ColorTweenRunner;
      if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_044281f2;
      System_Collections_Generic_HashSet_int___Remove(pSVar8,key,MethodInfo_Boolean_Remove);
      pUVar9 = (__this_12->fields).m_OnDirtyMaterialCallback;
      if (pUVar9 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_044281f7;
      bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                         ((System_Collections_Generic_Dictionary_int__object__o *)pUVar9,key,MethodInfo_Boolean_ContainsKey);
    } while ((char)bVar11 == '\0');
    pUVar9 = (__this_12->fields).m_OnDirtyMaterialCallback;
    if (pUVar9 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_0442821a;
    pUVar14 = (UnityEngine_GameObject_o *)
              System_Collections_Generic_Dictionary_int__object___get_Item
                        ((System_Collections_Generic_Dictionary_int__object__o *)pUVar9,key,MethodInfo_GameObject_get_Item);
    if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_0442821f;
    pUVar15 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_04428224;
    pUVar15 = UnityEngine_Transform__Find(pUVar15,"Highlight",(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_04428229;
    pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_04428233:
    do {
      auVar19 = il2cpp_runtime_helper_022b2c90();
      if (auVar19._8_4_ != 1) {
label_044284ee:
        __this_06.fields._8_8_ = pIVar20;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
        __this_06.fields._16_8_ = _Var21.genericMethod;
        System_Collections_Generic_List_Enumerator_int___Dispose(__this_06,(MethodInfo_3215500 *)&_Stack_a0);
        _Unwind_Resume(auVar19._0_8_);
      }
      plVar16 = (long *)__cxa_begin_catch(auVar19._0_8_);
      lVar4 = *plVar16;
      __cxa_end_catch();
      __this_05.fields._8_8_ = pIVar20;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
      __this_05.fields._16_8_ = _Var21.genericMethod;
      System_Collections_Generic_List_Enumerator_int___Dispose(__this_05,(MethodInfo_3215500 *)&_Stack_a0);
      if (lVar4 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar4);
        goto label_044284ee;
      }
label_04427ff3:
      lVar4 = *(long *)&(__this_12->fields).m_IncludeForMasking;
    } while ((lVar4 == 0) ||
            (pSVar7 = *(System_Collections_Generic_HashSet_object__o **)(lVar4 + 0x38),
            pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0));
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_80,pSVar7,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    ppIVar10 = ppIStack_70;
    _Var21 = _Stack_80;
    while( true ) {
      __this_03.fields._8_8_ = pIVar20;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff30;
      __this_03.fields._current = _Var21.genericMethod;
      bVar11 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         (__this_03,(MethodInfo_3219C40 *)&stack0xffffffffffffff40);
      if ((char)bVar11 == '\0') {
        __this_04.fields._8_8_ = pIVar20;
        __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff30;
        __this_04.fields._current = _Var21.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff40);
        return extraout_RAX;
      }
      if (ppIVar10 == (Il2CppType **)0x0) break;
      if (ppIVar10[4] == (Il2CppType *)0x0) goto label_044281c5;
      pSVar8 = (System_Collections_Generic_HashSet_int__o *)(__this_12->fields).m_ColorTweenRunner;
      if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_044281ca;
      bVar11 = System_Collections_Generic_HashSet_int___Contains
                         (pSVar8,*(int32_t *)&ppIVar10[4][2].data,MethodInfo_Boolean_Contains);
      if ((char)bVar11 == '\0') {
        if (ppIVar10[4] == (Il2CppType *)0x0) goto label_044281de;
        pSVar8 = (System_Collections_Generic_HashSet_int__o *)(__this_12->fields).m_ColorTweenRunner;
        if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_044281e3;
        System_Collections_Generic_HashSet_int___Add(pSVar8,*(int32_t *)&ppIVar10[4][2].data,MethodInfo_Boolean_Add);
        if (ppIVar10[4] == (Il2CppType *)0x0) goto label_044281e8;
        pUVar9 = (__this_12->fields).m_OnDirtyMaterialCallback;
        if (pUVar9 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_044281ed;
        bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_int__object__o *)pUVar9,
                            *(int32_t *)&ppIVar10[4][2].data,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar11 != '\0') {
          if (ppIVar10[4] == (Il2CppType *)0x0) goto label_044281fc;
          pUVar9 = (__this_12->fields).m_OnDirtyMaterialCallback;
          if (pUVar9 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_04428201;
          pUVar14 = (UnityEngine_GameObject_o *)
                    System_Collections_Generic_Dictionary_int__object___get_Item
                              ((System_Collections_Generic_Dictionary_int__object__o *)pUVar9,
                               *(int32_t *)&ppIVar10[4][2].data,MethodInfo_GameObject_get_Item);
          if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_04428206;
          pUVar15 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
          if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0442820b;
          pUVar15 = UnityEngine_Transform__Find(pUVar15,"Highlight",(MethodInfo *)0x0);
          if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_04428210;
          pUVar14 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
          if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_04428215;
          UnityEngine_GameObject__SetActive(pUVar14,1,(MethodInfo *)0x0);
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_044281c5:
    il2cpp_runtime_helper_022b2c90();
label_044281ca:
    il2cpp_runtime_helper_022b2c90();
label_044281cf:
    il2cpp_runtime_helper_022b2c90();
label_044281d4:
    il2cpp_runtime_helper_022b2c90();
label_044281d9:
    il2cpp_runtime_helper_022b2c90();
label_044281de:
    il2cpp_runtime_helper_022b2c90();
label_044281e3:
    il2cpp_runtime_helper_022b2c90();
label_044281e8:
    il2cpp_runtime_helper_022b2c90();
label_044281ed:
    il2cpp_runtime_helper_022b2c90();
label_044281f2:
    il2cpp_runtime_helper_022b2c90();
label_044281f7:
    il2cpp_runtime_helper_022b2c90();
label_044281fc:
    il2cpp_runtime_helper_022b2c90();
label_04428201:
    il2cpp_runtime_helper_022b2c90();
label_04428206:
    il2cpp_runtime_helper_022b2c90();
label_0442820b:
    il2cpp_runtime_helper_022b2c90();
label_04428210:
    il2cpp_runtime_helper_022b2c90();
label_04428215:
    il2cpp_runtime_helper_022b2c90();
label_0442821a:
    il2cpp_runtime_helper_022b2c90();
label_0442821f:
    il2cpp_runtime_helper_022b2c90();
label_04428224:
    il2cpp_runtime_helper_022b2c90();
label_04428229:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// UI.MapEditorHierarchyPanel$$OnPageClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnPageClick (UI_MapEditorHierarchyPanel_o* __this, bool left, const MethodInfo* method);
// 0x44285a0

void UI_MapEditorHierarchyPanel__OnPageClick
               (UI_MapEditorHierarchyPanel_o *__this,bool_conflict left,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields)._currentPage = (__this->fields)._currentPage + ((left ^ 1U) & 0xff) * 2 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,(MethodInfo *)(CONCAT44(in_register_00000034,left) ^ 1));
  return;
}


// UI.MapEditorHierarchyPanel$$OnButtonRelease
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonRelease (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x44285c0

void UI_MapEditorHierarchyPanel__OnButtonRelease
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  return;
}


// UI.MapEditorHierarchyPanel$$OnButtonClick
// il2cpp: void UI_MapEditorHierarchyPanel__OnButtonClick (UI_MapEditorHierarchyPanel_o* __this, int32_t id, const MethodInfo* method);
// 0x44285d0

void UI_MapEditorHierarchyPanel__OnButtonClick
               (UI_MapEditorHierarchyPanel_o *__this,int32_t id,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_KeybindSetting_o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_BasePopup__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar5;
  bool_conflict bVar6;
  Map_MapObject_o *pMVar7;
  UI_MapEditorMenu_o *__this_07;
  long *plVar8;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  UI_MapEditorMenu_o *__this_08;
  GameManagers_MapEditorGameManager_o *pGVar9;
  float fVar10;
  undefined1 auVar11 [12];
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_T__o *pSVar14;
  Il2CppMethodPointer pIVar15;
  Il2CppObject *pIVar16;
  float fStack_38;
  float fStack_34;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,id);
  if (g_data_057ae66c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae66c = '\x01';
  }
  __this_08 = (__this->fields)._menu;
  if (__this_08 == (UI_MapEditorMenu_o *)0x0) goto label_0442892b;
  bVar5 = UI_MapEditorMenu__IsPopupActive(__this_08,method_00);
  if ((char)bVar5 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x50), lVar2 == 0)) goto label_0442892b;
  __this_00 = *(Settings_KeybindSetting_o **)(lVar2 + 0x80);
  __this_08 = (UI_MapEditorMenu_o *)0x0;
  if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_0442892b;
  bVar5 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
  __this_08 = (UI_MapEditorMenu_o *)(__this->fields)._selected;
  if (__this_08 == (UI_MapEditorMenu_o *)0x0) goto label_0442892b;
  bVar6 = System_Collections_Generic_HashSet_int___Contains
                    ((System_Collections_Generic_HashSet_int__o *)__this_08,id,MethodInfo_Boolean_Contains);
  if ((char)bVar6 == '\0') {
    pSVar3 = (__this->fields)._selected;
    if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0442892b;
    iVar1 = (pSVar3->fields)._count;
    if ((~(byte)bVar5 & iVar1 != 0) != 0) {
      if (iVar1 < 1) goto label_04428905;
      pGVar9 = (__this->fields)._gameManager;
      if (pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0) {
        __this_08 = (UI_MapEditorMenu_o *)0x0;
        goto label_0442892b;
      }
      goto label_04428894;
    }
label_0442889b:
    pGVar9 = (__this->fields)._gameManager;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = (UI_MapEditorMenu_o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    if ((__this_08 == (UI_MapEditorMenu_o *)0x0) ||
       (pMVar7 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__object___get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)__this_08,id,MethodInfo_MapObject_get_Item)
       , pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0)) {
label_0442892b:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae6a2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
        g_data_057ae6a2 = '\x01';
      }
      pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
      pIVar15 = (Il2CppMethodPointer)0x0;
      pIVar16 = (Il2CppObject *)0x0;
      __this_02 = (__this_08->fields)._popups;
      if (__this_02 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,
                   (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
        do {
          __this_03.fields._8_8_ = pIVar15;
          __this_03.fields._list = pSVar14;
          __this_03.fields._current = pIVar16;
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
          if ((char)bVar5 == '\0') {
            __this_04.fields._8_8_ = pIVar15;
            __this_04.fields._list = pSVar14;
            __this_04.fields._current = pIVar16;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
            return;
          }
        } while (pIVar16 != (Il2CppObject *)0x0);
        il2cpp_runtime_helper_022b2c90();
      }
      auVar11 = il2cpp_runtime_helper_022b2c90();
      if (auVar11._8_4_ == 1) {
        plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
        lVar2 = *plVar8;
        __cxa_end_catch();
        __this_05.fields._8_8_ = pIVar15;
        __this_05.fields._list = pSVar14;
        __this_05.fields._current = pIVar16;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        if (lVar2 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar2);
      }
      __this_06.fields._8_8_ = pIVar15;
      __this_06.fields._list = pSVar14;
      __this_06.fields._current = pIVar16;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      _Unwind_Resume(auVar11._0_8_);
    }
    GameManagers_MapEditorGameManager__SelectObject(pGVar9,pMVar7,(MethodInfo *)0x0);
    pGVar9 = (__this->fields)._gameManager;
    __this_08 = (UI_MapEditorMenu_o *)0x0;
    if (pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0442892b;
  }
  else {
    pGVar9 = (__this->fields)._gameManager;
    if ((byte)bVar5 == 0) {
      if ((pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0) ||
         (pSVar4 = (pGVar9->fields).SelectedObjects,
         pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_0442892b;
      if ((pSVar4->fields)._count < 2) {
        lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
          __this_01 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_08 = (UI_MapEditorMenu_o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
          if ((((__this_08 != (UI_MapEditorMenu_o *)0x0) &&
               (pIVar16 = System_Collections_Generic_Dictionary_int__object___get_Item
                                    ((System_Collections_Generic_Dictionary_int__object__o *)__this_08,id,
                                     MethodInfo_MapObject_get_Item), pIVar16 != (Il2CppObject *)0x0)) &&
              (__this_08 = pIVar16[1].monitor, __this_08 != (UI_MapEditorMenu_o *)0x0)) &&
             (__this_07 = (UI_MapEditorMenu_o *)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_08,(MethodInfo *)0x0),
             __this_07 != (UI_MapEditorMenu_o *)0x0)) {
            UVar12 = UnityEngine_Transform__get_position
                               ((UnityEngine_Transform_o *)__this_07,(MethodInfo *)0x0);
            __this_08 = __this_07;
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UVar13 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
              fStack_38 = UVar12.fields.x;
              fStack_34 = UVar12.fields.y;
              value.fields.x = UVar13.fields.x * -50.0 + fStack_38;
              value.fields.y = UVar13.fields.y * -50.0 + fStack_34;
              value.fields.z = UVar13.fields.z * -50.0 + UVar12.fields.z;
              UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
              goto label_04428905;
            }
          }
        }
        goto label_0442892b;
      }
label_04428894:
      GameManagers_MapEditorGameManager__DeselectAll(pGVar9,(MethodInfo *)0x0);
      goto label_0442889b;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_08 = (UI_MapEditorMenu_o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    if ((__this_08 == (UI_MapEditorMenu_o *)0x0) ||
       (pMVar7 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__object___get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)__this_08,id,MethodInfo_MapObject_get_Item)
       , pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0)) goto label_0442892b;
    GameManagers_MapEditorGameManager__DeselectObject(pGVar9,pMVar7,(MethodInfo *)0x0);
    pGVar9 = (__this->fields)._gameManager;
    if (pGVar9 == (GameManagers_MapEditorGameManager_o *)0x0) {
      __this_08 = (UI_MapEditorMenu_o *)0x0;
      goto label_0442892b;
    }
  }
  GameManagers_MapEditorGameManager__OnSelectionChange(pGVar9,(MethodInfo *)0x0);
label_04428905:
  (__this->fields)._lastClickedItem = id;
  fVar10 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastclickedTime = fVar10;
  return;
}


// UI.MapEditorHierarchyPanel$$SyncSelectedItems
// il2cpp: void UI_MapEditorHierarchyPanel__SyncSelectedItems (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4427cf0

void UI_MapEditorHierarchyPanel__SyncSelectedItems(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_int__o __this_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_int__o __this_04;
  System_Collections_Generic_List_Enumerator_int__o __this_05;
  int32_t key;
  Il2CppType **ppIVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_TSource__o *__this_06;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  long *plVar10;
  undefined1 auVar11 [12];
  undefined8 in_stack_ffffffffffffff68;
  Il2CppObject *item;
  _union_332950 _Var12;
  _union_332950 local_68;
  Il2CppType *pIStack_60;
  Il2CppType **local_58;
  _union_332950 local_48;
  Il2CppType *pIStack_40;
  Il2CppType **local_38;
  
  if (g_data_057ae66d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&"Highlight");
    g_data_057ae66d = '\x01';
  }
  local_68.genericMethod = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppType **)0x0;
  item = (Il2CppObject *)0x0;
  _Var12.genericMethod = (Il2CppObject *)0x0;
  __this_06 = System_Linq_Enumerable__ToList_int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._selected,
                         MethodInfo_List_1_System_Int32_ToList_Int32);
  if (__this_06 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_04428233;
  System_Collections_Generic_List_int___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
             (System_Collections_Generic_List_int__o *)__this_06,MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
  local_58 = local_38;
  local_68 = local_48;
  pIStack_60 = pIStack_40;
  while( true ) {
    do {
      do {
        __this_00.fields._8_8_ = item;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
        __this_00.fields._16_8_ = _Var12.genericMethod;
        bVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          (__this_00,(MethodInfo_3215510 *)&local_68);
        if ((char)bVar7 == '\0') {
          __this_01.fields._8_8_ = item;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
          __this_01.fields._16_8_ = _Var12.genericMethod;
          System_Collections_Generic_List_Enumerator_int___Dispose(__this_01,(MethodInfo_3215500 *)&local_68);
          goto label_04427ff3;
        }
        key = (int32_t)local_58;
        item = (Il2CppObject *)0x0;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044281cf;
        System_Collections_Generic_Dictionary_int__object___TryGetValue
                  ((System_Collections_Generic_Dictionary_int__object__o *)
                   **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,(Il2CppObject **)&stack0xffffffffffffff70,
                   MethodInfo_Boolean_TryGetValue);
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_044281d4;
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044281d9;
        bVar7 = System_Collections_Generic_HashSet_object___Contains(pSVar2,item,MethodInfo_Boolean_Contains);
      } while ((char)bVar7 != '\0');
      pSVar3 = (__this->fields)._selected;
      if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_044281f2;
      System_Collections_Generic_HashSet_int___Remove(pSVar3,key,MethodInfo_Boolean_Remove);
      pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
      if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044281f7;
      bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar4,key,MethodInfo_Boolean_ContainsKey);
    } while ((char)bVar7 == '\0');
    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
    if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0442821a;
    pUVar8 = (UnityEngine_GameObject_o *)
             System_Collections_Generic_Dictionary_int__object___get_Item(pSVar4,key,MethodInfo_GameObject_get_Item);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0442821f;
    pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04428224;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"Highlight",(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04428229;
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_04428233:
    do {
      auVar11 = il2cpp_runtime_helper_022b2c90();
      if (auVar11._8_4_ != 1) {
label_044284ee:
        __this_05.fields._8_8_ = item;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
        __this_05.fields._16_8_ = _Var12.genericMethod;
        System_Collections_Generic_List_Enumerator_int___Dispose(__this_05,(MethodInfo_3215500 *)&local_68);
        _Unwind_Resume(auVar11._0_8_);
      }
      plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar5 = *plVar10;
      __cxa_end_catch();
      __this_04.fields._8_8_ = item;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_04.fields._16_8_ = _Var12.genericMethod;
      System_Collections_Generic_List_Enumerator_int___Dispose(__this_04,(MethodInfo_3215500 *)&local_68);
      if (lVar5 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar5);
        goto label_044284ee;
      }
label_04427ff3:
      pGVar1 = (__this->fields)._gameManager;
    } while ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
            (pSVar2 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
            pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0));
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,pSVar2,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    ppIVar6 = local_38;
    _Var12 = local_48;
    while( true ) {
      __this_02.fields._8_8_ = item;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff68;
      __this_02.fields._current = _Var12.genericMethod;
      bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff78);
      if ((char)bVar7 == '\0') {
        __this_03.fields._8_8_ = item;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff68;
        __this_03.fields._current = _Var12.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
        return;
      }
      if (ppIVar6 == (Il2CppType **)0x0) break;
      if (ppIVar6[4] == (Il2CppType *)0x0) goto label_044281c5;
      pSVar3 = (__this->fields)._selected;
      if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_044281ca;
      bVar7 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar3,*(int32_t *)&ppIVar6[4][2].data,MethodInfo_Boolean_Contains);
      if ((char)bVar7 == '\0') {
        if (ppIVar6[4] == (Il2CppType *)0x0) goto label_044281de;
        pSVar3 = (__this->fields)._selected;
        if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_044281e3;
        System_Collections_Generic_HashSet_int___Add(pSVar3,*(int32_t *)&ppIVar6[4][2].data,MethodInfo_Boolean_Add);
        if (ppIVar6[4] == (Il2CppType *)0x0) goto label_044281e8;
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044281ed;
        bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar4,*(int32_t *)&ppIVar6[4][2].data,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar7 != '\0') {
          if (ppIVar6[4] == (Il2CppType *)0x0) goto label_044281fc;
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._idToItem;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04428201;
          pUVar8 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar4,*(int32_t *)&ppIVar6[4][2].data,MethodInfo_GameObject_get_Item);
          if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_04428206;
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0442820b;
          pUVar9 = UnityEngine_Transform__Find(pUVar9,"Highlight",(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04428210;
          pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_04428215;
          UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_044281c5:
    il2cpp_runtime_helper_022b2c90();
label_044281ca:
    il2cpp_runtime_helper_022b2c90();
label_044281cf:
    il2cpp_runtime_helper_022b2c90();
label_044281d4:
    il2cpp_runtime_helper_022b2c90();
label_044281d9:
    il2cpp_runtime_helper_022b2c90();
label_044281de:
    il2cpp_runtime_helper_022b2c90();
label_044281e3:
    il2cpp_runtime_helper_022b2c90();
label_044281e8:
    il2cpp_runtime_helper_022b2c90();
label_044281ed:
    il2cpp_runtime_helper_022b2c90();
label_044281f2:
    il2cpp_runtime_helper_022b2c90();
label_044281f7:
    il2cpp_runtime_helper_022b2c90();
label_044281fc:
    il2cpp_runtime_helper_022b2c90();
label_04428201:
    il2cpp_runtime_helper_022b2c90();
label_04428206:
    il2cpp_runtime_helper_022b2c90();
label_0442820b:
    il2cpp_runtime_helper_022b2c90();
label_04428210:
    il2cpp_runtime_helper_022b2c90();
label_04428215:
    il2cpp_runtime_helper_022b2c90();
label_0442821a:
    il2cpp_runtime_helper_022b2c90();
label_0442821f:
    il2cpp_runtime_helper_022b2c90();
label_04428224:
    il2cpp_runtime_helper_022b2c90();
label_04428229:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// UI.MapEditorHierarchyPanel$$Update
// il2cpp: void UI_MapEditorHierarchyPanel__Update (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4428a90

void UI_MapEditorHierarchyPanel__Update(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorHierarchyPanel$$.ctor
// il2cpp: void UI_MapEditorHierarchyPanel___ctor (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4428aa0

void UI_MapEditorHierarchyPanel___ctor(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  System_Collections_Generic_HashSet_int__o *__this_02;
  Settings_StringSetting_o *__this_03;
  
  if (g_data_057ae66e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae66e = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
  System_Collections_Generic_Dictionary_int__object____ctor(__this_01,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
  (__this->fields)._idToItem = (System_Collections_Generic_Dictionary_int__GameObject__o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._idToItem,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._idToIndex = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._idToIndex,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._indexToId = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._indexToId,pSVar1);
  __this_02 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor(__this_02,MethodInfo_HashSet_1_System_Int32);
  (__this->fields)._selected = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._selected,__this_02);
  (__this->fields)._lastClickedItem = -1;
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_03 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_03,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._searchSetting = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._searchSetting);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__32_0
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__32_0 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4428cb0

void UI_MapEditorHierarchyPanel___Setup_b__32_0(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__32_1
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__32_1 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4428cc0

void UI_MapEditorHierarchyPanel___Setup_b__32_1(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + -1;
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


// UI.MapEditorHierarchyPanel$$<Setup>b__32_2
// il2cpp: void UI_MapEditorHierarchyPanel___Setup_b__32_2 (UI_MapEditorHierarchyPanel_o* __this, const MethodInfo* method);
// 0x4428cd0

void UI_MapEditorHierarchyPanel___Setup_b__32_2(UI_MapEditorHierarchyPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._currentPage;
  *piVar1 = *piVar1 + 1;
  UI_MapEditorHierarchyPanel__Sync(__this,method);
  return;
}


