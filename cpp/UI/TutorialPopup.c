// Type: UI.TutorialPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TutorialPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TutorialPopup.cs
// --------------------------------

// UI.TutorialPopup$$get_Title
// il2cpp: System_String_o* UI_TutorialPopup__get_Title (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x44142f0

System_String_o * UI_TutorialPopup__get_Title(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae609 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"TutorialPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae609 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","TutorialPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.TutorialPopup$$get_Width
// il2cpp: float UI_TutorialPopup__get_Width (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4414390

float UI_TutorialPopup__get_Width(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.TutorialPopup$$get_Height
// il2cpp: float UI_TutorialPopup__get_Height (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x44143a0

float UI_TutorialPopup__get_Height(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.TutorialPopup$$get_VerticalSpacing
// il2cpp: float UI_TutorialPopup__get_VerticalSpacing (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x44143b0

float UI_TutorialPopup__get_VerticalSpacing(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.TutorialPopup$$get_VerticalPadding
// il2cpp: int32_t UI_TutorialPopup__get_VerticalPadding (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x44143c0

int32_t UI_TutorialPopup__get_VerticalPadding(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.TutorialPopup$$get_UseSound
// il2cpp: bool UI_TutorialPopup__get_UseSound (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x44143d0

bool_conflict UI_TutorialPopup__get_UseSound(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.TutorialPopup$$Setup
// il2cpp: void UI_TutorialPopup__Setup (UI_TutorialPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x44143e0

void UI_TutorialPopup__Setup(UI_TutorialPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_String_o *pSVar4;
  
  if (g_data_057ae60a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"BasicButton");
    il2cpp_runtime_helper_023445d0(&"VideoBasicTutorialsButton");
    il2cpp_runtime_helper_023445d0(&"TutorialPopup");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"VideoMiscTutorialsButton");
    il2cpp_runtime_helper_023445d0(&"VideoAdvancedTutorialsButton");
    g_data_057ae60a = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "TutorialPopup";
  pSVar4 = "MainMenu";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"BasicButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"VideoBasicTutorialsButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"VideoAdvancedTutorialsButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar4 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"VideoMiscTutorialsButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,450.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$OnButtonClick
// il2cpp: void UI_TutorialPopup__OnButtonClick (UI_TutorialPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44147c0

void UI_TutorialPopup__OnButtonClick(UI_TutorialPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long lVar1;
  Settings_TypedSetting_float__o *__this_00;
  long *plVar2;
  bool_conflict bVar3;
  System_String_o *url;
  UI_TooltipPopup_o *__this_01;
  UI_ExternalLinkPopup_o *__this_02;
  
  if (g_data_057ae60b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"AdvancedVideoTutorials");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Map Logic");
    il2cpp_runtime_helper_023445d0(&"Basic Tutorial");
    il2cpp_runtime_helper_023445d0(&"MiscVideoTutorials");
    il2cpp_runtime_helper_023445d0(&"Basic");
    il2cpp_runtime_helper_023445d0(&"Tutorial");
    il2cpp_runtime_helper_023445d0(&"BasicVideoTutorials");
    g_data_057ae60b = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Basic",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"BasicVideoTutorials",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(name,"AdvancedVideoTutorials",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        bVar3 = System_String__op_Equality(name,"MiscVideoTutorials",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          bVar3 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
          return;
        }
        if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
        __this_01 = TypeInfo_UIManager;
        if ((lVar1 != 0) &&
           (__this_02 = *(UI_ExternalLinkPopup_o **)(lVar1 + 0x40), __this_01 = (UI_TooltipPopup_o *)0x0,
           __this_02 != (UI_ExternalLinkPopup_o *)0x0)) {
          url = (__this->fields)._miscTutorials;
          goto label_04414be6;
        }
      }
      else {
        if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
        __this_01 = TypeInfo_UIManager;
        if ((lVar1 != 0) &&
           (__this_02 = *(UI_ExternalLinkPopup_o **)(lVar1 + 0x40), __this_01 = (UI_TooltipPopup_o *)0x0,
           __this_02 != (UI_ExternalLinkPopup_o *)0x0)) {
          url = (__this->fields)._advancedTutorials;
label_04414be6:
          UI_ExternalLinkPopup__Show(__this_02,url,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
      __this_01 = TypeInfo_UIManager;
      if ((lVar1 != 0) &&
         (__this_02 = *(UI_ExternalLinkPopup_o **)(lVar1 + 0x40), __this_01 = (UI_TooltipPopup_o *)0x0,
         __this_02 != (UI_ExternalLinkPopup_o *)0x0)) {
        url = (__this->fields)._basicTutorials;
        goto label_04414be6;
      }
    }
  }
  else {
    ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
    ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
    __this_01 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (__this_01 != (UI_TooltipPopup_o *)0x0) {
      (*(__this_01->klass->vtable)._4_get_ThemePanel.methodPtr)
                (__this_01,(__this_01->klass->vtable)._4_get_ThemePanel.method);
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
         (__this_01 = *(UI_TooltipPopup_o **)(lVar1 + 0x20), __this_01 != (UI_TooltipPopup_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_01,"Tutorial",MethodInfo_Void_set_Value);
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
        if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
           (__this_01 = *(UI_TooltipPopup_o **)(lVar1 + 0x28), __this_01 != (UI_TooltipPopup_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_01,"Basic Tutorial",MethodInfo_Void_set_Value);
          lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
          if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
             (__this_01 = *(UI_TooltipPopup_o **)(lVar1 + 0x30), __this_01 != (UI_TooltipPopup_o *)0x0)) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)__this_01,"Map Logic",MethodInfo_Void_set_Value);
            lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
            if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
               (__this_01 = *(UI_TooltipPopup_o **)(lVar1 + 0x78), __this_01 != (UI_TooltipPopup_o *)0x0)) {
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_Void_set_Value);
              lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
              if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
                 (__this_01 = *(UI_TooltipPopup_o **)(lVar1 + 0x28), __this_01 != (UI_TooltipPopup_o *)0x0)) {
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)__this_01,1,MethodInfo_Void_set_Value);
                lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
                if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
                   (__this_00 = *(Settings_TypedSetting_float__o **)(lVar1 + 0x30),
                   __this_01 = (UI_TooltipPopup_o *)0x0, __this_00 != (Settings_TypedSetting_float__o *)0x0))
                {
                  Settings_TypedSetting_float___set_Value(__this_00,1.0,MethodInfo_Void_set_Value);
                  plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                  __this_01 = (UI_TooltipPopup_o *)0x0;
                  if (plVar2 != (long *)0x0) {
                    (**(code **)(*plVar2 + 0x1c8))
                              (plVar2,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58),
                               *(undefined8 *)(*plVar2 + 0x1d0));
                    __this_01 = (UI_TooltipPopup_o *)0x0;
                    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
                        (Settings_MultiplayerSettings_o *)0x0) {
                      Settings_MultiplayerSettings__ConnectOffline
                                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                                 (MethodInfo *)0x0);
                      __this_01 = (UI_TooltipPopup_o *)0x0;
                      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
                          (Settings_MultiplayerSettings_o *)0x0) {
                        Settings_MultiplayerSettings__StartRoom
                                  ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae60c == '\0') {
    il2cpp_runtime_helper_023445d0(&"https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt");
    il2cpp_runtime_helper_023445d0(&"https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH");
    il2cpp_runtime_helper_023445d0(&"https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I");
    g_data_057ae60c = '\x01';
  }
  (__this_01->fields)._label = "https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt";
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._label);
  (__this_01->fields)._panel = "https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I";
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._panel);
  (__this_01->fields).Caller = "https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH";
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Caller);
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$.ctor
// il2cpp: void UI_TutorialPopup___ctor (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4414c40

void UI_TutorialPopup___ctor(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae60c == '\0') {
    il2cpp_runtime_helper_023445d0(&"https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt");
    il2cpp_runtime_helper_023445d0(&"https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH");
    il2cpp_runtime_helper_023445d0(&"https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I");
    g_data_057ae60c = '\x01';
  }
  (__this->fields)._basicTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt";
  il2cpp_runtime_helper_022b4080(&(__this->fields)._basicTutorials);
  (__this->fields)._advancedTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I";
  il2cpp_runtime_helper_022b4080(&(__this->fields)._advancedTutorials);
  (__this->fields)._miscTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH";
  il2cpp_runtime_helper_022b4080(&(__this->fields)._miscTutorials);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_0
// il2cpp: void UI_TutorialPopup___Setup_b__15_0 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4414ce0

void UI_TutorialPopup___Setup_b__15_0(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae60d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae60d = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_1
// il2cpp: void UI_TutorialPopup___Setup_b__15_1 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4414d20

void UI_TutorialPopup___Setup_b__15_1(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae60e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Basic");
    g_data_057ae60e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"Basic",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_2
// il2cpp: void UI_TutorialPopup___Setup_b__15_2 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4414d60

void UI_TutorialPopup___Setup_b__15_2(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae60f == '\0') {
    il2cpp_runtime_helper_023445d0(&"BasicVideoTutorials");
    g_data_057ae60f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"BasicVideoTutorials",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_3
// il2cpp: void UI_TutorialPopup___Setup_b__15_3 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4414da0

void UI_TutorialPopup___Setup_b__15_3(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae610 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AdvancedVideoTutorials");
    g_data_057ae610 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"AdvancedVideoTutorials",in_RDX);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_4
// il2cpp: void UI_TutorialPopup___Setup_b__15_4 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x4414de0

void UI_TutorialPopup___Setup_b__15_4(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae611 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MiscVideoTutorials");
    g_data_057ae611 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_TutorialPopup__OnButtonClick(__this,"MiscVideoTutorials",in_RDX);
  return;
}


