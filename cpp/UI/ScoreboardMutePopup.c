// Type: UI.ScoreboardMutePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardMutePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardMutePopup.cs
// --------------------------------

// UI.ScoreboardMutePopup$$get_Title
// il2cpp: System_String_o* UI_ScoreboardMutePopup__get_Title (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e3f30

System_String_o * UI_ScoreboardMutePopup__get_Title(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae4be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"MutePopup");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
    g_data_057ae4be = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","MutePopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardMutePopup$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardMutePopup__get_VerticalPadding (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e3fd0

int32_t UI_ScoreboardMutePopup__get_VerticalPadding(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ScoreboardMutePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ScoreboardMutePopup__get_HorizontalPadding (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e3fe0

int32_t UI_ScoreboardMutePopup__get_HorizontalPadding(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ScoreboardMutePopup$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardMutePopup__get_VerticalSpacing (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e3ff0

float UI_ScoreboardMutePopup__get_VerticalSpacing(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.ScoreboardMutePopup$$get_Width
// il2cpp: float UI_ScoreboardMutePopup__get_Width (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e4000

float UI_ScoreboardMutePopup__get_Width(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.ScoreboardMutePopup$$get_Height
// il2cpp: float UI_ScoreboardMutePopup__get_Height (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e4010

float UI_ScoreboardMutePopup__get_Height(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 350.0;
}


// UI.ScoreboardMutePopup$$get_PanelAlignment
// il2cpp: int32_t UI_ScoreboardMutePopup__get_PanelAlignment (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e4020

int32_t UI_ScoreboardMutePopup__get_PanelAlignment(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ScoreboardMutePopup$$Setup
// il2cpp: void UI_ScoreboardMutePopup__Setup (UI_ScoreboardMutePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43e4030

void UI_ScoreboardMutePopup__Setup(UI_ScoreboardMutePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *setting;
  System_String_o *category;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  UnityEngine_Events_UnityAction_o *onClick;
  System_String_o *pSVar4;
  
  if (g_data_057ae4bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MuteText");
    il2cpp_runtime_helper_023445d0(&"VoiceVolume");
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"MuteEmote");
    il2cpp_runtime_helper_023445d0(&"MutePopup");
    il2cpp_runtime_helper_023445d0(&"MuteVoice");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
    g_data_057ae4bf = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  category = "ScoreboardPopup";
  pSVar4 = "MutePopup";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,250.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x18,75.0,0.0,pSVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar3,0.0,onClick,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = (__this->fields)._muteEmote;
  pSVar3 = UI_UIManager__GetLocale(category,pSVar4,"MuteEmote","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar1,__this_01,(Settings_BaseSetting_o *)pSVar2,pSVar3,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = (__this->fields)._muteText;
  pSVar3 = UI_UIManager__GetLocale(category,pSVar4,"MuteText","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar1,__this_01,(Settings_BaseSetting_o *)pSVar2,pSVar3,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = (__this->fields)._muteVoice;
  pSVar3 = UI_UIManager__GetLocale(category,pSVar4,"MuteVoice","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar1,__this_01,(Settings_BaseSetting_o *)pSVar2,pSVar3,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  setting = (__this->fields)._voiceVolume;
  pSVar4 = UI_UIManager__GetLocale(category,pSVar4,"VoiceVolume","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateSliderSetting
            (pUVar1,__this_02,(Settings_BaseSetting_o *)setting,pSVar4,"",150.0,16.0,2,
             (MethodInfo *)0x0);
  return;
}


// UI.ScoreboardMutePopup$$Show
// il2cpp: void UI_ScoreboardMutePopup__Show (UI_ScoreboardMutePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43e4410

void UI_ScoreboardMutePopup__Show
               (UI_ScoreboardMutePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  uint uVar3;
  byte in_CL;
  System_String_o *muteType;
  Photon_Realtime_Player_o *player_00;
  byte in_R8B;
  
  if (g_data_057ae4c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae4c0 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  player_00 = player;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._player);
  pSVar1 = (__this->fields)._muteEmote;
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
     pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    uVar3 = (player->fields).actorNumber;
    player_00 = (Photon_Realtime_Player_o *)(ulong)uVar3;
    uVar3 = System_Collections_Generic_HashSet_int___Contains(pSVar2,uVar3,MethodInfo_Boolean_Contains);
    if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
      player_00 = (Photon_Realtime_Player_o *)(ulong)(uVar3 & 0xff);
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar1,uVar3 & 0xff,MethodInfo_Void_set_Value);
      pSVar2 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
      if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        pSVar1 = (__this->fields)._muteText;
        uVar3 = (player->fields).actorNumber;
        player_00 = (Photon_Realtime_Player_o *)(ulong)uVar3;
        uVar3 = System_Collections_Generic_HashSet_int___Contains(pSVar2,uVar3,MethodInfo_Boolean_Contains);
        if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
          player_00 = (Photon_Realtime_Player_o *)(ulong)(uVar3 & 0xff);
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar1,uVar3 & 0xff,MethodInfo_Void_set_Value);
          pSVar2 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
          if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            pSVar1 = (__this->fields)._muteVoice;
            uVar3 = (player->fields).actorNumber;
            player_00 = (Photon_Realtime_Player_o *)(ulong)uVar3;
            uVar3 = System_Collections_Generic_HashSet_int___Contains(pSVar2,uVar3,MethodInfo_Boolean_Contains);
            if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)pSVar1,uVar3 & 0xff,MethodInfo_Void_set_Value);
              (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
                        (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057ae4c1 = '\x01';
  }
  if (((in_CL ^ 1) == 0) && (in_R8B == 0)) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__MutePlayer(player_00,muteType,(MethodInfo *)0x0);
    return;
  }
  if (((in_CL ^ 1) & in_R8B) == 1) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__UnmutePlayer(player_00,muteType,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardMutePopup$$HandleMute
// il2cpp: void UI_ScoreboardMutePopup__HandleMute (UI_ScoreboardMutePopup_o* __this, Photon_Realtime_Player_o* player, System_String_o* type, bool mute, bool isMuted, const MethodInfo* method);
// 0x43e45a0

void UI_ScoreboardMutePopup__HandleMute
               (UI_ScoreboardMutePopup_o *__this,Photon_Realtime_Player_o *player,System_String_o *type,
               bool_conflict mute,bool_conflict isMuted,MethodInfo *method)

{
  byte bVar1;
  
  if (g_data_057ae4c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057ae4c1 = '\x01';
  }
  bVar1 = (byte)mute ^ 1;
  if ((bVar1 == 0) && ((byte)isMuted == 0)) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__MutePlayer(player,type,(MethodInfo *)0x0);
    return;
  }
  if ((bVar1 & (byte)isMuted) == 1) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__UnmutePlayer(player,type,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardMutePopup$$OnButtonClick
// il2cpp: void UI_ScoreboardMutePopup__OnButtonClick (UI_ScoreboardMutePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43e4650

void UI_ScoreboardMutePopup__OnButtonClick
               (UI_ScoreboardMutePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float volume;
  char cVar1;
  Photon_Realtime_Player_o *pPVar2;
  Settings_FloatSetting_o *pSVar3;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  bool_conflict bVar7;
  Settings_BoolSetting_o *pSVar8;
  Il2CppRGCTXData *__this_00;
  long *__this_01;
  UnityEngine_Component_c *pUVar9;
  
  if (g_data_057ae4c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Emote");
    il2cpp_runtime_helper_023445d0(&"Voice");
    g_data_057ae4c2 = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar2 = (__this->fields)._player;
  __this_01 = (long *)TypeInfo_InGameManager;
  if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
     (__this_01 = *(long **)((long)TypeInfo_InGameManager->static_fields + 0x20),
     (UnityEngine_Component_c *)__this_01 == (UnityEngine_Component_c *)0x0)) goto label_043e4a51;
  bVar5 = System_Collections_Generic_HashSet_int___Contains
                    ((System_Collections_Generic_HashSet_int__o *)__this_01,(pPVar2->fields).actorNumber,
                     MethodInfo_Boolean_Contains);
  pPVar2 = (__this->fields)._player;
  if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
     (__this_01 = *(long **)((long)TypeInfo_InGameManager->static_fields + 0x28),
     (UnityEngine_Component_c *)__this_01 == (UnityEngine_Component_c *)0x0)) goto label_043e4a51;
  bVar6 = System_Collections_Generic_HashSet_int___Contains
                    ((System_Collections_Generic_HashSet_int__o *)__this_01,(pPVar2->fields).actorNumber,
                     MethodInfo_Boolean_Contains);
  pPVar2 = (__this->fields)._player;
  if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
     (__this_01 = *(long **)((long)TypeInfo_InGameManager->static_fields + 0x30),
     (UnityEngine_Component_c *)__this_01 == (UnityEngine_Component_c *)0x0)) goto label_043e4a51;
  bVar7 = System_Collections_Generic_HashSet_int___Contains
                    ((System_Collections_Generic_HashSet_int__o *)__this_01,(pPVar2->fields).actorNumber,
                     MethodInfo_Boolean_Contains);
  pSVar4 = "Emote";
  pSVar8 = (__this->fields)._muteEmote;
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_043e4a51;
  pUVar9 = (UnityEngine_Component_c *)(__this->fields)._player;
  cVar1 = *(char *)((long)&(pSVar8->fields).DefaultValue + 1);
  if (g_data_057ae4c1 == '\0') {
    __this_01 = &TypeInfo_ChatManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4c1 = '\x01';
  }
  if (cVar1 == '\0' || (char)bVar5 != '\0') {
    if ((char)bVar5 != '\x01' || cVar1 != '\0') goto label_043e487c;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__UnmutePlayer((Photon_Realtime_Player_o *)pUVar9,pSVar4,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._muteText;
    __this_01 = (long *)pUVar9;
    pSVar4 = "Text";
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__MutePlayer((Photon_Realtime_Player_o *)pUVar9,pSVar4,(MethodInfo *)0x0);
    __this_01 = (long *)pUVar9;
label_043e487c:
    pSVar8 = (__this->fields)._muteText;
    pSVar4 = "Text";
  }
  "Text" = pSVar4;
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_043e4a51;
  pUVar9 = (UnityEngine_Component_c *)(__this->fields)._player;
  cVar1 = *(char *)((long)&(pSVar8->fields).DefaultValue + 1);
  if (g_data_057ae4c1 == '\0') {
    __this_01 = &TypeInfo_ChatManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4c1 = '\x01';
  }
  if (cVar1 == '\0' || (char)bVar6 != '\0') {
    if ((char)bVar6 != '\x01' || cVar1 != '\0') goto label_043e492f;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__UnmutePlayer((Photon_Realtime_Player_o *)pUVar9,pSVar4,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._muteVoice;
    __this_01 = (long *)pUVar9;
    pSVar4 = "Voice";
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__MutePlayer((Photon_Realtime_Player_o *)pUVar9,pSVar4,(MethodInfo *)0x0);
    __this_01 = (long *)pUVar9;
label_043e492f:
    pSVar8 = (__this->fields)._muteVoice;
    pSVar4 = "Voice";
  }
  "Voice" = pSVar4;
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_043e4a51;
  pUVar9 = (UnityEngine_Component_c *)(__this->fields)._player;
  cVar1 = *(char *)((long)&(pSVar8->fields).DefaultValue + 1);
  if (g_data_057ae4c1 == '\0') {
    __this_01 = &TypeInfo_ChatManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4c1 = '\x01';
  }
  if (cVar1 == '\0' || (char)bVar7 != '\0') {
    if ((char)bVar7 != '\x01' || cVar1 != '\0') goto label_043e49e6;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__UnmutePlayer((Photon_Realtime_Player_o *)pUVar9,pSVar4,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._voiceVolume;
    __this_01 = (long *)pUVar9;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__MutePlayer((Photon_Realtime_Player_o *)pUVar9,pSVar4,(MethodInfo *)0x0);
    __this_01 = (long *)pUVar9;
label_043e49e6:
    pSVar3 = (__this->fields)._voiceVolume;
  }
  if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
    pPVar2 = (__this->fields)._player;
    volume = (pSVar3->fields)._value;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__SetPlayerVolume(pPVar2,volume,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
label_043e4a51:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    g_data_057ae4c3 = '\x01';
  }
  pSVar8 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar8,0,(MethodInfo *)0x0);
  (((UnityEngine_Component_c *)__this_01)->_1).implementedInterfaces = (Il2CppClass **)pSVar8;
  il2cpp_runtime_helper_022b4080(&(((UnityEngine_Component_c *)__this_01)->_1).implementedInterfaces);
  pSVar8 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar8,0,(MethodInfo *)0x0);
  (((UnityEngine_Component_c *)__this_01)->_1).interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)pSVar8;
  il2cpp_runtime_helper_022b4080(&(((UnityEngine_Component_c *)__this_01)->_1).interfaceOffsets);
  pSVar8 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar8,0,(MethodInfo *)0x0);
  ((UnityEngine_Component_c *)__this_01)->static_fields = pSVar8;
  il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_c *)__this_01)->static_fields);
  __this_00 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30((Settings_FloatSetting_o *)__this_00,1.0,0.0,1.0,(MethodInfo *)0x0);
  ((UnityEngine_Component_c *)__this_01)->rgctx_data = __this_00;
  il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_c *)__this_01)->rgctx_data);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardMutePopup$$.ctor
// il2cpp: void UI_ScoreboardMutePopup___ctor (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e4a60

void UI_ScoreboardMutePopup___ctor(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_FloatSetting_o *__this_00;
  
  if (g_data_057ae4c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    g_data_057ae4c3 = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields)._muteEmote = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._muteEmote);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields)._muteText = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._muteText);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields)._muteVoice = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._muteVoice);
  __this_00 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(__this_00,1.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields)._voiceVolume = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._voiceVolume);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardMutePopup$$<Setup>b__19_0
// il2cpp: void UI_ScoreboardMutePopup___Setup_b__19_0 (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x43e4b70

void UI_ScoreboardMutePopup___Setup_b__19_0(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae4c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae4c4 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ScoreboardMutePopup__OnButtonClick(__this,"Confirm",in_RDX);
  return;
}


