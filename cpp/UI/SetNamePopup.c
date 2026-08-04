// Type: UI.SetNamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SetNamePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SetNamePopup.cs
// --------------------------------

// UI.SetNamePopup$$get_Title
// il2cpp: System_String_o* UI_SetNamePopup__get_Title (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x4355460

System_String_o * UI_SetNamePopup__get_Title(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.SetNamePopup$$get_Width
// il2cpp: float UI_SetNamePopup__get_Width (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x4355480

float UI_SetNamePopup__get_Width(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 320.0;
}


// UI.SetNamePopup$$get_Height
// il2cpp: float UI_SetNamePopup__get_Height (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x4355490

float UI_SetNamePopup__get_Height(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 230.0;
}


// UI.SetNamePopup$$get_VerticalPadding
// il2cpp: int32_t UI_SetNamePopup__get_VerticalPadding (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x43554a0

int32_t UI_SetNamePopup__get_VerticalPadding(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.SetNamePopup$$Setup
// il2cpp: void UI_SetNamePopup__Setup (UI_SetNamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43554b0

void UI_SetNamePopup__Setup(UI_SetNamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *__this_00;
  Settings_StringSetting_o *pSVar1;
  UI_SetNamePopup_c *pUVar2;
  long lVar3;
  PatreonEffects_NameEffectController_c *pPVar4;
  code *vtableDispatch;
  Utility_Color255_o *__this_01;
  Il2CppObject *value;
  undefined8 uVar5;
  undefined8 uVar6;
  int32_t fontSize;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  PatreonEffects_NameEffectController_o *pPVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_o *title;
  UnityEngine_GameObject_o *pUVar11;
  UI_InputSettingElement_o *pUVar12;
  PatreonEffects_NameEffectController_o *pPVar13;
  UnityEngine_Transform_o *pUVar14;
  UI_SetNamePopup_o *x;
  undefined8 uVar15;
  MethodInfo *pMVar16;
  MethodInfo *extraout_RDX;
  UnityEngine_Events_UnityAction_o *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_SetNamePopup_o *x_00;
  undefined8 *puVar17;
  UI_TooltipPopup_o *a;
  UI_SetNamePopup_o *__this_02;
  UI_SetNamePopup_o *pUVar18;
  UI_TooltipPopup_o *__this_03;
  PatreonEffects_NameEffectController_o *pPVar19;
  long *plVar20;
  UnityEngine_Color_o UVar21;
  UnityEngine_Color_Fields UVar22;
  undefined8 uStackY_a8;
  UI_SetNamePopup_o *pUStackY_a0;
  System_String_o *pSStackY_98;
  PatreonEffects_NameEffectController_o *pPStackY_90;
  PatreonEffects_NameEffectController_o *pPStackY_88;
  UI_SetNamePopup_o *pUStackY_80;
  System_String_o *pSStackY_78;
  UnityEngine_Events_UnityAction_o *pUStackY_70;
  PatreonEffects_NameEffectController_o *pPStackY_68;
  UI_SetNamePopup_o *pUStackY_60;
  
  if (g_data_057ae157 == '\0') {
    pUStackY_60 = (UI_SetNamePopup_o *)0x43554dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pUStackY_60 = (UI_SetNamePopup_o *)0x43554e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    pUStackY_60 = (UI_SetNamePopup_o *)0x43554f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355501;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStackY_60 = (UI_SetNamePopup_o *)0x435550d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355519;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355525;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355531;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStackY_60 = (UI_SetNamePopup_o *)0x435553d;
    il2cpp_runtime_helper_023445d0(&"SetName");
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355549;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355555;
    il2cpp_runtime_helper_023445d0(&"Save");
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355561;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae157 = '\x01';
    method = extraout_RDX;
  }
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355573;
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355586;
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pUStackY_60 = (UI_SetNamePopup_o *)0x435559c;
  pSVar8 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUStackY_60 = (UI_SetNamePopup_o *)0x43555ae;
  pPVar9 = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pUStackY_60 = (UI_SetNamePopup_o *)0x43555d1;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pPVar9,fontSize,100.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pUStackY_60 = (UI_SetNamePopup_o *)0x43555ed;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStackY_60 = (UI_SetNamePopup_o *)0x43555fe;
  pSVar8 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355611;
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pUStackY_60 = (UI_SetNamePopup_o *)0x435562b;
  UnityEngine_Events_UnityAction___ctor();
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355642;
  UI_ElementFactory__CreateTextButton
            (pUVar14,(UI_ElementStyle_o *)pPVar9,pSVar8,0.0,pUVar10,(MethodInfo *)0x0);
  pUVar18 = (UI_SetNamePopup_o *)(__this->fields).BottomBar;
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355657;
  title = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355663;
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pUStackY_60 = (UI_SetNamePopup_o *)0x435567d;
  UnityEngine_Events_UnityAction___ctor();
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355694;
  UI_ElementFactory__CreateTextButton
            ((UnityEngine_Transform_o *)pUVar18,(UI_ElementStyle_o *)pPVar9,title,0.0,pUVar10,
             (MethodInfo *)0x0);
  pUStackY_60 = (UI_SetNamePopup_o *)0x43556a5;
  pSVar8 = UI_UIManager__GetLocaleCommon("SetName",(MethodInfo *)0x0);
  (__this->fields)._defaultFieldLabel = pSVar8;
  pUStackY_60 = (UI_SetNamePopup_o *)0x43556bb;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._defaultFieldLabel,pSVar8);
  __this_02 = (UI_SetNamePopup_o *)(__this->fields).SinglePanel;
  pSVar8 = (__this->fields)._defaultFieldLabel;
  pUStackY_60 = (UI_SetNamePopup_o *)0x4355707;
  pPVar13 = pPVar9;
  pPVar19 = "";
  pUVar11 = UI_ElementFactory__CreateInputSetting
                      ((UnityEngine_Transform_o *)__this_02,(UI_ElementStyle_o *)pPVar9,
                       (Settings_BaseSetting_o *)(__this->fields).NameSetting,pSVar8,
                       (System_String_o *)"",140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355722;
    pUVar12 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    (__this->fields)._element = pUVar12;
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355738;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._element,pUVar12);
    pUStackY_60 = (UI_SetNamePopup_o *)0x435573f;
    bVar7 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    pSVar8 = (System_String_o *)0x0;
    pPVar19 = (PatreonEffects_NameEffectController_o *)0x3;
    pUStackY_60 = (UI_SetNamePopup_o *)0x4355776;
    pUVar11 = UI_ElementFactory__CreateTMPLabel
                        ((__this->fields).SinglePanel,(UI_ElementStyle_o *)pPVar9,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
    pPVar9 = (PatreonEffects_NameEffectController_o *)&(__this->fields)._previewLabel;
    (__this->fields)._previewLabel = pUVar11;
    pUStackY_60 = (UI_SetNamePopup_o *)0x435578f;
    il2cpp_runtime_helper_022b4080(pPVar9);
    pUVar18 = (UI_SetNamePopup_o *)(__this->fields)._previewLabel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStackY_60 = (UI_SetNamePopup_o *)0x43557ae;
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar13 = (PatreonEffects_NameEffectController_o *)0x0;
    pUStackY_60 = (UI_SetNamePopup_o *)0x43557ba;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    __this_02 = (UI_SetNamePopup_o *)0x0;
    if (*(UnityEngine_GameObject_o **)pPVar9 != (UnityEngine_GameObject_o *)0x0) {
      pUStackY_60 = (UI_SetNamePopup_o *)0x43557d5;
      pPVar13 = (PatreonEffects_NameEffectController_o *)
                UnityEngine_GameObject__AddComponent_object_
                          (*(UnityEngine_GameObject_o **)pPVar9,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      (__this->fields)._previewEffect = pPVar13;
      pUStackY_60 = (UI_SetNamePopup_o *)0x43557eb;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._previewEffect);
      __this_00 = (__this->fields)._previewEffect;
      __this_02 = (UI_SetNamePopup_o *)0x0;
      if (__this_00 != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__AutoConfigure(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pUStackY_60 = (UI_SetNamePopup_o *)UI_SetNamePopup__Show;
  il2cpp_runtime_helper_022b2c90();
  pUStackY_70 = (UnityEngine_Events_UnityAction_o *)&TypeInfo_UnityAction;
  pUStackY_80 = __this;
  pSStackY_78 = title;
  pPStackY_68 = pPVar9;
  pUStackY_60 = pUVar18;
  if (g_data_057ae158 == '\0') {
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x435584d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae158 = '\x01';
  }
  pPVar9 = (PatreonEffects_NameEffectController_o *)0x0;
  pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x435585e;
  pUVar18 = __this_02;
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
label_04355929:
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x435592e;
    uStackY_a8 = il2cpp_runtime_helper_022b2c90();
    puVar17 = &uStackY_a8;
    pUStackY_a0 = __this_02;
    pSStackY_98 = pSVar8;
    pPStackY_90 = pPVar13;
    pPStackY_88 = pPVar19;
    if (g_data_057ae159 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"Label");
      g_data_057ae159 = '\x01';
    }
    x_00 = (UI_SetNamePopup_o *)(pUVar18->fields)._element;
    plVar20 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    __this_02 = (UI_SetNamePopup_o *)(pUVar18->fields)._element;
    if ((__this_02 != (UI_SetNamePopup_o *)0x0) &&
       (pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
       , pUVar14 != (UnityEngine_Transform_o *)0x0)) {
      x = (UI_SetNamePopup_o *)0x0;
      pUVar14 = UnityEngine_Transform__Find(pUVar14,"Label",(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        x = (UI_SetNamePopup_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar14,MethodInfo_Text_GetComponent_Text);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = x;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (pPVar9 == (PatreonEffects_NameEffectController_o *)0x0) {
        pPVar9 = (PatreonEffects_NameEffectController_o *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      x_00 = (UI_SetNamePopup_o *)0x0;
      if (x != (UI_SetNamePopup_o *)0x0) {
        pUVar2 = x->klass;
        vtableDispatch = *(code **)&pUVar2[1]._2.element_size;
        uVar15._0_4_ = pUVar2[1]._2.static_fields_size;
        uVar15._4_4_ = pUVar2[1]._2.thread_static_fields_size;
        (*vtableDispatch)(x,pPVar9,uVar15,vtableDispatch);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar10 = extraout_RDX_00;
  }
  else {
    pMVar16 = (MethodInfo *)0x0;
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x4355871;
    bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x4355887;
    UI_BasePopup__Show((UI_BasePopup_o *)__this_02,pMVar16);
    (__this_02->fields)._initialValue = (System_String_o *)pPVar13;
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x435589d;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields)._initialValue,pPVar13);
    (__this_02->fields)._onSave = extraout_RDX_00;
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x43558b3;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields)._onSave,extraout_RDX_00);
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x43558be;
    UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_02,pSVar8,method_00);
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x43558c8;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pPVar19,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pPVar19 = (PatreonEffects_NameEffectController_o *)(__this_02->fields)._defaultFieldLabel;
    }
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x43558de;
    pPVar9 = pPVar19;
    UI_SetNamePopup__SetFieldLabel(__this_02,(System_String_o *)pPVar19,method_01);
    pSVar1 = (__this_02->fields).NameSetting;
    pUVar18 = (UI_SetNamePopup_o *)0x0;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_04355929;
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x43558fc;
    pPVar9 = pPVar13;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pPVar13,MethodInfo_Void_set_Value);
    pUVar12 = (__this_02->fields)._element;
    pUVar18 = (UI_SetNamePopup_o *)0x0;
    if (pUVar12 == (UI_InputSettingElement_o *)0x0) goto label_04355929;
    pPStackY_88 = (PatreonEffects_NameEffectController_o *)0x4355918;
    (*(pUVar12->klass->vtable)._6_SyncElement.methodPtr)();
    puVar17 = (undefined8 *)&stack0xffffffffffffffa8;
    x_00 = pUStackY_80;
    plVar20 = (long *)pSStackY_78;
    pUVar10 = pUStackY_70;
    pPVar9 = pPStackY_68;
    pUVar18 = pUStackY_60;
  }
  *(UI_SetNamePopup_o **)((long)puVar17 + -8) = pUVar18;
  *(PatreonEffects_NameEffectController_o **)((long)puVar17 + -0x10) = pPVar9;
  *(UnityEngine_Events_UnityAction_o **)((long)puVar17 + -0x18) = pUVar10;
  *(long **)((long)puVar17 + -0x20) = plVar20;
  *(UI_SetNamePopup_o **)((long)puVar17 + -0x28) = x_00;
  if (g_data_057ae15a == '\0') {
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355a95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355aa1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355aad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355ab9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355ac5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae15a = '\x01';
  }
  *(undefined4 *)((long)puVar17 + -0x2c) = 0;
  pPVar9 = (__this_02->fields)._previewEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355af4;
    il2cpp_runtime_helper_02337ed0();
  }
  a = (UI_TooltipPopup_o *)0x0;
  *(undefined8 *)((long)puVar17 + -0x40) = 0x4355b00;
  pPVar19 = pPVar9;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x88) != 0)) {
    pUVar18 = *(UI_SetNamePopup_o **)(*(long *)(lVar3 + 0x88) + 0x18);
    pPVar9 = (PatreonEffects_NameEffectController_o *)(__this_02->fields)._previewLabel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar17 + -0x40) = 0x4355b54;
      il2cpp_runtime_helper_02337ed0();
    }
    a = (UI_TooltipPopup_o *)0x0;
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355b60;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pUVar11 = (__this_02->fields)._previewLabel;
      pPVar19 = (PatreonEffects_NameEffectController_o *)0x0;
      if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04355cdf;
      *(undefined8 *)((long)puVar17 + -0x40) = 0x4355b83;
      pPVar9 = (PatreonEffects_NameEffectController_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar17 + -0x40) = 0x4355b98;
        il2cpp_runtime_helper_02337ed0();
      }
      a = (UI_TooltipPopup_o *)0x0;
      *(undefined8 *)((long)puVar17 + -0x40) = 0x4355ba4;
      pPVar19 = pPVar9;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pPVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pSVar1 = (__this_02->fields).NameSetting;
        if ((pSVar1 == (Settings_StringSetting_o *)0x0) ||
           (pPVar9 == (PatreonEffects_NameEffectController_o *)0x0)) goto label_04355cdf;
        pSVar8 = (pSVar1->fields)._value;
        pPVar4 = pPVar9->klass;
        uVar5._0_4_ = pPVar4[3]._2.instance_size;
        uVar5._4_4_ = pPVar4[3]._2.actualSize;
        vtableDispatch = pPVar4[3]._2.genericContainerHandle;
        *(undefined8 *)((long)puVar17 + -0x40) = 0x4355bd8;
        (*vtableDispatch)(pPVar9,pSVar8,uVar5);
      }
    }
    a = (UI_TooltipPopup_o *)((long)puVar17 + -0x2c);
    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355be7;
    bVar7 = PatreonEffects_NameEffectPresets__TryResolve
                      ((System_String_o *)pUVar18,(int32_t *)a,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pPVar13 = (__this_02->fields)._previewEffect;
      pPVar19 = (PatreonEffects_NameEffectController_o *)0x0;
      if (pPVar13 != (PatreonEffects_NameEffectController_o *)0x0) {
        *(undefined8 *)((long)puVar17 + -0x40) = 0x4355cd1;
        PatreonEffects_NameEffectController__Clear(pPVar13,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pPVar19 = (PatreonEffects_NameEffectController_o *)(ulong)*(uint *)((long)puVar17 + -0x2c);
      a = (UI_TooltipPopup_o *)0x0;
      *(undefined8 *)((long)puVar17 + -0x40) = 0x4355bfa;
      pPVar9 = (PatreonEffects_NameEffectController_o *)
               PatreonEffects_NameEffectPresets__GetPreset(*(uint *)((long)puVar17 + -0x2c),(MethodInfo *)0x0)
      ;
      if ((*(long *)(lVar3 + 0x90) != 0) &&
         (pPVar19 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar3 + 0x90) + 0x18),
         pPVar19 != (PatreonEffects_NameEffectController_o *)0x0)) {
        a = (UI_TooltipPopup_o *)0x0;
        *(undefined8 *)((long)puVar17 + -0x40) = 0x4355c22;
        UVar21 = Utility_Color255__ToColor((Utility_Color255_o *)pPVar19,(MethodInfo *)0x0);
        if (pPVar9 != (PatreonEffects_NameEffectController_o *)0x0) {
          *(UnityEngine_Color_Fields *)&pPVar9->fields = UVar21.fields;
          if ((*(long *)(lVar3 + 0x98) != 0) &&
             (pPVar19 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar3 + 0x98) + 0x18),
             pPVar19 != (PatreonEffects_NameEffectController_o *)0x0)) {
            a = (UI_TooltipPopup_o *)0x0;
            *(undefined8 *)((long)puVar17 + -0x40) = 0x4355c57;
            UVar22 = (UnityEngine_Color_Fields)
                     Utility_Color255__ToColor((Utility_Color255_o *)pPVar19,(MethodInfo *)0x0);
            ((UnityEngine_Color_o *)&(pPVar9->fields).text)->fields = UVar22;
            if ((*(long *)(lVar3 + 0xa0) != 0) &&
               (pPVar19 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar3 + 0xa0) + 0x18),
               pPVar19 != (PatreonEffects_NameEffectController_o *)0x0)) {
              a = (UI_TooltipPopup_o *)0x0;
              *(undefined8 *)((long)puVar17 + -0x40) = 0x4355c7b;
              UVar22 = (UnityEngine_Color_Fields)
                       Utility_Color255__ToColor((Utility_Color255_o *)pPVar19,(MethodInfo *)0x0);
              ((UnityEngine_Color_o *)&(pPVar9->fields).originalFontMaterial)->fields = UVar22;
              if (*(long *)(lVar3 + 0xa8) != 0) {
                __this_01 = *(Utility_Color255_o **)(*(long *)(lVar3 + 0xa8) + 0x18);
                pPVar19 = (PatreonEffects_NameEffectController_o *)0x0;
                if (__this_01 != (Utility_Color255_o *)0x0) {
                  a = (UI_TooltipPopup_o *)0x0;
                  *(undefined8 *)((long)puVar17 + -0x40) = 0x4355c9f;
                  UVar22 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
                  ((UnityEngine_Color_o *)&(pPVar9->fields).runtimeMat)->fields = UVar22;
                  pPVar13 = (__this_02->fields)._previewEffect;
                  pPVar19 = (PatreonEffects_NameEffectController_o *)0x0;
                  if (pPVar13 != (PatreonEffects_NameEffectController_o *)0x0) {
                    *(undefined8 *)((long)puVar17 + -0x40) = 0x4355cbc;
                    PatreonEffects_NameEffectController__Apply
                              (pPVar13,(PatreonEffects_NameEffectSettings_o *)pPVar9,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04355cdf:
  *(undefined8 *)((long)puVar17 + -0x40) = 0x4355ce4;
  uVar15 = il2cpp_runtime_helper_022b2c90();
  *(UI_SetNamePopup_o **)((long)puVar17 + -0x40) = __this_02;
  *(PatreonEffects_NameEffectController_o **)((long)puVar17 + -0x48) = pPVar9;
  *(undefined8 *)((long)puVar17 + -0x50) = uVar15;
  if (g_data_057ae15b == '\0') {
    *(undefined8 *)((long)puVar17 + -0x58) = 0x4355d0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)puVar17 + -0x58) = 0x4355d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    *(undefined8 *)((long)puVar17 + -0x58) = 0x4355d27;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    *(undefined8 *)((long)puVar17 + -0x58) = 0x4355d33;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15b = '\x01';
  }
  *(undefined8 *)((long)puVar17 + -0x58) = 0x4355d4e;
  bVar7 = System_String__op_Equality((System_String_o *)a,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_04355de2:
    pPVar4 = pPVar19->klass;
    uVar6._0_2_ = pPVar4[1]._2.interfaces_count;
    uVar6._2_2_ = pPVar4[1]._2.interface_offsets_count;
    uVar6._4_1_ = pPVar4[1]._2.typeHierarchyDepth;
    uVar6._5_1_ = pPVar4[1]._2.genericRecursionDepth;
    uVar6._6_1_ = pPVar4[1]._2.rank;
    uVar6._7_1_ = pPVar4[1]._2.minimumAlignment;
    (**(code **)&pPVar4[1]._2.field_count)(pPVar19,uVar6);
    return;
  }
  *(undefined8 *)((long)puVar17 + -0x58) = 0x4355d6a;
  __this_03 = a;
  bVar7 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  lVar3 = *(long *)&(pPVar19->fields).popExtrusionColor.fields.g;
  if (lVar3 != 0) {
    __this_03 = *(UI_TooltipPopup_o **)(lVar3 + 0x18);
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)puVar17 + -0x58) = 0x4355da5;
    bVar7 = System_String__op_Equality((System_String_o *)__this_03,pSVar8,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_03 = *(UI_TooltipPopup_o **)&(pPVar19->fields).popExtrusionColor.fields.g;
      if (__this_03 == (UI_TooltipPopup_o *)0x0) goto label_04355e07;
      value = *(Il2CppObject **)&(pPVar19->fields).popExtrusionColor.fields.a;
      *(undefined8 *)((long)puVar17 + -0x58) = 0x4355dcb;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_03,value,MethodInfo_Void_set_Value);
    }
    lVar3 = *(long *)&(pPVar19->fields).popShadowColor.fields.g;
    if (lVar3 != 0) {
      uVar15 = *(undefined8 *)(lVar3 + 0x28);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      vtableDispatch = *(code **)(lVar3 + 0x18);
      *(undefined8 *)((long)puVar17 + -0x58) = 0x4355de2;
      (*vtableDispatch)(uVar5,uVar15);
      goto label_04355de2;
    }
  }
label_04355e07:
  *(undefined8 *)((long)puVar17 + -0x58) = 0x4355e0c;
  il2cpp_runtime_helper_022b2c90();
  *(UI_SetNamePopup_o **)((long)puVar17 + -0x58) = pUVar18;
  *(PatreonEffects_NameEffectController_o **)((long)puVar17 + -0x60) = pPVar19;
  *(UI_TooltipPopup_o **)((long)puVar17 + -0x68) = a;
  if (g_data_057ae15c == '\0') {
    *(undefined8 *)((long)puVar17 + -0x70) = 0x4355e2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)((long)puVar17 + -0x70) = 0x4355e5b;
  pMVar16 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  *(undefined8 *)((long)puVar17 + -0x70) = 0x4355e70;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pMVar16,pSVar8,0x7fffffff,(MethodInfo *)0x0);
  (__this_03->fields).Caller = (UnityEngine_Component_o *)pMVar16;
  *(undefined8 *)((long)puVar17 + -0x70) = 0x4355e86;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).Caller);
  UI_BasePopup___ctor(__this_03,pMVar16);
  return;
}


// UI.SetNamePopup$$Show
// il2cpp: void UI_SetNamePopup__Show (UI_SetNamePopup_o* __this, System_String_o* initialValue, UnityEngine_Events_UnityAction_o* onSave, System_String_o* title, System_String_o* fieldLabel, const MethodInfo* method);
// 0x4355820

void UI_SetNamePopup__Show
               (UI_SetNamePopup_o *__this,System_String_o *initialValue,
               UnityEngine_Events_UnityAction_o *onSave,System_String_o *title,System_String_o *fieldLabel,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_InputSettingElement_o *pUVar2;
  UI_SetNamePopup_c *pUVar3;
  long lVar4;
  PatreonEffects_NameEffectController_c *pPVar5;
  code *vtableDispatch;
  Utility_Color255_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar6;
  Il2CppObject *value;
  undefined8 uVar7;
  undefined8 uVar8;
  bool_conflict bVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UI_SetNamePopup_o *x;
  PatreonEffects_NameEffectController_o *settings;
  undefined8 uVar12;
  MethodInfo *pMVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_InputSettingElement_o *unaff_RBX;
  System_String_o *pSVar14;
  UI_TooltipPopup_o *a;
  UI_SetNamePopup_o *raw;
  PatreonEffects_NameEffectController_o *__this_01;
  UI_TooltipPopup_o *__this_02;
  long *unaff_R12;
  UnityEngine_Events_UnityAction_o *unaff_R13;
  System_String_o *unaff_R14;
  UI_SetNamePopup_o *unaff_R15;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_Fields UVar16;
  undefined8 uStack_50;
  UI_SetNamePopup_o *pUStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  if (g_data_057ae158 == '\0') {
    pSStack_30 = (System_String_o *)0x435584d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae158 = '\x01';
  }
  pSVar14 = (System_String_o *)0x0;
  pSStack_30 = (System_String_o *)0x435585e;
  raw = __this;
  pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
label_04355929:
    pSStack_30 = (System_String_o *)0x435592e;
    uStack_50 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_50;
    pUStack_48 = __this;
    pSStack_40 = title;
    pSStack_38 = initialValue;
    pSStack_30 = fieldLabel;
    if (g_data_057ae159 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"Label");
      g_data_057ae159 = '\x01';
    }
    unaff_RBX = (raw->fields)._element;
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    __this = (UI_SetNamePopup_o *)(raw->fields)._element;
    if ((__this != (UI_SetNamePopup_o *)0x0) &&
       (pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
       pUVar11 != (UnityEngine_Transform_o *)0x0)) {
      x = (UI_SetNamePopup_o *)0x0;
      pUVar11 = UnityEngine_Transform__Find(pUVar11,"Label",(MethodInfo *)0x0);
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        x = (UI_SetNamePopup_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = x;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (pSVar14 == (System_String_o *)0x0) {
        pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      unaff_RBX = (UI_InputSettingElement_o *)0x0;
      if (x != (UI_SetNamePopup_o *)0x0) {
        pUVar3 = x->klass;
        vtableDispatch = *(code **)&pUVar3[1]._2.element_size;
        uVar12._0_4_ = pUVar3[1]._2.static_fields_size;
        uVar12._4_4_ = pUVar3[1]._2.thread_static_fields_size;
        (*vtableDispatch)(x,pSVar14,uVar12,vtableDispatch);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar13 = (MethodInfo *)0x0;
    pSStack_30 = (System_String_o *)0x4355871;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pSStack_30 = (System_String_o *)0x4355887;
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar13);
    (__this->fields)._initialValue = initialValue;
    pSStack_30 = (System_String_o *)0x435589d;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._initialValue,initialValue);
    (__this->fields)._onSave = onSave;
    pSStack_30 = (System_String_o *)0x43558b3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onSave,onSave);
    pSStack_30 = (System_String_o *)0x43558be;
    UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_00);
    pSStack_30 = (System_String_o *)0x43558c8;
    bVar9 = System_String__IsNullOrEmpty(fieldLabel,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      fieldLabel = (__this->fields)._defaultFieldLabel;
    }
    pSStack_30 = (System_String_o *)0x43558de;
    pSVar14 = fieldLabel;
    UI_SetNamePopup__SetFieldLabel(__this,fieldLabel,method_01);
    pSVar1 = (__this->fields).NameSetting;
    raw = (UI_SetNamePopup_o *)0x0;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_04355929;
    pSStack_30 = (System_String_o *)0x43558fc;
    pSVar14 = initialValue;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)initialValue,MethodInfo_Void_set_Value);
    pUVar2 = (__this->fields)._element;
    raw = (UI_SetNamePopup_o *)0x0;
    if (pUVar2 == (UI_InputSettingElement_o *)0x0) goto label_04355929;
    pSStack_30 = (System_String_o *)0x4355918;
    (*(pUVar2->klass->vtable)._6_SyncElement.methodPtr)();
    onSave = unaff_R13;
    pSVar14 = unaff_R14;
    raw = unaff_R15;
  }
  *(UI_SetNamePopup_o **)((long)register0x00000020 + -8) = raw;
  *(System_String_o **)((long)register0x00000020 + -0x10) = pSVar14;
  *(UnityEngine_Events_UnityAction_o **)((long)register0x00000020 + -0x18) = onSave;
  *(long **)((long)register0x00000020 + -0x20) = unaff_R12;
  *(UI_InputSettingElement_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
  if (g_data_057ae15a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355a95;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355aa1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355aad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355ab9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355ac5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae15a = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0x2c) = 0;
  settings = (__this->fields)._previewEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355af4;
    il2cpp_runtime_helper_02337ed0();
  }
  a = (UI_TooltipPopup_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355b00;
  __this_01 = settings;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)settings,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x88) != 0)) {
    raw = *(UI_SetNamePopup_o **)(*(long *)(lVar4 + 0x88) + 0x18);
    settings = (PatreonEffects_NameEffectController_o *)(__this->fields)._previewLabel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355b54;
      il2cpp_runtime_helper_02337ed0();
    }
    a = (UI_TooltipPopup_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355b60;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)settings,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pUVar10 = (__this->fields)._previewLabel;
      __this_01 = (PatreonEffects_NameEffectController_o *)0x0;
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_04355cdf;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355b83;
      settings = (PatreonEffects_NameEffectController_o *)
                 UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355b98;
        il2cpp_runtime_helper_02337ed0();
      }
      a = (UI_TooltipPopup_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355ba4;
      __this_01 = settings;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)settings,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        pSVar1 = (__this->fields).NameSetting;
        if ((pSVar1 == (Settings_StringSetting_o *)0x0) ||
           (settings == (PatreonEffects_NameEffectController_o *)0x0)) goto label_04355cdf;
        pSVar14 = (pSVar1->fields)._value;
        pPVar5 = settings->klass;
        uVar7._0_4_ = pPVar5[3]._2.instance_size;
        uVar7._4_4_ = pPVar5[3]._2.actualSize;
        vtableDispatch = pPVar5[3]._2.genericContainerHandle;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355bd8;
        (*vtableDispatch)(settings,pSVar14,uVar7);
      }
    }
    a = (UI_TooltipPopup_o *)((long)register0x00000020 + -0x2c);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355be7;
    bVar9 = PatreonEffects_NameEffectPresets__TryResolve
                      ((System_String_o *)raw,(int32_t *)a,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      pPVar6 = (__this->fields)._previewEffect;
      __this_01 = (PatreonEffects_NameEffectController_o *)0x0;
      if (pPVar6 != (PatreonEffects_NameEffectController_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355cd1;
        PatreonEffects_NameEffectController__Clear(pPVar6,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_01 = (PatreonEffects_NameEffectController_o *)(ulong)*(uint *)((long)register0x00000020 + -0x2c);
      a = (UI_TooltipPopup_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355bfa;
      settings = (PatreonEffects_NameEffectController_o *)
                 PatreonEffects_NameEffectPresets__GetPreset
                           (*(uint *)((long)register0x00000020 + -0x2c),(MethodInfo *)0x0);
      if ((*(long *)(lVar4 + 0x90) != 0) &&
         (__this_01 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar4 + 0x90) + 0x18),
         __this_01 != (PatreonEffects_NameEffectController_o *)0x0)) {
        a = (UI_TooltipPopup_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355c22;
        UVar15 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
        if (settings != (PatreonEffects_NameEffectController_o *)0x0) {
          *(UnityEngine_Color_Fields *)&settings->fields = UVar15.fields;
          if ((*(long *)(lVar4 + 0x98) != 0) &&
             (__this_01 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar4 + 0x98) + 0x18),
             __this_01 != (PatreonEffects_NameEffectController_o *)0x0)) {
            a = (UI_TooltipPopup_o *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355c57;
            UVar16 = (UnityEngine_Color_Fields)
                     Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
            ((UnityEngine_Color_o *)&(settings->fields).text)->fields = UVar16;
            if ((*(long *)(lVar4 + 0xa0) != 0) &&
               (__this_01 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar4 + 0xa0) + 0x18),
               __this_01 != (PatreonEffects_NameEffectController_o *)0x0)) {
              a = (UI_TooltipPopup_o *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355c7b;
              UVar16 = (UnityEngine_Color_Fields)
                       Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
              ((UnityEngine_Color_o *)&(settings->fields).originalFontMaterial)->fields = UVar16;
              if (*(long *)(lVar4 + 0xa8) != 0) {
                __this_00 = *(Utility_Color255_o **)(*(long *)(lVar4 + 0xa8) + 0x18);
                __this_01 = (PatreonEffects_NameEffectController_o *)0x0;
                if (__this_00 != (Utility_Color255_o *)0x0) {
                  a = (UI_TooltipPopup_o *)0x0;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355c9f;
                  UVar16 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
                  ((UnityEngine_Color_o *)&(settings->fields).runtimeMat)->fields = UVar16;
                  pPVar6 = (__this->fields)._previewEffect;
                  __this_01 = (PatreonEffects_NameEffectController_o *)0x0;
                  if (pPVar6 != (PatreonEffects_NameEffectController_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355cbc;
                    PatreonEffects_NameEffectController__Apply
                              (pPVar6,(PatreonEffects_NameEffectSettings_o *)settings,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04355cdf:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4355ce4;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  *(UI_SetNamePopup_o **)((long)register0x00000020 + -0x40) = __this;
  *(PatreonEffects_NameEffectController_o **)((long)register0x00000020 + -0x48) = settings;
  *(undefined8 *)((long)register0x00000020 + -0x50) = uVar12;
  if (g_data_057ae15b == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355d0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355d27;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355d33;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15b = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355d4e;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
label_04355de2:
    pPVar5 = __this_01->klass;
    uVar8._0_2_ = pPVar5[1]._2.interfaces_count;
    uVar8._2_2_ = pPVar5[1]._2.interface_offsets_count;
    uVar8._4_1_ = pPVar5[1]._2.typeHierarchyDepth;
    uVar8._5_1_ = pPVar5[1]._2.genericRecursionDepth;
    uVar8._6_1_ = pPVar5[1]._2.rank;
    uVar8._7_1_ = pPVar5[1]._2.minimumAlignment;
    (**(code **)&pPVar5[1]._2.field_count)(__this_01,uVar8);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355d6a;
  __this_02 = a;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Save",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  lVar4 = *(long *)&(__this_01->fields).popExtrusionColor.fields.g;
  if (lVar4 != 0) {
    __this_02 = *(UI_TooltipPopup_o **)(lVar4 + 0x18);
    pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355da5;
    bVar9 = System_String__op_Equality((System_String_o *)__this_02,pSVar14,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      __this_02 = *(UI_TooltipPopup_o **)&(__this_01->fields).popExtrusionColor.fields.g;
      if (__this_02 == (UI_TooltipPopup_o *)0x0) goto label_04355e07;
      value = *(Il2CppObject **)&(__this_01->fields).popExtrusionColor.fields.a;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355dcb;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_02,value,MethodInfo_Void_set_Value);
    }
    lVar4 = *(long *)&(__this_01->fields).popShadowColor.fields.g;
    if (lVar4 != 0) {
      uVar12 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      vtableDispatch = *(code **)(lVar4 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355de2;
      (*vtableDispatch)(uVar7,uVar12);
      goto label_04355de2;
    }
  }
label_04355e07:
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4355e0c;
  il2cpp_runtime_helper_022b2c90();
  *(UI_SetNamePopup_o **)((long)register0x00000020 + -0x58) = raw;
  *(PatreonEffects_NameEffectController_o **)((long)register0x00000020 + -0x60) = __this_01;
  *(UI_TooltipPopup_o **)((long)register0x00000020 + -0x68) = a;
  if (g_data_057ae15c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4355e2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4355e5b;
  pMVar13 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4355e70;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pMVar13,pSVar14,0x7fffffff,(MethodInfo *)0x0);
  (__this_02->fields).Caller = (UnityEngine_Component_o *)pMVar13;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x4355e86;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).Caller);
  UI_BasePopup___ctor(__this_02,pMVar13);
  return;
}


// UI.SetNamePopup$$SetFieldLabel
// il2cpp: void UI_SetNamePopup__SetFieldLabel (UI_SetNamePopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x4355930

void UI_SetNamePopup__SetFieldLabel(UI_SetNamePopup_o *__this,System_String_o *label,MethodInfo *method)

{
  UI_InputSettingElement_c *pUVar1;
  code *vtableDispatch;
  undefined8 uVar2;
  long lVar3;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_UI_InputField_o *pUVar6;
  Utility_Color255_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar7;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  UI_InputSettingElement_o *x;
  System_Func_string__bool__o *x_00;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  UI_InputSettingElement_o *x_01;
  UI_TooltipPopup_o *__this_01;
  UI_InputSettingElement_o *__this_02;
  System_Func_string__bool__o *__this_03;
  UnityEngine_Color_Fields UVar10;
  uint local_54;
  UI_InputSettingElement_o *pUStack_50;
  long *plStack_48;
  
  if (g_data_057ae159 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae159 = '\x01';
  }
  x_01 = (__this->fields)._element;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  __this_02 = (__this->fields)._element;
  if ((__this_02 != (UI_InputSettingElement_o *)0x0) &&
     (pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    x = (UI_InputSettingElement_o *)0x0;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"Label",(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      x = (UI_InputSettingElement_o *)
          UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_Text_GetComponent_Text);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = x;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (label == (System_String_o *)0x0) {
      label = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    x_01 = (UI_InputSettingElement_o *)0x0;
    if (x != (UI_InputSettingElement_o *)0x0) {
      pUVar1 = x->klass;
      vtableDispatch = pUVar1[3]._2.genericContainerHandle;
      uVar2._0_4_ = pUVar1[3]._2.instance_size;
      uVar2._4_4_ = pUVar1[3]._2.actualSize;
      (*vtableDispatch)(x,label,uVar2,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_48 = &TypeInfo_Object;
  pUStack_50 = x_01;
  if (g_data_057ae15a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae15a = '\x01';
  }
  local_54 = 0;
  __this_03 = __this_02[1].fields._onValidate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UI_TooltipPopup_o *)0x0;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x88) != 0)) {
    pSVar4 = *(System_String_o **)(*(long *)(lVar3 + 0x88) + 0x18);
    pUVar5 = __this_02[1].fields._onEndEdit;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (UI_TooltipPopup_o *)0x0;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar5 = __this_02[1].fields._onEndEdit;
      __this_03 = (System_Func_string__bool__o *)0x0;
      if (pUVar5 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_04355cdf;
      x_00 = (System_Func_string__bool__o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar5,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (UI_TooltipPopup_o *)0x0;
      __this_03 = x_00;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pUVar6 = __this_02[1].fields._inputField;
        if ((pUVar6 == (UnityEngine_UI_InputField_o *)0x0) || (x_00 == (System_Func_string__bool__o *)0x0))
        goto label_04355cdf;
        (*x_00->klass[2].vtable._1_Finalize.methodPtr)
                  (x_00,(pUVar6->fields).m_CancellationTokenSource,x_00->klass[2].vtable._1_Finalize.method);
      }
    }
    __this_01 = (UI_TooltipPopup_o *)&stack0xffffffffffffffac;
    bVar8 = PatreonEffects_NameEffectPresets__TryResolve(pSVar4,(int32_t *)__this_01,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pPVar7 = (PatreonEffects_NameEffectController_o *)__this_02[1].fields._onValidate;
      __this_03 = (System_Func_string__bool__o *)0x0;
      if (pPVar7 != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Clear(pPVar7,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_03 = (System_Func_string__bool__o *)(ulong)local_54;
      __this_01 = (UI_TooltipPopup_o *)0x0;
      settings = PatreonEffects_NameEffectPresets__GetPreset(local_54,(MethodInfo *)0x0);
      if ((*(long *)(lVar3 + 0x90) != 0) &&
         (__this_03 = *(System_Func_string__bool__o **)(*(long *)(lVar3 + 0x90) + 0x18),
         __this_03 != (System_Func_string__bool__o *)0x0)) {
        __this_01 = (UI_TooltipPopup_o *)0x0;
        UVar10 = (UnityEngine_Color_Fields)
                 Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
        if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
          (settings->fields).gradientA.fields = UVar10;
          if ((*(long *)(lVar3 + 0x98) != 0) &&
             (__this_03 = *(System_Func_string__bool__o **)(*(long *)(lVar3 + 0x98) + 0x18),
             __this_03 != (System_Func_string__bool__o *)0x0)) {
            __this_01 = (UI_TooltipPopup_o *)0x0;
            UVar10 = (UnityEngine_Color_Fields)
                     Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
            (settings->fields).gradientB.fields = UVar10;
            if ((*(long *)(lVar3 + 0xa0) != 0) &&
               (__this_03 = *(System_Func_string__bool__o **)(*(long *)(lVar3 + 0xa0) + 0x18),
               __this_03 != (System_Func_string__bool__o *)0x0)) {
              __this_01 = (UI_TooltipPopup_o *)0x0;
              UVar10 = (UnityEngine_Color_Fields)
                       Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
              (settings->fields).gradientC.fields = UVar10;
              if (*(long *)(lVar3 + 0xa8) != 0) {
                __this_00 = *(Utility_Color255_o **)(*(long *)(lVar3 + 0xa8) + 0x18);
                __this_03 = (System_Func_string__bool__o *)0x0;
                if (__this_00 != (Utility_Color255_o *)0x0) {
                  __this_01 = (UI_TooltipPopup_o *)0x0;
                  UVar10 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
                  (settings->fields).gradientD.fields = UVar10;
                  pPVar7 = (PatreonEffects_NameEffectController_o *)__this_02[1].fields._onValidate;
                  __this_03 = (System_Func_string__bool__o *)0x0;
                  if (pPVar7 != (PatreonEffects_NameEffectController_o *)0x0) {
                    PatreonEffects_NameEffectController__Apply(pPVar7,settings,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04355cdf:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae15b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15b = '\x01';
  }
  bVar8 = System_String__op_Equality((System_String_o *)__this_01,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
label_04355de2:
    (*__this_03->klass[1]._1.properties)(__this_03,__this_03->klass[1]._1.methods);
    return;
  }
  bVar8 = System_String__op_Equality((System_String_o *)__this_01,"Save",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  lVar3 = __this_03[1].fields.extra_arg;
  if (lVar3 != 0) {
    __this_01 = *(UI_TooltipPopup_o **)(lVar3 + 0x18);
    bVar8 = System_String__op_Equality
                      ((System_String_o *)__this_01,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      __this_01 = (UI_TooltipPopup_o *)__this_03[1].fields.extra_arg;
      if (__this_01 == (UI_TooltipPopup_o *)0x0) goto label_04355e07;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)__this_03[1].fields.method_code,
                 MethodInfo_Void_set_Value);
    }
    lVar3 = __this_03[1].fields.method;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      goto label_04355de2;
    }
  }
label_04355e07:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae15c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,pSVar4,0x7fffffff,(MethodInfo *)0x0);
  (__this_01->fields).Caller = (UnityEngine_Component_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Caller);
  UI_BasePopup___ctor(__this_01,method_00);
  return;
}


// UI.SetNamePopup$$RefreshPreview
// il2cpp: void UI_SetNamePopup__RefreshPreview (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x4355a70

void UI_SetNamePopup__RefreshPreview(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  Settings_StringSetting_o *pSVar3;
  PatreonEffects_NameEffectController_c *pPVar4;
  undefined8 uVar5;
  Utility_Color255_o *__this_01;
  undefined8 uVar6;
  bool_conflict bVar7;
  PatreonEffects_NameEffectController_o *pPVar8;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  UI_TooltipPopup_o *__this_02;
  PatreonEffects_NameEffectController_o *__this_03;
  UnityEngine_Color_Fields UVar9;
  uint uStack_2c;
  
  if (g_data_057ae15a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae15a = '\x01';
  }
  uStack_2c = 0;
  __this_03 = (__this->fields)._previewEffect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_TooltipPopup_o *)0x0;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x88) != 0)) {
    pSVar2 = *(System_String_o **)(*(long *)(lVar1 + 0x88) + 0x18);
    x = (UnityEngine_Object_o *)(__this->fields)._previewLabel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (UI_TooltipPopup_o *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_00 = (__this->fields)._previewLabel;
      __this_03 = (PatreonEffects_NameEffectController_o *)0x0;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04355cdf;
      pPVar8 = (PatreonEffects_NameEffectController_o *)
               UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = (UI_TooltipPopup_o *)0x0;
      __this_03 = pPVar8;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pPVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pSVar3 = (__this->fields).NameSetting;
        if ((pSVar3 == (Settings_StringSetting_o *)0x0) ||
           (pPVar8 == (PatreonEffects_NameEffectController_o *)0x0)) goto label_04355cdf;
        pPVar4 = pPVar8->klass;
        uVar5._0_4_ = pPVar4[3]._2.instance_size;
        uVar5._4_4_ = pPVar4[3]._2.actualSize;
        (*pPVar4[3]._2.genericContainerHandle)(pPVar8,(pSVar3->fields)._value,uVar5);
      }
    }
    __this_02 = (UI_TooltipPopup_o *)&stack0xffffffffffffffd4;
    bVar7 = PatreonEffects_NameEffectPresets__TryResolve(pSVar2,(int32_t *)__this_02,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pPVar8 = (__this->fields)._previewEffect;
      __this_03 = (PatreonEffects_NameEffectController_o *)0x0;
      if (pPVar8 != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Clear(pPVar8,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_03 = (PatreonEffects_NameEffectController_o *)(ulong)uStack_2c;
      __this_02 = (UI_TooltipPopup_o *)0x0;
      settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_2c,(MethodInfo *)0x0);
      if ((*(long *)(lVar1 + 0x90) != 0) &&
         (__this_03 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar1 + 0x90) + 0x18),
         __this_03 != (PatreonEffects_NameEffectController_o *)0x0)) {
        __this_02 = (UI_TooltipPopup_o *)0x0;
        UVar9 = (UnityEngine_Color_Fields)
                Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
        if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
          (settings->fields).gradientA.fields = UVar9;
          if ((*(long *)(lVar1 + 0x98) != 0) &&
             (__this_03 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar1 + 0x98) + 0x18),
             __this_03 != (PatreonEffects_NameEffectController_o *)0x0)) {
            __this_02 = (UI_TooltipPopup_o *)0x0;
            UVar9 = (UnityEngine_Color_Fields)
                    Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
            (settings->fields).gradientB.fields = UVar9;
            if ((*(long *)(lVar1 + 0xa0) != 0) &&
               (__this_03 = *(PatreonEffects_NameEffectController_o **)(*(long *)(lVar1 + 0xa0) + 0x18),
               __this_03 != (PatreonEffects_NameEffectController_o *)0x0)) {
              __this_02 = (UI_TooltipPopup_o *)0x0;
              UVar9 = (UnityEngine_Color_Fields)
                      Utility_Color255__ToColor((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
              (settings->fields).gradientC.fields = UVar9;
              if (*(long *)(lVar1 + 0xa8) != 0) {
                __this_01 = *(Utility_Color255_o **)(*(long *)(lVar1 + 0xa8) + 0x18);
                __this_03 = (PatreonEffects_NameEffectController_o *)0x0;
                if (__this_01 != (Utility_Color255_o *)0x0) {
                  __this_02 = (UI_TooltipPopup_o *)0x0;
                  UVar9 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
                  (settings->fields).gradientD.fields = UVar9;
                  pPVar8 = (__this->fields)._previewEffect;
                  __this_03 = (PatreonEffects_NameEffectController_o *)0x0;
                  if (pPVar8 != (PatreonEffects_NameEffectController_o *)0x0) {
                    PatreonEffects_NameEffectController__Apply(pPVar8,settings,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04355cdf:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae15b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15b = '\x01';
  }
  bVar7 = System_String__op_Equality((System_String_o *)__this_02,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_04355de2:
    pPVar4 = __this_03->klass;
    uVar6._0_2_ = pPVar4[1]._2.interfaces_count;
    uVar6._2_2_ = pPVar4[1]._2.interface_offsets_count;
    uVar6._4_1_ = pPVar4[1]._2.typeHierarchyDepth;
    uVar6._5_1_ = pPVar4[1]._2.genericRecursionDepth;
    uVar6._6_1_ = pPVar4[1]._2.rank;
    uVar6._7_1_ = pPVar4[1]._2.minimumAlignment;
    (**(code **)&pPVar4[1]._2.field_count)(__this_03,uVar6);
    return;
  }
  bVar7 = System_String__op_Equality((System_String_o *)__this_02,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this_03->fields).popExtrusionColor.fields.g;
  if (lVar1 != 0) {
    __this_02 = *(UI_TooltipPopup_o **)(lVar1 + 0x18);
    bVar7 = System_String__op_Equality
                      ((System_String_o *)__this_02,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_02 = *(UI_TooltipPopup_o **)&(__this_03->fields).popExtrusionColor.fields.g;
      if (__this_02 == (UI_TooltipPopup_o *)0x0) goto label_04355e07;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_02,
                 *(Il2CppObject **)&(__this_03->fields).popExtrusionColor.fields.a,MethodInfo_Void_set_Value);
    }
    lVar1 = *(long *)&(__this_03->fields).popShadowColor.fields.g;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      goto label_04355de2;
    }
  }
label_04355e07:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae15c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,pSVar2,0x7fffffff,(MethodInfo *)0x0);
  (__this_02->fields).Caller = (UnityEngine_Component_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).Caller);
  UI_BasePopup___ctor(__this_02,method_00);
  return;
}


// UI.SetNamePopup$$OnButtonClick
// il2cpp: void UI_SetNamePopup__OnButtonClick (UI_SetNamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4355cf0

void UI_SetNamePopup__OnButtonClick(UI_SetNamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_String_o *defaultValue;
  bool_conflict bVar3;
  MethodInfo *method_00;
  
  if (g_data_057ae15b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15b = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_04355de2:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar3 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pSVar1 = (__this->fields).NameSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    name = (pSVar1->fields)._value;
    bVar3 = System_String__op_Equality
                      (name,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      name = (System_String_o *)(__this->fields).NameSetting;
      if ((UI_TooltipPopup_o *)name == (UI_TooltipPopup_o *)0x0) goto label_04355e07;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)name,(Il2CppObject *)(__this->fields)._initialValue,
                 MethodInfo_Void_set_Value);
    }
    pUVar2 = (__this->fields)._onSave;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      goto label_04355de2;
    }
  }
label_04355e07:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae15c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)name)->fields).Caller = (UnityEngine_Component_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields).Caller);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)name,method_00);
  return;
}


// UI.SetNamePopup$$.ctor
// il2cpp: void UI_SetNamePopup___ctor (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x4355e10

void UI_SetNamePopup___ctor(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  MethodInfo *method_00;
  
  if (g_data_057ae15c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).NameSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).NameSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.SetNamePopup$$<Setup>b__15_0
// il2cpp: void UI_SetNamePopup___Setup_b__15_0 (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x4355ea0

void UI_SetNamePopup___Setup_b__15_0(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_String_o *defaultValue;
  bool_conflict bVar3;
  MethodInfo *method_00;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae15d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15d = '\x01';
  }
  __this_00 = "Save";
  if (g_data_057ae15b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15b = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)__this_00,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_04355de2:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar3 = System_String__op_Equality
                    ((System_String_o *)__this_00,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pSVar1 = (__this->fields).NameSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    __this_00 = (UI_TooltipPopup_o *)(pSVar1->fields)._value;
    bVar3 = System_String__op_Equality
                      ((System_String_o *)__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_00 = (UI_TooltipPopup_o *)(__this->fields).NameSetting;
      if (__this_00 == (UI_TooltipPopup_o *)0x0) goto label_04355e07;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(__this->fields)._initialValue,
                 MethodInfo_Void_set_Value);
    }
    pUVar2 = (__this->fields)._onSave;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      goto label_04355de2;
    }
  }
label_04355e07:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae15c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).Caller = (UnityEngine_Component_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Caller);
  UI_BasePopup___ctor(__this_00,method_00);
  return;
}


// UI.SetNamePopup$$<Setup>b__15_1
// il2cpp: void UI_SetNamePopup___Setup_b__15_1 (UI_SetNamePopup_o* __this, const MethodInfo* method);
// 0x4355ee0

void UI_SetNamePopup___Setup_b__15_1(UI_SetNamePopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_String_o *defaultValue;
  bool_conflict bVar3;
  MethodInfo *method_00;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae15e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae15e = '\x01';
  }
  __this_00 = "Cancel";
  if (g_data_057ae15b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae15b = '\x01';
  }
  bVar3 = System_String__op_Equality
                    ((System_String_o *)__this_00,(System_String_o *)"Cancel",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_04355de2:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar3 = System_String__op_Equality((System_String_o *)__this_00,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pSVar1 = (__this->fields).NameSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    __this_00 = (UI_TooltipPopup_o *)(pSVar1->fields)._value;
    bVar3 = System_String__op_Equality
                      ((System_String_o *)__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_00 = (UI_TooltipPopup_o *)(__this->fields).NameSetting;
      if (__this_00 == (UI_TooltipPopup_o *)0x0) goto label_04355e07;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(__this->fields)._initialValue,
                 MethodInfo_Void_set_Value);
    }
    pUVar2 = (__this->fields)._onSave;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      goto label_04355de2;
    }
  }
label_04355e07:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae15c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae15c = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).Caller = (UnityEngine_Component_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Caller);
  UI_BasePopup___ctor(__this_00,method_00);
  return;
}


