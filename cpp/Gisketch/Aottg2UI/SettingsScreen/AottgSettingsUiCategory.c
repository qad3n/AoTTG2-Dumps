// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsUiCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x18239a7e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ui");
    Il2CppMethodInitialized_184347b3a = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups((MethodInfo *)0x0);
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual
            (content,&local_28,"ui",groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18239d330

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups (const MethodInfo* method);
// 0x18239a850
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239b12e: mov r9, r12
// asm:   0x18239b1b0: mov r9, r12
// asm:   0x18239b235: mov r9, r12
// asm:   0x18239b2ba: mov r9, r12
// asm:   0x18239b33f: mov r9, r12
// asm:   0x18239b3c4: mov r9, r12
// asm:   0x18239b4bc: mov r14, r12
// asm:   0x18239b5db: mov r9, r14
// asm:   0x18239b65d: mov r9, r14
// asm:   0x18239b6e6: mov r9, r14
// asm:   0x18239b772: mov r9, r14
// asm:   0x18239b7fe: mov r9, r14
// asm:   0x18239b883: mov r9, r14
// asm:   0x18239b908: mov r9, r14
// asm:   0x18239b98d: mov r9, r14
// asm:   0x18239c199: mov r14, r12
// asm:   0x18239c250: mov r9, r12
// asm:   0x18239c2d5: mov r9, r12
// asm:   0x18239c35a: mov r9, r12
// asm:   0x18239c453: mov r14, r12
// asm:   0x18239c5ae: mov r9, r14
// asm:   0x18239c630: mov r9, r14
// asm:   0x18239c6b5: mov r9, r14
// asm:   0x18239c73a: mov r9, r14
// asm:   0x18239c7bc: mov r9, r14
// asm:   0x18239c9b9: mov r9, r12
// asm:   0x18239ca47: mov r9, r12
// asm:   0x18239cacc: mov r9, r12
// asm:   0x18239cb51: mov r9, r12
// asm:   0x18239cbd6: mov r9, r12
// asm:   0x18239cc5b: mov r9, r12
// asm:   0x18239cce0: mov r9, r12
// asm:   0x18239cdcd: mov r9, r12
// asm:   0x18239ce62: mov r9, r12
// asm:   0x18239ceee: mov r9, r12
// asm:   0x18239cf7a: mov r9, r12

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups(MethodInfo *method)

{
  Settings_UISettings_o *settings;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar7;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar11;
  System_String_array *pSVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *obj;
  Settings_FloatSetting_o *pSVar13;
  Settings_IntSetting_o *pSVar14;
  Settings_IntSetting_o *pSVar15;
  Settings_StringSetting_o *pSVar16;
  Settings_ColorSetting_o *pSVar17;
  Settings_ColorSetting_o *pSVar18;
  Settings_FloatSetting_o *setting;
  Settings_ToggleColorSetting_o *pSVar19;
  Settings_StringSetting_o *setting_00;
  Settings_BoolSetting_o *method_00;
  
  if (Il2CppMethodInitialized_184347b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Feed console");
    il2cpp_codegen_initialize_runtime_metadata(&"UIScale");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedCountTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Crosshair arrows");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairStyle");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-speedometer");
    il2cpp_codegen_initialize_runtime_metadata(&"Show popup on song change");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowCrosshairArrows");
    il2cpp_codegen_initialize_runtime_metadata(&"FeedConsoleTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-max-name-length");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-master-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Damage");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-theme-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-min-name-length");
    il2cpp_codegen_initialize_runtime_metadata(&"Show names");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedCount");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kill-feed-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"FeedConsole");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-names");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-name-background-type");
    il2cpp_codegen_initialize_runtime_metadata(&"KillScoreScale");
    il2cpp_codegen_initialize_runtime_metadata(&"Crosshair distance");
    il2cpp_codegen_initialize_runtime_metadata(&"JoinNotifications");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceNameColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Crosshair style");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-style");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowSongPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-coordinates");
    il2cpp_codegen_initialize_runtime_metadata(&"Human name distance");
    il2cpp_codegen_initialize_runtime_metadata(&"Theme / Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Show ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Others");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-chat-timestamp");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowGameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-stylebar");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-force-background-color");
    il2cpp_codegen_initialize_runtime_metadata(&"JoinNotificationsTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-scroll-sensitivity");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowEmotes");
    il2cpp_codegen_initialize_runtime_metadata(&"MinNameLength");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-background-color");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat width");
    il2cpp_codegen_initialize_runtime_metadata(&"UI scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill feed count");
    il2cpp_codegen_initialize_runtime_metadata(&"Show stylebar");
    il2cpp_codegen_initialize_runtime_metadata(&"Plus");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-song-popup");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-text-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat scroll sensitivity");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-human-name-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanNameDistanceTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowChatTimestamp");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-name-override-target");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"NameBackgroundType");
    il2cpp_codegen_initialize_runtime_metadata(&"Square");
    il2cpp_codegen_initialize_runtime_metadata(&"Crosshair");
    il2cpp_codegen_initialize_runtime_metadata(&"NameOverrideTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill score scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-force-name-color");
    il2cpp_codegen_initialize_runtime_metadata(&"Name Visibility");
    il2cpp_codegen_initialize_runtime_metadata(&"Max name length");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-crosshair-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowStylebar");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-interpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"Dot");
    il2cpp_codegen_initialize_runtime_metadata(&"Mine");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat height");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-game-time");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeMainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-height");
    il2cpp_codegen_initialize_runtime_metadata(&"Game feed");
    il2cpp_codegen_initialize_runtime_metadata(&"Name background color");
    il2cpp_codegen_initialize_runtime_metadata(&"Outline");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanNameDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Join notifications");
    il2cpp_codegen_initialize_runtime_metadata(&"Crosshair text");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kdr");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat timestamp");
    il2cpp_codegen_initialize_runtime_metadata(&"GameFeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat font size");
    il2cpp_codegen_initialize_runtime_metadata(&"HUD / Feed");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat background color");
    il2cpp_codegen_initialize_runtime_metadata(&"Name style");
    il2cpp_codegen_initialize_runtime_metadata(&"HUDScale");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeLoadscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"Show emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap");
    il2cpp_codegen_initialize_runtime_metadata(&"Min name length");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-hud-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowHealthbars");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-font-size");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-width");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-minimap-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Speedometer");
    il2cpp_codegen_initialize_runtime_metadata(&"Crosshair skin");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatCLErrors");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom right");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-ping");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowPing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-crosshair-arrows");
    il2cpp_codegen_initialize_runtime_metadata(&"Coordinates");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-healthbars");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-game-feed");
    il2cpp_codegen_initialize_runtime_metadata(&"KDR");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairScale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowNames");
    il2cpp_codegen_initialize_runtime_metadata(&"Stylebar scale");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeLoadscreenTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kill-feed-count");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxNameLength");
    il2cpp_codegen_initialize_runtime_metadata(&"GameFeedTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-stylebar-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowCrosshairDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapScale");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"StylebarScale");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairTextScale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInterpolationTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedScale");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill feed scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-hud-feed");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Crosshair scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Fade loadscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"Show interpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"Name style target");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-feed-console");
    il2cpp_codegen_initialize_runtime_metadata(&"HUD scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-name-visibility");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatFontSize");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatScrollSensitivity");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeMainMenuTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-fade-loadscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInterpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"Fade main menu");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-skin");
    il2cpp_codegen_initialize_runtime_metadata(&"Force name color");
    il2cpp_codegen_initialize_runtime_metadata(&"Show game time");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat CL errors");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-fade-main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-join-notifications");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-cl-errors");
    il2cpp_codegen_initialize_runtime_metadata(&"Show healthbars");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kill-score-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatCLErrorsTooltip");
    Il2CppMethodInitialized_184347b3b = '\x01';
  }
  settings = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  pGVar7 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,6);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7);
  pIVar9 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Theme(settings,(MethodInfo *)0x0);
  if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_18239d04b;
  if ((pIVar9 != (Il2CppObject *)0x0) &&
     (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
     pIVar10 == (Il2CppObject *)0x0)) {
    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
  }
  if ((int)pGVar8->max_length != 0) {
    pGVar8->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
    Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
    pSVar3 = "Theme / Scale";
    pSVar2 = "settings-ui-theme-scale";
    setting = (Settings_FloatSetting_o *)0x0;
    pSVar13 = setting;
    if (settings != (Settings_UISettings_o *)0x0) {
      pSVar13 = (settings->fields).UIMasterScale;
    }
    pIVar9 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-ui-master-scale","UI","UIScale",pSVar13,
                        "UI scale",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
       pIVar10 == (Il2CppObject *)0x0)) {
      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
    }
    if (1 < (uint)pGVar8->max_length) {
      pGVar8->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
      Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9);
      pSVar13 = setting;
      if (settings != (Settings_UISettings_o *)0x0) {
        pSVar13 = (settings->fields).HUDScale;
      }
      pIVar9 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                         ("settings-ui-hud-scale","UI","HUDScale",pSVar13,
                          "HUD scale",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
         pIVar10 == (Il2CppObject *)0x0)) {
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if (2 < (uint)pGVar8->max_length) {
        pGVar8->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
        Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9);
        pSVar13 = setting;
        if (settings != (Settings_UISettings_o *)0x0) {
          pSVar13 = (settings->fields).MinimapScale;
        }
        pIVar9 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                           ("settings-ui-minimap-scale","UI","MinimapScale",pSVar13,
                            "Minimap scale",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
        if ((pIVar9 != (Il2CppObject *)0x0) &&
           (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
           pIVar10 == (Il2CppObject *)0x0)) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
        if (3 < (uint)pGVar8->max_length) {
          pGVar8->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
          Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9);
          pSVar13 = setting;
          if (settings != (Settings_UISettings_o *)0x0) {
            pSVar13 = (settings->fields).StylebarScale;
          }
          pIVar9 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                             ("settings-ui-stylebar-scale","UI","StylebarScale",pSVar13,
                              "Stylebar scale",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
             pIVar10 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if (4 < (uint)pGVar8->max_length) {
            pGVar8->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
            Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 4,pIVar9);
            pSVar13 = setting;
            if (settings != (Settings_UISettings_o *)0x0) {
              pSVar13 = (settings->fields).KillScoreScale;
            }
            pIVar9 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                               ("settings-ui-kill-score-scale","UI","KillScoreScale",pSVar13,
                                "Kill score scale",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
               pIVar10 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if (5 < (uint)pGVar8->max_length) {
              pGVar8->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
              Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 5,pIVar9);
              pSVar13 = setting;
              if (settings != (Settings_UISettings_o *)0x0) {
                pSVar13 = (settings->fields).KillFeedScale;
              }
              pIVar9 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                 ("settings-ui-kill-feed-scale","UI","KillFeedScale",pSVar13,
                                  "Kill feed scale",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
              if ((pIVar9 != (Il2CppObject *)0x0) &&
                 (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                 pIVar10 == (Il2CppObject *)0x0)) {
                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
              }
              if (6 < (uint)pGVar8->max_length) {
                pGVar8->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 6,pIVar9);
                pGVar11 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
                Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                          (pGVar11,pSVar2,pSVar3,pGVar8,(MethodInfo *)0x0);
                if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_18239d04b:
                  ThrowNullReferenceException();
                }
                if ((int)pGVar7->max_length != 0) {
                  pGVar7->m_Items[0] = pGVar11;
                  Il2CppCodeGenWriteBarrier(pGVar7->m_Items,pGVar11);
                  pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,10);
                  pSVar5 = "settings-ui-kdr";
                  pSVar6 = "settings-ui-hud-feed";
                  pSVar4 = "KDR";
                  pSVar3 = "UI";
                  pSVar2 = "HUD / Feed";
                  if (settings != (Settings_UISettings_o *)0x0) {
                    setting = (Settings_FloatSetting_o *)(settings->fields).KDR;
                  }
                  pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
                  pSVar1 = "Off";
                  if (pSVar12 == (System_String_array *)0x0) goto label_18239d04b;
                  if ((int)pSVar12->max_length != 0) {
                    pSVar12->m_Items[0] = "Off";
                    Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                    pSVar1 = "Mine";
                    if (1 < (uint)pSVar12->max_length) {
                      pSVar12->m_Items[1] = "Mine";
                      Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,pSVar1);
                      pSVar1 = "All";
                      if (2 < (uint)pSVar12->max_length) {
                        pSVar12->m_Items[2] = "All";
                        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 2,pSVar1);
                        pIVar9 = (Il2CppObject *)
                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                           (pSVar5,pSVar3,pSVar4,(Settings_IntSetting_o *)setting,
                                            "KDR",pSVar12,(System_String_o *)0x0,
                                            (System_String_o *)0x0,
                                            (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                        if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_18239d04b;
                        if ((pIVar9 != (Il2CppObject *)0x0) &&
                           (pIVar10 = il2cpp_vm_Object_IsInst
                                                (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                           pIVar10 == (Il2CppObject *)0x0)) {
                          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                        }
                        if ((int)pGVar8->max_length != 0) {
                          pGVar8->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                          Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
                          pSVar15 = (Settings_IntSetting_o *)0x0;
                          pSVar14 = pSVar15;
                          if (settings != (Settings_UISettings_o *)0x0) {
                            pSVar14 = (Settings_IntSetting_o *)(settings->fields).ShowStylebar;
                          }
                          pIVar9 = (Il2CppObject *)
                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                             ("settings-ui-show-stylebar","UI",
                                              "ShowStylebar",(Settings_BoolSetting_o *)pSVar14,
                                              "Show stylebar",(System_String_o *)0x0,
                                              (System_String_o *)0x0,
                                              (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0)
                          ;
                          if ((pIVar9 != (Il2CppObject *)0x0) &&
                             (pIVar10 = il2cpp_vm_Object_IsInst
                                                  (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                             pIVar10 == (Il2CppObject *)0x0)) {
                            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                          }
                          if (1 < (uint)pGVar8->max_length) {
                            pGVar8->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                            Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9);
                            pSVar14 = pSVar15;
                            if (settings != (Settings_UISettings_o *)0x0) {
                              pSVar14 = (Settings_IntSetting_o *)(settings->fields).GameFeed;
                            }
                            pIVar9 = (Il2CppObject *)
                                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                               ("settings-ui-game-feed","UI",
                                                "GameFeed",(Settings_BoolSetting_o *)pSVar14,
                                                "Game feed","GameFeedTooltip",
                                                (System_String_o *)0x0,
                                                (System_Action_GisketchActionContext__o *)0x0,
                                                (MethodInfo *)0x0);
                            if ((pIVar9 != (Il2CppObject *)0x0) &&
                               (pIVar10 = il2cpp_vm_Object_IsInst
                                                    (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                               pIVar10 == (Il2CppObject *)0x0)) {
                              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                            }
                            if (2 < (uint)pGVar8->max_length) {
                              pGVar8->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                              Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9);
                              pSVar14 = pSVar15;
                              if (settings != (Settings_UISettings_o *)0x0) {
                                pSVar14 = (Settings_IntSetting_o *)(settings->fields).FeedConsole;
                              }
                              pIVar9 = (Il2CppObject *)
                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                 ("settings-ui-feed-console","UI",
                                                  "FeedConsole",(Settings_BoolSetting_o *)pSVar14,
                                                  "Feed console","FeedConsoleTooltip",
                                                  (System_String_o *)0x0,
                                                  (System_Action_GisketchActionContext__o *)0x0,
                                                  (MethodInfo *)0x0);
                              if ((pIVar9 != (Il2CppObject *)0x0) &&
                                 (pIVar10 = il2cpp_vm_Object_IsInst
                                                      (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                                 pIVar10 == (Il2CppObject *)0x0)) {
                                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                              }
                              if (3 < (uint)pGVar8->max_length) {
                                pGVar8->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9);
                                pSVar14 = pSVar15;
                                if (settings != (Settings_UISettings_o *)0x0) {
                                  pSVar14 = (Settings_IntSetting_o *)(settings->fields).JoinNotifications;
                                }
                                pIVar9 = (Il2CppObject *)
                                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                   ("settings-ui-join-notifications","UI",
                                                    "JoinNotifications",(Settings_BoolSetting_o *)pSVar14,
                                                    "Join notifications","JoinNotificationsTooltip",
                                                    (System_String_o *)0x0,
                                                    (System_Action_GisketchActionContext__o *)0x0,
                                                    (MethodInfo *)0x0);
                                if ((pIVar9 != (Il2CppObject *)0x0) &&
                                   (pIVar10 = il2cpp_vm_Object_IsInst
                                                        (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                                   pIVar10 == (Il2CppObject *)0x0)) {
                                  pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                }
                                if (4 < (uint)pGVar8->max_length) {
                                  pGVar8->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                  Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 4,pIVar9);
                                  pSVar14 = pSVar15;
                                  if (settings != (Settings_UISettings_o *)0x0) {
                                    pSVar14 = (Settings_IntSetting_o *)(settings->fields).ShowPing;
                                  }
                                  pIVar9 = (Il2CppObject *)
                                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                     ("settings-ui-show-ping","UI",
                                                      "ShowPing",(Settings_BoolSetting_o *)pSVar14,
                                                      "Show ping",(System_String_o *)0x0,
                                                      (System_String_o *)0x0,
                                                      (System_Action_GisketchActionContext__o *)0x0,
                                                      (MethodInfo *)0x0);
                                  if ((pIVar9 != (Il2CppObject *)0x0) &&
                                     (pIVar10 = il2cpp_vm_Object_IsInst
                                                          (pIVar9,(((pGVar8->obj).klass)->_1).element_class),
                                     pIVar10 == (Il2CppObject *)0x0)) {
                                    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                  }
                                  if (5 < (uint)pGVar8->max_length) {
                                    pGVar8->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                    Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 5,pIVar9);
                                    pSVar14 = pSVar15;
                                    if (settings != (Settings_UISettings_o *)0x0) {
                                      pSVar14 = (Settings_IntSetting_o *)(settings->fields).ShowGameTime;
                                    }
                                    pIVar9 = (Il2CppObject *)
                                             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                       ("settings-ui-show-game-time","UI",
                                                        "ShowGameTime",
                                                        (Settings_BoolSetting_o *)pSVar14,
                                                        "Show game time",(System_String_o *)0x0,
                                                        (System_String_o *)0x0,
                                                        (System_Action_GisketchActionContext__o *)0x0,
                                                        (MethodInfo *)0x0);
                                    if ((pIVar9 != (Il2CppObject *)0x0) &&
                                       (pIVar10 = il2cpp_vm_Object_IsInst
                                                            (pIVar9,(((pGVar8->obj).klass)->_1).element_class)
                                       , pIVar10 == (Il2CppObject *)0x0)) {
                                      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                    }
                                    if (6 < (uint)pGVar8->max_length) {
                                      pGVar8->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                      Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 6,pIVar9);
                                      pSVar14 = pSVar15;
                                      if (settings != (Settings_UISettings_o *)0x0) {
                                        pSVar14 = (Settings_IntSetting_o *)(settings->fields).ShowSongPopup;
                                      }
                                      pIVar9 = (Il2CppObject *)
                                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                         ("settings-ui-show-song-popup","UI",
                                                          "ShowSongPopup",
                                                          (Settings_BoolSetting_o *)pSVar14,
                                                          "Show popup on song change",(System_String_o *)0x0,
                                                          (System_String_o *)0x0,
                                                          (System_Action_GisketchActionContext__o *)0x0,
                                                          (MethodInfo *)0x0);
                                      if ((pIVar9 != (Il2CppObject *)0x0) &&
                                         (pIVar10 = il2cpp_vm_Object_IsInst
                                                              (pIVar9,(((pGVar8->obj).klass)->_1).
                                                                      element_class),
                                         pIVar10 == (Il2CppObject *)0x0)) {
                                        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                      }
                                      if (7 < (uint)pGVar8->max_length) {
                                        pGVar8->m_Items[7] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9
                                        ;
                                        Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 7,pIVar9);
                                        pSVar14 = pSVar15;
                                        if (settings != (Settings_UISettings_o *)0x0) {
                                          pSVar14 = (Settings_IntSetting_o *)(settings->fields).ShowEmotes;
                                        }
                                        pIVar9 = (Il2CppObject *)
                                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                           ("settings-ui-show-emotes","UI",
                                                            "ShowEmotes",
                                                            (Settings_BoolSetting_o *)pSVar14,
                                                            "Show emotes",(System_String_o *)0x0,
                                                            (System_String_o *)0x0,
                                                            (System_Action_GisketchActionContext__o *)0x0,
                                                            (MethodInfo *)0x0);
                                        if ((pIVar9 != (Il2CppObject *)0x0) &&
                                           (pIVar10 = il2cpp_vm_Object_IsInst
                                                                (pIVar9,(((pGVar8->obj).klass)->_1).
                                                                        element_class),
                                           pIVar10 == (Il2CppObject *)0x0)) {
                                          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                        }
                                        if (8 < (uint)pGVar8->max_length) {
                                          pGVar8->m_Items[8] =
                                               (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                          Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 8,pIVar9);
                                          pSVar5 = "settings-ui-coordinates";
                                          pSVar4 = "UI";
                                          pSVar3 = "Coordinates";
                                          if (settings != (Settings_UISettings_o *)0x0) {
                                            pSVar15 = (settings->fields).Coordinates;
                                          }
                                          pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3)
                                          ;
                                          pSVar1 = "Off";
                                          if (pSVar12 == (System_String_array *)0x0) goto label_18239d04b;
                                          if ((int)pSVar12->max_length != 0) {
                                            pSVar12->m_Items[0] = "Off";
                                            Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                                            pSVar1 = "Minimap";
                                            if (1 < (uint)pSVar12->max_length) {
                                              pSVar12->m_Items[1] = "Minimap";
                                              Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,pSVar1);
                                              pSVar1 = "Bottom right";
                                              if (2 < (uint)pSVar12->max_length) {
                                                pSVar12->m_Items[2] = "Bottom right";
                                                Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 2,pSVar1);
                                                pIVar9 = (Il2CppObject *)
                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar5,pSVar4,pSVar3,pSVar15,
                                                                  "Coordinates",pSVar12,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                   (pIVar10 = il2cpp_vm_Object_IsInst
                                                                        (pIVar9,(((pGVar8->obj).klass)->_1).
                                                                                element_class),
                                                   pIVar10 == (Il2CppObject *)0x0)) {
                                                  pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                  il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                                }
                                                if (9 < (uint)pGVar8->max_length) {
                                                  pGVar8->m_Items[9] =
                                                       (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                                  Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 9,pIVar9);
                                                  pGVar11 = il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                                                                                              
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                            (pGVar11,pSVar6,pSVar2,pGVar8,(MethodInfo *)0x0);
                                                  if (1 < (uint)pGVar7->max_length) {
                                                    pGVar7->m_Items[1] = pGVar11;
                                                    Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1,pGVar11);
                                                    pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                             SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,9)
                                                    ;
                                                    pSVar5 = "settings-ui-show-names";
                                                    pSVar6 = "settings-ui-name-visibility";
                                                    pSVar4 = "ShowNames";
                                                    pSVar3 = "Name Visibility";
                                                    pSVar2 = "UI";
                                                    if (settings == (Settings_UISettings_o *)0x0) {
                                                      pSVar15 = (Settings_IntSetting_o *)0x0;
                                                    }
                                                    else {
                                                      pSVar15 = (settings->fields).ShowNames;
                                                    }
                                                    pSVar12 = (System_String_array *)
                                                              SZArrayNew(TypeInfo_string_array,4);
                                                    pSVar1 = "All";
                                                    if (pSVar12 == (System_String_array *)0x0)
                                                    goto label_18239d04b;
                                                    if ((int)pSVar12->max_length != 0) {
                                                      pSVar12->m_Items[0] = "All";
                                                      Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                                                      pSVar1 = "Mine";
                                                      if (1 < (uint)pSVar12->max_length) {
                                                        pSVar12->m_Items[1] = "Mine";
                                                        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,pSVar1)
                                                        ;
                                                        pSVar1 = "Others";
                                                        if (2 < (uint)pSVar12->max_length) {
                                                          pSVar12->m_Items[2] = "Others";
                                                          Il2CppCodeGenWriteBarrier
                                                                    (pSVar12->m_Items + 2,pSVar1);
                                                          pSVar1 = "None";
                                                          if (3 < (uint)pSVar12->max_length) {
                                                            pSVar12->m_Items[3] = "None";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar12->m_Items + 3,pSVar1);
                                                            pIVar9 = (Il2CppObject *)
                                                                                                                                          
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar5,pSVar2,pSVar4,pSVar15,
                                                                  "Show names",pSVar12,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar8 == (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       goto label_18239d04b;
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar8->max_length != 0) {
                                                         pGVar8->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
                                                         pSVar5 = "settings-ui-show-healthbars";
                                                         pSVar4 = "ShowHealthbars";
                                                         pSVar2 = "UI";
                                                         if (settings == (Settings_UISettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar15 = (settings->fields).ShowHealthbars;
                                                         }
                                                         pSVar12 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,4);
                                                         pSVar1 = "All";
                                                         if (pSVar12 == (System_String_array *)0x0)
                                                         goto label_18239d04b;
                                                         if ((int)pSVar12->max_length != 0) {
                                                           pSVar12->m_Items[0] = "All";
                                                           Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                                                           pSVar1 = "Mine";
                                                           if (1 < (uint)pSVar12->max_length) {
                                                             pSVar12->m_Items[1] = "Mine";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar12->m_Items + 1,pSVar1);
                                                             pSVar1 = "Others";
                                                             if (2 < (uint)pSVar12->max_length) {
                                                               pSVar12->m_Items[2] = "Others";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar12->m_Items + 2,pSVar1);
                                                               pSVar1 = "None";
                                                               if (3 < (uint)pSVar12->max_length) {
                                                                 pSVar12->m_Items[3] = "None";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar12->m_Items + 3,pSVar1);
                                                                 pIVar9 = (Il2CppObject *)
                                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar5,pSVar2,pSVar4,pSVar15,
                                                                  "Show healthbars",pSVar12,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9)
                                                         ;
                                                         if (settings == (Settings_UISettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar15 = (settings->fields).HumanNameDistance;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-human-name-distance","UI",
                                                                  "HumanNameDistance",pSVar15,
                                                                  "Human name distance","HumanNameDistanceTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9)
                                                         ;
                                                         pSVar5 = "settings-ui-name-override-target";
                                                         pSVar4 = "NameOverrideTarget";
                                                         pSVar2 = "UI";
                                                         if (settings == (Settings_UISettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar15 = (settings->fields).NameOverrideTarget;
                                                         }
                                                         pSVar12 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,4);
                                                         pSVar1 = "All";
                                                         if (pSVar12 == (System_String_array *)0x0)
                                                         goto label_18239d04b;
                                                         if ((int)pSVar12->max_length != 0) {
                                                           pSVar12->m_Items[0] = "All";
                                                           Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                                                           pSVar1 = "Mine";
                                                           if (1 < (uint)pSVar12->max_length) {
                                                             pSVar12->m_Items[1] = "Mine";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar12->m_Items + 1,pSVar1);
                                                             pSVar1 = "Others";
                                                             if (2 < (uint)pSVar12->max_length) {
                                                               pSVar12->m_Items[2] = "Others";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar12->m_Items + 2,pSVar1);
                                                               pSVar1 = "None";
                                                               if (3 < (uint)pSVar12->max_length) {
                                                                 pSVar12->m_Items[3] = "None";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar12->m_Items + 3,pSVar1);
                                                                 pIVar9 = (Il2CppObject *)
                                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar5,pSVar2,pSVar4,pSVar15,
                                                                  "Name style target",pSVar12,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9)
                                                         ;
                                                         pSVar5 = "settings-ui-name-background-type";
                                                         pSVar4 = "NameBackgroundType";
                                                         pSVar2 = "UI";
                                                         if (settings == (Settings_UISettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar15 = (settings->fields).NameBackgroundType;
                                                         }
                                                         pSVar12 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,3);
                                                         pSVar1 = "Off";
                                                         if (pSVar12 == (System_String_array *)0x0)
                                                         goto label_18239d04b;
                                                         if ((int)pSVar12->max_length != 0) {
                                                           pSVar12->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                                                           pSVar1 = "Outline";
                                                           if (1 < (uint)pSVar12->max_length) {
                                                             pSVar12->m_Items[1] = "Outline";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar12->m_Items + 1,pSVar1);
                                                             pSVar1 = "Background";
                                                             if (2 < (uint)pSVar12->max_length) {
                                                               pSVar12->m_Items[2] = "Background";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar12->m_Items + 2,pSVar1);
                                                               pIVar9 = (Il2CppObject *)
                                                                                                                                                
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar5,pSVar2,pSVar4,pSVar15,
                                                                  "Name style",pSVar12,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (4 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[4] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 4,pIVar9)
                                                         ;
                                                         pSVar1 = "ForceNameColor";
                                                         pSVar5 = "Force name color";
                                                         pSVar4 = "settings-ui-force-name-color";
                                                         pSVar2 = "UI";
                                                         if (settings == (Settings_UISettings_o *)0x0) {
                                                           pSVar19 = (Settings_ToggleColorSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar19 = (settings->fields).ForceNameColor;
                                                         }
                                                         if (Il2CppMethodInitialized_184347b03 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter
                                                       );
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter
                                                       );
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow
                                                       );
                                                       Il2CppMethodInitialized_184347b03 = '\x01';
                                                       }
                                                       if (pSVar19 == (Settings_ToggleColorSetting_o *)0x0) {
                                                         method_00 = (Settings_BoolSetting_o *)0x0;
                                                       }
                                                       else {
                                                         method_00 = (pSVar19->fields).Enabled;
                                                       }
                                                       __this = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
                                                                 ((Unity_Burst_BurstCompiler_FakeDelegate_o *)
                                                                  __this,(System_Reflection_MethodInfo_o *)
                                                                         method_00,(MethodInfo *)0x0);
                                                       value = 
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                                                                 (pSVar4,pSVar2,pSVar1,pSVar5,6,
                                                                  (
                                                       Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o
                                                       *)__this,(System_String_o *)0x0,(System_String_o *)0x0,
                                                       (System_Action_GisketchActionContext__o *)0x0,true,
                                                       (MethodInfo *)0x0);
                                                       pSVar18 = (Settings_ColorSetting_o *)0x0;
                                                       pSVar17 = pSVar18;
                                                       if (pSVar19 != (Settings_ToggleColorSetting_o *)0x0) {
                                                         pSVar17 = (pSVar19->fields).Color;
                                                       }
                                                       __this_00 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor
                                                                 ((Unity_Burst_BurstCompiler_FakeDelegate_o *)
                                                                  __this_00,
                                                                  (System_Reflection_MethodInfo_o *)pSVar17,
                                                                  (MethodInfo *)0x0);
                                                       if (value == (
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o
                                                       *)0x0) {
label_18239d311:
                                                         ThrowNullReferenceException();
                                                       }
                                                       (value->fields).SecondaryAdapter =
                                                            (
                                                       Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o
                                                       *)__this_00;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(value->fields).SecondaryAdapter,__this_00)
                                                       ;
                                                       obj = il2cpp_codegen_object_new
                                                                       ((Il2CppClass *)
                                                                                                                                                
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow
                                                       );
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                                                                 ((
                                                       UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)obj,
                                                       (MethodInfo *)0x0);
                                                       (obj->fields)._descriptor = value;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(obj->fields)._descriptor,value);
                                                       pIVar9 = il2cpp_vm_Object_IsInst
                                                                          ((Il2CppObject *)obj,
                                                                           (((pGVar8->obj).klass)->_1).
                                                                           element_class);
                                                       if (pIVar9 == (Il2CppObject *)0x0) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (5 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[5] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)obj;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 5,obj);
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (settings->fields).ForceBackgroundColor;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
                                                                 ("settings-ui-force-background-color","UI",
                                                                  "ForceBackgroundColor",pSVar17,
                                                                  "Name background color",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (6 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[6] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 6,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).MinNameLength;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-min-name-length","UI",
                                                                  "MinNameLength",
                                                                  (Settings_IntSetting_o *)pSVar17,
                                                                  "Min name length",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (7 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[7] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 7,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).MaxNameLength;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-max-name-length","UI",
                                                                  "MaxNameLength",
                                                                  (Settings_IntSetting_o *)pSVar17,
                                                                  "Max name length",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (8 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[8] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 8,pIVar9)
                                                         ;
                                                         pGVar11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar11,pSVar6,pSVar3,pGVar8,
                                                                  (MethodInfo *)0x0);
                                                       if (2 < (uint)pGVar7->max_length) {
                                                         pGVar7->m_Items[2] = pGVar11;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar7->m_Items + 2,pGVar11);
                                                         pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array
                                                                   *)SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7)
                                                       ;
                                                       pSVar5 = "settings-ui-crosshair-style";
                                                       pSVar6 = "settings-ui-crosshair";
                                                       pSVar4 = "CrosshairStyle";
                                                       pSVar3 = "Crosshair";
                                                       pSVar2 = "UI";
                                                       if (settings != (Settings_UISettings_o *)0x0) {
                                                         pSVar18 = (Settings_ColorSetting_o *)
                                                                   (settings->fields).CrosshairStyle;
                                                       }
                                                       pSVar12 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,5);
                                                       pSVar1 = "Default";
                                                       if (pSVar12 == (System_String_array *)0x0)
                                                       goto label_18239d311;
                                                       if ((int)pSVar12->max_length != 0) {
                                                         pSVar12->m_Items[0] = "Default";
                                                         Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                                                         pSVar1 = "Square";
                                                         if (1 < (uint)pSVar12->max_length) {
                                                           pSVar12->m_Items[1] = "Square";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar12->m_Items + 1,pSVar1);
                                                           pSVar1 = "Plus";
                                                           if (2 < (uint)pSVar12->max_length) {
                                                             pSVar12->m_Items[2] = "Plus";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar12->m_Items + 2,pSVar1);
                                                             pSVar1 = "Target";
                                                             if (3 < (uint)pSVar12->max_length) {
                                                               pSVar12->m_Items[3] = "Target";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar12->m_Items + 3,pSVar1);
                                                               pSVar1 = "Dot";
                                                               if (4 < (uint)pSVar12->max_length) {
                                                                 pSVar12->m_Items[4] = "Dot";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar12->m_Items + 4,pSVar1);
                                                                 pIVar9 = (Il2CppObject *)
                                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                                                 (pSVar5,pSVar2,pSVar4,
                                                                  (Settings_IntSetting_o *)pSVar18,
                                                                  "Crosshair style",pSVar12,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar8 == (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       goto label_18239d311;
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar8->max_length != 0) {
                                                         pGVar8->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
                                                         setting_00 = (Settings_StringSetting_o *)0x0;
                                                         pSVar16 = setting_00;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar16 = (Settings_StringSetting_o *)
                                                                     (settings->fields).CrosshairScale;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                                 ("settings-ui-crosshair-scale","UI",
                                                                  "CrosshairScale",
                                                                  (Settings_FloatSetting_o *)pSVar16,
                                                                  "Crosshair scale",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9)
                                                         ;
                                                         pSVar16 = setting_00;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar16 = (Settings_StringSetting_o *)
                                                                     (settings->fields).CrosshairTextScale;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                                 ("settings-ui-crosshair-text-scale","UI",
                                                                  "CrosshairTextScale",
                                                                  (Settings_FloatSetting_o *)pSVar16,
                                                                  "Crosshair text",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9)
                                                         ;
                                                         pSVar16 = setting_00;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar16 = (Settings_StringSetting_o *)
                                                                     (settings->fields).ShowCrosshairDistance;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-ui-show-crosshair-distance","UI",
                                                                  "ShowCrosshairDistance",
                                                                  (Settings_BoolSetting_o *)pSVar16,
                                                                  "Crosshair distance",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9)
                                                         ;
                                                         pSVar16 = setting_00;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar16 = (Settings_StringSetting_o *)
                                                                     (settings->fields).ShowCrosshairArrows;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-ui-show-crosshair-arrows","UI",
                                                                  "ShowCrosshairArrows",
                                                                  (Settings_BoolSetting_o *)pSVar16,
                                                                  "Crosshair arrows",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (4 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[4] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 4,pIVar9)
                                                         ;
                                                         pSVar16 = setting_00;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar16 = (settings->fields).CrosshairSkin;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391c80
                                                                 ("settings-ui-crosshair-skin","UI",
                                                                  "CrosshairSkin",pSVar16,
                                                                  "Crosshair skin",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (5 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[5] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 5,pIVar9)
                                                         ;
                                                         pSVar5 = "settings-ui-speedometer";
                                                         pSVar4 = "Speedometer";
                                                         pSVar2 = "UI";
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           setting_00 = (Settings_StringSetting_o *)
                                                                        (settings->fields).Speedometer;
                                                         }
                                                         pSVar12 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,3);
                                                         pSVar1 = "Off";
                                                         if (pSVar12 == (System_String_array *)0x0)
                                                         goto label_18239d311;
                                                         if ((int)pSVar12->max_length != 0) {
                                                           pSVar12->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar1);
                                                           pSVar1 = "Speed";
                                                           if (1 < (uint)pSVar12->max_length) {
                                                             pSVar12->m_Items[1] = "Speed";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar12->m_Items + 1,pSVar1);
                                                             pSVar1 = "Damage";
                                                             if (2 < (uint)pSVar12->max_length) {
                                                               pSVar12->m_Items[2] = "Damage";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar12->m_Items + 2,pSVar1);
                                                               pIVar9 = (Il2CppObject *)
                                                                                                                                                
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar5,pSVar2,pSVar4,
                                                                  (Settings_IntSetting_o *)setting_00,
                                                                  "Speedometer",pSVar12,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (6 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[6] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 6,pIVar9)
                                                         ;
                                                         pGVar11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       pSVar18 = (Settings_ColorSetting_o *)0x0;
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar11,pSVar6,pSVar3,pGVar8,
                                                                  (MethodInfo *)0x0);
                                                       if (3 < (uint)pGVar7->max_length) {
                                                         pGVar7->m_Items[3] = pGVar11;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar7->m_Items + 3,pGVar11);
                                                         pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array
                                                                   *)SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7)
                                                       ;
                                                       pSVar3 = "Chat";
                                                       pSVar2 = "settings-ui-chat";
                                                       pSVar17 = pSVar18;
                                                       if (settings != (Settings_UISettings_o *)0x0) {
                                                         pSVar17 = (Settings_ColorSetting_o *)
                                                                   (settings->fields).ShowChatTimestamp;
                                                       }
                                                       pIVar9 = (Il2CppObject *)
                                                                                                                                
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-ui-show-chat-timestamp","UI",
                                                                  "ShowChatTimestamp",
                                                                  (Settings_BoolSetting_o *)pSVar17,
                                                                  "Chat timestamp",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar8 == (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       goto label_18239d311;
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar8->max_length != 0) {
                                                         pGVar8->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).ChatWidth;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-chat-width","UI",
                                                                  "ChatWidth",
                                                                  (Settings_IntSetting_o *)pSVar17,
                                                                  "Chat width",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).ChatHeight;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-chat-height","UI",
                                                                  "ChatHeight",
                                                                  (Settings_IntSetting_o *)pSVar17,
                                                                  "Chat height",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).ChatFontSize;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-chat-font-size","UI",
                                                                  "ChatFontSize",
                                                                  (Settings_IntSetting_o *)pSVar17,
                                                                  "Chat font size",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).ChatScrollSensitivity;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-chat-scroll-sensitivity","UI",
                                                                  "ChatScrollSensitivity",
                                                                  (Settings_IntSetting_o *)pSVar17,
                                                                  "Chat scroll sensitivity",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (4 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[4] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 4,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (settings->fields).ChatBackgroundColor;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
                                                                 ("settings-ui-chat-background-color","UI",
                                                                  "ChatBackgroundColor",pSVar17,
                                                                  "Chat background color",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (5 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[5] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 5,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).ChatCLErrors;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-ui-chat-cl-errors","UI",
                                                                  "ChatCLErrors",
                                                                  (Settings_BoolSetting_o *)pSVar17,
                                                                  "Chat CL errors","ChatCLErrorsTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (6 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[6] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 6,pIVar9)
                                                         ;
                                                         pGVar11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar11,pSVar2,pSVar3,pGVar8,
                                                                  (MethodInfo *)0x0);
                                                       if (4 < (uint)pGVar7->max_length) {
                                                         pGVar7->m_Items[4] = pGVar11;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar7->m_Items + 4,pGVar11);
                                                         pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_array
                                                                   *)SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,4)
                                                       ;
                                                       pSVar3 = "settings-ui-misc";
                                                       pSVar2 = "Misc";
                                                       pSVar17 = pSVar18;
                                                       if (settings != (Settings_UISettings_o *)0x0) {
                                                         pSVar17 = (Settings_ColorSetting_o *)
                                                                   (settings->fields).KillFeedCount;
                                                       }
                                                       pIVar9 = (Il2CppObject *)
                                                                                                                                
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-ui-kill-feed-count","UI",
                                                                  "KillFeedCount",
                                                                  (Settings_IntSetting_o *)pSVar17,
                                                                  "Kill feed count","KillFeedCountTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar8 == (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       goto label_18239d311;
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar8->max_length != 0) {
                                                         pGVar8->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items,pIVar9);
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).FadeMainMenu;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-ui-fade-main-menu","UI",
                                                                  "FadeMainMenu",
                                                                  (Settings_BoolSetting_o *)pSVar17,
                                                                  "Fade main menu","FadeMainMenuTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 1,pIVar9)
                                                         ;
                                                         pSVar17 = pSVar18;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar17 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).FadeLoadscreen;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-ui-fade-loadscreen","UI",
                                                                  "FadeLoadscreen",
                                                                  (Settings_BoolSetting_o *)pSVar17,
                                                                  "Fade loadscreen","FadeLoadscreenTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 2,pIVar9)
                                                         ;
                                                         if (settings != (Settings_UISettings_o *)0x0) {
                                                           pSVar18 = (Settings_ColorSetting_o *)
                                                                     (settings->fields).ShowInterpolation;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-ui-show-interpolation","UI",
                                                                  "ShowInterpolation",
                                                                  (Settings_BoolSetting_o *)pSVar18,
                                                                  "Show interpolation","ShowInterpolationTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar8->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar8->max_length) {
                                                         pGVar8->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar8->m_Items + 3,pIVar9)
                                                         ;
                                                         pGVar11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar11,pSVar3,pSVar2,pGVar8,
                                                                  (MethodInfo *)0x0);
                                                       if (5 < (uint)pGVar7->max_length) {
                                                         pGVar7->m_Items[5] = pGVar11;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar7->m_Items + 5,pGVar11);
                                                         return pGVar7;
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
                                                       ThrowIndexOutOfRangeException();
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
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Theme
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Theme (Settings_UISettings_o* settings, const MethodInfo* method);
// 0x18239d360
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239d400: mov rdi, r12

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Theme
          (Settings_UISettings_o *settings,MethodInfo *method)

{
  System_String_o *label;
  System_String_o *id;
  System_String_o *item;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  System_String_array *values;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  Settings_StringSetting_o *method_01;
  
  if (Il2CppMethodInitialized_184347b3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"RequireRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"Theme");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-theme");
    il2cpp_codegen_initialize_runtime_metadata(&"Requires game restart.");
    il2cpp_codegen_initialize_runtime_metadata(&"UI theme");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    Il2CppMethodInitialized_184347b3c = '\x01';
  }
  item = "Theme";
  id = "settings-ui-theme";
  label = "UI theme";
  pSVar1 = "UI";
  method_01 = (Settings_StringSetting_o *)0x0;
  if (settings != (Settings_UISettings_o *)0x0) {
    method_01 = (settings->fields).UITheme;
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)method_01,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,pSVar1,item,label,2,
                         (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                         (System_String_o *)0x0,(System_String_o *)0x0,
                         (System_Action_GisketchActionContext__o *)0x0,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    Il2CppMethodInitialized_184347b0b = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  values = UI_UIManager__GetUIThemes((MethodInfo *)0x0);
  if ((values == (System_String_array *)0x0) || (values->max_length == 0)) {
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    pSVar1 = "Light";
    if (values == (System_String_array *)0x0) goto label_18239d5eb;
    if ((int)values->max_length == 0) {
label_18239d5f1:
      ThrowIndexOutOfRangeException();
    }
    values->m_Items[0] = "Light";
    Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
    pSVar1 = "Dark";
    if ((uint)values->max_length < 2) goto label_18239d5f1;
    values->m_Items[1] = "Dark";
    Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar1);
  }
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions(values,(MethodInfo *)0x0);
  if (method_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (method_00->fields).Options = value;
    Il2CppCodeGenWriteBarrier(&(method_00->fields).Options,value);
    (method_00->fields).Tooltip = "Requires game restart.";
    Il2CppCodeGenWriteBarrier(&(method_00->fields).Tooltip,"Requires game restart.");
    pSVar1 = "RequireRestart";
    if (Il2CppMethodInitialized_184347b0e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Common.");
      Il2CppMethodInitialized_184347b0e = '\x01';
    }
    pSVar1 = System_String__Concat_1969e50("Common.",pSVar1,(MethodInfo *)0x0);
    (method_00->fields).TooltipKey = pSVar1;
    Il2CppCodeGenWriteBarrier(&(method_00->fields).TooltipKey,pSVar1);
    if (Il2CppMethodInitialized_184347b05 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Il2CppMethodInitialized_184347b05 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
               (MethodInfo *)0x0);
    return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
  }
label_18239d5eb:
  ThrowNullReferenceException();
}


