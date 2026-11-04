// Type: UI.ModerationLoginPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ModerationLoginPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ModerationLoginPopup$$get_Title
// il2cpp: System_String_o* UI_ModerationLoginPopup__get_Title (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x18225dfe0

System_String_o * UI_ModerationLoginPopup__get_Title(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Login");
    Il2CppMethodInitialized_1843472e4 = '\x01';
  }
  return "Login";
}


// UI.ModerationLoginPopup$$get_Width
// il2cpp: float UI_ModerationLoginPopup__get_Width (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x1821c2520

float
UI_ModerationLoginPopup__get_Width(UI_ModerationLoginPopup_o* __this, MethodInfo* method)

{
  return 450.0;
}


// UI.ModerationLoginPopup$$get_Height
// il2cpp: float UI_ModerationLoginPopup__get_Height (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x1821dda70

float
UI_ModerationLoginPopup__get_Height(UI_ModerationLoginPopup_o* __this, MethodInfo* method)

{
  return 280.0;
}


// UI.ModerationLoginPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ModerationLoginPopup__get_VerticalPadding (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_ModerationLoginPopup__get_VerticalPadding(UI_ModerationLoginPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.ModerationLoginPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ModerationLoginPopup__get_HorizontalPadding (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_ModerationLoginPopup__get_HorizontalPadding(UI_ModerationLoginPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.ModerationLoginPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModerationLoginPopup__get_PanelAlignment (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_ModerationLoginPopup__get_PanelAlignment(UI_ModerationLoginPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.ModerationLoginPopup$$Setup
// il2cpp: void UI_ModerationLoginPopup__Setup (UI_ModerationLoginPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18225db30

void UI_ModerationLoginPopup__Setup
               (UI_ModerationLoginPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UI_InputSettingElement_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843472e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ModerationLoginPopup_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ModerationLoginPopup_Setup_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Login");
    il2cpp_codegen_initialize_runtime_metadata(&"Username");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843472e5 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,100.0,20.0,pSVar2,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_01,
             (Settings_BaseSetting_o *)(__this->fields)._usernameSetting,"Username",
             "",240.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  __this_03 = UI_ElementFactory__CreateInputSetting
                        ((__this->fields).SinglePanel,__this_01,
                         (Settings_BaseSetting_o *)(__this->fields)._passwordSetting,"Password",
                         "",240.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (__this_03,
                        (MethodInfo_6F5650 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    if ((pUVar3 != (UI_InputSettingElement_o *)0x0) &&
       (__this_00 = (pUVar3->fields)._inputField, __this_00 != (UnityEngine_UI_InputField_o *)0x0)) {
      UnityEngine_UI_InputField__set_contentType(__this_00,7,(MethodInfo *)0x0);
      UnityEngine_UI_InputField__ForceLabelUpdate(__this_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).BottomBar;
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ModerationLoginPopup_Setup_b__14_0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(pUVar1,__this_02,"Login",0.0,pUVar4,(MethodInfo *)0x0)
      ;
      pUVar1 = (__this->fields).BottomBar;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_ModerationLoginPopup_Setup_b__14_1,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(pUVar1,__this_02,pSVar2,0.0,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ModerationLoginPopup$$OnButtonClick
// il2cpp: void UI_ModerationLoginPopup__OnButtonClick (UI_ModerationLoginPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x180a37400

void
UI_ModerationLoginPopup__OnButtonClick(UI_ModerationLoginPopup_o* __this, System_String_o* name, MethodInfo* method)

{
  Unity_VisualScripting_IGraph_o *pUVar1;
  
  pUVar1 = (Unity_VisualScripting_IGraph_o *)
           (*(__this->klass->vtable)._22_unknown.methodPtr)(__this,(__this->klass->vtable)._22_unknown.method)
  ;
  return pUVar1;
}


// UI.ModerationLoginPopup$$.ctor
// il2cpp: void UI_ModerationLoginPopup___ctor (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x18225df00

void UI_ModerationLoginPopup___ctor(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843472e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_1843472e6 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._usernameSetting = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._usernameSetting,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._passwordSetting = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._passwordSetting,pSVar2);
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModerationLoginPopup$$<Setup>b__14_0
// il2cpp: void UI_ModerationLoginPopup___Setup_b__14_0 (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x18225de80

void UI_ModerationLoginPopup___Setup_b__14_0(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Login");
    Il2CppMethodInitialized_1843472e7 = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ModerationLoginPopup$$<Setup>b__14_1
// il2cpp: void UI_ModerationLoginPopup___Setup_b__14_1 (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x18225dec0

void UI_ModerationLoginPopup___Setup_b__14_1(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_1843472e8 = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


