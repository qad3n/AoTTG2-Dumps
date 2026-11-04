// Type: UI.SettingsKeybindsDefaultPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsKeybindsDefaultPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsDefaultPanel.cs
// --------------------------------

// UI.SettingsKeybindsDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsKeybindsDefaultPanel__get_ScrollBar (UI_SettingsKeybindsDefaultPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsKeybindsDefaultPanel__get_ScrollBar(UI_SettingsKeybindsDefaultPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsKeybindsDefaultPanel$$Setup
// il2cpp: void UI_SettingsKeybindsDefaultPanel__Setup (UI_SettingsKeybindsDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822e4030
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822e44b6: mov edi, ebp
// asm:   0x1822e44b8: jmp 0x1822e44ed
// asm:   0x1822e4c86: mov r9, qword ptr [rip + 0x1d9a29b]  ; ""
// asm:   0x1822e4c8d: mov rcx, r13
// asm:   0x1822e4c90: mov r8, qword ptr [rip + 0x1e0c8e1]  ; "ReelOutScrollSmoothing"
// asm:   0x1822e4c97: mov rdx, qword ptr [rip + 0x1df376a]  ; "Keybinds.Human"
// asm:   0x1822e4c9e: mov rsi, qword ptr [r12 + 0x30]
// asm:   0x1822e4ca3: mov rdi, qword ptr [rdi + 0xd0]
// asm:   0x1822e4caa: mov qword ptr [rsp + 0x28], rbp
// asm:   0x1822e4caf: mov qword ptr [rsp + 0x20], r9
// asm:   0x1822e4cb4: call 0x182300140  ; UI_UIManager__GetLocale()
// asm:   0x1822e4cb9: mov r9, qword ptr [rip + 0x1d9a268]  ; ""
// asm:   0x1822e4cc0: mov rcx, r13
// asm:   0x1822e4cc3: mov r8, qword ptr [rip + 0x1e0c986]  ; "ReelOutScrollSmoothingTooltip"
// asm:   0x1822e4cca: mov rbx, rax
// asm:   0x1822e4ccd: mov rdx, qword ptr [rip + 0x1df3734]  ; "Keybinds.Human"
// asm:   0x1822e4cd4: mov qword ptr [rsp + 0x28], rbp
// asm:   0x1822e4cd9: mov qword ptr [rsp + 0x20], r9
// asm:   0x1822e4cde: call 0x182300140  ; UI_UIManager__GetLocale()
// asm:   0x1822e4ce3: movss xmm1, dword ptr [rip + 0x10749b1]
// asm:   0x1822e4ceb: xorps xmm0, xmm0
// asm:   0x1822e4cee: mov qword ptr [rsp + 0x50], rbp
// asm:   0x1822e4cf3: mov r9, rbx
// asm:   0x1822e4cf6: mov qword ptr [rsp + 0x48], rbp
// asm:   0x1822e4cfb: mov r8, rdi
// asm:   0x1822e4cfe: movss dword ptr [rsp + 0x40], xmm0
// asm:   0x1822e4d04: mov rdx, r15
// asm:   0x1822e4d07: movss xmm0, dword ptr [rip + 0x115b265]
// asm:   0x1822e4d0f: mov rcx, rsi
// asm:   0x1822e4d12: mov dword ptr [rsp + 0x38], 2
// asm:   0x1822e4d1a: movss dword ptr [rsp + 0x30], xmm1
// asm:   0x1822e4d20: movss dword ptr [rsp + 0x28], xmm0
// asm:   0x1822e4d26: mov qword ptr [rsp + 0x20], rax
// asm:   0x1822e4d2b: call 0x18220f9b0  ; UI_ElementFactory__CreateSliderSetting()
// asm:   0x1822e4d30: jmp 0x1822e4712

void UI_SettingsKeybindsDefaultPanel__Setup
               (UI_SettingsKeybindsDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_StringSetting_o *setting;
  Settings_InputSettings_o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  UI_BaseMenu_o *pUVar5;
  UI_KeybindPopup_o *popup;
  Settings_GeneralInputSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_HumanInputSettings_o *pSVar8;
  Settings_IntSetting_o *setting_00;
  Settings_FloatSetting_o *setting_01;
  bool bVar9;
  System_String_o *pSVar10;
  UI_ElementStyle_o *pUVar11;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *pSVar12;
  Settings_BaseSettingsContainer_o *pSVar13;
  System_String_o *pSVar14;
  System_String_array *pSVar15;
  Settings_BaseSettingsContainer_o *container;
  
  if (Il2CppMethodInitialized_18434762b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsKeybindsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutScrollSmoothingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoUseGasTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Human");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"TapScoreboard");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideDash");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttachTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"SwapTSAttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutScrollSmoothing");
    il2cpp_codegen_initialize_runtime_metadata(&"TapScoreboardTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttach");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoUseGas");
    il2cpp_codegen_initialize_runtime_metadata(&"TapMapTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"DashDoubleTap");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInHolding");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.General");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideAttachOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlideDashTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInHoldingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoRefillGas");
    il2cpp_codegen_initialize_runtime_metadata(&"TapMap");
    il2cpp_codegen_initialize_runtime_metadata(&"SwapTSAttackSpecialTooltip");
    Il2CppMethodInitialized_18434762b = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_SettingsKeybindsPanel->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_SettingsKeybindsPanel)) {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    pUVar2 = (parent->fields).Parent;
    if (pUVar2 != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_SettingsPopup);
      }
    }
    pUVar3 = (__this->fields).DoublePanelLeft;
    if (Il2CppMethodInitialized_18434762e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UI_SettingsKeybindsPanel_CreateCategoryDropdown_b__5_0);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
      il2cpp_codegen_initialize_runtime_metadata(&"Category");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434762e = '\x01';
    }
    pSVar10 = (*(parent->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (parent,(parent->klass->vtable)._4_get_ThemePanel.method);
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(pUVar11,0x18,140.0,20.0,pSVar10,(MethodInfo *)0x0);
    setting = (parent->fields)._currentCategoryPanelName;
    pSVar15 = (System_String_array *)(*(uint64_t *)((char *)parent + 0x68));
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)parent,
               (intptr_t)MethodInfo_UI_SettingsKeybindsPanel_CreateCategoryDropdown_b__5_0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDropdownSetting
              (pUVar3,pUVar11,(Settings_BaseSetting_o *)setting,"Category",pSVar15,
               "",260.0,40.0,300.0,(System_Nullable_float__o)0x0,__this_01,
               (System_Int32_array *)0x0,(MethodInfo *)0x0);
    if (pUVar2 != (UI_BasePanel_o *)0x0) {
      pSVar10 = (System_String_o *)(*(uint64_t *)((char *)pUVar2 + 0xa8));
      pSVar12 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      container = (Settings_BaseSettingsContainer_o *)0x0;
      UI_ElementStyle___ctor(pUVar11,0x18,140.0,20.0,pSVar12,(MethodInfo *)0x0);
      pSVar12 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
      if (pSVar12 != (System_String_o *)0x0) {
        pSVar12 = System_String__Replace_1970e80
                            (pSVar12," ","",(MethodInfo *)0x0);
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
           (__this_00 = (pSVar4->fields).Settings,
           __this_00 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
          pSVar13 = (Settings_BaseSettingsContainer_o *)
                    System_Collections_Specialized_OrderedDictionary__get_Item
                              (__this_00,(Il2CppObject *)pSVar12,(MethodInfo *)0x0);
          if (pSVar13 != (Settings_BaseSettingsContainer_o *)0x0) {
            bVar1 = (TypeInfo_Settings_BaseSettingsContainer->_2).typeHierarchyDepth;
            if (((((Il2CppClass *)pSVar13->klass)->_2).typeHierarchyDepth < bVar1) ||
               (container = pSVar13,
               (((Il2CppClass *)pSVar13->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
               (Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer)) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
            }
          }
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar5 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar5 != (UI_BaseMenu_o *)0x0) {
            popup = (pUVar5->fields).KeybindPopup;
            pSVar14 = System_String__Concat_1969e50("Keybinds.",pSVar12,(MethodInfo *)0x0);
            UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings
                      (__this,container,popup,pSVar10,pSVar14,pUVar11,(MethodInfo *)0x0);
            bVar9 = System_String__op_Equality(pSVar12,"Human",(MethodInfo *)0x0);
            if (bVar9) {
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
              if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                 (pSVar8 = (pSVar4->fields).Human, pSVar8 != (Settings_HumanInputSettings_o *)0x0)) {
                pSVar7 = (pSVar8->fields).DashDoubleTap;
                pUVar3 = (__this->fields).DoublePanelRight;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pSVar12 = UI_UIManager__GetLocale
                                    (pSVar10,"Keybinds.Human","DashDoubleTap",""
                                     ,"",(MethodInfo *)0x0);
                UI_ElementFactory__CreateToggleSetting
                          (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,"",30.0,
                           30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                   (pSVar8 = (pSVar4->fields).Human, pSVar8 != (Settings_HumanInputSettings_o *)0x0)) {
                  pUVar3 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar8->fields).WallSlideDash;
                  pSVar12 = UI_UIManager__GetLocale
                                      (pSVar10,"Keybinds.Human","WallSlideDash",
                                       "","",(MethodInfo *)0x0);
                  pSVar14 = UI_UIManager__GetLocale
                                      (pSVar10,"Keybinds.Human","WallSlideDashTooltip",
                                       "","",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,pSVar14,30.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                  if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                     (pSVar8 = (pSVar4->fields).Human, pSVar8 != (Settings_HumanInputSettings_o *)0x0)) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    setting_00 = (pSVar8->fields).WallSlideAttach;
                    pSVar12 = UI_UIManager__GetLocale
                                        (pSVar10,"Keybinds.Human","WallSlideAttach",
                                         "","",(MethodInfo *)0x0);
                    pSVar15 = UI_UIManager__GetLocaleArray
                                        (pSVar10,"Keybinds.Human","WallSlideAttachOptions",
                                         "",(MethodInfo *)0x0);
                    pSVar14 = UI_UIManager__GetLocale
                                        (pSVar10,"Keybinds.Human","WallSlideAttachTooltip",
                                         "","",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateDropdownSetting
                              (pUVar3,pUVar11,(Settings_BaseSetting_o *)setting_00,pSVar12,pSVar15,pSVar14,
                               160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(System_Int32_array *)0x0,
                               (MethodInfo *)0x0);
                    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                    if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                       (pSVar8 = (pSVar4->fields).Human, pSVar8 != (Settings_HumanInputSettings_o *)0x0)) {
                      pUVar3 = (__this->fields).DoublePanelRight;
                      pSVar7 = (pSVar8->fields).AutoUseGas;
                      pSVar12 = UI_UIManager__GetLocale
                                          (pSVar10,"Keybinds.Human","AutoUseGas",
                                           "","",(MethodInfo *)0x0);
                      pSVar14 = UI_UIManager__GetLocale
                                          (pSVar10,"Keybinds.Human","AutoUseGasTooltip",
                                           "","",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,pSVar14,30.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                      if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                         (pSVar8 = (pSVar4->fields).Human, pSVar8 != (Settings_HumanInputSettings_o *)0x0)) {
                        pUVar3 = (__this->fields).DoublePanelRight;
                        pSVar7 = (pSVar8->fields).AutoRefillGas;
                        pSVar12 = UI_UIManager__GetLocale
                                            (pSVar10,"Keybinds.Human","AutoRefillGas",
                                             "","",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateToggleSetting
                                  (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,
                                   "",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                   (MethodInfo *)0x0);
                        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                        if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                           (pSVar8 = (pSVar4->fields).Human, pSVar8 != (Settings_HumanInputSettings_o *)0x0))
                        {
                          pUVar3 = (__this->fields).DoublePanelRight;
                          pSVar7 = (pSVar8->fields).SwapTSAttackSpecial;
                          pSVar12 = UI_UIManager__GetLocale
                                              (pSVar10,"Keybinds.Human","SwapTSAttackSpecial",
                                               "","",(MethodInfo *)0x0);
                          pSVar14 = UI_UIManager__GetLocale
                                              (pSVar10,"Keybinds.Human","SwapTSAttackSpecialTooltip",
                                               "","",(MethodInfo *)0x0);
                          UI_ElementFactory__CreateToggleSetting
                                    (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,pSVar14,30.0,30.0
                                     ,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                          if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                             (pSVar8 = (pSVar4->fields).Human, pSVar8 != (Settings_HumanInputSettings_o *)0x0)
                             ) {
                            pUVar3 = (__this->fields).DoublePanelRight;
                            pSVar7 = (pSVar8->fields).ReelInHolding;
                            pSVar12 = UI_UIManager__GetLocale
                                                (pSVar10,"Keybinds.Human","ReelInHolding",
                                                 "","",(MethodInfo *)0x0
                                                );
                            pSVar14 = UI_UIManager__GetLocale
                                                (pSVar10,"Keybinds.Human","ReelInHoldingTooltip",
                                                 "","",(MethodInfo *)0x0
                                                );
                            UI_ElementFactory__CreateToggleSetting
                                      (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,pSVar14,30.0,
                                       30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                            if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                               (pSVar8 = (pSVar4->fields).Human,
                               pSVar8 != (Settings_HumanInputSettings_o *)0x0)) {
                              pUVar3 = (__this->fields).DoublePanelRight;
                              setting_01 = (pSVar8->fields).ReelOutScrollSmoothing;
                              pSVar12 = UI_UIManager__GetLocale
                                                  (pSVar10,"Keybinds.Human","ReelOutScrollSmoothing",
                                                   "","",
                                                   (MethodInfo *)0x0);
                              pSVar10 = UI_UIManager__GetLocale
                                                  (pSVar10,"Keybinds.Human","ReelOutScrollSmoothingTooltip",
                                                   "","",
                                                   (MethodInfo *)0x0);
                              UI_ElementFactory__CreateSliderSetting
                                        (pUVar3,pUVar11,(Settings_BaseSetting_o *)setting_01,pSVar12,pSVar10,
                                         130.0,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,
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
            else {
              bVar9 = System_String__op_Equality(pSVar12,"General",(MethodInfo *)0x0);
              if (!bVar9) {
                return;
              }
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
              if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                 (pSVar6 = (pSVar4->fields).General, pSVar6 != (Settings_GeneralInputSettings_o *)0x0)) {
                pSVar7 = (pSVar6->fields).TapScoreboard;
                pUVar3 = (__this->fields).DoublePanelRight;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pSVar12 = UI_UIManager__GetLocale
                                    (pSVar10,"Keybinds.General","TapScoreboard",""
                                     ,"",(MethodInfo *)0x0);
                pSVar14 = UI_UIManager__GetLocale
                                    (pSVar10,"Keybinds.General","TapScoreboardTooltip",""
                                     ,"",(MethodInfo *)0x0);
                UI_ElementFactory__CreateToggleSetting
                          (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,pSVar14,30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
                if ((pSVar4 != (Settings_InputSettings_o *)0x0) &&
                   (pSVar6 = (pSVar4->fields).General, pSVar6 != (Settings_GeneralInputSettings_o *)0x0)) {
                  pUVar3 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar6->fields).TapMap;
                  pSVar12 = UI_UIManager__GetLocale
                                      (pSVar10,"Keybinds.General","TapMap",
                                       "","",(MethodInfo *)0x0);
                  pSVar10 = UI_UIManager__GetLocale
                                      (pSVar10,"Keybinds.General","TapMapTooltip",
                                       "","",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar3,pUVar11,(Settings_BaseSetting_o *)pSVar7,pSVar12,pSVar10,30.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsKeybindsDefaultPanel$$CreateKeybindSettings
// il2cpp: void UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings (UI_SettingsKeybindsDefaultPanel_o* __this, Settings_BaseSettingsContainer_o* container, UI_KeybindPopup_o* popup, System_String_o* cat, System_String_o* sub, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x1822e3ae0
// eh: try 0x1822e3c55..0x1822e4019 -> pad 0x183338440 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822e3d27: mov rsi, r14
// asm:   0x1822e3d2a: jmp 0x1822e3d7d
// asm:   0x1822e3fa8: lea rcx, [rsp + 0x70]
// asm:   0x1822e3fad: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1822e3fb2: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1822e3fb7: test rcx, rcx
// asm:   0x1822e3fba: jne 0x1822e4019
// asm:   0x1822e4019: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183338440: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183338445: push rbp
// asm:   0x183338446: sub rsp, 0x50
// asm:   0x18333844a: mov rbp, rdx
// asm:   0x18333844d: mov rax, qword ptr [rbp + 0x60]
// asm:   0x183338451: mov rcx, qword ptr [rax]
// asm:   0x183338454: mov qword ptr [rbp + 0x68], rcx
// asm:   0x183338458: movabs rax, 0
// asm:   0x183338462: add rsp, 0x50
// asm:   0x183338466: pop rbp
// asm:   0x183338467: ret 

void UI_SettingsKeybindsDefaultPanel__CreateKeybindSettings
               (UI_SettingsKeybindsDefaultPanel_o *__this,Settings_BaseSettingsContainer_o *container,
               UI_KeybindPopup_o *popup,System_String_o *cat,System_String_o *sub,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_Transform_o *parent;
  Il2CppType *handle;
  bool bVar6;
  bool bVar7;
  int32_t iVar8;
  void *pvVar9;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  ulonglong *puVar12;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar13;
  ushort uVar14;
  longlong lVar16;
  System_String_o *setting;
  int iVar17;
  Il2CppObject *local_88;
  Il2CppObject *local_80 [2];
  undefined8 local_70;
  Il2CppObject **local_68;
  Il2CppObject **local_60;
  System_String_o *pSVar15;
  
  if (Il2CppMethodInitialized_18434762c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434762c = '\x01';
  }
  iVar17 = 0;
  local_88 = (Il2CppObject *)0x0;
  local_80[0] = (Il2CppObject *)0x0;
  bVar6 = System_String__op_Equality(sub,"Keybinds.Titan",(MethodInfo *)0x0);
  if (bVar6) {
    bVar6 = true;
label_1822e3c07:
    sub = "Keybinds.Titan";
  }
  else {
    if (sub == (System_String_o *)0x0) goto label_1822e401f;
    bVar6 = System_String__Contains(sub,"Shifter",(MethodInfo *)0x0);
    if (bVar6) goto label_1822e3c07;
  }
  if ((container != (Settings_BaseSettingsContainer_o *)0x0) &&
     (pSVar3 = (container->fields).Settings,
     pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
    local_88 = (Il2CppObject *)
               (*(pSVar3->klass->vtable)._22_GetEnumerator.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._22_GetEnumerator.method);
    local_70 = 0;
    local_68 = &local_88;
    local_60 = local_80;
label_1822e3c70:
    do {
      do {
        pSVar13 = (System_String_o *)0x0;
        if (local_88 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar9 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_88);
        pIVar11 = local_88;
        if ((char)pvVar9 == '\0') {
          local_80[0] = il2cpp_vm_Object_IsInst(local_88,(Il2CppClass *)TypeInfo_System_IDisposable);
          if (local_80[0] != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_80[0]);
          }
          return;
        }
        if (local_88 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = local_88->klass;
        uVar2 = (pIVar4->_2).interface_offsets_count;
        if (uVar2 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          pSVar15 = pSVar13;
          do {
            if (pIVar5[(longlong)pSVar15].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar10 = pIVar4->vtable + (pIVar5[(longlong)pSVar15].offset + 1);
              goto label_1822e3ce9;
            }
            uVar14 = (short)pSVar15 + 1;
            pSVar15 = (System_String_o *)(ulonglong)uVar14;
          } while (uVar14 < uVar2);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1822e3ce9:
        pIVar11 = (*pVVar10->methodPtr)(pIVar11,pVVar10->method);
        if (pIVar11 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pIVar11->klass->_1).element_class !=
            (TypeInfo_System_Collections_DictionaryEntry->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar11,TypeInfo_System_Collections_DictionaryEntry);
        }
        puVar12 = il2cpp_object_unbox(pIVar11);
        pSVar15 = (System_String_o *)puVar12[1];
        setting = pSVar13;
        if (pSVar15 != (System_String_o *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((pSVar15->klass->_2).typeHierarchyDepth < bVar1) ||
             (setting = pSVar15,
             (pSVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar15);
          }
        }
        pSVar15 = (System_String_o *)*puVar12;
        if (pSVar15 != (System_String_o *)0x0) {
          if (pSVar15->klass == g_data_184354e50) {
            pSVar13 = pSVar15;
          }
          if (pSVar13 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
        }
        if ((bVar6 != false) &&
           (bVar7 = System_String__op_Equality(pSVar13,"CoverNape1",(MethodInfo *)0x0), bVar7)) {
          pSVar13 = "CoverNape";
        }
        if (setting == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        left = System_Object__GetType((Il2CppObject *)setting,(MethodInfo *)0x0);
        handle = TypeRef_Settings_KeybindSetting;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        bVar7 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                          ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                           (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)right,
                           (MethodInfo_841F20 *)0x0);
      } while (!bVar7);
      pSVar3 = (container->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar8 = System_Collections_Specialized_OrderedDictionary__get_Count(pSVar3,(MethodInfo *)0x0);
      lVar16 = 0x28;
      if (iVar8 / 2 <= iVar17) {
        lVar16 = 0x30;
      }
      parent = *(UnityEngine_Transform_o **)((longlong)&__this->klass + lVar16);
      if (bVar6 == false) {
label_1822e3eeb:
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar13 = UI_UIManager__GetLocale
                            (cat,sub,pSVar13,"","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateKeybindSetting
                  (parent,style,(Settings_BaseSetting_o *)setting,pSVar13,popup,"",120.0,
                   35.0,2,(MethodInfo *)0x0);
        iVar17 = iVar17 + 1;
        goto label_1822e3c70;
      }
      if (pSVar13 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_String__StartsWith(pSVar13,"Attack",(MethodInfo *)0x0);
      if (!bVar7) goto label_1822e3eeb;
      if ("Attack" == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar13 = System_String__Substring
                          (pSVar13,("Attack"->fields)._stringLength,(MethodInfo *)0x0);
      UI_ElementFactory__CreateKeybindSetting
                (parent,style,(Settings_BaseSetting_o *)setting,pSVar13,popup,"",120.0,35.0
                 ,2,(MethodInfo *)0x0);
      iVar17 = iVar17 + 1;
    } while( true );
  }
label_1822e401f:
  ThrowNullReferenceException();
}


// UI.SettingsKeybindsDefaultPanel$$.ctor
// il2cpp: void UI_SettingsKeybindsDefaultPanel___ctor (UI_SettingsKeybindsDefaultPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_SettingsKeybindsDefaultPanel___ctor(UI_SettingsKeybindsDefaultPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


