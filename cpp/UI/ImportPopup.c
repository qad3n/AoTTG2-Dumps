// Type: UI.ImportPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ImportPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/ImportPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ImportPopup$$get_Title
// il2cpp: System_String_o* UI_ImportPopup__get_Title (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024da0

System_String_o * UI_ImportPopup__get_Title(UI_ImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704309 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Import");
    DAT_05704309 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Import",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ImportPopup$$get_Width
// il2cpp: float UI_ImportPopup__get_Width (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024e00

float UI_ImportPopup__get_Width(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.ImportPopup$$get_Height
// il2cpp: float UI_ImportPopup__get_Height (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024e10

float UI_ImportPopup__get_Height(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.ImportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ImportPopup__get_VerticalPadding (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024e20

int32_t UI_ImportPopup__get_VerticalPadding(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ImportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ImportPopup__get_HorizontalPadding (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024e30

int32_t UI_ImportPopup__get_HorizontalPadding(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ImportPopup$$get_VerticalSpacing
// il2cpp: float UI_ImportPopup__get_VerticalSpacing (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024e40

float UI_ImportPopup__get_VerticalSpacing(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.ImportPopup$$get_DefaultInputHeight
// il2cpp: float UI_ImportPopup__get_DefaultInputHeight (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024e50

float UI_ImportPopup__get_DefaultInputHeight(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 430.0;
}


// UI.ImportPopup$$get_TextHeight
// il2cpp: float UI_ImportPopup__get_TextHeight (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4024e60

float UI_ImportPopup__get_TextHeight(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 32.0;
}


// UI.ImportPopup$$Setup
// il2cpp: void UI_ImportPopup__Setup (UI_ImportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4024e70

void UI_ImportPopup__Setup(UI_ImportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UI_InputSettingElement_o *pUVar6;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  
  if (DAT_0570430a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__22_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__22_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_0570430a = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
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
  pUVar4 = UI_ElementFactory__CreateDefaultLabel
                     ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._topText = pUVar5;
    il2cpp_runtime_glue(&(__this->fields)._topText,pUVar5);
    pUVar4 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields).ImportSetting,
                        (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),"",460.0
                        ,430.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = (UI_InputSettingElement_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
      (__this->fields)._element = pUVar6;
      il2cpp_runtime_glue(&(__this->fields)._element,pUVar6);
      pUVar4 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0)
      ;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._errorText = pUVar5;
        il2cpp_runtime_glue(&(__this->fields)._errorText,pUVar5);
        pUVar5 = (__this->fields)._errorText;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          vtable_dispatch = (pUVar5->klass->vtable)._23_set_color.methodPtr;
          (*vtable_dispatch)
                    (0x3f800000,0,pUVar5,(pUVar5->klass->vtable)._23_set_color.method,
                     extraout_RDX_00,vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ImportPopup$$Show
// il2cpp: void UI_ImportPopup__Show (UI_ImportPopup_o* __this, UnityEngine_Events_UnityAction_o* onSave, bool manualHide, System_String_o* topText, const MethodInfo* method);
// 0x40251a0

void UI_ImportPopup__Show
               (UI_ImportPopup_o *__this,UnityEngine_Events_UnityAction_o *onSave,
               bool_conflict manualHide,System_String_o *topText,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  UI_InputSettingElement_o *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  undefined8 extraout_RDX;
  MethodInfo *pMVar7;
  undefined4 uVar8;
  
  if (DAT_0570430b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"");
    DAT_0570430b = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar7);
    (__this->fields)._onSave = onSave;
    il2cpp_runtime_glue(&(__this->fields)._onSave,onSave);
    *(char *)&(__this->fields)._manualHide = (char)manualHide;
    __this_00 = (__this->fields).ImportSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,
                 (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
      pUVar1 = (__this->fields)._errorText;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(topText,"",(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._topText;
          if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              if ((char)bVar3 == '\0') {
                UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._topText;
                if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040253ad;
                (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                          (pUVar1,topText,(pUVar1->klass->vtable)._75_set_text.method);
                pUVar2 = (__this->fields)._element;
                if (pUVar2 == (UI_InputSettingElement_o *)0x0) goto LAB_040253ad;
                pIVar5 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar5 == (Il2CppObject *)0x0) goto LAB_040253ad;
                pIVar6 = pIVar5->klass;
                pMVar7 = pIVar6->vtable[0x26].method;
                uVar8 = 0x43c70000;
              }
              else {
                UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._element;
                if (pUVar2 == (UI_InputSettingElement_o *)0x0) goto LAB_040253ad;
                pIVar5 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar5 == (Il2CppObject *)0x0) goto LAB_040253ad;
                pIVar6 = pIVar5->klass;
                pMVar7 = pIVar6->vtable[0x26].method;
                uVar8 = 0x43d70000;
              }
              (*pIVar6->vtable[0x26].methodPtr)(uVar8,pIVar5,pMVar7);
              pUVar2 = (__this->fields)._element;
              if (pUVar2 != (UI_InputSettingElement_o *)0x0) {
                vtable_dispatch = (pUVar2->klass->vtable)._6_SyncElement.methodPtr;
                (*vtable_dispatch)
                          (pUVar2,(pUVar2->klass->vtable)._6_SyncElement.method,extraout_RDX,
                           vtable_dispatch);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_040253ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ImportPopup$$ShowError
// il2cpp: void UI_ImportPopup__ShowError (UI_ImportPopup_o* __this, System_String_o* error, const MethodInfo* method);
// 0x40253c0

void UI_ImportPopup__ShowError(UI_ImportPopup_o *__this,System_String_o *error,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UI_InputSettingElement_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  undefined4 uVar6;
  
  if (DAT_0570430c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    DAT_0570430c = '\x01';
  }
  pUVar1 = (__this->fields)._errorText;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,error,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._errorText;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._topText;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._element;
            if (__this_00 != (UI_InputSettingElement_o *)0x0) {
              pIVar5 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar5 != (Il2CppObject *)0x0) {
                pIVar2 = pIVar5->klass;
                vtable_dispatch = pIVar2->vtable[0x26].methodPtr;
                if ((char)bVar3 == '\0') {
                  uVar6 = 0x43c70000;
                }
                else {
                  uVar6 = 0x43b70000;
                }
                (*vtable_dispatch)
                          (uVar6,pIVar5,pIVar2->vtable[0x26].method,pIVar2,vtable_dispatch);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ImportPopup$$OnButtonClick
// il2cpp: void UI_ImportPopup__OnButtonClick (UI_ImportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40254c0

void UI_ImportPopup__OnButtonClick
               (UI_ImportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570430d == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_0570430d = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
LAB_0402550a:
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
    if ((char)(__this->fields)._manualHide == '\0') goto LAB_0402550a;
  }
  return;
}


// UI.ImportPopup$$.ctor
// il2cpp: void UI_ImportPopup___ctor (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4025570

void UI_ImportPopup___ctor(UI_ImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  MethodInfo *method_00;
  
  if (DAT_0570430e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570430e = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ImportSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).ImportSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.ImportPopup$$<Setup>b__22_0
// il2cpp: void UI_ImportPopup___Setup_b__22_0 (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4025600

void UI_ImportPopup__<Setup>b__22_0(UI_ImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570430f == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_0570430f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ImportPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.ImportPopup$$<Setup>b__22_1
// il2cpp: void UI_ImportPopup___Setup_b__22_1 (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x4025640

void UI_ImportPopup__<Setup>b__22_1(UI_ImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704310 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704310 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ImportPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


