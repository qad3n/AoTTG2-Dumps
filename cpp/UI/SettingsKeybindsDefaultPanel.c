// Type: UI.SettingsKeybindsDefaultPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsKeybindsDefaultPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsDefaultPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsKeybindsDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsKeybindsDefaultPanel__get_ScrollBar (UI_SettingsKeybindsDefaultPanel_o* __this, const MethodInfo* method);
// 0x41307f0

bool_conflict
UI_SettingsKeybindsDefaultPanel__get_ScrollBar
          (UI_SettingsKeybindsDefaultPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsKeybindsDefaultPanel$$Setup
// il2cpp: void UI_SettingsKeybindsDefaultPanel__Setup (UI_SettingsKeybindsDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4130800

void UI_SettingsKeybindsDefaultPanel__Setup
               (UI_SettingsKeybindsDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  long lVar3;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  UI_KeybindPopup_o *popup;
  UnityEngine_Transform_o *pUVar4;
  Settings_BaseSetting_o *pSVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  MethodInfo *__this_01;
  System_String_o *pSVar8;
  System_String_array *options;
  MethodInfo *pMVar9;
  System_String_o *pSVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (DAT_05704945 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSettingsContainer);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SettingsKeybindsPanel);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsPopup);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"ReelOutScrollSmoothingTooltip");
    il2cpp_init_method_metadata(&"AutoUseGasTooltip");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Keybinds.Human");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"TapScoreboard");
    il2cpp_init_method_metadata(&"WallSlideDash");
    il2cpp_init_method_metadata(&"WallSlideAttachTooltip");
    il2cpp_init_method_metadata(&"SwapTSAttackSpecial");
    il2cpp_init_method_metadata(&"ReelOutScrollSmoothing");
    il2cpp_init_method_metadata(&"TapScoreboardTooltip");
    il2cpp_init_method_metadata(&"Keybinds.");
    il2cpp_init_method_metadata(&"WallSlideAttach");
    il2cpp_init_method_metadata(&"AutoUseGas");
    il2cpp_init_method_metadata(&"TapMapTooltip");
    il2cpp_init_method_metadata(&"DashDoubleTap");
    il2cpp_init_method_metadata(&"ReelInHolding");
    il2cpp_init_method_metadata(&"Keybinds.General");
    il2cpp_init_method_metadata(&"WallSlideAttachOptions");
    il2cpp_init_method_metadata(&"WallSlideDashTooltip");
    il2cpp_init_method_metadata(&"ReelInHoldingTooltip");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"AutoRefillGas");
    il2cpp_init_method_metadata(&"TapMap");
    il2cpp_init_method_metadata(&"SwapTSAttackSpecialTooltip");
    DAT_05704945 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_SettingsKeybindsPanel->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsKeybindsPanel)) {
LAB_04131336:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    pUVar2 = (parent->fields).Parent;
    if (pUVar2 == (UI_BasePanel_o *)0x0) {
      UI_SettingsKeybindsPanel__CreateCategoryDropdown
                ((UI_SettingsKeybindsPanel_o *)parent,(__this->fields).DoublePanelLeft,method_00);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    if (((pUVar2->klass->_2).naturalAligment < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar2);
    }
    UI_SettingsKeybindsPanel__CreateCategoryDropdown
              ((UI_SettingsKeybindsPanel_o *)parent,(__this->fields).DoublePanelLeft,method_00);
    pSVar10 = (System_String_o *)pUVar2[1].fields._currentCategoryPanel;
    pSVar7 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,0x18,140.0,20.0,pSVar7,(MethodInfo *)0x0);
    pSVar7 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    if (pSVar7 != (System_String_o *)0x0) {
      pSVar7 = System_String__Replace
                         (pSVar7," ",(System_String_o *)"",(MethodInfo *)0x0);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if ((lVar3 != 0) &&
         (__this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar3 + 0x10),
         __this_00 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
        parent = (UI_BasePanel_o *)
                 System_Collections_Specialized_OrderedDictionary__get_Item
                           (__this_00,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
        if (parent != (UI_BasePanel_o *)0x0) {
          bVar1 = (TypeInfo_BaseSettingsContainer->_2).naturalAligment;
          if (((parent->klass->_2).naturalAligment < bVar1) ||
             ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSettingsContainer))
          goto LAB_04131336;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          popup = *(UI_KeybindPopup_o **)(lVar3 + 0x80);
          pSVar8 = System_String__Concat("Keybinds.",pSVar7,(MethodInfo *)0x0);
          pMVar9 = __this_01;
          UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings
                    (__this,(Settings_BaseSettingsContainer_o *)parent,popup,pSVar10,pSVar8,
                     (UI_ElementStyle_o *)__this_01,in_stack_ffffffffffffff98);
          bVar6 = System_String__op_Equality(pSVar7,"Human",(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            bVar6 = System_String__op_Equality(pSVar7,"General",(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              return;
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
            if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
              pUVar4 = (__this->fields).DoublePanelRight;
              pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 200);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = UI_UIManager__GetLocale
                                 (pSVar10,"Keybinds.General","TapScoreboard",(System_String_o *)"",
                                  (System_String_o *)"",pMVar9);
              pSVar8 = UI_UIManager__GetLocale
                                 (pSVar10,"Keybinds.General","TapScoreboardTooltip",(System_String_o *)"",
                                  (System_String_o *)"",pMVar9);
              pMVar9 = (MethodInfo *)0x0;
              UI_ElementFactory__CreateToggleSetting
                        (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,pSVar8,30.0,30.0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xd0);
                pSVar7 = UI_UIManager__GetLocale
                                   (pSVar10,"Keybinds.General","TapMap",
                                    (System_String_o *)"",(System_String_o *)"",
                                    pMVar9);
                pSVar10 = UI_UIManager__GetLocale
                                    (pSVar10,"Keybinds.General","TapMapTooltip",
                                     (System_String_o *)"",(System_String_o *)""
                                     ,pMVar9);
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,pSVar10,30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
            if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
              pUVar4 = (__this->fields).DoublePanelRight;
              pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xa0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = UI_UIManager__GetLocale
                                 (pSVar10,"Keybinds.Human","DashDoubleTap",(System_String_o *)"",
                                  (System_String_o *)"",pMVar9);
              pMVar9 = (MethodInfo *)0x0;
              UI_ElementFactory__CreateToggleSetting
                        (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,
                         (System_String_o *)"",30.0,30.0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xa8);
                pSVar7 = UI_UIManager__GetLocale
                                   (pSVar10,"Keybinds.Human","WallSlideDash",
                                    (System_String_o *)"",(System_String_o *)"",
                                    pMVar9);
                pSVar8 = UI_UIManager__GetLocale
                                   (pSVar10,"Keybinds.Human","WallSlideDashTooltip",
                                    (System_String_o *)"",(System_String_o *)"",
                                    pMVar9);
                pMVar9 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,pSVar8,30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xb0);
                  method_01 = "";
                  pSVar7 = UI_UIManager__GetLocale
                                     (pSVar10,"Keybinds.Human","WallSlideAttach",
                                      (System_String_o *)"",
                                      (System_String_o *)"",pMVar9);
                  options = UI_UIManager__GetLocaleArray
                                      (pSVar10,"Keybinds.Human","WallSlideAttachOptions",
                                       (System_String_o *)"",method_01);
                  pMVar9 = (MethodInfo *)
                           UI_UIManager__GetLocale
                                     (pSVar10,"Keybinds.Human","WallSlideAttachTooltip",
                                      (System_String_o *)"",
                                      (System_String_o *)"",pMVar9);
                  UI_ElementFactory__CreateDropdownSetting
                            (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,options,
                             (System_String_o *)pMVar9,160.0,40.0,300.0,
                             (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (MethodInfo *)0x0);
                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
                    pUVar4 = (__this->fields).DoublePanelRight;
                    pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xd0);
                    pSVar7 = UI_UIManager__GetLocale
                                       (pSVar10,"Keybinds.Human","AutoUseGas",
                                        (System_String_o *)"",
                                        (System_String_o *)"",pMVar9);
                    pSVar8 = UI_UIManager__GetLocale
                                       (pSVar10,"Keybinds.Human","AutoUseGasTooltip",
                                        (System_String_o *)"",
                                        (System_String_o *)"",pMVar9);
                    pMVar9 = (MethodInfo *)0x0;
                    UI_ElementFactory__CreateToggleSetting
                              (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,pSVar8,30.0,30.0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
                      pUVar4 = (__this->fields).DoublePanelRight;
                      pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 200);
                      pSVar7 = UI_UIManager__GetLocale
                                         (pSVar10,"Keybinds.Human","AutoRefillGas",
                                          (System_String_o *)"",
                                          (System_String_o *)"",pMVar9);
                      pMVar9 = (MethodInfo *)0x0;
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,
                                 (System_String_o *)"",30.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
                        pUVar4 = (__this->fields).DoublePanelRight;
                        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xc0);
                        pSVar7 = UI_UIManager__GetLocale
                                           (pSVar10,"Keybinds.Human","SwapTSAttackSpecial",
                                            (System_String_o *)"",
                                            (System_String_o *)"",pMVar9);
                        pSVar8 = UI_UIManager__GetLocale
                                           (pSVar10,"Keybinds.Human","SwapTSAttackSpecialTooltip",
                                            (System_String_o *)"",
                                            (System_String_o *)"",pMVar9);
                        pMVar9 = (MethodInfo *)0x0;
                        UI_ElementFactory__CreateToggleSetting
                                  (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,pSVar8,30.0,
                                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
                          pUVar4 = (__this->fields).DoublePanelRight;
                          pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xd8);
                          pSVar7 = UI_UIManager__GetLocale
                                             (pSVar10,"Keybinds.Human","ReelInHolding",
                                              (System_String_o *)"",
                                              (System_String_o *)"",pMVar9);
                          pSVar8 = UI_UIManager__GetLocale
                                             (pSVar10,"Keybinds.Human","ReelInHoldingTooltip",
                                              (System_String_o *)"",
                                              (System_String_o *)"",pMVar9);
                          pMVar9 = (MethodInfo *)0x0;
                          UI_ElementFactory__CreateToggleSetting
                                    (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,pSVar8,30.0
                                     ,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0
                                    );
                          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                          if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
                            pUVar4 = (__this->fields).DoublePanelRight;
                            pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xb8);
                            pSVar7 = UI_UIManager__GetLocale
                                               (pSVar10,"Keybinds.Human","ReelOutScrollSmoothing",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar9);
                            pSVar10 = UI_UIManager__GetLocale
                                                (pSVar10,"Keybinds.Human","ReelOutScrollSmoothingTooltip",
                                                 (System_String_o *)"",
                                                 (System_String_o *)"",pMVar9);
                            UI_ElementFactory__CreateSliderSetting
                                      (pUVar4,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar7,pSVar10,
                                       130.0,16.0,2,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsKeybindsDefaultPanel$$CreateKeybindSettings
// il2cpp: void UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings (UI_SettingsKeybindsDefaultPanel_o* __this, Settings_BaseSettingsContainer_o* container, UI_KeybindPopup_o* popup, System_String_o* cat, System_String_o* sub, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x4131490

/* WARNING: Removing unreachable block (ram,0x04131beb) */

void UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings
               (UI_SettingsKeybindsDefaultPanel_o *__this,
               Settings_BaseSettingsContainer_o *container,UI_KeybindPopup_o *popup,
               System_String_o *cat,System_String_o *sub,UI_ElementStyle_o *style,MethodInfo *method
               )

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  long lVar3;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *parent;
  System_RuntimeTypeHandle_o handle;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  int32_t iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar11;
  long lVar12;
  MethodInfo *method_00;
  int local_6c;
  
  method_00 = (MethodInfo *)style;
  if (DAT_05704946 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_DictionaryEntry);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeRef_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"CoverNape");
    il2cpp_init_method_metadata(&"CoverNape1");
    il2cpp_init_method_metadata(&"Attack");
    il2cpp_init_method_metadata(&"Keybinds.Titan");
    il2cpp_init_method_metadata(&"Shifter");
    il2cpp_init_method_metadata(&"");
    DAT_05704946 = '\x01';
  }
  bVar5 = System_String__op_Equality(sub,"Keybinds.Titan",(MethodInfo *)0x0);
  uVar6 = 1;
  if ((char)bVar5 == '\0') {
    if (sub == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar6 = System_String__Contains(sub,"Shifter",(MethodInfo *)0x0);
    uVar6 = uVar6 & 0xff;
  }
  if (uVar6 != 0) {
    sub = "Keybinds.Titan";
  }
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = (container->fields).Settings;
  if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  plVar8 = (long *)(*(pSVar2->klass->vtable)._23_GetEnumerator.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._23_GetEnumerator.method);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_6c = 0;
  do {
    lVar3 = *plVar8;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138);
          goto LAB_04131653;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,0);
LAB_04131653:
    cVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (cVar4 == '\0') {
      plVar8 = (long *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar8;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) == 0) goto LAB_04131b0f;
      lVar12 = 0;
      break;
    }
    lVar3 = *plVar8;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) + 1) * 0x10 + lVar3 +
                   0x138);
          goto LAB_041316d8;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,1);
LAB_041316d8:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(*plVar10 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar10);
    }
    puVar9 = (undefined8 *)il2cpp_glue_022c7330(plVar10);
    pSVar11 = (System_String_o *)*puVar9;
    __this_00 = (Il2CppObject *)puVar9[1];
    if (__this_00 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
    }
    if ((pSVar11 != (System_String_o *)0x0) && (pSVar11->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar11);
    }
    if ((uVar6 != 0) &&
       (bVar5 = System_String__op_Equality(pSVar11,"CoverNape1",(MethodInfo *)0x0),
       (char)bVar5 != '\0')) {
      pSVar11 = "CoverNape";
    }
    if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    left = System_Object__GetType(__this_00,(MethodInfo *)0x0);
    handle = TypeRef_KeybindSetting;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar2 = (container->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar7 = System_Collections_Specialized_OrderedDictionary__get_Count(pSVar2,(MethodInfo *)0x0);
      parent = (&(__this->fields).DoublePanelLeft)[iVar7 / 2 <= local_6c];
      if (uVar6 == 0) {
LAB_041318a1:
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar11 = UI_UIManager__GetLocale
                            (cat,sub,pSVar11,(System_String_o *)"",
                             (System_String_o *)"",method_00);
        method_00 = "";
        UI_ElementFactory__CreateKeybindSetting
                  (parent,style,(Settings_BaseSetting_o *)__this_00,pSVar11,popup,
                   (System_String_o *)"",120.0,35.0,2,(MethodInfo *)0x0);
      }
      else {
        if (pSVar11 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar5 = System_String__StartsWith(pSVar11,"Attack",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') goto LAB_041318a1;
        if ("Attack" == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = System_String__Substring
                            (pSVar11,("Attack"->fields)._stringLength,(MethodInfo *)0x0);
        method_00 = "";
        UI_ElementFactory__CreateKeybindSetting
                  (parent,style,(Settings_BaseSetting_o *)__this_00,pSVar11,popup,
                   (System_String_o *)"",120.0,35.0,2,(MethodInfo *)0x0);
      }
      local_6c = local_6c + 1;
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12) {
    if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)
               (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_04131b2d;
    }
  }
LAB_04131b0f:
  puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable,0);
LAB_04131b2d:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


// UI.SettingsKeybindsDefaultPanel$$.ctor
// il2cpp: void UI_SettingsKeybindsDefaultPanel___ctor (UI_SettingsKeybindsDefaultPanel_o* __this, const MethodInfo* method);
// 0x4131c10

void UI_SettingsKeybindsDefaultPanel___ctor
               (UI_SettingsKeybindsDefaultPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


