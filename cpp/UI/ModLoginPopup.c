// Type: UI.ModLoginPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ModLoginPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ModLoginPopup$$get_Title
// il2cpp: System_String_o* UI_ModLoginPopup__get_Title (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x182291020

System_String_o * UI_ModLoginPopup__get_Title(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347441 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mod Login");
    Il2CppMethodInitialized_184347441 = '\x01';
  }
  return "Mod Login";
}


// UI.ModLoginPopup$$get_Width
// il2cpp: float UI_ModLoginPopup__get_Width (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x182291050

float
UI_ModLoginPopup__get_Width(UI_ModLoginPopup_o* __this, MethodInfo* method)

{
  return 480.0;
}


// UI.ModLoginPopup$$get_Height
// il2cpp: float UI_ModLoginPopup__get_Height (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x1821c1230

float
UI_ModLoginPopup__get_Height(UI_ModLoginPopup_o* __this, MethodInfo* method)

{
  return 300.0;
}


// UI.ModLoginPopup$$get_DoublePanel
// il2cpp: bool UI_ModLoginPopup__get_DoublePanel (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_ModLoginPopup__get_DoublePanel(UI_ModLoginPopup_o* __this, MethodInfo* method)

{
  return false;
}


// UI.ModLoginPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModLoginPopup__get_PanelAlignment (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_ModLoginPopup__get_PanelAlignment(UI_ModLoginPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.ModLoginPopup$$Setup
// il2cpp: void UI_ModLoginPopup__Setup (UI_ModLoginPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182290d40

void UI_ModLoginPopup__Setup(UI_ModLoginPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  
  if (Il2CppMethodInitialized_184347442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ModLoginPopup_Setup_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Username");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347442 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,160.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ModLoginPopup_Setup_b__10_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar2,0.0,__this_02,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,(Settings_BaseSetting_o *)(pSVar1->fields).ModUsername,
               "Username","",180.0,40.0,false,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,(Settings_BaseSetting_o *)(pSVar1->fields).ModPassword,
               "Password","",180.0,40.0,false,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ModLoginPopup$$OnSaveButtonClick
// il2cpp: void UI_ModLoginPopup__OnSaveButtonClick (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x182290cd0

void
UI_ModLoginPopup__OnSaveButtonClick(UI_ModLoginPopup_o* __this, MethodInfo* method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347443 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ModLoginPopup$$.ctor
// il2cpp: void UI_ModLoginPopup___ctor (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
UI_ModLoginPopup___ctor(UI_ModLoginPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModLoginPopup$$<Setup>b__10_0
// il2cpp: void UI_ModLoginPopup___Setup_b__10_0 (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x182290cd0

void UI_ModLoginPopup___Setup_b__10_0(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347443 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  ThrowNullReferenceException();
}


