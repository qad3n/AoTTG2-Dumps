// Type: UI.NewImportPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/NewImportPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/NewImportPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.NewImportPopup$$get_Title
// il2cpp: System_String_o* UI_NewImportPopup__get_Title (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x40264b0

System_String_o * UI_NewImportPopup__get_Title(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570431b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"New");
    DAT_0570431b = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("New",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.NewImportPopup$$get_Width
// il2cpp: float UI_NewImportPopup__get_Width (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026510

float UI_NewImportPopup__get_Width(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.NewImportPopup$$get_Height
// il2cpp: float UI_NewImportPopup__get_Height (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026520

float UI_NewImportPopup__get_Height(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 615.0;
}


// UI.NewImportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_NewImportPopup__get_VerticalPadding (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026530

int32_t UI_NewImportPopup__get_VerticalPadding(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.NewImportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_NewImportPopup__get_HorizontalPadding (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026540

int32_t UI_NewImportPopup__get_HorizontalPadding(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.NewImportPopup$$get_VerticalSpacing
// il2cpp: float UI_NewImportPopup__get_VerticalSpacing (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026550

float UI_NewImportPopup__get_VerticalSpacing(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.NewImportPopup$$get_DefaultInputHeight
// il2cpp: float UI_NewImportPopup__get_DefaultInputHeight (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026560

float UI_NewImportPopup__get_DefaultInputHeight(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.NewImportPopup$$Setup
// il2cpp: void UI_NewImportPopup__Setup (UI_NewImportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4026570

void UI_NewImportPopup__Setup(UI_NewImportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_InputSettingElement_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  
  if (DAT_0570431c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_0570431c = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,100.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  setting = (__this->fields).FileName;
  pSVar2 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateInputSetting
                     (pUVar1,__this_00,(Settings_BaseSetting_o *)setting,pSVar2,"",460.0,
                      40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UI_InputSettingElement_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    (__this->fields)._nameElement = pUVar5;
    il2cpp_runtime_glue(&(__this->fields)._nameElement,pUVar5);
    pUVar4 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields).ImportSetting,
                        (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),"",460.0
                        ,380.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = (UI_InputSettingElement_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
      (__this->fields)._importElement = pUVar5;
      il2cpp_runtime_glue(&(__this->fields)._importElement,pUVar5);
      pUVar4 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0)
      ;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._errorText = pUVar6;
        il2cpp_runtime_glue(&(__this->fields)._errorText,pUVar6);
        pUVar6 = (__this->fields)._errorText;
        if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
          vtable_dispatch = (pUVar6->klass->vtable)._23_set_color.methodPtr;
          (*vtable_dispatch)
                    (0x3f800000,0,pUVar6,(pUVar6->klass->vtable)._23_set_color.method,
                     extraout_RDX_00,vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.NewImportPopup$$Show
// il2cpp: void UI_NewImportPopup__Show (UI_NewImportPopup_o* __this, UnityEngine_Events_UnityAction_o* onSave, bool manualHide, const MethodInfo* method);
// 0x40268f0

void UI_NewImportPopup__Show
               (UI_NewImportPopup_o *__this,UnityEngine_Events_UnityAction_o *onSave,
               bool_conflict manualHide,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_UI_Text_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  
  if (DAT_0570431d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570431d = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    (__this->fields)._onSave = onSave;
    il2cpp_runtime_glue(&(__this->fields)._onSave,onSave);
    *(char *)&(__this->fields)._manualHide = (char)manualHide;
    pSVar1 = (__this->fields).ImportSetting;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,
                 (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
      pSVar1 = (__this->fields).FileName;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,
                   (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
        __this_00 = (__this->fields)._errorText;
        if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
                      (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.NewImportPopup$$ShowError
// il2cpp: void UI_NewImportPopup__ShowError (UI_NewImportPopup_o* __this, System_String_o* error, const MethodInfo* method);
// 0x4026a10

void UI_NewImportPopup__ShowError
               (UI_NewImportPopup_o *__this,System_String_o *error,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pUVar1 = (__this->fields)._errorText;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,error,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._errorText;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.NewImportPopup$$OnButtonClick
// il2cpp: void UI_NewImportPopup__OnButtonClick (UI_NewImportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4026a60

void UI_NewImportPopup__OnButtonClick
               (UI_NewImportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570431e == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_0570431e = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
LAB_04026aaa:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    if ((char)(__this->fields)._manualHide == '\0') goto LAB_04026aaa;
  }
  return;
}


// UI.NewImportPopup$$.ctor
// il2cpp: void UI_NewImportPopup___ctor (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026b10

void UI_NewImportPopup___ctor(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_0570431f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570431f = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ImportSetting = __this_00;
  il2cpp_runtime_glue(&(__this->fields).ImportSetting,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor
            ((Settings_StringSetting_o *)method_00,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FileName = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).FileName);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.NewImportPopup$$<Setup>b__21_0
// il2cpp: void UI_NewImportPopup___Setup_b__21_0 (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026bf0

void UI_NewImportPopup__<Setup>b__21_0(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704320 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_05704320 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_NewImportPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.NewImportPopup$$<Setup>b__21_1
// il2cpp: void UI_NewImportPopup___Setup_b__21_1 (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x4026c30

void UI_NewImportPopup__<Setup>b__21_1(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704321 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704321 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_NewImportPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


