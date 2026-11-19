// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsUiCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c___cctor (const MethodInfo* method);
// 0x5e54dc0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754865f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c);
    Il2CppMethodInitialized_0754865f = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c_o* __this, const MethodInfo* method);
// 0x5e54e30

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory.<>c$$<Theme>b__3_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c___Theme_b__3_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c_o* __this, System_String_o* theme, const MethodInfo* method);
// 0x5e54e40

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c___Theme_b__3_0
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c_o *__this,System_String_o *theme,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Theme");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548660 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("Theme",theme,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","UI",pSVar1,"",theme,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e53000

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)content;
  if (g_data_0754865c == '\0') {
    method_00 = &"ui";
    il2cpp_codegen_initialize_runtime_metadata(&"ui");
    g_data_0754865c = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups((MethodInfo *)method_00);
  categoryId = "ui";
  if (Il2CppMethodInitialized_075485a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e54b70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups((MethodInfo *)root);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups (const MethodInfo* method);
// 0x5e530d0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Groups(MethodInfo *method)

{
  Settings_UISettings_o *settings;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar6;
  Settings_FloatSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  MethodInfo *pMVar10;
  Settings_ColorSetting_o *setting;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_0754865d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"UIScale");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedCountTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairStyle");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-speedometer");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowCrosshairArrows");
    il2cpp_codegen_initialize_runtime_metadata(&"FeedConsoleTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-max-name-length");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-master-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-theme-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-min-name-length");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedCount");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kill-feed-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"FeedConsole");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-names");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-name-background-type");
    il2cpp_codegen_initialize_runtime_metadata(&"KillScoreScale");
    il2cpp_codegen_initialize_runtime_metadata(&"JoinNotifications");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceNameColor");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-style");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowSongPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-coordinates");
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
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-song-popup");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-text-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-human-name-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanNameDistanceTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowChatTimestamp");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-name-override-target");
    il2cpp_codegen_initialize_runtime_metadata(&"NameBackgroundType");
    il2cpp_codegen_initialize_runtime_metadata(&"NameOverrideTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-force-name-color");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-crosshair-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowStylebar");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-interpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-game-time");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeMainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-height");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanNameDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kdr");
    il2cpp_codegen_initialize_runtime_metadata(&"GameFeed");
    il2cpp_codegen_initialize_runtime_metadata(&"HUDScale");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeLoadscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-hud-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowHealthbars");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-font-size");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-width");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-minimap-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Speedometer");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatCLErrors");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-ping");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowPing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-crosshair-arrows");
    il2cpp_codegen_initialize_runtime_metadata(&"Coordinates");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-show-healthbars");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-game-feed");
    il2cpp_codegen_initialize_runtime_metadata(&"KDR");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairScale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowNames");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeLoadscreenTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kill-feed-count");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxNameLength");
    il2cpp_codegen_initialize_runtime_metadata(&"GameFeedTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-stylebar-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowCrosshairDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapScale");
    il2cpp_codegen_initialize_runtime_metadata(&"StylebarScale");
    il2cpp_codegen_initialize_runtime_metadata(&"CrosshairTextScale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInterpolationTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"KillFeedScale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-hud-feed");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-feed-console");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-name-visibility");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatFontSize");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatScrollSensitivity");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeMainMenuTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-fade-loadscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatWidth");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInterpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-crosshair-skin");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-fade-main-menu");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-join-notifications");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-chat-cl-errors");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-kill-score-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatCLErrorsTooltip");
    Il2CppMethodInitialized_0754865d = '\x01';
  }
  settings = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  pGVar2 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,6);
  pMVar10 = (MethodInfo *)0x7;
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7);
  pIVar4 = (Il2CppObject *)Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Theme(settings,pMVar10);
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e54b6b;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((int)pGVar3->max_length == 0) goto label_05e54b57;
  pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
  pSVar1 = "settings-ui-theme-scale";
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar7 = (Settings_FloatSetting_o *)0x0;
  }
  else {
    pSVar7 = (settings->fields).UIMasterScale;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-ui-master-scale","UI","UIScale",pSVar7,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e54b57;
  pGVar3->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar7 = (Settings_FloatSetting_o *)0x0;
  }
  else {
    pSVar7 = (settings->fields).HUDScale;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-ui-hud-scale","UI","HUDScale",pSVar7,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((uint)pGVar3->max_length < 3) goto label_05e54b57;
  pGVar3->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar7 = (Settings_FloatSetting_o *)0x0;
  }
  else {
    pSVar7 = (settings->fields).MinimapScale;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-ui-minimap-scale","UI","MinimapScale",pSVar7,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((pGVar3->max_length & 0xfffffffc) == 0) goto label_05e54b57;
  pGVar3->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 3);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar7 = (Settings_FloatSetting_o *)0x0;
  }
  else {
    pSVar7 = (settings->fields).StylebarScale;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-ui-stylebar-scale","UI","StylebarScale",pSVar7,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((uint)pGVar3->max_length < 5) goto label_05e54b57;
  pGVar3->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 4);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar7 = (Settings_FloatSetting_o *)0x0;
  }
  else {
    pSVar7 = (settings->fields).KillScoreScale;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-ui-kill-score-scale","UI","KillScoreScale",pSVar7,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((uint)pGVar3->max_length < 6) goto label_05e54b57;
  pGVar3->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 5);
  if (settings == (Settings_UISettings_o *)0x0) {
    pMVar10 = (MethodInfo *)0x0;
  }
  else {
    pMVar10 = (MethodInfo *)(settings->fields).KillFeedScale;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                     ("settings-ui-kill-feed-scale","UI","KillFeedScale",
                      (Settings_FloatSetting_o *)pMVar10,(System_String_o *)0x0,
                      (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((uint)pGVar3->max_length < 7) goto label_05e54b57;
  pGVar3->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 6);
  pGVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar10);
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_05e54b6b:
    ThrowNullReferenceException();
  }
  if ((int)pGVar2->max_length == 0) goto label_05e54b57;
  pGVar2->m_Items[0] = pGVar6;
  Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,10);
  pSVar1 = "settings-ui-hud-feed";
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar8 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar8 = (settings->fields).KDR;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                     ("settings-ui-kdr","UI","KDR",pSVar8,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e54b6b;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((int)pGVar3->max_length == 0) goto label_05e54b57;
  pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar9 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    pSVar9 = (settings->fields).ShowStylebar;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-ui-show-stylebar","UI","ShowStylebar",pSVar9,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e54b57;
  pGVar3->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar9 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    pSVar9 = (settings->fields).GameFeed;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-ui-game-feed","UI","GameFeed",pSVar9,
                      "GameFeedTooltip",(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((uint)pGVar3->max_length < 3) goto label_05e54b57;
  pGVar3->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar9 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    pSVar9 = (settings->fields).FeedConsole;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-ui-feed-console","UI","FeedConsole",pSVar9,
                      "FeedConsoleTooltip",(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((pGVar3->max_length & 0xfffffffc) == 0) goto label_05e54b57;
  pGVar3->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 3);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar9 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    pSVar9 = (settings->fields).JoinNotifications;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-ui-join-notifications","UI","JoinNotifications",pSVar9,
                      "JoinNotificationsTooltip",(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if ((uint)pGVar3->max_length < 5) goto label_05e54b57;
  pGVar3->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 4);
  if (settings == (Settings_UISettings_o *)0x0) {
    pSVar9 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    pSVar9 = (settings->fields).ShowPing;
  }
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-ui-show-ping","UI","ShowPing",pSVar9,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffb8);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e54b5c;
  }
  if (5 < (uint)pGVar3->max_length) {
    pGVar3->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 5);
    if (settings == (Settings_UISettings_o *)0x0) {
      pSVar9 = (Settings_BoolSetting_o *)0x0;
    }
    else {
      pSVar9 = (settings->fields).ShowGameTime;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-ui-show-game-time","UI","ShowGameTime",pSVar9,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
label_05e54b5c:
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if (6 < (uint)pGVar3->max_length) {
      pGVar3->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 6);
      if (settings == (Settings_UISettings_o *)0x0) {
        pSVar9 = (Settings_BoolSetting_o *)0x0;
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-ui-show-song-popup","UI","ShowSongPopup",
                            (Settings_BoolSetting_o *)0x0,(System_String_o *)0x0,
                            (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,7,pIVar4);
      }
      else {
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-ui-show-song-popup","UI","ShowSongPopup",
                            (settings->fields).ShowSongPopup,(System_String_o *)0x0,
                            (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,7,pIVar4);
        pSVar9 = (settings->fields).ShowEmotes;
      }
      pMVar10 = (MethodInfo *)0x0;
      pIVar4 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                         ("settings-ui-show-emotes","UI","ShowEmotes",pSVar9,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                          in_stack_ffffffffffffffb8);
      il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
      il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,8,pIVar4);
      if (settings != (Settings_UISettings_o *)0x0) {
        pMVar10 = (MethodInfo *)(settings->fields).Coordinates;
      }
      pSVar8 = (Settings_IntSetting_o *)0x0;
      pIVar4 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                         ("settings-ui-coordinates","UI","Coordinates",
                          (Settings_IntSetting_o *)pMVar10,(System_String_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
      il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
      il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,9,pIVar4);
      pGVar6 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar10);
      il2cpp_runtime_helper_02fe1060(pGVar2,1,pGVar6);
      pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,9);
      pSVar1 = "settings-ui-name-visibility";
      if (settings != (Settings_UISettings_o *)0x0) {
        pSVar8 = (settings->fields).ShowNames;
      }
      pIVar4 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                         ("settings-ui-show-names","UI","ShowNames",pSVar8,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                          in_stack_ffffffffffffffb8);
      if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,0,pIVar4);
        if (settings == (Settings_UISettings_o *)0x0) {
          pSVar8 = (Settings_IntSetting_o *)0x0;
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-ui-show-healthbars","UI","ShowHealthbars",
                              (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
        }
        else {
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-ui-show-healthbars","UI","ShowHealthbars",
                              (settings->fields).ShowHealthbars,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
          pSVar8 = (settings->fields).HumanNameDistance;
        }
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                           ("settings-ui-human-name-distance","UI","HumanNameDistance",pSVar8,
                            "HumanNameDistanceTooltip",(System_Action_GisketchActionContext__o *)0x0,
                            in_stack_ffffffffffffffb8);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,2,pIVar4);
        if (settings == (Settings_UISettings_o *)0x0) {
          pSVar8 = (Settings_IntSetting_o *)0x0;
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-ui-name-override-target","UI","NameOverrideTarget",
                              (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
        }
        else {
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-ui-name-override-target","UI","NameOverrideTarget",
                              (settings->fields).NameOverrideTarget,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
          pSVar8 = (settings->fields).NameBackgroundType;
        }
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                           ("settings-ui-name-background-type","UI","NameBackgroundType",pSVar8,
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                            in_stack_ffffffffffffffb8);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,4,pIVar4);
        if (settings == (Settings_UISettings_o *)0x0) {
          setting = (Settings_ColorSetting_o *)0x0;
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__ToggleColor
                             ("settings-ui-force-name-color","UI","ForceNameColor",
                              (Settings_ToggleColorSetting_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
        }
        else {
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__ToggleColor
                             ("settings-ui-force-name-color","UI","ForceNameColor",
                              (settings->fields).ForceNameColor,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
          setting = (settings->fields).ForceBackgroundColor;
        }
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
                           ("settings-ui-force-background-color","UI","ForceBackgroundColor",setting,
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                            in_stack_ffffffffffffffb8);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,6,pIVar4);
        if (settings == (Settings_UISettings_o *)0x0) {
          pMVar10 = (MethodInfo *)0x0;
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                             ("settings-ui-min-name-length","UI","MinNameLength",
                              (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,7,pIVar4);
        }
        else {
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                             ("settings-ui-min-name-length","UI","MinNameLength",
                              (settings->fields).MinNameLength,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,7,pIVar4);
          pMVar10 = (MethodInfo *)(settings->fields).MaxNameLength;
        }
        pSVar8 = (Settings_IntSetting_o *)0x0;
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                           ("settings-ui-max-name-length","UI","MaxNameLength",
                            (Settings_IntSetting_o *)pMVar10,(System_String_o *)0x0,
                            (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,8,pIVar4);
        pGVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar10);
        il2cpp_runtime_helper_02fe1060(pGVar2,2,pGVar6);
        pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7);
        pSVar1 = "settings-ui-crosshair";
        if (settings != (Settings_UISettings_o *)0x0) {
          pSVar8 = (settings->fields).CrosshairStyle;
        }
        pIVar4 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                           ("settings-ui-crosshair-style","UI","CrosshairStyle",pSVar8,
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                            in_stack_ffffffffffffffb8);
        if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,0,pIVar4);
          if (settings == (Settings_UISettings_o *)0x0) {
            pSVar7 = (Settings_FloatSetting_o *)0x0;
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                               ("settings-ui-crosshair-scale","UI","CrosshairScale",
                                (Settings_FloatSetting_o *)0x0,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
          }
          else {
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                               ("settings-ui-crosshair-scale","UI","CrosshairScale",
                                (settings->fields).CrosshairScale,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
            pSVar7 = (settings->fields).CrosshairTextScale;
          }
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                             ("settings-ui-crosshair-text-scale","UI","CrosshairTextScale",pSVar7,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                              in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,2,pIVar4);
          if (settings == (Settings_UISettings_o *)0x0) {
            pSVar9 = (Settings_BoolSetting_o *)0x0;
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                               ("settings-ui-show-crosshair-distance","UI","ShowCrosshairDistance",
                                (Settings_BoolSetting_o *)0x0,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
          }
          else {
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                               ("settings-ui-show-crosshair-distance","UI","ShowCrosshairDistance",
                                (settings->fields).ShowCrosshairDistance,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
            pSVar9 = (settings->fields).ShowCrosshairArrows;
          }
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-ui-show-crosshair-arrows","UI","ShowCrosshairArrows",pSVar9,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                              in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,4,pIVar4);
          if (settings == (Settings_UISettings_o *)0x0) {
            pMVar10 = (MethodInfo *)0x0;
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d4a5e0
                               ("settings-ui-crosshair-skin","UI","CrosshairSkin",
                                (Settings_StringSetting_o *)0x0,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
          }
          else {
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d4a5e0
                               ("settings-ui-crosshair-skin","UI","CrosshairSkin",
                                (settings->fields).CrosshairSkin,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
            pMVar10 = (MethodInfo *)(settings->fields).Speedometer;
          }
          pSVar9 = (Settings_BoolSetting_o *)0x0;
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-ui-speedometer","UI","Speedometer",
                              (Settings_IntSetting_o *)pMVar10,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,6,pIVar4);
          pGVar6 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar10);
          il2cpp_runtime_helper_02fe1060(pGVar2,3,pGVar6);
          pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7);
          pSVar1 = "settings-ui-chat";
          if (settings != (Settings_UISettings_o *)0x0) {
            pSVar9 = (settings->fields).ShowChatTimestamp;
          }
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-ui-show-chat-timestamp","UI","ShowChatTimestamp",pSVar9,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                              in_stack_ffffffffffffffb8);
          if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,0,pIVar4);
            if (settings == (Settings_UISettings_o *)0x0) {
              pSVar8 = (Settings_IntSetting_o *)0x0;
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                 ("settings-ui-chat-width","UI","ChatWidth",
                                  (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
            }
            else {
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                 ("settings-ui-chat-width","UI","ChatWidth",
                                  (settings->fields).ChatWidth,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
              pSVar8 = (settings->fields).ChatHeight;
            }
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                               ("settings-ui-chat-height","UI","ChatHeight",pSVar8,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,2,pIVar4);
            if (settings == (Settings_UISettings_o *)0x0) {
              pSVar8 = (Settings_IntSetting_o *)0x0;
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                 ("settings-ui-chat-font-size","UI","ChatFontSize",
                                  (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
            }
            else {
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                 ("settings-ui-chat-font-size","UI","ChatFontSize",
                                  (settings->fields).ChatFontSize,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
              pSVar8 = (settings->fields).ChatScrollSensitivity;
            }
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                               ("settings-ui-chat-scroll-sensitivity","UI","ChatScrollSensitivity",pSVar8,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,4,pIVar4);
            if (settings == (Settings_UISettings_o *)0x0) {
              pMVar10 = (MethodInfo *)0x0;
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
                                 ("settings-ui-chat-background-color","UI","ChatBackgroundColor",
                                  (Settings_ColorSetting_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
            }
            else {
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
                                 ("settings-ui-chat-background-color","UI","ChatBackgroundColor",
                                  (settings->fields).ChatBackgroundColor,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
              pMVar10 = (MethodInfo *)(settings->fields).ChatCLErrors;
            }
            pSVar8 = (Settings_IntSetting_o *)0x0;
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                               ("settings-ui-chat-cl-errors","UI","ChatCLErrors",
                                (Settings_BoolSetting_o *)pMVar10,"ChatCLErrorsTooltip",
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,6,pIVar4);
            pGVar6 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar10);
            il2cpp_runtime_helper_02fe1060(pGVar2,4,pGVar6);
            pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                     SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,4);
            pSVar1 = "settings-ui-misc";
            if (settings != (Settings_UISettings_o *)0x0) {
              pSVar8 = (settings->fields).KillFeedCount;
            }
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                               ("settings-ui-kill-feed-count","UI","KillFeedCount",pSVar8,
                                "KillFeedCountTooltip",(System_Action_GisketchActionContext__o *)0x0,
                                in_stack_ffffffffffffffb8);
            if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,0,pIVar4);
              if (settings == (Settings_UISettings_o *)0x0) {
                pSVar9 = (Settings_BoolSetting_o *)0x0;
                pIVar4 = (Il2CppObject *)
                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                   ("settings-ui-fade-main-menu","UI","FadeMainMenu",
                                    (Settings_BoolSetting_o *)0x0,"FadeMainMenuTooltip",
                                    (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
                il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
                il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
              }
              else {
                pIVar4 = (Il2CppObject *)
                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                   ("settings-ui-fade-main-menu","UI","FadeMainMenu",
                                    (settings->fields).FadeMainMenu,"FadeMainMenuTooltip",
                                    (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
                il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
                il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
                pSVar9 = (settings->fields).FadeLoadscreen;
              }
              pMVar10 = (MethodInfo *)0x0;
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                 ("settings-ui-fade-loadscreen","UI","FadeLoadscreen",pSVar9,
                                  "FadeLoadscreenTooltip",(System_Action_GisketchActionContext__o *)0x0,
                                  in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,2,pIVar4);
              if (settings != (Settings_UISettings_o *)0x0) {
                pMVar10 = (MethodInfo *)(settings->fields).ShowInterpolation;
              }
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                 ("settings-ui-show-interpolation","UI","ShowInterpolation",
                                  (Settings_BoolSetting_o *)pMVar10,"ShowInterpolationTooltip",
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
              pGVar6 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup)
              ;
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar10);
              il2cpp_runtime_helper_02fe1060(pGVar2,5,pGVar6);
              return pGVar2;
            }
          }
        }
      }
      goto label_05e54b6b;
    }
  }
label_05e54b57:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUiCategory$$Theme
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Theme (Settings_UISettings_o* settings, const MethodInfo* method);
// 0x5e54b90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e54cab: jmp 0x5e54cc6

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Theme
          (Settings_UISettings_o *settings,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *item;
  System_String_o *sub;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  System_String_array *values;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory___c_StaticFields *pGVar1;
  System_Converter_TInput__TOutput__o *__this_00;
  System_String_array *localizedText;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_01;
  MethodInfo *method_00;
  Settings_StringSetting_o *setting;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_0754865e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_ConvertAll_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Converter_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c_Theme_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Theme");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ui-theme");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    Il2CppMethodInitialized_0754865e = '\x01';
  }
  method_00 = (MethodInfo *)"settings-ui-theme";
  sub = "UI";
  item = "Theme";
  if (settings == (Settings_UISettings_o *)0x0) {
    setting = (Settings_StringSetting_o *)0x0;
  }
  else {
    setting = (settings->fields).UITheme;
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         ((System_String_o *)method_00,sub,item,2,
                          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                          in_stack_ffffffffffffffd0);
  values = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeThemes(method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c->static_fields;
    __this_00 = (System_Converter_TInput__TOutput__o *)pGVar1->__9__3_0;
  }
  else {
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c->static_fields;
    __this_00 = (System_Converter_TInput__TOutput__o *)pGVar1->__9__3_0;
  }
  if (__this_00 == (System_Converter_TInput__TOutput__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = (System_Converter_TInput__TOutput__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Converter_string_string);
    System_Converter_object__object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c_Theme_b__3_0,
               (MethodInfo_494A3F0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory_c->static_fields;
    pGVar1->__9__3_0 = (System_Converter_string__string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__3_0);
  }
  localizedText =
       (System_String_array *)
       System_Array__ConvertAll_object__object_
                 ((System_Object_array *)values,__this_00,
                  (MethodInfo_35F7C20 *)MethodInfo_System_Array_ConvertAll_string_string);
  pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                     (values,localizedText,(MethodInfo *)0x0);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).Options = pGVar2;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).Options);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_01,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01;
}


