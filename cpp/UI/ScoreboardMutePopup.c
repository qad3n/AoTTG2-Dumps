// Type: UI.ScoreboardMutePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ScoreboardMutePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ScoreboardMutePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ScoreboardMutePopup$$get_Title
// il2cpp: System_String_o* UI_ScoreboardMutePopup__get_Title (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d1530

System_String_o *
UI_ScoreboardMutePopup__get_Title(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570472d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"MutePopup");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"ScoreboardPopup");
    DAT_0570472d = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("ScoreboardPopup","MutePopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardMutePopup$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardMutePopup__get_VerticalPadding (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d15d0

int32_t UI_ScoreboardMutePopup__get_VerticalPadding
                  (UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ScoreboardMutePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ScoreboardMutePopup__get_HorizontalPadding (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d15e0

int32_t UI_ScoreboardMutePopup__get_HorizontalPadding
                  (UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ScoreboardMutePopup$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardMutePopup__get_VerticalSpacing (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d15f0

float UI_ScoreboardMutePopup__get_VerticalSpacing
                (UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.ScoreboardMutePopup$$get_Width
// il2cpp: float UI_ScoreboardMutePopup__get_Width (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d1600

float UI_ScoreboardMutePopup__get_Width(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.ScoreboardMutePopup$$get_Height
// il2cpp: float UI_ScoreboardMutePopup__get_Height (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d1610

float UI_ScoreboardMutePopup__get_Height(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 350.0;
}


// UI.ScoreboardMutePopup$$get_PanelAlignment
// il2cpp: int32_t UI_ScoreboardMutePopup__get_PanelAlignment (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d1620

int32_t UI_ScoreboardMutePopup__get_PanelAlignment
                  (UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ScoreboardMutePopup$$Setup
// il2cpp: void UI_ScoreboardMutePopup__Setup (UI_ScoreboardMutePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40d1630

void UI_ScoreboardMutePopup__Setup
               (UI_ScoreboardMutePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

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
  
  if (DAT_0570472e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MuteText");
    il2cpp_init_method_metadata(&"VoiceVolume");
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"MuteEmote");
    il2cpp_init_method_metadata(&"MutePopup");
    il2cpp_init_method_metadata(&"MuteVoice");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"ScoreboardPopup");
    DAT_0570472e = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  category = "ScoreboardPopup";
  pSVar4 = "MutePopup";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,250.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x18,75.0,0.0,pSVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar3,0.0,onClick,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = (__this->fields)._muteEmote;
  pSVar3 = UI_UIManager__GetLocale
                     (category,pSVar4,"MuteEmote","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar1,__this_01,(Settings_BaseSetting_o *)pSVar2,pSVar3,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = (__this->fields)._muteText;
  pSVar3 = UI_UIManager__GetLocale
                     (category,pSVar4,"MuteText","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar1,__this_01,(Settings_BaseSetting_o *)pSVar2,pSVar3,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = (__this->fields)._muteVoice;
  pSVar3 = UI_UIManager__GetLocale
                     (category,pSVar4,"MuteVoice","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar1,__this_01,(Settings_BaseSetting_o *)pSVar2,pSVar3,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  setting = (__this->fields)._voiceVolume;
  pSVar4 = UI_UIManager__GetLocale
                     (category,pSVar4,"VoiceVolume","","",(MethodInfo *)0x0);
  UI_ElementFactory__CreateSliderSetting
            (pUVar1,__this_02,(Settings_BaseSetting_o *)setting,pSVar4,"",150.0,16.0,2,
             (MethodInfo *)0x0);
  return;
}


// UI.ScoreboardMutePopup$$Show
// il2cpp: void UI_ScoreboardMutePopup__Show (UI_ScoreboardMutePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40d1a10

void UI_ScoreboardMutePopup__Show
               (UI_ScoreboardMutePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  Settings_BoolSetting_o *pSVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  uint uVar3;
  
  if (DAT_0570472f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570472f = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  il2cpp_runtime_glue(&(__this->fields)._player,player);
  pSVar1 = (__this->fields)._muteEmote;
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
     pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    uVar3 = System_Collections_Generic_HashSet<int>__Contains
                      (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
    if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
      Settings_TypedSetting<bool>__set_Value
                ((Settings_TypedSetting_bool__o *)pSVar1,uVar3 & 0xff,MethodInfo_Void_set_Value);
      pSVar2 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
      if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        pSVar1 = (__this->fields)._muteText;
        uVar3 = System_Collections_Generic_HashSet<int>__Contains
                          (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
        if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
          Settings_TypedSetting<bool>__set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar1,uVar3 & 0xff,MethodInfo_Void_set_Value);
          pSVar2 = *(System_Collections_Generic_HashSet_int__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
          if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            pSVar1 = (__this->fields)._muteVoice;
            uVar3 = System_Collections_Generic_HashSet<int>__Contains
                              (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
            if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
              Settings_TypedSetting<bool>__set_Value
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardMutePopup$$HandleMute
// il2cpp: void UI_ScoreboardMutePopup__HandleMute (UI_ScoreboardMutePopup_o* __this, Photon_Realtime_Player_o* player, System_String_o* type, bool mute, bool isMuted, const MethodInfo* method);
// 0x40d1ba0

void UI_ScoreboardMutePopup__HandleMute
               (UI_ScoreboardMutePopup_o *__this,Photon_Realtime_Player_o *player,
               System_String_o *type,bool_conflict mute,bool_conflict isMuted,MethodInfo *method)

{
  byte bVar1;
  
  if (DAT_05704730 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05704730 = '\x01';
  }
  bVar1 = (byte)mute ^ 1;
  if ((bVar1 == 0) && ((byte)isMuted == 0)) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__MutePlayer(player,type,(MethodInfo *)0x0);
    return;
  }
  if ((bVar1 & (byte)isMuted) == 1) {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__UnmutePlayer(player,type,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardMutePopup$$OnButtonClick
// il2cpp: void UI_ScoreboardMutePopup__OnButtonClick (UI_ScoreboardMutePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40d1c50

void UI_ScoreboardMutePopup__OnButtonClick
               (UI_ScoreboardMutePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float volume;
  char cVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  System_String_o *pSVar6;
  bool_conflict bVar7;
  bool_conflict bVar8;
  bool_conflict bVar9;
  
  if (DAT_05704731 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Voice");
    DAT_05704731 = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar2 = (__this->fields)._player;
  if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
     (pSVar3 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
     pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_040d2051;
  bVar7 = System_Collections_Generic_HashSet<int>__Contains
                    (pSVar3,(pPVar2->fields).actorNumber,MethodInfo_Boolean_Contains);
  pPVar2 = (__this->fields)._player;
  if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
     (pSVar3 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28),
     pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_040d2051;
  bVar8 = System_Collections_Generic_HashSet<int>__Contains
                    (pSVar3,(pPVar2->fields).actorNumber,MethodInfo_Boolean_Contains);
  pPVar2 = (__this->fields)._player;
  if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
     (pSVar3 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30),
     pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_040d2051;
  bVar9 = System_Collections_Generic_HashSet<int>__Contains
                    (pSVar3,(pPVar2->fields).actorNumber,MethodInfo_Boolean_Contains);
  pSVar6 = "Emote";
  pSVar4 = (__this->fields)._muteEmote;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto LAB_040d2051;
  pPVar2 = (__this->fields)._player;
  cVar1 = *(char *)((long)&(pSVar4->fields).DefaultValue + 1);
  if (DAT_05704730 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05704730 = '\x01';
  }
  if (cVar1 == '\0' || (char)bVar7 != '\0') {
    if ((char)bVar7 != '\x01' || cVar1 != '\0') goto LAB_040d1e7c;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__UnmutePlayer(pPVar2,pSVar6,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._muteText;
    pSVar6 = "Text";
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__MutePlayer(pPVar2,pSVar6,(MethodInfo *)0x0);
LAB_040d1e7c:
    pSVar4 = (__this->fields)._muteText;
    pSVar6 = "Text";
  }
  "Text" = pSVar6;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto LAB_040d2051;
  pPVar2 = (__this->fields)._player;
  cVar1 = *(char *)((long)&(pSVar4->fields).DefaultValue + 1);
  if (DAT_05704730 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05704730 = '\x01';
  }
  if (cVar1 == '\0' || (char)bVar8 != '\0') {
    if ((char)bVar8 != '\x01' || cVar1 != '\0') goto LAB_040d1f2f;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__UnmutePlayer(pPVar2,pSVar6,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._muteVoice;
    pSVar6 = "Voice";
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__MutePlayer(pPVar2,pSVar6,(MethodInfo *)0x0);
LAB_040d1f2f:
    pSVar4 = (__this->fields)._muteVoice;
    pSVar6 = "Voice";
  }
  "Voice" = pSVar6;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto LAB_040d2051;
  pPVar2 = (__this->fields)._player;
  cVar1 = *(char *)((long)&(pSVar4->fields).DefaultValue + 1);
  if (DAT_05704730 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05704730 = '\x01';
  }
  if (cVar1 == '\0' || (char)bVar9 != '\0') {
    if ((char)bVar9 != '\x01' || cVar1 != '\0') goto LAB_040d1fe6;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__UnmutePlayer(pPVar2,pSVar6,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._voiceVolume;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__MutePlayer(pPVar2,pSVar6,(MethodInfo *)0x0);
LAB_040d1fe6:
    pSVar5 = (__this->fields)._voiceVolume;
  }
  if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
    pPVar2 = (__this->fields)._player;
    volume = (pSVar5->fields)._value;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__SetPlayerVolume(pPVar2,volume,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
LAB_040d2051:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardMutePopup$$.ctor
// il2cpp: void UI_ScoreboardMutePopup___ctor (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d2060

void UI_ScoreboardMutePopup___ctor(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_FloatSetting_o *__this_00;
  
  if (DAT_05704732 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    DAT_05704732 = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields)._muteEmote = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._muteEmote);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields)._muteText = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._muteText);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields)._muteVoice = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._muteVoice);
  __this_00 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(__this_00,1.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields)._voiceVolume = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._voiceVolume);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardMutePopup$$<Setup>b__19_0
// il2cpp: void UI_ScoreboardMutePopup___Setup_b__19_0 (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x40d2170

void UI_ScoreboardMutePopup__<Setup>b__19_0(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704733 == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_05704733 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ScoreboardMutePopup__OnButtonClick(__this,"Confirm",in_RDX);
  return;
}


