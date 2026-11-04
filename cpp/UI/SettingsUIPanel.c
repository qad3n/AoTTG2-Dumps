// Type: UI.SettingsUIPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsUIPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsUIPanel.cs
// --------------------------------

// UI.SettingsUIPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsUIPanel__get_ScrollBar (UI_SettingsUIPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsUIPanel__get_ScrollBar(UI_SettingsUIPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsUIPanel$$Setup
// il2cpp: void UI_SettingsUIPanel__Setup (UI_SettingsUIPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822fab50

void UI_SettingsUIPanel__Setup(UI_SettingsUIPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *category;
  Settings_UISettings_o *pSVar2;
  Settings_UISettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  Settings_FloatSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_ToggleColorSetting_o *setting;
  UI_BaseMenu_o *pUVar9;
  Settings_ColorSetting_o *pSVar10;
  System_String_o *pSVar11;
  UI_ElementStyle_o *__this_00;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  UI_ElementStyle_o *pUVar14;
  System_String_o *pSVar15;
  
  if (Il2CppMethodInitialized_184347650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"UIScale");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedCountTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairStyle");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowCrosshairArrows");
    il2cpp_codegen_initialize_runtime_metadata(&"FeedConsoleTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"RequireRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedCount");
    il2cpp_codegen_initialize_runtime_metadata(&"FeedConsole");
    il2cpp_codegen_initialize_runtime_metadata(&"KillScoreScale");
    il2cpp_codegen_initialize_runtime_metadata(&"JoinNotifications");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceNameColor");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowSongPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"KDROptions");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowGameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"JoinNotificationsTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"Theme");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowEmotes");
    il2cpp_codegen_initialize_runtime_metadata(&"MinNameLength");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanNameDistanceTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowChatTimestamp");
    il2cpp_codegen_initialize_runtime_metadata(&"NameBackgroundType");
    il2cpp_codegen_initialize_runtime_metadata(&"NameOverrideTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowHealthbarsOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowStylebar");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeMainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanNameDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"GameFeed");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowNamesOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"HUDScale");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeLoadscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowHealthbars");
    il2cpp_codegen_initialize_runtime_metadata(&"Speedometer");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatCLErrors");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowPing");
    il2cpp_codegen_initialize_runtime_metadata(&"CoordinatesOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"Coordinates");
    il2cpp_codegen_initialize_runtime_metadata(&"KDR");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairScale");
    il2cpp_codegen_initialize_runtime_metadata(&"NameBackgroundTypeOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowNames");
    il2cpp_codegen_initialize_runtime_metadata(&"SpeedometerOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeLoadscreenTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxNameLength");
    il2cpp_codegen_initialize_runtime_metadata(&"GameFeedTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowCrosshairDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapScale");
    il2cpp_codegen_initialize_runtime_metadata(&"StylebarScale");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairTextScale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInterpolationTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedScale");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairStyleOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatFontSize");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatScrollSensitivity");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeMainMenuTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInterpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatCLErrorsTooltip");
    Il2CppMethodInitialized_184347650 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar15 = "UI";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup))
    {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    category = (System_String_o *)(*(uint64_t *)((char *)parent + 0xa8));
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,200.0,20.0,pSVar11,(MethodInfo *)0x0);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if (pSVar3 != (Settings_UISettings_o *)0x0) {
      pSVar4 = (pSVar3->fields).UITheme;
      pUVar5 = (__this->fields).DoublePanelLeft;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar11 = UI_UIManager__GetLocale
                          (category,pSVar15,"Theme","","",
                           (MethodInfo *)0x0);
      pSVar12 = UI_UIManager__GetUIThemes((MethodInfo *)0x0);
      pSVar13 = UI_UIManager__GetLocaleCommon("RequireRestart",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar11,pSVar12,pSVar13,160.0,40.0,300.0,
                 (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if (pSVar3 != (Settings_UISettings_o *)0x0) {
        pUVar5 = (__this->fields).DoublePanelLeft;
        pSVar6 = (pSVar3->fields).UIMasterScale;
        pSVar11 = UI_UIManager__GetLocale
                            (category,pSVar15,"UIScale","",
                             "",(MethodInfo *)0x0);
        UI_ElementFactory__CreateSliderSetting
                  (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar11,"",135.0,16.0,
                   2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if (pSVar3 != (Settings_UISettings_o *)0x0) {
          pUVar5 = (__this->fields).DoublePanelLeft;
          pSVar6 = (pSVar3->fields).HUDScale;
          pSVar11 = UI_UIManager__GetLocale
                              (category,pSVar15,"HUDScale","",
                               "",(MethodInfo *)0x0);
          UI_ElementFactory__CreateSliderSetting
                    (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar11,"",135.0,
                     16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
          if (pSVar3 != (Settings_UISettings_o *)0x0) {
            pUVar5 = (__this->fields).DoublePanelLeft;
            pSVar6 = (pSVar3->fields).MinimapScale;
            pSVar11 = UI_UIManager__GetLocale
                                (category,pSVar15,"MinimapScale","",
                                 "",(MethodInfo *)0x0);
            UI_ElementFactory__CreateSliderSetting
                      (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar11,"",135.0,
                       16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
            if (pSVar3 != (Settings_UISettings_o *)0x0) {
              pUVar5 = (__this->fields).DoublePanelLeft;
              pSVar6 = (pSVar3->fields).StylebarScale;
              pSVar11 = UI_UIManager__GetLocale
                                  (category,pSVar15,"StylebarScale","",
                                   "",(MethodInfo *)0x0);
              UI_ElementFactory__CreateSliderSetting
                        (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar11,"",135.0
                         ,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
              if (pSVar3 != (Settings_UISettings_o *)0x0) {
                pUVar5 = (__this->fields).DoublePanelLeft;
                pSVar6 = (pSVar3->fields).KillScoreScale;
                pSVar11 = UI_UIManager__GetLocale
                                    (category,pSVar15,"KillScoreScale","",
                                     "",(MethodInfo *)0x0);
                UI_ElementFactory__CreateSliderSetting
                          (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar11,"",
                           135.0,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                if (pSVar3 != (Settings_UISettings_o *)0x0) {
                  pUVar5 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).KillFeedScale;
                  pSVar11 = UI_UIManager__GetLocale
                                      (category,pSVar15,"KillFeedScale","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateSliderSetting
                            (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar11,"",
                             135.0,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                  if (pSVar3 != (Settings_UISettings_o *)0x0) {
                    pUVar5 = (__this->fields).DoublePanelLeft;
                    pSVar7 = (pSVar3->fields).ShowStylebar;
                    pSVar11 = UI_UIManager__GetLocale
                                        (category,pSVar15,"ShowStylebar","",
                                         "",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateToggleSetting
                              (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,""
                               ,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                    if (pSVar3 != (Settings_UISettings_o *)0x0) {
                      pUVar5 = (__this->fields).DoublePanelLeft;
                      pSVar7 = (pSVar3->fields).GameFeed;
                      pSVar11 = UI_UIManager__GetLocale
                                          (category,pSVar15,"GameFeed","",
                                           "",(MethodInfo *)0x0);
                      pSVar13 = UI_UIManager__GetLocale
                                          (category,pSVar15,"GameFeedTooltip","",
                                           "",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,pSVar13,30.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                      if (pSVar3 != (Settings_UISettings_o *)0x0) {
                        pUVar5 = (__this->fields).DoublePanelLeft;
                        pSVar7 = (pSVar3->fields).FeedConsole;
                        pSVar11 = UI_UIManager__GetLocale
                                            (category,pSVar15,"FeedConsole","",
                                             "",(MethodInfo *)0x0);
                        pSVar13 = UI_UIManager__GetLocale
                                            (category,pSVar15,"FeedConsoleTooltip","",
                                             "",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateToggleSetting
                                  (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,pSVar13,30.0,30.0
                                   ,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                        if (pSVar3 != (Settings_UISettings_o *)0x0) {
                          pUVar5 = (__this->fields).DoublePanelLeft;
                          pSVar8 = (pSVar3->fields).KDR;
                          pSVar11 = UI_UIManager__GetLocale
                                              (category,pSVar15,"KDR","",
                                               "",(MethodInfo *)0x0);
                          pSVar12 = UI_UIManager__GetLocaleArray
                                              (category,pSVar15,"KDROptions","",
                                               (MethodInfo *)0x0);
                          UI_ElementFactory__CreateDropdownSetting
                                    (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar8,pSVar11,pSVar12,
                                     "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,(System_Int32_array *)0x0,
                                     (MethodInfo *)0x0);
                          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                          if (pSVar3 != (Settings_UISettings_o *)0x0) {
                            pUVar5 = (__this->fields).DoublePanelLeft;
                            pSVar7 = (pSVar3->fields).JoinNotifications;
                            pSVar11 = UI_UIManager__GetLocale
                                                (category,pSVar15,"JoinNotifications","",
                                                 "",(MethodInfo *)0x0);
                            pSVar13 = UI_UIManager__GetLocale
                                                (category,pSVar15,"JoinNotificationsTooltip","",
                                                 "",(MethodInfo *)0x0);
                            UI_ElementFactory__CreateToggleSetting
                                      (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,pSVar13,30.0,
                                       30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                            if (pSVar3 != (Settings_UISettings_o *)0x0) {
                              pUVar5 = (__this->fields).DoublePanelLeft;
                              pSVar7 = (pSVar3->fields).ShowPing;
                              pSVar11 = UI_UIManager__GetLocale
                                                  (category,pSVar15,"ShowPing",
                                                   "","",
                                                   (MethodInfo *)0x0);
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,
                                         "",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                              if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                pUVar5 = (__this->fields).DoublePanelLeft;
                                pSVar7 = (pSVar3->fields).ShowGameTime;
                                pSVar11 = UI_UIManager__GetLocale
                                                    (category,pSVar15,"ShowGameTime",
                                                     "","",
                                                     (MethodInfo *)0x0);
                                UI_ElementFactory__CreateToggleSetting
                                          (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,
                                           "",30.0,30.0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                  pUVar5 = (__this->fields).DoublePanelLeft;
                                  pSVar7 = (pSVar3->fields).ShowSongPopup;
                                  pSVar11 = UI_UIManager__GetLocale
                                                      (category,pSVar15,"ShowSongPopup",
                                                       "","",
                                                       (MethodInfo *)0x0);
                                  UI_ElementFactory__CreateToggleSetting
                                            (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,
                                             "",30.0,30.0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                  if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                    pUVar5 = (__this->fields).DoublePanelLeft;
                                    pSVar7 = (pSVar3->fields).ShowEmotes;
                                    pSVar11 = UI_UIManager__GetLocale
                                                        (category,pSVar15,"ShowEmotes",
                                                         "","",
                                                         (MethodInfo *)0x0);
                                    UI_ElementFactory__CreateToggleSetting
                                              (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar11,
                                               "",30.0,30.0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                    if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                      pUVar5 = (__this->fields).DoublePanelLeft;
                                      pSVar8 = (pSVar3->fields).ShowNames;
                                      pSVar11 = UI_UIManager__GetLocale
                                                          (category,pSVar15,"ShowNames",
                                                           "","",
                                                           (MethodInfo *)0x0);
                                      pSVar12 = UI_UIManager__GetLocaleArray
                                                          (category,pSVar15,"ShowNamesOptions",
                                                           "",(MethodInfo *)0x0);
                                      UI_ElementFactory__CreateDropdownSetting
                                                (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                 pSVar12,"",160.0,40.0,300.0,
                                                 (System_Nullable_float__o)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
                                      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                      if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                        pUVar5 = (__this->fields).DoublePanelLeft;
                                        pSVar8 = (pSVar3->fields).ShowHealthbars;
                                        pSVar11 = UI_UIManager__GetLocale
                                                            (category,pSVar15,"ShowHealthbars",
                                                             "","",
                                                             (MethodInfo *)0x0);
                                        pSVar12 = UI_UIManager__GetLocaleArray
                                                            (category,pSVar15,"ShowHealthbarsOptions",
                                                             "",(MethodInfo *)0x0);
                                        UI_ElementFactory__CreateDropdownSetting
                                                  (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                   pSVar12,"",160.0,40.0,300.0,
                                                   (System_Nullable_float__o)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Int32_array *)0x0,(MethodInfo *)0x0);
                                        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                        if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                          pUVar5 = (__this->fields).DoublePanelLeft;
                                          pSVar8 = (pSVar3->fields).HumanNameDistance;
                                          pSVar11 = UI_UIManager__GetLocale
                                                              (category,pSVar15,"HumanNameDistance",
                                                               "","",
                                                               (MethodInfo *)0x0);
                                          pSVar13 = UI_UIManager__GetLocale
                                                              (category,pSVar15,"HumanNameDistanceTooltip",
                                                               "","",
                                                               (MethodInfo *)0x0);
                                          UI_ElementFactory__CreateInputSetting
                                                    (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar8,pSVar11
                                                     ,pSVar13,160.0,40.0,false,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->
                                                   UISettings;
                                          if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                            pUVar5 = (__this->fields).DoublePanelLeft;
                                            pSVar8 = (pSVar3->fields).NameOverrideTarget;
                                            pSVar11 = UI_UIManager__GetLocale
                                                                (category,pSVar15,"NameOverrideTarget",
                                                                 "","",
                                                                 (MethodInfo *)0x0);
                                            pSVar12 = UI_UIManager__GetLocaleArray
                                                                (category,pSVar15,"ShowNamesOptions",
                                                                 "",(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateDropdownSetting
                                                      (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar8,
                                                       pSVar11,pSVar12,"",160.0,40.0,300.0,
                                                       (System_Nullable_float__o)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Int32_array *)0x0,(MethodInfo *)0x0);
                                            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->
                                                     UISettings;
                                            if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                              pUVar5 = (__this->fields).DoublePanelLeft;
                                              pSVar8 = (pSVar3->fields).NameBackgroundType;
                                              pSVar11 = UI_UIManager__GetLocale
                                                                  (category,pSVar15,"NameBackgroundType",
                                                                   "",""
                                                                   ,(MethodInfo *)0x0);
                                              pSVar12 = UI_UIManager__GetLocaleArray
                                                                  (category,pSVar15,"NameBackgroundTypeOptions",
                                                                   "",(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateDropdownSetting
                                                        (pUVar5,__this_00,(Settings_BaseSetting_o *)pSVar8,
                                                         pSVar11,pSVar12,"",160.0,40.0,
                                                         300.0,(System_Nullable_float__o)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Int32_array *)0x0,(MethodInfo *)0x0);
                                              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->
                                                       UISettings;
                                              if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                pUVar5 = (__this->fields).DoublePanelLeft;
                                                setting = (pSVar3->fields).ForceNameColor;
                                                pSVar11 = UI_UIManager__GetLocale
                                                                    (category,pSVar15,"ForceNameColor",
                                                                     "",
                                                                     "",(MethodInfo *)0x0);
                                                pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                                if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                                  UI_ElementFactory__CreateToggleColorSetting
                                                            (pUVar5,__this_00,setting,pSVar11,
                                                             (pUVar9->fields).ColorPickPopup,
                                                             "",30.0,30.0,90.0,30.0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->
                                                           UISettings;
                                                  if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                    pUVar5 = (__this->fields).DoublePanelLeft;
                                                    pSVar10 = (pSVar3->fields).ForceBackgroundColor;
                                                    pSVar11 = UI_UIManager__GetLocale
                                                                        (category,pSVar15,
                                                                         "ForceBackgroundColor",
                                                                         "",
                                                                         "",
                                                                         (MethodInfo *)0x0);
                                                    pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu
                                                    ;
                                                    if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                                      UI_ElementFactory__CreateColorSetting
                                                                (pUVar5,__this_00,
                                                                 (Settings_BaseSetting_o *)pSVar10,pSVar11,
                                                                 (pUVar9->fields).ColorPickPopup,
                                                                 "",90.0,30.0,
                                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                                 (MethodInfo *)0x0);
                                                      pSVar3 = TypeInfo_Settings_SettingsManager->
                                                               static_fields->UISettings;
                                                      if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                        pUVar5 = (__this->fields).DoublePanelLeft;
                                                        pSVar8 = (pSVar3->fields).MinNameLength;
                                                        pSVar11 = UI_UIManager__GetLocale
                                                                            (category,pSVar15,
                                                                             "MinNameLength",
                                                                             "",
                                                                             "",
                                                                             (MethodInfo *)0x0);
                                                        UI_ElementFactory__CreateInputSetting
                                                                  (pUVar5,__this_00,
                                                                   (Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                                   "",160.0,40.0,false,
                                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                                   (System_Func_string__bool__o *)0x0,
                                                                   (System_Func_string__string__o *)0x0,
                                                                   (MethodInfo *)0x0);
                                                        pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                 static_fields->UISettings;
                                                        if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                          pUVar5 = (__this->fields).DoublePanelLeft;
                                                          pSVar8 = (pSVar3->fields).MaxNameLength;
                                                          pSVar11 = UI_UIManager__GetLocale
                                                                              (category,pSVar15,
                                                                               "MaxNameLength",
                                                                               "",
                                                                               "",
                                                                               (MethodInfo *)0x0);
                                                          UI_ElementFactory__CreateInputSetting
                                                                    (pUVar5,__this_00,
                                                                     (Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                                     "",160.0,40.0,false,
                                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                                     (System_Func_string__bool__o *)0x0,
                                                                     (System_Func_string__string__o *)0x0,
                                                                     (MethodInfo *)0x0);
                                                          pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                   static_fields->UISettings;
                                                          if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                            pUVar5 = (__this->fields).DoublePanelRight;
                                                            pSVar8 = (pSVar3->fields).CrosshairStyle;
                                                            pSVar11 = UI_UIManager__GetLocale
                                                                                (category,pSVar15,
                                                                                 "CrosshairStyle",
                                                                                 "",
                                                                                 "",
                                                                                 (MethodInfo *)0x0);
                                                            pSVar12 = UI_UIManager__GetLocaleArray
                                                                                (category,pSVar15,
                                                                                 "CrosshairStyleOptions",
                                                                                 "",
                                                                                 (MethodInfo *)0x0);
                                                            UI_ElementFactory__CreateDropdownSetting
                                                                      (pUVar5,__this_00,
                                                                       (Settings_BaseSetting_o *)pSVar8,
                                                                       pSVar11,pSVar12,"",
                                                                       200.0,40.0,300.0,
                                                                       (System_Nullable_float__o)0x0,
                                                                       (UnityEngine_Events_UnityAction_o *)0x0
                                                                       ,(System_Int32_array *)0x0,
                                                                       (MethodInfo *)0x0);
                                                            pUVar5 = (__this->fields).DoublePanelRight;
                                                            pSVar11 = (*(__this->klass->vtable).
                                                                        _4_get_ThemePanel.methodPtr)
                                                                                (__this,(__this->klass->vtable
                                                                                        )._4_get_ThemePanel.
                                                                                        method);
                                                            pUVar14 = il2cpp_codegen_object_new
                                                                                ((Il2CppClass *)
                                                                                 TypeInfo_UI_ElementStyle);
                                                            UI_ElementStyle___ctor
                                                                      (pUVar14,0x18,150.0,20.0,pSVar11,
                                                                       (MethodInfo *)0x0);
                                                            pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                     static_fields->UISettings;
                                                            if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                              pSVar6 = (pSVar3->fields).CrosshairScale;
                                                              pSVar11 = UI_UIManager__GetLocale
                                                                                  (category,pSVar15,
                                                                                   "CrosshairScale",
                                                                                   "",
                                                                                   "",
                                                                                   (MethodInfo *)0x0);
                                                              UI_ElementFactory__CreateSliderSetting
                                                                        (pUVar5,pUVar14,
                                                                         (Settings_BaseSetting_o *)pSVar6,
                                                                         pSVar11,"",185.0,
                                                                         16.0,2,0.0,
                                                                         (UnityEngine_Events_UnityAction_o *)
                                                                         0x0,(MethodInfo *)0x0);
                                                              pUVar5 = (__this->fields).DoublePanelRight;
                                                              pSVar11 = (*(__this->klass->vtable).
                                                                          _4_get_ThemePanel.methodPtr)
                                                                                  (__this,(__this->klass->
                                                                                          vtable).
                                                       _4_get_ThemePanel.method);
                                                       pUVar14 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                            TypeInfo_UI_ElementStyle);
                                                       UI_ElementStyle___ctor
                                                                 (pUVar14,0x18,150.0,20.0,pSVar11,
                                                                  (MethodInfo *)0x0);
                                                       pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                         pSVar6 = (pSVar3->fields).CrosshairTextScale;
                                                         pSVar11 = UI_UIManager__GetLocale
                                                                             (category,pSVar15,
                                                                              "CrosshairTextScale",
                                                                              "",
                                                                              "",
                                                                              (MethodInfo *)0x0);
                                                         UI_ElementFactory__CreateSliderSetting
                                                                   (pUVar5,pUVar14,
                                                                    (Settings_BaseSetting_o *)pSVar6,pSVar11,
                                                                    "",185.0,16.0,2,0.0,
                                                                    (UnityEngine_Events_UnityAction_o *)0x0,
                                                                    (MethodInfo *)0x0);
                                                         pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                  static_fields->UISettings;
                                                         if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                           pUVar5 = (__this->fields).DoublePanelRight;
                                                           pSVar7 = (pSVar3->fields).ShowCrosshairDistance;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category,pSVar15,
                                                                                "ShowCrosshairDistance",
                                                                                "",
                                                                                "",
                                                                                (MethodInfo *)0x0);
                                                           UI_ElementFactory__CreateToggleSetting
                                                                     (pUVar5,__this_00,
                                                                      (Settings_BaseSetting_o *)pSVar7,pSVar11
                                                                      ,"",30.0,30.0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                    static_fields->UISettings;
                                                           if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                             pUVar5 = (__this->fields).DoublePanelRight;
                                                             pSVar7 = (pSVar3->fields).ShowCrosshairArrows;
                                                             pSVar11 = UI_UIManager__GetLocale
                                                                                 (category,pSVar15,
                                                                                  "ShowCrosshairArrows",
                                                                                  "",
                                                                                  "",
                                                                                  (MethodInfo *)0x0);
                                                             UI_ElementFactory__CreateToggleSetting
                                                                       (pUVar5,__this_00,
                                                                        (Settings_BaseSetting_o *)pSVar7,
                                                                        pSVar11,"",30.0,
                                                                        30.0,(UnityEngine_Events_UnityAction_o
                                                                              *)0x0,(MethodInfo *)0x0);
                                                             if (pSVar2 != (Settings_UISettings_o *)0x0) {
                                                               pUVar5 = (__this->fields).DoublePanelRight;
                                                               pSVar4 = (pSVar2->fields).CrosshairSkin;
                                                               pSVar11 = UI_UIManager__GetLocale
                                                                                   (category,pSVar15,
                                                                                    "CrosshairSkin",
                                                                                    "",
                                                                                    "",
                                                                                    (MethodInfo *)0x0);
                                                               UI_ElementFactory__CreateInputSetting
                                                                         (pUVar5,__this_00,
                                                                          (Settings_BaseSetting_o *)pSVar4,
                                                                          pSVar11,"",160.0,
                                                                          40.0,false,
                                                                          (UnityEngine_Events_UnityAction_o *)
                                                                          0x0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                         pUVar5 = (__this->fields).DoublePanelRight;
                                                         pSVar8 = (pSVar3->fields).Speedometer;
                                                         pSVar11 = UI_UIManager__GetLocale
                                                                             (category,pSVar15,
                                                                              "Speedometer",
                                                                              "",
                                                                              "",
                                                                              (MethodInfo *)0x0);
                                                         pSVar12 = UI_UIManager__GetLocaleArray
                                                                             (category,pSVar15,
                                                                              "SpeedometerOptions",
                                                                              "",
                                                                              (MethodInfo *)0x0);
                                                         UI_ElementFactory__CreateDropdownSetting
                                                                   (pUVar5,__this_00,
                                                                    (Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                                    pSVar12,"",160.0,40.0,
                                                                    300.0,(System_Nullable_float__o)0x0,
                                                                    (UnityEngine_Events_UnityAction_o *)0x0,
                                                                    (System_Int32_array *)0x0,
                                                                    (MethodInfo *)0x0);
                                                         pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                  static_fields->UISettings;
                                                         if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                           pUVar5 = (__this->fields).DoublePanelRight;
                                                           pSVar8 = (pSVar3->fields).Coordinates;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category,pSVar15,
                                                                                "Coordinates",
                                                                                "",
                                                                                "",
                                                                                (MethodInfo *)0x0);
                                                           pSVar12 = UI_UIManager__GetLocaleArray
                                                                               (category,pSVar15,
                                                                                "CoordinatesOptions",
                                                                                "",
                                                                                (MethodInfo *)0x0);
                                                           UI_ElementFactory__CreateDropdownSetting
                                                                     (pUVar5,__this_00,
                                                                      (Settings_BaseSetting_o *)pSVar8,pSVar11
                                                                      ,pSVar12,"",160.0,
                                                                      40.0,300.0,(System_Nullable_float__o)0x0
                                                                      ,(UnityEngine_Events_UnityAction_o *)0x0
                                                                      ,(System_Int32_array *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                    static_fields->UISettings;
                                                           if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                             pUVar5 = (__this->fields).DoublePanelRight;
                                                             pSVar7 = (pSVar3->fields).FadeMainMenu;
                                                             pSVar11 = UI_UIManager__GetLocale
                                                                                 (category,pSVar15,
                                                                                  "FadeMainMenu",
                                                                                  "",
                                                                                  "",
                                                                                  (MethodInfo *)0x0);
                                                             pSVar13 = UI_UIManager__GetLocale
                                                                                 (category,pSVar15,
                                                                                  "FadeMainMenuTooltip",
                                                                                  "",
                                                                                  "",
                                                                                  (MethodInfo *)0x0);
                                                             UI_ElementFactory__CreateToggleSetting
                                                                       (pUVar5,__this_00,
                                                                        (Settings_BaseSetting_o *)pSVar7,
                                                                        pSVar11,pSVar13,30.0,30.0,
                                                                        (UnityEngine_Events_UnityAction_o *)
                                                                        0x0,(MethodInfo *)0x0);
                                                             pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                      static_fields->UISettings;
                                                             if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                               pUVar5 = (__this->fields).DoublePanelRight;
                                                               pSVar7 = (pSVar3->fields).FadeLoadscreen;
                                                               pSVar11 = UI_UIManager__GetLocale
                                                                                   (category,pSVar15,
                                                                                    "FadeLoadscreen",
                                                                                    "",
                                                                                    "",
                                                                                    (MethodInfo *)0x0);
                                                               pSVar13 = UI_UIManager__GetLocale
                                                                                   (category,pSVar15,
                                                                                    "FadeLoadscreenTooltip",
                                                                                    "",
                                                                                    "",
                                                                                    (MethodInfo *)0x0);
                                                               UI_ElementFactory__CreateToggleSetting
                                                                         (pUVar5,__this_00,
                                                                          (Settings_BaseSetting_o *)pSVar7,
                                                                          pSVar11,pSVar13,30.0,30.0,
                                                                          (UnityEngine_Events_UnityAction_o *)
                                                                          0x0,(MethodInfo *)0x0);
                                                               pSVar3 = TypeInfo_Settings_SettingsManager->
                                                                        static_fields->UISettings;
                                                               if (pSVar3 != (Settings_UISettings_o *)0x0) {
                                                                 pUVar5 = (__this->fields).DoublePanelRight;
                                                                 pSVar7 = (pSVar3->fields).ShowInterpolation;
                                                                 pSVar11 = UI_UIManager__GetLocale
                                                                                     (category,pSVar15,
                                                                                      "ShowInterpolation",
                                                                                      "",
                                                                                      "",
                                                                                      (MethodInfo *)0x0);
                                                                 pSVar13 = UI_UIManager__GetLocale
                                                                                     (category,pSVar15,
                                                                                      "ShowInterpolationTooltip",
                                                                                      "",
                                                                                      "",
                                                                                      (MethodInfo *)0x0);
                                                                 UI_ElementFactory__CreateToggleSetting
                                                                           (pUVar5,__this_00,
                                                                            (Settings_BaseSetting_o *)pSVar7,
                                                                            pSVar11,pSVar13,30.0,30.0,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(MethodInfo *)0x0);
                                                                 pUVar5 = (__this->fields).DoublePanelRight;
                                                                 pSVar8 = (pSVar2->fields).KillFeedCount;
                                                                 pSVar11 = UI_UIManager__GetLocale
                                                                                     (category,pSVar15,
                                                                                      "KillFeedCount",
                                                                                      "",
                                                                                      "",
                                                                                      (MethodInfo *)0x0);
                                                                 pSVar13 = UI_UIManager__GetLocale
                                                                                     (category,pSVar15,
                                                                                      "KillFeedCountTooltip",
                                                                                      "",
                                                                                      "",
                                                                                      (MethodInfo *)0x0);
                                                                 UI_ElementFactory__CreateInputSetting
                                                                           (pUVar5,__this_00,
                                                                            (Settings_BaseSetting_o *)pSVar8,
                                                                            pSVar11,pSVar13,100.0,40.0,false,
                                                                            (UnityEngine_Events_UnityAction_o
                                                                             *)0x0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       pUVar5 = (__this->fields).DoublePanelRight;
                                                       pSVar7 = (pSVar2->fields).ShowChatTimestamp;
                                                       pSVar11 = UI_UIManager__GetLocale
                                                                           (category,pSVar15,
                                                                            "ShowChatTimestamp",
                                                                            "",
                                                                            "",
                                                                            (MethodInfo *)0x0);
                                                       UI_ElementFactory__CreateToggleSetting
                                                                 (pUVar5,__this_00,
                                                                  (Settings_BaseSetting_o *)pSVar7,pSVar11,
                                                                  "",30.0,30.0,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                       pUVar5 = (__this->fields).DoublePanelRight;
                                                       pSVar8 = (pSVar2->fields).ChatWidth;
                                                       pSVar11 = UI_UIManager__GetLocale
                                                                           (category,pSVar15,
                                                                            "ChatWidth",
                                                                            "",
                                                                            "",
                                                                            (MethodInfo *)0x0);
                                                       UI_ElementFactory__CreateInputSetting
                                                                 (pUVar5,__this_00,
                                                                  (Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                                  "",100.0,40.0,false,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (System_Func_string__bool__o *)0x0,
                                                                  (System_Func_string__string__o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                       pUVar5 = (__this->fields).DoublePanelRight;
                                                       pSVar8 = (pSVar2->fields).ChatHeight;
                                                       pSVar11 = UI_UIManager__GetLocale
                                                                           (category,pSVar15,
                                                                            "ChatHeight",
                                                                            "",
                                                                            "",
                                                                            (MethodInfo *)0x0);
                                                       UI_ElementFactory__CreateInputSetting
                                                                 (pUVar5,__this_00,
                                                                  (Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                                  "",100.0,40.0,false,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (System_Func_string__bool__o *)0x0,
                                                                  (System_Func_string__string__o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                       pUVar5 = (__this->fields).DoublePanelRight;
                                                       pSVar8 = (pSVar2->fields).ChatFontSize;
                                                       pSVar11 = UI_UIManager__GetLocale
                                                                           (category,pSVar15,
                                                                            "ChatFontSize",
                                                                            "",
                                                                            "",
                                                                            (MethodInfo *)0x0);
                                                       UI_ElementFactory__CreateInputSetting
                                                                 (pUVar5,__this_00,
                                                                  (Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                                  "",100.0,40.0,false,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (System_Func_string__bool__o *)0x0,
                                                                  (System_Func_string__string__o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                       pUVar5 = (__this->fields).DoublePanelRight;
                                                       pSVar8 = (pSVar2->fields).ChatScrollSensitivity;
                                                       pSVar11 = UI_UIManager__GetLocale
                                                                           (category,pSVar15,
                                                                            "ChatScrollSensitivity",
                                                                            "",
                                                                            "",
                                                                            (MethodInfo *)0x0);
                                                       UI_ElementFactory__CreateInputSetting
                                                                 (pUVar5,__this_00,
                                                                  (Settings_BaseSetting_o *)pSVar8,pSVar11,
                                                                  "",140.0,40.0,false,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  (System_Func_string__bool__o *)0x0,
                                                                  (System_Func_string__string__o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                       pSVar2 = TypeInfo_Settings_SettingsManager->
                                                                static_fields->UISettings;
                                                       if (pSVar2 != (Settings_UISettings_o *)0x0) {
                                                         pUVar5 = (__this->fields).DoublePanelRight;
                                                         pSVar10 = (pSVar2->fields).ChatBackgroundColor;
                                                         pSVar11 = UI_UIManager__GetLocale
                                                                             (category,pSVar15,
                                                                              "ChatBackgroundColor",
                                                                              "",
                                                                              "",
                                                                              (MethodInfo *)0x0);
                                                         pUVar9 = TypeInfo_UI_UIManager->static_fields->
                                                                  CurrentMenu;
                                                         if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                                           UI_ElementFactory__CreateColorSetting
                                                                     (pUVar5,__this_00,
                                                                      (Settings_BaseSetting_o *)pSVar10,
                                                                      pSVar11,(pUVar9->fields).ColorPickPopup,
                                                                      "",90.0,30.0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pSVar2 = TypeInfo_Settings_SettingsManager->
                                                                    static_fields->UISettings;
                                                           if (pSVar2 != (Settings_UISettings_o *)0x0) {
                                                             pUVar5 = (__this->fields).DoublePanelRight;
                                                             pSVar7 = (pSVar2->fields).ChatCLErrors;
                                                             pSVar11 = UI_UIManager__GetLocale
                                                                                 (category,pSVar15,
                                                                                  "ChatCLErrors",
                                                                                  "",
                                                                                  "",
                                                                                  (MethodInfo *)0x0);
                                                             pSVar15 = UI_UIManager__GetLocale
                                                                                 (category,pSVar15,
                                                                                  "ChatCLErrorsTooltip",
                                                                                  "",
                                                                                  "",
                                                                                  (MethodInfo *)0x0);
                                                             UI_ElementFactory__CreateToggleSetting
                                                                       (pUVar5,__this_00,
                                                                        (Settings_BaseSetting_o *)pSVar7,
                                                                        pSVar11,pSVar15,30.0,30.0,
                                                                        (UnityEngine_Events_UnityAction_o *)
                                                                        0x0,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.SettingsUIPanel$$.ctor
// il2cpp: void UI_SettingsUIPanel___ctor (UI_SettingsUIPanel_o* __this, const MethodInfo* method);
// 0x1822d3d10

void UI_SettingsUIPanel___ctor(UI_SettingsUIPanel_o *__this,MethodInfo *method)

{
  UI_SettingsCategoryPanel___ctor((UI_SettingsSkinsHumanPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


