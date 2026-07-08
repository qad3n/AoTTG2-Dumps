// Type: UI.TutorialPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/TutorialPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/TutorialPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.TutorialPopup$$get_Title
// il2cpp: System_String_o* UI_TutorialPopup__get_Title (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x40ffe20

System_String_o * UI_TutorialPopup__get_Title(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570486d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"TutorialPopup");
    il2cpp_init_method_metadata(&"");
    DAT_0570486d = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","TutorialPopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.TutorialPopup$$get_Width
// il2cpp: float UI_TutorialPopup__get_Width (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x40ffec0

float UI_TutorialPopup__get_Width(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.TutorialPopup$$get_Height
// il2cpp: float UI_TutorialPopup__get_Height (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x40ffed0

float UI_TutorialPopup__get_Height(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.TutorialPopup$$get_VerticalSpacing
// il2cpp: float UI_TutorialPopup__get_VerticalSpacing (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x40ffee0

float UI_TutorialPopup__get_VerticalSpacing(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.TutorialPopup$$get_VerticalPadding
// il2cpp: int32_t UI_TutorialPopup__get_VerticalPadding (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x40ffef0

int32_t UI_TutorialPopup__get_VerticalPadding(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.TutorialPopup$$get_UseSound
// il2cpp: bool UI_TutorialPopup__get_UseSound (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x40fff00

bool_conflict UI_TutorialPopup__get_UseSound(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.TutorialPopup$$Setup
// il2cpp: void UI_TutorialPopup__Setup (UI_TutorialPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40fff10

void UI_TutorialPopup__Setup(UI_TutorialPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_String_o *pSVar4;
  
  if (DAT_0570486e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_4);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"BasicButton");
    il2cpp_init_method_metadata(&"VideoBasicTutorialsButton");
    il2cpp_init_method_metadata(&"TutorialPopup");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"VideoMiscTutorialsButton");
    il2cpp_init_method_metadata(&"VideoAdvancedTutorialsButton");
    DAT_0570486e = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "TutorialPopup";
  pSVar4 = "MainMenu";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"BasicButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"VideoBasicTutorialsButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"VideoAdvancedTutorialsButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar4 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"VideoMiscTutorialsButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,450.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$OnButtonClick
// il2cpp: void UI_TutorialPopup__OnButtonClick (UI_TutorialPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x41002f0

void UI_TutorialPopup__OnButtonClick
               (UI_TutorialPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  Settings_TypedSetting_T__o *pSVar3;
  Settings_TypedSetting_bool__o *pSVar4;
  Settings_TypedSetting_float__o *__this_00;
  bool_conflict bVar5;
  System_String_o *url;
  UI_ExternalLinkPopup_o *__this_01;
  
  if (DAT_0570486f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"AdvancedVideoTutorials");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Map Logic");
    il2cpp_init_method_metadata(&"Basic Tutorial");
    il2cpp_init_method_metadata(&"MiscVideoTutorials");
    il2cpp_init_method_metadata(&"Basic");
    il2cpp_init_method_metadata(&"Tutorial");
    il2cpp_init_method_metadata(&"BasicVideoTutorials");
    DAT_0570486f = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"Basic",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(name,"BasicVideoTutorials",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      bVar5 = System_String__op_Equality(name,"AdvancedVideoTutorials",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        bVar5 = System_String__op_Equality(name,"MiscVideoTutorials",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          bVar5 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            (*(__this->klass->vtable)._22_Hide.methodPtr)
                      (__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((lVar2 != 0) &&
           (__this_01 = *(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),
           __this_01 != (UI_ExternalLinkPopup_o *)0x0)) {
          url = (__this->fields)._miscTutorials;
          goto LAB_04100716;
        }
      }
      else {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((lVar2 != 0) &&
           (__this_01 = *(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),
           __this_01 != (UI_ExternalLinkPopup_o *)0x0)) {
          url = (__this->fields)._advancedTutorials;
LAB_04100716:
          UI_ExternalLinkPopup__Show(__this_01,url,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((lVar2 != 0) &&
         (__this_01 = *(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),
         __this_01 != (UI_ExternalLinkPopup_o *)0x0)) {
        url = (__this->fields)._basicTutorials;
        goto LAB_04100716;
      }
    }
  }
  else {
    ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
    ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) &&
         (pSVar3 = *(Settings_TypedSetting_T__o **)(lVar2 + 0x20),
         pSVar3 != (Settings_TypedSetting_T__o *)0x0)) {
        Settings_TypedSetting<object>__set_Value(pSVar3,"Tutorial",MethodInfo_Void_set_Value);
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
        if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) &&
           (pSVar3 = *(Settings_TypedSetting_T__o **)(lVar2 + 0x28),
           pSVar3 != (Settings_TypedSetting_T__o *)0x0)) {
          Settings_TypedSetting<object>__set_Value(pSVar3,"Basic Tutorial",MethodInfo_Void_set_Value);
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
          if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) &&
             (pSVar3 = *(Settings_TypedSetting_T__o **)(lVar2 + 0x30),
             pSVar3 != (Settings_TypedSetting_T__o *)0x0)) {
            Settings_TypedSetting<object>__set_Value(pSVar3,"Map Logic",MethodInfo_Void_set_Value);
            lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
            if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
               (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x78),
               pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
              Settings_TypedSetting<bool>__set_Value(pSVar4,0,MethodInfo_Void_set_Value);
              lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
              if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
                 (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x28),
                 pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
                Settings_TypedSetting<bool>__set_Value(pSVar4,1,MethodInfo_Void_set_Value);
                lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
                if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
                   (__this_00 = *(Settings_TypedSetting_float__o **)(lVar2 + 0x30),
                   __this_00 != (Settings_TypedSetting_float__o *)0x0)) {
                  Settings_TypedSetting<float>__set_Value(__this_00,1.0,MethodInfo_Void_set_Value);
                  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                  if (plVar1 != (long *)0x0) {
                    (**(code **)(*plVar1 + 0x1c8))
                              (plVar1,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                               *(undefined8 *)(*plVar1 + 0x1d0));
                    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
                        (Settings_MultiplayerSettings_o *)0x0) {
                      Settings_MultiplayerSettings__ConnectOffline
                                ((Settings_MultiplayerSettings_o *)
                                 **(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
                      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8)
                          != (Settings_MultiplayerSettings_o *)0x0) {
                        Settings_MultiplayerSettings__StartRoom
                                  ((Settings_MultiplayerSettings_o *)
                                   **(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TutorialPopup$$.ctor
// il2cpp: void UI_TutorialPopup___ctor (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4100770

void UI_TutorialPopup___ctor(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704870 == '\0') {
    il2cpp_init_method_metadata(&"https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt");
    il2cpp_init_method_metadata(&"https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH");
    il2cpp_init_method_metadata(&"https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I");
    DAT_05704870 = '\x01';
  }
  (__this->fields)._basicTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt";
  il2cpp_runtime_glue(&(__this->fields)._basicTutorials);
  (__this->fields)._advancedTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I";
  il2cpp_runtime_glue(&(__this->fields)._advancedTutorials);
  (__this->fields)._miscTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH";
  il2cpp_runtime_glue(&(__this->fields)._miscTutorials);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_0
// il2cpp: void UI_TutorialPopup___Setup_b__15_0 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4100810

void UI_TutorialPopup__<Setup>b__15_0(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704871 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704871 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_1
// il2cpp: void UI_TutorialPopup___Setup_b__15_1 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4100850

void UI_TutorialPopup__<Setup>b__15_1(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704872 == '\0') {
    il2cpp_init_method_metadata(&"Basic");
    DAT_05704872 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"Basic",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_2
// il2cpp: void UI_TutorialPopup___Setup_b__15_2 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4100890

void UI_TutorialPopup__<Setup>b__15_2(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704873 == '\0') {
    il2cpp_init_method_metadata(&"BasicVideoTutorials");
    DAT_05704873 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"BasicVideoTutorials",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_3
// il2cpp: void UI_TutorialPopup___Setup_b__15_3 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x41008d0

void UI_TutorialPopup__<Setup>b__15_3(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704874 == '\0') {
    il2cpp_init_method_metadata(&"AdvancedVideoTutorials");
    DAT_05704874 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"AdvancedVideoTutorials",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_4
// il2cpp: void UI_TutorialPopup___Setup_b__15_4 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4100910

void UI_TutorialPopup__<Setup>b__15_4(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704875 == '\0') {
    il2cpp_init_method_metadata(&"MiscVideoTutorials");
    DAT_05704875 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"MiscVideoTutorials",in_RDX);
  return;
}


