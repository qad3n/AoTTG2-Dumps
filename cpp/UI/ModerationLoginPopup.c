// Type: UI.ModerationLoginPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ModerationLoginPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ModerationLoginPopup$$get_Title
// il2cpp: System_String_o* UI_ModerationLoginPopup__get_Title (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d6fd0

System_String_o * UI_ModerationLoginPopup__get_Title(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae456 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Login");
    g_data_057ae456 = '\x01';
  }
  return "Login";
}


// UI.ModerationLoginPopup$$get_Width
// il2cpp: float UI_ModerationLoginPopup__get_Width (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d7000

float UI_ModerationLoginPopup__get_Width(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.ModerationLoginPopup$$get_Height
// il2cpp: float UI_ModerationLoginPopup__get_Height (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d7010

float UI_ModerationLoginPopup__get_Height(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.ModerationLoginPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ModerationLoginPopup__get_VerticalPadding (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d7020

int32_t UI_ModerationLoginPopup__get_VerticalPadding(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ModerationLoginPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ModerationLoginPopup__get_HorizontalPadding (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d7030

int32_t UI_ModerationLoginPopup__get_HorizontalPadding(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ModerationLoginPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModerationLoginPopup__get_PanelAlignment (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d7040

int32_t UI_ModerationLoginPopup__get_PanelAlignment(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ModerationLoginPopup$$Setup
// il2cpp: void UI_ModerationLoginPopup__Setup (UI_ModerationLoginPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d7050

void UI_ModerationLoginPopup__Setup
               (UI_ModerationLoginPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *__this_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *pIVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  
  if (g_data_057ae457 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Login");
    il2cpp_runtime_helper_023445d0(&"Username");
    il2cpp_runtime_helper_023445d0(&"Password");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae457 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,100.0,20.0,pSVar1,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_01,
             (Settings_BaseSetting_o *)(__this->fields)._usernameSetting,"Username","",240.0,40.0,
             0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).SinglePanel;
  __this_03 = (UnityEngine_Transform_o *)
              UI_ElementFactory__CreateInputSetting
                        (pUVar4,__this_01,(Settings_BaseSetting_o *)(__this->fields)._passwordSetting,
                         "Password","",240.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (__this_03 != (UnityEngine_Transform_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_03,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    pUVar4 = __this_03;
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (__this_00 = pIVar2[3].monitor, __this_00 != (UnityEngine_UI_InputField_o *)0x0)) {
      UnityEngine_UI_InputField__set_contentType(__this_00,7,(MethodInfo *)0x0);
      UnityEngine_UI_InputField__ForceLabelUpdate(__this_00,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).BottomBar;
      pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateTextButton(pUVar4,__this_02,"Login",0.0,pUVar3,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).BottomBar;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateTextButton(pUVar4,__this_02,pSVar1,0.0,pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (**(code **)&pUVar4->klass[1]._2.thread_static_fields_offset)();
  return;
}


// UI.ModerationLoginPopup$$OnButtonClick
// il2cpp: void UI_ModerationLoginPopup__OnButtonClick (UI_ModerationLoginPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43d7360

void UI_ModerationLoginPopup__OnButtonClick
               (UI_ModerationLoginPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,method,vtableDispatch);
  return;
}


// UI.ModerationLoginPopup$$.ctor
// il2cpp: void UI_ModerationLoginPopup___ctor (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d7380

void UI_ModerationLoginPopup___ctor(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (g_data_057ae458 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae458 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._usernameSetting = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._usernameSetting,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._passwordSetting = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._passwordSetting);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModerationLoginPopup$$<Setup>b__14_0
// il2cpp: void UI_ModerationLoginPopup___Setup_b__14_0 (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d7460

void UI_ModerationLoginPopup___Setup_b__14_0(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae459 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Login");
    g_data_057ae459 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


// UI.ModerationLoginPopup$$<Setup>b__14_1
// il2cpp: void UI_ModerationLoginPopup___Setup_b__14_1 (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x43d74a0

void UI_ModerationLoginPopup___Setup_b__14_1(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae45a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae45a = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


