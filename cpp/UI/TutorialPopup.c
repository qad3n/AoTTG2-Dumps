// Type: UI.TutorialPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TutorialPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TutorialPopup.cs
// --------------------------------

// UI.TutorialPopup$$get_Title
// il2cpp: System_String_o* UI_TutorialPopup__get_Title (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18229c2b0

System_String_o * UI_TutorialPopup__get_Title(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347497 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"TutorialPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347497 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","TutorialPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.TutorialPopup$$get_Width
// il2cpp: float UI_TutorialPopup__get_Width (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_TutorialPopup__get_Width(UI_TutorialPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.TutorialPopup$$get_Height
// il2cpp: float UI_TutorialPopup__get_Height (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x1821c6340

float UI_TutorialPopup__get_Height(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.TutorialPopup$$get_VerticalSpacing
// il2cpp: float UI_TutorialPopup__get_VerticalSpacing (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_TutorialPopup__get_VerticalSpacing(UI_TutorialPopup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.TutorialPopup$$get_VerticalPadding
// il2cpp: int32_t UI_TutorialPopup__get_VerticalPadding (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_TutorialPopup__get_VerticalPadding(UI_TutorialPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.TutorialPopup$$get_UseSound
// il2cpp: bool UI_TutorialPopup__get_UseSound (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_TutorialPopup__get_UseSound(UI_TutorialPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.TutorialPopup$$Setup
// il2cpp: void UI_TutorialPopup__Setup (UI_TutorialPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18229bd20

void UI_TutorialPopup__Setup(UI_TutorialPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_String_o *category;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184347498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_TutorialPopup_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_TutorialPopup_Setup_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_TutorialPopup_Setup_b__15_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_TutorialPopup_Setup_b__15_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_TutorialPopup_Setup_b__15_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"BasicButton");
    il2cpp_codegen_initialize_runtime_metadata(&"VideoBasicTutorialsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"TutorialPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"VideoMiscTutorialsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"VideoAdvancedTutorialsButton");
    Il2CppMethodInitialized_184347498 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar4 = "TutorialPopup";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_TutorialPopup_Setup_b__15_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (category,pSVar4,"BasicButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_TutorialPopup_Setup_b__15_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (category,pSVar4,"VideoBasicTutorialsButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_TutorialPopup_Setup_b__15_2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (category,pSVar4,"VideoAdvancedTutorialsButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_TutorialPopup_Setup_b__15_3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,450.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar4 = UI_UIManager__GetLocale
                     (category,pSVar4,"VideoMiscTutorialsButton","","",
                      (MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_TutorialPopup_Setup_b__15_4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,450.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$OnButtonClick
// il2cpp: void UI_TutorialPopup__OnButtonClick (UI_TutorialPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18229b850

void UI_TutorialPopup__OnButtonClick(UI_TutorialPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_ExternalLinkPopup_o *pUVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_FloatSetting_o *__this_00;
  Settings_MultiplayerSettings_o *pSVar8;
  bool bVar9;
  
  if (Il2CppMethodInitialized_184347499 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedVideoTutorials");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Map Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"MiscVideoTutorials");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    il2cpp_codegen_initialize_runtime_metadata(&"Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"BasicVideoTutorials");
    Il2CppMethodInitialized_184347499 = '\x01';
  }
  bVar9 = System_String__op_Equality(name,"Basic",(MethodInfo *)0x0);
  if (bVar9) {
    ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
    ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
    if (pSVar3 != (Settings_InGameSet_o *)0x0) {
      (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
      if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).MapCategory, pSVar5 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"Tutorial",
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
        if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
            (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) &&
           (pSVar5 = (pSVar4->fields).MapName, pSVar5 != (Settings_StringSetting_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"Basic Tutorial",
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
          if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
              (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) &&
             (pSVar5 = (pSVar4->fields).GameMode, pSVar5 != (Settings_StringSetting_o *)0x0)) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"Map Logic",
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
            if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
                (pSVar6 = (pSVar3->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0)) &&
               (pSVar7 = (pSVar6->fields).AllowPlayerTitans, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)pSVar7,false,
                         (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
              if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
                  (pSVar6 = (pSVar3->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0)) &&
                 (pSVar7 = (pSVar6->fields).EndlessRespawnEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)pSVar7,true,
                           (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
                if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
                    (pSVar6 = (pSVar3->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0)) &&
                   (__this_00 = (pSVar6->fields).EndlessRespawnTime,
                   __this_00 != (Settings_FloatSetting_o *)0x0)) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)__this_00,1.0,
                             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                  if (pSVar3 != (Settings_InGameSet_o *)0x0) {
                    (*(pSVar3->klass->vtable)._10_Copy.methodPtr)
                              (pSVar3,(Settings_BaseSetting_o *)
                                      TypeInfo_Settings_SettingsManager->static_fields->InGameUI,
                               (pSVar3->klass->vtable)._10_Copy.method);
                    pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
                    if (pSVar8 != (Settings_MultiplayerSettings_o *)0x0) {
                      Settings_MultiplayerSettings__ConnectOffline(pSVar8,(MethodInfo *)0x0);
                      pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
                      if (pSVar8 != (Settings_MultiplayerSettings_o *)0x0) {
                        Settings_MultiplayerSettings__StartRoom(pSVar8,(MethodInfo *)0x0);
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
  else {
    bVar9 = System_String__op_Equality(name,"BasicVideoTutorials",(MethodInfo *)0x0);
    if (bVar9) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).ExternalLinkPopup, pUVar2 != (UI_ExternalLinkPopup_o *)0x0)) {
        UI_ExternalLinkPopup__Show(pUVar2,(__this->fields)._basicTutorials,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar9 = System_String__op_Equality(name,"AdvancedVideoTutorials",(MethodInfo *)0x0);
      if (!bVar9) {
        bVar9 = System_String__op_Equality(name,"MiscVideoTutorials",(MethodInfo *)0x0);
        if (bVar9) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if ((pUVar1 == (UI_BaseMenu_o *)0x0) ||
             (pUVar2 = (pUVar1->fields).ExternalLinkPopup, pUVar2 == (UI_ExternalLinkPopup_o *)0x0))
          goto label_18229bd0d;
          UI_ExternalLinkPopup__Show(pUVar2,(__this->fields)._miscTutorials,(MethodInfo *)0x0);
        }
        else {
          bVar9 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
          if (bVar9) {
            (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
        }
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).ExternalLinkPopup, pUVar2 != (UI_ExternalLinkPopup_o *)0x0)) {
        UI_ExternalLinkPopup__Show(pUVar2,(__this->fields)._advancedTutorials,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18229bd0d:
  ThrowNullReferenceException();
}


// UI.TutorialPopup$$.ctor
// il2cpp: void UI_TutorialPopup___ctor (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18229c200

void UI_TutorialPopup___ctor(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434749a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt");
    il2cpp_codegen_initialize_runtime_metadata(&"https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH");
    il2cpp_codegen_initialize_runtime_metadata(&"https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I");
    Il2CppMethodInitialized_18434749a = '\x01';
  }
  (__this->fields)._basicTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._basicTutorials,"https://youtube.com/playlist?list=PL7WLQbO_kV5D9LaXN50370-OzXfv33oM7&si=1V3Uza7ppikW0TTt");
  (__this->fields)._advancedTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._advancedTutorials,"https://youtube.com/playlist?list=PL7WLQbO_kV5CPCIXIQaAz3fJaYiugh1-F&si=Nf1tZhX1xgxYIh9I");
  (__this->fields)._miscTutorials = "https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._miscTutorials,"https://youtube.com/playlist?list=PL7WLQbO_kV5Bt1srvwS1KJhTLi8usCuNe&si=i_YhJPqYgop_lWaH");
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_0
// il2cpp: void UI_TutorialPopup___Setup_b__15_0 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18229c0c0

void UI_TutorialPopup___Setup_b__15_0(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434749b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_18434749b = '\x01';
  }
  UI_TutorialPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_1
// il2cpp: void UI_TutorialPopup___Setup_b__15_1 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18229c100

void UI_TutorialPopup___Setup_b__15_1(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434749c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    Il2CppMethodInitialized_18434749c = '\x01';
  }
  UI_TutorialPopup__OnButtonClick(__this,"Basic",(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_2
// il2cpp: void UI_TutorialPopup___Setup_b__15_2 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18229c140

void UI_TutorialPopup___Setup_b__15_2(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434749d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BasicVideoTutorials");
    Il2CppMethodInitialized_18434749d = '\x01';
  }
  UI_TutorialPopup__OnButtonClick(__this,"BasicVideoTutorials",(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_3
// il2cpp: void UI_TutorialPopup___Setup_b__15_3 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18229c180

void UI_TutorialPopup___Setup_b__15_3(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434749e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedVideoTutorials");
    Il2CppMethodInitialized_18434749e = '\x01';
  }
  UI_TutorialPopup__OnButtonClick(__this,"AdvancedVideoTutorials",(MethodInfo *)0x0);
  return;
}


// UI.TutorialPopup$$<Setup>b__15_4
// il2cpp: void UI_TutorialPopup___Setup_b__15_4 (UI_TutorialPopup_o* __this, const MethodInfo* method);
// 0x18229c1c0

void UI_TutorialPopup___Setup_b__15_4(UI_TutorialPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434749f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MiscVideoTutorials");
    Il2CppMethodInitialized_18434749f = '\x01';
  }
  UI_TutorialPopup__OnButtonClick(__this,"MiscVideoTutorials",(MethodInfo *)0x0);
  return;
}


