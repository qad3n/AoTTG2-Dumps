// Type: UI.MultiplayerSettingsPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerSettingsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerSettingsPopup.cs
// --------------------------------

// UI.MultiplayerSettingsPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerSettingsPopup__get_Title (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x182296e80

System_String_o *
UI_MultiplayerSettingsPopup__get_Title(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347472 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerSettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347472 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerSettingsPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerSettingsPopup$$get_Width
// il2cpp: float UI_MultiplayerSettingsPopup__get_Width (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x182291050

float UI_MultiplayerSettingsPopup__get_Width(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 480.0;
}


// UI.MultiplayerSettingsPopup$$get_Height
// il2cpp: float UI_MultiplayerSettingsPopup__get_Height (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x182296e70

float UI_MultiplayerSettingsPopup__get_Height(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 550.0;
}


// UI.MultiplayerSettingsPopup$$get_DoublePanel
// il2cpp: bool UI_MultiplayerSettingsPopup__get_DoublePanel (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_MultiplayerSettingsPopup__get_DoublePanel(UI_MultiplayerSettingsPopup_o* __this, MethodInfo* method)

{
  return false;
}


// UI.MultiplayerSettingsPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerSettingsPopup__get_PanelAlignment (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_MultiplayerSettingsPopup__get_PanelAlignment(UI_MultiplayerSettingsPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.MultiplayerSettingsPopup$$Setup
// il2cpp: void UI_MultiplayerSettingsPopup__Setup (UI_MultiplayerSettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182296930

void UI_MultiplayerSettingsPopup__Setup
               (UI_MultiplayerSettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  UnityEngine_Transform_o *pUVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *category;
  int32_t fontSize;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_184347473 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerSettingsPopup_Setup_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"LobbyOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"Lobby");
    il2cpp_codegen_initialize_runtime_metadata(&"AppIdTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"LobbyTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"LobbyCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerSettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"AppId");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"AppIdCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"AppIdOptions");
    Il2CppMethodInitialized_184347473 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar8 = "MultiplayerSettingsPopup";
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,160.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar5 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerSettingsPopup_Setup_b__10_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar5,0.0,__this_02,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    pUVar2 = (__this->fields).SinglePanel;
    pSVar3 = (pSVar1->fields).LobbyMode;
    pSVar5 = UI_UIManager__GetLocale
                       (category,pSVar8,"Lobby","","",
                        (MethodInfo *)0x0);
    pSVar6 = UI_UIManager__GetLocaleArray
                       (category,pSVar8,"LobbyOptions","",(MethodInfo *)0x0);
    pSVar7 = UI_UIManager__GetLocale
                       (category,pSVar8,"LobbyTooltip","","",
                        (MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleGroupSetting
              (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar3,pSVar5,pSVar6,pSVar7,30.0,30.0,
               (MethodInfo *)0x0);
    pUVar2 = (__this->fields).SinglePanel;
    pSVar4 = (pSVar1->fields).CustomLobby;
    pSVar5 = UI_UIManager__GetLocale
                       (category,pSVar8,"LobbyCustom","","",
                        (MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",180.0,40.0,false
               ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).SinglePanel;
    pSVar3 = (pSVar1->fields).AppIdMode;
    pSVar5 = UI_UIManager__GetLocale
                       (category,pSVar8,"AppId","","",
                        (MethodInfo *)0x0);
    pSVar6 = UI_UIManager__GetLocaleArray
                       (category,pSVar8,"AppIdOptions","",(MethodInfo *)0x0);
    pSVar7 = UI_UIManager__GetLocale
                       (category,pSVar8,"AppIdTooltip","","",
                        (MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleGroupSetting
              (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar3,pSVar5,pSVar6,pSVar7,30.0,30.0,
               (MethodInfo *)0x0);
    pUVar2 = (__this->fields).SinglePanel;
    pSVar4 = (pSVar1->fields).CustomAppId;
    pSVar8 = UI_UIManager__GetLocale
                       (category,pSVar8,"AppIdCustom","","",
                        (MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar2,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar8,"",180.0,40.0,false
               ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerSettingsPopup$$OnSaveButtonClick
// il2cpp: void UI_MultiplayerSettingsPopup__OnSaveButtonClick (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822968c0

void
UI_MultiplayerSettingsPopup__OnSaveButtonClick(UI_MultiplayerSettingsPopup_o* __this, MethodInfo* method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347474 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerSettingsPopup$$.ctor
// il2cpp: void UI_MultiplayerSettingsPopup___ctor (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
UI_MultiplayerSettingsPopup___ctor(UI_MultiplayerSettingsPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerSettingsPopup$$<Setup>b__10_0
// il2cpp: void UI_MultiplayerSettingsPopup___Setup_b__10_0 (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822968c0

void UI_MultiplayerSettingsPopup___Setup_b__10_0(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347474 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  ThrowNullReferenceException();
}


