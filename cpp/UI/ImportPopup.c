// Type: UI.ImportPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ImportPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ImportPopup.cs
// --------------------------------

// UI.ImportPopup$$get_Title
// il2cpp: System_String_o* UI_ImportPopup__get_Title (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0570

System_String_o * UI_ImportPopup__get_Title(UI_ImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    Il2CppMethodInitialized_07547b16 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Import",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ImportPopup$$get_Width
// il2cpp: float UI_ImportPopup__get_Width (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc05d0

float UI_ImportPopup__get_Width(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.ImportPopup$$get_Height
// il2cpp: float UI_ImportPopup__get_Height (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc05e0

float UI_ImportPopup__get_Height(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.ImportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ImportPopup__get_VerticalPadding (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc05f0

int32_t UI_ImportPopup__get_VerticalPadding(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ImportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ImportPopup__get_HorizontalPadding (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0600

int32_t UI_ImportPopup__get_HorizontalPadding(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ImportPopup$$get_VerticalSpacing
// il2cpp: float UI_ImportPopup__get_VerticalSpacing (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0610

float UI_ImportPopup__get_VerticalSpacing(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.ImportPopup$$get_DefaultInputHeight
// il2cpp: float UI_ImportPopup__get_DefaultInputHeight (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0620

float UI_ImportPopup__get_DefaultInputHeight(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 430.0;
}


// UI.ImportPopup$$get_TextHeight
// il2cpp: float UI_ImportPopup__get_TextHeight (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0630

float UI_ImportPopup__get_TextHeight(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 32.0;
}


// UI.ImportPopup$$Setup
// il2cpp: void UI_ImportPopup__Setup (UI_ImportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc0640

void UI_ImportPopup__Setup(UI_ImportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UI_InputSettingElement_o *pUVar6;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ImportPopup_Setup_b__22_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ImportPopup_Setup_b__22_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b17 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ImportPopup_Setup_b__22_0,(MethodInfo *)0x0
            );
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ImportPopup_Setup_b__22_1,(MethodInfo *)0x0
            );
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel
                     ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._topText = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._topText);
    pUVar4 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields).ImportSetting,
                        (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),"",460.0,
                        430.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar4,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
      (__this->fields)._element = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._element);
      pUVar4 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        (__this->fields)._errorText = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._errorText);
        pUVar5 = (__this->fields)._errorText;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          UVar7.fields.b = 0.0;
          UVar7.fields.a = 1.0;
          UVar7.fields.r = 1.0;
          UVar7.fields.g = 0.0;
          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                    (pUVar5,UVar7,(pUVar5->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ImportPopup$$Show
// il2cpp: void UI_ImportPopup__Show (UI_ImportPopup_o* __this, UnityEngine_Events_UnityAction_o* onSave, bool manualHide, System_String_o* topText, System_String_o* initialText, const MethodInfo* method);
// 0x5cc0970

void UI_ImportPopup__Show
               (UI_ImportPopup_o *__this,UnityEngine_Events_UnityAction_o *onSave,bool manualHide,
               System_String_o *topText,System_String_o *initialText,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  UI_InputSettingElement_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_LayoutElement_c *pUVar6;
  MethodInfo *pMVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_07547b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b18 = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar7);
    (__this->fields)._onSave = onSave;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave);
    (__this->fields)._manualHide = manualHide;
    __this_00 = (__this->fields).ImportSetting;
    if (initialText == (System_String_o *)0x0) {
      initialText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)initialText,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar1 = (__this->fields)._errorText;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(topText,"",(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._topText;
          if (bVar3) {
            if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_05cc0b9e;
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cc0b9e;
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._element;
            if (pUVar2 == (UI_InputSettingElement_o *)0x0) goto label_05cc0b9e;
            pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar2,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cc0b9e;
            pUVar6 = pUVar5->klass;
            pMVar7 = (pUVar6->vtable)._38_set_preferredHeight.method;
            fVar8 = 430.0;
          }
          else {
            if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_05cc0b9e;
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cc0b9e;
            UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._topText;
            if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_05cc0b9e;
            (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                      (pUVar1,topText,(pUVar1->klass->vtable)._75_set_text.method);
            pUVar2 = (__this->fields)._element;
            if (pUVar2 == (UI_InputSettingElement_o *)0x0) goto label_05cc0b9e;
            pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar2,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cc0b9e;
            pUVar6 = pUVar5->klass;
            pMVar7 = (pUVar6->vtable)._38_set_preferredHeight.method;
            fVar8 = 398.0;
          }
          (*(pUVar6->vtable)._38_set_preferredHeight.methodPtr)(pUVar5,fVar8,pMVar7);
          pUVar2 = (__this->fields)._element;
          if (pUVar2 != (UI_InputSettingElement_o *)0x0) {
            (*(pUVar2->klass->vtable)._6_SyncElement.methodPtr)
                      (pUVar2,(pUVar2->klass->vtable)._6_SyncElement.method);
            return;
          }
        }
      }
    }
  }
label_05cc0b9e:
  ThrowNullReferenceException();
}


// UI.ImportPopup$$ShowError
// il2cpp: void UI_ImportPopup__ShowError (UI_ImportPopup_o* __this, System_String_o* error, const MethodInfo* method);
// 0x5cc0bb0

void UI_ImportPopup__ShowError(UI_ImportPopup_o *__this,System_String_o *error,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UI_InputSettingElement_o *__this_00;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  _func_26 *vtableDispatch;
  MethodInfo *pMVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07547b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    Il2CppMethodInitialized_07547b19 = '\x01';
  }
  pUVar1 = (__this->fields)._errorText;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,error,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._errorText;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._topText;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._element;
            if (bVar2) {
              if (__this_00 != (UI_InputSettingElement_o *)0x0) {
                pUVar4 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)__this_00,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  vtableDispatch = (pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr;
                  pMVar5 = (pUVar4->klass->vtable)._38_set_preferredHeight.method;
                  fVar6 = 366.0;
label_05cc0cc3:
                  (*vtableDispatch)(pUVar4,fVar6,pMVar5);
                  return;
                }
              }
            }
            else if (__this_00 != (UI_InputSettingElement_o *)0x0) {
              pUVar4 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_00,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
              if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                vtableDispatch = (pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr;
                pMVar5 = (pUVar4->klass->vtable)._38_set_preferredHeight.method;
                fVar6 = 398.0;
                goto label_05cc0cc3;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ImportPopup$$OnButtonClick
// il2cpp: void UI_ImportPopup__OnButtonClick (UI_ImportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc0ce0

void UI_ImportPopup__OnButtonClick(UI_ImportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b1a = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar2) {
label_05cc0d2a:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    if ((__this->fields)._manualHide == false) goto label_05cc0d2a;
  }
  return;
}


// UI.ImportPopup$$.ctor
// il2cpp: void UI_ImportPopup___ctor (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0d90

void UI_ImportPopup___ctor(UI_ImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547b1b = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ImportSetting = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ImportSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.ImportPopup$$<Setup>b__22_0
// il2cpp: void UI_ImportPopup___Setup_b__22_0 (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0e20

void UI_ImportPopup___Setup_b__22_0(UI_ImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b1c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ImportPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.ImportPopup$$<Setup>b__22_1
// il2cpp: void UI_ImportPopup___Setup_b__22_1 (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x5cc0e60

void UI_ImportPopup___Setup_b__22_1(UI_ImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547b1d = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ImportPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


