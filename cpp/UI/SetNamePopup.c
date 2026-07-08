// Type: UI.SetNamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SetNamePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/SetNamePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.SetNamePopup$$get_Title
// il2cpp: System_String_o* UI_SetNamePopup__get_Title (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402bc80

System_String_o * UI_SetNamePopup__get_Title(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.SetNamePopup$$get_Width
// il2cpp: float UI_SetNamePopup__get_Width (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402bca0

float UI_SetNamePopup__get_Width(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 320.0;
}


// UI.SetNamePopup$$get_Height
// il2cpp: float UI_SetNamePopup__get_Height (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402bcb0

float UI_SetNamePopup__get_Height(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 230.0;
}


// UI.SetNamePopup$$get_VerticalPadding
// il2cpp: int32_t UI_SetNamePopup__get_VerticalPadding (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402bcc0

int32_t UI_SetNamePopup__get_VerticalPadding(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.SetNamePopup$$Setup
// il2cpp: void UI_SetNamePopup__Setup (UI_SetNamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x402bcd0

void UI_SetNamePopup__Setup(UI_SetNamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *x;
  int32_t fontSize;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_InputSettingElement_o *pUVar7;
  PatreonEffects_NameEffectController_o *pPVar8;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704341 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SetName");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_05704341 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,100.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pSVar4 = UI_UIManager__GetLocaleCommon("SetName",(MethodInfo *)0x0);
  (__this->fields)._defaultFieldLabel = pSVar4;
  il2cpp_runtime_glue(&(__this->fields)._defaultFieldLabel,pSVar4);
  pUVar6 = UI_ElementFactory__CreateInputSetting
                     ((__this->fields).SinglePanel,__this_00,
                      (Settings_BaseSetting_o *)(__this->fields).NameSetting,
                      (__this->fields)._defaultFieldLabel,"",140.0,40.0,0,
                      (UnityEngine_Events_UnityAction_o *)0x0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UI_InputSettingElement_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    (__this->fields)._element = pUVar7;
    il2cpp_runtime_glue(&(__this->fields)._element,pUVar7);
    bVar3 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar6 = UI_ElementFactory__CreateTMPLabel
                         ((__this->fields).SinglePanel,__this_00,
                          (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,3,
                          (MethodInfo *)0x0);
      ppUVar1 = &(__this->fields)._previewLabel;
      (__this->fields)._previewLabel = pUVar6;
      il2cpp_runtime_glue(ppUVar1);
      x = (UnityEngine_Object_o *)(__this->fields)._previewLabel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar6 = *ppUVar1;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pPVar8 = (PatreonEffects_NameEffectController_o *)
                   UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
          (__this->fields)._previewEffect = pPVar8;
          il2cpp_runtime_glue(&(__this->fields)._previewEffect);
          pPVar8 = (__this->fields)._previewEffect;
          if (pPVar8 != (PatreonEffects_NameEffectController_o *)0x0) {
            PatreonEffects_NameEffectController__AutoConfigure(pPVar8,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_0402c03b;
      }
    }
    return;
  }
LAB_0402c03b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SetNamePopup$$Show
// il2cpp: void UI_SetNamePopup__Show (UI_SetNamePopup_o* __this, System_String_o* initialValue, UnityEngine_Events_UnityAction_o* onSave, System_String_o* title, System_String_o* fieldLabel, const MethodInfo* method);
// 0x402c040

void UI_SetNamePopup__Show
               (UI_SetNamePopup_o *__this,System_String_o *initialValue,
               UnityEngine_Events_UnityAction_o *onSave,System_String_o *title,
               System_String_o *fieldLabel,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UI_InputSettingElement_c *pUVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar4;
  
  if (DAT_05704342 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704342 = '\x01';
  }
  __this_01 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar4 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar4);
    (__this->fields)._initialValue = initialValue;
    il2cpp_runtime_glue(&(__this->fields)._initialValue,initialValue);
    (__this->fields)._onSave = onSave;
    il2cpp_runtime_glue(&(__this->fields)._onSave,onSave);
    UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_00);
    bVar3 = System_String__IsNullOrEmpty(fieldLabel,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      fieldLabel = (__this->fields)._defaultFieldLabel;
    }
    UI_SetNamePopup__SetFieldLabel(__this,fieldLabel,method_01);
    __this_00 = (__this->fields).NameSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)initialValue,MethodInfo_Void_set_Value);
      pUVar1 = (__this->fields)._element;
      if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
        pUVar2 = pUVar1->klass;
        pMVar4 = (pUVar2->vtable)._6_SyncElement.method;
        (*(pUVar2->vtable)._6_SyncElement.methodPtr)();
        UI_SetNamePopup__RefreshPreview(__this,pMVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SetNamePopup$$SetFieldLabel
// il2cpp: void UI_SetNamePopup__SetFieldLabel (UI_SetNamePopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x402c150

void UI_SetNamePopup__SetFieldLabel
               (UI_SetNamePopup_o *__this,System_String_o *label,MethodInfo *method)

{
  UI_InputSettingElement_o *pUVar1;
  code *vtable_dispatch;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Object_o *x;
  
  if (DAT_05704343 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Label");
    DAT_05704343 = '\x01';
  }
  pUVar1 = (__this->fields)._element;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pUVar1 = (__this->fields)._element;
  if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    x = (UnityEngine_Object_o *)0x0;
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Label",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__GetComponent<object>
                    ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (label == (System_String_o *)0x0) {
      label = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      vtable_dispatch = x->klass[4]._1.gc_desc;
      (*vtable_dispatch)(x,label,x->klass[4]._1.name,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SetNamePopup$$RefreshPreview
// il2cpp: void UI_SetNamePopup__RefreshPreview (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402c290

void UI_SetNamePopup__RefreshPreview(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  long lVar2;
  System_String_o *raw;
  UnityEngine_GameObject_o *__this_00;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Object_c *pUVar4;
  undefined8 uVar5;
  Utility_Color255_o *pUVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *pUVar8;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_Fields UVar9;
  int32_t local_2c;
  
  if (DAT_05704344 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_05704344 = '\x01';
  }
  local_2c = 0;
  pPVar1 = (__this->fields)._previewEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
    raw = *(System_String_o **)(*(long *)(lVar2 + 0x88) + 0x18);
    pUVar8 = (UnityEngine_Object_o *)(__this->fields)._previewLabel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_00 = (__this->fields)._previewLabel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0402c4ff;
      pUVar8 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pSVar3 = (__this->fields).NameSetting;
        if ((pSVar3 == (Settings_StringSetting_o *)0x0) || (pUVar8 == (UnityEngine_Object_o *)0x0))
        goto LAB_0402c4ff;
        pUVar4 = pUVar8->klass;
        uVar5._0_4_ = pUVar4[3]._2.instance_size;
        uVar5._4_4_ = pUVar4[3]._2.actualSize;
        (*pUVar4[3]._2.genericContainerHandle)(pUVar8,(pSVar3->fields)._value,uVar5);
      }
    }
    bVar7 = PatreonEffects_NameEffectPresets__TryResolve(raw,&local_2c,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pPVar1 = (__this->fields)._previewEffect;
      if (pPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Clear(pPVar1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      settings = PatreonEffects_NameEffectPresets__GetPreset(local_2c,(MethodInfo *)0x0);
      if (((*(long *)(lVar2 + 0x90) != 0) &&
          (pUVar6 = *(Utility_Color255_o **)(*(long *)(lVar2 + 0x90) + 0x18),
          pUVar6 != (Utility_Color255_o *)0x0)) &&
         (UVar9 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0),
         settings != (PatreonEffects_NameEffectSettings_o *)0x0)) {
        (settings->fields).gradientA.fields = UVar9;
        if ((*(long *)(lVar2 + 0x98) != 0) &&
           (pUVar6 = *(Utility_Color255_o **)(*(long *)(lVar2 + 0x98) + 0x18),
           pUVar6 != (Utility_Color255_o *)0x0)) {
          UVar9 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0);
          (settings->fields).gradientB.fields = UVar9;
          if ((*(long *)(lVar2 + 0xa0) != 0) &&
             (pUVar6 = *(Utility_Color255_o **)(*(long *)(lVar2 + 0xa0) + 0x18),
             pUVar6 != (Utility_Color255_o *)0x0)) {
            UVar9 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0);
            (settings->fields).gradientC.fields = UVar9;
            if ((*(long *)(lVar2 + 0xa8) != 0) &&
               (pUVar6 = *(Utility_Color255_o **)(*(long *)(lVar2 + 0xa8) + 0x18),
               pUVar6 != (Utility_Color255_o *)0x0)) {
              UVar9 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar6,(MethodInfo *)0x0);
              (settings->fields).gradientD.fields = UVar9;
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
  }
LAB_0402c4ff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SetNamePopup$$OnButtonClick
// il2cpp: void UI_SetNamePopup__OnButtonClick (UI_SetNamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x402c510

void UI_SetNamePopup__OnButtonClick
               (UI_SetNamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  bool_conflict bVar3;
  
  if (DAT_05704345 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704345 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
LAB_0402c602:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar3 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pSVar1 = (__this->fields).NameSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar3 = System_String__op_Equality
                      ((pSVar1->fields)._value,
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pSVar1 = (__this->fields).NameSetting;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto LAB_0402c627;
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)(__this->fields)._initialValue
                 ,MethodInfo_Void_set_Value);
    }
    pUVar2 = (__this->fields)._onSave;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      goto LAB_0402c602;
    }
  }
LAB_0402c627:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SetNamePopup$$.ctor
// il2cpp: void UI_SetNamePopup___ctor (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402c630

void UI_SetNamePopup___ctor(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  MethodInfo *method_00;
  
  if (DAT_05704346 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05704346 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).NameSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).NameSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.SetNamePopup$$<Setup>b__15_0
// il2cpp: void UI_SetNamePopup___Setup_b__15_0 (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402c6c0

void UI_SetNamePopup__<Setup>b__15_0(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704347 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_05704347 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SetNamePopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.SetNamePopup$$<Setup>b__15_1
// il2cpp: void UI_SetNamePopup___Setup_b__15_1 (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x402c700

void UI_SetNamePopup__<Setup>b__15_1(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704348 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704348 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SetNamePopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


