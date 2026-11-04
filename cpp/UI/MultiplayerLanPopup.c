// Type: UI.MultiplayerLanPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerLanPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerLanPopup.cs
// --------------------------------

// UI.MultiplayerLanPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerLanPopup__get_Title (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x182291b90

System_String_o * UI_MultiplayerLanPopup__get_Title(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LAN");
    Il2CppMethodInitialized_184347448 = '\x01';
  }
  return "LAN";
}


// UI.MultiplayerLanPopup$$get_Width
// il2cpp: float UI_MultiplayerLanPopup__get_Width (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x181da8b00

float
UI_MultiplayerLanPopup__get_Width(UI_MultiplayerLanPopup_o* __this, MethodInfo* method)

{
  return 400.0;
}


// UI.MultiplayerLanPopup$$get_Height
// il2cpp: float UI_MultiplayerLanPopup__get_Height (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x182291b80

float UI_MultiplayerLanPopup__get_Height(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  return 410.0;
}


// UI.MultiplayerLanPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerLanPopup__get_PanelAlignment (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_MultiplayerLanPopup__get_PanelAlignment(UI_MultiplayerLanPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.MultiplayerLanPopup$$Setup
// il2cpp: void UI_MultiplayerLanPopup__Setup (UI_MultiplayerLanPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822916e0

void UI_MultiplayerLanPopup__Setup(UI_MultiplayerLanPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *category;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  
  if (Il2CppMethodInitialized_184347449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerLanPopup_Setup_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerLanPopup_Setup_b__8_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Supports Accounts");
    il2cpp_codegen_initialize_runtime_metadata(&"Connect");
    il2cpp_codegen_initialize_runtime_metadata(&"Enable this if the LAN server supports account authentication.");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerLanPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Password (optional)");
    il2cpp_codegen_initialize_runtime_metadata(&"IP");
    il2cpp_codegen_initialize_runtime_metadata(&"Port");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347449 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar4 = "MultiplayerLanPopup";
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocale
                     (category,pSVar4,"Connect","","",
                      (MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerLanPopup_Setup_b__8_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerLanPopup_Setup_b__8_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,(Settings_BaseSetting_o *)(pSVar1->fields).LanIP,
               "IP","",200.0,40.0,false,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,(Settings_BaseSetting_o *)(pSVar1->fields).LanPort,
               "Port","",200.0,40.0,false,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,(Settings_BaseSetting_o *)(pSVar1->fields).LanPassword,
               "Password (optional)","",200.0,40.0,false,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleSetting
              ((__this->fields).SinglePanel,__this_01,
               (Settings_BaseSetting_o *)(pSVar1->fields).LanSupportsAccounts,"Supports Accounts",
               "Enable this if the LAN server supports account authentication.",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerLanPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerLanPopup__OnButtonClick (UI_MultiplayerLanPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822915f0

void UI_MultiplayerLanPopup__OnButtonClick
               (UI_MultiplayerLanPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434744a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Connect");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_18434744a = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    bVar2 = System_String__op_Equality(name,"Connect",(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if (bVar2) {
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      }
      return;
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__ConnectLAN(pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerLanPopup$$.ctor
// il2cpp: void UI_MultiplayerLanPopup___ctor (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
UI_MultiplayerLanPopup___ctor(UI_MultiplayerLanPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerLanPopup$$<Setup>b__8_0
// il2cpp: void UI_MultiplayerLanPopup___Setup_b__8_0 (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x182291b00

void UI_MultiplayerLanPopup___Setup_b__8_0(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434744b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Connect");
    Il2CppMethodInitialized_18434744b = '\x01';
  }
  UI_MultiplayerLanPopup__OnButtonClick(__this,"Connect",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerLanPopup$$<Setup>b__8_1
// il2cpp: void UI_MultiplayerLanPopup___Setup_b__8_1 (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x182291b40

void UI_MultiplayerLanPopup___Setup_b__8_1(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434744c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_18434744c = '\x01';
  }
  UI_MultiplayerLanPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


