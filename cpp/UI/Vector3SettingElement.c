// Type: UI.Vector3SettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Vector3SettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/Vector3SettingElement.cs
// --------------------------------

// UI.Vector3SettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_Vector3SettingElement__get_SupportedSettingTypes (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x439a120

System_Collections_Generic_HashSet_SettingType__o *
UI_Vector3SettingElement__get_SupportedSettingTypes(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  intptr_t *piVar1;
  byte bVar2;
  Il2CppClass *__this_00;
  long *plVar3;
  UnityEngine_UI_Text_o *__this_01;
  UI_Vector3Popup_o *__this_02;
  long lVar4;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_Vector3_Fields vector;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_01;
  System_String_o *pSVar9;
  System_Collections_Generic_HashSet_SettingType__o *pSVar10;
  System_String_o *in_RCX;
  UI_ElementStyle_o *style;
  MethodInfo_33DA550 *setting;
  UnityEngine_Events_UnityAction_o *__this_05;
  Settings_Vector3Setting_o *setting_00;
  UnityEngine_MonoBehaviour_o *__this_06;
  System_Runtime_Serialization_SerializationInfo_o *in_R8;
  System_String_o *in_R9;
  undefined4 uVar11;
  undefined4 in_XMM1_Da;
  UnityEngine_Color_o UVar12;
  intptr_t unaff_retaddr;
  UnityEngine_Events_UnityAction_c *pUStack_90;
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
  UnityEngine_Events_UnityAction_o *pUStack_38;
  
  if (g_data_057ae2ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2ed = '\x01';
  }
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  setting = MethodInfo_HashSet_1_Settings_SettingType;
  __this_05 = pUVar5;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pUVar5,MethodInfo_HashSet_1_Settings_SettingType);
  if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pUVar5,8,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)pUVar5;
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  pUStack_38 = pUVar5;
  if (g_data_057ae2ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Vector3Button");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2ee = '\x01';
  }
  (__this_05->fields).method_code = (intptr_t)in_R8;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields).method_code);
  pUVar5 = __this_05;
  pUVar6 = (UnityEngine_Events_UnityAction_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
    pUVar7 = (UnityEngine_Events_UnityAction_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"Vector3Button",(MethodInfo *)0x0);
    pUVar5 = pUVar6;
    if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar6 = (UnityEngine_Events_UnityAction_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      pUVar5 = pUVar7;
      if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
        pUVar5 = pUVar6;
        pIVar8 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement)
        ;
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x24].methodPtr)(uVar11,pIVar8,pIVar8->klass->vtable[0x24].method);
          pUVar5 = pUVar6;
          pIVar8 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar8 != (Il2CppObject *)0x0) {
            (*pIVar8->klass->vtable[0x26].methodPtr)(in_XMM1_Da,pIVar8,pIVar8->klass->vtable[0x26].method);
            pUVar5 = pUVar6;
            pIVar8 = UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Button_GetComponent_Button);
            if (pIVar8 != (Il2CppObject *)0x0) {
              __this_00 = pIVar8[0x10].klass;
              pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              pUVar5 = pUVar7;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 != (Il2CppClass *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)__this_00,pUVar7,(MethodInfo *)0x0);
                pUVar5 = pUVar6;
                __this_03 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Button_GetComponent_Button);
                if (style != (UI_ElementStyle_o *)0x0) {
                  pSVar9 = (style->fields).ThemePanel;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar5 = (UnityEngine_Events_UnityAction_o *)&pUStack_90;
                  UI_UIManager__GetThemeColorBlock
                            ((UnityEngine_UI_ColorBlock_o *)pUVar5,pSVar9,"DefaultButton","",
                             "DefaultPanel",(MethodInfo *)0x0);
                  if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                    value.fields.m_NormalColor.fields._8_8_ = pvStack_88;
                    value.fields.m_NormalColor.fields._0_8_ = pUStack_90;
                    value.fields.m_HighlightedColor.fields.r = (float)(undefined4)iStack_80;
                    value.fields.m_HighlightedColor.fields.g = (float)iStack_80._4_4_;
                    value.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_78;
                    value.fields.m_HighlightedColor.fields.a = (float)iStack_78._4_4_;
                    value.fields.m_PressedColor.fields._0_8_ = pIStack_70;
                    value.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_68;
                    value.fields.m_PressedColor.fields.a = (float)iStack_68._4_4_;
                    value.fields.m_SelectedColor.fields.r = (float)(undefined4)iStack_60;
                    value.fields.m_SelectedColor.fields.g = (float)iStack_60._4_4_;
                    value.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_58;
                    value.fields.m_SelectedColor.fields.a = (float)iStack_58._4_4_;
                    value.fields.m_DisabledColor.fields.r = (float)(undefined4)iStack_50;
                    value.fields.m_DisabledColor.fields.g = (float)iStack_50._4_4_;
                    value.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_48;
                    value.fields.m_DisabledColor.fields.a = (float)iStack_48._4_4_;
                    value.fields.m_ColorMultiplier = (float)(undefined4)iStack_40;
                    value.fields.m_FadeDuration = (float)iStack_40._4_4_;
                    UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
                    pUVar7 = (UnityEngine_Events_UnityAction_o *)
                             UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
                    pUVar5 = pUVar6;
                    if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
                      __this_04 = UnityEngine_Transform__Find
                                            ((UnityEngine_Transform_o *)pUVar7,"Text",(MethodInfo *)0x0)
                      ;
                      pUVar5 = pUVar7;
                      if (__this_04 != (UnityEngine_Transform_o *)0x0) {
                        pIVar8 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)__this_04,MethodInfo_Text_GetComponent_Text);
                        piVar1 = &(__this_05->fields).extra_arg;
                        (__this_05->fields).extra_arg = (intptr_t)pIVar8;
                        il2cpp_runtime_helper_022b4080(piVar1,pIVar8);
                        plVar3 = (long *)(__this_05->fields).extra_arg;
                        pUVar5 = (UnityEngine_Events_UnityAction_o *)(style->fields).ThemePanel;
                        UVar12 = UI_UIManager__GetThemeColor
                                           ((System_String_o *)pUVar5,"DefaultButton","TextColor","DefaultPanel",
                                            (MethodInfo *)0x0);
                        if (plVar3 != (long *)0x0) {
                          (**(code **)(*plVar3 + 0x2a8))(UVar12.fields.r,UVar12.fields.b,plVar3);
                          __this_01 = (UnityEngine_UI_Text_o *)*piVar1;
                          pUVar5 = (UnityEngine_Events_UnityAction_o *)0x0;
                          if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_fontSize
                                      (__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
                            (__this_05->fields).interp_method = unaff_retaddr;
                            il2cpp_runtime_helper_022b4080(&(__this_05->fields).interp_method,unaff_retaddr);
                            UI_BaseSettingElement__Setup
                                      ((UI_BaseSettingElement_o *)__this_05,(Settings_BaseSetting_o *)setting,
                                       style,in_RCX,in_R9,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2ef = '\x01';
  }
  __this_02 = *(UI_Vector3Popup_o **)&((UnityEngine_Color_o *)&(pUVar5->fields).method_code)->fields;
  setting_00 = (Settings_Vector3Setting_o *)0x0;
  if (__this_02 != (UI_Vector3Popup_o *)0x0) {
    setting_00 = *(Settings_Vector3Setting_o **)&((UnityEngine_Color_o *)&(pUVar5->fields).m_target)->fields;
    if (setting_00 != (Settings_Vector3Setting_o *)0x0) {
      bVar2 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting_00->klass->_2).naturalAligment < bVar2) ||
         ((setting_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Vector3Setting)) {
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439a639;
      }
    }
    UI_Vector3Popup__Show
              (__this_02,setting_00,(UnityEngine_UI_Text_o *)(pUVar5->fields).extra_arg,
               (UnityEngine_Events_UnityAction_o *)(pUVar5->fields).interp_method,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
label_0439a639:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2f0 = '\x01';
  }
  __this_06 = *(UnityEngine_MonoBehaviour_o **)&(setting_00->fields)._value.fields.y;
  if (__this_06 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar2 = (TypeInfo_Vector3Setting->_2).naturalAligment;
    if (((__this_06->klass->_2).naturalAligment < bVar2) ||
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Vector3Setting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      plVar3 = *(long **)&setting_00[1].fields.DefaultValue.fields;
      vector = *(UnityEngine_Vector3_Fields *)((long)&(__this_06->fields).m_CancellationTokenSource + 4);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = (UnityEngine_MonoBehaviour_o *)0x0;
      pSVar9 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        pSVar10 = (System_Collections_Generic_HashSet_SettingType__o *)
                  (**(code **)(lVar4 + 0x5e8))
                            (plVar3,pSVar9,*(undefined8 *)(lVar4 + 0x5f0),lVar4,*(code **)(lVar4 + 0x5e8));
        return pSVar10;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_06,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.Vector3SettingElement$$Setup
// il2cpp: void UI_Vector3SettingElement__Setup (UI_Vector3SettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_Vector3Popup_o* vector3Popup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x439a1a0

void UI_Vector3SettingElement__Setup
               (UI_Vector3SettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_Vector3Popup_o *vector3Popup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeVector,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  byte bVar2;
  Il2CppClass *__this_00;
  UI_Vector3Popup_o *__this_01;
  long *plVar3;
  long lVar4;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_Vector3_Fields vector;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_UI_Text_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_Events_UnityAction_o *panel;
  Settings_Vector3Setting_o *setting_00;
  UnityEngine_MonoBehaviour_o *__this_04;
  UnityEngine_Color_o UVar10;
  UnityEngine_Events_UnityAction_c *local_88;
  void *pvStack_80;
  intptr_t local_78;
  intptr_t iStack_70;
  Il2CppObject *local_68;
  intptr_t iStack_60;
  intptr_t local_58;
  intptr_t iStack_50;
  intptr_t local_48;
  intptr_t iStack_40;
  intptr_t local_38;
  
  if (g_data_057ae2ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__5_0);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Vector3Button");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2ee = '\x01';
  }
  (__this->fields)._vector3Popup = vector3Popup;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._vector3Popup);
  panel = (UnityEngine_Events_UnityAction_o *)__this;
  pUVar5 = (UnityEngine_Events_UnityAction_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar5,"Vector3Button",(MethodInfo *)0x0);
    panel = pUVar5;
    if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar5 = (UnityEngine_Events_UnityAction_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      panel = pUVar6;
      if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
        panel = pUVar5;
        pIVar7 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement)
        ;
        if (pIVar7 != (Il2CppObject *)0x0) {
          (*pIVar7->klass->vtable[0x24].methodPtr)(elementWidth,pIVar7,pIVar7->klass->vtable[0x24].method);
          panel = pUVar5;
          pIVar7 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar7 != (Il2CppObject *)0x0) {
            (*pIVar7->klass->vtable[0x26].methodPtr)(elementHeight,pIVar7,pIVar7->klass->vtable[0x26].method);
            panel = pUVar5;
            pIVar7 = UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Button_GetComponent_Button);
            if (pIVar7 != (Il2CppObject *)0x0) {
              __this_00 = pIVar7[0x10].klass;
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              panel = pUVar6;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 != (Il2CppClass *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)__this_00,pUVar6,(MethodInfo *)0x0);
                panel = pUVar5;
                __this_02 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Button_GetComponent_Button);
                if (style != (UI_ElementStyle_o *)0x0) {
                  pSVar9 = (style->fields).ThemePanel;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  panel = (UnityEngine_Events_UnityAction_o *)&local_88;
                  UI_UIManager__GetThemeColorBlock
                            ((UnityEngine_UI_ColorBlock_o *)panel,pSVar9,"DefaultButton","",
                             "DefaultPanel",(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                    value.fields.m_NormalColor.fields._8_8_ = pvStack_80;
                    value.fields.m_NormalColor.fields._0_8_ = local_88;
                    value.fields.m_HighlightedColor.fields.r = (float)(undefined4)local_78;
                    value.fields.m_HighlightedColor.fields.g = (float)local_78._4_4_;
                    value.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_70;
                    value.fields.m_HighlightedColor.fields.a = (float)iStack_70._4_4_;
                    value.fields.m_PressedColor.fields._0_8_ = local_68;
                    value.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_60;
                    value.fields.m_PressedColor.fields.a = (float)iStack_60._4_4_;
                    value.fields.m_SelectedColor.fields.r = (float)(undefined4)local_58;
                    value.fields.m_SelectedColor.fields.g = (float)local_58._4_4_;
                    value.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_50;
                    value.fields.m_SelectedColor.fields.a = (float)iStack_50._4_4_;
                    value.fields.m_DisabledColor.fields.r = (float)(undefined4)local_48;
                    value.fields.m_DisabledColor.fields.g = (float)local_48._4_4_;
                    value.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_40;
                    value.fields.m_DisabledColor.fields.a = (float)iStack_40._4_4_;
                    value.fields.m_ColorMultiplier = (float)(undefined4)local_38;
                    value.fields.m_FadeDuration = (float)local_38._4_4_;
                    UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                    pUVar6 = (UnityEngine_Events_UnityAction_o *)
                             UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                    panel = pUVar5;
                    if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
                      __this_03 = UnityEngine_Transform__Find
                                            ((UnityEngine_Transform_o *)pUVar6,"Text",(MethodInfo *)0x0)
                      ;
                      panel = pUVar6;
                      if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                        pUVar8 = (UnityEngine_UI_Text_o *)
                                 UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)__this_03,MethodInfo_Text_GetComponent_Text);
                        ppUVar1 = &(__this->fields)._text;
                        (__this->fields)._text = pUVar8;
                        il2cpp_runtime_helper_022b4080(ppUVar1,pUVar8);
                        pUVar8 = (__this->fields)._text;
                        panel = (UnityEngine_Events_UnityAction_o *)(style->fields).ThemePanel;
                        UVar10 = UI_UIManager__GetThemeColor
                                           ((System_String_o *)panel,"DefaultButton","TextColor","DefaultPanel",
                                            (MethodInfo *)0x0);
                        if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                    (UVar10.fields.r,UVar10.fields.b,pUVar8);
                          pUVar8 = *ppUVar1;
                          panel = (UnityEngine_Events_UnityAction_o *)0x0;
                          if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_fontSize
                                      (pUVar8,(style->fields).FontSize,(MethodInfo *)0x0);
                            (__this->fields)._onChangeVector = onChangeVector;
                            il2cpp_runtime_helper_022b4080(&(__this->fields)._onChangeVector,onChangeVector);
                            UI_BaseSettingElement__Setup
                                      ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                       (MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2ef = '\x01';
  }
  __this_01 = *(UI_Vector3Popup_o **)&((UnityEngine_Color_o *)&(panel->fields).method_code)->fields;
  setting_00 = (Settings_Vector3Setting_o *)0x0;
  if (__this_01 != (UI_Vector3Popup_o *)0x0) {
    setting_00 = *(Settings_Vector3Setting_o **)&((UnityEngine_Color_o *)&(panel->fields).m_target)->fields;
    if (setting_00 != (Settings_Vector3Setting_o *)0x0) {
      bVar2 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting_00->klass->_2).naturalAligment < bVar2) ||
         ((setting_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Vector3Setting)) {
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439a639;
      }
    }
    UI_Vector3Popup__Show
              (__this_01,setting_00,(UnityEngine_UI_Text_o *)(panel->fields).extra_arg,
               (UnityEngine_Events_UnityAction_o *)(panel->fields).interp_method,(MethodInfo *)0x0);
    return;
  }
label_0439a639:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2f0 = '\x01';
  }
  __this_04 = *(UnityEngine_MonoBehaviour_o **)&(setting_00->fields)._value.fields.y;
  if (__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar2 = (TypeInfo_Vector3Setting->_2).naturalAligment;
    if (((__this_04->klass->_2).naturalAligment < bVar2) ||
       ((__this_04->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Vector3Setting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      plVar3 = *(long **)&setting_00[1].fields.DefaultValue.fields;
      vector = *(UnityEngine_Vector3_Fields *)((long)&(__this_04->fields).m_CancellationTokenSource + 4);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
      pSVar9 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        (**(code **)(lVar4 + 0x5e8))
                  (plVar3,pSVar9,*(undefined8 *)(lVar4 + 0x5f0),lVar4,*(code **)(lVar4 + 0x5e8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$OnButtonClicked
// il2cpp: void UI_Vector3SettingElement__OnButtonClicked (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x439a5c0

void UI_Vector3SettingElement__OnButtonClicked(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  long *plVar2;
  long lVar3;
  UnityEngine_Vector3_Fields vector;
  System_String_o *pSVar4;
  Settings_Vector3Setting_o *setting;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057ae2ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2ef = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  setting = (Settings_Vector3Setting_o *)0x0;
  if (__this_00 != (UI_Vector3Popup_o *)0x0) {
    setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
    if (setting != (Settings_Vector3Setting_o *)0x0) {
      bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) {
        il2cpp_runtime_helper_022b2fd0();
        goto label_0439a639;
      }
    }
    UI_Vector3Popup__Show
              (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,(MethodInfo *)0x0);
    return;
  }
label_0439a639:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2f0 = '\x01';
  }
  __this_01 = *(UnityEngine_MonoBehaviour_o **)&(setting->fields)._value.fields.y;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      plVar2 = *(long **)&setting[1].fields.DefaultValue.fields;
      vector = *(UnityEngine_Vector3_Fields *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
      pSVar4 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        (**(code **)(lVar3 + 0x5e8))
                  (plVar2,pSVar4,*(undefined8 *)(lVar3 + 0x5f0),lVar3,*(code **)(lVar3 + 0x5e8));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$SyncElement
// il2cpp: void UI_Vector3SettingElement__SyncElement (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x439a640

void UI_Vector3SettingElement__SyncElement(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Text_c *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Vector3_Fields vector;
  System_String_o *pSVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057ae2f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2f0 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
    if (((((Settings_BaseSetting_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_BaseSetting_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      pUVar2 = (__this->fields)._text;
      vector = *(UnityEngine_Vector3_Fields *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
      pSVar4 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar3 = pUVar2->klass;
        vtableDispatch = (pUVar3->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar2,pSVar4,(pUVar3->vtable)._75_set_text.method,pUVar3,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$.ctor
// il2cpp: void UI_Vector3SettingElement___ctor (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x439a730

void UI_Vector3SettingElement___ctor(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$<Setup>b__5_0
// il2cpp: void UI_Vector3SettingElement___Setup_b__5_0 (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x439a740

void UI_Vector3SettingElement___Setup_b__5_0(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  Settings_Vector3Setting_o *setting;
  
  if (g_data_057ae2ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ae2ef = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  if (__this_00 != (UI_Vector3Popup_o *)0x0) {
    setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
    if (setting != (Settings_Vector3Setting_o *)0x0) {
      bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) {
        il2cpp_runtime_helper_022b2fd0(setting,TypeInfo_Vector3Setting);
        goto label_0439a7b9;
      }
    }
    UI_Vector3Popup__Show
              (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,(MethodInfo *)0x0);
    return;
  }
label_0439a7b9:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"GalleryButton");
    il2cpp_runtime_helper_023445d0(&"ToolsPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae2f1 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocale("MainMenu","ToolsPopup","GalleryButton","","",(MethodInfo *)0x0);
  return;
}


