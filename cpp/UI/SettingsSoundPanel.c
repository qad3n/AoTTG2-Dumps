// Type: UI.SettingsSoundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsSoundPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsSoundPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsSoundPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSoundPanel__get_ScrollBar (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x4138730

bool_conflict
UI_SettingsSoundPanel__get_ScrollBar(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsSoundPanel$$Setup
// il2cpp: void UI_SettingsSoundPanel__Setup (UI_SettingsSoundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4138740

void UI_SettingsSoundPanel__Setup
               (UI_SettingsSoundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *category;
  long lVar2;
  Settings_BaseSetting_o *pSVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  System_String_array *pSVar8;
  System_String_o *str0;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  MethodInfo *pMVar12;
  
  if (DAT_05704964 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsPopup);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__3_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__3_1);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    il2cpp_init_method_metadata(&"Menu");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"HookImpactEffect");
    il2cpp_init_method_metadata(&"MuteMinimized");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"CustomPlaylist");
    il2cpp_init_method_metadata(&"ReelOutEffect");
    il2cpp_init_method_metadata(&"VoiceChatInput");
    il2cpp_init_method_metadata(&"VoiceChatAudioVolume");
    il2cpp_init_method_metadata(&"HorseSoundEffect");
    il2cpp_init_method_metadata(&"HookRetractEffect");
    il2cpp_init_method_metadata(&"TitanGrabMusic");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"ReelInEffect");
    il2cpp_init_method_metadata(&"VoiceChatDevice");
    il2cpp_init_method_metadata(&"VoiceChatInputOptions");
    il2cpp_init_method_metadata(&"AddSong");
    il2cpp_init_method_metadata(&"CrashLandEffect");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Music");
    il2cpp_init_method_metadata(&"VoiceChatMicVolume");
    il2cpp_init_method_metadata(&"GasEffect");
    il2cpp_init_method_metadata(&"Ambient");
    il2cpp_init_method_metadata(&"Sound");
    il2cpp_init_method_metadata(&"OldHookEffect");
    il2cpp_init_method_metadata(&"Racing");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Peaceful");
    il2cpp_init_method_metadata(&"OldNapeEffect");
    il2cpp_init_method_metadata(&"ForcePlaylist");
    il2cpp_init_method_metadata(&"OldBladeEffect");
    il2cpp_init_method_metadata(&"TitanVocalEffect");
    il2cpp_init_method_metadata(&"Battle");
    il2cpp_init_method_metadata(&"Volume");
    DAT_05704964 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar11 = "Sound";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    category = (System_String_o *)parent[1].fields._currentCategoryPanel;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    pSVar5 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,200.0,20.0,pSVar5,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,140.0,20.0,pSVar5,(MethodInfo *)0x0);
    if (lVar2 != 0) {
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x20);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"Volume",(System_String_o *)"",
                          (System_String_o *)"",in_R9);
      pMVar12 = (MethodInfo *)0x2;
      UI_ElementFactory__CreateSliderSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",135.0,16.0,2,
                 (MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x28);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"Music",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x2;
      UI_ElementFactory__CreateSliderSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",135.0,16.0,2,
                 (MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x30);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"MuteMinimized",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x38);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"TitanGrabMusic",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x40);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"TitanVocalEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x48);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"GasEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x50);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"ReelInEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x58);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"ReelOutEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x60);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"HookRetractEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x68);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"HookImpactEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x70);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"CrashLandEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      pMVar12 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x78);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar11,"HorseSoundEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar12);
      UI_ElementFactory__CreateToggleSetting
                (pUVar9,__this_00,pSVar3,pSVar5,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pMVar12 = (MethodInfo *)0x0;
      pUVar6 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).DoublePanelRight,__this_00,
                          (System_String_o *)"",0,3,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._currentSongLabel = pUVar7;
        il2cpp_runtime_glue(&(__this->fields)._currentSongLabel,pUVar7);
        pUVar9 = (__this->fields).DoublePanelRight;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x98);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar11,"ForcePlaylist",(System_String_o *)"",
                            (System_String_o *)"",pMVar12);
        pSVar8 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,7);
        if (pSVar8 != (System_String_array *)0x0) {
          if ((int)pSVar8->max_length != 0) {
            pSVar8->m_Items[0] = "Default";
            il2cpp_runtime_glue(pSVar8->m_Items);
            if (1 < (uint)pSVar8->max_length) {
              pSVar8->m_Items[1] = "Custom";
              il2cpp_runtime_glue(pSVar8->m_Items + 1);
              if (2 < (uint)pSVar8->max_length) {
                pSVar8->m_Items[2] = "Menu";
                il2cpp_runtime_glue(pSVar8->m_Items + 2);
                if (3 < (uint)pSVar8->max_length) {
                  pSVar8->m_Items[3] = "Ambient";
                  il2cpp_runtime_glue(pSVar8->m_Items + 3);
                  if (4 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[4] = "Peaceful";
                    il2cpp_runtime_glue(pSVar8->m_Items + 4);
                    if (5 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[5] = "Battle";
                      il2cpp_runtime_glue(pSVar8->m_Items + 5);
                      if (6 < (uint)pSVar8->max_length) {
                        pSVar8->m_Items[6] = "Racing";
                        il2cpp_runtime_glue(pSVar8->m_Items + 6);
                        pMVar12 = "";
                        UI_ElementFactory__CreateDropdownSetting
                                  (pUVar9,__this_01,pSVar3,pSVar5,pSVar8,
                                   (System_String_o *)"",160.0,40.0,300.0,
                                   (System_Nullable_float__o)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                        if (*(long *)(lVar2 + 0xa0) != 0) {
                          pSVar5 = *(System_String_o **)(*(long *)(lVar2 + 0xa0) + 0x18);
                          bVar4 = System_String__op_Equality
                                            (pSVar5,(System_String_o *)"",
                                             (MethodInfo *)0x0);
                          if ((char)bVar4 != '\0') {
                            pSVar5 = "None";
                          }
                          pUVar9 = (__this->fields).DoublePanelRight;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          str0 = UI_UIManager__GetLocale
                                           (category,pSVar11,"CustomPlaylist",
                                            (System_String_o *)"",
                                            (System_String_o *)"",pMVar12);
                          pSVar5 = System_String__Concat(str0,": ",pSVar5,(MethodInfo *)0x0)
                          ;
                          pMVar12 = (MethodInfo *)0x0;
                          UI_ElementFactory__CreateDefaultLabel
                                    (pUVar9,__this_00,pSVar5,0,3,(MethodInfo *)0x0);
                          pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                                             ((__this->fields).DoublePanelRight,10.0,3,
                                              (MethodInfo *)0x0);
                          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar9 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0)
                            ;
                            pSVar5 = UI_UIManager__GetLocale
                                               (category,pSVar11,"AddSong",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            pUVar10 = (UnityEngine_Events_UnityAction_o *)
                                      il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            UI_ElementFactory__CreateDefaultButton
                                      (pUVar9,__this_00,pSVar5,0.0,0.0,pUVar10,(MethodInfo *)0x0);
                            pSVar5 = "Clear";
                            if (DAT_05704983 == '\0') {
                              il2cpp_init_method_metadata(&TypeInfo_UIManager);
                              il2cpp_init_method_metadata(&"Common");
                              il2cpp_init_method_metadata(&"");
                              DAT_05704983 = '\x01';
                            }
                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar5 = UI_UIManager__GetLocale
                                               ("Common",pSVar5,(System_String_o *)"",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            pUVar10 = (UnityEngine_Events_UnityAction_o *)
                                      il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            UI_ElementFactory__CreateDefaultButton
                                      (pUVar9,__this_00,pSVar5,0.0,0.0,pUVar10,(MethodInfo *)0x0);
                            UI_BasePanel__CreateHorizontalDivider
                                      ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,
                                       1.0,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).DoublePanelRight;
                            pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0xb0);
                            method_00 = "";
                            pSVar5 = UI_UIManager__GetLocale
                                               (category,pSVar11,"VoiceChatInput",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            pSVar8 = UI_UIManager__GetLocaleArray
                                               (category,pSVar11,"VoiceChatInputOptions",
                                                (System_String_o *)"",method_00);
                            pMVar12 = "";
                            UI_ElementFactory__CreateDropdownSetting
                                      (pUVar9,__this_01,pSVar3,pSVar5,pSVar8,
                                       (System_String_o *)"",160.0,40.0,300.0,
                                       (System_Nullable_float__o)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).DoublePanelRight;
                            pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0xa8);
                            pSVar5 = UI_UIManager__GetLocale
                                               (category,pSVar11,"VoiceChatDevice",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar8 = ApplicationManagers_VoiceChatManager__get_MicrophoneDevices
                                               ((MethodInfo *)0x0);
                            pMVar12 = "";
                            UI_ElementFactory__CreateDropdownSetting
                                      (pUVar9,__this_01,pSVar3,pSVar5,pSVar8,
                                       (System_String_o *)"",160.0,40.0,300.0,
                                       (System_Nullable_float__o)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).DoublePanelRight;
                            pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0xb8);
                            pSVar5 = UI_UIManager__GetLocale
                                               (category,pSVar11,"VoiceChatMicVolume",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            pMVar12 = (MethodInfo *)0x2;
                            UI_ElementFactory__CreateSliderSetting
                                      (pUVar9,__this_00,pSVar3,pSVar5,
                                       (System_String_o *)"",135.0,16.0,2,
                                       (MethodInfo *)0x0);
                            pUVar9 = (__this->fields).DoublePanelRight;
                            pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0xc0);
                            pSVar5 = UI_UIManager__GetLocale
                                               (category,pSVar11,"VoiceChatAudioVolume",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            pMVar12 = (MethodInfo *)0x2;
                            UI_ElementFactory__CreateSliderSetting
                                      (pUVar9,__this_00,pSVar3,pSVar5,
                                       (System_String_o *)"",135.0,16.0,2,
                                       (MethodInfo *)0x0);
                            UI_BasePanel__CreateHorizontalDivider
                                      ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,
                                       1.0,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).DoublePanelRight;
                            pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x80);
                            pSVar5 = UI_UIManager__GetLocale
                                               (category,pSVar11,"OldHookEffect",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            pMVar12 = (MethodInfo *)0x0;
                            UI_ElementFactory__CreateToggleSetting
                                      (pUVar9,__this_00,pSVar3,pSVar5,
                                       (System_String_o *)"",30.0,30.0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).DoublePanelRight;
                            pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x88);
                            pSVar5 = UI_UIManager__GetLocale
                                               (category,pSVar11,"OldBladeEffect",
                                                (System_String_o *)"",
                                                (System_String_o *)"",pMVar12);
                            pMVar12 = (MethodInfo *)0x0;
                            UI_ElementFactory__CreateToggleSetting
                                      (pUVar9,__this_00,pSVar3,pSVar5,
                                       (System_String_o *)"",30.0,30.0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).DoublePanelRight;
                            pSVar3 = *(Settings_BaseSetting_o **)(lVar2 + 0x90);
                            pSVar11 = UI_UIManager__GetLocale
                                                (category,pSVar11,"OldNapeEffect",
                                                 (System_String_o *)"",
                                                 (System_String_o *)"",pMVar12);
                            UI_ElementFactory__CreateToggleSetting
                                      (pUVar9,__this_00,pSVar3,pSVar11,
                                       (System_String_o *)"",30.0,30.0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        goto LAB_04139712;
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
      }
    }
  }
LAB_04139712:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsSoundPanel$$OnButtonClick
// il2cpp: void UI_SettingsSoundPanel__OnButtonClick (UI_SettingsSoundPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4139720

void UI_SettingsSoundPanel__OnButtonClick
               (UI_SettingsSoundPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_TypedSetting_T__o *pSVar2;
  UI_BasePanel_o *__this_00;
  UI_SelectListPopup_o *__this_01;
  System_Object_array *pSVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_Collections_Generic_List_string__o *items;
  System_String_o *pSVar6;
  UnityEngine_Events_UnityAction_o *onLoad;
  System_Collections_Generic_List_object__o *__this_02;
  System_String_array *pSVar7;
  System_String_o *a;
  long lVar8;
  uint uVar9;
  MethodInfo *in_R9;
  
  if (DAT_05704965 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__4_0);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"AddSong");
    il2cpp_init_method_metadata(&"AddFinish");
    il2cpp_init_method_metadata(&"Sound");
    il2cpp_init_method_metadata(&",");
    il2cpp_init_method_metadata(&"");
    DAT_05704965 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar8 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar8 != 0) {
        __this_01 = *(UI_SelectListPopup_o **)(lVar8 + 0x90);
        items = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
        pSVar6 = UI_UIManager__GetLocale
                           ("SettingsPopup","Sound","AddSong","","",in_R9);
        onLoad = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_SelectListPopup_o *)0x0) {
          UI_SelectListPopup__ShowLoad
                    (__this_01,items,pSVar6,onLoad,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_04139cd4;
    }
    bVar4 = System_String__op_Equality(name,"AddFinish",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_02,MethodInfo_List_1_System_String);
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 == 0)) ||
        (pSVar6 = *(System_String_o **)(lVar8 + 0x18), pSVar6 == (System_String_o *)0x0)) ||
       (pSVar7 = System_String__Split(pSVar6,0x2c,0,(MethodInfo *)0x0),
       pSVar7 == (System_String_array *)0x0)) goto LAB_04139cd4;
    uVar5 = (uint)pSVar7->max_length;
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar5) {
        lVar8 = 0;
        do {
          if (uVar5 <= (uint)lVar8) goto LAB_04139cd9;
          if (pSVar7->m_Items[lVar8] == (System_String_o *)0x0) goto LAB_04139cd4;
          pSVar6 = System_String__Trim(pSVar7->m_Items[lVar8],(MethodInfo *)0x0);
          bVar4 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') goto LAB_04139cd4;
          uVar5 = (uint)pSVar7->max_length;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar5);
      }
    }
    else if (0 < (int)uVar5) {
      uVar9 = 0;
      if (uVar5 != 0) {
        do {
          pSVar6 = pSVar7->m_Items[(int)uVar9];
          if (pSVar6 == (System_String_o *)0x0) goto LAB_04139cd4;
          a = System_String__Trim(pSVar6,(MethodInfo *)0x0);
          bVar4 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          if ((char)bVar4 == '\0') {
LAB_04139a7a:
            uVar5 = (uint)pSVar7->max_length;
            if ((int)uVar5 <= (int)(uVar9 + 1)) goto LAB_04139b70;
          }
          else {
            piVar1 = &(__this_02->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_02->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto LAB_04139cd4;
            uVar5 = (__this_02->fields)._size;
            if ((uint)pSVar3->max_length <= uVar5) {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_02,(Il2CppObject *)pSVar6,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
              goto LAB_04139a7a;
            }
            (__this_02->fields)._size = uVar5 + 1;
            pSVar3->m_Items[(int)uVar5] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar5);
            uVar5 = (uint)pSVar7->max_length;
            if ((int)uVar5 <= (int)(uVar9 + 1)) goto LAB_04139b70;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
      }
LAB_04139cd9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_04139b70:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x90), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x138), lVar8 == 0)) goto LAB_04139cd4;
    pSVar6 = *(System_String_o **)(lVar8 + 0x18);
    bVar4 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
    lVar8 = MethodInfo_Void_Add;
    if ((char)bVar4 == '\0') {
      if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_04139cd4;
    }
    else {
      if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_04139cd4;
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_02->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_04139cd4;
      uVar5 = (__this_02->fields)._size;
      if (uVar5 < (uint)pSVar3->max_length) {
        (__this_02->fields)._size = uVar5 + 1;
        pSVar3->m_Items[(int)uVar5] = (Il2CppObject *)pSVar6;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar5,pSVar6);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_02,(Il2CppObject *)pSVar6,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if (lVar8 == 0) goto LAB_04139cd4;
    pSVar2 = *(Settings_TypedSetting_T__o **)(lVar8 + 0xa0);
    pSVar6 = "";
    if ((__this_02->fields)._size != 0) {
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this_02,MethodInfo_String___ToArray);
      pSVar6 = System_String__Join(",",pSVar7,(MethodInfo *)0x0);
    }
    if (pSVar2 == (Settings_TypedSetting_T__o *)0x0) goto LAB_04139cd4;
    Settings_TypedSetting<object>__set_Value(pSVar2,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Value);
    __this_00 = (__this->fields).Parent;
  }
  else {
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar8 == 0) ||
       (pSVar2 = *(Settings_TypedSetting_T__o **)(lVar8 + 0xa0),
       pSVar2 == (Settings_TypedSetting_T__o *)0x0)) goto LAB_04139cd4;
    Settings_TypedSetting<object>__set_Value(pSVar2,(Il2CppObject *)"",MethodInfo_Void_set_Value);
    __this_00 = (__this->fields).Parent;
  }
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_04139cd4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsSoundPanel$$Update
// il2cpp: void UI_SettingsSoundPanel__Update (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x4139ce0

void UI_SettingsSoundPanel__Update(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  MethodInfo *in_R9;
  
  if (DAT_05704966 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"CurrentSong");
    il2cpp_init_method_metadata(&"Sound");
    il2cpp_init_method_metadata(&"");
    DAT_05704966 = '\x01';
  }
  pUVar1 = (__this->fields)._currentSongLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._currentSongLabel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = UI_UIManager__GetLocale
                       ("SettingsPopup","Sound","CurrentSong","","",in_R9);
    str2 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,": ",str2,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar2 = pUVar1->klass;
      vtable_dispatch = (pUVar2->vtable)._75_set_text.methodPtr;
      (*vtable_dispatch)
                (pUVar1,pSVar4,(pUVar2->vtable)._75_set_text.method,pUVar2,vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.SettingsSoundPanel$$.ctor
// il2cpp: void UI_SettingsSoundPanel___ctor (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x4139e20

void UI_SettingsSoundPanel___ctor(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSoundPanel$$<Setup>b__3_0
// il2cpp: void UI_SettingsSoundPanel___Setup_b__3_0 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x4139e30

void UI_SettingsSoundPanel__<Setup>b__3_0(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704967 == '\0') {
    il2cpp_init_method_metadata(&"Add");
    DAT_05704967 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"Add",in_RDX);
  return;
}


// UI.SettingsSoundPanel$$<Setup>b__3_1
// il2cpp: void UI_SettingsSoundPanel___Setup_b__3_1 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x4139e70

void UI_SettingsSoundPanel__<Setup>b__3_1(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704968 == '\0') {
    il2cpp_init_method_metadata(&"Clear");
    DAT_05704968 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.SettingsSoundPanel$$<OnButtonClick>b__4_0
// il2cpp: void UI_SettingsSoundPanel___OnButtonClick_b__4_0 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x4139eb0

void UI_SettingsSoundPanel__<OnButtonClick>b__4_0
               (UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704969 == '\0') {
    il2cpp_init_method_metadata(&"AddFinish");
    DAT_05704969 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"AddFinish",in_RDX);
  return;
}


