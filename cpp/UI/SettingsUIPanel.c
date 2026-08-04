// Type: UI.SettingsUIPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsUIPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsUIPanel.cs
// --------------------------------

// UI.SettingsUIPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsUIPanel__get_ScrollBar (UI_SettingsUIPanel_o* __this, const MethodInfo* method);
// 0x444f2c0

bool_conflict UI_SettingsUIPanel__get_ScrollBar(UI_SettingsUIPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsUIPanel$$Setup
// il2cpp: void UI_SettingsUIPanel__Setup (UI_SettingsUIPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x444f2d0

void UI_SettingsUIPanel__Setup(UI_SettingsUIPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  _union_233249 category;
  long lVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  Settings_BaseSetting_o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Object_array *pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  _union_233249 subCategory;
  char cVar9;
  bool_conflict bVar10;
  _union_233249 __this_06;
  System_String_o *pSVar11;
  MethodInfo *pMVar12;
  System_String_array *pSVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_object__o *__this_07;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  long *plVar15;
  UnityEngine_Transform_o **ppUVar16;
  _union_233249 unaff_RBP;
  _union_233249 _Var17;
  MethodInfo *pMVar18;
  MethodInfo *in_R9;
  _union_233249 unaff_R12;
  MethodInfo **unaff_R13;
  _union_233249 unaff_R15;
  undefined1 auVar19 [12];
  undefined1 in_stack_fffffffffffffef0 [15];
  char in_stack_fffffffffffffeff;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_e0;
  _union_233249 _Stack_c8;
  _union_233249 _Stack_c0;
  _union_233249 _Stack_b8;
  _union_233249 _Stack_b0;
  _union_233249 _Stack_a8;
  _union_233249 _Stack_a0;
  
  if (g_data_057ae70d == '\0') {
    _Stack_a0 = (_union_233249)0x444f2fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    _Stack_a0 = (_union_233249)0x444f309;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    _Stack_a0 = (_union_233249)0x444f315;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    _Stack_a0 = (_union_233249)0x444f321;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    _Stack_a0 = (_union_233249)0x444f32d;
    il2cpp_runtime_helper_023445d0(&"UIScale");
    _Stack_a0 = (_union_233249)0x444f339;
    il2cpp_runtime_helper_023445d0(&"KillFeedCountTooltip");
    _Stack_a0 = (_union_233249)0x444f345;
    il2cpp_runtime_helper_023445d0(&"CrosshairStyle");
    _Stack_a0 = (_union_233249)0x444f351;
    il2cpp_runtime_helper_023445d0(&"ShowCrosshairArrows");
    _Stack_a0 = (_union_233249)0x444f35d;
    il2cpp_runtime_helper_023445d0(&"FeedConsoleTooltip");
    _Stack_a0 = (_union_233249)0x444f369;
    il2cpp_runtime_helper_023445d0(&"RequireRestart");
    _Stack_a0 = (_union_233249)0x444f375;
    il2cpp_runtime_helper_023445d0(&"KillFeedCount");
    _Stack_a0 = (_union_233249)0x444f381;
    il2cpp_runtime_helper_023445d0(&"FeedConsole");
    _Stack_a0 = (_union_233249)0x444f38d;
    il2cpp_runtime_helper_023445d0(&"KillScoreScale");
    _Stack_a0 = (_union_233249)0x444f399;
    il2cpp_runtime_helper_023445d0(&"JoinNotifications");
    _Stack_a0 = (_union_233249)0x444f3a5;
    il2cpp_runtime_helper_023445d0(&"ForceNameColor");
    _Stack_a0 = (_union_233249)0x444f3b1;
    il2cpp_runtime_helper_023445d0(&"ShowSongPopup");
    _Stack_a0 = (_union_233249)0x444f3bd;
    il2cpp_runtime_helper_023445d0(&"KDROptions");
    _Stack_a0 = (_union_233249)0x444f3c9;
    il2cpp_runtime_helper_023445d0(&"ShowGameTime");
    _Stack_a0 = (_union_233249)0x444f3d5;
    il2cpp_runtime_helper_023445d0(&"CrosshairSkin");
    _Stack_a0 = (_union_233249)0x444f3e1;
    il2cpp_runtime_helper_023445d0(&"JoinNotificationsTooltip");
    _Stack_a0 = (_union_233249)0x444f3ed;
    il2cpp_runtime_helper_023445d0(&"ChatHeight");
    _Stack_a0 = (_union_233249)0x444f3f9;
    il2cpp_runtime_helper_023445d0(&"Theme");
    _Stack_a0 = (_union_233249)0x444f405;
    il2cpp_runtime_helper_023445d0(&"ShowEmotes");
    _Stack_a0 = (_union_233249)0x444f411;
    il2cpp_runtime_helper_023445d0(&"MinNameLength");
    _Stack_a0 = (_union_233249)0x444f41d;
    il2cpp_runtime_helper_023445d0(&"HumanNameDistanceTooltip");
    _Stack_a0 = (_union_233249)0x444f429;
    il2cpp_runtime_helper_023445d0(&"ShowChatTimestamp");
    _Stack_a0 = (_union_233249)0x444f435;
    il2cpp_runtime_helper_023445d0(&"NameBackgroundType");
    _Stack_a0 = (_union_233249)0x444f441;
    il2cpp_runtime_helper_023445d0(&"NameOverrideTarget");
    _Stack_a0 = (_union_233249)0x444f44d;
    il2cpp_runtime_helper_023445d0(&"ShowHealthbarsOptions");
    _Stack_a0 = (_union_233249)0x444f459;
    il2cpp_runtime_helper_023445d0(&"ShowStylebar");
    _Stack_a0 = (_union_233249)0x444f465;
    il2cpp_runtime_helper_023445d0(&"ChatBackgroundColor");
    _Stack_a0 = (_union_233249)0x444f471;
    il2cpp_runtime_helper_023445d0(&"FadeMainMenu");
    _Stack_a0 = (_union_233249)0x444f47d;
    il2cpp_runtime_helper_023445d0(&"HumanNameDistance");
    _Stack_a0 = (_union_233249)0x444f489;
    il2cpp_runtime_helper_023445d0(&"GameFeed");
    _Stack_a0 = (_union_233249)0x444f495;
    il2cpp_runtime_helper_023445d0(&"ShowKeybindTooltip");
    _Stack_a0 = (_union_233249)0x444f4a1;
    il2cpp_runtime_helper_023445d0(&"ShowNamesOptions");
    _Stack_a0 = (_union_233249)0x444f4ad;
    il2cpp_runtime_helper_023445d0(&"HUDScale");
    _Stack_a0 = (_union_233249)0x444f4b9;
    il2cpp_runtime_helper_023445d0(&"FadeLoadscreen");
    _Stack_a0 = (_union_233249)0x444f4c5;
    il2cpp_runtime_helper_023445d0(&"ShowHealthbars");
    _Stack_a0 = (_union_233249)0x444f4d1;
    il2cpp_runtime_helper_023445d0(&"Speedometer");
    _Stack_a0 = (_union_233249)0x444f4dd;
    il2cpp_runtime_helper_023445d0(&"ChatCLErrors");
    _Stack_a0 = (_union_233249)0x444f4e9;
    il2cpp_runtime_helper_023445d0(&"ShowPing");
    _Stack_a0 = (_union_233249)0x444f4f5;
    il2cpp_runtime_helper_023445d0(&"CoordinatesOptions");
    _Stack_a0 = (_union_233249)0x444f501;
    il2cpp_runtime_helper_023445d0(&"Coordinates");
    _Stack_a0 = (_union_233249)0x444f50d;
    il2cpp_runtime_helper_023445d0(&"KDR");
    _Stack_a0 = (_union_233249)0x444f519;
    il2cpp_runtime_helper_023445d0(&"CrosshairScale");
    _Stack_a0 = (_union_233249)0x444f525;
    il2cpp_runtime_helper_023445d0(&"NameBackgroundTypeOptions");
    _Stack_a0 = (_union_233249)0x444f531;
    il2cpp_runtime_helper_023445d0(&"ShowNames");
    _Stack_a0 = (_union_233249)0x444f53d;
    il2cpp_runtime_helper_023445d0(&"SpeedometerOptions");
    _Stack_a0 = (_union_233249)0x444f549;
    il2cpp_runtime_helper_023445d0(&"FadeLoadscreenTooltip");
    _Stack_a0 = (_union_233249)0x444f555;
    il2cpp_runtime_helper_023445d0(&"UI");
    _Stack_a0 = (_union_233249)0x444f561;
    il2cpp_runtime_helper_023445d0(&"MaxNameLength");
    _Stack_a0 = (_union_233249)0x444f56d;
    il2cpp_runtime_helper_023445d0(&"GameFeedTooltip");
    _Stack_a0 = (_union_233249)0x444f579;
    il2cpp_runtime_helper_023445d0(&"ShowCrosshairDistance");
    _Stack_a0 = (_union_233249)0x444f585;
    il2cpp_runtime_helper_023445d0(&"ShowKeybindTip");
    _Stack_a0 = (_union_233249)0x444f591;
    il2cpp_runtime_helper_023445d0(&"MinimapScale");
    _Stack_a0 = (_union_233249)0x444f59d;
    il2cpp_runtime_helper_023445d0(&"StylebarScale");
    _Stack_a0 = (_union_233249)0x444f5a9;
    il2cpp_runtime_helper_023445d0(&"CrosshairTextScale");
    _Stack_a0 = (_union_233249)0x444f5b5;
    il2cpp_runtime_helper_023445d0(&"ShowInterpolationTooltip");
    _Stack_a0 = (_union_233249)0x444f5c1;
    il2cpp_runtime_helper_023445d0(&"KillFeedScale");
    _Stack_a0 = (_union_233249)0x444f5cd;
    il2cpp_runtime_helper_023445d0(&"ForceBackgroundColor");
    _Stack_a0 = (_union_233249)0x444f5d9;
    il2cpp_runtime_helper_023445d0(&"");
    _Stack_a0 = (_union_233249)0x444f5e5;
    il2cpp_runtime_helper_023445d0(&"CrosshairStyleOptions");
    _Stack_a0 = (_union_233249)0x444f5f1;
    il2cpp_runtime_helper_023445d0(&"ChatFontSize");
    _Stack_a0 = (_union_233249)0x444f5fd;
    il2cpp_runtime_helper_023445d0(&"ChatScrollSensitivity");
    _Stack_a0 = (_union_233249)0x444f609;
    il2cpp_runtime_helper_023445d0(&"FadeMainMenuTooltip");
    _Stack_a0 = (_union_233249)0x444f615;
    il2cpp_runtime_helper_023445d0(&"ChatWidth");
    _Stack_a0 = (_union_233249)0x444f621;
    il2cpp_runtime_helper_023445d0(&"ShowInterpolation");
    _Stack_a0 = (_union_233249)0x444f62d;
    il2cpp_runtime_helper_023445d0(&"ChatCLErrorsTooltip");
    g_data_057ae70d = '\x01';
  }
  _Stack_a0 = (_union_233249)0x444f641;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "UI";
  _Var17 = (_union_233249)__this;
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar2 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar2) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_SettingsPopup)) goto label_044511d1;
    category = (_union_233249)parent[1].fields._currentCategoryPanel;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    _Stack_a0 = (_union_233249)0x444f6bb;
    parent = (UI_BasePanel_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    _Stack_a0 = (_union_233249)0x444f6cd;
    __this_06.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    _Stack_a0 = (_union_233249)0x444f6f2;
    UI_ElementStyle___ctor
              (__this_06.genericMethod,0x18,200.0,20.0,(System_String_o *)parent,(MethodInfo *)0x0);
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    unaff_RBP = (_union_233249)&TypeInfo_SettingsManager;
    unaff_R12 = subCategory;
    unaff_R13 = __this_06.genericMethod;
    unaff_R15 = category;
    if (lVar5 != 0) {
      pUVar6 = (__this->fields).DoublePanelLeft;
      pSVar7 = *(Settings_BaseSetting_o **)(lVar5 + 0x20);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        _Stack_a0 = (_union_233249)0x444f739;
        il2cpp_runtime_helper_02337ed0();
      }
      _Stack_a0 = (_union_233249)0x444f75b;
      _Var17 = category;
      pSVar11 = UI_UIManager__GetLocale
                          (category.genericMethod,subCategory.genericMethod,"Theme",
                           (System_String_o *)"",(System_String_o *)"",in_R9);
      _Stack_a0 = (_union_233249)0x444f763;
      parent = (UI_BasePanel_o *)UI_UIManager__GetUIThemes(_Var17.genericMethod);
      unaff_RBP = "RequireRestart";
      if (g_data_057ae727 == '\0') {
        _Stack_a0 = (_union_233249)0x444f785;
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        _Stack_a0 = (_union_233249)0x444f791;
        il2cpp_runtime_helper_023445d0(&"Common");
        _Stack_a0 = (_union_233249)0x444f79d;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ae727 = '\x01';
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        _Stack_a0 = (_union_233249)0x444f7bc;
        il2cpp_runtime_helper_02337ed0();
      }
      _Stack_a0 = (_union_233249)0x444f7de;
      pMVar12 = (MethodInfo *)
                UI_UIManager__GetLocale
                          ("Common",unaff_RBP.genericMethod,(System_String_o *)"",
                           (System_String_o *)"",(System_String_o *)"",in_R9);
      _Stack_a0 = (_union_233249)0x444f821;
      UI_ElementFactory__CreateDropdownSetting
                (pUVar6,__this_06.genericMethod,pSVar7,pSVar11,(System_String_array *)parent,
                 (System_String_o *)pMVar12,160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      _Var17 = (_union_233249)&TypeInfo_SettingsManager;
      if (lVar5 != 0) {
        ppUVar16 = &(__this->fields).DoublePanelLeft;
        parent = (UI_BasePanel_o *)*ppUVar16;
        unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0x40))->genericMethod;
        _Stack_a0 = (_union_233249)0x444f876;
        pSVar11 = UI_UIManager__GetLocale
                            (category.genericMethod,subCategory.genericMethod,"UIScale",
                             (System_String_o *)"",(System_String_o *)"",pMVar12);
        pMVar12 = (MethodInfo *)0x2;
        _Stack_a0 = (_union_233249)0x444f8a8;
        UI_ElementFactory__CreateSliderSetting
                  ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,unaff_RBP.genericMethod,pSVar11,
                   (System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        _Var17 = (_union_233249)&"";
        if (lVar5 != 0) {
          parent = (UI_BasePanel_o *)*ppUVar16;
          unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0x60))->genericMethod;
          _Stack_a0 = (_union_233249)0x444f8f7;
          pSVar11 = UI_UIManager__GetLocale
                              (category.genericMethod,subCategory.genericMethod,"HUDScale",
                               (System_String_o *)"",(System_String_o *)"",pMVar12);
          pMVar12 = (MethodInfo *)0x2;
          _Stack_a0 = (_union_233249)0x444f929;
          UI_ElementFactory__CreateSliderSetting
                    ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,unaff_RBP.genericMethod,pSVar11
                     ,(System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
          lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          _Var17 = (_union_233249)&"";
          if (lVar5 != 0) {
            parent = (UI_BasePanel_o *)*ppUVar16;
            unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0x68))->genericMethod;
            _Stack_a0 = (_union_233249)0x444f978;
            pSVar11 = UI_UIManager__GetLocale
                                (category.genericMethod,subCategory.genericMethod,"MinimapScale",
                                 (System_String_o *)"",(System_String_o *)"",pMVar12);
            pMVar12 = (MethodInfo *)0x2;
            _Stack_a0 = (_union_233249)0x444f9aa;
            UI_ElementFactory__CreateSliderSetting
                      ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,unaff_RBP.genericMethod,
                       pSVar11,(System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            _Var17 = (_union_233249)&"";
            if (lVar5 != 0) {
              parent = (UI_BasePanel_o *)*ppUVar16;
              unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0x70))->genericMethod;
              _Stack_a0 = (_union_233249)0x444f9f9;
              pSVar11 = UI_UIManager__GetLocale
                                  (category.genericMethod,subCategory.genericMethod,"StylebarScale",
                                   (System_String_o *)"",(System_String_o *)"",pMVar12);
              pMVar12 = (MethodInfo *)0x2;
              _Stack_a0 = (_union_233249)0x444fa2b;
              UI_ElementFactory__CreateSliderSetting
                        ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,unaff_RBP.genericMethod,
                         pSVar11,(System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              _Var17 = (_union_233249)&"";
              if (lVar5 != 0) {
                parent = (UI_BasePanel_o *)*ppUVar16;
                unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0x78))->genericMethod;
                _Stack_a0 = (_union_233249)0x444fa7a;
                pSVar11 = UI_UIManager__GetLocale
                                    (category.genericMethod,subCategory.genericMethod,"KillScoreScale",
                                     (System_String_o *)"",(System_String_o *)"",pMVar12);
                pMVar12 = (MethodInfo *)0x2;
                _Stack_a0 = (_union_233249)0x444faac;
                UI_ElementFactory__CreateSliderSetting
                          ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,unaff_RBP.genericMethod,
                           pSVar11,(System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
                lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                _Var17 = (_union_233249)&"";
                if (lVar5 != 0) {
                  parent = (UI_BasePanel_o *)*ppUVar16;
                  unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0x80))->genericMethod;
                  _Stack_a0 = (_union_233249)0x444fafe;
                  pSVar11 = UI_UIManager__GetLocale
                                      (category.genericMethod,subCategory.genericMethod,"KillFeedScale",
                                       (System_String_o *)"",(System_String_o *)"",pMVar12
                                      );
                  pMVar12 = (MethodInfo *)0x2;
                  _Stack_a0 = (_union_233249)0x444fb30;
                  UI_ElementFactory__CreateSliderSetting
                            ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,unaff_RBP.genericMethod
                             ,pSVar11,(System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
                  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  _Var17 = (_union_233249)&"";
                  if (lVar5 != 0) {
                    parent = (UI_BasePanel_o *)*ppUVar16;
                    unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0x38))->genericMethod;
                    _Stack_a0 = (_union_233249)0x444fb7f;
                    pSVar11 = UI_UIManager__GetLocale
                                        (category.genericMethod,subCategory.genericMethod,"ShowStylebar",
                                         (System_String_o *)"",(System_String_o *)"",
                                         pMVar12);
                    pMVar12 = (MethodInfo *)0x0;
                    _Stack_a0 = (_union_233249)0x444fba9;
                    UI_ElementFactory__CreateToggleSetting
                              ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,
                               unaff_RBP.genericMethod,pSVar11,(System_String_o *)"",30.0,30.0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                    _Var17 = (_union_233249)&"";
                    if (lVar5 != 0) {
                      parent = (UI_BasePanel_o *)*ppUVar16;
                      _Var17 = (_union_233249)((_union_233249 *)(lVar5 + 0x28))->genericMethod;
                      unaff_R13 = &"";
                      _Stack_a0 = (_union_233249)0x444fbfb;
                      unaff_RBP.genericMethod =
                           UI_UIManager__GetLocale
                                     (category.genericMethod,subCategory.genericMethod,"GameFeed",
                                      (System_String_o *)"",(System_String_o *)"",pMVar12)
                      ;
                      _Stack_a0 = (_union_233249)0x444fc1a;
                      pSVar11 = UI_UIManager__GetLocale
                                          (category.genericMethod,subCategory.genericMethod,"GameFeedTooltip",
                                           (System_String_o *)"",(System_String_o *)"",
                                           pMVar12);
                      pMVar12 = (MethodInfo *)0x0;
                      _Stack_a0 = (_union_233249)0x444fc46;
                      UI_ElementFactory__CreateToggleSetting
                                ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,
                                 _Var17.genericMethod,unaff_RBP.genericMethod,pSVar11,30.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if (lVar5 != 0) {
                        unaff_R13 = (MethodInfo **)*ppUVar16;
                        _Var17 = (_union_233249)((_union_233249 *)(lVar5 + 0x30))->genericMethod;
                        _Stack_a0 = (_union_233249)0x444fc95;
                        unaff_RBP.genericMethod =
                             UI_UIManager__GetLocale
                                       (category.genericMethod,subCategory.genericMethod,"FeedConsole",
                                        (System_String_o *)"",(System_String_o *)"",
                                        pMVar12);
                        _Stack_a0 = (_union_233249)0x444fcb3;
                        pSVar11 = UI_UIManager__GetLocale
                                            (category.genericMethod,subCategory.genericMethod,"FeedConsoleTooltip",
                                             (System_String_o *)"",(System_String_o *)"",
                                             pMVar12);
                        pMVar12 = (MethodInfo *)0x0;
                        _Stack_a0 = (_union_233249)0x444fcdf;
                        UI_ElementFactory__CreateToggleSetting
                                  ((UnityEngine_Transform_o *)unaff_R13,__this_06.genericMethod,
                                   _Var17.genericMethod,unaff_RBP.genericMethod,pSVar11,30.0,30.0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                        parent = (UI_BasePanel_o *)&"";
                        if (lVar5 != 0) {
                          unaff_R13 = (MethodInfo **)*ppUVar16;
                          _Var17 = (_union_233249)((_union_233249 *)(lVar5 + 0xb0))->genericMethod;
                          _Stack_a0 = (_union_233249)0x444fd31;
                          pMVar18 = "";
                          unaff_RBP.genericMethod =
                               UI_UIManager__GetLocale
                                         (category.genericMethod,subCategory.genericMethod,"KDR",
                                          (System_String_o *)"",(System_String_o *)"",
                                          pMVar12);
                          _Stack_a0 = (_union_233249)0x444fd4c;
                          pSVar13 = UI_UIManager__GetLocaleArray
                                              (category.genericMethod,subCategory.genericMethod,"KDROptions",
                                               (System_String_o *)"",pMVar18);
                          _Stack_a0 = (_union_233249)0x444fd8d;
                          pMVar12 = "";
                          UI_ElementFactory__CreateDropdownSetting
                                    ((UnityEngine_Transform_o *)unaff_R13,__this_06.genericMethod,
                                     _Var17.genericMethod,unaff_RBP.genericMethod,pSVar13,
                                     (System_String_o *)"",160.0,40.0,300.0,
                                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                                     (MethodInfo *)0x0);
                          lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                          parent = (UI_BasePanel_o *)&"";
                          if (lVar5 != 0) {
                            unaff_R13 = (MethodInfo **)*ppUVar16;
                            pSVar7 = *(Settings_BaseSetting_o **)(lVar5 + 0x168);
                            _Stack_a0 = (_union_233249)0x444fddf;
                            unaff_RBP.genericMethod =
                                 UI_UIManager__GetLocale
                                           (category.genericMethod,subCategory.genericMethod,"JoinNotifications",
                                            (System_String_o *)"",(System_String_o *)"",
                                            pMVar12);
                            _Stack_a0 = (_union_233249)0x444fdfd;
                            pSVar11 = UI_UIManager__GetLocale
                                                (category.genericMethod,subCategory.genericMethod,"JoinNotificationsTooltip"
                                                 ,(System_String_o *)"",
                                                 (System_String_o *)"",pMVar12);
                            pMVar12 = (MethodInfo *)0x0;
                            _Stack_a0 = (_union_233249)0x444fe29;
                            UI_ElementFactory__CreateToggleSetting
                                      ((UnityEngine_Transform_o *)unaff_R13,__this_06.genericMethod,pSVar7,
                                       unaff_RBP.genericMethod,pSVar11,30.0,30.0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                            parent = (UI_BasePanel_o *)&"";
                            _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                            if (lVar5 != 0) {
                              parent = (UI_BasePanel_o *)*ppUVar16;
                              unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0xb8))->genericMethod;
                              unaff_R13 = &"";
                              _Stack_a0 = (_union_233249)0x444fe7b;
                              pSVar11 = UI_UIManager__GetLocale
                                                  (category.genericMethod,subCategory.genericMethod,
                                                   "ShowPing",(System_String_o *)"",
                                                   (System_String_o *)"",pMVar12);
                              pMVar12 = (MethodInfo *)0x0;
                              _Stack_a0 = (_union_233249)0x444fea8;
                              UI_ElementFactory__CreateToggleSetting
                                        ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,
                                         unaff_RBP.genericMethod,pSVar11,(System_String_o *)"",30.0,
                                         30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                              _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                              if (lVar5 != 0) {
                                parent = (UI_BasePanel_o *)*ppUVar16;
                                unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0xd0))->genericMethod;
                                unaff_R13 = &"";
                                _Stack_a0 = (_union_233249)0x444fef3;
                                pSVar11 = UI_UIManager__GetLocale
                                                    (category.genericMethod,subCategory.genericMethod,
                                                     "ShowGameTime",(System_String_o *)"",
                                                     (System_String_o *)"",pMVar12);
                                pMVar12 = (MethodInfo *)0x0;
                                _Stack_a0 = (_union_233249)0x444ff20;
                                UI_ElementFactory__CreateToggleSetting
                                          ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,
                                           unaff_RBP.genericMethod,pSVar11,(System_String_o *)"",
                                           30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0
                                          );
                                lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                                if (lVar5 != 0) {
                                  parent = (UI_BasePanel_o *)*ppUVar16;
                                  unaff_RBP = (_union_233249)((_union_233249 *)(lVar5 + 0xd8))->genericMethod;
                                  unaff_R13 = &"";
                                  _Stack_a0 = (_union_233249)0x444ff6b;
                                  pSVar11 = UI_UIManager__GetLocale
                                                      (category.genericMethod,subCategory.genericMethod,
                                                       "ShowSongPopup",(System_String_o *)"",
                                                       (System_String_o *)"",pMVar12);
                                  pMVar12 = (MethodInfo *)0x0;
                                  _Stack_a0 = (_union_233249)0x444ff98;
                                  UI_ElementFactory__CreateToggleSetting
                                            ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,
                                             unaff_RBP.genericMethod,pSVar11,(System_String_o *)"",
                                             30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                             (MethodInfo *)0x0);
                                  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                  _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                                  if (lVar5 != 0) {
                                    parent = (UI_BasePanel_o *)*ppUVar16;
                                    unaff_RBP = (_union_233249)
                                                ((_union_233249 *)(lVar5 + 0xc0))->genericMethod;
                                    unaff_R13 = &"";
                                    _Stack_a0 = (_union_233249)0x444ffe3;
                                    pSVar11 = UI_UIManager__GetLocale
                                                        (category.genericMethod,subCategory.genericMethod,
                                                         "ShowEmotes",(System_String_o *)"",
                                                         (System_String_o *)"",pMVar12);
                                    pMVar12 = (MethodInfo *)0x0;
                                    _Stack_a0 = (_union_233249)0x4450010;
                                    UI_ElementFactory__CreateToggleSetting
                                              ((UnityEngine_Transform_o *)parent,__this_06.genericMethod,
                                               unaff_RBP.genericMethod,pSVar11,(System_String_o *)""
                                               ,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                               (MethodInfo *)0x0);
                                    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                    _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                                    if (lVar5 != 0) {
                                      unaff_R13 = (MethodInfo **)*ppUVar16;
                                      _Var17 = (_union_233249)((_union_233249 *)(lVar5 + 0xe0))->genericMethod
                                      ;
                                      _Stack_a0 = (_union_233249)0x445005b;
                                      pMVar18 = "";
                                      unaff_RBP.genericMethod =
                                           UI_UIManager__GetLocale
                                                     (category.genericMethod,subCategory.genericMethod,
                                                      "ShowNames",(System_String_o *)"",
                                                      (System_String_o *)"",pMVar12);
                                      _Stack_a0 = (_union_233249)0x4450076;
                                      pSVar13 = UI_UIManager__GetLocaleArray
                                                          (category.genericMethod,subCategory.genericMethod,
                                                           "ShowNamesOptions",(System_String_o *)"",
                                                           pMVar18);
                                      _Stack_a0 = (_union_233249)0x44500b7;
                                      pMVar12 = "";
                                      UI_ElementFactory__CreateDropdownSetting
                                                ((UnityEngine_Transform_o *)unaff_R13,__this_06.genericMethod,
                                                 _Var17.genericMethod,unaff_RBP.genericMethod,pSVar13,
                                                 (System_String_o *)"",160.0,40.0,300.0,
                                                 (System_Nullable_float__o)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                      parent = (UI_BasePanel_o *)&"";
                                      if (lVar5 != 0) {
                                        unaff_R13 = (MethodInfo **)*ppUVar16;
                                        _Var17 = (_union_233249)
                                                 ((_union_233249 *)(lVar5 + 0xe8))->genericMethod;
                                        _Stack_a0 = (_union_233249)0x4450109;
                                        pMVar18 = "";
                                        unaff_RBP.genericMethod =
                                             UI_UIManager__GetLocale
                                                       (category.genericMethod,subCategory.genericMethod,
                                                        "ShowHealthbars",(System_String_o *)"",
                                                        (System_String_o *)"",pMVar12);
                                        _Stack_a0 = (_union_233249)0x4450124;
                                        pSVar13 = UI_UIManager__GetLocaleArray
                                                            (category.genericMethod,subCategory.genericMethod,
                                                             "ShowHealthbarsOptions",(System_String_o *)"",
                                                             pMVar18);
                                        _Stack_a0 = (_union_233249)0x4450165;
                                        pMVar12 = "";
                                        UI_ElementFactory__CreateDropdownSetting
                                                  ((UnityEngine_Transform_o *)unaff_R13,
                                                   __this_06.genericMethod,_Var17.genericMethod,
                                                   unaff_RBP.genericMethod,pSVar13,
                                                   (System_String_o *)"",160.0,40.0,300.0,
                                                   (System_Nullable_float__o)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                        parent = (UI_BasePanel_o *)&"";
                                        if (lVar5 != 0) {
                                          unaff_R13 = (MethodInfo **)*ppUVar16;
                                          _Var17 = (_union_233249)
                                                   ((_union_233249 *)(lVar5 + 0xf0))->genericMethod;
                                          _Stack_a0 = (_union_233249)0x44501b7;
                                          unaff_RBP.genericMethod =
                                               UI_UIManager__GetLocale
                                                         (category.genericMethod,subCategory.genericMethod,
                                                          "HumanNameDistance",(System_String_o *)"",
                                                          (System_String_o *)"",pMVar12);
                                          _Stack_a0 = (_union_233249)0x44501d5;
                                          pSVar11 = UI_UIManager__GetLocale
                                                              (category.genericMethod,
                                                               subCategory.genericMethod,"HumanNameDistanceTooltip",
                                                               (System_String_o *)"",
                                                               (System_String_o *)"",pMVar12);
                                          pMVar12 = (MethodInfo *)0x0;
                                          _Stack_a0 = (_union_233249)0x4450213;
                                          UI_ElementFactory__CreateInputSetting
                                                    ((UnityEngine_Transform_o *)unaff_R13,
                                                     __this_06.genericMethod,_Var17.genericMethod,
                                                     unaff_RBP.genericMethod,pSVar11,160.0,40.0,0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                          lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                          parent = (UI_BasePanel_o *)&"";
                                          if (lVar5 != 0) {
                                            unaff_R13 = (MethodInfo **)*ppUVar16;
                                            _Var17 = (_union_233249)
                                                     ((_union_233249 *)(lVar5 + 0xf8))->genericMethod;
                                            _Stack_a0 = (_union_233249)0x4450265;
                                            pMVar18 = "";
                                            unaff_RBP.genericMethod =
                                                 UI_UIManager__GetLocale
                                                           (category.genericMethod,subCategory.genericMethod,
                                                            "NameOverrideTarget",(System_String_o *)"",
                                                            (System_String_o *)"",pMVar12);
                                            _Stack_a0 = (_union_233249)0x4450280;
                                            pSVar13 = UI_UIManager__GetLocaleArray
                                                                (category.genericMethod,
                                                                 subCategory.genericMethod,"ShowNamesOptions",
                                                                 (System_String_o *)"",pMVar18);
                                            _Stack_a0 = (_union_233249)0x44502c1;
                                            pMVar12 = "";
                                            UI_ElementFactory__CreateDropdownSetting
                                                      ((UnityEngine_Transform_o *)unaff_R13,
                                                       __this_06.genericMethod,_Var17.genericMethod,
                                                       unaff_RBP.genericMethod,pSVar13,
                                                       (System_String_o *)"",160.0,40.0,300.0,
                                                       (System_Nullable_float__o)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                            parent = (UI_BasePanel_o *)&"";
                                            if (lVar5 != 0) {
                                              unaff_R13 = (MethodInfo **)*ppUVar16;
                                              _Var17 = (_union_233249)
                                                       ((_union_233249 *)(lVar5 + 0x100))->genericMethod;
                                              _Stack_a0 = (_union_233249)0x4450313;
                                              pMVar18 = "";
                                              parent = (UI_BasePanel_o *)
                                                       UI_UIManager__GetLocale
                                                                 (category.genericMethod,
                                                                  subCategory.genericMethod,"NameBackgroundType",
                                                                  (System_String_o *)"",
                                                                  (System_String_o *)"",pMVar12);
                                              _Stack_a0 = (_union_233249)0x445032f;
                                              pSVar13 = UI_UIManager__GetLocaleArray
                                                                  (category.genericMethod,
                                                                   subCategory.genericMethod,"NameBackgroundTypeOptions",
                                                                   (System_String_o *)"",pMVar18);
                                              _Stack_a0 = (_union_233249)0x4450371;
                                              pMVar12 = "";
                                              UI_ElementFactory__CreateDropdownSetting
                                                        ((UnityEngine_Transform_o *)unaff_R13,
                                                         __this_06.genericMethod,_Var17.genericMethod,
                                                         (System_String_o *)parent,pSVar13,
                                                         (System_String_o *)"",160.0,40.0,300.0,
                                                         (System_Nullable_float__o)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (MethodInfo *)0x0);
                                              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                              unaff_RBP = (_union_233249)&"";
                                              if (lVar5 != 0) {
                                                unaff_RBP.genericMethod = *ppUVar16;
                                                parent = ((_union_233249 *)(lVar5 + 0x108))->genericMethod;
                                                _Stack_a0 = (_union_233249)0x44503c0;
                                                pSVar11 = UI_UIManager__GetLocale
                                                                    (category.genericMethod,
                                                                     subCategory.genericMethod,"ForceNameColor",
                                                                     (System_String_o *)"",
                                                                     (System_String_o *)"",pMVar12);
                                                lVar5 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                                unaff_R13 = (MethodInfo **)__this;
                                                _Var17 = (_union_233249)ppUVar16;
                                                if (lVar5 != 0) {
                                                  _Stack_a0 = (_union_233249)0x445042a;
                                                  pMVar12 = "";
                                                  UI_ElementFactory__CreateToggleColorSetting
                                                            (unaff_RBP.genericMethod,__this_06.genericMethod,
                                                             (Settings_ToggleColorSetting_o *)parent,pSVar11,
                                                             *(UI_ColorPickPopup_o **)(lVar5 + 0x48),
                                                             (System_String_o *)"",30.0,30.0,90.0,
                                                             30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                                  if (lVar5 != 0) {
                                                    unaff_RBP.genericMethod = *ppUVar16;
                                                    parent = ((_union_233249 *)(lVar5 + 0x110))->genericMethod
                                                    ;
                                                    _Stack_a0 = (_union_233249)0x4450479;
                                                    pSVar11 = UI_UIManager__GetLocale
                                                                        (category.genericMethod,
                                                                         subCategory.genericMethod,
                                                                         "ForceBackgroundColor",
                                                                         (System_String_o *)"",
                                                                         (System_String_o *)"",
                                                                         pMVar12);
                                                    lVar5 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                                    if (lVar5 != 0) {
                                                      _Stack_a0 = (_union_233249)0x44504cf;
                                                      pMVar12 = "";
                                                      UI_ElementFactory__CreateColorSetting
                                                                (unaff_RBP.genericMethod,
                                                                 __this_06.genericMethod,
                                                                 (Settings_BaseSetting_o *)parent,pSVar11,
                                                                 *(UI_ColorPickPopup_o **)(lVar5 + 0x48),
                                                                 (System_String_o *)"",90.0,30.0,
                                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                                 (MethodInfo *)0x0);
                                                      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28)
                                                      ;
                                                      if (lVar5 != 0) {
                                                        unaff_RBP.genericMethod = *ppUVar16;
                                                        unaff_R15 = (_union_233249)
                                                                    ((_union_233249 *)(lVar5 + 0x118))->
                                                                    genericMethod;
                                                        _Stack_a0 = (_union_233249)0x445051e;
                                                        pSVar11 = UI_UIManager__GetLocale
                                                                            (category.genericMethod,
                                                                             subCategory.genericMethod,
                                                                             "MinNameLength",
                                                                             (System_String_o *)"",
                                                                             (System_String_o *)"",
                                                                             pMVar12);
                                                        pMVar12 = (MethodInfo *)0x0;
                                                        _Stack_a0 = (_union_233249)0x445055c;
                                                        UI_ElementFactory__CreateInputSetting
                                                                  (unaff_RBP.genericMethod,
                                                                   __this_06.genericMethod,
                                                                   unaff_R15.genericMethod,pSVar11,
                                                                   (System_String_o *)"",160.0,40.0,
                                                                   0,(UnityEngine_Events_UnityAction_o *)0x0,
                                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                                   (System_Func_string__bool__o *)0x0,
                                                                   (System_Func_string__string__o *)0x0,
                                                                   (MethodInfo *)0x0);
                                                        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                         0x28);
                                                        parent = (UI_BasePanel_o *)category;
                                                        _Var17 = (_union_233249)&"";
                                                        if (lVar5 != 0) {
                                                          unaff_R15 = (_union_233249)
                                                                      (__this->fields).DoublePanelLeft;
                                                          _Var17 = (_union_233249)
                                                                   ((_union_233249 *)(lVar5 + 0x120))->
                                                                   genericMethod;
                                                          _Stack_a0 = (_union_233249)0x44505aa;
                                                          pSVar11 = UI_UIManager__GetLocale
                                                                              (category.genericMethod,
                                                                               subCategory.genericMethod,
                                                                               "MaxNameLength",
                                                                               (System_String_o *)""
                                                                               ,(System_String_o *)
                                                                                "",pMVar12);
                                                          pMVar12 = (MethodInfo *)0x0;
                                                          _Stack_a0 = (_union_233249)0x44505e9;
                                                          UI_ElementFactory__CreateInputSetting
                                                                    (unaff_R15.genericMethod,
                                                                     __this_06.genericMethod,
                                                                     _Var17.genericMethod,pSVar11,
                                                                     (System_String_o *)"",160.0,
                                                                     40.0,0,(UnityEngine_Events_UnityAction_o
                                                                             *)0x0,
                                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                                     (System_Func_string__bool__o *)0x0,
                                                                     (System_Func_string__string__o *)0x0,
                                                                     (MethodInfo *)0x0);
                                                          lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                           0x28);
                                                          unaff_RBP = (_union_233249)&"";
                                                          if (lVar5 != 0) {
                                                            pUVar6 = (__this->fields).DoublePanelRight;
                                                            pSVar7 = *(Settings_BaseSetting_o **)
                                                                      (lVar5 + 0x90);
                                                            _Stack_a0 = (_union_233249)0x4450644;
                                                            pMVar18 = "";
                                                            pSVar11 = UI_UIManager__GetLocale
                                                                                (category.genericMethod,
                                                                                 subCategory.genericMethod,
                                                                                 "CrosshairStyle",
                                                                                 (System_String_o *)
                                                                                 "",
                                                                                 (System_String_o *)
                                                                                 "",pMVar12);
                                                            _Stack_a0 = (_union_233249)0x4450660;
                                                            pSVar13 = UI_UIManager__GetLocaleArray
                                                                                (category.genericMethod,
                                                                                 subCategory.genericMethod,
                                                                                 "CrosshairStyleOptions",
                                                                                 (System_String_o *)
                                                                                 "",pMVar18);
                                                            _Stack_a0 = (_union_233249)0x44506a4;
                                                            pMVar12 = "";
                                                            UI_ElementFactory__CreateDropdownSetting
                                                                      (pUVar6,__this_06.genericMethod,pSVar7,
                                                                       pSVar11,pSVar13,
                                                                       (System_String_o *)"",200.0,
                                                                       40.0,300.0,
                                                                       (System_Nullable_float__o)0x0,
                                                                       (UnityEngine_Events_UnityAction_o *)0x0
                                                                       ,(MethodInfo *)0x0);
                                                            _Var17 = (_union_233249)
                                                                     (__this->fields).DoublePanelRight;
                                                            _Stack_a0 = (_union_233249)0x44506bc;
                                                            parent = (UI_BasePanel_o *)
                                                                     (*(__this->klass->vtable).
                                                                       _4_get_ThemePanel.methodPtr)
                                                                               (__this,(__this->klass->vtable)
                                                                                       ._4_get_ThemePanel.
                                                                                       method);
                                                            _Stack_a0 = (_union_233249)0x44506cf;
                                                            unaff_RBP.genericMethod =
                                                                 (void *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                                            _Stack_a0 = (_union_233249)0x44506f4;
                                                            UI_ElementStyle___ctor
                                                                      (unaff_RBP.genericMethod,0x18,150.0,20.0
                                                                       ,(System_String_o *)parent,
                                                                       (MethodInfo *)0x0);
                                                            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                             0x28);
                                                            unaff_R12.genericMethod = &TypeInfo_ElementStyle;
                                                            unaff_R15 = subCategory;
                                                            if (lVar5 != 0) {
                                                              pSVar7 = *(Settings_BaseSetting_o **)
                                                                        (lVar5 + 0x48);
                                                              _Stack_a0 = (_union_233249)0x4450742;
                                                              pSVar11 = UI_UIManager__GetLocale
                                                                                  (category.genericMethod,
                                                                                   subCategory.genericMethod,
                                                                                   "CrosshairScale",
                                                                                   (System_String_o *)
                                                                                   "",
                                                                                   (System_String_o *)
                                                                                   "",pMVar12);
                                                              pMVar12 = (MethodInfo *)0x2;
                                                              _Stack_a0 = (_union_233249)0x4450774;
                                                              UI_ElementFactory__CreateSliderSetting
                                                                        (_Var17.genericMethod,
                                                                         unaff_RBP.genericMethod,pSVar7,
                                                                         pSVar11,(System_String_o *)
                                                                                 "",185.0,16.0,2,
                                                                         (MethodInfo *)0x0);
                                                              _Var17 = (_union_233249)
                                                                       (__this->fields).DoublePanelRight;
                                                              _Stack_a0 = (_union_233249)0x445078c;
                                                              parent = (UI_BasePanel_o *)
                                                                       (*(__this->klass->vtable).
                                                                         _4_get_ThemePanel.methodPtr)
                                                                                 (__this,(__this->klass->
                                                                                         vtable).
                                                       _4_get_ThemePanel.method);
                                                       _Stack_a0 = (_union_233249)0x445079e;
                                                       unaff_RBP.genericMethod =
                                                            (void *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                                                       _Stack_a0 = (_union_233249)0x44507c3;
                                                       UI_ElementStyle___ctor
                                                                 (unaff_RBP.genericMethod,0x18,150.0,20.0,
                                                                  (System_String_o *)parent,(MethodInfo *)0x0)
                                                       ;
                                                       lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28
                                                                        );
                                                       unaff_R12 = category;
                                                       unaff_R15 = (_union_233249)&"";
                                                       if (lVar5 != 0) {
                                                         parent = ((_union_233249 *)(lVar5 + 0x50))->
                                                                  genericMethod;
                                                         _Stack_a0 = (_union_233249)0x445080f;
                                                         pSVar11 = UI_UIManager__GetLocale
                                                                             (category.genericMethod,
                                                                              subCategory.genericMethod,
                                                                              "CrosshairTextScale",
                                                                              (System_String_o *)"",
                                                                              (System_String_o *)"",
                                                                              pMVar12);
                                                         pMVar12 = (MethodInfo *)0x2;
                                                         _Stack_a0 = (_union_233249)0x4450842;
                                                         UI_ElementFactory__CreateSliderSetting
                                                                   (_Var17.genericMethod,
                                                                    unaff_RBP.genericMethod,
                                                                    (Settings_BaseSetting_o *)parent,pSVar11,
                                                                    (System_String_o *)"",185.0,16.0
                                                                    ,2,(MethodInfo *)0x0);
                                                         lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                          0x28);
                                                         unaff_R12 = (_union_233249)&"";
                                                         _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                                                         unaff_R15 = category;
                                                         if (lVar5 != 0) {
                                                           parent = (UI_BasePanel_o *)
                                                                    (__this->fields).DoublePanelRight;
                                                           unaff_RBP = (_union_233249)
                                                                       ((_union_233249 *)(lVar5 + 0x88))->
                                                                       genericMethod;
                                                           _Stack_a0 = (_union_233249)0x4450897;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ShowCrosshairDistance",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x44508c4;
                                                           UI_ElementFactory__CreateToggleSetting
                                                                     ((UnityEngine_Transform_o *)parent,
                                                                      __this_06.genericMethod,
                                                                      unaff_RBP.genericMethod,pSVar11,
                                                                      (System_String_o *)"",30.0,
                                                                      30.0,(UnityEngine_Events_UnityAction_o *
                                                                           )0x0,(MethodInfo *)0x0);
                                                           lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                            0x28);
                                                           unaff_R12 = (_union_233249)&"";
                                                           _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                                                           if (lVar5 != 0) {
                                                             parent = (UI_BasePanel_o *)
                                                                      (__this->fields).DoublePanelRight;
                                                             unaff_RBP = (_union_233249)
                                                                         ((_union_233249 *)(lVar5 + 0xa8))->
                                                                         genericMethod;
                                                             _Stack_a0 = (_union_233249)0x445090d;
                                                             pSVar11 = UI_UIManager__GetLocale
                                                                                 (category.genericMethod,
                                                                                  subCategory.genericMethod,
                                                                                  "ShowCrosshairArrows",
                                                                                  (System_String_o *)
                                                                                  "",
                                                                                  (System_String_o *)
                                                                                  "",pMVar12);
                                                             pMVar12 = (MethodInfo *)0x0;
                                                             _Stack_a0 = (_union_233249)0x445093a;
                                                             UI_ElementFactory__CreateToggleSetting
                                                                       ((UnityEngine_Transform_o *)parent,
                                                                        __this_06.genericMethod,
                                                                        unaff_RBP.genericMethod,pSVar11,
                                                                        (System_String_o *)"",30.0,
                                                                        30.0,(UnityEngine_Events_UnityAction_o
                                                                              *)0x0,(MethodInfo *)0x0);
                                                             unaff_R12 = (_union_233249)&"";
                                                             _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                                                             if (lVar4 != 0) {
                                                               parent = (UI_BasePanel_o *)
                                                                        (__this->fields).DoublePanelRight;
                                                               unaff_R12 = (_union_233249)
                                                                           ((_union_233249 *)(lVar4 + 0x58))->
                                                                           genericMethod;
                                                               _Stack_a0 = (_union_233249)0x4450977;
                                                               pSVar11 = UI_UIManager__GetLocale
                                                                                   (category.genericMethod,
                                                                                    subCategory.genericMethod,
                                                                                    "CrosshairSkin",
                                                                                    (System_String_o *)
                                                                                    "",
                                                                                    (System_String_o *)
                                                                                    "",pMVar12);
                                                               pMVar12 = (MethodInfo *)0x0;
                                                               _Stack_a0 = (_union_233249)0x44509b6;
                                                               UI_ElementFactory__CreateInputSetting
                                                                         ((UnityEngine_Transform_o *)parent,
                                                                          __this_06.genericMethod,
                                                                          unaff_R12.genericMethod,pSVar11,
                                                                          (System_String_o *)"",
                                                                          160.0,40.0,0,
                                                                          (UnityEngine_Events_UnityAction_o *)
                                                                          0x0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                                       ;
                                                       lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28
                                                                        );
                                                       unaff_RBP = (_union_233249)&"";
                                                       _Var17 = (_union_233249)&TypeInfo_SettingsManager;
                                                       if (lVar5 != 0) {
                                                         unaff_R12 = (_union_233249)
                                                                     (__this->fields).DoublePanelRight;
                                                         _Var17 = (_union_233249)
                                                                  ((_union_233249 *)(lVar5 + 0x98))->
                                                                  genericMethod;
                                                         _Stack_a0 = (_union_233249)0x4450a02;
                                                         pMVar18 = "";
                                                         unaff_R13 = (MethodInfo **)
                                                                     UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "Speedometer",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                         _Stack_a0 = (_union_233249)0x4450a1d;
                                                         pSVar13 = UI_UIManager__GetLocaleArray
                                                                             (category.genericMethod,
                                                                              subCategory.genericMethod,
                                                                              "SpeedometerOptions",
                                                                              (System_String_o *)"",
                                                                              pMVar18);
                                                         _Stack_a0 = (_union_233249)0x4450a5e;
                                                         pMVar12 = "";
                                                         UI_ElementFactory__CreateDropdownSetting
                                                                   (unaff_R12.genericMethod,
                                                                    __this_06.genericMethod,
                                                                    _Var17.genericMethod,
                                                                    (System_String_o *)unaff_R13,pSVar13,
                                                                    (System_String_o *)"",160.0,40.0
                                                                    ,300.0,(System_Nullable_float__o)0x0,
                                                                    (UnityEngine_Events_UnityAction_o *)0x0,
                                                                    (MethodInfo *)0x0);
                                                         lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                          0x28);
                                                         parent = (UI_BasePanel_o *)&"";
                                                         unaff_RBP = subCategory;
                                                         if (lVar5 != 0) {
                                                           unaff_R12 = (_union_233249)
                                                                       (__this->fields).DoublePanelRight;
                                                           _Var17 = (_union_233249)
                                                                    ((_union_233249 *)(lVar5 + 0x170))->
                                                                    genericMethod;
                                                           _Stack_a0 = (_union_233249)0x4450ab6;
                                                           pMVar18 = "";
                                                           unaff_R13 = (MethodInfo **)
                                                                       UI_UIManager__GetLocale
                                                                                 (category.genericMethod,
                                                                                  subCategory.genericMethod,
                                                                                  "Coordinates",
                                                                                  (System_String_o *)
                                                                                  "",
                                                                                  (System_String_o *)
                                                                                  "",pMVar12);
                                                           _Stack_a0 = (_union_233249)0x4450ad2;
                                                           pSVar13 = UI_UIManager__GetLocaleArray
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "CoordinatesOptions",
                                                                                (System_String_o *)
                                                                                "",pMVar18);
                                                           _Stack_a0 = (_union_233249)0x4450b14;
                                                           pMVar12 = "";
                                                           UI_ElementFactory__CreateDropdownSetting
                                                                     (unaff_R12.genericMethod,
                                                                      __this_06.genericMethod,
                                                                      _Var17.genericMethod,
                                                                      (System_String_o *)unaff_R13,pSVar13,
                                                                      (System_String_o *)"",160.0,
                                                                      40.0,300.0,(System_Nullable_float__o)0x0
                                                                      ,(UnityEngine_Events_UnityAction_o *)0x0
                                                                      ,(MethodInfo *)0x0);
                                                           lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                            0x28);
                                                           parent = (UI_BasePanel_o *)subCategory;
                                                           unaff_RBP = (_union_233249)&"";
                                                           if (lVar5 != 0) {
                                                             unaff_R12 = (_union_233249)
                                                                         (__this->fields).DoublePanelRight;
                                                             _Var17 = (_union_233249)
                                                                      ((_union_233249 *)(lVar5 + 0x128))->
                                                                      genericMethod;
                                                             unaff_R13 = &"";
                                                             _Stack_a0 = (_union_233249)0x4450b6c;
                                                             unaff_RBP.genericMethod =
                                                                  UI_UIManager__GetLocale
                                                                            (category.genericMethod,
                                                                             subCategory.genericMethod,
                                                                             "FadeMainMenu",
                                                                             (System_String_o *)"",
                                                                             (System_String_o *)"",
                                                                             pMVar12);
                                                             _Stack_a0 = (_union_233249)0x4450b8b;
                                                             pSVar11 = UI_UIManager__GetLocale
                                                                                 (category.genericMethod,
                                                                                  subCategory.genericMethod,
                                                                                  "FadeMainMenuTooltip",
                                                                                  (System_String_o *)
                                                                                  "",
                                                                                  (System_String_o *)
                                                                                  "",pMVar12);
                                                             pMVar12 = (MethodInfo *)0x0;
                                                             _Stack_a0 = (_union_233249)0x4450bb7;
                                                             UI_ElementFactory__CreateToggleSetting
                                                                       (unaff_R12.genericMethod,
                                                                        __this_06.genericMethod,
                                                                        _Var17.genericMethod,
                                                                        unaff_RBP.genericMethod,pSVar11,30.0,
                                                                        30.0,(UnityEngine_Events_UnityAction_o
                                                                              *)0x0,(MethodInfo *)0x0);
                                                             lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8)
                                                                              + 0x28);
                                                             if (lVar5 != 0) {
                                                               unaff_R12 = (_union_233249)
                                                                           (__this->fields).DoublePanelRight;
                                                               _Var17 = (_union_233249)
                                                                        ((_union_233249 *)(lVar5 + 0x130))->
                                                                        genericMethod;
                                                               unaff_R13 = &"";
                                                               _Stack_a0 = (_union_233249)0x4450c0f;
                                                               unaff_RBP.genericMethod =
                                                                    UI_UIManager__GetLocale
                                                                              (category.genericMethod,
                                                                               subCategory.genericMethod,
                                                                               "FadeLoadscreen",
                                                                               (System_String_o *)""
                                                                               ,(System_String_o *)
                                                                                "",pMVar12);
                                                               _Stack_a0 = (_union_233249)0x4450c2e;
                                                               pSVar11 = UI_UIManager__GetLocale
                                                                                   (category.genericMethod,
                                                                                    subCategory.genericMethod,
                                                                                    "FadeLoadscreenTooltip",
                                                                                    (System_String_o *)
                                                                                    "",
                                                                                    (System_String_o *)
                                                                                    "",pMVar12);
                                                               pMVar12 = (MethodInfo *)0x0;
                                                               _Stack_a0 = (_union_233249)0x4450c5a;
                                                               UI_ElementFactory__CreateToggleSetting
                                                                         (unaff_R12.genericMethod,
                                                                          __this_06.genericMethod,
                                                                          _Var17.genericMethod,
                                                                          unaff_RBP.genericMethod,pSVar11,30.0
                                                                          ,30.0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                                       lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28
                                                                        );
                                                       if (lVar5 != 0) {
                                                         unaff_R12 = (_union_233249)
                                                                     (__this->fields).DoublePanelRight;
                                                         _Var17 = (_union_233249)
                                                                  ((_union_233249 *)(lVar5 + 0xa0))->
                                                                  genericMethod;
                                                         unaff_R13 = &"";
                                                         _Stack_a0 = (_union_233249)0x4450cb2;
                                                         unaff_RBP.genericMethod =
                                                              UI_UIManager__GetLocale
                                                                        (category.genericMethod,
                                                                         subCategory.genericMethod,
                                                                         "ShowInterpolation",
                                                                         (System_String_o *)"",
                                                                         (System_String_o *)"",
                                                                         pMVar12);
                                                         _Stack_a0 = (_union_233249)0x4450cd1;
                                                         pSVar11 = UI_UIManager__GetLocale
                                                                             (category.genericMethod,
                                                                              subCategory.genericMethod,
                                                                              "ShowInterpolationTooltip",
                                                                              (System_String_o *)"",
                                                                              (System_String_o *)"",
                                                                              pMVar12);
                                                         pMVar12 = (MethodInfo *)0x0;
                                                         _Stack_a0 = (_union_233249)0x4450cfd;
                                                         UI_ElementFactory__CreateToggleSetting
                                                                   (unaff_R12.genericMethod,
                                                                    __this_06.genericMethod,
                                                                    _Var17.genericMethod,
                                                                    unaff_RBP.genericMethod,pSVar11,30.0,30.0,
                                                                    (UnityEngine_Events_UnityAction_o *)0x0,
                                                                    (MethodInfo *)0x0);
                                                         lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                          0x28);
                                                         if (lVar5 != 0) {
                                                           pUVar6 = (__this->fields).DoublePanelRight;
                                                           pSVar7 = *(Settings_BaseSetting_o **)(lVar5 + 200);
                                                           _Stack_a0 = (_union_233249)0x4450d5a;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ShowKeybindTip",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           _Stack_a0 = (_union_233249)0x4450d79;
                                                           pSVar14 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ShowKeybindTooltip",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x4450daa;
                                                           UI_ElementFactory__CreateToggleSetting
                                                                     (pUVar6,__this_06.genericMethod,pSVar7,
                                                                      pSVar11,pSVar14,30.0,30.0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pUVar6 = (__this->fields).DoublePanelRight;
                                                           pSVar7 = *(Settings_BaseSetting_o **)
                                                                     (lVar4 + 0x160);
                                                           _Stack_a0 = (_union_233249)0x4450dec;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "KillFeedCount",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           _Stack_a0 = (_union_233249)0x4450e0d;
                                                           pSVar14 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "KillFeedCountTooltip",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x4450e4d;
                                                           UI_ElementFactory__CreateInputSetting
                                                                     (pUVar6,__this_06.genericMethod,pSVar7,
                                                                      pSVar11,pSVar14,100.0,40.0,0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (System_Func_string__bool__o *)0x0,
                                                                      (System_Func_string__string__o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pUVar6 = (__this->fields).DoublePanelRight;
                                                           pSVar7 = *(Settings_BaseSetting_o **)
                                                                     (lVar4 + 0x178);
                                                           _Stack_a0 = (_union_233249)0x4450e88;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ShowChatTimestamp",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x4450eb4;
                                                           UI_ElementFactory__CreateToggleSetting
                                                                     (pUVar6,__this_06.genericMethod,pSVar7,
                                                                      pSVar11,(System_String_o *)"",
                                                                      30.0,30.0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pUVar6 = (__this->fields).DoublePanelRight;
                                                           pSVar7 = *(Settings_BaseSetting_o **)
                                                                     (lVar4 + 0x138);
                                                           _Stack_a0 = (_union_233249)0x4450edc;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ChatWidth",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x4450f1d;
                                                           UI_ElementFactory__CreateInputSetting
                                                                     (pUVar6,__this_06.genericMethod,pSVar7,
                                                                      pSVar11,(System_String_o *)"",
                                                                      100.0,40.0,0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (System_Func_string__bool__o *)0x0,
                                                                      (System_Func_string__string__o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pUVar6 = (__this->fields).DoublePanelRight;
                                                           pSVar7 = *(Settings_BaseSetting_o **)
                                                                     (lVar4 + 0x140);
                                                           _Stack_a0 = (_union_233249)0x4450f4c;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ChatHeight",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x4450f92;
                                                           UI_ElementFactory__CreateInputSetting
                                                                     (pUVar6,__this_06.genericMethod,pSVar7,
                                                                      pSVar11,(System_String_o *)"",
                                                                      100.0,40.0,0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (System_Func_string__bool__o *)0x0,
                                                                      (System_Func_string__string__o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pUVar6 = (__this->fields).DoublePanelRight;
                                                           pSVar7 = *(Settings_BaseSetting_o **)
                                                                     (lVar4 + 0x148);
                                                           unaff_R13 = &"";
                                                           _Stack_a0 = (_union_233249)0x4450fcf;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ChatFontSize",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x445100e;
                                                           UI_ElementFactory__CreateInputSetting
                                                                     (pUVar6,__this_06.genericMethod,pSVar7,
                                                                      pSVar11,(System_String_o *)"",
                                                                      100.0,40.0,0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (System_Func_string__bool__o *)0x0,
                                                                      (System_Func_string__string__o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           pUVar6 = (__this->fields).DoublePanelRight;
                                                           unaff_RBP = (_union_233249)
                                                                       ((_union_233249 *)(lVar4 + 0x158))->
                                                                       genericMethod;
                                                           _Stack_a0 = (_union_233249)0x445103f;
                                                           pSVar11 = UI_UIManager__GetLocale
                                                                               (category.genericMethod,
                                                                                subCategory.genericMethod,
                                                                                "ChatScrollSensitivity",
                                                                                (System_String_o *)
                                                                                "",
                                                                                (System_String_o *)
                                                                                "",pMVar12);
                                                           pMVar12 = (MethodInfo *)0x0;
                                                           _Stack_a0 = (_union_233249)0x445107e;
                                                           UI_ElementFactory__CreateInputSetting
                                                                     (pUVar6,__this_06.genericMethod,
                                                                      unaff_RBP.genericMethod,pSVar11,
                                                                      (System_String_o *)"",140.0,
                                                                      40.0,0,(UnityEngine_Events_UnityAction_o
                                                                              *)0x0,
                                                                      (UnityEngine_Events_UnityAction_o *)0x0,
                                                                      (System_Func_string__bool__o *)0x0,
                                                                      (System_Func_string__string__o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                           lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) +
                                                                            0x28);
                                                           parent = (UI_BasePanel_o *)__this;
                                                           unaff_R12 = subCategory;
                                                           _Var17 = category;
                                                           unaff_R15.genericMethod = __this_06.genericMethod;
                                                           if (lVar4 != 0) {
                                                             unaff_RBP = (_union_233249)
                                                                         (__this->fields).DoublePanelRight;
                                                             _Var17 = (_union_233249)
                                                                      ((_union_233249 *)(lVar4 + 0x188))->
                                                                      genericMethod;
                                                             _Stack_a0 = (_union_233249)0x44510ce;
                                                             pSVar11 = UI_UIManager__GetLocale
                                                                                 (category.genericMethod,
                                                                                  subCategory.genericMethod,
                                                                                  "ChatBackgroundColor",
                                                                                  (System_String_o *)
                                                                                  "",
                                                                                  (System_String_o *)
                                                                                  "",pMVar12);
                                                             lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8)
                                                                              + 0x28);
                                                             parent = (UI_BasePanel_o *)&"";
                                                             unaff_R13 = (MethodInfo **)__this;
                                                             if (lVar4 != 0) {
                                                               _Stack_a0 = (_union_233249)0x4451120;
                                                               pMVar12 = "";
                                                               UI_ElementFactory__CreateColorSetting
                                                                         (unaff_RBP.genericMethod,
                                                                          __this_06.genericMethod,
                                                                          _Var17.genericMethod,pSVar11,
                                                                          *(UI_ColorPickPopup_o **)
                                                                           (lVar4 + 0x48),
                                                                          (System_String_o *)"",90.0
                                                                          ,30.0,(
                                                       UnityEngine_Events_UnityAction_o *)0x0,
                                                       (MethodInfo *)0x0);
                                                       lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28
                                                                        );
                                                       unaff_R12.genericMethod = __this_06.genericMethod;
                                                       if (lVar4 != 0) {
                                                         pUVar6 = (__this->fields).DoublePanelRight;
                                                         pSVar7 = *(Settings_BaseSetting_o **)(lVar4 + 400);
                                                         _Stack_a0 = (_union_233249)0x445116e;
                                                         pSVar11 = UI_UIManager__GetLocale
                                                                             (category.genericMethod,
                                                                              subCategory.genericMethod,
                                                                              "ChatCLErrors",
                                                                              (System_String_o *)"",
                                                                              (System_String_o *)"",
                                                                              pMVar12);
                                                         _Stack_a0 = (_union_233249)0x4451193;
                                                         pSVar14 = UI_UIManager__GetLocale
                                                                             (category.genericMethod,
                                                                              subCategory.genericMethod,
                                                                              "ChatCLErrorsTooltip",
                                                                              (System_String_o *)"",
                                                                              (System_String_o *)"",
                                                                              pMVar12);
                                                         _Stack_a0 = (_union_233249)0x44511bd;
                                                         UI_ElementFactory__CreateToggleSetting
                                                                   (pUVar6,__this_06.genericMethod,pSVar7,
                                                                    pSVar11,pSVar14,30.0,30.0,
                                                                    (UnityEngine_Events_UnityAction_o *)0x0,
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
  _Stack_a0 = (_union_233249)0x44511d1;
  il2cpp_runtime_helper_022b2c90();
label_044511d1:
  _Stack_a0 = (_union_233249)0x44511d9;
  il2cpp_runtime_helper_022b2fd0(parent);
  _Stack_c8 = (_union_233249)parent;
  _Stack_c0 = unaff_R12;
  _Stack_b8 = (_union_233249)unaff_R13;
  _Stack_b0 = _Var17;
  _Stack_a8 = unaff_R15;
  _Stack_a0 = unaff_RBP;
  if (g_data_057ae731 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Dark");
    il2cpp_runtime_helper_023445d0(&"Light");
    g_data_057ae731 = '\x01';
  }
  pSVar20 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04451529;
  __this_08 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_00,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
  if (__this_08 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04451529;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&SStack_e0,__this_08,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  unaff_R13 = (MethodInfo **)0x0;
  cVar9 = '\0';
  pSVar20 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
            SStack_e0.fields._dictionary;
  do {
    while (in_stack_fffffffffffffeff = cVar9, _Var17 = (_union_233249)unaff_R13,
          __this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      while( true ) {
        while( true ) {
          __this_02.fields._version._3_1_ = in_stack_fffffffffffffeff;
          __this_02.fields._0_15_ = in_stack_fffffffffffffef0;
          __this_02.fields._currentKey = (Il2CppObject *)pSVar20;
          bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_02,(MethodInfo_3251B20 *)&stack0xffffffffffffff00);
          if ((char)bVar10 == '\0') goto label_04451496;
          bVar10 = System_String__op_Equality
                             ((System_String_o *)SStack_e0.fields._currentKey,"Light",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') break;
          unaff_R13 = (MethodInfo **)0x1;
        }
        bVar10 = System_String__op_Equality
                           ((System_String_o *)SStack_e0.fields._currentKey,"Dark",(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        if ((char)bVar10 != '\0') break;
        piVar1 = &(__this_07->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (__this_07->fields)._items;
        if (pSVar8 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04451529;
        }
        uVar3 = (__this_07->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (__this_07->fields)._size = uVar3 + 1;
          pSVar8->m_Items[(int)uVar3] = SStack_e0.fields._currentKey;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar3,SStack_e0.fields._currentKey);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,SStack_e0.fields._currentKey,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
      cVar9 = '\x01';
    }
    do {
      unaff_R13 = (MethodInfo **)_Var17;
      __this_01.fields._version._3_1_ = in_stack_fffffffffffffeff;
      __this_01.fields._0_15_ = in_stack_fffffffffffffef0;
      __this_01.fields._currentKey = (Il2CppObject *)pSVar20;
      bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                         (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff00);
      if ((char)bVar10 == '\0') {
label_04451496:
        __this_03.fields._version._3_1_ = in_stack_fffffffffffffeff;
        __this_03.fields._0_15_ = in_stack_fffffffffffffef0;
        __this_03.fields._currentKey = (Il2CppObject *)pSVar20;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff00);
        goto label_044514aa;
      }
      bVar10 = System_String__op_Equality
                         ((System_String_o *)SStack_e0.fields._currentKey,"Light",(MethodInfo *)0x0);
      _Var17 = (_union_233249)0x1;
    } while ((char)bVar10 != '\0');
    bVar10 = System_String__op_Equality
                       ((System_String_o *)SStack_e0.fields._currentKey,"Dark",(MethodInfo *)0x0);
    cVar9 = '\x01';
  } while ((char)bVar10 != '\0');
  do {
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ != 1) {
label_044515b6:
      __this_05.fields._version._3_1_ = in_stack_fffffffffffffeff;
      __this_05.fields._0_15_ = in_stack_fffffffffffffef0;
      __this_05.fields._currentKey = (Il2CppObject *)pSVar20;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff00);
      _Unwind_Resume(auVar19._0_8_);
    }
    plVar15 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar4 = *plVar15;
    __cxa_end_catch();
    __this_04.fields._version._3_1_ = in_stack_fffffffffffffeff;
    __this_04.fields._0_15_ = in_stack_fffffffffffffef0;
    __this_04.fields._currentKey = (Il2CppObject *)pSVar20;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff00);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_044515b6;
    }
label_044514aa:
    if (in_stack_fffffffffffffeff == '\0') {
label_044514d4:
      if ((char)unaff_R13 == '\0') {
        if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) goto label_04451503;
      }
      else if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___Insert(__this_07,0,(Il2CppObject *)"Light",MethodInfo_Void_Insert)
        ;
label_04451503:
        System_Collections_Generic_List_object___ToArray(__this_07,MethodInfo_String_ToArray);
        return;
      }
    }
    else if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Insert(__this_07,0,(Il2CppObject *)"Dark",MethodInfo_Void_Insert);
      goto label_044514d4;
    }
label_04451529:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// UI.SettingsUIPanel$$.ctor
// il2cpp: void UI_SettingsUIPanel___ctor (UI_SettingsUIPanel_o* __this, const MethodInfo* method);
// 0x44515f0

void UI_SettingsUIPanel___ctor(UI_SettingsUIPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


