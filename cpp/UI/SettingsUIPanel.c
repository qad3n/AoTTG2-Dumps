// Type: UI.SettingsUIPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsUIPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsUIPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsUIPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsUIPanel__get_ScrollBar (UI_SettingsUIPanel_o* __this, const MethodInfo* method);
// 0x4139ef0

bool_conflict UI_SettingsUIPanel__get_ScrollBar(UI_SettingsUIPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsUIPanel$$Setup
// il2cpp: void UI_SettingsUIPanel__Setup (UI_SettingsUIPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4139f00

void UI_SettingsUIPanel__Setup
               (UI_SettingsUIPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *category;
  long lVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  Settings_BaseSetting_o *pSVar5;
  Settings_ToggleColorSetting_o *setting;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_00;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  MethodInfo *pMVar9;
  UI_ElementStyle_o *pUVar10;
  System_String_o *pSVar11;
  UnityEngine_Transform_o **ppUVar12;
  MethodInfo *pMVar13;
  MethodInfo *in_R9;
  
  if (DAT_0570496a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsPopup);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"UIScale");
    il2cpp_init_method_metadata(&"KillFeedCountTooltip");
    il2cpp_init_method_metadata(&"CrosshairStyle");
    il2cpp_init_method_metadata(&"ShowCrosshairArrows");
    il2cpp_init_method_metadata(&"FeedConsoleTooltip");
    il2cpp_init_method_metadata(&"RequireRestart");
    il2cpp_init_method_metadata(&"KillFeedCount");
    il2cpp_init_method_metadata(&"FeedConsole");
    il2cpp_init_method_metadata(&"KillScoreScale");
    il2cpp_init_method_metadata(&"JoinNotifications");
    il2cpp_init_method_metadata(&"ForceNameColor");
    il2cpp_init_method_metadata(&"ShowSongPopup");
    il2cpp_init_method_metadata(&"KDROptions");
    il2cpp_init_method_metadata(&"ShowGameTime");
    il2cpp_init_method_metadata(&"CrosshairSkin");
    il2cpp_init_method_metadata(&"JoinNotificationsTooltip");
    il2cpp_init_method_metadata(&"ChatHeight");
    il2cpp_init_method_metadata(&"Theme");
    il2cpp_init_method_metadata(&"ShowEmotes");
    il2cpp_init_method_metadata(&"MinNameLength");
    il2cpp_init_method_metadata(&"HumanNameDistanceTooltip");
    il2cpp_init_method_metadata(&"ShowChatTimestamp");
    il2cpp_init_method_metadata(&"NameBackgroundType");
    il2cpp_init_method_metadata(&"NameOverrideTarget");
    il2cpp_init_method_metadata(&"ShowHealthbarsOptions");
    il2cpp_init_method_metadata(&"ShowStylebar");
    il2cpp_init_method_metadata(&"ChatBackgroundColor");
    il2cpp_init_method_metadata(&"FadeMainMenu");
    il2cpp_init_method_metadata(&"HumanNameDistance");
    il2cpp_init_method_metadata(&"GameFeed");
    il2cpp_init_method_metadata(&"ShowKeybindTooltip");
    il2cpp_init_method_metadata(&"ShowNamesOptions");
    il2cpp_init_method_metadata(&"HUDScale");
    il2cpp_init_method_metadata(&"FadeLoadscreen");
    il2cpp_init_method_metadata(&"ShowHealthbars");
    il2cpp_init_method_metadata(&"Speedometer");
    il2cpp_init_method_metadata(&"ChatCLErrors");
    il2cpp_init_method_metadata(&"ShowPing");
    il2cpp_init_method_metadata(&"CoordinatesOptions");
    il2cpp_init_method_metadata(&"Coordinates");
    il2cpp_init_method_metadata(&"KDR");
    il2cpp_init_method_metadata(&"CrosshairScale");
    il2cpp_init_method_metadata(&"NameBackgroundTypeOptions");
    il2cpp_init_method_metadata(&"ShowNames");
    il2cpp_init_method_metadata(&"SpeedometerOptions");
    il2cpp_init_method_metadata(&"FadeLoadscreenTooltip");
    il2cpp_init_method_metadata(&"UI");
    il2cpp_init_method_metadata(&"MaxNameLength");
    il2cpp_init_method_metadata(&"GameFeedTooltip");
    il2cpp_init_method_metadata(&"ShowCrosshairDistance");
    il2cpp_init_method_metadata(&"ShowKeybindTip");
    il2cpp_init_method_metadata(&"MinimapScale");
    il2cpp_init_method_metadata(&"StylebarScale");
    il2cpp_init_method_metadata(&"CrosshairTextScale");
    il2cpp_init_method_metadata(&"ShowInterpolationTooltip");
    il2cpp_init_method_metadata(&"KillFeedScale");
    il2cpp_init_method_metadata(&"ForceBackgroundColor");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"CrosshairStyleOptions");
    il2cpp_init_method_metadata(&"ChatFontSize");
    il2cpp_init_method_metadata(&"ChatScrollSensitivity");
    il2cpp_init_method_metadata(&"FadeMainMenuTooltip");
    il2cpp_init_method_metadata(&"ChatWidth");
    il2cpp_init_method_metadata(&"ShowInterpolation");
    il2cpp_init_method_metadata(&"ChatCLErrorsTooltip");
    DAT_0570496a = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar11 = "UI";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    category = (MethodInfo *)parent[1].fields._currentCategoryPanel;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    pSVar6 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,200.0,20.0,pSVar6,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if (lVar3 != 0) {
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x20);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar9 = category;
      pSVar7 = UI_UIManager__GetLocale
                         ((System_String_o *)category,pSVar11,"Theme",
                          (System_String_o *)"",(System_String_o *)"",in_R9);
      pSVar8 = UI_UIManager__GetUIThemes(pMVar9);
      pSVar6 = "RequireRestart";
      if (DAT_05704983 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_UIManager);
        il2cpp_init_method_metadata(&"Common");
        il2cpp_init_method_metadata(&"");
        DAT_05704983 = '\x01';
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar9 = (MethodInfo *)
               UI_UIManager__GetLocale
                         ("Common",pSVar6,(System_String_o *)"",
                          (System_String_o *)"",(System_String_o *)"",in_R9);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,pSVar5,pSVar7,pSVar8,(System_String_o *)pMVar9,160.0,40.0,300.0,
                 (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if (lVar3 != 0) {
        ppUVar12 = &(__this->fields).DoublePanelLeft;
        pUVar4 = *ppUVar12;
        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x40);
        pSVar6 = UI_UIManager__GetLocale
                           ((System_String_o *)category,pSVar11,"UIScale",
                            (System_String_o *)"",(System_String_o *)"",pMVar9);
        pMVar9 = (MethodInfo *)0x2;
        UI_ElementFactory__CreateSliderSetting
                  (pUVar4,__this_00,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0,2,
                   (MethodInfo *)0x0);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          pUVar4 = *ppUVar12;
          pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x60);
          pSVar6 = UI_UIManager__GetLocale
                             ((System_String_o *)category,pSVar11,"HUDScale",
                              (System_String_o *)"",(System_String_o *)"",pMVar9
                             );
          pMVar9 = (MethodInfo *)0x2;
          UI_ElementFactory__CreateSliderSetting
                    (pUVar4,__this_00,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0,2,
                     (MethodInfo *)0x0);
          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if (lVar3 != 0) {
            pUVar4 = *ppUVar12;
            pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x68);
            pSVar6 = UI_UIManager__GetLocale
                               ((System_String_o *)category,pSVar11,"MinimapScale",
                                (System_String_o *)"",(System_String_o *)"",
                                pMVar9);
            pMVar9 = (MethodInfo *)0x2;
            UI_ElementFactory__CreateSliderSetting
                      (pUVar4,__this_00,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0,2,
                       (MethodInfo *)0x0);
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if (lVar3 != 0) {
              pUVar4 = *ppUVar12;
              pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x70);
              pSVar6 = UI_UIManager__GetLocale
                                 ((System_String_o *)category,pSVar11,"StylebarScale",
                                  (System_String_o *)"",(System_String_o *)"",
                                  pMVar9);
              pMVar9 = (MethodInfo *)0x2;
              UI_ElementFactory__CreateSliderSetting
                        (pUVar4,__this_00,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0,2
                         ,(MethodInfo *)0x0);
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if (lVar3 != 0) {
                pUVar4 = *ppUVar12;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x78);
                pSVar6 = UI_UIManager__GetLocale
                                   ((System_String_o *)category,pSVar11,"KillScoreScale",
                                    (System_String_o *)"",(System_String_o *)"",
                                    pMVar9);
                pMVar9 = (MethodInfo *)0x2;
                UI_ElementFactory__CreateSliderSetting
                          (pUVar4,__this_00,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0
                           ,2,(MethodInfo *)0x0);
                lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                if (lVar3 != 0) {
                  pUVar4 = *ppUVar12;
                  pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x80);
                  pSVar6 = UI_UIManager__GetLocale
                                     ((System_String_o *)category,pSVar11,"KillFeedScale",
                                      (System_String_o *)"",
                                      (System_String_o *)"",pMVar9);
                  pMVar9 = (MethodInfo *)0x2;
                  UI_ElementFactory__CreateSliderSetting
                            (pUVar4,__this_00,pSVar5,pSVar6,(System_String_o *)"",135.0,
                             16.0,2,(MethodInfo *)0x0);
                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if (lVar3 != 0) {
                    pUVar4 = *ppUVar12;
                    pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x38);
                    pSVar6 = UI_UIManager__GetLocale
                                       ((System_String_o *)category,pSVar11,"ShowStylebar",
                                        (System_String_o *)"",
                                        (System_String_o *)"",pMVar9);
                    pMVar9 = (MethodInfo *)0x0;
                    UI_ElementFactory__CreateToggleSetting
                              (pUVar4,__this_00,pSVar5,pSVar6,(System_String_o *)"",30.0,
                               30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                    if (lVar3 != 0) {
                      pUVar4 = *ppUVar12;
                      pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x28);
                      pSVar6 = UI_UIManager__GetLocale
                                         ((System_String_o *)category,pSVar11,"GameFeed",
                                          (System_String_o *)"",
                                          (System_String_o *)"",pMVar9);
                      pSVar7 = UI_UIManager__GetLocale
                                         ((System_String_o *)category,pSVar11,"GameFeedTooltip",
                                          (System_String_o *)"",
                                          (System_String_o *)"",pMVar9);
                      pMVar9 = (MethodInfo *)0x0;
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar4,__this_00,pSVar5,pSVar6,pSVar7,30.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if (lVar3 != 0) {
                        pUVar4 = *ppUVar12;
                        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x30);
                        pSVar6 = UI_UIManager__GetLocale
                                           ((System_String_o *)category,pSVar11,"FeedConsole",
                                            (System_String_o *)"",
                                            (System_String_o *)"",pMVar9);
                        pSVar7 = UI_UIManager__GetLocale
                                           ((System_String_o *)category,pSVar11,"FeedConsoleTooltip",
                                            (System_String_o *)"",
                                            (System_String_o *)"",pMVar9);
                        pMVar9 = (MethodInfo *)0x0;
                        UI_ElementFactory__CreateToggleSetting
                                  (pUVar4,__this_00,pSVar5,pSVar6,pSVar7,30.0,30.0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                        if (lVar3 != 0) {
                          pUVar4 = *ppUVar12;
                          pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xb0);
                          pMVar13 = "";
                          pSVar6 = UI_UIManager__GetLocale
                                             ((System_String_o *)category,pSVar11,"KDR",
                                              (System_String_o *)"",
                                              (System_String_o *)"",pMVar9);
                          pSVar8 = UI_UIManager__GetLocaleArray
                                             ((System_String_o *)category,pSVar11,"KDROptions",
                                              (System_String_o *)"",pMVar13);
                          pMVar9 = "";
                          UI_ElementFactory__CreateDropdownSetting
                                    (pUVar4,__this_00,pSVar5,pSVar6,pSVar8,
                                     (System_String_o *)"",160.0,40.0,300.0,
                                     (System_Nullable_float__o)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                          if (lVar3 != 0) {
                            pUVar4 = *ppUVar12;
                            pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x168);
                            pSVar6 = UI_UIManager__GetLocale
                                               ((System_String_o *)category,pSVar11,"JoinNotifications",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar9);
                            pSVar7 = UI_UIManager__GetLocale
                                               ((System_String_o *)category,pSVar11,"JoinNotificationsTooltip",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar9);
                            pMVar9 = (MethodInfo *)0x0;
                            UI_ElementFactory__CreateToggleSetting
                                      (pUVar4,__this_00,pSVar5,pSVar6,pSVar7,30.0,30.0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                            if (lVar3 != 0) {
                              pUVar4 = *ppUVar12;
                              pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xb8);
                              pSVar6 = UI_UIManager__GetLocale
                                                 ((System_String_o *)category,pSVar11,"ShowPing",
                                                  (System_String_o *)"",
                                                  (System_String_o *)"",pMVar9);
                              pMVar9 = (MethodInfo *)0x0;
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar4,__this_00,pSVar5,pSVar6,
                                         (System_String_o *)"",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                              if (lVar3 != 0) {
                                pUVar4 = *ppUVar12;
                                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xd0);
                                pSVar6 = UI_UIManager__GetLocale
                                                   ((System_String_o *)category,pSVar11,"ShowGameTime"
                                                    ,(System_String_o *)"",
                                                    (System_String_o *)"",pMVar9);
                                pMVar9 = (MethodInfo *)0x0;
                                UI_ElementFactory__CreateToggleSetting
                                          (pUVar4,__this_00,pSVar5,pSVar6,
                                           (System_String_o *)"",30.0,30.0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0
                                          );
                                lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                if (lVar3 != 0) {
                                  pUVar4 = *ppUVar12;
                                  pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xd8);
                                  pSVar6 = UI_UIManager__GetLocale
                                                     ((System_String_o *)category,pSVar11,
                                                      "ShowSongPopup",(System_String_o *)"",
                                                      (System_String_o *)"",pMVar9);
                                  pMVar9 = (MethodInfo *)0x0;
                                  UI_ElementFactory__CreateToggleSetting
                                            (pUVar4,__this_00,pSVar5,pSVar6,
                                             (System_String_o *)"",30.0,30.0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (MethodInfo *)0x0);
                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                  if (lVar3 != 0) {
                                    pUVar4 = *ppUVar12;
                                    pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xc0);
                                    pSVar6 = UI_UIManager__GetLocale
                                                       ((System_String_o *)category,pSVar11,
                                                        "ShowEmotes",(System_String_o *)""
                                                        ,(System_String_o *)"",pMVar9);
                                    pMVar9 = (MethodInfo *)0x0;
                                    UI_ElementFactory__CreateToggleSetting
                                              (pUVar4,__this_00,pSVar5,pSVar6,
                                               (System_String_o *)"",30.0,30.0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (MethodInfo *)0x0);
                                    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                    if (lVar3 != 0) {
                                      pUVar4 = *ppUVar12;
                                      pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xe0);
                                      pMVar13 = "";
                                      pSVar6 = UI_UIManager__GetLocale
                                                         ((System_String_o *)category,pSVar11,
                                                          "ShowNames",
                                                          (System_String_o *)"",
                                                          (System_String_o *)"",pMVar9);
                                      pSVar8 = UI_UIManager__GetLocaleArray
                                                         ((System_String_o *)category,pSVar11,
                                                          "ShowNamesOptions",
                                                          (System_String_o *)"",pMVar13);
                                      pMVar9 = "";
                                      UI_ElementFactory__CreateDropdownSetting
                                                (pUVar4,__this_00,pSVar5,pSVar6,pSVar8,
                                                 (System_String_o *)"",160.0,40.0,300.0,
                                                 (System_Nullable_float__o)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (MethodInfo *)0x0);
                                      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                      if (lVar3 != 0) {
                                        pUVar4 = *ppUVar12;
                                        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xe8);
                                        pMVar13 = "";
                                        pSVar6 = UI_UIManager__GetLocale
                                                           ((System_String_o *)category,pSVar11,
                                                            "ShowHealthbars",
                                                            (System_String_o *)"",
                                                            (System_String_o *)"",pMVar9);
                                        pSVar8 = UI_UIManager__GetLocaleArray
                                                           ((System_String_o *)category,pSVar11,
                                                            "ShowHealthbarsOptions",
                                                            (System_String_o *)"",pMVar13)
                                        ;
                                        pMVar9 = "";
                                        UI_ElementFactory__CreateDropdownSetting
                                                  (pUVar4,__this_00,pSVar5,pSVar6,pSVar8,
                                                   (System_String_o *)"",160.0,40.0,300.0,
                                                   (System_Nullable_float__o)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (MethodInfo *)0x0);
                                        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                        if (lVar3 != 0) {
                                          pUVar4 = *ppUVar12;
                                          pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xf0);
                                          pSVar6 = UI_UIManager__GetLocale
                                                             ((System_String_o *)category,pSVar11,
                                                              "HumanNameDistance",
                                                              (System_String_o *)"",
                                                              (System_String_o *)"",pMVar9
                                                             );
                                          pSVar7 = UI_UIManager__GetLocale
                                                             ((System_String_o *)category,pSVar11,
                                                              "HumanNameDistanceTooltip",
                                                              (System_String_o *)"",
                                                              (System_String_o *)"",pMVar9
                                                             );
                                          pMVar9 = (MethodInfo *)0x0;
                                          UI_ElementFactory__CreateInputSetting
                                                    (pUVar4,__this_00,pSVar5,pSVar6,pSVar7,160.0,
                                                     40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,
                                                     (MethodInfo *)0x0);
                                          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                          if (lVar3 != 0) {
                                            pUVar4 = *ppUVar12;
                                            pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xf8);
                                            pMVar13 = "";
                                            pSVar6 = UI_UIManager__GetLocale
                                                               ((System_String_o *)category,pSVar11,
                                                                "NameOverrideTarget",
                                                                (System_String_o *)"",
                                                                (System_String_o *)"",
                                                                pMVar9);
                                            pSVar8 = UI_UIManager__GetLocaleArray
                                                               ((System_String_o *)category,pSVar11,
                                                                "ShowNamesOptions",
                                                                (System_String_o *)"",
                                                                pMVar13);
                                            pMVar9 = "";
                                            UI_ElementFactory__CreateDropdownSetting
                                                      (pUVar4,__this_00,pSVar5,pSVar6,pSVar8,
                                                       (System_String_o *)"",160.0,40.0,
                                                       300.0,(System_Nullable_float__o)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28)
                                            ;
                                            if (lVar3 != 0) {
                                              pUVar4 = *ppUVar12;
                                              pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x100);
                                              pMVar13 = "";
                                              pSVar6 = UI_UIManager__GetLocale
                                                                 ((System_String_o *)category,
                                                                  pSVar11,"NameBackgroundType",
                                                                  (System_String_o *)"",
                                                                  (System_String_o *)"",
                                                                  pMVar9);
                                              pSVar8 = UI_UIManager__GetLocaleArray
                                                                 ((System_String_o *)category,
                                                                  pSVar11,"NameBackgroundTypeOptions",
                                                                  (System_String_o *)"",
                                                                  pMVar13);
                                              pMVar9 = "";
                                              UI_ElementFactory__CreateDropdownSetting
                                                        (pUVar4,__this_00,pSVar5,pSVar6,pSVar8,
                                                         (System_String_o *)"",160.0,40.0,
                                                         300.0,(System_Nullable_float__o)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (MethodInfo *)0x0);
                                              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                               0x28);
                                              if (lVar3 != 0) {
                                                pUVar4 = *ppUVar12;
                                                setting = *(Settings_ToggleColorSetting_o **)
                                                           (lVar3 + 0x108);
                                                pSVar6 = UI_UIManager__GetLocale
                                                                   ((System_String_o *)category,
                                                                    pSVar11,"ForceNameColor",
                                                                    (System_String_o *)"",
                                                                    (System_String_o *)"",
                                                                    pMVar9);
                                                lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) +
                                                                 0x28);
                                                if (lVar3 != 0) {
                                                  pMVar9 = "";
                                                  UI_ElementFactory__CreateToggleColorSetting
                                                            (pUVar4,__this_00,setting,pSVar6,
                                                             *(UI_ColorPickPopup_o **)(lVar3 + 0x48)
                                                             ,(System_String_o *)"",30.0,
                                                             30.0,90.0,30.0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0
                                                             ,(UnityEngine_Events_UnityAction_o *)
                                                              0x0,(MethodInfo *)0x0);
                                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar3 != 0) {
                                                    pUVar4 = *ppUVar12;
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar3 + 0x110);
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"ForceBackgroundColor",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8)
                                                                     + 0x28);
                                                    if (lVar3 != 0) {
                                                      pMVar9 = "";
                                                      UI_ElementFactory__CreateColorSetting
                                                                (pUVar4,__this_00,pSVar5,pSVar6,
                                                                 *(UI_ColorPickPopup_o **)
                                                                  (lVar3 + 0x48),
                                                                 (System_String_o *)"",
                                                                 90.0,30.0,
                                                                 (UnityEngine_Events_UnityAction_o *
                                                                 )0x0,(MethodInfo *)0x0);
                                                      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager +
                                                                                 0xb8) + 0x28);
                                                      if (lVar3 != 0) {
                                                        pUVar4 = *ppUVar12;
                                                        pSVar5 = *(Settings_BaseSetting_o **)
                                                                  (lVar3 + 0x118);
                                                        pSVar6 = UI_UIManager__GetLocale
                                                                           ((System_String_o *)
                                                                            category,pSVar11,
                                                                            "MinNameLength",
                                                                            (System_String_o *)
                                                                            "",
                                                                            (System_String_o *)
                                                                            "",pMVar9);
                                                        pMVar9 = (MethodInfo *)0x0;
                                                        UI_ElementFactory__CreateInputSetting
                                                                  (pUVar4,__this_00,pSVar5,pSVar6,
                                                                   (System_String_o *)"",
                                                                   160.0,40.0,0,
                                                                   (UnityEngine_Events_UnityAction_o
                                                                    *)0x0,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar3 != 0) {
                                                    pUVar4 = (__this->fields).DoublePanelLeft;
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar3 + 0x120);
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"MaxNameLength",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    pMVar9 = (MethodInfo *)0x0;
                                                    UI_ElementFactory__CreateInputSetting
                                                              (pUVar4,__this_00,pSVar5,pSVar6,
                                                               (System_String_o *)"",160.0
                                                               ,40.0,0,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar3 != 0) {
                                                    pUVar4 = (__this->fields).DoublePanelRight;
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar3 + 0x90);
                                                    pMVar13 = "";
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"CrosshairStyle",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    pSVar8 = UI_UIManager__GetLocaleArray
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"CrosshairStyleOptions",
                                                                        (System_String_o *)
                                                                        "",pMVar13);
                                                    pMVar9 = "";
                                                    UI_ElementFactory__CreateDropdownSetting
                                                              (pUVar4,__this_00,pSVar5,pSVar6,pSVar8
                                                               ,(System_String_o *)"",
                                                               200.0,40.0,300.0,
                                                               (System_Nullable_float__o)0x0,
                                                               (UnityEngine_Events_UnityAction_o *)
                                                               0x0,(MethodInfo *)0x0);
                                                    pUVar4 = (__this->fields).DoublePanelRight;
                                                    pSVar6 = (System_String_o *)
                                                             (*(__this->klass->vtable).
                                                               _4_get_ThemePanel.methodPtr)
                                                                       (__this,(__this->klass->
                                                                               vtable).
                                                  _4_get_ThemePanel.method);
                                                  pUVar10 = (UI_ElementStyle_o *)
                                                            il2cpp_runtime_glue(TypeInfo_ElementStyle);
                                                  UI_ElementStyle___ctor
                                                            (pUVar10,0x18,150.0,20.0,pSVar6,
                                                             (MethodInfo *)0x0);
                                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar3 != 0) {
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar3 + 0x48);
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"CrosshairScale",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    pMVar9 = (MethodInfo *)0x2;
                                                    UI_ElementFactory__CreateSliderSetting
                                                              (pUVar4,pUVar10,pSVar5,pSVar6,
                                                               (System_String_o *)"",185.0
                                                               ,16.0,2,(MethodInfo *)0x0);
                                                    pUVar4 = (__this->fields).DoublePanelRight;
                                                    pSVar6 = (System_String_o *)
                                                             (*(__this->klass->vtable).
                                                               _4_get_ThemePanel.methodPtr)
                                                                       (__this,(__this->klass->
                                                                               vtable).
                                                  _4_get_ThemePanel.method);
                                                  pUVar10 = (UI_ElementStyle_o *)
                                                            il2cpp_runtime_glue(TypeInfo_ElementStyle);
                                                  UI_ElementStyle___ctor
                                                            (pUVar10,0x18,150.0,20.0,pSVar6,
                                                             (MethodInfo *)0x0);
                                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar3 != 0) {
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar3 + 0x50);
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"CrosshairTextScale",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    pMVar9 = (MethodInfo *)0x2;
                                                    UI_ElementFactory__CreateSliderSetting
                                                              (pUVar4,pUVar10,pSVar5,pSVar6,
                                                               (System_String_o *)"",185.0
                                                               ,16.0,2,(MethodInfo *)0x0);
                                                    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8)
                                                                     + 0x28);
                                                    if (lVar3 != 0) {
                                                      pUVar4 = (__this->fields).DoublePanelRight;
                                                      pSVar5 = *(Settings_BaseSetting_o **)
                                                                (lVar3 + 0x88);
                                                      pSVar6 = UI_UIManager__GetLocale
                                                                         ((System_String_o *)
                                                                          category,pSVar11,
                                                                          "ShowCrosshairDistance",
                                                                          (System_String_o *)
                                                                          "",
                                                                          (System_String_o *)
                                                                          "",pMVar9);
                                                      pMVar9 = (MethodInfo *)0x0;
                                                      UI_ElementFactory__CreateToggleSetting
                                                                (pUVar4,__this_00,pSVar5,pSVar6,
                                                                 (System_String_o *)"",
                                                                 30.0,30.0,
                                                                 (UnityEngine_Events_UnityAction_o *
                                                                 )0x0,(MethodInfo *)0x0);
                                                      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager +
                                                                                 0xb8) + 0x28);
                                                      if (lVar3 != 0) {
                                                        pUVar4 = (__this->fields).DoublePanelRight;
                                                        pSVar5 = *(Settings_BaseSetting_o **)
                                                                  (lVar3 + 0xa8);
                                                        pSVar6 = UI_UIManager__GetLocale
                                                                           ((System_String_o *)
                                                                            category,pSVar11,
                                                                            "ShowCrosshairArrows",
                                                                            (System_String_o *)
                                                                            "",
                                                                            (System_String_o *)
                                                                            "",pMVar9);
                                                        pMVar9 = (MethodInfo *)0x0;
                                                        UI_ElementFactory__CreateToggleSetting
                                                                  (pUVar4,__this_00,pSVar5,pSVar6,
                                                                   (System_String_o *)"",
                                                                   30.0,30.0,
                                                                   (UnityEngine_Events_UnityAction_o
                                                                    *)0x0,(MethodInfo *)0x0);
                                                        if (lVar2 != 0) {
                                                          pUVar4 = (__this->fields).DoublePanelRight
                                                          ;
                                                          pSVar5 = *(Settings_BaseSetting_o **)
                                                                    (lVar2 + 0x58);
                                                          pSVar6 = UI_UIManager__GetLocale
                                                                             ((System_String_o *)
                                                                              category,pSVar11,
                                                                              "CrosshairSkin",
                                                                              (System_String_o *)
                                                                              "",
                                                                              (System_String_o *)
                                                                              "",pMVar9);
                                                          pMVar9 = (MethodInfo *)0x0;
                                                          UI_ElementFactory__CreateInputSetting
                                                                    (pUVar4,__this_00,pSVar5,pSVar6,
                                                                     (System_String_o *)""
                                                                     ,160.0,40.0,0,
                                                                     (
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar3 != 0) {
                                                    pUVar4 = (__this->fields).DoublePanelRight;
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar3 + 0x98);
                                                    pMVar13 = "";
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"Speedometer",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    pSVar8 = UI_UIManager__GetLocaleArray
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"SpeedometerOptions",
                                                                        (System_String_o *)
                                                                        "",pMVar13);
                                                    pMVar9 = "";
                                                    UI_ElementFactory__CreateDropdownSetting
                                                              (pUVar4,__this_00,pSVar5,pSVar6,pSVar8
                                                               ,(System_String_o *)"",
                                                               160.0,40.0,300.0,
                                                               (System_Nullable_float__o)0x0,
                                                               (UnityEngine_Events_UnityAction_o *)
                                                               0x0,(MethodInfo *)0x0);
                                                    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8)
                                                                     + 0x28);
                                                    if (lVar3 != 0) {
                                                      pUVar4 = (__this->fields).DoublePanelRight;
                                                      pSVar5 = *(Settings_BaseSetting_o **)
                                                                (lVar3 + 0x170);
                                                      pMVar13 = "";
                                                      pSVar6 = UI_UIManager__GetLocale
                                                                         ((System_String_o *)
                                                                          category,pSVar11,
                                                                          "Coordinates",
                                                                          (System_String_o *)
                                                                          "",
                                                                          (System_String_o *)
                                                                          "",pMVar9);
                                                      pSVar8 = UI_UIManager__GetLocaleArray
                                                                         ((System_String_o *)
                                                                          category,pSVar11,
                                                                          "CoordinatesOptions",
                                                                          (System_String_o *)
                                                                          "",pMVar13);
                                                      pMVar9 = "";
                                                      UI_ElementFactory__CreateDropdownSetting
                                                                (pUVar4,__this_00,pSVar5,pSVar6,
                                                                 pSVar8,(System_String_o *)
                                                                        "",160.0,40.0,
                                                                 300.0,(System_Nullable_float__o)0x0
                                                                 ,(UnityEngine_Events_UnityAction_o
                                                                   *)0x0,(MethodInfo *)0x0);
                                                      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager +
                                                                                 0xb8) + 0x28);
                                                      if (lVar3 != 0) {
                                                        pUVar4 = (__this->fields).DoublePanelRight;
                                                        pSVar5 = *(Settings_BaseSetting_o **)
                                                                  (lVar3 + 0x128);
                                                        pSVar6 = UI_UIManager__GetLocale
                                                                           ((System_String_o *)
                                                                            category,pSVar11,
                                                                            "FadeMainMenu",
                                                                            (System_String_o *)
                                                                            "",
                                                                            (System_String_o *)
                                                                            "",pMVar9);
                                                        pSVar7 = UI_UIManager__GetLocale
                                                                           ((System_String_o *)
                                                                            category,pSVar11,
                                                                            "FadeMainMenuTooltip",
                                                                            (System_String_o *)
                                                                            "",
                                                                            (System_String_o *)
                                                                            "",pMVar9);
                                                        pMVar9 = (MethodInfo *)0x0;
                                                        UI_ElementFactory__CreateToggleSetting
                                                                  (pUVar4,__this_00,pSVar5,pSVar6,
                                                                   pSVar7,30.0,30.0,
                                                                   (UnityEngine_Events_UnityAction_o
                                                                    *)0x0,(MethodInfo *)0x0);
                                                        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager +
                                                                                   0xb8) + 0x28);
                                                        if (lVar3 != 0) {
                                                          pUVar4 = (__this->fields).DoublePanelRight
                                                          ;
                                                          pSVar5 = *(Settings_BaseSetting_o **)
                                                                    (lVar3 + 0x130);
                                                          pSVar6 = UI_UIManager__GetLocale
                                                                             ((System_String_o *)
                                                                              category,pSVar11,
                                                                              "FadeLoadscreen",
                                                                              (System_String_o *)
                                                                              "",
                                                                              (System_String_o *)
                                                                              "",pMVar9);
                                                          pSVar7 = UI_UIManager__GetLocale
                                                                             ((System_String_o *)
                                                                              category,pSVar11,
                                                                              "FadeLoadscreenTooltip",
                                                                              (System_String_o *)
                                                                              "",
                                                                              (System_String_o *)
                                                                              "",pMVar9);
                                                          pMVar9 = (MethodInfo *)0x0;
                                                          UI_ElementFactory__CreateToggleSetting
                                                                    (pUVar4,__this_00,pSVar5,pSVar6,
                                                                     pSVar7,30.0,30.0,
                                                                     (
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar3 != 0) {
                                                    pUVar4 = (__this->fields).DoublePanelRight;
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar3 + 0xa0);
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"ShowInterpolation",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    pSVar7 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"ShowInterpolationTooltip",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    pMVar9 = (MethodInfo *)0x0;
                                                    UI_ElementFactory__CreateToggleSetting
                                                              (pUVar4,__this_00,pSVar5,pSVar6,pSVar7
                                                               ,30.0,30.0,
                                                               (UnityEngine_Events_UnityAction_o *)
                                                               0x0,(MethodInfo *)0x0);
                                                    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8)
                                                                     + 0x28);
                                                    if (lVar3 != 0) {
                                                      pUVar4 = (__this->fields).DoublePanelRight;
                                                      pSVar5 = *(Settings_BaseSetting_o **)
                                                                (lVar3 + 200);
                                                      pSVar6 = UI_UIManager__GetLocale
                                                                         ((System_String_o *)
                                                                          category,pSVar11,
                                                                          "ShowKeybindTip",
                                                                          (System_String_o *)
                                                                          "",
                                                                          (System_String_o *)
                                                                          "",pMVar9);
                                                      pSVar7 = UI_UIManager__GetLocale
                                                                         ((System_String_o *)
                                                                          category,pSVar11,
                                                                          "ShowKeybindTooltip",
                                                                          (System_String_o *)
                                                                          "",
                                                                          (System_String_o *)
                                                                          "",pMVar9);
                                                      pMVar9 = (MethodInfo *)0x0;
                                                      UI_ElementFactory__CreateToggleSetting
                                                                (pUVar4,__this_00,pSVar5,pSVar6,
                                                                 pSVar7,30.0,30.0,
                                                                 (UnityEngine_Events_UnityAction_o *
                                                                 )0x0,(MethodInfo *)0x0);
                                                      pUVar4 = (__this->fields).DoublePanelRight;
                                                      pSVar5 = *(Settings_BaseSetting_o **)
                                                                (lVar2 + 0x160);
                                                      pSVar6 = UI_UIManager__GetLocale
                                                                         ((System_String_o *)
                                                                          category,pSVar11,
                                                                          "KillFeedCount",
                                                                          (System_String_o *)
                                                                          "",
                                                                          (System_String_o *)
                                                                          "",pMVar9);
                                                      pSVar7 = UI_UIManager__GetLocale
                                                                         ((System_String_o *)
                                                                          category,pSVar11,
                                                                          "KillFeedCountTooltip",
                                                                          (System_String_o *)
                                                                          "",
                                                                          (System_String_o *)
                                                                          "",pMVar9);
                                                      pMVar9 = (MethodInfo *)0x0;
                                                      UI_ElementFactory__CreateInputSetting
                                                                (pUVar4,__this_00,pSVar5,pSVar6,
                                                                 pSVar7,100.0,40.0,0,
                                                                 (UnityEngine_Events_UnityAction_o *
                                                                 )0x0,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  pUVar4 = (__this->fields).DoublePanelRight;
                                                  pSVar5 = *(Settings_BaseSetting_o **)
                                                            (lVar2 + 0x178);
                                                  pSVar6 = UI_UIManager__GetLocale
                                                                     ((System_String_o *)category,
                                                                      pSVar11,"ShowChatTimestamp",
                                                                      (System_String_o *)
                                                                      "",
                                                                      (System_String_o *)
                                                                      "",pMVar9);
                                                  pMVar9 = (MethodInfo *)0x0;
                                                  UI_ElementFactory__CreateToggleSetting
                                                            (pUVar4,__this_00,pSVar5,pSVar6,
                                                             (System_String_o *)"",30.0,
                                                             30.0,(UnityEngine_Events_UnityAction_o
                                                                   *)0x0,(MethodInfo *)0x0);
                                                  pUVar4 = (__this->fields).DoublePanelRight;
                                                  pSVar5 = *(Settings_BaseSetting_o **)
                                                            (lVar2 + 0x138);
                                                  pSVar6 = UI_UIManager__GetLocale
                                                                     ((System_String_o *)category,
                                                                      pSVar11,"ChatWidth",
                                                                      (System_String_o *)
                                                                      "",
                                                                      (System_String_o *)
                                                                      "",pMVar9);
                                                  pMVar9 = (MethodInfo *)0x0;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar4,__this_00,pSVar5,pSVar6,
                                                             (System_String_o *)"",100.0,
                                                             40.0,0,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  pUVar4 = (__this->fields).DoublePanelRight;
                                                  pSVar5 = *(Settings_BaseSetting_o **)
                                                            (lVar2 + 0x140);
                                                  pSVar6 = UI_UIManager__GetLocale
                                                                     ((System_String_o *)category,
                                                                      pSVar11,"ChatHeight",
                                                                      (System_String_o *)
                                                                      "",
                                                                      (System_String_o *)
                                                                      "",pMVar9);
                                                  pMVar9 = (MethodInfo *)0x0;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar4,__this_00,pSVar5,pSVar6,
                                                             (System_String_o *)"",100.0,
                                                             40.0,0,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  pUVar4 = (__this->fields).DoublePanelRight;
                                                  pSVar5 = *(Settings_BaseSetting_o **)
                                                            (lVar2 + 0x148);
                                                  pSVar6 = UI_UIManager__GetLocale
                                                                     ((System_String_o *)category,
                                                                      pSVar11,"ChatFontSize",
                                                                      (System_String_o *)
                                                                      "",
                                                                      (System_String_o *)
                                                                      "",pMVar9);
                                                  pMVar9 = (MethodInfo *)0x0;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar4,__this_00,pSVar5,pSVar6,
                                                             (System_String_o *)"",100.0,
                                                             40.0,0,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  pUVar4 = (__this->fields).DoublePanelRight;
                                                  pSVar5 = *(Settings_BaseSetting_o **)
                                                            (lVar2 + 0x158);
                                                  pSVar6 = UI_UIManager__GetLocale
                                                                     ((System_String_o *)category,
                                                                      pSVar11,"ChatScrollSensitivity",
                                                                      (System_String_o *)
                                                                      "",
                                                                      (System_String_o *)
                                                                      "",pMVar9);
                                                  pMVar9 = (MethodInfo *)0x0;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar4,__this_00,pSVar5,pSVar6,
                                                             (System_String_o *)"",140.0,
                                                             40.0,0,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                                  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                   0x28);
                                                  if (lVar2 != 0) {
                                                    pUVar4 = (__this->fields).DoublePanelRight;
                                                    pSVar5 = *(Settings_BaseSetting_o **)
                                                              (lVar2 + 0x188);
                                                    pSVar6 = UI_UIManager__GetLocale
                                                                       ((System_String_o *)category,
                                                                        pSVar11,"ChatBackgroundColor",
                                                                        (System_String_o *)
                                                                        "",
                                                                        (System_String_o *)
                                                                        "",pMVar9);
                                                    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8)
                                                                     + 0x28);
                                                    if (lVar2 != 0) {
                                                      pMVar9 = "";
                                                      UI_ElementFactory__CreateColorSetting
                                                                (pUVar4,__this_00,pSVar5,pSVar6,
                                                                 *(UI_ColorPickPopup_o **)
                                                                  (lVar2 + 0x48),
                                                                 (System_String_o *)"",
                                                                 90.0,30.0,
                                                                 (UnityEngine_Events_UnityAction_o *
                                                                 )0x0,(MethodInfo *)0x0);
                                                      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager +
                                                                                 0xb8) + 0x28);
                                                      if (lVar2 != 0) {
                                                        pUVar4 = (__this->fields).DoublePanelRight;
                                                        pSVar5 = *(Settings_BaseSetting_o **)
                                                                  (lVar2 + 400);
                                                        pSVar6 = UI_UIManager__GetLocale
                                                                           ((System_String_o *)
                                                                            category,pSVar11,
                                                                            "ChatCLErrors",
                                                                            (System_String_o *)
                                                                            "",
                                                                            (System_String_o *)
                                                                            "",pMVar9);
                                                        pSVar11 = UI_UIManager__GetLocale
                                                                            ((System_String_o *)
                                                                             category,pSVar11,
                                                                             "ChatCLErrorsTooltip",
                                                                             (System_String_o *)
                                                                             "",
                                                                             (System_String_o *)
                                                                             "",pMVar9);
                                                        UI_ElementFactory__CreateToggleSetting
                                                                  (pUVar4,__this_00,pSVar5,pSVar6,
                                                                   pSVar11,30.0,30.0,
                                                                   (UnityEngine_Events_UnityAction_o
                                                                    *)0x0,(MethodInfo *)0x0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsUIPanel$$.ctor
// il2cpp: void UI_SettingsUIPanel___ctor (UI_SettingsUIPanel_o* __this, const MethodInfo* method);
// 0x413c220

void UI_SettingsUIPanel___ctor(UI_SettingsUIPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


