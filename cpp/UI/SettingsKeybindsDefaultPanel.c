// Type: UI.SettingsKeybindsDefaultPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsKeybindsDefaultPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsDefaultPanel.cs
// --------------------------------

// UI.SettingsKeybindsDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsKeybindsDefaultPanel__get_ScrollBar (UI_SettingsKeybindsDefaultPanel_o* __this, const MethodInfo* method);
// 0x4445bc0

bool_conflict
UI_SettingsKeybindsDefaultPanel__get_ScrollBar(UI_SettingsKeybindsDefaultPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsKeybindsDefaultPanel$$Setup
// il2cpp: void UI_SettingsKeybindsDefaultPanel__Setup (UI_SettingsKeybindsDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4445bd0

void UI_SettingsKeybindsDefaultPanel__Setup
               (UI_SettingsKeybindsDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_KeybindPopup_o *cat;
  long lVar2;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_BaseSetting_o *pSVar4;
  Settings_StringSetting_o *setting;
  bool_conflict bVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  MethodInfo *pMVar10;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  UI_KeybindPopup_o *unaff_RBP;
  System_Collections_Generic_HashSet_KeyCode__o *panel;
  MethodInfo *method_01;
  UI_KeybindPopup_o *parent_00;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (g_data_057ae6e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsKeybindsPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"ReelOutScrollSmoothingTooltip");
    il2cpp_runtime_helper_023445d0(&"AutoUseGasTooltip");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Keybinds.Human");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"TapScoreboard");
    il2cpp_runtime_helper_023445d0(&"WallSlideDash");
    il2cpp_runtime_helper_023445d0(&"WallSlideAttachTooltip");
    il2cpp_runtime_helper_023445d0(&"SwapTSAttackSpecial");
    il2cpp_runtime_helper_023445d0(&"ReelOutScrollSmoothing");
    il2cpp_runtime_helper_023445d0(&"TapScoreboardTooltip");
    il2cpp_runtime_helper_023445d0(&"Keybinds.");
    il2cpp_runtime_helper_023445d0(&"WallSlideAttach");
    il2cpp_runtime_helper_023445d0(&"AutoUseGas");
    il2cpp_runtime_helper_023445d0(&"TapMapTooltip");
    il2cpp_runtime_helper_023445d0(&"DashDoubleTap");
    il2cpp_runtime_helper_023445d0(&"ReelInHolding");
    il2cpp_runtime_helper_023445d0(&"Keybinds.General");
    il2cpp_runtime_helper_023445d0(&"WallSlideAttachOptions");
    il2cpp_runtime_helper_023445d0(&"WallSlideDashTooltip");
    il2cpp_runtime_helper_023445d0(&"ReelInHoldingTooltip");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"AutoRefillGas");
    il2cpp_runtime_helper_023445d0(&"TapMap");
    il2cpp_runtime_helper_023445d0(&"SwapTSAttackSpecialTooltip");
    g_data_057ae6e8 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = (UI_KeybindPopup_o *)__this;
  if (parent == (UI_BasePanel_o *)0x0) {
label_04446701:
    il2cpp_runtime_helper_022b2c90();
label_04446706:
    il2cpp_runtime_helper_022b2fd0(parent);
  }
  else {
    bVar1 = (TypeInfo_SettingsKeybindsPanel->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsKeybindsPanel)) goto label_04446706;
    unaff_RBP = (UI_KeybindPopup_o *)(parent->fields).Parent;
    pMVar6 = method_00;
    if (unaff_RBP == (UI_KeybindPopup_o *)0x0) goto label_04446716;
    bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    if ((bVar1 <= (unaff_RBP->klass->_2).naturalAligment) &&
       ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SettingsPopup)) {
      UI_SettingsKeybindsPanel__CreateCategoryDropdown
                ((UI_SettingsKeybindsPanel_o *)parent,(__this->fields).DoublePanelLeft,method_00);
      cat = (UI_KeybindPopup_o *)(unaff_RBP->fields)._setting;
      unaff_RBP = (UI_KeybindPopup_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pMVar6 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor
                ((UI_ElementStyle_o *)pMVar6,0x18,140.0,20.0,(System_String_o *)unaff_RBP,(MethodInfo *)0x0);
      pSVar7 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
      if (pSVar7 != (System_String_o *)0x0) {
        pSVar7 = System_String__Replace_3af9030
                           (pSVar7," ",(System_String_o *)"",(MethodInfo *)0x0);
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
        if ((lVar2 != 0) &&
           (__this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar2 + 0x10),
           __this_00 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
          parent = (UI_BasePanel_o *)
                   System_Collections_Specialized_OrderedDictionary__get_Item
                             (__this_00,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
          if ((UI_KeybindPopup_o *)parent != (UI_KeybindPopup_o *)0x0) {
            bVar1 = (TypeInfo_BaseSettingsContainer->_2).naturalAligment;
            if (((((UI_KeybindPopup_o *)parent)->klass->_2).naturalAligment < bVar1) ||
               ((((UI_KeybindPopup_o *)parent)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSettingsContainer))
            goto label_04446706;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar2 != 0) {
            unaff_RBP = *(UI_KeybindPopup_o **)(lVar2 + 0x80);
            pSVar8 = System_String__Concat_3ae5ba0("Keybinds.",pSVar7,(MethodInfo *)0x0);
            pMVar10 = pMVar6;
            UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings
                      (__this,(Settings_BaseSettingsContainer_o *)parent,unaff_RBP,(System_String_o *)cat,
                       pSVar8,(UI_ElementStyle_o *)pMVar6,in_stack_ffffffffffffff98);
            bVar5 = System_String__op_Equality(pSVar7,"Human",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              bVar5 = System_String__op_Equality(pSVar7,"General",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                return;
              }
              lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
              if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
                parent_00 = (UI_KeybindPopup_o *)(__this->fields).DoublePanelRight;
                pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 200);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                unaff_RBP = (UI_KeybindPopup_o *)
                            UI_UIManager__GetLocale
                                      ((System_String_o *)cat,"Keybinds.General","TapScoreboard",
                                       (System_String_o *)"",(System_String_o *)"",pMVar10
                                      );
                pSVar7 = UI_UIManager__GetLocale
                                   ((System_String_o *)cat,"Keybinds.General","TapScoreboardTooltip",
                                    (System_String_o *)"",(System_String_o *)"",pMVar10);
                pMVar10 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          ((UnityEngine_Transform_o *)parent_00,(UI_ElementStyle_o *)pMVar6,pSVar4,
                           (System_String_o *)unaff_RBP,pSVar7,30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                parent = (UI_BasePanel_o *)cat;
                if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
                  pUVar3 = (__this->fields).DoublePanelRight;
                  pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xd0);
                  pSVar7 = UI_UIManager__GetLocale
                                     ((System_String_o *)cat,"Keybinds.General","TapMap",
                                      (System_String_o *)"",(System_String_o *)"",pMVar10)
                  ;
                  pSVar8 = UI_UIManager__GetLocale
                                     ((System_String_o *)cat,"Keybinds.General","TapMapTooltip",
                                      (System_String_o *)"",(System_String_o *)"",pMVar10)
                  ;
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar3,(UI_ElementStyle_o *)pMVar6,pSVar4,pSVar7,pSVar8,30.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
              if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
                unaff_RBP = (UI_KeybindPopup_o *)(__this->fields).DoublePanelRight;
                parent = *(UI_BasePanel_o **)(lVar2 + 0xa0);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = UI_UIManager__GetLocale
                                   ((System_String_o *)cat,"Keybinds.Human","DashDoubleTap",
                                    (System_String_o *)"",(System_String_o *)"",pMVar10);
                pMVar10 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          ((UnityEngine_Transform_o *)unaff_RBP,(UI_ElementStyle_o *)pMVar6,
                           (Settings_BaseSetting_o *)parent,pSVar7,(System_String_o *)"",30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
                  pUVar3 = (__this->fields).DoublePanelRight;
                  pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xa8);
                  parent = (UI_BasePanel_o *)
                           UI_UIManager__GetLocale
                                     ((System_String_o *)cat,"Keybinds.Human","WallSlideDash",
                                      (System_String_o *)"",(System_String_o *)"",pMVar10)
                  ;
                  pSVar7 = UI_UIManager__GetLocale
                                     ((System_String_o *)cat,"Keybinds.Human","WallSlideDashTooltip",
                                      (System_String_o *)"",(System_String_o *)"",pMVar10)
                  ;
                  pMVar10 = (MethodInfo *)0x0;
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar3,(UI_ElementStyle_o *)pMVar6,pSVar4,(System_String_o *)parent,pSVar7,30.0,
                             30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                  unaff_RBP = (UI_KeybindPopup_o *)&"";
                  parent_00 = cat;
                  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xb0);
                    method_01 = "";
                    unaff_RBP = (UI_KeybindPopup_o *)
                                UI_UIManager__GetLocale
                                          ((System_String_o *)cat,"Keybinds.Human","WallSlideAttach",
                                           (System_String_o *)"",(System_String_o *)"",
                                           pMVar10);
                    pSVar9 = UI_UIManager__GetLocaleArray
                                       ((System_String_o *)cat,"Keybinds.Human","WallSlideAttachOptions",
                                        (System_String_o *)"",method_01);
                    pMVar10 = (MethodInfo *)
                              UI_UIManager__GetLocale
                                        ((System_String_o *)cat,"Keybinds.Human","WallSlideAttachTooltip",
                                         (System_String_o *)"",(System_String_o *)"",
                                         pMVar10);
                    UI_ElementFactory__CreateDropdownSetting
                              (pUVar3,(UI_ElementStyle_o *)pMVar6,pSVar4,(System_String_o *)unaff_RBP,pSVar9,
                               (System_String_o *)pMVar10,160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    parent = (UI_BasePanel_o *)&"Keybinds.Human";
                    parent_00 = (UI_KeybindPopup_o *)&"";
                    if ((lVar2 != 0) &&
                       (lVar2 = *(long *)(lVar2 + 0x28), parent = (UI_BasePanel_o *)&"Keybinds.Human",
                       parent_00 = (UI_KeybindPopup_o *)&"", lVar2 != 0)) {
                      pUVar3 = (__this->fields).DoublePanelRight;
                      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xd0);
                      parent = (UI_BasePanel_o *)
                               UI_UIManager__GetLocale
                                         ((System_String_o *)cat,"Keybinds.Human","AutoUseGas",
                                          (System_String_o *)"",(System_String_o *)"",
                                          pMVar10);
                      pSVar7 = UI_UIManager__GetLocale
                                         ((System_String_o *)cat,"Keybinds.Human","AutoUseGasTooltip",
                                          (System_String_o *)"",(System_String_o *)"",
                                          pMVar10);
                      pMVar10 = (MethodInfo *)0x0;
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar3,(UI_ElementStyle_o *)pMVar6,pSVar4,(System_String_o *)parent,pSVar7,
                                 30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                      unaff_RBP = (UI_KeybindPopup_o *)&"";
                      parent_00 = (UI_KeybindPopup_o *)&"Keybinds.Human";
                      if ((lVar2 != 0) &&
                         (lVar2 = *(long *)(lVar2 + 0x28), parent_00 = (UI_KeybindPopup_o *)&"Keybinds.Human",
                         lVar2 != 0)) {
                        parent = (UI_BasePanel_o *)(__this->fields).DoublePanelRight;
                        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 200);
                        pSVar7 = UI_UIManager__GetLocale
                                           ((System_String_o *)cat,"Keybinds.Human","AutoRefillGas",
                                            (System_String_o *)"",(System_String_o *)"",
                                            pMVar10);
                        pMVar10 = (MethodInfo *)0x0;
                        UI_ElementFactory__CreateToggleSetting
                                  ((UnityEngine_Transform_o *)parent,(UI_ElementStyle_o *)pMVar6,pSVar4,pSVar7
                                   ,(System_String_o *)"",30.0,30.0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                        unaff_RBP = (UI_KeybindPopup_o *)&"";
                        parent_00 = (UI_KeybindPopup_o *)&"Keybinds.Human";
                        if ((lVar2 != 0) &&
                           (lVar2 = *(long *)(lVar2 + 0x28), parent_00 = (UI_KeybindPopup_o *)&"Keybinds.Human",
                           lVar2 != 0)) {
                          pUVar3 = (__this->fields).DoublePanelRight;
                          pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xc0);
                          parent = (UI_BasePanel_o *)
                                   UI_UIManager__GetLocale
                                             ((System_String_o *)cat,"Keybinds.Human","SwapTSAttackSpecial",
                                              (System_String_o *)"",(System_String_o *)"",
                                              pMVar10);
                          pSVar7 = UI_UIManager__GetLocale
                                             ((System_String_o *)cat,"Keybinds.Human","SwapTSAttackSpecialTooltip",
                                              (System_String_o *)"",(System_String_o *)"",
                                              pMVar10);
                          pMVar10 = (MethodInfo *)0x0;
                          UI_ElementFactory__CreateToggleSetting
                                    (pUVar3,(UI_ElementStyle_o *)pMVar6,pSVar4,(System_String_o *)parent,
                                     pSVar7,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                     (MethodInfo *)0x0);
                          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                          unaff_RBP = cat;
                          parent_00 = (UI_KeybindPopup_o *)&"";
                          if ((lVar2 != 0) &&
                             (lVar2 = *(long *)(lVar2 + 0x28), parent_00 = (UI_KeybindPopup_o *)&"",
                             lVar2 != 0)) {
                            pUVar3 = (__this->fields).DoublePanelRight;
                            pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xd8);
                            parent = (UI_BasePanel_o *)
                                     UI_UIManager__GetLocale
                                               ((System_String_o *)cat,"Keybinds.Human","ReelInHolding",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar10);
                            pSVar7 = UI_UIManager__GetLocale
                                               ((System_String_o *)cat,"Keybinds.Human","ReelInHoldingTooltip",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar10);
                            pMVar10 = (MethodInfo *)0x0;
                            UI_ElementFactory__CreateToggleSetting
                                      (pUVar3,(UI_ElementStyle_o *)pMVar6,pSVar4,(System_String_o *)parent,
                                       pSVar7,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                       (MethodInfo *)0x0);
                            lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                            parent_00 = (UI_KeybindPopup_o *)&"";
                            if ((lVar2 != 0) &&
                               (lVar2 = *(long *)(lVar2 + 0x28),
                               parent_00 = (UI_KeybindPopup_o *)&"", lVar2 != 0)) {
                              pUVar3 = (__this->fields).DoublePanelRight;
                              pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xb8);
                              pSVar7 = UI_UIManager__GetLocale
                                                 ((System_String_o *)cat,"Keybinds.Human","ReelOutScrollSmoothing",
                                                  (System_String_o *)"",
                                                  (System_String_o *)"",pMVar10);
                              pSVar8 = UI_UIManager__GetLocale
                                                 ((System_String_o *)cat,"Keybinds.Human","ReelOutScrollSmoothingTooltip",
                                                  (System_String_o *)"",
                                                  (System_String_o *)"",pMVar10);
                              UI_ElementFactory__CreateSliderSetting
                                        (pUVar3,(UI_ElementStyle_o *)pMVar6,pSVar4,pSVar7,pSVar8,130.0,16.0,2,
                                         (MethodInfo *)0x0);
                              return;
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
      goto label_04446701;
    }
  }
  il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  pMVar6 = extraout_RDX;
label_04446716:
  panel = (System_Collections_Generic_HashSet_KeyCode__o *)(parent_00->fields).DoublePanelLeft;
  UI_SettingsKeybindsPanel__CreateCategoryDropdown
            ((UI_SettingsKeybindsPanel_o *)parent,(UnityEngine_Transform_o *)panel,pMVar6);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCategoryDropdown_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6eb = '\x01';
  }
  pSVar7 = (System_String_o *)
           (*(((UI_KeybindPopup_o *)parent)->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (parent,(((UI_KeybindPopup_o *)parent)->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,140.0,20.0,pSVar7,(MethodInfo *)0x0);
  setting = (((UI_KeybindPopup_o *)parent)->fields)._currentCategoryPanelName;
  pSVar9 = (System_String_array *)(((UI_KeybindPopup_o *)parent)->fields).BottomBar;
  onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            ((UnityEngine_Transform_o *)panel,__this_01,(Settings_BaseSetting_o *)setting,"Category",pSVar9,
             (System_String_o *)"",260.0,40.0,300.0,(System_Nullable_float__o)0x0,
             onDropdownOptionSelect,(MethodInfo *)0x0);
  return;
}


// UI.SettingsKeybindsDefaultPanel$$CreateKeybindSettings
// il2cpp: void UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings (UI_SettingsKeybindsDefaultPanel_o* __this, Settings_BaseSettingsContainer_o* container, UI_KeybindPopup_o* popup, System_String_o* cat, System_String_o* sub, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x4446860

void UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings
               (UI_SettingsKeybindsDefaultPanel_o *__this,Settings_BaseSettingsContainer_o *container,
               UI_KeybindPopup_o *popup,System_String_o *cat,System_String_o *sub,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *parent;
  System_RuntimeTypeHandle_o handle;
  char cVar3;
  bool_conflict bVar4;
  uint uVar5;
  int32_t iVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  MethodInfo *method_00;
  long *unaff_R12;
  System_String_o *unaff_R13;
  undefined1 auVar13 [12];
  int local_6c;
  long local_68;
  
  method_00 = (MethodInfo *)style;
  if (g_data_057ae6e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeRef_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"CoverNape");
    il2cpp_runtime_helper_023445d0(&"CoverNape1");
    il2cpp_runtime_helper_023445d0(&"Attack");
    il2cpp_runtime_helper_023445d0(&"Keybinds.Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6e9 = '\x01';
  }
  bVar4 = System_String__op_Equality(sub,"Keybinds.Titan",(MethodInfo *)0x0);
  uVar5 = 1;
  if ((char)bVar4 == '\0') {
    if (sub == (System_String_o *)0x0) goto label_04446d27;
    uVar5 = System_String__Contains(sub,"Shifter",(MethodInfo *)0x0);
    uVar5 = uVar5 & 0xff;
  }
  if (uVar5 != 0) {
    sub = "Keybinds.Titan";
  }
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
label_04446d18:
    il2cpp_runtime_helper_022b2c90();
label_04446d1d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar2 = (container->fields).Settings;
    if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04446d1d;
    unaff_R12 = (long *)(*(pSVar2->klass->vtable)._23_GetEnumerator.methodPtr)
                                  (pSVar2,(pSVar2->klass->vtable)._23_GetEnumerator.method);
    if (unaff_R12 != (long *)0x0) {
      local_68 = 0;
      local_6c = 0;
label_044469c0:
      lVar10 = *unaff_R12;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
            puVar7 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
            goto label_04446a23;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_04446a23:
      cVar3 = (*(code *)*puVar7)(unaff_R12,puVar7[1]);
      if (cVar3 == '\0') goto label_04446e8e;
      lVar10 = *unaff_R12;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
            puVar7 = (undefined8 *)
                     ((long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) + 1) * 0x10 + lVar10 + 0x138);
            goto label_04446aa8;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_04446aa8:
      plVar8 = (long *)(*(code *)*puVar7)(unaff_R12,puVar7[1]);
      if (plVar8 != (long *)0x0) {
        if (*(long *)(*plVar8 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
label_04446cef:
          il2cpp_runtime_helper_022b2fd0(plVar8);
          goto label_04446cf7;
        }
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02305440(plVar8);
        unaff_R13 = (System_String_o *)*puVar7;
        __this_00 = (Il2CppObject *)puVar7[1];
        if (__this_00 != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
            plVar8 = (long *)il2cpp_runtime_helper_022b2fd0(__this_00);
            goto label_04446cef;
          }
        }
        if ((unaff_R13 != (System_String_o *)0x0) && (unaff_R13->klass != g_data_057b9c00)) goto label_04446d01;
        if (uVar5 != 0) {
          bVar4 = System_String__op_Equality(unaff_R13,"CoverNape1",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            unaff_R13 = "CoverNape";
          }
        }
        if (__this_00 == (Il2CppObject *)0x0) goto label_04446cfc;
        left = System_Object__GetType(__this_00,(MethodInfo *)0x0);
        handle = TypeRef_KeybindSetting;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar4 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar2 = (container->fields).Settings;
          if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04446d09;
          iVar6 = System_Collections_Specialized_OrderedDictionary__get_Count(pSVar2,(MethodInfo *)0x0);
          parent = (&(__this->fields).DoublePanelLeft)[iVar6 / 2 <= local_6c];
          if (uVar5 == 0) {
label_04446c71:
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = UI_UIManager__GetLocale
                               (cat,sub,unaff_R13,(System_String_o *)"",
                                (System_String_o *)"",method_00);
            method_00 = "";
            UI_ElementFactory__CreateKeybindSetting
                      (parent,style,(Settings_BaseSetting_o *)__this_00,pSVar9,popup,
                       (System_String_o *)"",120.0,35.0,2,(MethodInfo *)0x0);
          }
          else {
            if (unaff_R13 == (System_String_o *)0x0) goto label_04446d0e;
            bVar4 = System_String__StartsWith(unaff_R13,"Attack",(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') goto label_04446c71;
            if ("Attack" == (System_String_o *)0x0) goto label_04446d13;
            pSVar9 = System_String__Substring
                               (unaff_R13,("Attack"->fields)._stringLength,(MethodInfo *)0x0);
            method_00 = "";
            UI_ElementFactory__CreateKeybindSetting
                      (parent,style,(Settings_BaseSetting_o *)__this_00,pSVar9,popup,
                       (System_String_o *)"",120.0,35.0,2,(MethodInfo *)0x0);
          }
          local_6c = local_6c + 1;
        }
        goto label_044469c0;
      }
label_04446cf7:
      il2cpp_runtime_helper_022b2c90();
label_04446cfc:
      il2cpp_runtime_helper_022b2c90();
label_04446d01:
      il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04446d09:
      il2cpp_runtime_helper_022b2c90();
label_04446d0e:
      il2cpp_runtime_helper_022b2c90();
label_04446d13:
      il2cpp_runtime_helper_022b2c90();
      goto label_04446d18;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04446d27:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  lVar10 = auVar13._0_8_;
  if (auVar13._8_4_ != 1) {
    local_68 = 0;
    do {
      plVar8 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
              puVar7 = (undefined8 *)
                       (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
              goto label_04446f9d;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_04446f9d:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
      }
      if (local_68 == 0) {
        _Unwind_Resume(lVar10);
      }
      il2cpp_runtime_helper_022fefe0(local_68);
label_04446fbb:
      lVar10 = il2cpp_runtime_helper_022fefe0(lVar10);
    } while( true );
  }
  plVar8 = (long *)__cxa_begin_catch(lVar10);
  local_68 = *plVar8;
  __cxa_end_catch();
label_04446e8e:
  plVar8 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
          puVar7 = (undefined8 *)
                   (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
          goto label_04446efd;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_04446efd:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  lVar10 = local_68;
  if (local_68 != 0) goto label_04446fbb;
  return;
}


// UI.SettingsKeybindsDefaultPanel$$.ctor
// il2cpp: void UI_SettingsKeybindsDefaultPanel___ctor (UI_SettingsKeybindsDefaultPanel_o* __this, const MethodInfo* method);
// 0x4446fe0

void UI_SettingsKeybindsDefaultPanel___ctor(UI_SettingsKeybindsDefaultPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


