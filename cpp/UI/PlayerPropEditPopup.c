// Type: UI.PlayerPropEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/PlayerPropEditPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.PlayerPropEditPopup$$get_Title
// il2cpp: System_String_o* UI_PlayerPropEditPopup__get_Title (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c6f30

System_String_o *
UI_PlayerPropEditPopup__get_Title(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  if (DAT_057046dd == '\0') {
    il2cpp_init_method_metadata(&"Edit Prop");
    il2cpp_init_method_metadata(&"Add Prop");
    DAT_057046dd = '\x01';
  }
  if ((char)(__this->fields)._addMode == '\0') {
    return "Edit Prop";
  }
  return "Add Prop";
}


// UI.PlayerPropEditPopup$$get_Width
// il2cpp: float UI_PlayerPropEditPopup__get_Width (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c6f80

float UI_PlayerPropEditPopup__get_Width(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 480.0;
}


// UI.PlayerPropEditPopup$$get_Height
// il2cpp: float UI_PlayerPropEditPopup__get_Height (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c6f90

float UI_PlayerPropEditPopup__get_Height(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.PlayerPropEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_PlayerPropEditPopup__get_VerticalPadding (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c6fa0

int32_t UI_PlayerPropEditPopup__get_VerticalPadding
                  (UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PlayerPropEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_PlayerPropEditPopup__get_HorizontalPadding (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c6fb0

int32_t UI_PlayerPropEditPopup__get_HorizontalPadding
                  (UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.PlayerPropEditPopup$$get_PanelAlignment
// il2cpp: int32_t UI_PlayerPropEditPopup__get_PanelAlignment (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c6fc0

int32_t UI_PlayerPropEditPopup__get_PanelAlignment
                  (UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.PlayerPropEditPopup$$Setup
// il2cpp: void UI_PlayerPropEditPopup__Setup (UI_PlayerPropEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40c6fd0

void UI_PlayerPropEditPopup__Setup
               (UI_PlayerPropEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  
  if (DAT_057046de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_057046de = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,80.0,20.0,pSVar2,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateInputSetting
                     ((__this->fields).SinglePanel,__this_00,
                      (Settings_BaseSetting_o *)(__this->fields)._keySetting,"Name",
                      "",280.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pIVar4 = UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    if (pIVar4 != (Il2CppObject *)0x0) {
      (__this->fields)._keyInputField = pIVar4[3].monitor;
      il2cpp_runtime_glue(&(__this->fields)._keyInputField);
      UI_ElementFactory__CreateInputSetting
                ((__this->fields).SinglePanel,__this_00,
                 (Settings_BaseSetting_o *)(__this->fields)._valueSetting,"Value","",
                 280.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,__this_00,
                          (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,3,
                          (MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._statusLabel = pUVar5;
        il2cpp_runtime_glue(&(__this->fields)._statusLabel,pUVar5);
        pUVar5 = (__this->fields)._statusLabel;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                    (0x3f800000,0x3ecccccd,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
          pUVar1 = (__this->fields).BottomBar;
          pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton
                    (pUVar1,__this_01,"Save",0.0,pUVar6,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).BottomBar;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
          pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar2,0.0,pUVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PlayerPropEditPopup$$ShowEdit
// il2cpp: void UI_PlayerPropEditPopup__ShowEdit (UI_PlayerPropEditPopup_o* __this, System_String_o* key, System_String_o* currentValue, System_Action_string__o* onSave, const MethodInfo* method);
// 0x40c7370

void UI_PlayerPropEditPopup__ShowEdit
               (UI_PlayerPropEditPopup_o *__this,System_String_o *key,System_String_o *currentValue,
               System_Action_string__o *onSave,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  bool_conflict bVar4;
  
  if (DAT_057046df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057046df = '\x01';
  }
  *(undefined1 *)&(__this->fields)._addMode = 0;
  (__this->fields)._onSave = onSave;
  il2cpp_runtime_glue(&(__this->fields)._onSave,onSave);
  (__this->fields)._onAdd = (System_Action_string__string__o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._onAdd,0);
  pSVar1 = (__this->fields)._keySetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)key,MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields)._valueSetting;
    if (currentValue == (System_String_o *)0x0) {
      currentValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)currentValue,MethodInfo_Void_set_Value);
      pUVar2 = (__this->fields)._statusLabel;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,**(undefined8 **)(DAT_057110b0 + 0xb8),
                   (pUVar2->klass->vtable)._75_set_text.method);
        pUVar3 = (__this->fields)._keyInputField;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pUVar3 = (__this->fields)._keyInputField;
          if (pUVar3 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040c74e7;
          *(undefined1 *)&(pUVar3->fields).m_CaretBlinkRate = 1;
          UnityEngine_UI_InputField__ForceLabelUpdate(pUVar3,(MethodInfo *)0x0);
        }
        (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)(__this);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_040c74e7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PlayerPropEditPopup$$ShowAdd
// il2cpp: void UI_PlayerPropEditPopup__ShowAdd (UI_PlayerPropEditPopup_o* __this, System_Action_string__string__o* onAdd, const MethodInfo* method);
// 0x40c74f0

void UI_PlayerPropEditPopup__ShowAdd
               (UI_PlayerPropEditPopup_o *__this,System_Action_string__string__o *onAdd,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  bool_conflict bVar4;
  MethodInfo *extraout_RDX;
  
  if (DAT_057046e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057046e0 = '\x01';
    method = extraout_RDX;
  }
  *(undefined1 *)&(__this->fields)._addMode = 1;
  (__this->fields)._onSave = (System_Action_string__o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._onSave,0,method);
  (__this->fields)._onAdd = onAdd;
  il2cpp_runtime_glue(&(__this->fields)._onAdd,onAdd);
  pSVar1 = (__this->fields)._keySetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,
               (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields)._valueSetting;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,
                 (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
      pUVar2 = (__this->fields)._statusLabel;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,**(undefined8 **)(DAT_057110b0 + 0xb8),
                   (pUVar2->klass->vtable)._75_set_text.method);
        pUVar3 = (__this->fields)._keyInputField;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pUVar3 = (__this->fields)._keyInputField;
          if (pUVar3 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040c7655;
          *(undefined1 *)&(pUVar3->fields).m_CaretBlinkRate = 0;
          UnityEngine_UI_InputField__ForceLabelUpdate(pUVar3,(MethodInfo *)0x0);
        }
        (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)(__this);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_040c7655:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PlayerPropEditPopup$$OnButtonClick
// il2cpp: void UI_PlayerPropEditPopup__OnButtonClick (UI_PlayerPropEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40c7660

void UI_PlayerPropEditPopup__OnButtonClick
               (UI_PlayerPropEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Action_string__string__o *pSVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_Action_string__o *pSVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  Photon_Realtime_Player_o *__this_00;
  ExitGames_Client_Photon_Hashtable_o *__this_01;
  UnityEngine_UI_Text_o *pUVar7;
  System_String_o *value;
  
  if (DAT_057046e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Hashtable);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Name cannot be empty.");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"Not connected.");
    DAT_057046e1 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
LAB_040c7880:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pSVar1 = (__this->fields)._keySetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar5 = (pSVar1->fields)._value;
    if ((pSVar5 == (System_String_o *)0x0) ||
       (pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0), pSVar5 == (System_String_o *)0x0)) {
      pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pSVar1 = (__this->fields)._valueSetting;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      value = (pSVar1->fields)._value;
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
          __this_00 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        }
        else {
          __this_00 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        }
        if (__this_00 == (Photon_Realtime_Player_o *)0x0) {
          pUVar7 = (__this->fields)._statusLabel;
          if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
            puVar6 = &"Not connected.";
            goto LAB_040c7846;
          }
        }
        else {
          __this_01 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_glue(TypeInfo_Hashtable);
          ExitGames_Client_Photon_Hashtable___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
            ExitGames_Client_Photon_Hashtable__set_Item
                      (__this_01,(Il2CppObject *)pSVar5,(Il2CppObject *)value,(MethodInfo *)0x0);
            Photon_Realtime_Player__SetCustomProperties
                      (__this_00,__this_01,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                       (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
            if ((char)(__this->fields)._addMode == '\0') {
              pSVar3 = (__this->fields)._onSave;
              if (pSVar3 != (System_Action_string__o *)0x0) {
                (*(code *)(pSVar3->fields).invoke_impl)
                          ((pSVar3->fields).method_code,value,(pSVar3->fields).method);
              }
            }
            else {
              pSVar2 = (__this->fields)._onAdd;
              if (pSVar2 != (System_Action_string__string__o *)0x0) {
                (*(code *)(pSVar2->fields).invoke_impl)
                          ((pSVar2->fields).method_code,pSVar5,value,(pSVar2->fields).method);
              }
            }
            goto LAB_040c7880;
          }
        }
      }
      else {
        pUVar7 = (__this->fields)._statusLabel;
        if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
          puVar6 = &"Name cannot be empty.";
LAB_040c7846:
          vtable_dispatch = (pUVar7->klass->vtable)._75_set_text.methodPtr;
          (*vtable_dispatch)
                    (pUVar7,*puVar6,(pUVar7->klass->vtable)._75_set_text.method,
                     vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PlayerPropEditPopup$$.ctor
// il2cpp: void UI_PlayerPropEditPopup___ctor (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c78b0

void UI_PlayerPropEditPopup___ctor(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (DAT_057046e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057046e2 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._keySetting = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._keySetting,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._valueSetting = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._valueSetting);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PlayerPropEditPopup$$<Setup>b__19_0
// il2cpp: void UI_PlayerPropEditPopup___Setup_b__19_0 (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c7990

void UI_PlayerPropEditPopup__<Setup>b__19_0(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057046e3 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_057046e3 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PlayerPropEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.PlayerPropEditPopup$$<Setup>b__19_1
// il2cpp: void UI_PlayerPropEditPopup___Setup_b__19_1 (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x40c79d0

void UI_PlayerPropEditPopup__<Setup>b__19_1(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057046e4 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057046e4 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PlayerPropEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


