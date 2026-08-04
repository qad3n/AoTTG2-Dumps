// Type: UI.SettingsSoundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsSoundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSoundPanel.cs
// --------------------------------

// UI.SettingsSoundPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSoundPanel__get_ScrollBar (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x444db00

bool_conflict UI_SettingsSoundPanel__get_ScrollBar(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsSoundPanel$$Setup
// il2cpp: void UI_SettingsSoundPanel__Setup (UI_SettingsSoundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x444db10

void UI_SettingsSoundPanel__Setup(UI_SettingsSoundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  UI_BasePanel_o *category;
  Settings_BaseSetting_o *pSVar3;
  Settings_TypedSetting_T__o *pSVar4;
  UI_BasePanel_o *pUVar5;
  UI_SelectListPopup_o *__this_00;
  char *pcVar6;
  UnityEngine_Object_o *x;
  long *plVar7;
  bool_conflict bVar8;
  uint uVar9;
  System_String_o *pSVar10;
  Il2CppClass *pIVar11;
  Il2CppClass *pIVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_UI_Text_o *pUVar14;
  System_String_array *pSVar15;
  System_String_o *str0;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Events_UnityAction_o *pUVar17;
  System_Collections_Generic_List_string__o *items;
  UI_CategoryPanel_o *__this_01;
  long lVar18;
  uint uVar19;
  Il2CppClass *pIVar20;
  Il2CppClass *pIVar21;
  Il2CppClass *pIVar22;
  MethodInfo *in_R9;
  MethodInfo *pMVar23;
  
  if (g_data_057ae707 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__3_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&"Menu");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"HookImpactEffect");
    il2cpp_runtime_helper_023445d0(&"MuteMinimized");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"CustomPlaylist");
    il2cpp_runtime_helper_023445d0(&"ReelOutEffect");
    il2cpp_runtime_helper_023445d0(&"VoiceChatInput");
    il2cpp_runtime_helper_023445d0(&"VoiceChatAudioVolume");
    il2cpp_runtime_helper_023445d0(&"HorseSoundEffect");
    il2cpp_runtime_helper_023445d0(&"HookRetractEffect");
    il2cpp_runtime_helper_023445d0(&"TitanGrabMusic");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"ReelInEffect");
    il2cpp_runtime_helper_023445d0(&"VoiceChatDevice");
    il2cpp_runtime_helper_023445d0(&"VoiceChatInputOptions");
    il2cpp_runtime_helper_023445d0(&"AddSong");
    il2cpp_runtime_helper_023445d0(&"CrashLandEffect");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Music");
    il2cpp_runtime_helper_023445d0(&"VoiceChatMicVolume");
    il2cpp_runtime_helper_023445d0(&"GasEffect");
    il2cpp_runtime_helper_023445d0(&"Ambient");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"OldHookEffect");
    il2cpp_runtime_helper_023445d0(&"Racing");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Peaceful");
    il2cpp_runtime_helper_023445d0(&"OldNapeEffect");
    il2cpp_runtime_helper_023445d0(&"ForcePlaylist");
    il2cpp_runtime_helper_023445d0(&"OldBladeEffect");
    il2cpp_runtime_helper_023445d0(&"TitanVocalEffect");
    il2cpp_runtime_helper_023445d0(&"Battle");
    il2cpp_runtime_helper_023445d0(&"Volume");
    g_data_057ae707 = '\x01';
  }
  pIVar20 = (Il2CppClass *)parent;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar5 = "Sound";
  if (parent == (UI_BasePanel_o *)0x0) {
label_0444eae2:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    pIVar20 = TypeInfo_SettingsPopup;
    if ((bVar2 <= (parent->klass->_2).naturalAligment) &&
       ((parent->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_SettingsPopup)) {
      category = (UI_BasePanel_o *)parent[1].fields._currentCategoryPanel;
      lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      pSVar10 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)pIVar11,0x18,200.0,20.0,pSVar10,(MethodInfo *)0x0);
      pSVar10 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      pIVar20 = (Il2CppClass *)&g_data_00000018;
      UI_ElementStyle___ctor((UI_ElementStyle_o *)pIVar12,0x18,140.0,20.0,pSVar10,(MethodInfo *)0x0);
      parent = category;
      if (lVar18 != 0) {
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x20);
        if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"Volume",
                             (System_String_o *)"",(System_String_o *)"",in_R9);
        pMVar23 = (MethodInfo *)0x2;
        UI_ElementFactory__CreateSliderSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",135.0,
                   16.0,2,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x28);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"Music",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x2;
        UI_ElementFactory__CreateSliderSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",135.0,
                   16.0,2,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x30);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"MuteMinimized",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x38);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"TitanGrabMusic",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x40);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"TitanVocalEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x48);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"GasEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x50);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"ReelInEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x58);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"ReelOutEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x60);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"HookRetractEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x68);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"HookImpactEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x70);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"CrashLandEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        pMVar23 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,(System_String_o *)"",30.0,
                   30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar16 = (__this->fields).DoublePanelLeft;
        parent = *(UI_BasePanel_o **)(lVar18 + 0x78);
        pSVar10 = UI_UIManager__GetLocale
                            ((System_String_o *)category,(System_String_o *)pUVar5,"HorseSoundEffect",
                             (System_String_o *)"",(System_String_o *)"",pMVar23);
        UI_ElementFactory__CreateToggleSetting
                  (pUVar16,(UI_ElementStyle_o *)pIVar11,(Settings_BaseSetting_o *)parent,pSVar10,
                   (System_String_o *)"",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (MethodInfo *)0x0);
        in_R9 = (MethodInfo *)0x0;
        pIVar20 = pIVar11;
        pUVar13 = UI_ElementFactory__CreateDefaultLabel
                            ((__this->fields).DoublePanelRight,(UI_ElementStyle_o *)pIVar11,
                             (System_String_o *)"",0,3,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
          pUVar14 = (UnityEngine_UI_Text_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
          (__this->fields)._currentSongLabel = pUVar14;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._currentSongLabel,pUVar14);
          pUVar16 = (__this->fields).DoublePanelRight;
          pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x98);
          pSVar10 = UI_UIManager__GetLocale
                              ((System_String_o *)category,(System_String_o *)pUVar5,"ForcePlaylist",
                               (System_String_o *)"",(System_String_o *)"",in_R9);
          pIVar20 = (Il2CppClass *)0x7;
          pSVar15 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
          pIVar21 = "Default";
          if (pSVar15 != (System_String_array *)0x0) {
            if ((int)pSVar15->max_length != 0) {
              pSVar15->m_Items[0] = (System_String_o *)"Default";
              il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
              pIVar22 = "Custom";
              pIVar20 = pIVar21;
              if (1 < (uint)pSVar15->max_length) {
                pSVar15->m_Items[1] = (System_String_o *)"Custom";
                il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
                pIVar21 = "Menu";
                pIVar20 = pIVar22;
                if (2 < (uint)pSVar15->max_length) {
                  pSVar15->m_Items[2] = (System_String_o *)"Menu";
                  il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 2);
                  pIVar22 = "Ambient";
                  pIVar20 = pIVar21;
                  if (3 < (uint)pSVar15->max_length) {
                    pSVar15->m_Items[3] = (System_String_o *)"Ambient";
                    il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 3);
                    pIVar21 = "Peaceful";
                    pIVar20 = pIVar22;
                    if (4 < (uint)pSVar15->max_length) {
                      pSVar15->m_Items[4] = (System_String_o *)"Peaceful";
                      il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 4);
                      pIVar22 = "Battle";
                      pIVar20 = pIVar21;
                      if (5 < (uint)pSVar15->max_length) {
                        pSVar15->m_Items[5] = (System_String_o *)"Battle";
                        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 5);
                        pIVar20 = pIVar22;
                        if (6 < (uint)pSVar15->max_length) {
                          pSVar15->m_Items[6] = "Racing";
                          il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 6);
                          pIVar20 = pIVar12;
                          in_R9 = "";
                          UI_ElementFactory__CreateDropdownSetting
                                    (pUVar16,(UI_ElementStyle_o *)pIVar12,pSVar3,pSVar10,pSVar15,
                                     (System_String_o *)"",160.0,40.0,300.0,
                                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                                     (MethodInfo *)0x0);
                          if (*(long *)(lVar18 + 0xa0) != 0) {
                            pSVar10 = *(System_String_o **)(*(long *)(lVar18 + 0xa0) + 0x18);
                            bVar8 = System_String__op_Equality
                                              (pSVar10,(System_String_o *)"",(MethodInfo *)0x0);
                            if ((char)bVar8 != '\0') {
                              pSVar10 = "None";
                            }
                            pUVar16 = (__this->fields).DoublePanelRight;
                            if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            str0 = UI_UIManager__GetLocale
                                             ((System_String_o *)category,(System_String_o *)pUVar5,
                                              "CustomPlaylist",(System_String_o *)"",
                                              (System_String_o *)"",in_R9);
                            pSVar10 = System_String__Concat_3af7150
                                                (str0,": ",pSVar10,(MethodInfo *)0x0);
                            in_R9 = (MethodInfo *)0x0;
                            UI_ElementFactory__CreateDefaultLabel
                                      (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar10,0,3,(MethodInfo *)0x0);
                            pIVar20 = (Il2CppClass *)0x3;
                            pUVar13 = UI_ElementFactory__CreateHorizontalGroup
                                                ((__this->fields).DoublePanelRight,10.0,3,(MethodInfo *)0x0);
                            parent = pUVar5;
                            if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar16 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "AddSong",(System_String_o *)"",
                                                   (System_String_o *)"",in_R9);
                              pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              UI_ElementFactory__CreateDefaultButton
                                        (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar10,0.0,0.0,pUVar17,
                                         (MethodInfo *)0x0);
                              pSVar10 = "Clear";
                              if (g_data_057ae727 == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                                il2cpp_runtime_helper_023445d0(&"Common");
                                il2cpp_runtime_helper_023445d0(&"");
                                g_data_057ae727 = '\x01';
                              }
                              if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSVar10 = UI_UIManager__GetLocale
                                                  ("Common",pSVar10,(System_String_o *)"",
                                                   (System_String_o *)"",
                                                   (System_String_o *)"",in_R9);
                              pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              UI_ElementFactory__CreateDefaultButton
                                        (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar10,0.0,0.0,pUVar17,
                                         (MethodInfo *)0x0);
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,
                                         (MethodInfo *)0x0);
                              pUVar16 = (__this->fields).DoublePanelRight;
                              pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0xb0);
                              pMVar23 = "";
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "VoiceChatInput",(System_String_o *)"",
                                                   (System_String_o *)"",in_R9);
                              pSVar15 = UI_UIManager__GetLocaleArray
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "VoiceChatInputOptions",(System_String_o *)"",pMVar23);
                              pMVar23 = "";
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar16,(UI_ElementStyle_o *)pIVar12,pSVar3,pSVar10,pSVar15,
                                         (System_String_o *)"",160.0,40.0,300.0,
                                         (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                                         ,(MethodInfo *)0x0);
                              pUVar16 = (__this->fields).DoublePanelRight;
                              pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0xa8);
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "VoiceChatDevice",(System_String_o *)"",
                                                   (System_String_o *)"",pMVar23);
                              if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSVar15 = ApplicationManagers_VoiceChatManager__get_MicrophoneDevices
                                                  ((MethodInfo *)0x0);
                              pMVar23 = "";
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar16,(UI_ElementStyle_o *)pIVar12,pSVar3,pSVar10,pSVar15,
                                         (System_String_o *)"",160.0,40.0,300.0,
                                         (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                                         ,(MethodInfo *)0x0);
                              pUVar16 = (__this->fields).DoublePanelRight;
                              pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0xb8);
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "VoiceChatMicVolume",(System_String_o *)"",
                                                   (System_String_o *)"",pMVar23);
                              pMVar23 = (MethodInfo *)0x2;
                              UI_ElementFactory__CreateSliderSetting
                                        (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,
                                         (System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
                              pUVar16 = (__this->fields).DoublePanelRight;
                              pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0xc0);
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "VoiceChatAudioVolume",(System_String_o *)"",
                                                   (System_String_o *)"",pMVar23);
                              pMVar23 = (MethodInfo *)0x2;
                              UI_ElementFactory__CreateSliderSetting
                                        (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,
                                         (System_String_o *)"",135.0,16.0,2,(MethodInfo *)0x0);
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,
                                         (MethodInfo *)0x0);
                              pUVar16 = (__this->fields).DoublePanelRight;
                              pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x80);
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "OldHookEffect",(System_String_o *)"",
                                                   (System_String_o *)"",pMVar23);
                              pMVar23 = (MethodInfo *)0x0;
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,
                                         (System_String_o *)"",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              pUVar16 = (__this->fields).DoublePanelRight;
                              pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x88);
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "OldBladeEffect",(System_String_o *)"",
                                                   (System_String_o *)"",pMVar23);
                              pMVar23 = (MethodInfo *)0x0;
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,
                                         (System_String_o *)"",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              pUVar16 = (__this->fields).DoublePanelRight;
                              pSVar3 = *(Settings_BaseSetting_o **)(lVar18 + 0x90);
                              pSVar10 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,(System_String_o *)pUVar5,
                                                   "OldNapeEffect",(System_String_o *)"",
                                                   (System_String_o *)"",pMVar23);
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar16,(UI_ElementStyle_o *)pIVar11,pSVar3,pSVar10,
                                         (System_String_o *)"",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          goto label_0444eae2;
                        }
                      }
                    }
                  }
                }
              }
            }
            il2cpp_runtime_helper_022b2ca0();
          }
        }
      }
      goto label_0444eae2;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae708 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"AddSong");
    il2cpp_runtime_helper_023445d0(&"AddFinish");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae708 = '\x01';
  }
  pIVar11 = pIVar20;
  bVar8 = System_String__op_Equality((System_String_o *)pIVar20,"Clear",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    bVar8 = System_String__op_Equality((System_String_o *)pIVar20,"Add",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      bVar8 = System_String__op_Equality((System_String_o *)pIVar20,"AddFinish",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      pIVar11 = pIVar20;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pIVar20,MethodInfo_List_1_System_String);
      lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0xa0), lVar18 != 0)) &&
          (pIVar11 = *(Il2CppClass **)(lVar18 + 0x18), pIVar11 != (Il2CppClass *)0x0)) &&
         (pSVar15 = System_String__Split((System_String_o *)pIVar11,0x2c,0,(MethodInfo *)0x0),
         pSVar15 != (System_String_array *)0x0)) {
        uVar9 = (uint)pSVar15->max_length;
        if (pIVar20 == (Il2CppClass *)0x0) {
          if (0 < (int)uVar9) {
            lVar18 = 0;
            do {
              if (uVar9 <= (uint)lVar18) goto label_0444f0a9;
              pIVar11 = (Il2CppClass *)0x0;
              if (pSVar15->m_Items[lVar18] == (System_String_o *)0x0) goto label_0444f0a4;
              pIVar11 = (Il2CppClass *)System_String__Trim(pSVar15->m_Items[lVar18],(MethodInfo *)0x0);
              bVar8 = System_String__op_Inequality
                                ((System_String_o *)pIVar11,(System_String_o *)"",(MethodInfo *)0x0)
              ;
              if ((char)bVar8 != '\0') goto label_0444f0a4;
              uVar9 = (uint)pSVar15->max_length;
              lVar18 = lVar18 + 1;
            } while ((int)lVar18 < (int)uVar9);
          }
        }
        else if (0 < (int)uVar9) {
          uVar19 = 0;
          if (uVar9 != 0) {
            do {
              pSVar10 = pSVar15->m_Items[(int)uVar19];
              if (pSVar10 == (System_String_o *)0x0) goto label_0444f0a4;
              pIVar11 = (Il2CppClass *)System_String__Trim(pSVar10,(MethodInfo *)0x0);
              bVar8 = System_String__op_Inequality
                                ((System_String_o *)pIVar11,(System_String_o *)"",(MethodInfo *)0x0)
              ;
              lVar18 = MethodInfo_Void_Add;
              if ((char)bVar8 == '\0') {
label_0444ee4a:
                uVar9 = (uint)pSVar15->max_length;
                if ((int)uVar9 <= (int)(uVar19 + 1)) goto label_0444ef40;
              }
              else {
                piVar1 = (int *)((long)&(pIVar20->_1).namespaze + 4);
                *piVar1 = *piVar1 + 1;
                pcVar6 = (pIVar20->_1).name;
                if (pcVar6 == (char *)0x0) goto label_0444f0a4;
                uVar9 = *(uint *)&(pIVar20->_1).namespaze;
                if (*(uint *)(pcVar6 + 0x18) <= uVar9) {
                  pIVar11 = pIVar20;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pIVar20,(Il2CppObject *)pSVar10,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                  goto label_0444ee4a;
                }
                *(uint *)&(pIVar20->_1).namespaze = uVar9 + 1;
                pIVar11 = (Il2CppClass *)(pcVar6 + (long)(int)uVar9 * 8 + 0x20);
                *(System_String_o **)(pcVar6 + (long)(int)uVar9 * 8 + 0x20) = pSVar10;
                il2cpp_runtime_helper_022b4080();
                uVar9 = (uint)pSVar15->max_length;
                if ((int)uVar9 <= (int)(uVar19 + 1)) goto label_0444ef40;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar9);
          }
          goto label_0444f0a9;
        }
label_0444ef40:
        if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar18 = *(long *)((long)TypeInfo_UIManager->static_fields + 0x28);
        pIVar11 = TypeInfo_UIManager;
        if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x90), lVar18 != 0)) &&
           (lVar18 = *(long *)(lVar18 + 0x138), lVar18 != 0)) {
          pIVar12 = *(Il2CppClass **)(lVar18 + 0x18);
          pIVar11 = pIVar12;
          bVar8 = System_String__op_Inequality
                            ((System_String_o *)pIVar12,(System_String_o *)"",(MethodInfo *)0x0);
          lVar18 = MethodInfo_Void_Add;
          if ((char)bVar8 == '\0') {
            if (pIVar20 != (Il2CppClass *)0x0) {
label_0444f01c:
              lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if (lVar18 != 0) {
                pSVar4 = *(Settings_TypedSetting_T__o **)(lVar18 + 0xa0);
                pMVar23 = "";
                if (*(int *)&(pIVar20->_1).namespaze != 0) {
                  pSVar15 = (System_String_array *)
                            System_Collections_Generic_List_object___ToArray
                                      ((System_Collections_Generic_List_object__o *)pIVar20,MethodInfo_String_ToArray);
                  pIVar11 = ",";
                  pMVar23 = (MethodInfo *)
                            System_String__Join((System_String_o *)",",pSVar15,(MethodInfo *)0x0);
                }
                if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
                  Settings_TypedSetting_object___set_Value(pSVar4,(Il2CppObject *)pMVar23,MethodInfo_Void_set_Value);
                  pUVar5 = (parent->fields).Parent;
                  goto joined_r0x0444f09e;
                }
              }
            }
          }
          else if (pIVar20 != (Il2CppClass *)0x0) {
            piVar1 = (int *)((long)&(pIVar20->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar6 = (pIVar20->_1).name;
            if (pcVar6 != (char *)0x0) {
              uVar9 = *(uint *)&(pIVar20->_1).namespaze;
              if (uVar9 < *(uint *)(pcVar6 + 0x18)) {
                *(uint *)&(pIVar20->_1).namespaze = uVar9 + 1;
                pIVar11 = (Il2CppClass *)(pcVar6 + (long)(int)uVar9 * 8 + 0x20);
                *(Il2CppClass **)(pcVar6 + (long)(int)uVar9 * 8 + 0x20) = pIVar12;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIVar11 = pIVar20;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar20,(Il2CppObject *)pIVar12,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0444f01c;
            }
          }
        }
      }
    }
    else {
      if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar18 = *(long *)((long)TypeInfo_UIManager->static_fields + 0x28);
      pIVar11 = TypeInfo_UIManager;
      if (lVar18 != 0) {
        __this_00 = *(UI_SelectListPopup_o **)(lVar18 + 0x90);
        items = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
        pSVar10 = UI_UIManager__GetLocale
                            ("SettingsPopup",(System_String_o *)"Sound","AddSong",
                             (System_String_o *)"",(System_String_o *)"",in_R9);
        pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pIVar11 = pIVar20;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UI_SelectListPopup_o *)0x0) {
          UI_SelectListPopup__ShowLoad
                    (__this_00,items,pSVar10,(UnityEngine_Events_UnityAction_o *)pIVar20,
                     (UnityEngine_Events_UnityAction_o *)0x0,(System_Collections_Generic_List_string__o *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if (lVar18 != 0) {
      pSVar4 = *(Settings_TypedSetting_T__o **)(lVar18 + 0xa0);
      pIVar11 = (Il2CppClass *)0x0;
      if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value(pSVar4,(Il2CppObject *)"",MethodInfo_Void_set_Value);
        pUVar5 = (parent->fields).Parent;
joined_r0x0444f09e:
        pIVar11 = (Il2CppClass *)0x0;
        if (pUVar5 != (UI_BasePanel_o *)0x0) {
          UI_BasePanel__RebuildCategoryPanel(pUVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0444f0a4:
  il2cpp_runtime_helper_022b2c90();
label_0444f0a9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae709 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"CurrentSong");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae709 = '\x01';
  }
  x = (pIVar11->_1).typeMetadataHandle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  plVar7 = (pIVar11->_1).typeMetadataHandle;
  if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UI_CategoryPanel_o *)
              UI_UIManager__GetLocale
                        ("SettingsPopup",(System_String_o *)"Sound","CurrentSong",
                         (System_String_o *)"",(System_String_o *)"",in_R9);
  pSVar10 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
  pSVar10 = System_String__Concat_3af7150((System_String_o *)__this_01,": ",pSVar10,(MethodInfo *)0x0)
  ;
  if (plVar7 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UI_CategoryPanel___ctor(__this_01,(MethodInfo *)0x0);
    return;
  }
  lVar18 = *plVar7;
  (**(code **)(lVar18 + 0x5e8))
            (plVar7,pSVar10,*(undefined8 *)(lVar18 + 0x5f0),lVar18,*(code **)(lVar18 + 0x5e8));
  return;
}


// UI.SettingsSoundPanel$$OnButtonClick
// il2cpp: void UI_SettingsSoundPanel__OnButtonClick (UI_SettingsSoundPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x444eaf0

void UI_SettingsSoundPanel__OnButtonClick
               (UI_SettingsSoundPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int *piVar1;
  Settings_TypedSetting_T__o *pSVar2;
  UI_BasePanel_o *__this_00;
  UI_SelectListPopup_o *__this_01;
  long lVar3;
  UnityEngine_Events_UnityAction_o *a;
  System_DelegateData_o *pSVar4;
  System_DelegateData_c *pSVar5;
  code *vtableDispatch;
  bool_conflict bVar6;
  uint uVar7;
  System_Collections_Generic_List_string__o *items;
  UnityEngine_Events_UnityAction_o *pUVar8;
  System_String_array *pSVar9;
  UnityEngine_Events_UnityAction_o *__this_02;
  UI_CategoryPanel_o *__this_03;
  System_String_o *pSVar10;
  long lVar11;
  uint uVar12;
  MethodInfo *in_R9;
  
  if (g_data_057ae708 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"Add");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"AddSong");
    il2cpp_runtime_helper_023445d0(&"AddFinish");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae708 = '\x01';
  }
  __this_02 = (UnityEngine_Events_UnityAction_o *)name;
  bVar6 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    bVar6 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      bVar6 = System_String__op_Equality(name,"AddFinish",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      __this_02 = pUVar8;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pUVar8,MethodInfo_List_1_System_String);
      lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0xa0), lVar11 != 0)) &&
          (__this_02 = *(UnityEngine_Events_UnityAction_o **)(lVar11 + 0x18),
          __this_02 != (UnityEngine_Events_UnityAction_o *)0x0)) &&
         (pSVar9 = System_String__Split((System_String_o *)__this_02,0x2c,0,(MethodInfo *)0x0),
         pSVar9 != (System_String_array *)0x0)) {
        uVar7 = (uint)pSVar9->max_length;
        if (pUVar8 == (UnityEngine_Events_UnityAction_o *)0x0) {
          if (0 < (int)uVar7) {
            lVar11 = 0;
            do {
              if (uVar7 <= (uint)lVar11) goto label_0444f0a9;
              __this_02 = (UnityEngine_Events_UnityAction_o *)0x0;
              if (pSVar9->m_Items[lVar11] == (System_String_o *)0x0) goto label_0444f0a4;
              __this_02 = (UnityEngine_Events_UnityAction_o *)
                          System_String__Trim(pSVar9->m_Items[lVar11],(MethodInfo *)0x0);
              bVar6 = System_String__op_Inequality
                                ((System_String_o *)__this_02,"",(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') goto label_0444f0a4;
              uVar7 = (uint)pSVar9->max_length;
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < (int)uVar7);
          }
        }
        else if (0 < (int)uVar7) {
          uVar12 = 0;
          if (uVar7 != 0) {
            do {
              pSVar10 = pSVar9->m_Items[(int)uVar12];
              if (pSVar10 == (System_String_o *)0x0) goto label_0444f0a4;
              __this_02 = (UnityEngine_Events_UnityAction_o *)System_String__Trim(pSVar10,(MethodInfo *)0x0);
              bVar6 = System_String__op_Inequality
                                ((System_String_o *)__this_02,"",(MethodInfo *)0x0);
              lVar11 = MethodInfo_Void_Add;
              if ((char)bVar6 == '\0') {
label_0444ee4a:
                uVar7 = (uint)pSVar9->max_length;
                if ((int)uVar7 <= (int)(uVar12 + 1)) goto label_0444ef40;
              }
              else {
                piVar1 = (int *)((long)&(pUVar8->fields).invoke_impl + 4);
                *piVar1 = *piVar1 + 1;
                lVar3 = (pUVar8->fields).method_ptr;
                if (lVar3 == 0) goto label_0444f0a4;
                uVar7 = (uint)(pUVar8->fields).invoke_impl;
                if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                  __this_02 = pUVar8;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pUVar8,(Il2CppObject *)pSVar10,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  goto label_0444ee4a;
                }
                *(uint *)&(pUVar8->fields).invoke_impl = uVar7 + 1;
                __this_02 = (UnityEngine_Events_UnityAction_o *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
                *(System_String_o **)(lVar3 + 0x20 + (long)(int)uVar7 * 8) = pSVar10;
                il2cpp_runtime_helper_022b4080();
                uVar7 = (uint)pSVar9->max_length;
                if ((int)uVar7 <= (int)(uVar12 + 1)) goto label_0444ef40;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar7);
          }
          goto label_0444f0a9;
        }
label_0444ef40:
        if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar11 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
        __this_02 = TypeInfo_UIManager;
        if (((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x90), lVar11 != 0)) &&
           (lVar11 = *(long *)(lVar11 + 0x138), lVar11 != 0)) {
          a = *(UnityEngine_Events_UnityAction_o **)(lVar11 + 0x18);
          __this_02 = a;
          bVar6 = System_String__op_Inequality((System_String_o *)a,"",(MethodInfo *)0x0);
          lVar11 = MethodInfo_Void_Add;
          if ((char)bVar6 == '\0') {
            if (pUVar8 != (UnityEngine_Events_UnityAction_o *)0x0) {
label_0444f01c:
              lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if (lVar11 != 0) {
                pSVar2 = *(Settings_TypedSetting_T__o **)(lVar11 + 0xa0);
                pSVar10 = "";
                if ((int)(pUVar8->fields).invoke_impl != 0) {
                  pSVar9 = (System_String_array *)
                           System_Collections_Generic_List_object___ToArray
                                     ((System_Collections_Generic_List_object__o *)pUVar8,MethodInfo_String_ToArray);
                  __this_02 = ",";
                  pSVar10 = System_String__Join((System_String_o *)",",pSVar9,(MethodInfo *)0x0);
                }
                if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
                  Settings_TypedSetting_object___set_Value(pSVar2,(Il2CppObject *)pSVar10,MethodInfo_Void_set_Value);
                  __this_00 = (__this->fields).Parent;
                  goto joined_r0x0444f09e;
                }
              }
            }
          }
          else if (pUVar8 != (UnityEngine_Events_UnityAction_o *)0x0) {
            piVar1 = (int *)((long)&(pUVar8->fields).invoke_impl + 4);
            *piVar1 = *piVar1 + 1;
            lVar3 = (pUVar8->fields).method_ptr;
            if (lVar3 != 0) {
              uVar7 = (uint)(pUVar8->fields).invoke_impl;
              if (uVar7 < *(uint *)(lVar3 + 0x18)) {
                *(uint *)&(pUVar8->fields).invoke_impl = uVar7 + 1;
                __this_02 = (UnityEngine_Events_UnityAction_o *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
                *(UnityEngine_Events_UnityAction_o **)(lVar3 + 0x20 + (long)(int)uVar7 * 8) = a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                __this_02 = pUVar8;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pUVar8,(Il2CppObject *)a,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              goto label_0444f01c;
            }
          }
        }
      }
    }
    else {
      if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar11 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
      __this_02 = TypeInfo_UIManager;
      if (lVar11 != 0) {
        __this_01 = *(UI_SelectListPopup_o **)(lVar11 + 0x90);
        items = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
        pSVar10 = UI_UIManager__GetLocale
                            ("SettingsPopup","Sound","AddSong","","",in_R9);
        pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        __this_02 = pUVar8;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_SelectListPopup_o *)0x0) {
          UI_SelectListPopup__ShowLoad
                    (__this_01,items,pSVar10,pUVar8,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if (lVar11 != 0) {
      pSVar2 = *(Settings_TypedSetting_T__o **)(lVar11 + 0xa0);
      __this_02 = (UnityEngine_Events_UnityAction_o *)0x0;
      if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value(pSVar2,(Il2CppObject *)"",MethodInfo_Void_set_Value);
        __this_00 = (__this->fields).Parent;
joined_r0x0444f09e:
        __this_02 = (UnityEngine_Events_UnityAction_o *)0x0;
        if (__this_00 != (UI_BasePanel_o *)0x0) {
          UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0444f0a4:
  il2cpp_runtime_helper_022b2c90();
label_0444f0a9:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae709 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"CurrentSong");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae709 = '\x01';
  }
  pSVar4 = (__this_02->fields).data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pSVar4 = (__this_02->fields).data;
  if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = (UI_CategoryPanel_o *)
              UI_UIManager__GetLocale("SettingsPopup","Sound","CurrentSong","","",in_R9);
  pSVar10 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
  pSVar10 = System_String__Concat_3af7150((System_String_o *)__this_03,": ",pSVar10,(MethodInfo *)0x0)
  ;
  if (pSVar4 == (System_DelegateData_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UI_CategoryPanel___ctor(__this_03,(MethodInfo *)0x0);
    return;
  }
  pSVar5 = pSVar4->klass;
  vtableDispatch = pSVar5[4]._1.gc_desc;
  (*vtableDispatch)(pSVar4,pSVar10,pSVar5[4]._1.name,pSVar5,vtableDispatch);
  return;
}


// UI.SettingsSoundPanel$$Update
// il2cpp: void UI_SettingsSoundPanel__Update (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x444f0b0

void UI_SettingsSoundPanel__Update(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  UI_CategoryPanel_o *__this_00;
  System_String_o *pSVar4;
  MethodInfo *in_R9;
  
  if (g_data_057ae709 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"CurrentSong");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae709 = '\x01';
  }
  pUVar1 = (__this->fields)._currentSongLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._currentSongLabel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (UI_CategoryPanel_o *)
                UI_UIManager__GetLocale
                          ("SettingsPopup","Sound","CurrentSong","","",in_R9);
    pSVar4 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
    pSVar4 = System_String__Concat_3af7150((System_String_o *)__this_00,": ",pSVar4,(MethodInfo *)0x0)
    ;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar2 = pUVar1->klass;
      vtableDispatch = (pUVar2->vtable)._75_set_text.methodPtr;
      (*vtableDispatch)
                (pUVar1,pSVar4,(pUVar2->vtable)._75_set_text.method,pUVar2,vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    UI_CategoryPanel___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.SettingsSoundPanel$$.ctor
// il2cpp: void UI_SettingsSoundPanel___ctor (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x444f1f0

void UI_SettingsSoundPanel___ctor(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSoundPanel$$<Setup>b__3_0
// il2cpp: void UI_SettingsSoundPanel___Setup_b__3_0 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x444f200

void UI_SettingsSoundPanel___Setup_b__3_0(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae70a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Add");
    g_data_057ae70a = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"Add",in_RDX);
  return;
}


// UI.SettingsSoundPanel$$<Setup>b__3_1
// il2cpp: void UI_SettingsSoundPanel___Setup_b__3_1 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x444f240

void UI_SettingsSoundPanel___Setup_b__3_1(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae70b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Clear");
    g_data_057ae70b = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.SettingsSoundPanel$$<OnButtonClick>b__4_0
// il2cpp: void UI_SettingsSoundPanel___OnButtonClick_b__4_0 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x444f280

void UI_SettingsSoundPanel___OnButtonClick_b__4_0(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae70c == '\0') {
    il2cpp_runtime_helper_023445d0(&"AddFinish");
    g_data_057ae70c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"AddFinish",in_RDX);
  return;
}


