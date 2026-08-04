// Type: UI.ButtonPopupSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ButtonPopupSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ButtonPopupSettingElement.cs
// --------------------------------

// UI.ButtonPopupSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ButtonPopupSettingElement__get_SupportedSettingTypes (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x438ed50

System_Collections_Generic_HashSet_SettingType__o *
UI_ButtonPopupSettingElement__get_SupportedSettingTypes
          (UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Runtime_Serialization_SerializationInfo_c *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar3;
  Il2CppClass *pIVar4;
  System_Runtime_Serialization_IFormatterConverter_o *pSVar5;
  System_Runtime_Serialization_IFormatterConverter_c *pSVar6;
  MethodInfo *vtableDispatch;
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  System_Collections_Generic_HashSet_SettingType__o *pSVar7;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  undefined8 extraout_RDX;
  System_Runtime_Serialization_SerializationInfo_o *pSVar8;
  System_Type_array *__this_01;
  
  if (cRam00000000057ae297 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    cRam00000000057ae297 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  pSVar7 = __this_00;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar8 = ((System_Collections_Generic_HashSet_T__Fields *)&pSVar7->fields)->_siInfo;
  if (pSVar8 != (System_Runtime_Serialization_SerializationInfo_o *)0x0) {
    pSVar2 = pSVar8->klass;
    UNRECOVERED_JUMPTABLE_00 = *(code **)&pSVar2[1]._2.thread_static_fields_offset;
    uVar3._0_4_ = pSVar2[1]._2.token;
    uVar3._4_2_ = pSVar2[1]._2.method_count;
    uVar3._6_2_ = pSVar2[1]._2.property_count;
    pSVar7 = (System_Collections_Generic_HashSet_SettingType__o *)
             (*UNRECOVERED_JUMPTABLE_00)(pSVar8,uVar3,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae299 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae299 = '\x01';
  }
  __this_01 = (pSVar8->fields).m_types;
  if (__this_01 != (System_Type_array *)0x0) {
    pIVar4 = (__this_01->obj).klass;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((pIVar4->_2).naturalAligment < bVar1) ||
       ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      pSVar5 = (pSVar8->fields).m_converter;
      if (pSVar5 != (System_Runtime_Serialization_IFormatterConverter_o *)0x0) {
        pSVar6 = pSVar5->klass;
        vtableDispatch = pSVar6[1].vtable[0x17].method;
        pSVar7 = (System_Collections_Generic_HashSet_SettingType__o *)
                 (*(code *)vtableDispatch)
                           (pSVar5,__this_01->max_length,pSVar6[1].vtable[0x18].methodPtr,pSVar6,
                            vtableDispatch);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.ButtonPopupSettingElement$$Setup
// il2cpp: void UI_ButtonPopupSettingElement__Setup (UI_ButtonPopupSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_BasePopup_o* popup, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x438c880

void UI_ButtonPopupSettingElement__Setup
               (UI_ButtonPopupSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,UI_BasePopup_o *popup,System_String_o *tooltip,
               float elementWidth,float elementHeight,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  UnityEngine_Vector3_array *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_array *pUVar4;
  UnityEngine_Vector3_array *pUVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_Vector3_array *pUVar9;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_PlayerKDRRow_o *__this_00;
  UI_KDRPanel_o *panel;
  UI_TeamKDRRow_o *__this_01;
  UnityEngine_Vector3_array *__this_02;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_03;
  UnityEngine_Vector3_array *__this_04;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Text_o *pUVar13;
  UnityEngine_UI_Selectable_o *__this_05;
  UI_CollapsibleToggleSection_o *__this_06;
  UnityEngine_UI_Button_o *arrowButton;
  System_Type_array *components;
  System_Type_o *pSVar14;
  long lVar15;
  UnityEngine_Font_o *value_02;
  undefined8 uVar16;
  UnityEngine_Transform_o *pUVar17;
  UI_CustomPopup_o *__this_07;
  UI_BasePanel_o *parent;
  uint value_03;
  uint uVar18;
  System_String_o *pSVar19;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *player;
  MethodInfo *extraout_RDX_01;
  MethodInfo *team;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *title_00;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 extraout_RDX_06;
  System_String_o *title_01;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *pMVar20;
  MethodInfo_24E7B40 **panel_00;
  UnityEngine_Vector3_array **call;
  uint uVar21;
  MethodInfo_24E7B40 *style_00;
  MethodInfo_24E7B40 *style_01;
  MethodInfo_255A020 *pMVar22;
  UnityEngine_Vector3_array *pUVar23;
  UnityEngine_GameObject_o *pUVar24;
  uint uVar25;
  UI_BasePopup_o *pUVar26;
  System_String_o *pSVar27;
  System_Action_bool__o *pSVar28;
  System_Action_bool__o *pSVar29;
  UnityEngine_Vector3_array *unaff_R14;
  float extraout_XMM0_Da;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  UnityEngine_Color_o UVar33;
  UnityEngine_UI_Toggle_o *pUStack_308;
  undefined1 auStack_290 [20];
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [16];
  UnityEngine_Vector3_array *pUStack_230;
  UnityEngine_Vector3_array *pUStack_228;
  UnityEngine_Vector3_array *pUStack_220;
  UnityEngine_Vector3_array *pUStack_218;
  UnityEngine_Vector3_array *pUStack_210;
  float fStack_208;
  float fStack_204;
  UnityEngine_Vector3_array *pUStack_200;
  MethodInfo *pMStack_1f8;
  MethodInfo_24E7B40 *pMStack_1f0;
  UnityEngine_Vector3_array *pUStack_1e8;
  UnityEngine_Vector3_array *pUStack_1e0;
  MethodInfo *pMStack_1d8;
  MethodInfo_24E7B40 *pMStack_1d0;
  UnityEngine_Vector3_array *pUStack_1c8;
  UI_ButtonPopupSettingElement_o *pUStack_1c0;
  UnityEngine_Vector3_array *pUStack_1b8;
  UnityEngine_Vector3_array *pUStack_1b0;
  UnityEngine_Vector3_array *pUStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  UnityEngine_Vector3_o UStack_190;
  Il2CppClass *pIStack_180;
  UnityEngine_Vector3_array *pUStack_178;
  UnityEngine_Vector3_array *pUStack_170;
  undefined1 local_88 [20];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [24];
  undefined1 auStack_50 [32];
  
  pSVar19 = title;
  pUVar26 = popup;
  pSVar28 = (System_Action_bool__o *)tooltip;
  fVar31 = elementHeight;
  if (g_data_057ae298 == '\0') {
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c8ca;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__4_0);
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c8d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c8e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c8ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c8fa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c906;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c912;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c91e;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c92a;
    il2cpp_runtime_helper_023445d0(&"Text");
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c936;
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c942;
    il2cpp_runtime_helper_023445d0(&"Button");
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c94e;
    il2cpp_runtime_helper_023445d0(&"Button/Text");
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c95a;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae298 = '\x01';
  }
  uVar25 = (uint)pUVar26;
  uVar18 = (uint)pSVar19;
  pUVar8 = (UnityEngine_Vector3_array *)0x0;
  pUStack_170 = (UnityEngine_Vector3_array *)0x438c96b;
  panel_00 = (MethodInfo_24E7B40 **)__this;
  pUVar2 = (UnityEngine_Vector3_array *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  call = (UnityEngine_Vector3_array **)setting;
  pUVar23 = (UnityEngine_Vector3_array *)title;
  pUVar5 = (UnityEngine_Vector3_array *)tooltip;
  if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
    uVar18 = 0x55c2d28;
    pUStack_170 = (UnityEngine_Vector3_array *)0x438c988;
    pUVar8 = "Button";
    pUVar3 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar2,(System_String_o *)"Button",(MethodInfo *)0x0);
    panel_00 = (MethodInfo_24E7B40 **)pUVar2;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUStack_170 = (UnityEngine_Vector3_array *)0x438c99b;
      unaff_R14 = (UnityEngine_Vector3_array *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Vector3_array *)0x0;
      pUStack_170 = (UnityEngine_Vector3_array *)0x438c9a8;
      panel_00 = (MethodInfo_24E7B40 **)__this;
      pUVar2 = (UnityEngine_Vector3_array *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
        uVar18 = 0x55c2d48;
        pUStack_170 = (UnityEngine_Vector3_array *)0x438c9d4;
        pUVar8 = "Button/Text";
        pUVar4 = (UnityEngine_Vector3_array *)
                 UnityEngine_Transform__Find
                           ((UnityEngine_Transform_o *)pUVar2,(System_String_o *)"Button/Text",
                            (MethodInfo *)0x0);
        panel_00 = (MethodInfo_24E7B40 **)pUVar2;
        if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
          pUVar8 = (UnityEngine_Vector3_array *)0x0;
          pUStack_170 = (UnityEngine_Vector3_array *)0x438c9e7;
          pUVar5 = (UnityEngine_Vector3_array *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          fVar31 = 0.0;
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
          pUVar23 = (UnityEngine_Vector3_array *)style;
          if (elementWidth <= 0.0) {
label_0438ca75:
            in_XMM1_Dd = 0.0;
            in_XMM1_Dc = 0.0;
            in_XMM1_Db = 0.0;
            fVar31 = 0.0;
            if (elementHeight <= 0.0) {
label_0438caf5:
              panel_00 = (MethodInfo_24E7B40 **)&(__this->fields)._popup;
              (__this->fields)._popup = popup;
              pUStack_170 = (UnityEngine_Vector3_array *)0x438cb07;
              pUVar8 = (UnityEngine_Vector3_array *)popup;
              il2cpp_runtime_helper_022b4080();
              if (unaff_R14 != (UnityEngine_Vector3_array *)0x0) {
                pUStack_170 = (UnityEngine_Vector3_array *)0x438cb22;
                pUVar8 = MethodInfo_Button_GetComponent_Button;
                panel_00 = (MethodInfo_24E7B40 **)unaff_R14;
                pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)unaff_R14,(MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
                pUVar5 = (UnityEngine_Vector3_array *)&MethodInfo_Button_GetComponent_Button;
                if (pIVar6 != (Il2CppObject *)0x0) {
                  popup = (UI_BasePopup_o *)pIVar6[0x10].klass;
                  pUStack_170 = (UnityEngine_Vector3_array *)0x438cb41;
                  call = (UnityEngine_Vector3_array **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  uVar18 = 0;
                  pUStack_170 = (UnityEngine_Vector3_array *)0x438cb5b;
                  pUVar8 = (UnityEngine_Vector3_array *)__this;
                  panel_00 = (MethodInfo_24E7B40 **)call;
                  UnityEngine_Events_UnityAction___ctor();
                  if ((Il2CppClass *)popup != (Il2CppClass *)0x0) {
                    pUStack_170 = (UnityEngine_Vector3_array *)0x438cb71;
                    UnityEngine_Events_UnityEvent__AddListener
                              ((UnityEngine_Events_UnityEvent_o *)popup,
                               (UnityEngine_Events_UnityAction_o *)call,(MethodInfo *)0x0);
                    pUStack_170 = (UnityEngine_Vector3_array *)0x438cb7c;
                    pUVar8 = MethodInfo_Button_GetComponent_Button;
                    panel_00 = (MethodInfo_24E7B40 **)unaff_R14;
                    pIVar7 = (Il2CppClass *)
                             UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)unaff_R14,
                                        (MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
                    if (style != (UI_ElementStyle_o *)0x0) {
                      call = (UnityEngine_Vector3_array **)(style->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        pUStack_170 = (UnityEngine_Vector3_array *)0x438cba4;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      panel_00 = (MethodInfo_24E7B40 **)local_88;
                      pSVar28 = (System_Action_bool__o *)0x0;
                      pUStack_170 = (UnityEngine_Vector3_array *)0x438cbd5;
                      pSVar19 = "";
                      pUVar8 = (UnityEngine_Vector3_array *)call;
                      pSVar27 = "DefaultPanel";
                      UI_UIManager__GetThemeColorBlock
                                ((UnityEngine_UI_ColorBlock_o *)panel_00,(System_String_o *)call,
                                 (System_String_o *)"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
                      uVar25 = (uint)pSVar27;
                      uVar18 = (uint)pSVar19;
                      popup = (UI_BasePopup_o *)pIVar7;
                      pUVar5 = (UnityEngine_Vector3_array *)&"DefaultPanel";
                      fVar31 = (float)local_88._16_4_;
                      in_XMM1_Db = fStack_74;
                      in_XMM1_Dc = fStack_70;
                      in_XMM1_Dd = fStack_6c;
                      if (pIVar7 != (Il2CppClass *)0x0) {
                        pUStack_170 = (UnityEngine_Vector3_array *)0x438cc95;
                        value_01.fields.m_NormalColor.fields.b = (float)local_88._8_4_;
                        value_01.fields.m_NormalColor.fields.a = (float)local_88._12_4_;
                        value_01.fields.m_NormalColor.fields.r = (float)local_88._0_4_;
                        value_01.fields.m_NormalColor.fields.g = (float)local_88._4_4_;
                        value_01.fields.m_HighlightedColor.fields.r = (float)local_88._16_4_;
                        value_01.fields.m_HighlightedColor.fields.g = fStack_74;
                        value_01.fields.m_HighlightedColor.fields.b = fStack_70;
                        value_01.fields.m_HighlightedColor.fields.a = fStack_6c;
                        value_01.fields.m_PressedColor.fields.r = (float)local_68._0_4_;
                        value_01.fields.m_PressedColor.fields.g = (float)local_68._4_4_;
                        value_01.fields.m_PressedColor.fields.b = (float)local_68._8_4_;
                        value_01.fields.m_PressedColor.fields.a = (float)local_68._12_4_;
                        value_01.fields.m_SelectedColor.fields.r = (float)local_68._16_4_;
                        value_01.fields.m_SelectedColor.fields.g = (float)local_68._20_4_;
                        value_01.fields.m_SelectedColor.fields.b = (float)auStack_50._0_4_;
                        value_01.fields.m_SelectedColor.fields.a = (float)auStack_50._4_4_;
                        value_01.fields.m_DisabledColor.fields.r = (float)auStack_50._8_4_;
                        value_01.fields.m_DisabledColor.fields.g = (float)auStack_50._12_4_;
                        value_01.fields.m_DisabledColor.fields.b = (float)auStack_50._16_4_;
                        value_01.fields.m_DisabledColor.fields.a = (float)auStack_50._20_4_;
                        value_01.fields.m_ColorMultiplier = (float)auStack_50._24_4_;
                        value_01.fields.m_FadeDuration = (float)auStack_50._28_4_;
                        UnityEngine_UI_Selectable__set_colors
                                  ((UnityEngine_UI_Selectable_o *)pIVar7,value_01,(MethodInfo *)0x0);
                        pUVar8 = (UnityEngine_Vector3_array *)0x0;
                        pUStack_170 = (UnityEngine_Vector3_array *)0x438cc9f;
                        panel_00 = (MethodInfo_24E7B40 **)unaff_R14;
                        pUVar2 = (UnityEngine_Vector3_array *)
                                 UnityEngine_GameObject__get_transform
                                           ((UnityEngine_GameObject_o *)unaff_R14,(MethodInfo *)0x0);
                        fVar31 = (float)local_88._16_4_;
                        in_XMM1_Db = fStack_74;
                        in_XMM1_Dc = fStack_70;
                        in_XMM1_Dd = fStack_6c;
                        if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
                          uVar18 = 0x55d44b0;
                          pUStack_170 = (UnityEngine_Vector3_array *)0x438ccbc;
                          pUVar8 = "Text";
                          pUVar3 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)pUVar2,
                                              (System_String_o *)"Text",(MethodInfo *)0x0);
                          panel_00 = (MethodInfo_24E7B40 **)pUVar2;
                          fVar31 = (float)local_88._16_4_;
                          in_XMM1_Db = fStack_74;
                          in_XMM1_Dc = fStack_70;
                          in_XMM1_Dd = fStack_6c;
                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                            uVar18 = 0x559c9d0;
                            pUStack_170 = (UnityEngine_Vector3_array *)0x438ccd7;
                            pUVar8 = (UnityEngine_Vector3_array *)
                                     UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
                            popup = (UI_BasePopup_o *)&(__this->fields)._label;
                            (__this->fields)._label = (UnityEngine_UI_Text_o *)pUVar8;
                            pUStack_170 = (UnityEngine_Vector3_array *)0x438ccec;
                            il2cpp_runtime_helper_022b4080(popup);
                            pUVar13 = (__this->fields)._label;
                            panel_00 = (MethodInfo_24E7B40 **)0x0;
                            fVar31 = (float)local_88._16_4_;
                            in_XMM1_Db = fStack_74;
                            in_XMM1_Dc = fStack_70;
                            in_XMM1_Dd = fStack_6c;
                            if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                              pUStack_170 = (UnityEngine_Vector3_array *)0x438cd01;
                              UnityEngine_UI_Text__set_fontSize
                                        (pUVar13,(style->fields).FontSize,(MethodInfo *)0x0);
                              pUVar13 = *(UnityEngine_UI_Text_o **)popup;
                              panel_00 = (MethodInfo_24E7B40 **)(style->fields).ThemePanel;
                              uVar25 = 0;
                              pUStack_170 = (UnityEngine_Vector3_array *)0x438cd27;
                              pSVar19 = "DefaultPanel";
                              pUVar8 = "DefaultButton";
                              UVar33 = UI_UIManager__GetThemeColor
                                                 ((System_String_o *)panel_00,(System_String_o *)"DefaultButton",
                                                  "TextColor","DefaultPanel",(MethodInfo *)0x0);
                              uVar18 = (uint)pSVar19;
                              fVar31 = UVar33.fields.b;
                              in_XMM1_Db = UVar33.fields.a;
                              popup = (UI_BasePopup_o *)0x0;
                              in_XMM1_Dc = fStack_70;
                              in_XMM1_Dd = fStack_6c;
                              if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                                pUStack_170 = (UnityEngine_Vector3_array *)0x438cd3f;
                                (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                                          (UVar33.fields.r,pUVar13,
                                           (pUVar13->klass->vtable)._23_set_color.method);
                                pUStack_170 = (UnityEngine_Vector3_array *)0x438cd59;
                                UI_BaseSettingElement__Setup
                                          ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                           (MethodInfo *)pSVar28);
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
            }
            else {
              panel_00 = (MethodInfo_24E7B40 **)pUVar4;
              if (unaff_R14 != (UnityEngine_Vector3_array *)0x0) {
                call = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
                pUStack_170 = (UnityEngine_Vector3_array *)0x438ca9c;
                pUVar8 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                panel_00 = (MethodInfo_24E7B40 **)unaff_R14;
                pUVar2 = (UnityEngine_Vector3_array *)
                         UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)unaff_R14,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
                  pIVar7 = (pUVar2->obj).klass;
                  pUVar8 = *(UnityEngine_Vector3_array **)
                            ((long)((System_String_VTable *)pIVar7->vtable + 1) + 0xb8);
                  pUStack_170 = (UnityEngine_Vector3_array *)0x438cabe;
                  (**(code **)((long)((System_String_VTable *)pIVar7->vtable + 1) + 0xb0))(elementHeight);
                  uVar18 = (uint)pIVar7;
                  panel_00 = (MethodInfo_24E7B40 **)pUVar2;
                  if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
                    pUStack_170 = (UnityEngine_Vector3_array *)0x438cad3;
                    pUVar8 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    panel_00 = (MethodInfo_24E7B40 **)pUVar5;
                    pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement)
                    ;
                    if (pIVar6 != (Il2CppObject *)0x0) {
                      pIVar7 = pIVar6->klass;
                      pUStack_170 = (UnityEngine_Vector3_array *)0x438caf5;
                      (*pIVar7->vtable[0x26].methodPtr)(elementHeight,pIVar6,pIVar7->vtable[0x26].method);
                      uVar18 = (uint)pIVar7;
                      goto label_0438caf5;
                    }
                  }
                }
              }
            }
          }
          else {
            panel_00 = (MethodInfo_24E7B40 **)pUVar4;
            if (unaff_R14 != (UnityEngine_Vector3_array *)0x0) {
              call = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
              pUStack_170 = (UnityEngine_Vector3_array *)0x438ca19;
              pUVar8 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
              panel_00 = (MethodInfo_24E7B40 **)unaff_R14;
              pUVar2 = (UnityEngine_Vector3_array *)
                       UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)unaff_R14,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
                pIVar7 = (pUVar2->obj).klass;
                pUVar8 = *(UnityEngine_Vector3_array **)
                          ((long)((System_String_VTable *)pIVar7->vtable + 1) + 0x98);
                pUStack_170 = (UnityEngine_Vector3_array *)0x438ca3b;
                (**(code **)((long)((System_String_VTable *)pIVar7->vtable + 1) + 0x90))(elementWidth);
                uVar18 = (uint)pIVar7;
                panel_00 = (MethodInfo_24E7B40 **)pUVar2;
                if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
                  pUStack_170 = (UnityEngine_Vector3_array *)0x438ca50;
                  pUVar8 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                  panel_00 = (MethodInfo_24E7B40 **)pUVar5;
                  pUVar4 = (UnityEngine_Vector3_array *)
                           UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
                    pIVar7 = (pUVar4->obj).klass;
                    pUVar8 = *(UnityEngine_Vector3_array **)
                              ((long)((System_String_VTable *)pIVar7->vtable + 1) + 0x98);
                    pUStack_170 = (UnityEngine_Vector3_array *)0x438ca72;
                    (**(code **)((long)((System_String_VTable *)pIVar7->vtable + 1) + 0x90))(elementWidth);
                    uVar18 = (uint)pIVar7;
                    goto label_0438ca75;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pUStack_170 = (UnityEngine_Vector3_array *)UI_ElementFactory__CreateHorizontalLine;
  UStack_190.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  pMVar20 = extraout_RDX;
  fStack_1a0 = fVar31;
  fStack_19c = in_XMM1_Db;
  fStack_198 = in_XMM1_Dc;
  fStack_194 = in_XMM1_Dd;
  pIStack_180 = (Il2CppClass *)popup;
  pUStack_178 = unaff_R14;
  pUStack_170 = pUVar5;
  if (g_data_057ae27c == '\0') {
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cd9d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cdb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLineScaler_AddComponent_HorizontalLineScaler);
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cdc1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cdcd;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cdd9;
    il2cpp_runtime_helper_023445d0(&"LineColor");
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cde5;
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/HorizontalLine");
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cdf1;
    il2cpp_runtime_helper_023445d0(&"LineImage");
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cdfd;
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae27c = '\x01';
    pMVar20 = extraout_RDX_00;
  }
  pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ce16;
  style_00 = "Prefabs/Elements/HorizontalLine";
  pUVar2 = (UnityEngine_Vector3_array *)panel_00;
  pUVar4 = (UnityEngine_Vector3_array *)
           UI_ElementFactory__InstantiateAndBind
                     ((UnityEngine_Transform_o *)panel_00,(System_String_o *)"Prefabs/Elements/HorizontalLine",pMVar20);
  if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
    style_00 = (MethodInfo_24E7B40 *)0x0;
    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ce2c;
    pUVar2 = pUVar4;
    pUVar9 = (UnityEngine_Vector3_array *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    pUVar5 = pUVar4;
    if (pUVar9 != (UnityEngine_Vector3_array *)0x0) {
      panel_00 = &"LineImage";
      pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ce49;
      style_00 = "LineImage";
      pUVar10 = (UnityEngine_Vector3_array *)
                UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"LineImage",(MethodInfo *)0x0
                          );
      pUVar2 = pUVar9;
      if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
        uVar18 = 0x559c920;
        pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ce64;
        style_00 = MethodInfo_RectTransform_GetComponent_RectTransform;
        pUVar11 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform)
        ;
        pUVar2 = pUVar10;
        if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
          pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ce80;
          value.fields.y = fStack_1a0;
          value.fields.x = UStack_190.fields.x;
          UnityEngine_RectTransform__set_sizeDelta(pUVar11,value,(MethodInfo *)0x0);
          style_00 = (MethodInfo_24E7B40 *)0x0;
          pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ce8a;
          pUVar2 = pUVar4;
          pUVar9 = (UnityEngine_Vector3_array *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0)
          ;
          if (pUVar9 != (UnityEngine_Vector3_array *)0x0) {
            pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cea0;
            style_00 = "LineImage";
            pUVar10 = (UnityEngine_Vector3_array *)
                      UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"LineImage",
                                 (MethodInfo *)0x0);
            pUVar2 = pUVar9;
            if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
              style_00 = (MethodInfo_24E7B40 *)0x0;
              pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ceb3;
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
              pUVar2 = pUVar10;
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                uVar18 = 0x55a16b0;
                pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cece;
                UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_HorizontalLineScaler_AddComponent_HorizontalLineScaler);
                style_00 = (MethodInfo_24E7B40 *)0x0;
                pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ced8;
                pUVar2 = pUVar4;
                pUVar4 = (UnityEngine_Vector3_array *)
                         UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
                  pUStack_1a8 = (UnityEngine_Vector3_array *)0x438ceee;
                  style_00 = "LineImage";
                  pUVar9 = (UnityEngine_Vector3_array *)
                           UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)pUVar4,(System_String_o *)"LineImage",
                                      (MethodInfo *)0x0);
                  pUVar2 = pUVar4;
                  if (pUVar9 != (UnityEngine_Vector3_array *)0x0) {
                    uVar18 = 0x559c818;
                    pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cf09;
                    style_00 = MethodInfo_Image_GetComponent_Image;
                    pIVar6 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar9,MethodInfo_Image_GetComponent_Image);
                    pUVar2 = pUVar9;
                    if (pUVar8 != (UnityEngine_Vector3_array *)0x0) {
                      pUVar8 = (UnityEngine_Vector3_array *)pUVar8->max_length;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cf2d;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      uVar25 = 0;
                      pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cf56;
                      pSVar19 = "DefaultPanel";
                      style_00 = "MainBody";
                      pUVar2 = pUVar8;
                      UVar33 = UI_UIManager__GetThemeColor
                                         ((System_String_o *)pUVar8,(System_String_o *)"MainBody",
                                          "LineColor","DefaultPanel",(MethodInfo *)0x0);
                      uVar18 = (uint)pSVar19;
                      fVar31 = UVar33.fields.b;
                      panel_00 = (MethodInfo_24E7B40 **)0x0;
                      if (pIVar6 != (Il2CppObject *)0x0) {
                        pUStack_1a8 = (UnityEngine_Vector3_array *)0x438cf6e;
                        (*pIVar6->klass->vtable[0x17].methodPtr)
                                  (UVar33.fields.r,pIVar6,pIVar6->klass->vtable[0x17].method);
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
    }
  }
  pUStack_1a8 = (UnityEngine_Vector3_array *)UI_ElementFactory__CreatePlayerKDRRow;
  il2cpp_runtime_helper_022b2c90();
  pMVar20 = player;
  pUStack_1c8 = (UnityEngine_Vector3_array *)panel_00;
  pUStack_1c0 = __this;
  pUStack_1b8 = pUVar23;
  pUStack_1b0 = pUVar8;
  pUStack_1a8 = pUVar5;
  if (g_data_057ae27e == '\0') {
    pMStack_1d0 = (MethodInfo_24E7B40 *)0x438cfa7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KDRPanel_GetComponent_KDRPanel);
    pMStack_1d0 = (MethodInfo_24E7B40 *)0x438cfb3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow);
    g_data_057ae27e = '\x01';
    pMVar20 = extraout_RDX_01;
  }
  style_01 = (MethodInfo_24E7B40 *)0x3;
  pMStack_1d0 = (MethodInfo_24E7B40 *)0x438cfcf;
  pUVar8 = pUVar2;
  pUVar5 = (UnityEngine_Vector3_array *)
           UI_ElementFactory__CreateHorizontalGroup((UnityEngine_Transform_o *)pUVar2,10.0,3,pMVar20);
  if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
    pMStack_1d0 = (MethodInfo_24E7B40 *)0x438cfe9;
    style_01 = MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow;
    pUVar8 = pUVar5;
    __this_00 = (UI_PlayerKDRRow_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo_255A020 *)MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow);
    pUVar23 = pUVar5;
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      pMStack_1d0 = (MethodInfo_24E7B40 *)0x438d003;
      style_01 = MethodInfo_KDRPanel_GetComponent_KDRPanel;
      pUVar8 = pUVar2;
      panel = (UI_KDRPanel_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_KDRPanel_GetComponent_KDRPanel);
      panel_00 = (MethodInfo_24E7B40 **)0x0;
      if (__this_00 != (UI_PlayerKDRRow_o *)0x0) {
        pMStack_1d0 = (MethodInfo_24E7B40 *)0x438d01c;
        UI_PlayerKDRRow__Setup
                  (__this_00,(UI_ElementStyle_o *)style_00,(Photon_Realtime_Player_o *)player,panel,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  pMStack_1d0 = (MethodInfo_24E7B40 *)0x438d02e;
  il2cpp_runtime_helper_022b2c90();
  pMVar20 = team;
  pUStack_1e0 = (UnityEngine_Vector3_array *)panel_00;
  pMStack_1d8 = player;
  pMStack_1d0 = style_00;
  if (g_data_057ae27f == '\0') {
    pUStack_1e8 = (UnityEngine_Vector3_array *)0x438d053;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow);
    g_data_057ae27f = '\x01';
    pMVar20 = extraout_RDX_02;
  }
  uVar21 = 3;
  pUStack_1e8 = (UnityEngine_Vector3_array *)0x438d06f;
  pUVar5 = pUVar8;
  pUVar4 = (UnityEngine_Vector3_array *)
           UI_ElementFactory__CreateHorizontalGroup((UnityEngine_Transform_o *)pUVar8,10.0,3,pMVar20);
  if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
    pUStack_1e8 = (UnityEngine_Vector3_array *)0x438d089;
    pMVar22 = MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow;
    pUVar5 = pUVar4;
    __this_01 = (UI_TeamKDRRow_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pUVar4,MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow);
    uVar21 = (uint)pMVar22;
    pUVar8 = pUVar4;
    if (__this_01 != (UI_TeamKDRRow_o *)0x0) {
      pUStack_1e8 = (UnityEngine_Vector3_array *)0x438d09e;
      UI_TeamKDRRow__Setup(__this_01,(UI_ElementStyle_o *)style_01,(System_String_o *)team,(MethodInfo *)0x0);
      return;
    }
  }
  pUStack_1e8 = (UnityEngine_Vector3_array *)0x438d0ac;
  fStack_208 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Vector3_array *)(ulong)uVar21;
  pMVar20 = extraout_RDX_03;
  pUStack_200 = pUVar8;
  pMStack_1f8 = team;
  pMStack_1f0 = style_01;
  pUStack_1e8 = (UnityEngine_Vector3_array *)call;
  fStack_204 = extraout_XMM0_Da;
  if (g_data_057ae280 == '\0') {
    pUStack_210 = (UnityEngine_Vector3_array *)0x438d0d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    pUStack_210 = (UnityEngine_Vector3_array *)0x438d0e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_210 = (UnityEngine_Vector3_array *)0x438d0f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    pUStack_210 = (UnityEngine_Vector3_array *)0x438d0fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_210 = (UnityEngine_Vector3_array *)0x438d108;
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/VerticalGroup");
    g_data_057ae280 = '\x01';
    pMVar20 = extraout_RDX_04;
  }
  pUStack_210 = (UnityEngine_Vector3_array *)0x438d121;
  pUVar9 = "Prefabs/Elements/VerticalGroup";
  pUVar10 = pUVar5;
  __this_02 = (UnityEngine_Vector3_array *)
              UI_ElementFactory__InstantiateAndBind
                        ((UnityEngine_Transform_o *)pUVar5,(System_String_o *)"Prefabs/Elements/VerticalGroup",pMVar20);
  if (__this_02 != (UnityEngine_Vector3_array *)0x0) {
    call = &MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
    pUStack_210 = (UnityEngine_Vector3_array *)0x438d140;
    pUVar9 = MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
    pUVar10 = __this_02;
    __this_03 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_02,(MethodInfo_255A0F0 *)MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    pUVar8 = __this_02;
    if (__this_03 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      pUStack_210 = (UnityEngine_Vector3_array *)0x438d159;
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_03,fStack_204,(MethodInfo *)0x0);
      pUStack_210 = (UnityEngine_Vector3_array *)0x438d165;
      pUVar9 = MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
      pUVar10 = __this_02;
      __this_04 = (UnityEngine_Vector3_array *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_02,(MethodInfo_255A0F0 *)MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      if (__this_04 != (UnityEngine_Vector3_array *)0x0) {
        pUStack_210 = (UnityEngine_Vector3_array *)0x438d17b;
        pUVar9 = pUVar4;
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)__this_04,uVar21,(MethodInfo *)0x0);
        pUVar10 = __this_04;
        if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
          pUStack_210 = (UnityEngine_Vector3_array *)0x438d192;
          call = (UnityEngine_Vector3_array **)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_210 = (UnityEngine_Vector3_array *)0x438d1ad;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_210 = (UnityEngine_Vector3_array *)0x438d1b9;
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)call,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            return;
          }
          pUStack_210 = (UnityEngine_Vector3_array *)0x438d1cf;
          pUVar9 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
          pUVar10 = __this_02;
          pIVar6 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)__this_02,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar6 != (Il2CppObject *)0x0) {
            pUStack_210 = (UnityEngine_Vector3_array *)0x438d1ea;
            (*pIVar6->klass->vtable[0x28].methodPtr)(0,pIVar6,pIVar6->klass->vtable[0x28].method);
            return;
          }
        }
      }
    }
  }
  pUStack_210 = (UnityEngine_Vector3_array *)0x438d1fd;
  il2cpp_runtime_helper_022b2c90();
  pMVar20 = title_00;
  pSVar29 = pSVar28;
  uVar21 = uVar25;
  value_03 = uVar18;
  auStack_240._8_8_ = pUVar8;
  pUStack_230 = pUVar2;
  pUStack_228 = pUVar23;
  pUStack_220 = pUVar5;
  pUStack_218 = pUVar4;
  pUStack_210 = (UnityEngine_Vector3_array *)call;
  if (g_data_057ae282 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CollapsibleToggleSection_AddComponent_CollapsibleToggleS);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponentInChildren_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponentInChildren_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/HorizontalGroup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/TextButton");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ToggleSetting");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"TextButton");
    g_data_057ae282 = '\x01';
    pMVar20 = extraout_RDX_05;
  }
  pUVar23 = "Prefabs/Elements/HorizontalGroup";
  pUVar8 = pUVar10;
  pUVar5 = (UnityEngine_Vector3_array *)
           UI_ElementFactory__InstantiateAndBind
                     ((UnityEngine_Transform_o *)pUVar10,(System_String_o *)"Prefabs/Elements/HorizontalGroup",pMVar20);
  if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
    pUVar23 = MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup;
    pUVar8 = pUVar5;
    pUVar2 = (UnityEngine_Vector3_array *)
             UnityEngine_GameObject__GetComponent_object_
                       ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo_255A0F0 *)MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,6.0,(MethodInfo *)0x0);
      pUVar23 = (UnityEngine_Vector3_array *)0x3;
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pUVar2,3,(MethodInfo *)0x0);
      pUVar8 = pUVar2;
      if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          pUVar23 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
          pUVar8 = pUVar5;
          pIVar6 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar6 == (Il2CppObject *)0x0) goto label_0438d869;
          (*pIVar6->klass->vtable[0x28].methodPtr)(0,pIVar6);
        }
        pUVar8 = (UnityEngine_Vector3_array *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
        value_03 = 0x55d0158;
        pUVar23 = "Prefabs/Elements/ToggleSetting";
        pUVar2 = (UnityEngine_Vector3_array *)
                 UI_ElementFactory__InstantiateAndBind
                           ((UnityEngine_Transform_o *)pUVar8,(System_String_o *)"Prefabs/Elements/ToggleSetting",method_00);
        if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
          pUVar23 = (UnityEngine_Vector3_array *)0x0;
          pUVar8 = pUVar2;
          pUVar3 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0)
          ;
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            value_03 = 0x55d6488;
            pUVar4 = (UnityEngine_Vector3_array *)
                     UnityEngine_Transform__Find(pUVar3,"Toggle",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              pUStack_308 = (UnityEngine_UI_Toggle_o *)
                            UnityEngine_GameObject__GetComponentInChildren_object_
                                      ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_Toggle_GetComponentInChildren_Toggle);
              pUVar4 = (UnityEngine_Vector3_array *)
                       UnityEngine_GameObject__GetComponentInChildren_object_
                                 ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_Text_GetComponentInChildren_Text);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar23 = (UnityEngine_Vector3_array *)0x0;
              pUVar8 = pUVar4;
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar1 != '\0') {
                if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_0438d869;
                pIVar7 = (pUVar4->obj).klass;
                (**(code **)((long)((System_String_VTable *)pIVar7->vtable + 2) + 0x150))
                          (pUVar4,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                           *(undefined8 *)((long)((System_String_VTable *)pIVar7->vtable + 2) + 0x158));
              }
              pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar6 == (Il2CppObject *)0x0) {
                pUVar23 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
                pIVar6 = UnityEngine_GameObject__AddComponent_object_
                                   ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
                pUVar8 = pUVar2;
                if (pIVar6 == (Il2CppObject *)0x0) goto label_0438d869;
              }
              (*pIVar6->klass->vtable[0x24].methodPtr)(0x41b00000,pIVar6,pIVar6->klass->vtable[0x24].method);
              (*pIVar6->klass->vtable[0x20].methodPtr)(0x41b00000,pIVar6);
label_0438d661:
              pUVar8 = (UnityEngine_Vector3_array *)
                       UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
              value_03 = 0x55d0140;
              pUVar23 = "Prefabs/Elements/TextButton";
              pUVar2 = (UnityEngine_Vector3_array *)
                       UI_ElementFactory__InstantiateAndBind
                                 ((UnityEngine_Transform_o *)pUVar8,(System_String_o *)"Prefabs/Elements/TextButton",method_01)
              ;
              if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
                pUVar23 = MethodInfo_Text_GetComponent_Text;
                pUVar8 = pUVar2;
                pUVar13 = (UnityEngine_UI_Text_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo_255A0F0 *)MethodInfo_Text_GetComponent_Text);
                if ((pUVar9 != (UnityEngine_Vector3_array *)0x0) && (pUVar13 != (UnityEngine_UI_Text_o *)0x0))
                {
                  UnityEngine_UI_Text__set_fontSize(pUVar13,*(int32_t *)&pUVar9->bounds,(MethodInfo *)0x0);
                  UnityEngine_UI_Text__set_fontStyle(pUVar13,1,(MethodInfo *)0x0);
                  __this_05 = (UnityEngine_UI_Selectable_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button
                                        );
                  pUVar23 = (UnityEngine_Vector3_array *)pUVar9->max_length;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar8 = (UnityEngine_Vector3_array *)auStack_290;
                  pSVar29 = (System_Action_bool__o *)0x0;
                  pSVar19 = "";
                  pSVar27 = "DefaultPanel";
                  UI_UIManager__GetThemeColorBlock
                            ((UnityEngine_UI_ColorBlock_o *)pUVar8,(System_String_o *)pUVar23,"TextButton",
                             "","DefaultPanel",(MethodInfo *)0x0);
                  value_03 = (uint)pSVar19;
                  uVar21 = (uint)pSVar27;
                  fVar31 = (float)auStack_290._16_4_;
                  if (__this_05 != (UnityEngine_UI_Selectable_o *)0x0) {
                    value_00.fields.m_NormalColor.fields.b = (float)auStack_290._8_4_;
                    value_00.fields.m_NormalColor.fields.a = (float)auStack_290._12_4_;
                    value_00.fields.m_NormalColor.fields.r = (float)auStack_290._0_4_;
                    value_00.fields.m_NormalColor.fields.g = (float)auStack_290._4_4_;
                    value_00.fields.m_HighlightedColor.fields.r = (float)auStack_290._16_4_;
                    value_00.fields.m_HighlightedColor.fields.g = (float)uStack_27c;
                    value_00.fields.m_HighlightedColor.fields.b = (float)uStack_278;
                    value_00.fields.m_HighlightedColor.fields.a = (float)uStack_274;
                    value_00.fields.m_PressedColor.fields.r = (float)auStack_270._0_4_;
                    value_00.fields.m_PressedColor.fields.g = (float)auStack_270._4_4_;
                    value_00.fields.m_PressedColor.fields.b = (float)auStack_270._8_4_;
                    value_00.fields.m_PressedColor.fields.a = (float)auStack_270._12_4_;
                    value_00.fields.m_SelectedColor.fields.r = (float)auStack_270._16_4_;
                    value_00.fields.m_SelectedColor.fields.g = (float)auStack_270._20_4_;
                    value_00.fields.m_SelectedColor.fields.b = (float)auStack_258._0_4_;
                    value_00.fields.m_SelectedColor.fields.a = (float)auStack_258._4_4_;
                    value_00.fields.m_DisabledColor.fields.r = (float)auStack_258._8_4_;
                    value_00.fields.m_DisabledColor.fields.g = (float)auStack_258._12_4_;
                    value_00.fields.m_DisabledColor.fields.b = (float)auStack_258._16_4_;
                    value_00.fields.m_DisabledColor.fields.a = (float)auStack_258._20_4_;
                    value_00.fields.m_ColorMultiplier = (float)auStack_240._0_4_;
                    value_00.fields.m_FadeDuration = (float)auStack_240._4_4_;
                    fVar32 = (float)auStack_290._16_4_;
                    UnityEngine_UI_Selectable__set_colors(__this_05,value_00,(MethodInfo *)0x0);
                    __this_06 = (UI_CollapsibleToggleSection_o *)
                                UnityEngine_GameObject__AddComponent_object_
                                          ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_CollapsibleToggleSection_AddComponent_CollapsibleToggleS);
                    pUVar23 = MethodInfo_Button_GetComponent_Button;
                    arrowButton = (UnityEngine_UI_Button_o *)
                                  UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)pUVar2,
                                             (MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
                    pUVar8 = pUVar2;
                    fVar31 = (float)auStack_290._16_4_;
                    if (__this_06 != (UI_CollapsibleToggleSection_o *)0x0) {
                      UI_CollapsibleToggleSection__Setup
                                (__this_06,pUVar13,arrowButton,pUStack_308,(System_String_o *)title_00,
                                 uVar18 & 0xff,uVar25 & 0xff,pSVar28,(MethodInfo *)CONCAT44(uStack_27c,fVar32)
                                );
                      return;
                    }
                  }
                }
              }
            }
            else {
              pUVar23 = (UnityEngine_Vector3_array *)0x0;
              pUVar8 = pUVar5;
              pUVar3 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
                value_03 = 0;
                UnityEngine_Transform__SetParent_4e09e30
                          ((UnityEngine_Transform_o *)pUVar4,pUVar3,0,(MethodInfo *)0x0);
                UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)pUVar4,0,(MethodInfo *)0x0);
                pIVar6 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar6 != (Il2CppObject *)0x0) {
label_0438d4fe:
                  (*pIVar6->klass->vtable[0x24].methodPtr)
                            (0x41b00000,pIVar6,pIVar6->klass->vtable[0x24].method);
                  (*pIVar6->klass->vtable[0x20].methodPtr)
                            (0x41b00000,pIVar6,pIVar6->klass->vtable[0x20].method);
                  pUStack_308 = (UnityEngine_UI_Toggle_o *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar4,MethodInfo_Toggle_GetComponent_Toggle);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
                  goto label_0438d661;
                }
                pUVar23 = (UnityEngine_Vector3_array *)0x0;
                pUVar8 = pUVar4;
                pUVar10 = (UnityEngine_Vector3_array *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
                  value_03 = 0x55a1740;
                  pUVar23 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
                  pIVar6 = UnityEngine_GameObject__AddComponent_object_
                                     ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
                  pUVar8 = pUVar10;
                  if (pIVar6 != (Il2CppObject *)0x0) goto label_0438d4fe;
                }
              }
            }
          }
        }
      }
    }
  }
label_0438d869:
  uVar30 = il2cpp_runtime_helper_022b2c90();
  pSVar28 = pSVar29;
  fVar32 = fVar31;
  uVar18 = value_03;
  if (g_data_057ae283 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponentInChildren_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"OverlayLabel");
    g_data_057ae283 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pUVar5 = pUVar23;
  if (components == (System_Type_array *)0x0) {
label_0438dc68:
    il2cpp_runtime_helper_022b2c90();
label_0438dc6d:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar14 == (System_Type_o *)0x0) {
label_0438d989:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar14;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar14 = System_Type__GetTypeFromHandle(TypeRef_Text,(MethodInfo *)0x0);
        if (pSVar14 != (System_Type_o *)0x0) {
          lVar15 = il2cpp_runtime_helper_023051f0(pSVar14);
          if (lVar15 == 0) goto label_0438dc72;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar14;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1,pSVar14);
          pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          uVar18 = 0;
          UnityEngine_GameObject___ctor_4dfc440(pUVar12,"OverlayLabel",components,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              uVar18 = 0;
              UnityEngine_Transform__SetParent_4e09e30
                        (pUVar3,(UnityEngine_Transform_o *)pUVar8,0,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_Vector3_array *)
                       UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
              if ((pUVar5 != (UnityEngine_Vector3_array *)0x0) &&
                 (pIVar7 = TypeInfo_RectTransform, (pUVar5->obj).klass != TypeInfo_RectTransform)) goto label_0438dc81;
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          ((UnityEngine_RectTransform_o *)pUVar5,
                           (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                if (g_data_057a9c86 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a9c86 = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          ((UnityEngine_RectTransform_o *)pUVar5,
                           (UnityEngine_Vector2_o)
                           *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                           (MethodInfo *)0x0);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMin
                          ((UnityEngine_RectTransform_o *)pUVar5,
                           (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMax
                          ((UnityEngine_RectTransform_o *)pUVar5,
                           (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                pUVar8 = (UnityEngine_Vector3_array *)
                         UnityEngine_GameObject__GetComponent_object_
                                   (pUVar12,(MethodInfo_255A0F0 *)MethodInfo_Text_GetComponent_Text);
                if (pUVar8 != (UnityEngine_Vector3_array *)0x0) {
                  pIVar7 = (pUVar8->obj).klass;
                  (*pIVar7->vtable[0x4b].methodPtr)(pUVar8,extraout_RDX_06,pIVar7->vtable[0x4b].method);
                  UnityEngine_UI_Text__set_alignment
                            ((UnityEngine_UI_Text_o *)pUVar8,value_03,(MethodInfo *)0x0);
                  (*((pUVar8->obj).klass)->vtable[0x17].methodPtr)(uVar30,pUVar8);
                  pIVar7 = (pUVar8->obj).klass;
                  (*pIVar7->vtable[0x19].methodPtr)(pUVar8,0,pIVar7->vtable[0x19].method);
                  fVar32 = fVar31;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    fVar32 = fVar31;
                  }
                  value_02 = (UnityEngine_Font_o *)0x0;
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar1 == '\0') {
label_0438dc2e:
                    UnityEngine_UI_Text__set_font((UnityEngine_UI_Text_o *)pUVar8,value_02,(MethodInfo *)0x0);
                    UnityEngine_UI_Text__set_fontSize
                              ((UnityEngine_UI_Text_o *)pUVar8,(int32_t)pSVar29,(MethodInfo *)0x0);
                    UnityEngine_UI_Text__set_fontStyle
                              ((UnityEngine_UI_Text_o *)pUVar8,uVar21,(MethodInfo *)0x0);
                    return;
                  }
                  pUVar5 = pUVar8;
                  if (pUVar23 != (UnityEngine_Vector3_array *)0x0) {
                    pUVar13 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Component__GetComponentInChildren_object__24e7d50
                                        ((UnityEngine_Component_o *)pUVar23,MethodInfo_Text_GetComponentInChildren_Text);
                    if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) {
                      value_02 = (UnityEngine_Font_o *)0x0;
                    }
                    else {
                      value_02 = UnityEngine_UI_Text__get_font(pUVar13,(MethodInfo *)0x0);
                    }
                    goto label_0438dc2e;
                  }
                }
              }
            }
          }
          goto label_0438dc68;
        }
      }
      goto label_0438dc6d;
    }
    lVar15 = il2cpp_runtime_helper_023051f0(pSVar14);
    if (lVar15 != 0) goto label_0438d989;
  }
label_0438dc72:
  uVar16 = il2cpp_runtime_helper_0231b270();
  pIVar7 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2b10(uVar16);
label_0438dc81:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae284 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae284 = '\x01';
  }
  pUVar17 = (UnityEngine_Transform_o *)
            UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pUVar5,(UI_ElementStyle_o *)pIVar7,title_01,uVar18,4,
                       (MethodInfo *)pSVar28);
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
    pIVar7 = MethodInfo_RectTransform_GetComponent_RectTransform;
    pUVar3 = pUVar17;
    pUVar11 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pUVar17,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__get_sizeDelta(pUVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar17,(MethodInfo *)0x0);
      return;
    }
  }
  fVar31 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar20 = extraout_RDX_07;
  if (g_data_057ae285 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePanel_GetComponent_BasePanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_AddComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/HeadedPanel");
    g_data_057ae285 = '\x01';
    pMVar20 = extraout_RDX_08;
  }
  pUVar17 = pUVar3;
  pUVar12 = UI_ElementFactory__InstantiateAndBind(pUVar3,"Prefabs/Panels/HeadedPanel",pMVar20);
  uVar30 = SUB84(pUVar17,0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pUVar24 = pUVar12;
    __this_07 = (UI_CustomPopup_o *)UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_CustomPopup_AddComponent_CustomPopup);
    uVar30 = SUB84(pUVar24,0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      parent = (UI_BasePanel_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar3,MethodInfo_BasePanel_GetComponent_BasePanel);
      uVar30 = SUB84(pUVar3,0);
      if (__this_07 != (UI_CustomPopup_o *)0x0) {
        UI_CustomPopup__Setup(__this_07,parent,(System_String_o *)pIVar7,fVar31,fVar32,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(pUVar12,(uint)extraout_RDX_07 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  switch(uVar30) {
  case 0:
    break;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    return;
  case 5:
    return;
  default:
    return;
  case 7:
    return;
  case 8:
  }
  return;
}


// UI.ButtonPopupSettingElement$$OnClick
// il2cpp: void UI_ButtonPopupSettingElement__OnClick (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x438edd0

void UI_ButtonPopupSettingElement__OnClick(UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Collections_Generic_List_BasePopup__o *pSVar2;
  System_Collections_Generic_List_BasePopup__c *pSVar3;
  MethodInfo *vtableDispatch;
  undefined8 in_RDX;
  UI_BasePopup_o *pUVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  pUVar4 = (__this->fields)._popup;
  if (pUVar4 != (UI_BasePopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar4->klass->vtable)._21_Show.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar4,(pUVar4->klass->vtable)._21_Show.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae299 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae299 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)(pUVar4->fields).SinglePanel;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((((UnityEngine_Transform_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
       ((((UnityEngine_Transform_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting))
    {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      pSVar2 = (pUVar4->fields)._popups;
      if (pSVar2 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pSVar3 = pSVar2->klass;
        vtableDispatch = pSVar3[1].vtable._20_System_Collections_IList_Add.method;
        (*(code *)vtableDispatch)
                  (pSVar2,(__this_00->fields).m_CancellationTokenSource,
                   pSVar3[1].vtable._21_System_Collections_IList_Contains.methodPtr,pSVar3,
                   vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.ButtonPopupSettingElement$$SyncElement
// il2cpp: void UI_ButtonPopupSettingElement__SyncElement (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x438ee00

void UI_ButtonPopupSettingElement__SyncElement(UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Text_c *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057ae299 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae299 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((((Settings_BaseSetting_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_BaseSetting_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      pUVar2 = (__this->fields)._label;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar3 = pUVar2->klass;
        vtableDispatch = (pUVar3->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar2,(__this_00->fields).m_CancellationTokenSource,(pUVar3->vtable)._75_set_text.method,
                   pUVar3,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.ButtonPopupSettingElement$$.ctor
// il2cpp: void UI_ButtonPopupSettingElement___ctor (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x438ee90

void UI_ButtonPopupSettingElement___ctor(UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ButtonPopupSettingElement$$<Setup>b__4_0
// il2cpp: void UI_ButtonPopupSettingElement___Setup_b__4_0 (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x438eea0

void UI_ButtonPopupSettingElement___Setup_b__4_0(UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  Settings_IntSetting_o *pSVar2;
  UI_BasePopup_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  UI_ColorPickPopup_o *__this_00;
  Utility_Color255_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_HashSet_T__o *__this_02;
  byte extraout_DL;
  MethodInfo *method_00;
  undefined8 in_RDX;
  byte bVar6;
  UnityEngine_UI_Image_o *pUVar7;
  System_Collections_Generic_HashSet_T__c *pSVar8;
  MethodInfo *pMVar9;
  UI_ColorPickPopup_o *pUVar10;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  Settings_ColorSetting_o *pSVar12;
  Utility_Color255_o *pUVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  UnityEngine_Color_o rgbColor;
  float fStack_44;
  
  pUVar3 = (__this->fields)._popup;
  if (pUVar3 != (UI_BasePopup_o *)0x0) {
    vtableDispatch = (pUVar3->klass->vtable)._21_Show.methodPtr;
    (*vtableDispatch)(pUVar3,(pUVar3->klass->vtable)._21_Show.method,in_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae29a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae29a = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  pSVar11 = __this_02;
  System_Collections_Generic_HashSet_Int32Enum____ctor(__this_02,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_02 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add(__this_02,6,MethodInfo_Boolean_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae29c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    g_data_057ae29c = '\x01';
  }
  __this_00 = (UI_ColorPickPopup_o *)(pSVar11->fields)._siInfo;
  pSVar12 = (Settings_ColorSetting_o *)0x0;
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    pSVar12 = *(Settings_ColorSetting_o **)&(pSVar11->fields)._count;
    pUVar7 = *(UnityEngine_UI_Image_o **)&(pSVar11->fields)._version;
    pSVar8 = pSVar11[1].klass;
    if (pSVar12 == (Settings_ColorSetting_o *)0x0) {
UI_ColorPickPopup__Show:
      if (g_data_057ae0e7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
        g_data_057ae0e7 = '\x01';
      }
      bVar6 = 0;
      pUVar10 = __this_00;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pMVar9 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return;
        }
        UI_BasePopup__Show((UI_BasePopup_o *)__this_00,pMVar9);
        (__this_00->fields)._setting = pSVar12;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._setting,pSVar12);
        pUVar10 = (UI_ColorPickPopup_o *)&(__this_00->fields)._image;
        (__this_00->fields)._image = pUVar7;
        il2cpp_runtime_helper_022b4080();
        bVar6 = (byte)pUVar7;
        if ((pSVar12 != (Settings_ColorSetting_o *)0x0) &&
           (pSVar2 = (__this_00->fields)._alpha, pSVar2 != (Settings_IntSetting_o *)0x0)) {
          (pSVar2->fields).MinValue = (pSVar12->fields).MinAlpha;
          (__this_00->fields)._onChangeColor = (UnityEngine_Events_UnityAction_o *)pSVar8;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields)._onChangeColor);
          bVar6 = (byte)pSVar8;
          pUVar13 = (pSVar12->fields)._value;
          pUVar10 = (UI_ColorPickPopup_o *)0x0;
          if (pUVar13 != (Utility_Color255_o *)0x0) {
            UVar17 = Utility_Color255__ToColor(pUVar13,(MethodInfo *)0x0);
            rgbColor.fields.b = UVar17.fields.b;
            rgbColor.fields._0_8_ = UVar17.fields._0_8_;
            rgbColor.fields.a = 1.0;
            UnityEngine_Color__RGBToHSV
                      (rgbColor,&(__this_00->fields)._hue,&(__this_00->fields)._saturation,
                       &(__this_00->fields)._value,(MethodInfo *)0x0);
            fStack_44 = UVar17.fields.a;
            fVar14 = (float)(pSVar12->fields).MinAlpha / 255.0;
            if (fVar14 <= fStack_44) {
              fVar14 = fStack_44;
            }
            fVar16 = 1.0;
            if (fVar14 <= 1.0) {
              fVar16 = fVar14;
            }
            (__this_00->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar16);
            *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 3) = 0;
            *(undefined2 *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) = 0x101;
            pMVar9 = (MethodInfo *)0x1;
            UI_ColorPickPopup__ApplyCurrentColorToUI(__this_00,1,method_00);
            if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) != '\0') {
              UI_ColorPickPopup__UpdateSVTexture(__this_00,pMVar9);
              *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) = 0;
            }
            if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) == '\0') {
              return;
            }
            UI_ColorPickPopup__UpdateAlphaTexture(__this_00,pMVar9);
            *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) = 0;
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pbVar1 = (byte *)((long)&(pUVar10->fields)._suppressInputCallbacks + 1);
      *pbVar1 = *pbVar1 | bVar6;
      pbVar1 = (byte *)((long)&(pUVar10->fields)._suppressInputCallbacks + 2);
      *pbVar1 = *pbVar1 | extraout_DL;
      return;
    }
    bVar6 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if ((bVar6 <= (pSVar12->klass->_2).naturalAligment) &&
       ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_ColorSetting)) goto UI_ColorPickPopup__Show;
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar15 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae29d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    uVar15 = il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae29d = '\x01';
  }
  pUVar13 = *(Utility_Color255_o **)&(pSVar12->fields).MinAlpha;
  if (pUVar13 != (Utility_Color255_o *)0x0) {
    bVar6 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if (((pUVar13->klass->_2).naturalAligment < bVar6) ||
       ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_ColorSetting)) goto label_0438f064;
    pUVar13 = *(Utility_Color255_o **)&(pUVar13->fields).B;
    if (pUVar13 != (Utility_Color255_o *)0x0) {
      pUVar4 = pSVar12[1].fields.DefaultValue;
      UVar17 = Utility_Color255__ToColor(pUVar13,(MethodInfo *)0x0);
      uVar15 = UVar17.fields._0_8_;
      if (pUVar4 != (Utility_Color255_o *)0x0) {
        (**(code **)&pUVar4->klass[1]._2.naturalAligment)
                  (uVar15,UVar17.fields.b,pUVar4,pUVar4->klass[1].vtable._0_Equals.methodPtr);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90(uVar15);
label_0438f064:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar13,(MethodInfo *)0x0);
  return;
}


