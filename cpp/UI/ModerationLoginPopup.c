// Type: UI.ModerationLoginPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ModerationLoginPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.ModerationLoginPopup$$get_Title
// il2cpp: System_String_o* UI_ModerationLoginPopup__get_Title (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4ae0

System_String_o *
UI_ModerationLoginPopup__get_Title(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  if (DAT_057046c5 == '\0') {
    il2cpp_init_method_metadata(&"Login");
    DAT_057046c5 = '\x01';
  }
  return "Login";
}


// UI.ModerationLoginPopup$$get_Width
// il2cpp: float UI_ModerationLoginPopup__get_Width (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4b10

float UI_ModerationLoginPopup__get_Width(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.ModerationLoginPopup$$get_Height
// il2cpp: float UI_ModerationLoginPopup__get_Height (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4b20

float UI_ModerationLoginPopup__get_Height(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.ModerationLoginPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ModerationLoginPopup__get_VerticalPadding (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4b30

int32_t UI_ModerationLoginPopup__get_VerticalPadding
                  (UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ModerationLoginPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ModerationLoginPopup__get_HorizontalPadding (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4b40

int32_t UI_ModerationLoginPopup__get_HorizontalPadding
                  (UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ModerationLoginPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModerationLoginPopup__get_PanelAlignment (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4b50

int32_t UI_ModerationLoginPopup__get_PanelAlignment
                  (UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ModerationLoginPopup$$Setup
// il2cpp: void UI_ModerationLoginPopup__Setup (UI_ModerationLoginPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40c4b60

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
  Il2CppObject *pIVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  
  if (DAT_057046c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Login");
    il2cpp_init_method_metadata(&"Username");
    il2cpp_init_method_metadata(&"Password");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"");
    DAT_057046c6 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,100.0,20.0,pSVar2,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_01,
             (Settings_BaseSetting_o *)(__this->fields)._usernameSetting,"Username","",
             240.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  __this_03 = UI_ElementFactory__CreateInputSetting
                        ((__this->fields).SinglePanel,__this_01,
                         (Settings_BaseSetting_o *)(__this->fields)._passwordSetting,"Password",
                         "",240.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_03,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (__this_00 = pIVar3[3].monitor, __this_00 != (UnityEngine_UI_InputField_o *)0x0)) {
      UnityEngine_UI_InputField__set_contentType(__this_00,7,(MethodInfo *)0x0);
      UnityEngine_UI_InputField__ForceLabelUpdate(__this_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).BottomBar;
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateTextButton
                (pUVar1,__this_02,"Login",0.0,pUVar4,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).BottomBar;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateTextButton(pUVar1,__this_02,pSVar2,0.0,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationLoginPopup$$OnButtonClick
// il2cpp: void UI_ModerationLoginPopup__OnButtonClick (UI_ModerationLoginPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40c4e70

void UI_ModerationLoginPopup__OnButtonClick
               (UI_ModerationLoginPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,method,vtable_dispatch);
  return;
}


// UI.ModerationLoginPopup$$.ctor
// il2cpp: void UI_ModerationLoginPopup___ctor (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4e90

void UI_ModerationLoginPopup___ctor(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (DAT_057046c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057046c7 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._usernameSetting = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._usernameSetting,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._passwordSetting = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._passwordSetting);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModerationLoginPopup$$<Setup>b__14_0
// il2cpp: void UI_ModerationLoginPopup___Setup_b__14_0 (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4f70

void UI_ModerationLoginPopup__<Setup>b__14_0(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_057046c8 == '\0') {
    il2cpp_init_method_metadata(&"Login");
    DAT_057046c8 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


// UI.ModerationLoginPopup$$<Setup>b__14_1
// il2cpp: void UI_ModerationLoginPopup___Setup_b__14_1 (UI_ModerationLoginPopup_o* __this, const MethodInfo* method);
// 0x40c4fb0

void UI_ModerationLoginPopup__<Setup>b__14_1(UI_ModerationLoginPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_057046c9 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057046c9 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


