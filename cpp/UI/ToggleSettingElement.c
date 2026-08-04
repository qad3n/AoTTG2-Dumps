// Type: UI.ToggleSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ToggleSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleSettingElement.cs
// --------------------------------

// UI.ToggleSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleSettingElement__get_SupportedSettingTypes (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x4399770

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleSettingElement__get_SupportedSettingTypes(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  intptr_t *piVar1;
  float fVar2;
  byte bVar3;
  long lVar4;
  UnityEngine_Events_UnityEvent_bool__o *__this_00;
  UnityEngine_UI_Selectable_o *__this_01;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  UnityEngine_Events_UnityAction_T0__o *pUVar5;
  UnityEngine_Events_UnityAction_T0__o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Events_UnityAction_T0__o *pUVar9;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  System_Collections_Generic_HashSet_SettingType__o *pSVar10;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_01;
  System_String_o *in_RCX;
  UI_ElementStyle_o *style;
  uint uVar11;
  MethodInfo_33DA550 *setting;
  System_String_o *pSVar12;
  MethodInfo_24E7B40 *pMVar13;
  UnityEngine_Events_UnityAction_T0__o *__this_02;
  Settings_TypedSetting_bool__o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  System_String_o *in_R8;
  intptr_t in_R9;
  float fVar14;
  float in_XMM1_Da;
  UnityEngine_Color_o UVar15;
  UnityEngine_Events_UnityAction_T0__c *pUStack_90;
  void *pvStack_88;
  intptr_t iStack_80;
  intptr_t iStack_78;
  Il2CppObject *pIStack_70;
  intptr_t iStack_68;
  intptr_t iStack_60;
  intptr_t iStack_58;
  intptr_t iStack_50;
  intptr_t iStack_48;
  intptr_t iStack_40;
  UnityEngine_Events_UnityAction_T0__o *pUStack_38;
  
  if (g_data_057ae2e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2e6 = '\x01';
  }
  pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  setting = MethodInfo_HashSet_1_Settings_SettingType;
  __this_02 = pUVar5;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pUVar5,MethodInfo_HashSet_1_Settings_SettingType);
  if (pUVar5 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pUVar5,1,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)pUVar5;
  }
  fVar14 = (float)il2cpp_runtime_helper_022b2c90();
  pUStack_38 = pUVar5;
  if (g_data_057ae2e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
    il2cpp_runtime_helper_023445d0(&"Checkmark");
    g_data_057ae2e7 = '\x01';
  }
  (__this_02->fields).interp_method = in_R9;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).interp_method);
  uVar11 = 0;
  pUVar5 = __this_02;
  pUVar6 = (UnityEngine_Events_UnityAction_T0__o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
    pSVar12 = "Toggle";
    pUVar7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"Toggle",(MethodInfo *)0x0);
    uVar11 = (uint)pSVar12;
    pUVar5 = pUVar6;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Toggle_GetComponent_Toggle);
      piVar1 = &(__this_02->fields).extra_arg;
      (__this_02->fields).extra_arg = (intptr_t)pIVar8;
      pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)piVar1;
      il2cpp_runtime_helper_022b4080();
      uVar11 = (uint)pIVar8;
      lVar4 = (__this_02->fields).extra_arg;
      if (lVar4 != 0) {
        __this_00 = *(UnityEngine_Events_UnityEvent_bool__o **)(lVar4 + 0x118);
        pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
        pUVar6 = __this_02;
        pUVar5 = pUVar9;
        UnityEngine_Events_UnityAction_bool____ctor();
        uVar11 = (uint)pUVar6;
        if (__this_00 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
          UnityEngine_Events_UnityEvent_bool___AddListener(__this_00,pUVar9,MethodInfo_Void_AddListener);
          uVar11 = (uint)pUVar9;
          pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)*piVar1;
          if (pUVar5 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
            uVar11 = 0;
            pUVar6 = (UnityEngine_Events_UnityAction_T0__o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0)
            ;
            if (pUVar6 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
              pSVar12 = "Background";
              pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)
                       UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)pUVar6,"Background",(MethodInfo *)0x0);
              uVar11 = (uint)pSVar12;
              pUVar5 = pUVar6;
              if (pUVar9 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                pMVar13 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                pUVar6 = (UnityEngine_Events_UnityAction_T0__o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                uVar11 = (uint)pMVar13;
                pUVar5 = pUVar9;
                if (pUVar6 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                  uVar11 = 0;
                  pUVar5 = pUVar6;
                  pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)
                           UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                  if (pUVar9 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                    pSVar12 = "Checkmark";
                    pUVar7 = UnityEngine_Transform__Find
                                       ((UnityEngine_Transform_o *)pUVar9,"Checkmark",(MethodInfo *)0x0);
                    uVar11 = (uint)pSVar12;
                    pUVar5 = pUVar9;
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
                      (*((System_Collections_Generic_HashSet_SettingType__c *)pUVar6->klass)[1]._1.properties)
                                (in_XMM1_Da,pUVar6,
                                 ((System_Collections_Generic_HashSet_SettingType__c *)pUVar6->klass)[1]._1.
                                 methods);
                      uVar11 = (uint)((System_Collections_Generic_HashSet_SettingType__c *)pUVar6->klass)[1].
                                     _1.klass;
                      (*((System_Collections_Generic_HashSet_SettingType__c *)pUVar6->klass)[1]._1.interopData
                      )(fVar14);
                      pUVar5 = pUVar6;
                      if (pUVar9 != (UnityEngine_Events_UnityAction_T0__o *)0x0) {
                        fVar2 = *(float *)&(__this_02->fields).method_code;
                        value.fields.y = in_XMM1_Da * fVar2;
                        value.fields.x = fVar14 * fVar2;
                        UnityEngine_RectTransform__set_sizeDelta
                                  ((UnityEngine_RectTransform_o *)pUVar9,value,(MethodInfo *)0x0);
                        UI_BaseSettingElement__Setup
                                  ((UI_BaseSettingElement_o *)__this_02,(Settings_BaseSetting_o *)setting,
                                   style,in_RCX,in_R8,(MethodInfo *)0x0);
                        pMVar13 = MethodInfo_Image_GetComponent_Image;
                        pIVar8 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar9,MethodInfo_Image_GetComponent_Image);
                        uVar11 = (uint)pMVar13;
                        pUVar5 = pUVar9;
                        if (style != (UI_ElementStyle_o *)0x0) {
                          pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)(style->fields).ThemePanel;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar12 = "DefaultSetting";
                          UVar15 = UI_UIManager__GetThemeColor
                                             ((System_String_o *)pUVar5,"DefaultSetting","ToggleFilledColor","DefaultPanel"
                                              ,(MethodInfo *)0x0);
                          uVar11 = (uint)pSVar12;
                          if (pIVar8 != (Il2CppObject *)0x0) {
                            (*pIVar8->klass->vtable[0x17].methodPtr)
                                      (UVar15.fields.r,UVar15.fields.b,pIVar8,
                                       pIVar8->klass->vtable[0x17].method);
                            __this_01 = (UnityEngine_UI_Selectable_o *)*piVar1;
                            pSVar12 = (style->fields).ThemePanel;
                            pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)&pUStack_90;
                            UI_UIManager__GetThemeColorBlock
                                      ((UnityEngine_UI_ColorBlock_o *)pUVar5,pSVar12,"DefaultSetting","Toggle"
                                       ,"DefaultPanel",(MethodInfo *)0x0);
                            uVar11 = (uint)pSVar12;
                            if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
                              value_00.fields.m_NormalColor.fields._8_8_ = pvStack_88;
                              value_00.fields.m_NormalColor.fields._0_8_ = pUStack_90;
                              value_00.fields.m_HighlightedColor.fields.r = (float)(undefined4)iStack_80;
                              value_00.fields.m_HighlightedColor.fields.g = (float)iStack_80._4_4_;
                              value_00.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_78;
                              value_00.fields.m_HighlightedColor.fields.a = (float)iStack_78._4_4_;
                              value_00.fields.m_PressedColor.fields._0_8_ = pIStack_70;
                              value_00.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_68;
                              value_00.fields.m_PressedColor.fields.a = (float)iStack_68._4_4_;
                              value_00.fields.m_SelectedColor.fields.r = (float)(undefined4)iStack_60;
                              value_00.fields.m_SelectedColor.fields.g = (float)iStack_60._4_4_;
                              value_00.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_58;
                              value_00.fields.m_SelectedColor.fields.a = (float)iStack_58._4_4_;
                              value_00.fields.m_DisabledColor.fields.r = (float)(undefined4)iStack_50;
                              value_00.fields.m_DisabledColor.fields.g = (float)iStack_50._4_4_;
                              value_00.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_48;
                              value_00.fields.m_DisabledColor.fields.a = (float)iStack_48._4_4_;
                              value_00.fields.m_ColorMultiplier = (float)(undefined4)iStack_40;
                              value_00.fields.m_FadeDuration = (float)iStack_40._4_4_;
                              UnityEngine_UI_Selectable__set_colors(__this_01,value_00,(MethodInfo *)0x0);
                              return extraout_RAX_00;
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2e8 = '\x01';
  }
  __this_03 = *(Settings_TypedSetting_bool__o **)&((UnityEngine_Color_o *)&(pUVar5->fields).m_target)->fields;
  if (__this_03 != (Settings_TypedSetting_bool__o *)0x0) {
    bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if ((bVar3 <= (__this_03->klass->_2).naturalAligment) &&
       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_BoolSetting)) {
      Settings_TypedSetting_bool___set_Value(__this_03,uVar11 & 0xff,MethodInfo_Void_set_Value);
      lVar4 = (pUVar5->fields).interp_method;
      if (lVar4 != 0) {
        pSVar10 = (System_Collections_Generic_HashSet_SettingType__o *)
                  (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return pSVar10;
      }
      return (System_Collections_Generic_HashSet_SettingType__o *)0x0;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae2e9 = '\x01';
  }
  __this_04 = __this_03[1].monitor;
  if (__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if (((__this_04->klass->_2).naturalAligment < bVar3) ||
       ((__this_04->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BoolSetting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else if (__this_03[2].monitor != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                (__this_03[2].monitor,(uint)*(byte *)((long)&(__this_04->fields).m_CachedPtr + 1),
                 (MethodInfo *)0x0);
      return extraout_RAX_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_04[2].klass = 0x3f28f5c3;
  UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.ToggleSettingElement$$Setup
// il2cpp: void UI_ToggleSettingElement__Setup (UI_ToggleSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x43997f0

void UI_ToggleSettingElement__Setup
               (UI_ToggleSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               UnityEngine_Events_UnityAction_o *onValueChanged,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **ppUVar1;
  float fVar2;
  byte bVar3;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  UnityEngine_UI_Selectable_o *pUVar4;
  undefined8 uVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_Toggle_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Toggle_o *pUVar8;
  Il2CppObject *pIVar9;
  uint uVar10;
  System_String_o *pSVar11;
  UI_ToggleSettingElement_o *pUVar12;
  MethodInfo_24E7B40 *pMVar13;
  UnityEngine_UI_Toggle_o *panel;
  Settings_TypedSetting_bool__o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_Color_o UVar14;
  UnityEngine_UI_Toggle_c *local_88;
  void *pvStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  System_Threading_CancellationTokenSource_o *pSStack_70;
  bool_conflict local_68;
  undefined4 uStack_64;
  int32_t iStack_60;
  bool_conflict bStack_5c;
  UnityEngine_UI_Selectable_o *local_58;
  UnityEngine_UI_Selectable_o *pUStack_50;
  UnityEngine_UI_Selectable_o *local_48;
  UnityEngine_UI_Selectable_o *pUStack_40;
  int32_t local_38;
  float fStack_34;
  
  if (g_data_057ae2e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
    il2cpp_runtime_helper_023445d0(&"Checkmark");
    g_data_057ae2e7 = '\x01';
  }
  (__this->fields)._onValueChanged = onValueChanged;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onValueChanged);
  uVar10 = 0;
  panel = (UnityEngine_UI_Toggle_o *)__this;
  pUVar6 = (UnityEngine_UI_Toggle_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_UI_Toggle_o *)0x0) {
    pSVar11 = "Toggle";
    pUVar7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"Toggle",(MethodInfo *)0x0);
    uVar10 = (uint)pSVar11;
    panel = pUVar6;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = (UnityEngine_UI_Toggle_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Toggle_GetComponent_Toggle);
      ppUVar1 = &(__this->fields)._toggle;
      (__this->fields)._toggle = pUVar6;
      panel = (UnityEngine_UI_Toggle_o *)ppUVar1;
      il2cpp_runtime_helper_022b4080();
      uVar10 = (uint)pUVar6;
      pUVar6 = (__this->fields)._toggle;
      if (pUVar6 != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_00 = (pUVar6->fields).m_Group;
        pUVar6 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
        pUVar12 = __this;
        panel = pUVar6;
        UnityEngine_Events_UnityAction_bool____ctor();
        uVar10 = (uint)pUVar12;
        if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
          UnityEngine_Events_UnityEvent_bool___AddListener
                    ((UnityEngine_Events_UnityEvent_bool__o *)__this_00,
                     (UnityEngine_Events_UnityAction_T0__o *)pUVar6,MethodInfo_Void_AddListener);
          uVar10 = (uint)pUVar6;
          panel = *ppUVar1;
          if (panel != (UnityEngine_UI_Toggle_o *)0x0) {
            uVar10 = 0;
            pUVar6 = (UnityEngine_UI_Toggle_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)panel,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_UI_Toggle_o *)0x0) {
              pSVar11 = "Background";
              pUVar8 = (UnityEngine_UI_Toggle_o *)
                       UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)pUVar6,"Background",(MethodInfo *)0x0);
              uVar10 = (uint)pSVar11;
              panel = pUVar6;
              if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
                pMVar13 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                pUVar6 = (UnityEngine_UI_Toggle_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar8,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                uVar10 = (uint)pMVar13;
                panel = pUVar8;
                if (pUVar6 != (UnityEngine_UI_Toggle_o *)0x0) {
                  uVar10 = 0;
                  panel = pUVar6;
                  pUVar8 = (UnityEngine_UI_Toggle_o *)
                           UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
                    pSVar11 = "Checkmark";
                    pUVar7 = UnityEngine_Transform__Find
                                       ((UnityEngine_Transform_o *)pUVar8,"Checkmark",(MethodInfo *)0x0);
                    uVar10 = (uint)pSVar11;
                    panel = pUVar8;
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      pUVar8 = (UnityEngine_UI_Toggle_o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
                      (*(pUVar6->klass->vtable)._38_Select.methodPtr)
                                (elementHeight,pUVar6,(pUVar6->klass->vtable)._38_Select.method);
                      uVar10 = (uint)(pUVar6->klass->vtable)._36_OnSelect.method;
                      (*(pUVar6->klass->vtable)._36_OnSelect.methodPtr)(elementWidth);
                      panel = pUVar6;
                      if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
                        fVar2 = (__this->fields)._checkMarkSizeMultiplier;
                        value.fields.y = elementHeight * fVar2;
                        value.fields.x = elementWidth * fVar2;
                        UnityEngine_RectTransform__set_sizeDelta
                                  ((UnityEngine_RectTransform_o *)pUVar8,value,(MethodInfo *)0x0);
                        UI_BaseSettingElement__Setup
                                  ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                   (MethodInfo *)0x0);
                        pMVar13 = MethodInfo_Image_GetComponent_Image;
                        pIVar9 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
                        uVar10 = (uint)pMVar13;
                        panel = pUVar8;
                        if (style != (UI_ElementStyle_o *)0x0) {
                          panel = (UnityEngine_UI_Toggle_o *)(style->fields).ThemePanel;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar11 = "DefaultSetting";
                          UVar14 = UI_UIManager__GetThemeColor
                                             ((System_String_o *)panel,"DefaultSetting","ToggleFilledColor","DefaultPanel",
                                              (MethodInfo *)0x0);
                          uVar10 = (uint)pSVar11;
                          if (pIVar9 != (Il2CppObject *)0x0) {
                            (*pIVar9->klass->vtable[0x17].methodPtr)
                                      (UVar14.fields.r,UVar14.fields.b,pIVar9,
                                       pIVar9->klass->vtable[0x17].method);
                            pUVar6 = *ppUVar1;
                            pSVar11 = (style->fields).ThemePanel;
                            panel = (UnityEngine_UI_Toggle_o *)&stack0xffffffffffffff78;
                            UI_UIManager__GetThemeColorBlock
                                      ((UnityEngine_UI_ColorBlock_o *)panel,pSVar11,"DefaultSetting","Toggle",
                                       "DefaultPanel",(MethodInfo *)0x0);
                            uVar10 = (uint)pSVar11;
                            if (pUVar6 != (UnityEngine_UI_Toggle_o *)0x0) {
                              value_00.fields.m_NormalColor.fields._8_8_ = pvStack_80;
                              value_00.fields.m_NormalColor.fields._0_8_ = local_88;
                              value_00.fields.m_HighlightedColor.fields.r = (float)local_78;
                              value_00.fields.m_HighlightedColor.fields.g = (float)uStack_74;
                              value_00.fields.m_HighlightedColor.fields._8_8_ = pSStack_70;
                              value_00.fields.m_PressedColor.fields.r = (float)local_68;
                              value_00.fields.m_PressedColor.fields.g = (float)uStack_64;
                              value_00.fields.m_PressedColor.fields.b = (float)iStack_60;
                              value_00.fields.m_PressedColor.fields.a = (float)bStack_5c;
                              value_00.fields.m_SelectedColor.fields._0_8_ = local_58;
                              value_00.fields.m_SelectedColor.fields._8_8_ = pUStack_50;
                              value_00.fields.m_DisabledColor.fields._0_8_ = local_48;
                              value_00.fields.m_DisabledColor.fields._8_8_ = pUStack_40;
                              value_00.fields.m_ColorMultiplier = (float)local_38;
                              value_00.fields.m_FadeDuration = fStack_34;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)pUVar6,value_00,(MethodInfo *)0x0);
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
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2e8 = '\x01';
  }
  __this_01 = *(Settings_TypedSetting_bool__o **)
               &((UnityEngine_Color_o *)&(panel->fields).m_EnableCalled)->fields;
  if (__this_01 != (Settings_TypedSetting_bool__o *)0x0) {
    bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if ((bVar3 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_BoolSetting)) {
      Settings_TypedSetting_bool___set_Value(__this_01,uVar10 & 0xff,MethodInfo_Void_set_Value);
      pUVar4 = (panel->fields).m_Navigation.fields.m_SelectOnRight;
      if (pUVar4 != (UnityEngine_UI_Selectable_o *)0x0) {
        uVar5._0_4_ = (pUVar4->fields).m_Navigation.fields.m_Mode;
        uVar5._4_4_ = (pUVar4->fields).m_Navigation.fields.m_WrapAround;
        (*(code *)(pUVar4->fields).m_CancellationTokenSource)
                  ((pUVar4->fields).m_Navigation.fields.m_SelectOnLeft,uVar5);
        return;
      }
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae2e9 = '\x01';
  }
  __this_02 = __this_01[1].monitor;
  if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if (((__this_02->klass->_2).naturalAligment < bVar3) ||
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BoolSetting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else if (__this_01[2].monitor != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                (__this_01[2].monitor,(uint)*(byte *)((long)&(__this_02->fields).m_CachedPtr + 1),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_02[2].klass = 0x3f28f5c3;
  UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.ToggleSettingElement$$OnValueChanged
// il2cpp: void UI_ToggleSettingElement__OnValueChanged (UI_ToggleSettingElement_o* __this, bool value, const MethodInfo* method);
// 0x4399c50

void UI_ToggleSettingElement__OnValueChanged
               (UI_ToggleSettingElement_o *__this,bool_conflict value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  MethodInfo *extraout_RDX;
  Settings_TypedSetting_bool__o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057ae2e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2e8 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (Settings_TypedSetting_bool__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_bool__o *)0x0) {
    bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BoolSetting)) {
      Settings_TypedSetting_bool___set_Value(__this_00,value & 0xff,MethodInfo_Void_set_Value);
      pUVar2 = (__this->fields)._onValueChanged;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
        return;
      }
      return;
    }
    il2cpp_runtime_helper_022b2fd0(__this_00,TypeInfo_BoolSetting,method);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae2e9 = '\x01';
  }
  __this_01 = __this_00[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else if (__this_00[2].monitor != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                (__this_00[2].monitor,(uint)*(byte *)((long)&(__this_01->fields).m_CachedPtr + 1),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_01[2].klass = 0x3f28f5c3;
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.ToggleSettingElement$$SyncElement
// il2cpp: void UI_ToggleSettingElement__SyncElement (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x4399d00

void UI_ToggleSettingElement__SyncElement(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Toggle_o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057ae2e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae2e9 = '\x01';
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if (((((Settings_BaseSetting_c *)__this_01->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_BaseSetting_c *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      __this_00 = (__this->fields)._toggle;
      if (__this_00 != (UnityEngine_UI_Toggle_o *)0x0) {
        UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                  (__this_00,(uint)*(byte *)((long)&(__this_01->fields).m_CachedPtr + 1),(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_01[2].klass = 0x3f28f5c3;
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.ToggleSettingElement$$.ctor
// il2cpp: void UI_ToggleSettingElement___ctor (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x4399d90

void UI_ToggleSettingElement___ctor(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._checkMarkSizeMultiplier = 0.66;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleSettingElement$$<Setup>b__5_0
// il2cpp: void UI_ToggleSettingElement___Setup_b__5_0 (UI_ToggleSettingElement_o* __this, bool value, const MethodInfo* method);
// 0x4399da0

void UI_ToggleSettingElement___Setup_b__5_0
               (UI_ToggleSettingElement_o *__this,bool_conflict value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  MethodInfo *extraout_RDX;
  Settings_TypedSetting_bool__o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057ae2e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2e8 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (Settings_TypedSetting_bool__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_bool__o *)0x0) {
    bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BoolSetting)) {
      Settings_TypedSetting_bool___set_Value(__this_00,value & 0xff,MethodInfo_Void_set_Value);
      pUVar2 = (__this->fields)._onValueChanged;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
        return;
      }
      return;
    }
    il2cpp_runtime_helper_022b2fd0(__this_00,TypeInfo_BoolSetting,method);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae2e9 = '\x01';
  }
  __this_01 = __this_00[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else if (__this_00[2].monitor != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                (__this_00[2].monitor,(uint)*(byte *)((long)&(__this_01->fields).m_CachedPtr + 1),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_01[2].klass = 0x3f28f5c3;
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


