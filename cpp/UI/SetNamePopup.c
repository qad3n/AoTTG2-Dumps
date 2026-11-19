// Type: UI.SetNamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/SetNamePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SetNamePopup.cs
// --------------------------------

// UI.SetNamePopup$$get_Title
// il2cpp: System_String_o* UI_SetNamePopup__get_Title (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc7690

System_String_o * UI_SetNamePopup__get_Title(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.SetNamePopup$$get_Width
// il2cpp: float UI_SetNamePopup__get_Width (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc76b0

float UI_SetNamePopup__get_Width(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 320.0;
}


// UI.SetNamePopup$$get_Height
// il2cpp: float UI_SetNamePopup__get_Height (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc76c0

float UI_SetNamePopup__get_Height(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 230.0;
}


// UI.SetNamePopup$$get_VerticalPadding
// il2cpp: int32_t UI_SetNamePopup__get_VerticalPadding (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc76d0

int32_t UI_SetNamePopup__get_VerticalPadding(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.SetNamePopup$$Setup
// il2cpp: void UI_SetNamePopup__Setup (UI_SetNamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc76e0

void UI_SetNamePopup__Setup(UI_SetNamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UI_InputSettingElement_o *pUVar6;
  PatreonEffects_NameEffectController_o *pPVar7;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SetNamePopup_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SetNamePopup_Setup_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SetName");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b4f = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,100.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SetNamePopup_Setup_b__15_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SetNamePopup_Setup_b__15_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pSVar3 = UI_UIManager__GetLocaleCommon("SetName",(MethodInfo *)0x0);
  (__this->fields)._defaultFieldLabel = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultFieldLabel);
  pUVar5 = UI_ElementFactory__CreateInputSetting
                     ((__this->fields).SinglePanel,__this_00,
                      (Settings_BaseSetting_o *)(__this->fields).NameSetting,
                      (__this->fields)._defaultFieldLabel,"",140.0,40.0,false,
                      (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      (MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
label_05cc7a4b:
    ThrowNullReferenceException();
  }
  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
  (__this->fields)._element = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._element);
  bVar2 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar2) {
    pUVar5 = UI_ElementFactory__CreateTMPLabel
                       ((__this->fields).SinglePanel,__this_00,
                        (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,3,(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._previewLabel;
    (__this->fields)._previewLabel = pUVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
    x = (UnityEngine_Object_o *)(__this->fields)._previewLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar5 = *targetAddress;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pPVar7 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar5,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
        (__this->fields)._previewEffect = pPVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffect);
        pPVar7 = (__this->fields)._previewEffect;
        if (pPVar7 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__AutoConfigure(pPVar7,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_05cc7a4b;
    }
  }
  return;
}


// UI.SetNamePopup$$Show
// il2cpp: void UI_SetNamePopup__Show (UI_SetNamePopup_o* __this, System_String_o* initialValue, UnityEngine_Events_UnityAction_o* onSave, System_String_o* title, System_String_o* fieldLabel, const MethodInfo* method);
// 0x5cc7a50

void UI_SetNamePopup__Show
               (UI_SetNamePopup_o *__this,System_String_o *initialValue,
               UnityEngine_Events_UnityAction_o *onSave,System_String_o *title,System_String_o *fieldLabel,
               MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_07547b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547b50 = '\x01';
  }
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar3 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar3);
    (__this->fields)._initialValue = initialValue;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._initialValue);
    (__this->fields)._onSave = onSave;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave);
    UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_00);
    bVar2 = System_String__IsNullOrEmpty(fieldLabel,(MethodInfo *)0x0);
    if (bVar2) {
      fieldLabel = (__this->fields)._defaultFieldLabel;
    }
    UI_SetNamePopup__SetFieldLabel(__this,fieldLabel,method_01);
    __this_00 = (__this->fields).NameSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)initialValue,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar1 = (__this->fields)._element;
      if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
        pMVar3 = (pUVar1->klass->vtable)._6_SyncElement.method;
        (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)(pUVar1,pMVar3);
        UI_SetNamePopup__RefreshPreview(__this,pMVar3);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SetNamePopup$$SetFieldLabel
// il2cpp: void UI_SetNamePopup__SetFieldLabel (UI_SetNamePopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x5cc7b60

void UI_SetNamePopup__SetFieldLabel(UI_SetNamePopup_o *__this,System_String_o *label,MethodInfo *method)

{
  UI_InputSettingElement_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Text_o *x;
  
  if (Il2CppMethodInitialized_07547b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_07547b51 = '\x01';
  }
  pUVar1 = (__this->fields)._element;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._element;
  if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    x = (UnityEngine_UI_Text_o *)0x0;
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Label",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      x = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)pUVar3,
                     (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (label == (System_String_o *)0x0) {
      label = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    if (x != (UnityEngine_UI_Text_o *)0x0) {
      (*(x->klass->vtable)._75_set_text.methodPtr)(x,label,(x->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SetNamePopup$$RefreshPreview
// il2cpp: void UI_SetNamePopup__RefreshPreview (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc7ca0

void UI_SetNamePopup__RefreshPreview(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *raw;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  Settings_ColorSetting_o *pSVar4;
  Utility_Color255_o *pUVar5;
  bool bVar6;
  TMPro_TextMeshProUGUI_o *x_00;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_Fields UVar7;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07547b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07547b52 = '\x01';
  }
  iStack_2c = 0;
  pPVar1 = (__this->fields)._previewEffect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if ((pSVar2 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).NameEffect, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    raw = (pSVar3->fields)._value;
    x = (UnityEngine_Object_o *)(__this->fields)._previewLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      __this_00 = (__this->fields)._previewLabel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05cc7f0f;
      x_00 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        pSVar3 = (__this->fields).NameSetting;
        if ((pSVar3 == (Settings_StringSetting_o *)0x0) || (x_00 == (TMPro_TextMeshProUGUI_o *)0x0))
        goto label_05cc7f0f;
        (*(x_00->klass->vtable)._66_set_text.methodPtr)
                  (x_00,(pSVar3->fields)._value,(x_00->klass->vtable)._66_set_text.method);
      }
    }
    bVar6 = PatreonEffects_NameEffectPresets__TryResolve(raw,&iStack_2c,(MethodInfo *)0x0);
    if (bVar6) {
      settings = PatreonEffects_NameEffectPresets__GetPreset(iStack_2c,(MethodInfo *)0x0);
      pSVar4 = (pSVar2->fields).NameEffectColorA;
      if (((pSVar4 != (Settings_ColorSetting_o *)0x0) &&
          (pUVar5 = (pSVar4->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) &&
         (UVar7 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0),
         settings != (PatreonEffects_NameEffectSettings_o *)0x0)) {
        (settings->fields).gradientA.fields = UVar7;
        pSVar4 = (pSVar2->fields).NameEffectColorB;
        if ((pSVar4 != (Settings_ColorSetting_o *)0x0) &&
           (pUVar5 = (pSVar4->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
          UVar7 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
          (settings->fields).gradientB.fields = UVar7;
          pSVar4 = (pSVar2->fields).NameEffectColorC;
          if ((pSVar4 != (Settings_ColorSetting_o *)0x0) &&
             (pUVar5 = (pSVar4->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
            UVar7 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
            (settings->fields).gradientC.fields = UVar7;
            pSVar4 = (pSVar2->fields).NameEffectColorD;
            if ((pSVar4 != (Settings_ColorSetting_o *)0x0) &&
               (pUVar5 = (pSVar4->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
              UVar7 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
              (settings->fields).gradientD.fields = UVar7;
              pPVar1 = (__this->fields)._previewEffect;
              if (pPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
                PatreonEffects_NameEffectController__Apply(pPVar1,settings,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pPVar1 = (__this->fields)._previewEffect;
      if (pPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Clear(pPVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05cc7f0f:
  ThrowNullReferenceException();
}


// UI.SetNamePopup$$OnButtonClick
// il2cpp: void UI_SetNamePopup__OnButtonClick (UI_SetNamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc7f20

void UI_SetNamePopup__OnButtonClick(UI_SetNamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b53 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar3) {
label_05cc8012:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar3 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pSVar1 = (__this->fields).NameSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar3 = System_String__op_Equality
                      ((pSVar1->fields)._value,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (MethodInfo *)0x0);
    if (bVar3) {
      pSVar1 = (__this->fields).NameSetting;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_05cc8037;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)(__this->fields)._initialValue,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    pUVar2 = (__this->fields)._onSave;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      goto label_05cc8012;
    }
  }
label_05cc8037:
  ThrowNullReferenceException();
}


// UI.SetNamePopup$$.ctor
// il2cpp: void UI_SetNamePopup___ctor (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc8040

void UI_SetNamePopup___ctor(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547b54 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).NameSetting = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.SetNamePopup$$<Setup>b__15_0
// il2cpp: void UI_SetNamePopup___Setup_b__15_0 (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc80d0

void UI_SetNamePopup___Setup_b__15_0(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b55 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SetNamePopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.SetNamePopup$$<Setup>b__15_1
// il2cpp: void UI_SetNamePopup___Setup_b__15_1 (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x5cc8110

void UI_SetNamePopup___Setup_b__15_1(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547b56 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SetNamePopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


