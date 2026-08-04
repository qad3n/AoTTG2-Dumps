// Type: UI.ColorSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ColorSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ColorSettingElement.cs
// --------------------------------

// UI.ColorSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ColorSettingElement__get_SupportedSettingTypes (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x438eed0

System_Collections_Generic_HashSet_SettingType__o *
UI_ColorSettingElement__get_SupportedSettingTypes(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  Settings_IntSetting_o *pSVar2;
  UI_ColorPickPopup_o *__this_00;
  Utility_Color255_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_01;
  undefined4 extraout_var;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_01;
  System_Collections_Generic_HashSet_SettingType__o *pSVar5;
  System_Collections_Generic_HashSet_SettingType__o *__this_02;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_02;
  byte extraout_DL;
  MethodInfo *method_00;
  byte bVar6;
  UnityEngine_UI_Image_o *pUVar7;
  System_Collections_Generic_HashSet_SettingType__c *pSVar8;
  MethodInfo *pMVar9;
  UI_ColorPickPopup_o *pUVar10;
  Settings_ColorSetting_o *pSVar11;
  Utility_Color255_o *pUVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o rgbColor;
  float fStack_3c;
  
  if (g_data_057ae29a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae29a = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  pSVar5 = __this_02;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_02,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_02 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_02,6,MethodInfo_Boolean_Add);
    return __this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae29c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    g_data_057ae29c = '\x01';
  }
  __this_00 = (UI_ColorPickPopup_o *)
              ((System_Collections_Generic_HashSet_T__Fields *)&pSVar5->fields)->_siInfo;
  pSVar11 = (Settings_ColorSetting_o *)0x0;
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    pSVar11 = *(Settings_ColorSetting_o **)
               &((System_Collections_Generic_HashSet_T__Fields *)&pSVar5->fields)->_count;
    pUVar7 = *(UnityEngine_UI_Image_o **)
              &((System_Collections_Generic_HashSet_T__Fields *)&pSVar5->fields)->_version;
    pSVar8 = pSVar5[1].klass;
    if (pSVar11 == (Settings_ColorSetting_o *)0x0) {
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
        bVar4 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return (System_Collections_Generic_HashSet_SettingType__o *)CONCAT44(extraout_var,bVar4);
        }
        UI_BasePopup__Show((UI_BasePopup_o *)__this_00,pMVar9);
        (__this_00->fields)._setting = pSVar11;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._setting,pSVar11);
        pUVar10 = (UI_ColorPickPopup_o *)&(__this_00->fields)._image;
        (__this_00->fields)._image = pUVar7;
        il2cpp_runtime_helper_022b4080();
        bVar6 = (byte)pUVar7;
        if ((pSVar11 != (Settings_ColorSetting_o *)0x0) &&
           (pSVar2 = (__this_00->fields)._alpha, pSVar2 != (Settings_IntSetting_o *)0x0)) {
          (pSVar2->fields).MinValue = (pSVar11->fields).MinAlpha;
          (__this_00->fields)._onChangeColor = (UnityEngine_Events_UnityAction_o *)pSVar8;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields)._onChangeColor);
          bVar6 = (byte)pSVar8;
          pUVar12 = (pSVar11->fields)._value;
          pUVar10 = (UI_ColorPickPopup_o *)0x0;
          if (pUVar12 != (Utility_Color255_o *)0x0) {
            UVar16 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
            rgbColor.fields.b = UVar16.fields.b;
            rgbColor.fields._0_8_ = UVar16.fields._0_8_;
            rgbColor.fields.a = 1.0;
            UnityEngine_Color__RGBToHSV
                      (rgbColor,&(__this_00->fields)._hue,&(__this_00->fields)._saturation,
                       &(__this_00->fields)._value,(MethodInfo *)0x0);
            fStack_3c = UVar16.fields.a;
            fVar13 = (float)(pSVar11->fields).MinAlpha / 255.0;
            if (fVar13 <= fStack_3c) {
              fVar13 = fStack_3c;
            }
            fVar15 = 1.0;
            if (fVar13 <= 1.0) {
              fVar15 = fVar13;
            }
            (__this_00->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar15);
            *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 3) = 0;
            *(undefined2 *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) = 0x101;
            pMVar9 = (MethodInfo *)0x1;
            UI_ColorPickPopup__ApplyCurrentColorToUI(__this_00,1,method_00);
            pSVar5 = extraout_RAX;
            if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) != '\0') {
              UI_ColorPickPopup__UpdateSVTexture(__this_00,pMVar9);
              *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) = 0;
              pSVar5 = extraout_RAX_00;
            }
            if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) == '\0') {
              return pSVar5;
            }
            UI_ColorPickPopup__UpdateAlphaTexture(__this_00,pMVar9);
            *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) = 0;
            return extraout_RAX_01;
          }
        }
      }
      pSVar5 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_022b2c90();
      pbVar1 = (byte *)((long)&(pUVar10->fields)._suppressInputCallbacks + 1);
      *pbVar1 = *pbVar1 | bVar6;
      pbVar1 = (byte *)((long)&(pUVar10->fields)._suppressInputCallbacks + 2);
      *pbVar1 = *pbVar1 | extraout_DL;
      return pSVar5;
    }
    bVar6 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if ((bVar6 <= (pSVar11->klass->_2).naturalAligment) &&
       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_ColorSetting)) goto UI_ColorPickPopup__Show;
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar14 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae29d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    uVar14 = il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae29d = '\x01';
  }
  pUVar12 = *(Utility_Color255_o **)&(pSVar11->fields).MinAlpha;
  if (pUVar12 != (Utility_Color255_o *)0x0) {
    bVar6 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if (((pUVar12->klass->_2).naturalAligment < bVar6) ||
       ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_ColorSetting)) goto label_0438f064;
    pUVar12 = *(Utility_Color255_o **)&(pUVar12->fields).B;
    if (pUVar12 != (Utility_Color255_o *)0x0) {
      pUVar3 = pSVar11[1].fields.DefaultValue;
      UVar16 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
      uVar14 = UVar16.fields._0_8_;
      if (pUVar3 != (Utility_Color255_o *)0x0) {
        pSVar5 = (System_Collections_Generic_HashSet_SettingType__o *)
                 (**(code **)&pUVar3->klass[1]._2.naturalAligment)
                           (uVar14,UVar16.fields.b,pUVar3,pUVar3->klass[1].vtable._0_Equals.methodPtr);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90(uVar14);
label_0438f064:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar12,(MethodInfo *)0x0);
  return extraout_RAX_02;
}


// UI.ColorSettingElement$$Setup
// il2cpp: void UI_ColorSettingElement__Setup (UI_ColorSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x438c1c0

void UI_ColorSettingElement__Setup
               (UI_ColorSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_ColorPickPopup_o *colorPickPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeColor,
               MethodInfo *method)

{
  undefined4 uVar1;
  il2cpp_array_size_t iVar2;
  void *pvVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  UnityEngine_UI_ColorBlock_o value_02;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_String_array *pSVar5;
  System_String_array *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_UI_Selectable_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_UI_Image_o *pUVar10;
  System_String_array *pSVar11;
  System_String_array *pSVar12;
  UI_IconPickSettingElement_o *__this_00;
  System_String_array *pSVar13;
  System_String_array *pSVar14;
  System_String_array **__this_01;
  System_String_array *pSVar15;
  System_String_array *pSVar16;
  UnityEngine_RectTransform_o *pUVar17;
  UnityEngine_GameObject_o *pUVar18;
  UI_PlayerKDRRow_o *__this_02;
  UI_KDRPanel_o *panel;
  UI_TeamKDRRow_o *__this_03;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_04;
  UnityEngine_Object_o *x;
  System_String_array *pSVar19;
  UnityEngine_UI_Text_o *pUVar20;
  UI_CollapsibleToggleSection_o *__this_05;
  UnityEngine_UI_Button_o *arrowButton;
  System_Type_array *components;
  System_Type_o *pSVar21;
  long lVar22;
  UnityEngine_Font_o *value_03;
  undefined8 uVar23;
  UnityEngine_Transform_o *pUVar24;
  UI_CustomPopup_o *__this_06;
  UI_BasePanel_o *parent;
  uint value_04;
  uint uVar25;
  System_String_array **ppSVar26;
  Il2CppClass *pIVar27;
  System_String_o *pSVar28;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *setting_00;
  MethodInfo *extraout_RDX_01;
  System_String_array *style_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *player;
  MethodInfo *extraout_RDX_04;
  MethodInfo *team;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *title_00;
  MethodInfo *extraout_RDX_08;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 extraout_RDX_09;
  System_String_o *title_01;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *pMVar29;
  MethodInfo_24E7B40 **panel_00;
  uint uVar30;
  MethodInfo_24E7B40 *style_01;
  MethodInfo_24E7B40 *style_02;
  MethodInfo_255A020 *pMVar31;
  System_String_c *style_03;
  System_String_array **__this_07;
  UnityEngine_GameObject_o *pUVar32;
  uint uVar33;
  System_String_array *pSVar34;
  float elementWidth_00;
  float elementWidth_01;
  float fVar35;
  float extraout_XMM0_Da;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM3_Da;
  UnityEngine_Color_o UVar39;
  UnityEngine_UI_Toggle_o *pUStack_520;
  undefined1 auStack_4a8 [20];
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  System_String_o *pSStack_488;
  System_String_o *pSStack_480;
  System_String_o *pSStack_478;
  System_String_o *pSStack_470;
  System_String_o *pSStack_468;
  System_String_o *pSStack_460;
  System_String_o *pSStack_458;
  System_String_array *pSStack_450;
  System_String_array *pSStack_448;
  System_String_array *pSStack_440;
  System_String_array *pSStack_438;
  System_String_array *pSStack_430;
  System_String_array *pSStack_428;
  undefined4 uStack_420;
  float fStack_41c;
  System_String_array *pSStack_418;
  MethodInfo *pMStack_410;
  MethodInfo_24E7B40 *pMStack_408;
  System_String_array *pSStack_400;
  System_String_array *pSStack_3f8;
  MethodInfo *pMStack_3f0;
  MethodInfo_24E7B40 *pMStack_3e8;
  System_String_array *pSStack_3e0;
  System_String_array *pSStack_3d8;
  System_String_array *pSStack_3d0;
  System_String_array *pSStack_3c8;
  System_String_array *pSStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  System_String_o *pSStack_3a8;
  System_String_array *pSStack_398;
  System_String_array *pSStack_390;
  System_String_array *pSStack_388;
  undefined1 auStack_2a0 [20];
  float fStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  System_String_o *pSStack_280;
  System_String_o *pSStack_278;
  System_String_o *pSStack_270;
  System_String_o *pSStack_268;
  System_String_o *pSStack_260;
  System_String_o *pSStack_258;
  System_String_o *pSStack_250;
  MethodInfo *in_stack_fffffffffffffe20;
  UI_IconPickPopup_o *in_stack_fffffffffffffe28;
  System_String_o *pSStack_1d0;
  System_String_array *pSStack_1b8;
  UnityEngine_Events_UnityAction_o *in_stack_fffffffffffffea0;
  float in_stack_fffffffffffffea8;
  float in_stack_fffffffffffffeac;
  undefined1 local_88 [20];
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  System_String_o *local_48;
  System_String_o *pSStack_40;
  System_String_o *local_38;
  
  ppSVar26 = (System_String_array **)title;
  pSVar19 = (System_String_array *)colorPickPopup;
  pSVar15 = (System_String_array *)tooltip;
  fVar38 = elementHeight;
  if (g_data_057ae29b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Border/Image");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"ColorButton");
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae29b = '\x01';
  }
  (__this->fields)._colorPickPopup = colorPickPopup;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colorPickPopup);
  pSVar16 = (System_String_array *)0x0;
  pSVar12 = (System_String_array *)__this;
  pSVar5 = (System_String_array *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pSVar5 != (System_String_array *)0x0) {
    ppSVar26 = &"ColorButton";
    pSVar16 = "ColorButton";
    pSVar6 = (System_String_array *)
             UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pSVar5,(System_String_o *)"ColorButton",(MethodInfo *)0x0);
    pSVar12 = pSVar5;
    if (pSVar6 != (System_String_array *)0x0) {
      pSVar16 = (System_String_array *)0x0;
      pSVar5 = (System_String_array *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0);
      pSVar12 = pSVar6;
      if ((pSVar5 != (System_String_array *)0x0) &&
         (pSVar16 = MethodInfo_LayoutElement_GetComponent_LayoutElement, pSVar12 = pSVar5,
         pIVar7 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement),
         pIVar7 != (Il2CppObject *)0x0)) {
        ppSVar26 = (System_String_array **)pIVar7->klass;
        (*(code *)((System_String_array *)ppSVar26)->m_Items[0x6b])
                  (elementWidth,pIVar7,((System_String_array *)ppSVar26)->m_Items[0x6c]);
        pSVar16 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
        pSVar12 = pSVar5;
        pIVar7 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (pIVar7 != (Il2CppObject *)0x0) {
          ppSVar26 = (System_String_array **)pIVar7->klass;
          (*(code *)((System_String_array *)ppSVar26)->m_Items[0x6f])
                    (elementHeight,pIVar7,((System_String_array *)ppSVar26)->m_Items[0x70]);
          pSVar16 = MethodInfo_Button_GetComponent_Button;
          pSVar12 = pSVar5;
          pIVar7 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
          if (pIVar7 != (Il2CppObject *)0x0) {
            pIVar27 = pIVar7[0x10].klass;
            pSVar6 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            ppSVar26 = (System_String_array **)0x0;
            pSVar16 = (System_String_array *)__this;
            pSVar12 = pSVar6;
            UnityEngine_Events_UnityAction___ctor();
            if (pIVar27 != (Il2CppClass *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener
                        ((UnityEngine_Events_UnityEvent_o *)pIVar27,(UnityEngine_Events_UnityAction_o *)pSVar6
                         ,(MethodInfo *)0x0);
              pSVar16 = MethodInfo_Button_GetComponent_Button;
              pSVar12 = pSVar5;
              pUVar8 = (UnityEngine_UI_Selectable_o *)
                       UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
              if (style != (UI_ElementStyle_o *)0x0) {
                pSVar16 = (System_String_array *)(style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar12 = (System_String_array *)local_88;
                pSVar15 = (System_String_array *)0x0;
                ppSVar26 = (System_String_array **)"Icon";
                pSVar19 = "DefaultPanel";
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)pSVar12,(System_String_o *)pSVar16,"DefaultSetting",
                           (System_String_o *)"Icon",(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                fVar38 = (float)local_88._16_4_;
                in_XMM1_Db = fStack_74;
                in_XMM1_Dc = uStack_70;
                in_XMM1_Dd = uStack_6c;
                in_XMM2_Da = local_68;
                in_XMM3_Da = local_58;
                if (pUVar8 != (UnityEngine_UI_Selectable_o *)0x0) {
                  value_02.fields.m_NormalColor.fields.b = (float)local_88._8_4_;
                  value_02.fields.m_NormalColor.fields.a = (float)local_88._12_4_;
                  value_02.fields.m_NormalColor.fields.r = (float)local_88._0_4_;
                  value_02.fields.m_NormalColor.fields.g = (float)local_88._4_4_;
                  value_02.fields.m_HighlightedColor.fields.r = (float)local_88._16_4_;
                  value_02.fields.m_HighlightedColor.fields.g = fStack_74;
                  value_02.fields.m_HighlightedColor.fields.b = (float)uStack_70;
                  value_02.fields.m_HighlightedColor.fields.a = (float)uStack_6c;
                  value_02.fields.m_PressedColor.fields.r = local_68;
                  value_02.fields.m_PressedColor.fields.g = (float)uStack_64;
                  value_02.fields.m_PressedColor.fields.b = (float)uStack_60;
                  value_02.fields.m_PressedColor.fields.a = (float)uStack_5c;
                  value_02.fields.m_SelectedColor.fields.r = local_58;
                  value_02.fields.m_SelectedColor.fields.g = (float)uStack_54;
                  value_02.fields.m_SelectedColor.fields.b = (float)uStack_50;
                  value_02.fields.m_SelectedColor.fields.a = (float)uStack_4c;
                  value_02.fields.m_DisabledColor.fields._0_8_ = local_48;
                  value_02.fields.m_DisabledColor.fields._8_8_ = pSStack_40;
                  value_02.fields._80_8_ = local_38;
                  in_stack_fffffffffffffea8 = (float)local_88._16_4_;
                  in_stack_fffffffffffffeac = fStack_74;
                  UnityEngine_UI_Selectable__set_colors(pUVar8,value_02,(MethodInfo *)0x0);
                  pSVar16 = (System_String_array *)0x0;
                  pSVar6 = (System_String_array *)
                           UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pSVar5,(MethodInfo *)0x0);
                  pSVar12 = pSVar5;
                  fVar38 = (float)local_88._16_4_;
                  in_XMM1_Db = fStack_74;
                  in_XMM1_Dc = uStack_70;
                  in_XMM1_Dd = uStack_6c;
                  in_XMM2_Da = local_68;
                  in_XMM3_Da = local_58;
                  in_stack_fffffffffffffea0 = (UnityEngine_Events_UnityAction_o *)local_88._8_8_;
                  if (pSVar6 != (System_String_array *)0x0) {
                    ppSVar26 = &"Border/Image";
                    pSVar16 = "Border/Image";
                    pUVar9 = UnityEngine_Transform__Find
                                       ((UnityEngine_Transform_o *)pSVar6,(System_String_o *)"Border/Image",
                                        (MethodInfo *)0x0);
                    pSVar12 = pSVar6;
                    fVar38 = (float)local_88._16_4_;
                    in_XMM1_Db = fStack_74;
                    in_XMM1_Dc = uStack_70;
                    in_XMM1_Dd = uStack_6c;
                    in_XMM2_Da = local_68;
                    in_XMM3_Da = local_58;
                    in_stack_fffffffffffffea0 = (UnityEngine_Events_UnityAction_o *)local_88._8_8_;
                    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                      pUVar10 = (UnityEngine_UI_Image_o *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar9,MethodInfo_Image_GetComponent_Image);
                      (__this->fields)._image = pUVar10;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._image,pUVar10);
                      (__this->fields)._onChangeColor = onChangeColor;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._onChangeColor,onChangeColor);
                      UI_BaseSettingElement__Setup
                                ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                 (MethodInfo *)pSVar15);
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
  elementWidth_00 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar5 = (System_String_array *)ppSVar26;
  pMVar29 = extraout_RDX;
  pSVar6 = pSVar16;
  __this_07 = (System_String_array **)pSVar12;
  pSVar34 = pSVar19;
  pSVar13 = pSVar15;
  fVar35 = fVar38;
  if (g_data_057ae278 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    __this_07 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae278 = '\x01';
    pMVar29 = extraout_RDX_00;
  }
  if (pSVar16 != (System_String_array *)0x0) {
    pSVar6 = (System_String_array *)0x3;
    pSVar11 = (System_String_array *)
              UI_ElementFactory__CreateHorizontalGroup
                        ((UnityEngine_Transform_o *)pSVar12,*(float *)pSVar16->m_Items,3,pMVar29);
    __this_07 = (System_String_array **)pSVar12;
    if (pSVar11 != (System_String_array *)0x0) {
      pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar11,(MethodInfo *)0x0);
      pSVar5 = (System_String_array *)0x0;
      pSVar34 = (System_String_array *)0x3;
      pSStack_1b8 = (System_String_array *)
                    UI_ElementFactory__CreateDefaultLabel
                              (pUVar9,(UI_ElementStyle_o *)pSVar16,(System_String_o *)ppSVar26,0,3,
                               (MethodInfo *)pSVar13);
      uVar36 = *(undefined4 *)&pSVar16->bounds;
      uVar1 = *(undefined4 *)pSVar16->m_Items;
      iVar2 = pSVar16->max_length;
      pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      System_Object___ctor((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
      *(undefined4 *)&pSVar12->bounds = uVar36;
      *(undefined4 *)((long)&pSVar12->bounds + 4) = 0;
      *(undefined4 *)pSVar12->m_Items = uVar1;
      pSVar12->max_length = iVar2;
      il2cpp_runtime_helper_022b4080(&pSVar12->max_length);
      pSVar6 = (System_String_array *)0x0;
      __this_07 = (System_String_array **)pSVar11;
      pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar11,(MethodInfo *)0x0);
      if (extraout_RDX != (MethodInfo *)0x0) {
        UI_ElementFactory__CreateToggleSetting
                  (pUVar9,(UI_ElementStyle_o *)pSVar12,(Settings_BaseSetting_o *)extraout_RDX->invoker_method,
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),elementWidth_00,fVar38,
                   in_stack_fffffffffffffea0,in_stack_fffffffffffffe20);
        __this_07 = (System_String_array **)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pSVar11,(MethodInfo *)0x0);
        pSVar5 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        in_XMM1_Db = 0.0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        fVar35 = in_XMM3_Da;
        UI_ElementFactory__CreateColorSetting
                  ((UnityEngine_Transform_o *)__this_07,(UI_ElementStyle_o *)pSVar12,
                   (Settings_BaseSetting_o *)extraout_RDX->name,(System_String_o *)pSVar5,
                   (UI_ColorPickPopup_o *)pSVar19,(System_String_o *)pSVar15,in_XMM2_Da,in_XMM3_Da,
                   (UnityEngine_Events_UnityAction_o *)
                   CONCAT44(in_stack_fffffffffffffeac,in_stack_fffffffffffffea8),
                   (MethodInfo *)in_stack_fffffffffffffe28);
        pSVar6 = pSVar12;
        pSVar34 = pSVar19;
        pSVar13 = pSVar15;
        if ((pSStack_1b8 != (System_String_array *)0x0) &&
           (pSVar6 = MethodInfo_LayoutElement_GetComponent_LayoutElement, __this_07 = (System_String_array **)pSStack_1b8,
           pIVar7 = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pSStack_1b8,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement),
           pSVar34 = pSVar19, pSVar13 = pSVar15, pIVar7 != (Il2CppObject *)0x0)) {
          pSVar5 = (System_String_array *)pIVar7->klass;
          (*(code *)pSVar5->m_Items[0x6b])
                    (*(undefined4 *)((long)&pSVar16->bounds + 4),pIVar7,pSVar5->m_Items[0x6c]);
          if (0.0 < *(float *)((long)&pSVar16->bounds + 4)) {
            return;
          }
          pSVar6 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
          __this_07 = (System_String_array **)pSStack_1b8;
          pIVar7 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pSStack_1b8,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pSVar34 = pSVar19;
          pSVar13 = pSVar15;
          if (pIVar7 != (Il2CppObject *)0x0) {
            (*pIVar7->klass->vtable[0x24].methodPtr)(0xbf800000,pIVar7,pIVar7->klass->vtable[0x24].method);
            return;
          }
        }
      }
    }
  }
  elementWidth_01 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar15 = pSVar5;
  pMVar29 = setting_00;
  pSVar19 = pSVar34;
  pSVar12 = pSVar13;
  fVar37 = fVar35;
  if (g_data_057ae279 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IconPickSettingElement_AddComponent_IconPickSettingEleme);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ButtonSetting");
    g_data_057ae279 = '\x01';
    pMVar29 = extraout_RDX_01;
  }
  pSVar16 = "Prefabs/Elements/ButtonSetting";
  pSVar11 = (System_String_array *)
            UI_ElementFactory__InstantiateAndBind
                      ((UnityEngine_Transform_o *)__this_07,(System_String_o *)"Prefabs/Elements/ButtonSetting",pMVar29);
  if ((pSVar11 != (System_String_array *)0x0) &&
     (pSVar16 = MethodInfo_IconPickSettingElement_AddComponent_IconPickSettingEleme,
     __this_00 = (UI_IconPickSettingElement_o *)
                 UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)pSVar11,(MethodInfo_255A020 *)MethodInfo_IconPickSettingElement_AddComponent_IconPickSettingEleme),
     __this_07 = (System_String_array **)pSVar11, __this_00 != (UI_IconPickSettingElement_o *)0x0)) {
    pSStack_250 = (System_String_o *)0x438c859;
    UI_IconPickSettingElement__Setup
              (__this_00,(Settings_BaseSetting_o *)setting_00,(UI_ElementStyle_o *)pSVar6,
               (System_String_o *)pSVar5,pSVar34,pSVar13,
               (System_String_array *)CONCAT44(fVar38,elementWidth_00),in_stack_fffffffffffffe28,pSStack_1d0,
               elementWidth_01,fVar35,(UnityEngine_Events_UnityAction_o *)CONCAT44(in_XMM3_Da,in_XMM2_Da),
               (UI_TooltipPopup_o *)pSStack_1b8,(MethodInfo *)0x0);
    return;
  }
  fVar35 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar5 = pSVar15;
  pSVar6 = pSVar19;
  pSVar34 = pSVar12;
  fVar38 = fVar37;
  if (g_data_057ae298 == '\0') {
    pSStack_388 = (System_String_array *)0x438c8ca;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__4_0);
    pSStack_388 = (System_String_array *)0x438c8d6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pSStack_388 = (System_String_array *)0x438c8e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pSStack_388 = (System_String_array *)0x438c8ee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_388 = (System_String_array *)0x438c8fa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_388 = (System_String_array *)0x438c906;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStack_388 = (System_String_array *)0x438c912;
    il2cpp_runtime_helper_023445d0(&"TextColor");
    pSStack_388 = (System_String_array *)0x438c91e;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pSStack_388 = (System_String_array *)0x438c92a;
    il2cpp_runtime_helper_023445d0(&"Text");
    pSStack_388 = (System_String_array *)0x438c936;
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    pSStack_388 = (System_String_array *)0x438c942;
    il2cpp_runtime_helper_023445d0(&"Button");
    pSStack_388 = (System_String_array *)0x438c94e;
    il2cpp_runtime_helper_023445d0(&"Button/Text");
    pSStack_388 = (System_String_array *)0x438c95a;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae298 = '\x01';
  }
  uVar33 = (uint)pSVar6;
  uVar25 = (uint)pSVar5;
  pSVar5 = (System_String_array *)0x0;
  pSStack_388 = (System_String_array *)0x438c96b;
  panel_00 = (MethodInfo_24E7B40 **)__this_07;
  pSVar11 = (System_String_array *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
  ppSVar26 = (System_String_array **)pSVar16;
  pSVar6 = pSVar15;
  __this_01 = (System_String_array **)pSVar12;
  if (pSVar11 != (System_String_array *)0x0) {
    uVar25 = 0x55c2d28;
    pSStack_388 = (System_String_array *)0x438c988;
    pSVar5 = "Button";
    pUVar9 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pSVar11,(System_String_o *)"Button",(MethodInfo *)0x0);
    panel_00 = (MethodInfo_24E7B40 **)pSVar11;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pSStack_388 = (System_String_array *)0x438c99b;
      pSVar13 = (System_String_array *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
      pSVar5 = (System_String_array *)0x0;
      pSStack_388 = (System_String_array *)0x438c9a8;
      panel_00 = (MethodInfo_24E7B40 **)__this_07;
      pSVar11 = (System_String_array *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
      if (pSVar11 != (System_String_array *)0x0) {
        uVar25 = 0x55c2d48;
        pSStack_388 = (System_String_array *)0x438c9d4;
        pSVar5 = "Button/Text";
        pSVar14 = (System_String_array *)
                  UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pSVar11,(System_String_o *)"Button/Text",
                             (MethodInfo *)0x0);
        panel_00 = (MethodInfo_24E7B40 **)pSVar11;
        if (pSVar14 != (System_String_array *)0x0) {
          pSVar5 = (System_String_array *)0x0;
          pSStack_388 = (System_String_array *)0x438c9e7;
          __this_01 = (System_String_array **)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pSVar14,(MethodInfo *)0x0);
          fVar38 = 0.0;
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          pSVar6 = style_00;
          if (fVar35 <= 0.0) {
label_0438ca75:
            in_XMM1_Dd = 0;
            in_XMM1_Dc = 0;
            in_XMM1_Db = 0.0;
            fVar38 = 0.0;
            if (fVar37 <= 0.0) {
label_0438caf5:
              panel_00 = (MethodInfo_24E7B40 **)(((System_String_array *)__this_07)->m_Items + 4);
              ((System_String_array *)__this_07)->m_Items[4] = (System_String_o *)pSVar19;
              pSStack_388 = (System_String_array *)0x438cb07;
              pSVar5 = pSVar19;
              il2cpp_runtime_helper_022b4080();
              if (pSVar13 != (System_String_array *)0x0) {
                __this_01 = &MethodInfo_Button_GetComponent_Button;
                pSStack_388 = (System_String_array *)0x438cb22;
                pSVar5 = MethodInfo_Button_GetComponent_Button;
                panel_00 = (MethodInfo_24E7B40 **)pSVar13;
                pIVar7 = UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)pSVar13,(MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
                if (pIVar7 != (Il2CppObject *)0x0) {
                  pSVar19 = (System_String_array *)pIVar7[0x10].klass;
                  pSStack_388 = (System_String_array *)0x438cb41;
                  ppSVar26 = (System_String_array **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  uVar25 = 0;
                  pSStack_388 = (System_String_array *)0x438cb5b;
                  pSVar5 = (System_String_array *)__this_07;
                  panel_00 = (MethodInfo_24E7B40 **)ppSVar26;
                  UnityEngine_Events_UnityAction___ctor();
                  if (pSVar19 != (System_String_array *)0x0) {
                    pSStack_388 = (System_String_array *)0x438cb71;
                    UnityEngine_Events_UnityEvent__AddListener
                              ((UnityEngine_Events_UnityEvent_o *)pSVar19,
                               (UnityEngine_Events_UnityAction_o *)ppSVar26,(MethodInfo *)0x0);
                    pSStack_388 = (System_String_array *)0x438cb7c;
                    pSVar5 = MethodInfo_Button_GetComponent_Button;
                    panel_00 = (MethodInfo_24E7B40 **)pSVar13;
                    pSVar11 = (System_String_array *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)pSVar13,
                                         (MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
                    if (style_00 != (System_String_array *)0x0) {
                      ppSVar26 = (System_String_array **)style_00->max_length;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        pSStack_388 = (System_String_array *)0x438cba4;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      __this_01 = &"DefaultPanel";
                      panel_00 = (MethodInfo_24E7B40 **)auStack_2a0;
                      pSVar34 = (System_String_array *)0x0;
                      pSStack_388 = (System_String_array *)0x438cbd5;
                      pSVar28 = "";
                      pSVar5 = (System_String_array *)ppSVar26;
                      pSVar19 = "DefaultPanel";
                      UI_UIManager__GetThemeColorBlock
                                ((UnityEngine_UI_ColorBlock_o *)panel_00,(System_String_o *)ppSVar26,
                                 (System_String_o *)"DefaultButton","",(System_String_o *)"DefaultPanel",
                                 (MethodInfo *)0x0);
                      uVar33 = (uint)pSVar19;
                      uVar25 = (uint)pSVar28;
                      pSVar19 = pSVar11;
                      fVar38 = (float)auStack_2a0._16_4_;
                      in_XMM1_Db = fStack_28c;
                      in_XMM1_Dc = uStack_288;
                      in_XMM1_Dd = uStack_284;
                      if (pSVar11 != (System_String_array *)0x0) {
                        pSStack_388 = (System_String_array *)0x438cc95;
                        value_01.fields.m_NormalColor.fields.b = (float)auStack_2a0._8_4_;
                        value_01.fields.m_NormalColor.fields.a = (float)auStack_2a0._12_4_;
                        value_01.fields.m_NormalColor.fields.r = (float)auStack_2a0._0_4_;
                        value_01.fields.m_NormalColor.fields.g = (float)auStack_2a0._4_4_;
                        value_01.fields.m_HighlightedColor.fields.r = (float)auStack_2a0._16_4_;
                        value_01.fields.m_HighlightedColor.fields.g = fStack_28c;
                        value_01.fields.m_HighlightedColor.fields.b = (float)uStack_288;
                        value_01.fields.m_HighlightedColor.fields.a = (float)uStack_284;
                        value_01.fields.m_PressedColor.fields._0_8_ = pSStack_280;
                        value_01.fields.m_PressedColor.fields._8_8_ = pSStack_278;
                        value_01.fields.m_SelectedColor.fields._0_8_ = pSStack_270;
                        value_01.fields.m_SelectedColor.fields._8_8_ = pSStack_268;
                        value_01.fields.m_DisabledColor.fields._0_8_ = pSStack_260;
                        value_01.fields.m_DisabledColor.fields._8_8_ = pSStack_258;
                        value_01.fields._80_8_ = pSStack_250;
                        UnityEngine_UI_Selectable__set_colors
                                  ((UnityEngine_UI_Selectable_o *)pSVar11,value_01,(MethodInfo *)0x0);
                        pSVar5 = (System_String_array *)0x0;
                        pSStack_388 = (System_String_array *)0x438cc9f;
                        panel_00 = (MethodInfo_24E7B40 **)pSVar13;
                        pSVar11 = (System_String_array *)
                                  UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pSVar13,(MethodInfo *)0x0);
                        fVar38 = (float)auStack_2a0._16_4_;
                        in_XMM1_Db = fStack_28c;
                        in_XMM1_Dc = uStack_288;
                        in_XMM1_Dd = uStack_284;
                        if (pSVar11 != (System_String_array *)0x0) {
                          uVar25 = 0x55d44b0;
                          pSStack_388 = (System_String_array *)0x438ccbc;
                          pSVar5 = "Text";
                          pUVar9 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)pSVar11,
                                              (System_String_o *)"Text",(MethodInfo *)0x0);
                          panel_00 = (MethodInfo_24E7B40 **)pSVar11;
                          fVar38 = (float)auStack_2a0._16_4_;
                          in_XMM1_Db = fStack_28c;
                          in_XMM1_Dc = uStack_288;
                          in_XMM1_Dd = uStack_284;
                          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                            uVar25 = 0x559c9d0;
                            pSStack_388 = (System_String_array *)0x438ccd7;
                            pSVar5 = (System_String_array *)
                                     UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar9,MethodInfo_Text_GetComponent_Text);
                            pSVar19 = (System_String_array *)(((System_String_array *)__this_07)->m_Items + 3)
                            ;
                            ((System_String_array *)__this_07)->m_Items[3] = (System_String_o *)pSVar5;
                            pSStack_388 = (System_String_array *)0x438ccec;
                            il2cpp_runtime_helper_022b4080(pSVar19);
                            panel_00 = (MethodInfo_24E7B40 **)0x0;
                            fVar38 = (float)auStack_2a0._16_4_;
                            in_XMM1_Db = fStack_28c;
                            in_XMM1_Dc = uStack_288;
                            in_XMM1_Dd = uStack_284;
                            if ((UnityEngine_UI_Text_o *)((System_String_array *)__this_07)->m_Items[3] !=
                                (UnityEngine_UI_Text_o *)0x0) {
                              pSStack_388 = (System_String_array *)0x438cd01;
                              UnityEngine_UI_Text__set_fontSize
                                        ((UnityEngine_UI_Text_o *)
                                         ((System_String_array *)__this_07)->m_Items[3],
                                         *(int32_t *)
                                          &((UnityEngine_Events_UnityEvent_Fields *)&style_00->bounds)->
                                           m_Calls,(MethodInfo *)0x0);
                              pIVar27 = (pSVar19->obj).klass;
                              panel_00 = (MethodInfo_24E7B40 **)style_00->max_length;
                              uVar33 = 0;
                              pSStack_388 = (System_String_array *)0x438cd27;
                              pSVar19 = "DefaultPanel";
                              pSVar5 = "DefaultButton";
                              UVar39 = UI_UIManager__GetThemeColor
                                                 ((System_String_o *)panel_00,(System_String_o *)"DefaultButton",
                                                  "TextColor",(System_String_o *)"DefaultPanel",
                                                  (MethodInfo *)0x0);
                              uVar25 = (uint)pSVar19;
                              fVar38 = UVar39.fields.b;
                              in_XMM1_Db = UVar39.fields.a;
                              pSVar19 = (System_String_array *)0x0;
                              in_XMM1_Dc = uStack_288;
                              in_XMM1_Dd = uStack_284;
                              if (pIVar27 != (Il2CppClass *)0x0) {
                                pvVar3 = (pIVar27->_1).image;
                                pSStack_388 = (System_String_array *)0x438cd3f;
                                (**(code **)((long)pvVar3 + 0x2a8))
                                          (UVar39.fields.r,pIVar27,*(undefined8 *)((long)pvVar3 + 0x2b0));
                                pSStack_388 = (System_String_array *)0x438cd59;
                                UI_BaseSettingElement__Setup
                                          ((UI_BaseSettingElement_o *)__this_07,
                                           (Settings_BaseSetting_o *)pSVar16,(UI_ElementStyle_o *)style_00,
                                           (System_String_o *)pSVar15,(System_String_o *)pSVar12,
                                           (MethodInfo *)pSVar34);
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
              panel_00 = (MethodInfo_24E7B40 **)pSVar14;
              if (pSVar13 != (System_String_array *)0x0) {
                ppSVar26 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
                pSStack_388 = (System_String_array *)0x438ca9c;
                pSVar5 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                panel_00 = (MethodInfo_24E7B40 **)pSVar13;
                pSVar11 = (System_String_array *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar13,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pSVar11 != (System_String_array *)0x0) {
                  pIVar27 = (pSVar11->obj).klass;
                  pSVar5 = *(System_String_array **)
                            ((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 4) + 0x68);
                  pSStack_388 = (System_String_array *)0x438cabe;
                  (**(code **)((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 4) + 0x60))
                            (fVar37);
                  uVar25 = (uint)pIVar27;
                  panel_00 = (MethodInfo_24E7B40 **)pSVar11;
                  if ((System_String_array *)__this_01 != (System_String_array *)0x0) {
                    pSStack_388 = (System_String_array *)0x438cad3;
                    pSVar5 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    panel_00 = (MethodInfo_24E7B40 **)__this_01;
                    pIVar7 = UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)__this_01,
                                        (MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar7 != (Il2CppObject *)0x0) {
                      pIVar27 = pIVar7->klass;
                      pSStack_388 = (System_String_array *)0x438caf5;
                      (*pIVar27->vtable[0x26].methodPtr)(fVar37,pIVar7,pIVar27->vtable[0x26].method);
                      uVar25 = (uint)pIVar27;
                      goto label_0438caf5;
                    }
                  }
                }
              }
            }
          }
          else {
            panel_00 = (MethodInfo_24E7B40 **)pSVar14;
            if (pSVar13 != (System_String_array *)0x0) {
              ppSVar26 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
              pSStack_388 = (System_String_array *)0x438ca19;
              pSVar5 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
              panel_00 = (MethodInfo_24E7B40 **)pSVar13;
              pSVar11 = (System_String_array *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pSVar13,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pSVar11 != (System_String_array *)0x0) {
                pIVar27 = (pSVar11->obj).klass;
                pSVar5 = *(System_String_array **)
                          ((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 4) + 0x48);
                pSStack_388 = (System_String_array *)0x438ca3b;
                (**(code **)((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 4) + 0x40))
                          (fVar35);
                uVar25 = (uint)pIVar27;
                panel_00 = (MethodInfo_24E7B40 **)pSVar11;
                if ((System_String_array *)__this_01 != (System_String_array *)0x0) {
                  pSStack_388 = (System_String_array *)0x438ca50;
                  pSVar5 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                  panel_00 = (MethodInfo_24E7B40 **)__this_01;
                  pSVar14 = (System_String_array *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)__this_01,
                                       (MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pSVar14 != (System_String_array *)0x0) {
                    pIVar27 = (pSVar14->obj).klass;
                    pSVar5 = *(System_String_array **)
                              ((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 4) + 0x48);
                    pSStack_388 = (System_String_array *)0x438ca72;
                    (**(code **)((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 4) + 0x40))
                              (fVar35);
                    uVar25 = (uint)pIVar27;
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
  pSStack_388 = (System_String_array *)UI_ElementFactory__CreateHorizontalLine;
  pSStack_3a8 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pMVar29 = extraout_RDX_02;
  fStack_3b8 = fVar38;
  fStack_3b4 = in_XMM1_Db;
  uStack_3b0 = in_XMM1_Dc;
  uStack_3ac = in_XMM1_Dd;
  pSStack_398 = pSVar19;
  pSStack_390 = pSVar13;
  pSStack_388 = (System_String_array *)__this_01;
  if (g_data_057ae27c == '\0') {
    pSStack_3c0 = (System_String_array *)0x438cd9d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pSStack_3c0 = (System_String_array *)0x438cda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_3c0 = (System_String_array *)0x438cdb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLineScaler_AddComponent_HorizontalLineScaler);
    pSStack_3c0 = (System_String_array *)0x438cdc1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_3c0 = (System_String_array *)0x438cdcd;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pSStack_3c0 = (System_String_array *)0x438cdd9;
    il2cpp_runtime_helper_023445d0(&"LineColor");
    pSStack_3c0 = (System_String_array *)0x438cde5;
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/HorizontalLine");
    pSStack_3c0 = (System_String_array *)0x438cdf1;
    il2cpp_runtime_helper_023445d0(&"LineImage");
    pSStack_3c0 = (System_String_array *)0x438cdfd;
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae27c = '\x01';
    pMVar29 = extraout_RDX_03;
  }
  pSStack_3c0 = (System_String_array *)0x438ce16;
  style_01 = "Prefabs/Elements/HorizontalLine";
  pSVar19 = (System_String_array *)panel_00;
  pSVar15 = (System_String_array *)
            UI_ElementFactory__InstantiateAndBind
                      ((UnityEngine_Transform_o *)panel_00,(System_String_o *)"Prefabs/Elements/HorizontalLine",pMVar29);
  if (pSVar15 != (System_String_array *)0x0) {
    style_01 = (MethodInfo_24E7B40 *)0x0;
    pSStack_3c0 = (System_String_array *)0x438ce2c;
    pSVar19 = pSVar15;
    pSVar12 = (System_String_array *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
    __this_01 = (System_String_array **)pSVar15;
    if (pSVar12 != (System_String_array *)0x0) {
      panel_00 = &"LineImage";
      pSStack_3c0 = (System_String_array *)0x438ce49;
      style_01 = "LineImage";
      pSVar16 = (System_String_array *)
                UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pSVar12,(System_String_o *)"LineImage",
                           (MethodInfo *)0x0);
      pSVar19 = pSVar12;
      if (pSVar16 != (System_String_array *)0x0) {
        uVar25 = 0x559c920;
        pSStack_3c0 = (System_String_array *)0x438ce64;
        style_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
        pUVar17 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar16,MethodInfo_RectTransform_GetComponent_RectTransform)
        ;
        pSVar19 = pSVar16;
        if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
          pSStack_3c0 = (System_String_array *)0x438ce80;
          value.fields.y = fStack_3b8;
          value.fields.x = pSStack_3a8._0_4_;
          UnityEngine_RectTransform__set_sizeDelta(pUVar17,value,(MethodInfo *)0x0);
          style_01 = (MethodInfo_24E7B40 *)0x0;
          pSStack_3c0 = (System_String_array *)0x438ce8a;
          pSVar19 = pSVar15;
          pSVar12 = (System_String_array *)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
          if (pSVar12 != (System_String_array *)0x0) {
            pSStack_3c0 = (System_String_array *)0x438cea0;
            style_01 = "LineImage";
            pSVar16 = (System_String_array *)
                      UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pSVar12,(System_String_o *)"LineImage",
                                 (MethodInfo *)0x0);
            pSVar19 = pSVar12;
            if (pSVar16 != (System_String_array *)0x0) {
              style_01 = (MethodInfo_24E7B40 *)0x0;
              pSStack_3c0 = (System_String_array *)0x438ceb3;
              pUVar18 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
              pSVar19 = pSVar16;
              if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                uVar25 = 0x55a16b0;
                pSStack_3c0 = (System_String_array *)0x438cece;
                UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_HorizontalLineScaler_AddComponent_HorizontalLineScaler);
                style_01 = (MethodInfo_24E7B40 *)0x0;
                pSStack_3c0 = (System_String_array *)0x438ced8;
                pSVar19 = pSVar15;
                pSVar15 = (System_String_array *)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar15,(MethodInfo *)0x0);
                if (pSVar15 != (System_String_array *)0x0) {
                  pSStack_3c0 = (System_String_array *)0x438ceee;
                  style_01 = "LineImage";
                  pSVar12 = (System_String_array *)
                            UnityEngine_Transform__Find
                                      ((UnityEngine_Transform_o *)pSVar15,(System_String_o *)"LineImage",
                                       (MethodInfo *)0x0);
                  pSVar19 = pSVar15;
                  if (pSVar12 != (System_String_array *)0x0) {
                    uVar25 = 0x559c818;
                    pSStack_3c0 = (System_String_array *)0x438cf09;
                    style_01 = MethodInfo_Image_GetComponent_Image;
                    pIVar7 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pSVar12,MethodInfo_Image_GetComponent_Image);
                    pSVar19 = pSVar12;
                    if (pSVar5 != (System_String_array *)0x0) {
                      pSVar5 = (System_String_array *)pSVar5->max_length;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        pSStack_3c0 = (System_String_array *)0x438cf2d;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      uVar33 = 0;
                      pSStack_3c0 = (System_String_array *)0x438cf56;
                      pSVar15 = "DefaultPanel";
                      style_01 = "MainBody";
                      pSVar19 = pSVar5;
                      UVar39 = UI_UIManager__GetThemeColor
                                         ((System_String_o *)pSVar5,(System_String_o *)"MainBody",
                                          "LineColor",(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                      uVar25 = (uint)pSVar15;
                      fVar38 = UVar39.fields.b;
                      panel_00 = (MethodInfo_24E7B40 **)0x0;
                      if (pIVar7 != (Il2CppObject *)0x0) {
                        pSStack_3c0 = (System_String_array *)0x438cf6e;
                        (*pIVar7->klass->vtable[0x17].methodPtr)
                                  (UVar39.fields.r,pIVar7,pIVar7->klass->vtable[0x17].method);
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
  pSStack_3c0 = (System_String_array *)UI_ElementFactory__CreatePlayerKDRRow;
  il2cpp_runtime_helper_022b2c90();
  pMVar29 = player;
  pSStack_3e0 = (System_String_array *)panel_00;
  pSStack_3d8 = (System_String_array *)__this_07;
  pSStack_3d0 = pSVar6;
  pSStack_3c8 = pSVar5;
  pSStack_3c0 = (System_String_array *)__this_01;
  if (g_data_057ae27e == '\0') {
    pMStack_3e8 = (MethodInfo_24E7B40 *)0x438cfa7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KDRPanel_GetComponent_KDRPanel);
    pMStack_3e8 = (MethodInfo_24E7B40 *)0x438cfb3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow);
    g_data_057ae27e = '\x01';
    pMVar29 = extraout_RDX_04;
  }
  style_02 = (MethodInfo_24E7B40 *)0x3;
  pMStack_3e8 = (MethodInfo_24E7B40 *)0x438cfcf;
  pSVar15 = pSVar19;
  pSVar12 = (System_String_array *)
            UI_ElementFactory__CreateHorizontalGroup((UnityEngine_Transform_o *)pSVar19,10.0,3,pMVar29);
  if (pSVar12 != (System_String_array *)0x0) {
    pMStack_3e8 = (MethodInfo_24E7B40 *)0x438cfe9;
    style_02 = MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow;
    pSVar15 = pSVar12;
    __this_02 = (UI_PlayerKDRRow_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo_255A020 *)MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow);
    pSVar6 = pSVar12;
    if (pSVar19 != (System_String_array *)0x0) {
      pMStack_3e8 = (MethodInfo_24E7B40 *)0x438d003;
      style_02 = MethodInfo_KDRPanel_GetComponent_KDRPanel;
      pSVar15 = pSVar19;
      panel = (UI_KDRPanel_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar19,MethodInfo_KDRPanel_GetComponent_KDRPanel);
      panel_00 = (MethodInfo_24E7B40 **)0x0;
      if (__this_02 != (UI_PlayerKDRRow_o *)0x0) {
        pMStack_3e8 = (MethodInfo_24E7B40 *)0x438d01c;
        UI_PlayerKDRRow__Setup
                  (__this_02,(UI_ElementStyle_o *)style_01,(Photon_Realtime_Player_o *)player,panel,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  pMStack_3e8 = (MethodInfo_24E7B40 *)0x438d02e;
  il2cpp_runtime_helper_022b2c90();
  pMVar29 = team;
  pSStack_3f8 = (System_String_array *)panel_00;
  pMStack_3f0 = player;
  pMStack_3e8 = style_01;
  if (g_data_057ae27f == '\0') {
    pSStack_400 = (System_String_array *)0x438d053;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow);
    g_data_057ae27f = '\x01';
    pMVar29 = extraout_RDX_05;
  }
  uVar30 = 3;
  pSStack_400 = (System_String_array *)0x438d06f;
  pSVar12 = pSVar15;
  pSVar16 = (System_String_array *)
            UI_ElementFactory__CreateHorizontalGroup((UnityEngine_Transform_o *)pSVar15,10.0,3,pMVar29);
  if (pSVar16 != (System_String_array *)0x0) {
    pSStack_400 = (System_String_array *)0x438d089;
    pMVar31 = MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow;
    pSVar12 = pSVar16;
    __this_03 = (UI_TeamKDRRow_o *)
                UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar16,MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow)
    ;
    uVar30 = (uint)pMVar31;
    pSVar15 = pSVar16;
    if (__this_03 != (UI_TeamKDRRow_o *)0x0) {
      pSStack_400 = (System_String_array *)0x438d09e;
      UI_TeamKDRRow__Setup(__this_03,(UI_ElementStyle_o *)style_02,(System_String_o *)team,(MethodInfo *)0x0);
      return;
    }
  }
  pSStack_400 = (System_String_array *)0x438d0ac;
  uStack_420 = il2cpp_runtime_helper_022b2c90();
  pSVar16 = (System_String_array *)(ulong)uVar30;
  pMVar29 = extraout_RDX_06;
  pSStack_418 = pSVar15;
  pMStack_410 = team;
  pMStack_408 = style_02;
  pSStack_400 = (System_String_array *)ppSVar26;
  fStack_41c = extraout_XMM0_Da;
  if (g_data_057ae280 == '\0') {
    pSStack_428 = (System_String_array *)0x438d0d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    pSStack_428 = (System_String_array *)0x438d0e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_428 = (System_String_array *)0x438d0f0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    pSStack_428 = (System_String_array *)0x438d0fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_428 = (System_String_array *)0x438d108;
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/VerticalGroup");
    g_data_057ae280 = '\x01';
    pMVar29 = extraout_RDX_07;
  }
  pSStack_428 = (System_String_array *)0x438d121;
  pSVar5 = "Prefabs/Elements/VerticalGroup";
  pSVar13 = pSVar12;
  pSVar11 = (System_String_array *)
            UI_ElementFactory__InstantiateAndBind
                      ((UnityEngine_Transform_o *)pSVar12,(System_String_o *)"Prefabs/Elements/VerticalGroup",pMVar29);
  if (pSVar11 != (System_String_array *)0x0) {
    ppSVar26 = &MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
    pSStack_428 = (System_String_array *)0x438d140;
    pSVar5 = MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
    pSVar13 = pSVar11;
    __this_04 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pSVar11,(MethodInfo_255A0F0 *)MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    pSVar15 = pSVar11;
    if (__this_04 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      pSStack_428 = (System_String_array *)0x438d159;
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_04,fStack_41c,(MethodInfo *)0x0);
      pSStack_428 = (System_String_array *)0x438d165;
      pSVar5 = MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup;
      pSVar13 = pSVar11;
      pSVar14 = (System_String_array *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pSVar11,(MethodInfo_255A0F0 *)MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      if (pSVar14 != (System_String_array *)0x0) {
        pSStack_428 = (System_String_array *)0x438d17b;
        pSVar5 = pSVar16;
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pSVar14,uVar30,(MethodInfo *)0x0);
        pSVar13 = pSVar14;
        if (pSVar12 != (System_String_array *)0x0) {
          pSStack_428 = (System_String_array *)0x438d192;
          ppSVar26 = (System_String_array **)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pSVar12,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pSStack_428 = (System_String_array *)0x438d1ad;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_428 = (System_String_array *)0x438d1b9;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)ppSVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          pSStack_428 = (System_String_array *)0x438d1cf;
          pSVar5 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
          pSVar13 = pSVar11;
          pIVar7 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pSVar11,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar7 != (Il2CppObject *)0x0) {
            pSStack_428 = (System_String_array *)0x438d1ea;
            (*pIVar7->klass->vtable[0x28].methodPtr)(0,pIVar7,pIVar7->klass->vtable[0x28].method);
            return;
          }
        }
      }
    }
  }
  pSStack_428 = (System_String_array *)0x438d1fd;
  il2cpp_runtime_helper_022b2c90();
  pMVar29 = title_00;
  pSVar11 = pSVar34;
  uVar30 = uVar33;
  value_04 = uVar25;
  pSStack_450 = pSVar15;
  pSStack_448 = pSVar19;
  pSStack_440 = pSVar6;
  pSStack_438 = pSVar12;
  pSStack_430 = pSVar16;
  pSStack_428 = (System_String_array *)ppSVar26;
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
    pMVar29 = extraout_RDX_08;
  }
  pSVar15 = "Prefabs/Elements/HorizontalGroup";
  pSVar19 = pSVar13;
  pSVar12 = (System_String_array *)
            UI_ElementFactory__InstantiateAndBind
                      ((UnityEngine_Transform_o *)pSVar13,(System_String_o *)"Prefabs/Elements/HorizontalGroup",pMVar29);
  if (pSVar12 != (System_String_array *)0x0) {
    pSVar15 = MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup;
    pSVar19 = pSVar12;
    pSVar16 = (System_String_array *)
              UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo_255A0F0 *)MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    if (pSVar16 != (System_String_array *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pSVar16,6.0,(MethodInfo *)0x0);
      pSVar15 = (System_String_array *)0x3;
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pSVar16,3,(MethodInfo *)0x0);
      pSVar19 = pSVar16;
      if (pSVar13 != (System_String_array *)0x0) {
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar13,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar15 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
          pSVar19 = pSVar12;
          pIVar7 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar7 == (Il2CppObject *)0x0) goto label_0438d869;
          (*pIVar7->klass->vtable[0x28].methodPtr)(0,pIVar7);
        }
        pSVar19 = (System_String_array *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0)
        ;
        value_04 = 0x55d0158;
        pSVar15 = "Prefabs/Elements/ToggleSetting";
        pSVar16 = (System_String_array *)
                  UI_ElementFactory__InstantiateAndBind
                            ((UnityEngine_Transform_o *)pSVar19,(System_String_o *)"Prefabs/Elements/ToggleSetting",method_00);
        if (pSVar16 != (System_String_array *)0x0) {
          pSVar15 = (System_String_array *)0x0;
          pSVar19 = pSVar16;
          pUVar9 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pSVar16,(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            value_04 = 0x55d6488;
            pSVar6 = (System_String_array *)UnityEngine_Transform__Find(pUVar9,"Toggle",(MethodInfo *)0x0)
            ;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              pUStack_520 = (UnityEngine_UI_Toggle_o *)
                            UnityEngine_GameObject__GetComponentInChildren_object_
                                      ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Toggle_GetComponentInChildren_Toggle);
              pSVar6 = (System_String_array *)
                       UnityEngine_GameObject__GetComponentInChildren_object_
                                 ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Text_GetComponentInChildren_Text);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar15 = (System_String_array *)0x0;
              pSVar19 = pSVar6;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar4 != '\0') {
                if (pSVar6 == (System_String_array *)0x0) goto label_0438d869;
                pIVar27 = (pSVar6->obj).klass;
                (**(code **)((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 9) + 0x30))
                          (pSVar6,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                           *(undefined8 *)
                            ((long)((UnityEngine_Events_UnityEvent_VTable *)pIVar27->vtable + 9) + 0x38));
              }
              pIVar7 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)pSVar16,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar7 == (Il2CppObject *)0x0) {
                pSVar15 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
                pIVar7 = UnityEngine_GameObject__AddComponent_object_
                                   ((UnityEngine_GameObject_o *)pSVar16,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
                pSVar19 = pSVar16;
                if (pIVar7 == (Il2CppObject *)0x0) goto label_0438d869;
              }
              (*pIVar7->klass->vtable[0x24].methodPtr)(0x41b00000,pIVar7,pIVar7->klass->vtable[0x24].method);
              (*pIVar7->klass->vtable[0x20].methodPtr)(0x41b00000,pIVar7);
label_0438d661:
              pSVar19 = (System_String_array *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
              value_04 = 0x55d0140;
              pSVar15 = "Prefabs/Elements/TextButton";
              pSVar16 = (System_String_array *)
                        UI_ElementFactory__InstantiateAndBind
                                  ((UnityEngine_Transform_o *)pSVar19,(System_String_o *)"Prefabs/Elements/TextButton",
                                   method_01);
              if (pSVar16 != (System_String_array *)0x0) {
                pSVar15 = MethodInfo_Text_GetComponent_Text;
                pSVar19 = pSVar16;
                pUVar20 = (UnityEngine_UI_Text_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar16,(MethodInfo_255A0F0 *)MethodInfo_Text_GetComponent_Text);
                if ((pSVar5 != (System_String_array *)0x0) && (pUVar20 != (UnityEngine_UI_Text_o *)0x0)) {
                  UnityEngine_UI_Text__set_fontSize(pUVar20,*(int32_t *)&pSVar5->bounds,(MethodInfo *)0x0);
                  UnityEngine_UI_Text__set_fontStyle(pUVar20,1,(MethodInfo *)0x0);
                  pUVar8 = (UnityEngine_UI_Selectable_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pSVar16,(MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
                  pSVar15 = (System_String_array *)pSVar5->max_length;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar19 = (System_String_array *)auStack_4a8;
                  pSVar11 = (System_String_array *)0x0;
                  pSVar28 = "";
                  pSVar5 = "DefaultPanel";
                  UI_UIManager__GetThemeColorBlock
                            ((UnityEngine_UI_ColorBlock_o *)pSVar19,(System_String_o *)pSVar15,"TextButton",
                             "",(System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                  value_04 = (uint)pSVar28;
                  uVar30 = (uint)pSVar5;
                  fVar38 = (float)auStack_4a8._16_4_;
                  if (pUVar8 != (UnityEngine_UI_Selectable_o *)0x0) {
                    value_00.fields.m_NormalColor.fields.b = (float)auStack_4a8._8_4_;
                    value_00.fields.m_NormalColor.fields.a = (float)auStack_4a8._12_4_;
                    value_00.fields.m_NormalColor.fields.r = (float)auStack_4a8._0_4_;
                    value_00.fields.m_NormalColor.fields.g = (float)auStack_4a8._4_4_;
                    value_00.fields.m_HighlightedColor.fields.r = (float)auStack_4a8._16_4_;
                    value_00.fields.m_HighlightedColor.fields.g = (float)uStack_494;
                    value_00.fields.m_HighlightedColor.fields.b = (float)uStack_490;
                    value_00.fields.m_HighlightedColor.fields.a = (float)uStack_48c;
                    value_00.fields.m_PressedColor.fields._0_8_ = pSStack_488;
                    value_00.fields.m_PressedColor.fields._8_8_ = pSStack_480;
                    value_00.fields.m_SelectedColor.fields._0_8_ = pSStack_478;
                    value_00.fields.m_SelectedColor.fields._8_8_ = pSStack_470;
                    value_00.fields.m_DisabledColor.fields._0_8_ = pSStack_468;
                    value_00.fields.m_DisabledColor.fields._8_8_ = pSStack_460;
                    value_00.fields._80_8_ = pSStack_458;
                    fVar35 = (float)auStack_4a8._16_4_;
                    UnityEngine_UI_Selectable__set_colors(pUVar8,value_00,(MethodInfo *)0x0);
                    __this_05 = (UI_CollapsibleToggleSection_o *)
                                UnityEngine_GameObject__AddComponent_object_
                                          ((UnityEngine_GameObject_o *)pSVar12,MethodInfo_CollapsibleToggleSection_AddComponent_CollapsibleToggleS);
                    pSVar15 = MethodInfo_Button_GetComponent_Button;
                    arrowButton = (UnityEngine_UI_Button_o *)
                                  UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)pSVar16,
                                             (MethodInfo_255A0F0 *)MethodInfo_Button_GetComponent_Button);
                    pSVar19 = pSVar16;
                    fVar38 = (float)auStack_4a8._16_4_;
                    if (__this_05 != (UI_CollapsibleToggleSection_o *)0x0) {
                      UI_CollapsibleToggleSection__Setup
                                (__this_05,pUVar20,arrowButton,pUStack_520,(System_String_o *)title_00,
                                 uVar25 & 0xff,uVar33 & 0xff,(System_Action_bool__o *)pSVar34,
                                 (MethodInfo *)CONCAT44(uStack_494,fVar35));
                      return;
                    }
                  }
                }
              }
            }
            else {
              pSVar15 = (System_String_array *)0x0;
              pSVar19 = pSVar12;
              pUVar9 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pSVar12,(MethodInfo *)0x0);
              if (pSVar6 != (System_String_array *)0x0) {
                value_04 = 0;
                UnityEngine_Transform__SetParent_4e09e30
                          ((UnityEngine_Transform_o *)pSVar6,pUVar9,0,(MethodInfo *)0x0);
                UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)pSVar6,0,(MethodInfo *)0x0);
                pIVar7 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pSVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar7 != (Il2CppObject *)0x0) {
label_0438d4fe:
                  (*pIVar7->klass->vtable[0x24].methodPtr)
                            (0x41b00000,pIVar7,pIVar7->klass->vtable[0x24].method);
                  (*pIVar7->klass->vtable[0x20].methodPtr)
                            (0x41b00000,pIVar7,pIVar7->klass->vtable[0x20].method);
                  pUStack_520 = (UnityEngine_UI_Toggle_o *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pSVar6,MethodInfo_Toggle_GetComponent_Toggle);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar16,(MethodInfo *)0x0);
                  goto label_0438d661;
                }
                pSVar15 = (System_String_array *)0x0;
                pSVar19 = pSVar6;
                pSVar13 = (System_String_array *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0);
                if (pSVar13 != (System_String_array *)0x0) {
                  value_04 = 0x55a1740;
                  pSVar15 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
                  pIVar7 = UnityEngine_GameObject__AddComponent_object_
                                     ((UnityEngine_GameObject_o *)pSVar13,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
                  pSVar19 = pSVar13;
                  if (pIVar7 != (Il2CppObject *)0x0) goto label_0438d4fe;
                }
              }
            }
          }
        }
      }
    }
  }
label_0438d869:
  uVar36 = il2cpp_runtime_helper_022b2c90();
  pSVar12 = pSVar11;
  fVar35 = fVar38;
  uVar25 = value_04;
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
  pSVar21 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pSVar16 = pSVar15;
  if (components == (System_Type_array *)0x0) {
label_0438dc68:
    il2cpp_runtime_helper_022b2c90();
label_0438dc6d:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar21 == (System_Type_o *)0x0) {
label_0438d989:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar21;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSVar21 = System_Type__GetTypeFromHandle(TypeRef_Text,(MethodInfo *)0x0);
        if (pSVar21 != (System_Type_o *)0x0) {
          lVar22 = il2cpp_runtime_helper_023051f0(pSVar21);
          if (lVar22 == 0) goto label_0438dc72;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar21;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1,pSVar21);
          pUVar18 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          uVar25 = 0;
          UnityEngine_GameObject___ctor_4dfc440(pUVar18,"OverlayLabel",components,(MethodInfo *)0x0);
          if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
            pUVar9 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              uVar25 = 0;
              UnityEngine_Transform__SetParent_4e09e30
                        (pUVar9,(UnityEngine_Transform_o *)pSVar19,0,(MethodInfo *)0x0);
              pSVar16 = (System_String_array *)
                        UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
              if ((pSVar16 != (System_String_array *)0x0) &&
                 (style_03 = TypeInfo_RectTransform, (pSVar16->obj).klass != (Il2CppClass *)TypeInfo_RectTransform))
              goto label_0438dc81;
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              if (pSVar16 != (System_String_array *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          ((UnityEngine_RectTransform_o *)pSVar16,
                           (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                if (g_data_057a9c86 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a9c86 = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          ((UnityEngine_RectTransform_o *)pSVar16,
                           (UnityEngine_Vector2_o)
                           *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                           (MethodInfo *)0x0);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMin
                          ((UnityEngine_RectTransform_o *)pSVar16,
                           (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                UnityEngine_RectTransform__set_offsetMax
                          ((UnityEngine_RectTransform_o *)pSVar16,
                           (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                pSVar19 = (System_String_array *)
                          UnityEngine_GameObject__GetComponent_object_
                                    (pUVar18,(MethodInfo_255A0F0 *)MethodInfo_Text_GetComponent_Text);
                if (pSVar19 != (System_String_array *)0x0) {
                  pIVar27 = (pSVar19->obj).klass;
                  (*pIVar27->vtable[0x4b].methodPtr)(pSVar19,extraout_RDX_09,pIVar27->vtable[0x4b].method);
                  UnityEngine_UI_Text__set_alignment
                            ((UnityEngine_UI_Text_o *)pSVar19,value_04,(MethodInfo *)0x0);
                  (*((pSVar19->obj).klass)->vtable[0x17].methodPtr)(uVar36,pSVar19);
                  pIVar27 = (pSVar19->obj).klass;
                  (*pIVar27->vtable[0x19].methodPtr)(pSVar19,0,pIVar27->vtable[0x19].method);
                  fVar35 = fVar38;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    fVar35 = fVar38;
                  }
                  value_03 = (UnityEngine_Font_o *)0x0;
                  bVar4 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar4 == '\0') {
label_0438dc2e:
                    UnityEngine_UI_Text__set_font((UnityEngine_UI_Text_o *)pSVar19,value_03,(MethodInfo *)0x0)
                    ;
                    UnityEngine_UI_Text__set_fontSize
                              ((UnityEngine_UI_Text_o *)pSVar19,(int32_t)pSVar11,(MethodInfo *)0x0);
                    UnityEngine_UI_Text__set_fontStyle
                              ((UnityEngine_UI_Text_o *)pSVar19,uVar30,(MethodInfo *)0x0);
                    return;
                  }
                  pSVar16 = pSVar19;
                  if (pSVar15 != (System_String_array *)0x0) {
                    pUVar20 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Component__GetComponentInChildren_object__24e7d50
                                        ((UnityEngine_Component_o *)pSVar15,MethodInfo_Text_GetComponentInChildren_Text);
                    if (pUVar20 == (UnityEngine_UI_Text_o *)0x0) {
                      value_03 = (UnityEngine_Font_o *)0x0;
                    }
                    else {
                      value_03 = UnityEngine_UI_Text__get_font(pUVar20,(MethodInfo *)0x0);
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
    lVar22 = il2cpp_runtime_helper_023051f0(pSVar21);
    if (lVar22 != 0) goto label_0438d989;
  }
label_0438dc72:
  uVar23 = il2cpp_runtime_helper_0231b270();
  style_03 = (System_String_c *)0x0;
  il2cpp_runtime_helper_022b2b10(uVar23);
label_0438dc81:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae284 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae284 = '\x01';
  }
  pUVar24 = (UnityEngine_Transform_o *)
            UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pSVar16,(UI_ElementStyle_o *)style_03,title_01,uVar25,4,
                       (MethodInfo *)pSVar12);
  pUVar9 = (UnityEngine_Transform_o *)0x0;
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
    style_03 = MethodInfo_RectTransform_GetComponent_RectTransform;
    pUVar9 = pUVar24;
    pUVar17 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pUVar24,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__get_sizeDelta(pUVar17,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar24,(MethodInfo *)0x0);
      return;
    }
  }
  fVar38 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar29 = extraout_RDX_10;
  if (g_data_057ae285 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePanel_GetComponent_BasePanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_AddComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/HeadedPanel");
    g_data_057ae285 = '\x01';
    pMVar29 = extraout_RDX_11;
  }
  pUVar24 = pUVar9;
  pUVar18 = UI_ElementFactory__InstantiateAndBind(pUVar9,"Prefabs/Panels/HeadedPanel",pMVar29);
  uVar36 = SUB84(pUVar24,0);
  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
    pUVar32 = pUVar18;
    __this_06 = (UI_CustomPopup_o *)UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_CustomPopup_AddComponent_CustomPopup);
    uVar36 = SUB84(pUVar32,0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      parent = (UI_BasePanel_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_BasePanel_GetComponent_BasePanel);
      uVar36 = SUB84(pUVar9,0);
      if (__this_06 != (UI_CustomPopup_o *)0x0) {
        UI_CustomPopup__Setup(__this_06,parent,(System_String_o *)style_03,fVar38,fVar35,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(pUVar18,(uint)extraout_RDX_10 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  switch(uVar36) {
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


// UI.ColorSettingElement$$OnButtonClicked
// il2cpp: void UI_ColorSettingElement__OnButtonClicked (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x438ef50

void UI_ColorSettingElement__OnButtonClicked(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  Settings_IntSetting_o *pSVar2;
  UI_ColorPickPopup_o *__this_00;
  Utility_Color255_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_01;
  byte extraout_DL;
  MethodInfo *method_00;
  byte bVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *pMVar8;
  UI_ColorPickPopup_o *pUVar9;
  Settings_ColorSetting_o *pSVar10;
  Utility_Color255_o *pUVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_o rgbColor;
  float fStack_34;
  
  if (g_data_057ae29c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    g_data_057ae29c = '\x01';
  }
  __this_00 = (__this->fields)._colorPickPopup;
  pSVar10 = (Settings_ColorSetting_o *)0x0;
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    pSVar10 = (Settings_ColorSetting_o *)(__this->fields)._setting;
    pUVar6 = (__this->fields)._image;
    pUVar7 = (__this->fields)._onChangeColor;
    if (pSVar10 == (Settings_ColorSetting_o *)0x0) {
UI_ColorPickPopup__Show:
      if (g_data_057ae0e7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
        g_data_057ae0e7 = '\x01';
      }
      bVar5 = 0;
      pUVar9 = __this_00;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pMVar8 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        UI_BasePopup__Show((UI_BasePopup_o *)__this_00,pMVar8);
        (__this_00->fields)._setting = pSVar10;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._setting,pSVar10);
        pUVar9 = (UI_ColorPickPopup_o *)&(__this_00->fields)._image;
        (__this_00->fields)._image = pUVar6;
        il2cpp_runtime_helper_022b4080();
        bVar5 = (byte)pUVar6;
        if ((pSVar10 != (Settings_ColorSetting_o *)0x0) &&
           (pSVar2 = (__this_00->fields)._alpha, pSVar2 != (Settings_IntSetting_o *)0x0)) {
          (pSVar2->fields).MinValue = (pSVar10->fields).MinAlpha;
          (__this_00->fields)._onChangeColor = pUVar7;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields)._onChangeColor);
          bVar5 = (byte)pUVar7;
          pUVar11 = (pSVar10->fields)._value;
          pUVar9 = (UI_ColorPickPopup_o *)0x0;
          if (pUVar11 != (Utility_Color255_o *)0x0) {
            UVar15 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
            rgbColor.fields.b = UVar15.fields.b;
            rgbColor.fields._0_8_ = UVar15.fields._0_8_;
            rgbColor.fields.a = 1.0;
            UnityEngine_Color__RGBToHSV
                      (rgbColor,&(__this_00->fields)._hue,&(__this_00->fields)._saturation,
                       &(__this_00->fields)._value,(MethodInfo *)0x0);
            fStack_34 = UVar15.fields.a;
            fVar12 = (float)(pSVar10->fields).MinAlpha / 255.0;
            if (fVar12 <= fStack_34) {
              fVar12 = fStack_34;
            }
            fVar14 = 1.0;
            if (fVar12 <= 1.0) {
              fVar14 = fVar12;
            }
            (__this_00->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar14);
            *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 3) = 0;
            *(undefined2 *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) = 0x101;
            pMVar8 = (MethodInfo *)0x1;
            UI_ColorPickPopup__ApplyCurrentColorToUI(__this_00,1,method_00);
            if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) != '\0') {
              UI_ColorPickPopup__UpdateSVTexture(__this_00,pMVar8);
              *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) = 0;
            }
            if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) == '\0') {
              return;
            }
            UI_ColorPickPopup__UpdateAlphaTexture(__this_00,pMVar8);
            *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) = 0;
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pbVar1 = (byte *)((long)&(pUVar9->fields)._suppressInputCallbacks + 1);
      *pbVar1 = *pbVar1 | bVar5;
      pbVar1 = (byte *)((long)&(pUVar9->fields)._suppressInputCallbacks + 2);
      *pbVar1 = *pbVar1 | extraout_DL;
      return;
    }
    bVar5 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if ((bVar5 <= (pSVar10->klass->_2).naturalAligment) &&
       ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_ColorSetting)) goto UI_ColorPickPopup__Show;
    il2cpp_runtime_helper_022b2fd0();
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae29d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae29d = '\x01';
  }
  pUVar11 = *(Utility_Color255_o **)&(pSVar10->fields).MinAlpha;
  if (pUVar11 != (Utility_Color255_o *)0x0) {
    bVar5 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if (((pUVar11->klass->_2).naturalAligment < bVar5) ||
       ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_ColorSetting)) goto label_0438f064;
    pUVar11 = *(Utility_Color255_o **)&(pUVar11->fields).B;
    if (pUVar11 != (Utility_Color255_o *)0x0) {
      pUVar3 = pSVar10[1].fields.DefaultValue;
      UVar15 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
      uVar13 = UVar15.fields._0_8_;
      if (pUVar3 != (Utility_Color255_o *)0x0) {
        (**(code **)&pUVar3->klass[1]._2.naturalAligment)
                  (uVar13,UVar15.fields.b,pUVar3,pUVar3->klass[1].vtable._0_Equals.methodPtr);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90(uVar13);
label_0438f064:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar11,(MethodInfo *)0x0);
  return;
}


// UI.ColorSettingElement$$SyncElement
// il2cpp: void UI_ColorSettingElement__SyncElement (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x438efd0

void UI_ColorSettingElement__SyncElement(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o UVar3;
  
  if (g_data_057ae29d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae29d = '\x01';
  }
  __this_00 = (Utility_Color255_o *)(__this->fields)._setting;
  if (__this_00 != (Utility_Color255_o *)0x0) {
    bVar1 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ColorSetting)) goto label_0438f064;
    __this_00 = *(Utility_Color255_o **)&(__this_00->fields).B;
    if (__this_00 != (Utility_Color255_o *)0x0) {
      pUVar2 = (__this->fields)._image;
      UVar3 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        vtableDispatch = (pUVar2->klass->vtable)._23_set_color.methodPtr;
        (*vtableDispatch)
                  (UVar3.fields._0_8_,UVar3.fields._8_8_,pUVar2,(pUVar2->klass->vtable)._23_set_color.method,
                   extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0438f064:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.ColorSettingElement$$.ctor
// il2cpp: void UI_ColorSettingElement___ctor (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x438f070

void UI_ColorSettingElement___ctor(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ColorSettingElement$$<Setup>b__5_0
// il2cpp: void UI_ColorSettingElement___Setup_b__5_0 (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x438f080

void UI_ColorSettingElement___Setup_b__5_0(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o **ppUVar4;
  byte *pbVar5;
  int32_t iVar6;
  uint uVar7;
  int iVar8;
  Settings_IntSetting_o *pSVar9;
  System_Threading_CancellationTokenSource_o *__this_00;
  UI_ColorPickPopup_o *__this_01;
  System_String_o *pSVar10;
  Il2CppClass *__this_02;
  System_Diagnostics_StackTrace_array *pSVar11;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  bool_conflict bVar13;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_UI_Text_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  Il2CppObject *pIVar17;
  UnityEngine_Events_UnityAction_o *call;
  ulong uVar18;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_RectTransform_o *pUVar19;
  UnityEngine_UI_ScrollRect_o *__this_04;
  UnityEngine_UI_Scrollbar_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  undefined8 uVar22;
  System_ArgumentException_o *__this_05;
  System_String_o *pSVar23;
  UnityEngine_Events_UnityAction_o *in_RCX;
  byte extraout_DL;
  int32_t value_01;
  MethodInfo *method_00;
  UI_ElementStyle_o *style;
  UI_ElementStyle_o *style_00;
  UI_DropdownSettingElement_o *__this_06;
  ulong uVar24;
  byte bVar25;
  UnityEngine_UI_Image_o *pUVar26;
  MethodInfo *pMVar27;
  UI_ColorPickPopup_o *pUVar28;
  System_String_array **__this_07;
  Settings_TypedSetting_T__o *__this_08;
  System_String_array *in_R8;
  MethodInfo *in_R9;
  float fVar29;
  float fVar30;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  UnityEngine_Color_o UVar31;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Events_UnityAction_o *unaff_retaddr;
  UnityEngine_UI_ColorBlock_o UStack_b8;
  UI_DropdownSettingElement_o *pUStack_60;
  float fStack_34;
  UnityEngine_Events_UnityAction_o *in_stack_ffffffffffffffd8;
  
  if (g_data_057ae29c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    g_data_057ae29c = '\x01';
  }
  __this_01 = (__this->fields)._colorPickPopup;
  __this_06 = (UI_DropdownSettingElement_o *)0x0;
  if (__this_01 != (UI_ColorPickPopup_o *)0x0) {
    __this_06 = (UI_DropdownSettingElement_o *)(__this->fields)._setting;
    pUVar26 = (__this->fields)._image;
    in_RCX = (__this->fields)._onChangeColor;
    if (__this_06 == (UI_DropdownSettingElement_o *)0x0) {
UI_ColorPickPopup__Show:
      if (g_data_057ae0e7 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
        g_data_057ae0e7 = '\x01';
      }
      bVar25 = 0;
      pUVar28 = __this_01;
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        pMVar27 = (MethodInfo *)0x0;
        bVar13 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return;
        }
        UI_BasePopup__Show((UI_BasePopup_o *)__this_01,pMVar27);
        (__this_01->fields)._setting = (Settings_ColorSetting_o *)__this_06;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._setting,__this_06);
        pUVar28 = (UI_ColorPickPopup_o *)&(__this_01->fields)._image;
        (__this_01->fields)._image = pUVar26;
        il2cpp_runtime_helper_022b4080();
        bVar25 = (byte)pUVar26;
        if ((__this_06 != (UI_DropdownSettingElement_o *)0x0) &&
           (pSVar9 = (__this_01->fields)._alpha, pSVar9 != (Settings_IntSetting_o *)0x0)) {
          (pSVar9->fields).MinValue = *(int32_t *)&(__this_06->fields)._setting;
          (__this_01->fields)._onChangeColor = in_RCX;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields)._onChangeColor);
          bVar25 = (byte)in_RCX;
          __this_00 = (__this_06->fields).m_CancellationTokenSource;
          pUVar28 = (UI_ColorPickPopup_o *)0x0;
          if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
            UVar31 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
            rgbColor.fields.b = UVar31.fields.b;
            rgbColor.fields.a = 1.0;
            rgbColor.fields.r = (float)(int)UVar31.fields._0_8_;
            rgbColor.fields.g = (float)(int)((ulong)UVar31.fields._0_8_ >> 0x20);
            UnityEngine_Color__RGBToHSV
                      (rgbColor,&(__this_01->fields)._hue,&(__this_01->fields)._saturation,
                       &(__this_01->fields)._value,(MethodInfo *)0x0);
            fStack_34 = UVar31.fields.a;
            fVar29 = (float)*(int *)&(__this_06->fields)._setting / 255.0;
            if (fVar29 <= fStack_34) {
              fVar29 = fStack_34;
            }
            fVar30 = 1.0;
            if (fVar29 <= 1.0) {
              fVar30 = fVar29;
            }
            (__this_01->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar29) & (uint)fVar30);
            *(undefined1 *)((long)&(__this_01->fields)._suppressInputCallbacks + 3) = 0;
            *(undefined2 *)((long)&(__this_01->fields)._suppressInputCallbacks + 1) = 0x101;
            pMVar27 = (MethodInfo *)0x1;
            UI_ColorPickPopup__ApplyCurrentColorToUI(__this_01,1,method_00);
            if (*(char *)((long)&(__this_01->fields)._suppressInputCallbacks + 1) != '\0') {
              UI_ColorPickPopup__UpdateSVTexture(__this_01,pMVar27);
              *(undefined1 *)((long)&(__this_01->fields)._suppressInputCallbacks + 1) = 0;
            }
            if (*(char *)((long)&(__this_01->fields)._suppressInputCallbacks + 2) == '\0') {
              return;
            }
            UI_ColorPickPopup__UpdateAlphaTexture(__this_01,pMVar27);
            *(undefined1 *)((long)&(__this_01->fields)._suppressInputCallbacks + 2) = 0;
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pbVar5 = (byte *)((long)&(pUVar28->fields)._suppressInputCallbacks + 1);
      *pbVar5 = *pbVar5 | bVar25;
      pbVar5 = (byte *)((long)&(pUVar28->fields)._suppressInputCallbacks + 2);
      *pbVar5 = *pbVar5 | extraout_DL;
      return;
    }
    if ((*(byte *)(TypeInfo_ColorSetting->m_Items + 0x22) <=
         (((Settings_ColorSetting_c *)__this_06->klass)->_2).naturalAligment) &&
       ((System_String_array *)
        (((Settings_ColorSetting_c *)__this_06->klass)->_2).typeHierarchy
        [(ulong)*(byte *)(TypeInfo_ColorSetting->m_Items + 0x22) - 1] == TypeInfo_ColorSetting)) goto UI_ColorPickPopup__Show;
    method = (MethodInfo *)TypeInfo_ColorSetting;
    in_R8 = TypeInfo_ColorSetting;
    il2cpp_runtime_helper_022b2fd0();
  }
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar23 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_07 = (System_String_array **)__this_06;
  UI_DropdownSettingElement__Setup
            (__this_06,(Settings_BaseSetting_o *)method,style,pSVar23,in_R8,(System_String_o *)in_R9,fVar29,
             in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,unaff_retaddr,(MethodInfo *)in_stack_ffffffffffffffd8);
  if (style != (UI_ElementStyle_o *)0x0) {
    __this_06 = (UI_DropdownSettingElement_o *)(__this_06->fields)._selectedButtonLabel;
    iVar6 = (style->fields).FontSize;
    if (g_data_057ae295 == '\0') {
      __this_07 = &MethodInfo_Text_GetComponent_Text;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae295 = '\x01';
    }
    if ((__this_06 != (UI_DropdownSettingElement_o *)0x0) &&
       (method = (MethodInfo *)MethodInfo_Text_GetComponent_Text, __this_07 = (System_String_array **)__this_06,
       pUVar15 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)__this_06,(MethodInfo_255A0F0 *)MethodInfo_Text_GetComponent_Text),
       pUVar15 != (UnityEngine_UI_Text_o *)0x0)) {
      (*(pUVar15->klass->vtable)._75_set_text.methodPtr)
                (pUVar15,in_RCX,(pUVar15->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontSize(pUVar15,iVar6,(MethodInfo *)0x0);
      return;
    }
  }
  fVar29 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar27 = in_R9;
  pUStack_60 = __this_06;
  if (g_data_057ae2a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"DropdownBorderColor");
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbar");
    il2cpp_runtime_helper_023445d0(&"Dropdown/Mask");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"Image");
    il2cpp_runtime_helper_023445d0(&"Scrollbar");
    il2cpp_runtime_helper_023445d0(&"Dropdown/SelectedButton");
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ae2a0 = '\x01';
  }
  if (in_R8 == (System_String_array *)0x0) goto label_0438fd4d;
  if (in_R8->max_length != 0) {
    (((UI_DropdownSettingElement_o *)__this_07)->fields)._onDropdownOptionSelect = in_stack_ffffffffffffffd8;
    il2cpp_runtime_helper_022b4080(&(((UI_DropdownSettingElement_o *)__this_07)->fields)._onDropdownOptionSelect);
    (((UI_DropdownSettingElement_o *)__this_07)->fields)._options = in_R8;
    il2cpp_runtime_helper_022b4080(&(((UI_DropdownSettingElement_o *)__this_07)->fields)._options);
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
    if ((pUVar16 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"Dropdown/Mask",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) {
label_0438fd4d:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
      ppUVar1 = &(((UI_DropdownSettingElement_o *)__this_07)->fields)._optionsPanel;
      (((UI_DropdownSettingElement_o *)__this_07)->fields)._optionsPanel = pUVar14;
      il2cpp_runtime_helper_022b4080();
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
      if ((pUVar16 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"Dropdown/SelectedButton",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_0438fd4d;
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
      ppUVar2 = &(((UI_DropdownSettingElement_o *)__this_07)->fields)._selectedButton;
      (((UI_DropdownSettingElement_o *)__this_07)->fields)._selectedButton = pUVar14;
      il2cpp_runtime_helper_022b4080();
      pUVar14 = (((UI_DropdownSettingElement_o *)__this_07)->fields)._selectedButton;
      if (((pUVar14 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"Label",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_0438fd4d;
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
      ppUVar3 = &(((UI_DropdownSettingElement_o *)__this_07)->fields)._selectedButtonLabel;
      (((UI_DropdownSettingElement_o *)__this_07)->fields)._selectedButtonLabel = pUVar14;
      il2cpp_runtime_helper_022b4080(ppUVar3,pUVar14);
      if ((int)in_R8->max_length != 0) {
        if (style_00 != (UI_ElementStyle_o *)0x0) {
          pUVar14 = (((UI_DropdownSettingElement_o *)__this_07)->fields)._selectedButtonLabel;
          pSVar10 = in_R8->m_Items[0];
          iVar6 = (style_00->fields).FontSize;
          if (g_data_057ae295 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae295 = '\x01';
          }
          if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar15 = (UnityEngine_UI_Text_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  (pUVar14,(MethodInfo_255A0F0 *)MethodInfo_Text_GetComponent_Text),
             pUVar15 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(pUVar15->klass->vtable)._75_set_text.methodPtr)
                      (pUVar15,pSVar10,(pUVar15->klass->vtable)._75_set_text.method);
            UnityEngine_UI_Text__set_fontSize(pUVar15,iVar6,(MethodInfo *)0x0);
            if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
               (pIVar17 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_Button_GetComponent_Button),
               pIVar17 != (Il2CppObject *)0x0)) {
              __this_02 = pIVar17[0x10].klass;
              call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_02 != (Il2CppClass *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)__this_02,call,(MethodInfo *)0x0);
                if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                   (pIVar17 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                   pIVar17 != (Il2CppObject *)0x0)) {
                  (*pIVar17->klass->vtable[0x24].methodPtr)
                            (fVar29,pIVar17,pIVar17->klass->vtable[0x24].method);
                  if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                     (pIVar17 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                     pIVar17 != (Il2CppObject *)0x0)) {
                    (*pIVar17->klass->vtable[0x26].methodPtr)
                              (in_XMM1_Da,pIVar17,pIVar17->klass->vtable[0x26].method);
                    if (0 < (int)in_R8->max_length) {
                      uVar18 = in_R8->max_length & 0xffffffff;
                      uVar24 = 0;
                      do {
                        if (uVar18 <= uVar24) goto label_0438fd52;
                        UI_DropdownSettingElement__CreateOptionButton
                                  ((UI_DropdownSettingElement_o *)__this_07,in_R8->m_Items[uVar24],
                                   (int32_t)uVar24,in_XMM2_Da,in_XMM1_Da,(style_00->fields).FontSize,
                                   (style_00->fields).ThemePanel,pMVar27);
                        uVar24 = uVar24 + 1;
                        uVar7 = (uint)in_R8->max_length;
                        uVar18 = (ulong)uVar7;
                      } while ((long)uVar24 < (long)(int)uVar7);
                    }
                    if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                      __this_03 = (UnityEngine_UI_Selectable_o *)
                                  UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_Button_GetComponent_Button);
                      pSVar10 = (style_00->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_UIManager__GetThemeColorBlock
                                (&UStack_b8,pSVar10,"DefaultSetting","Dropdown","DefaultPanel",(MethodInfo *)0x0);
                      if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                        value.fields.m_NormalColor.fields.b = UStack_b8.fields.m_NormalColor.fields.b;
                        value.fields.m_NormalColor.fields.a = UStack_b8.fields.m_NormalColor.fields.a;
                        value.fields.m_NormalColor.fields.r = UStack_b8.fields.m_NormalColor.fields.r;
                        value.fields.m_NormalColor.fields.g = UStack_b8.fields.m_NormalColor.fields.g;
                        value.fields.m_HighlightedColor.fields.r =
                             UStack_b8.fields.m_HighlightedColor.fields.r;
                        value.fields.m_HighlightedColor.fields.g =
                             UStack_b8.fields.m_HighlightedColor.fields.g;
                        value.fields.m_HighlightedColor.fields.b =
                             UStack_b8.fields.m_HighlightedColor.fields.b;
                        value.fields.m_HighlightedColor.fields.a =
                             UStack_b8.fields.m_HighlightedColor.fields.a;
                        value.fields.m_PressedColor.fields.r = UStack_b8.fields.m_PressedColor.fields.r;
                        value.fields.m_PressedColor.fields.g = UStack_b8.fields.m_PressedColor.fields.g;
                        value.fields.m_PressedColor.fields.b = UStack_b8.fields.m_PressedColor.fields.b;
                        value.fields.m_PressedColor.fields.a = UStack_b8.fields.m_PressedColor.fields.a;
                        value.fields.m_SelectedColor.fields.r = UStack_b8.fields.m_SelectedColor.fields.r;
                        value.fields.m_SelectedColor.fields.g = UStack_b8.fields.m_SelectedColor.fields.g;
                        value.fields.m_SelectedColor.fields.b = UStack_b8.fields.m_SelectedColor.fields.b;
                        value.fields.m_SelectedColor.fields.a = UStack_b8.fields.m_SelectedColor.fields.a;
                        value.fields.m_DisabledColor.fields.r = UStack_b8.fields.m_DisabledColor.fields.r;
                        value.fields.m_DisabledColor.fields.g = UStack_b8.fields.m_DisabledColor.fields.g;
                        value.fields.m_DisabledColor.fields.b = UStack_b8.fields.m_DisabledColor.fields.b;
                        value.fields.m_DisabledColor.fields.a = UStack_b8.fields.m_DisabledColor.fields.a;
                        value.fields.m_ColorMultiplier = UStack_b8.fields.m_ColorMultiplier;
                        value.fields.m_FadeDuration = UStack_b8.fields.m_FadeDuration;
                        UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
                        pUVar14 = *ppUVar3;
                        if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar17 = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar14,(MethodInfo_255A0F0 *)MethodInfo_Text_GetComponent_Text);
                          UVar31 = UI_UIManager__GetThemeColor
                                             ((style_00->fields).ThemePanel,"DefaultSetting","DropdownTextColor",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          if (pIVar17 != (Il2CppObject *)0x0) {
                            (*pIVar17->klass->vtable[0x17].methodPtr)(UVar31.fields.r,UVar31.fields.b,pIVar17)
                            ;
                            if (((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                                (pUVar16 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0),
                                pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                               (pUVar16 = UnityEngine_Transform__Find(pUVar16,"Image",(MethodInfo *)0x0),
                               pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                              pIVar17 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)pUVar16,MethodInfo_Image_GetComponent_Image);
                              UVar31 = UI_UIManager__GetThemeColor
                                                 ((style_00->fields).ThemePanel,"DefaultSetting","DropdownTextColor",
                                                  "DefaultPanel",(MethodInfo *)0x0);
                              if (pIVar17 != (Il2CppObject *)0x0) {
                                (*pIVar17->klass->vtable[0x17].methodPtr)
                                          (UVar31.fields.r,UVar31.fields.b,pIVar17);
                                if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                    (pUVar16 = UnityEngine_GameObject__get_transform
                                                         (*ppUVar1,(MethodInfo *)0x0),
                                    pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                                   (pUVar16 = UnityEngine_Transform__Find
                                                        (pUVar16,"Options",(MethodInfo *)0x0),
                                   pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                                  pIVar17 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar16,MethodInfo_Image_GetComponent_Image);
                                  UVar31 = UI_UIManager__GetThemeColor
                                                     ((style_00->fields).ThemePanel,"DefaultSetting","DropdownBorderColor",
                                                      "DefaultPanel",(MethodInfo *)0x0);
                                  if (pIVar17 != (Il2CppObject *)0x0) {
                                    (*pIVar17->klass->vtable[0x17].methodPtr)(UVar31.fields.r,UVar31.fields.b)
                                    ;
                                    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                                    if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                        (pUVar16 = UnityEngine_GameObject__get_transform
                                                             (*ppUVar1,(MethodInfo *)0x0),
                                        pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                                       ((pUVar16 = UnityEngine_Transform__Find
                                                             (pUVar16,"Options",(MethodInfo *)0x0),
                                        pUVar16 != (UnityEngine_Transform_o *)0x0 &&
                                        (pUVar19 = (UnityEngine_RectTransform_o *)
                                                   UnityEngine_Component__GetComponent_object_
                                                             ((UnityEngine_Component_o *)pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform)
                                        , pUVar19 != (UnityEngine_RectTransform_o *)0x0)))) {
                                      UVar12 = UnityEngine_RectTransform__get_sizeDelta
                                                         (pUVar19,(MethodInfo *)0x0);
                                      if (in_XMM3_Da < UVar12.fields.y) {
label_0438f9fe:
                                        if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                            (pUVar16 = UnityEngine_GameObject__get_transform
                                                                 (*ppUVar1,(MethodInfo *)0x0),
                                            pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                                           (pUVar16 = UnityEngine_Transform__Find
                                                                (pUVar16,"Scrollbar",(MethodInfo *)0x0),
                                           pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                                          pUVar20 = (UnityEngine_UI_Scrollbar_o *)
                                                    UnityEngine_Component__GetComponent_object_
                                                              ((UnityEngine_Component_o *)pUVar16,MethodInfo_Scrollbar_GetComponent_Scrollbar
                                                              );
                                          ppUVar4 = &(((UI_DropdownSettingElement_o *)__this_07)->fields).
                                                     _scrollBar;
                                          (((UI_DropdownSettingElement_o *)__this_07)->fields)._scrollBar =
                                               pUVar20;
                                          il2cpp_runtime_helper_022b4080(ppUVar4,pUVar20);
                                          pUVar20 = (((UI_DropdownSettingElement_o *)__this_07)->fields).
                                                    _scrollBar;
                                          pSVar10 = (style_00->fields).ThemePanel;
                                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pMVar27 = (MethodInfo *)0x0;
                                          UI_UIManager__GetThemeColorBlock
                                                    (&UStack_b8,pSVar10,"DefaultSetting","DropdownScrollbar","DefaultPanel"
                                                     ,(MethodInfo *)0x0);
                                          if (pUVar20 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                            value_00.fields.m_NormalColor.fields.b =
                                                 UStack_b8.fields.m_NormalColor.fields.b;
                                            value_00.fields.m_NormalColor.fields.a =
                                                 UStack_b8.fields.m_NormalColor.fields.a;
                                            value_00.fields.m_NormalColor.fields.r =
                                                 UStack_b8.fields.m_NormalColor.fields.r;
                                            value_00.fields.m_NormalColor.fields.g =
                                                 UStack_b8.fields.m_NormalColor.fields.g;
                                            value_00.fields.m_HighlightedColor.fields.r =
                                                 UStack_b8.fields.m_HighlightedColor.fields.r;
                                            value_00.fields.m_HighlightedColor.fields.g =
                                                 UStack_b8.fields.m_HighlightedColor.fields.g;
                                            value_00.fields.m_HighlightedColor.fields.b =
                                                 UStack_b8.fields.m_HighlightedColor.fields.b;
                                            value_00.fields.m_HighlightedColor.fields.a =
                                                 UStack_b8.fields.m_HighlightedColor.fields.a;
                                            value_00.fields.m_PressedColor.fields.r =
                                                 UStack_b8.fields.m_PressedColor.fields.r;
                                            value_00.fields.m_PressedColor.fields.g =
                                                 UStack_b8.fields.m_PressedColor.fields.g;
                                            value_00.fields.m_PressedColor.fields.b =
                                                 UStack_b8.fields.m_PressedColor.fields.b;
                                            value_00.fields.m_PressedColor.fields.a =
                                                 UStack_b8.fields.m_PressedColor.fields.a;
                                            value_00.fields.m_SelectedColor.fields.r =
                                                 UStack_b8.fields.m_SelectedColor.fields.r;
                                            value_00.fields.m_SelectedColor.fields.g =
                                                 UStack_b8.fields.m_SelectedColor.fields.g;
                                            value_00.fields.m_SelectedColor.fields.b =
                                                 UStack_b8.fields.m_SelectedColor.fields.b;
                                            value_00.fields.m_SelectedColor.fields.a =
                                                 UStack_b8.fields.m_SelectedColor.fields.a;
                                            value_00.fields.m_DisabledColor.fields.r =
                                                 UStack_b8.fields.m_DisabledColor.fields.r;
                                            value_00.fields.m_DisabledColor.fields.g =
                                                 UStack_b8.fields.m_DisabledColor.fields.g;
                                            value_00.fields.m_DisabledColor.fields.b =
                                                 UStack_b8.fields.m_DisabledColor.fields.b;
                                            value_00.fields.m_DisabledColor.fields.a =
                                                 UStack_b8.fields.m_DisabledColor.fields.a;
                                            value_00.fields.m_ColorMultiplier =
                                                 UStack_b8.fields.m_ColorMultiplier;
                                            value_00.fields.m_FadeDuration = UStack_b8.fields.m_FadeDuration;
                                            UnityEngine_UI_Selectable__set_colors
                                                      ((UnityEngine_UI_Selectable_o *)pUVar20,value_00,
                                                       (MethodInfo *)0x0);
                                            pUVar20 = *ppUVar4;
                                            if (pUVar20 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                              pIVar17 = UnityEngine_Component__GetComponent_object_
                                                                  ((UnityEngine_Component_o *)pUVar20,
                                                                   MethodInfo_Image_GetComponent_Image);
                                              UVar31 = UI_UIManager__GetThemeColor
                                                                 ((style_00->fields).ThemePanel,"DefaultSetting",
                                                                  "DropdownScrollbarBackgroundColor","DefaultPanel",(MethodInfo *)0x0)
                                              ;
                                              if (pIVar17 != (Il2CppObject *)0x0) {
                                                (*pIVar17->klass->vtable[0x17].methodPtr)
                                                          (UVar31.fields.r,UVar31.fields.b,pIVar17,
                                                           pIVar17->klass->vtable[0x17].method);
                                                if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                                   (pUVar19 = (UnityEngine_RectTransform_o *)
                                                              UnityEngine_GameObject__GetComponent_object_
                                                                        (*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform),
                                                   pUVar19 != (UnityEngine_RectTransform_o *)0x0)) {
                                                  UVar12.fields.y = in_XMM3_Da;
                                                  UVar12.fields.x = in_XMM2_Da;
                                                  UnityEngine_RectTransform__set_sizeDelta
                                                            (pUVar19,UVar12,(MethodInfo *)0x0);
                                                  pUVar16 = UnityEngine_Component__get_transform
                                                                      ((UnityEngine_Component_o *)__this_07,
                                                                       (MethodInfo *)0x0);
                                                  if ((pUVar16 != (UnityEngine_Transform_o *)0x0) &&
                                                     ((pUVar16 = UnityEngine_Transform__Find
                                                                           (pUVar16,"Label",
                                                                            (MethodInfo *)0x0),
                                                      pUVar16 != (UnityEngine_Transform_o *)0x0 &&
                                                      (pIVar17 = UnityEngine_Component__GetComponent_object_
                                                                           ((UnityEngine_Component_o *)pUVar16
                                                                            ,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                                                      pIVar17 != (Il2CppObject *)0x0)))) {
                                                    (*pIVar17->klass->vtable[0x26].methodPtr)
                                                              (in_XMM1_Da,pIVar17);
                                                    (((UI_DropdownSettingElement_o *)__this_07)->fields).
                                                    _optionsOffset.fields.x = (in_XMM2_Da - fVar29) * 0.5;
                                                    (((UI_DropdownSettingElement_o *)__this_07)->fields).
                                                    _optionsOffset.fields.y =
                                                         2.0 - (in_XMM3_Da + in_XMM1_Da) * 0.5;
                                                    (((UI_DropdownSettingElement_o *)__this_07)->fields).
                                                    _optionsOffset.fields.z = 0.0;
                                                    pUVar14 = (((UI_DropdownSettingElement_o *)__this_07)->
                                                              fields)._optionsPanel;
                                                    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                                                      pUVar16 = UnityEngine_GameObject__get_transform
                                                                          (pUVar14,(MethodInfo *)0x0);
                                                      pUVar21 = UnityEngine_Component__get_transform
                                                                          ((UnityEngine_Component_o *)
                                                                           __this_07,(MethodInfo *)0x0);
                                                      if ((pUVar21 != (UnityEngine_Transform_o *)0x0) &&
                                                         (pUVar21 = UnityEngine_Transform__get_root
                                                                              (pUVar21,(MethodInfo *)0x0),
                                                         pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                                                        UnityEngine_Transform__SetParent_4e09e30
                                                                  (pUVar16,pUVar21,1,(MethodInfo *)0x0);
                                                        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                          UnityEngine_GameObject__SetActive
                                                                    (*ppUVar1,0,(MethodInfo *)0x0);
                                                          UI_BaseSettingElement__Setup
                                                                    ((UI_BaseSettingElement_o *)__this_07,
                                                                     (Settings_BaseSetting_o *)method,style_00
                                                                     ,pSVar23,(System_String_o *)in_R9,pMVar27
                                                                    );
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
                                      else if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                              (__this_04 = (UnityEngine_UI_ScrollRect_o *)
                                                           UnityEngine_GameObject__GetComponent_object_
                                                                     (*ppUVar1,MethodInfo_ScrollRect_GetComponent_ScrollRect),
                                              __this_04 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
                                        UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                  (__this_04,(UnityEngine_UI_Scrollbar_o *)0x0,
                                                   (MethodInfo *)0x0);
                                        if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                           (((pUVar16 = UnityEngine_GameObject__get_transform
                                                                  (*ppUVar1,(MethodInfo *)0x0),
                                             pUVar16 != (UnityEngine_Transform_o *)0x0 &&
                                             (pUVar16 = UnityEngine_Transform__Find
                                                                  (pUVar16,"Scrollbar",(MethodInfo *)0x0),
                                             pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                                            (pUVar14 = UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pUVar16,
                                                                  (MethodInfo *)0x0),
                                            pUVar14 != (UnityEngine_GameObject_o *)0x0)))) {
                                          UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
                                          in_XMM3_Da = UVar12.fields.y;
                                          goto label_0438f9fe;
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
                  }
                }
              }
            }
          }
        }
        goto label_0438fd4d;
      }
    }
label_0438fd52:
    il2cpp_runtime_helper_022b2ca0();
  }
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_05 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  pSVar23 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Dropdown cannot have 0 options.");
  System_ArgumentException___ctor_3c12490(__this_05,pSVar23,(MethodInfo *)0x0);
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae29e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae29e = '\x01';
  }
  pUVar20 = *(UnityEngine_UI_Scrollbar_o **)&(__this_05->fields)._HResult;
  __this_08 = (Settings_TypedSetting_T__o *)0x0;
  if (pUVar20 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar29 = UnityEngine_UI_Scrollbar__get_value(pUVar20,(MethodInfo *)0x0);
    *(float *)&(__this_05->fields)._dynamicMethods = fVar29;
    pUVar14 = (UnityEngine_GameObject_o *)(__this_05->fields)._stackTrace;
    __this_08 = (Settings_TypedSetting_T__o *)0x0;
    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
      iVar8 = *(int *)&(__this_05->fields)._innerException;
      if (iVar8 != 2) {
        if (iVar8 == 4) {
          __this_08 = (Settings_TypedSetting_T__o *)(__this_05->fields)._data;
          if (__this_08 == (Settings_TypedSetting_T__o *)0x0) goto label_0438fee6;
          bVar25 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((__this_08->klass->_2).naturalAligment < bVar25) ||
             ((__this_08->klass->_2).typeHierarchy[(ulong)bVar25 - 1] != TypeInfo_StringSetting)) goto label_0438feeb;
          Settings_TypedSetting_object___set_Value(__this_08,pIVar17,MethodInfo_Void_set_Value);
        }
        pSVar11 = (__this_05->fields).captured_traces;
joined_r0x0438fedf:
        if (pSVar11 == (System_Diagnostics_StackTrace_array *)0x0) {
          return;
        }
        (*(code *)pSVar11->max_length)(pSVar11->m_Items[4],pSVar11->m_Items[1]);
        return;
      }
      __this_08 = (Settings_TypedSetting_T__o *)(__this_05->fields)._data;
      if (__this_08 != (Settings_TypedSetting_T__o *)0x0) {
        bVar25 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar25 <= (__this_08->klass->_2).naturalAligment) &&
           ((__this_08->klass->_2).typeHierarchy[(ulong)bVar25 - 1] == TypeInfo_IntSetting)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_08,value_01,MethodInfo_Void_set_Value);
          pSVar11 = (__this_05->fields).captured_traces;
          goto joined_r0x0438fedf;
        }
        goto label_0438feeb;
      }
    }
  }
label_0438fee6:
  il2cpp_runtime_helper_022b2c90();
label_0438feeb:
  il2cpp_runtime_helper_022b2fd0();
  if (__this_08[3].klass != (Settings_TypedSetting_T__c *)0x0) {
    fVar29 = UnityEngine_UI_Scrollbar__get_value
                       ((UnityEngine_UI_Scrollbar_o *)__this_08[3].klass,(MethodInfo *)0x0);
    *(float *)&__this_08[2].fields._value = fVar29;
    pUVar14 = (UnityEngine_GameObject_o *)__this_08[1].fields._value;
    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


