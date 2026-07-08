// Type: UI.IncrementSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/IncrementSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/IncrementSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.IncrementSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IncrementSettingElement__get_SupportedSettingTypes (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x4083f50

System_Collections_Generic_HashSet_SettingType__o *
UI_IncrementSettingElement__get_SupportedSettingTypes
          (UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704537 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704537 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IncrementSettingElement$$Setup
// il2cpp: void UI_IncrementSettingElement__Setup (UI_IncrementSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, System_String_array* options, UnityEngine_Events_UnityAction_o* onValueChanged, System_Func_bool__o* validation, const MethodInfo* method);
// 0x4083fd0

void UI_IncrementSettingElement__Setup
               (UI_IncrementSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,
               float elementWidth,float elementHeight,System_String_array *options,
               UnityEngine_Events_UnityAction_o *onValueChanged,System_Func_bool__o *validation,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_Selectable_o *__this_00;
  UnityEngine_UI_Selectable_o *__this_01;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  Il2CppObject *pIVar8;
  System_Delegate_o *pSVar9;
  Il2CppClass *pIVar10;
  System_Delegate_o *pSVar11;
  UnityEngine_Object_o *x;
  Il2CppClass *pIVar12;
  bool bVar13;
  UnityEngine_Color_o UVar14;
  UnityEngine_UI_ColorBlock_o local_140;
  UnityEngine_Color_Fields local_e8;
  UnityEngine_Color_Fields local_d8;
  UnityEngine_Color_Fields local_c8;
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [2];
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  if (DAT_05704538 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_HoldableButton_AddComponent_HoldableButton);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__6_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__6_1);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Increment/ValueLabel");
    il2cpp_init_method_metadata(&"Increment/RightButton");
    il2cpp_init_method_metadata(&"Increment/LeftButton");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"");
    DAT_05704538 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar3 = UnityEngine_Transform__Find(pUVar3,"Increment/ValueLabel",(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._valueLabel;
    (__this->fields)._valueLabel = pUVar4;
    il2cpp_runtime_glue(ppUVar1,pUVar4);
    if ((style != (UI_ElementStyle_o *)0x0) &&
       (pUVar4 = (__this->fields)._valueLabel, pUVar4 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(pUVar4,(style->fields).FontSize,(MethodInfo *)0x0);
      (__this->fields)._options = options;
      il2cpp_runtime_glue(&(__this->fields)._options,options);
      (__this->fields)._onValueChanged = onValueChanged;
      il2cpp_runtime_glue(&(__this->fields)._onValueChanged,onValueChanged);
      (__this->fields)._validation = validation;
      il2cpp_runtime_glue(&(__this->fields)._validation);
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar3 = UnityEngine_Transform__Find(pUVar3,"Increment/LeftButton",(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        __this_00 = (UnityEngine_UI_Selectable_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar3,MethodInfo_Button_GetComponent_Button);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
           (((pUVar3 = UnityEngine_Transform__Find(pUVar3,"Increment/RightButton",(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0 &&
             (__this_01 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar3,MethodInfo_Button_GetComponent_Button),
             __this_00 != (UnityEngine_UI_Selectable_o *)0x0)) &&
            (pIVar5 = UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement),
            __this_01 != (UnityEngine_UI_Selectable_o *)0x0)))) {
          pIVar6 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_HoldableButton_AddComponent_HoldableButton);
            pSVar9 = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action);
            System_Action___ctor();
            if (pIVar8 != (Il2CppObject *)0x0) {
              if (DAT_05704532 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action);
                DAT_05704532 = '\x01';
              }
              pIVar12 = pIVar8[4].klass;
              do {
                pSVar11 = System_Delegate__Combine
                                    ((System_Delegate_o *)pIVar12,pSVar9,(MethodInfo *)0x0);
                if ((pSVar11 != (System_Delegate_o *)0x0) && (pSVar11->klass != TypeInfo_Action))
                goto LAB_04084403;
                pIVar10 = (Il2CppClass *)il2cpp_glue_022c2530(pIVar8 + 4,pSVar11,pIVar12);
                bVar13 = pIVar12 != pIVar10;
                pIVar12 = pIVar10;
              } while (bVar13);
              pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_HoldableButton_AddComponent_HoldableButton);
                pSVar9 = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action);
                System_Action___ctor();
                if (pIVar8 != (Il2CppObject *)0x0) {
                  if (DAT_05704532 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Action);
                    DAT_05704532 = '\x01';
                  }
                  pIVar12 = pIVar8[4].klass;
                  do {
                    pSVar11 = System_Delegate__Combine
                                        ((System_Delegate_o *)pIVar12,pSVar9,(MethodInfo *)0x0);
                    if ((pSVar11 != (System_Delegate_o *)0x0) && (pSVar11->klass != TypeInfo_Action)) {
LAB_04084403:
                    /* WARNING: Subroutine does not return */
                      il2cpp_unwind_resume(pSVar11);
                    }
                    pIVar10 = (Il2CppClass *)il2cpp_glue_022c2530(pIVar8 + 4,pSVar11,pIVar12);
                    bVar13 = pIVar12 != pIVar10;
                    pIVar12 = pIVar10;
                  } while (bVar13);
                  if ((pIVar6 != (Il2CppObject *)0x0) &&
                     ((*pIVar6->klass->vtable[0x24].methodPtr)
                                (elementWidth,pIVar6,pIVar6->klass->vtable[0x24].method),
                     pIVar5 != (Il2CppObject *)0x0)) {
                    (*pIVar5->klass->vtable[0x24].methodPtr)
                              (elementWidth,pIVar5,pIVar5->klass->vtable[0x24].method);
                    (*pIVar6->klass->vtable[0x26].methodPtr)
                              (elementHeight,pIVar6,pIVar6->klass->vtable[0x26].method);
                    (*pIVar5->klass->vtable[0x26].methodPtr)
                              (elementHeight,pIVar5,pIVar5->klass->vtable[0x26].method);
                    if (*ppUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                      x = (UnityEngine_Object_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      bVar2 = UnityEngine_Object__op_Inequality
                                        (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar2 != '\0') {
                        if (x == (UnityEngine_Object_o *)0x0) goto LAB_04084797;
                        (*(code *)x->klass[2]._2.typeHierarchy)(0,x,x->klass[2]._2.unity_user_data);
                        (*(code *)x->klass[2]._1.castClass)
                                  (0xbf800000,x,x->klass[2]._1.declaringType);
                        (*x->klass[2]._1.events)(0xbf800000,x,x->klass[2]._1.properties);
                      }
                      UI_BaseSettingElement__Setup
                                ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                 (MethodInfo *)0x0);
                      panel = (style->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      UI_UIManager__GetThemeColorBlock
                                (&local_140,panel,"DefaultButton","","DefaultPanel",
                                 (MethodInfo *)0x0);
                      local_38 = local_140.fields.m_ColorMultiplier;
                      fStack_34 = local_140.fields.m_FadeDuration;
                      local_48.r = local_140.fields.m_DisabledColor.fields.r;
                      local_48.g = local_140.fields.m_DisabledColor.fields.g;
                      local_48.b = local_140.fields.m_DisabledColor.fields.b;
                      local_48.a = local_140.fields.m_DisabledColor.fields.a;
                      local_58.r = local_140.fields.m_SelectedColor.fields.r;
                      local_58.g = local_140.fields.m_SelectedColor.fields.g;
                      local_58.b = local_140.fields.m_SelectedColor.fields.b;
                      local_58.a = local_140.fields.m_SelectedColor.fields.a;
                      local_68.r = local_140.fields.m_PressedColor.fields.r;
                      local_68.g = local_140.fields.m_PressedColor.fields.g;
                      local_68.b = local_140.fields.m_PressedColor.fields.b;
                      local_68.a = local_140.fields.m_PressedColor.fields.a;
                      local_78.r = local_140.fields.m_HighlightedColor.fields.r;
                      local_78.g = local_140.fields.m_HighlightedColor.fields.g;
                      local_78.b = local_140.fields.m_HighlightedColor.fields.b;
                      local_78.a = local_140.fields.m_HighlightedColor.fields.a;
                      local_88.r = local_140.fields.m_NormalColor.fields.r;
                      local_88.g = local_140.fields.m_NormalColor.fields.g;
                      local_88.b = local_140.fields.m_NormalColor.fields.b;
                      local_88.a = local_140.fields.m_NormalColor.fields.a;
                      value.fields.m_NormalColor.fields.b = local_140.fields.m_NormalColor.fields.b;
                      value.fields.m_NormalColor.fields.a = local_140.fields.m_NormalColor.fields.a;
                      value.fields.m_NormalColor.fields.r = local_140.fields.m_NormalColor.fields.r;
                      value.fields.m_NormalColor.fields.g = local_140.fields.m_NormalColor.fields.g;
                      value.fields.m_HighlightedColor.fields.r =
                           local_140.fields.m_HighlightedColor.fields.r;
                      value.fields.m_HighlightedColor.fields.g =
                           local_140.fields.m_HighlightedColor.fields.g;
                      value.fields.m_HighlightedColor.fields.b =
                           local_140.fields.m_HighlightedColor.fields.b;
                      value.fields.m_HighlightedColor.fields.a =
                           local_140.fields.m_HighlightedColor.fields.a;
                      value.fields.m_PressedColor.fields.r =
                           local_140.fields.m_PressedColor.fields.r;
                      value.fields.m_PressedColor.fields.g =
                           local_140.fields.m_PressedColor.fields.g;
                      value.fields.m_PressedColor.fields.b =
                           local_140.fields.m_PressedColor.fields.b;
                      value.fields.m_PressedColor.fields.a =
                           local_140.fields.m_PressedColor.fields.a;
                      value.fields.m_SelectedColor.fields.r =
                           local_140.fields.m_SelectedColor.fields.r;
                      value.fields.m_SelectedColor.fields.g =
                           local_140.fields.m_SelectedColor.fields.g;
                      value.fields.m_SelectedColor.fields.b =
                           local_140.fields.m_SelectedColor.fields.b;
                      value.fields.m_SelectedColor.fields.a =
                           local_140.fields.m_SelectedColor.fields.a;
                      value.fields.m_DisabledColor.fields.r =
                           local_140.fields.m_DisabledColor.fields.r;
                      value.fields.m_DisabledColor.fields.g =
                           local_140.fields.m_DisabledColor.fields.g;
                      value.fields.m_DisabledColor.fields.b =
                           local_140.fields.m_DisabledColor.fields.b;
                      value.fields.m_DisabledColor.fields.a =
                           local_140.fields.m_DisabledColor.fields.a;
                      value.fields.m_ColorMultiplier = local_140.fields.m_ColorMultiplier;
                      value.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
                      UnityEngine_UI_Selectable__set_colors(__this_00,value,(MethodInfo *)0x0);
                      UI_UIManager__GetThemeColorBlock
                                (&local_140,(style->fields).ThemePanel,"DefaultButton","",
                                 "DefaultPanel",(MethodInfo *)0x0);
                      local_a8[1].r = local_140.fields.m_ColorMultiplier;
                      local_a8[1].g = local_140.fields.m_FadeDuration;
                      local_a8[0].r = local_140.fields.m_DisabledColor.fields.r;
                      local_a8[0].g = local_140.fields.m_DisabledColor.fields.g;
                      local_a8[0].b = local_140.fields.m_DisabledColor.fields.b;
                      local_a8[0].a = local_140.fields.m_DisabledColor.fields.a;
                      local_b8.r = local_140.fields.m_SelectedColor.fields.r;
                      local_b8.g = local_140.fields.m_SelectedColor.fields.g;
                      local_b8.b = local_140.fields.m_SelectedColor.fields.b;
                      local_b8.a = local_140.fields.m_SelectedColor.fields.a;
                      local_c8.r = local_140.fields.m_PressedColor.fields.r;
                      local_c8.g = local_140.fields.m_PressedColor.fields.g;
                      local_c8.b = local_140.fields.m_PressedColor.fields.b;
                      local_c8.a = local_140.fields.m_PressedColor.fields.a;
                      local_d8.r = local_140.fields.m_HighlightedColor.fields.r;
                      local_d8.g = local_140.fields.m_HighlightedColor.fields.g;
                      local_d8.b = local_140.fields.m_HighlightedColor.fields.b;
                      local_d8.a = local_140.fields.m_HighlightedColor.fields.a;
                      local_e8.r = local_140.fields.m_NormalColor.fields.r;
                      local_e8.g = local_140.fields.m_NormalColor.fields.g;
                      local_e8.b = local_140.fields.m_NormalColor.fields.b;
                      local_e8.a = local_140.fields.m_NormalColor.fields.a;
                      value_00.fields.m_NormalColor.fields.b =
                           local_140.fields.m_NormalColor.fields.b;
                      value_00.fields.m_NormalColor.fields.a =
                           local_140.fields.m_NormalColor.fields.a;
                      value_00.fields.m_NormalColor.fields.r =
                           local_140.fields.m_NormalColor.fields.r;
                      value_00.fields.m_NormalColor.fields.g =
                           local_140.fields.m_NormalColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.r =
                           local_140.fields.m_HighlightedColor.fields.r;
                      value_00.fields.m_HighlightedColor.fields.g =
                           local_140.fields.m_HighlightedColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.b =
                           local_140.fields.m_HighlightedColor.fields.b;
                      value_00.fields.m_HighlightedColor.fields.a =
                           local_140.fields.m_HighlightedColor.fields.a;
                      value_00.fields.m_PressedColor.fields.r =
                           local_140.fields.m_PressedColor.fields.r;
                      value_00.fields.m_PressedColor.fields.g =
                           local_140.fields.m_PressedColor.fields.g;
                      value_00.fields.m_PressedColor.fields.b =
                           local_140.fields.m_PressedColor.fields.b;
                      value_00.fields.m_PressedColor.fields.a =
                           local_140.fields.m_PressedColor.fields.a;
                      value_00.fields.m_SelectedColor.fields.r =
                           local_140.fields.m_SelectedColor.fields.r;
                      value_00.fields.m_SelectedColor.fields.g =
                           local_140.fields.m_SelectedColor.fields.g;
                      value_00.fields.m_SelectedColor.fields.b =
                           local_140.fields.m_SelectedColor.fields.b;
                      value_00.fields.m_SelectedColor.fields.a =
                           local_140.fields.m_SelectedColor.fields.a;
                      value_00.fields.m_DisabledColor.fields.r =
                           local_140.fields.m_DisabledColor.fields.r;
                      value_00.fields.m_DisabledColor.fields.g =
                           local_140.fields.m_DisabledColor.fields.g;
                      value_00.fields.m_DisabledColor.fields.b =
                           local_140.fields.m_DisabledColor.fields.b;
                      value_00.fields.m_DisabledColor.fields.a =
                           local_140.fields.m_DisabledColor.fields.a;
                      value_00.fields.m_ColorMultiplier = local_140.fields.m_ColorMultiplier;
                      value_00.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
                      UnityEngine_UI_Selectable__set_colors(__this_01,value_00,(MethodInfo *)0x0);
                      pUVar4 = *ppUVar1;
                      UVar14 = UI_UIManager__GetThemeColor
                                         ((style->fields).ThemePanel,"DefaultSetting","TextColor",
                                          "DefaultPanel",(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                                  (UVar14.fields.r,UVar14.fields.b,pUVar4,
                                   (pUVar4->klass->vtable)._23_set_color.method);
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
LAB_04084797:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IncrementSettingElement$$OnButtonPressed
// il2cpp: void UI_IncrementSettingElement__OnButtonPressed (UI_IncrementSettingElement_o* __this, bool increment, const MethodInfo* method);
// 0x40847a0

void UI_IncrementSettingElement__OnButtonPressed
               (UI_IncrementSettingElement_o *__this,bool_conflict increment,MethodInfo *method)

{
  byte bVar1;
  uint value;
  Settings_TypedSetting_int__o *__this_00;
  System_Func_bool__o *pSVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  char cVar4;
  uint value_00;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,increment);
  if (DAT_05704539 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704539 = '\x01';
  }
  if ((__this->fields)._settingType == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
    value = (__this_00->fields)._value;
    value_00 = (value + (increment & 0xffU) * 2) - 1;
    method_00 = (MethodInfo *)(ulong)value_00;
    Settings_TypedSetting<int>__set_Value(__this_00,value_00,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields)._validation;
    if (pSVar2 != (System_Func_bool__o *)0x0) {
      method_00 = (MethodInfo *)(pSVar2->fields).method;
      cVar4 = (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code);
      if (cVar4 == '\0') {
        method_00 = (MethodInfo *)(ulong)value;
        Settings_TypedSetting<int>__set_Value(__this_00,value,MethodInfo_Void_set_Value);
      }
    }
  }
  UI_IncrementSettingElement__UpdateValueLabel(__this,method_00);
  pUVar3 = (__this->fields)._onValueChanged;
  if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
    return;
  }
  return;
}


// UI.IncrementSettingElement$$UpdateValueLabel
// il2cpp: void UI_IncrementSettingElement__UpdateValueLabel (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x40848b0

void UI_IncrementSettingElement__UpdateValueLabel
               (UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Settings_BaseSetting_o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  undefined4 local_c;
  
  if (DAT_0570453a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570453a = '\x01';
  }
  local_c = 0;
  if ((__this->fields)._settingType != 2) {
    return;
  }
  pSVar3 = (__this->fields)._options;
  pSVar4 = (__this->fields)._setting;
  pUVar5 = (__this->fields)._valueLabel;
  if (pSVar3 == (System_String_array *)0x0) {
    if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (pSVar4->klass->_2).naturalAligment) &&
         ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar4->klass->_2).naturalAligment) &&
           ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
          local_c = *(undefined4 *)((long)&pSVar4[1].klass + 4);
          pSVar6 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                      (pUVar5,pSVar6,(pUVar5->klass->vtable)._75_set_text.method);
            return;
          }
          goto LAB_04084a1c;
        }
      }
      goto LAB_04084a17;
    }
  }
  else if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar1 <= (pSVar4->klass->_2).naturalAligment) &&
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (pSVar4->klass->_2).naturalAligment) &&
         ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        uVar2 = *(uint *)((long)&pSVar4[1].klass + 4);
        if ((uint)pSVar3->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                    (pUVar5,pSVar3->m_Items[(int)uVar2],(pUVar5->klass->vtable)._75_set_text.method)
          ;
          return;
        }
        goto LAB_04084a1c;
      }
    }
LAB_04084a17:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
LAB_04084a1c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IncrementSettingElement$$SyncElement
// il2cpp: void UI_IncrementSettingElement__SyncElement (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x4084a30

void UI_IncrementSettingElement__SyncElement
               (UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UI_IncrementSettingElement__UpdateValueLabel(__this,method);
  return;
}


// UI.IncrementSettingElement$$.ctor
// il2cpp: void UI_IncrementSettingElement___ctor (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x4084a40

void UI_IncrementSettingElement___ctor(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IncrementSettingElement$$<Setup>b__6_0
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_0 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x4084a50

void UI_IncrementSettingElement__<Setup>b__6_0
               (UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_IncrementSettingElement__OnButtonPressed(__this,0,in_RDX);
  return;
}


// UI.IncrementSettingElement$$<Setup>b__6_1
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_1 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x4084a60

void UI_IncrementSettingElement__<Setup>b__6_1
               (UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_IncrementSettingElement__OnButtonPressed(__this,1,in_RDX);
  return;
}


