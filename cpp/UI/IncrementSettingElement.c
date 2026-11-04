// Type: UI.IncrementSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IncrementSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IncrementSettingElement.cs
// --------------------------------

// UI.IncrementSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IncrementSettingElement__get_SupportedSettingTypes (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x182212b00

System_Collections_Generic_HashSet_SettingType__o *
UI_IncrementSettingElement__get_SupportedSettingTypes(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347122 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.IncrementSettingElement$$Setup
// il2cpp: void UI_IncrementSettingElement__Setup (UI_IncrementSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, System_String_array* options, UnityEngine_Events_UnityAction_o* onValueChanged, System_Func_bool__o* validation, const MethodInfo* method);
// 0x182212320

void UI_IncrementSettingElement__Setup
               (UI_IncrementSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               System_String_array *options,UnityEngine_Events_UnityAction_o *onValueChanged,
               System_Func_bool__o *validation,MethodInfo *method)

{
  System_String_o *panel;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_HoldableButton_o *pUVar7;
  System_Action_o *pSVar8;
  UnityEngine_UI_ColorBlock_o *pUVar9;
  UnityEngine_Color_o *pUVar10;
  UnityEngine_Color_Fields local_118;
  UnityEngine_UI_ColorBlock_o local_108;
  UnityEngine_UI_ColorBlock_o local_a8;
  
  if (Il2CppMethodInitialized_184347123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoldableButton)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_IncrementSettingElement_Setup_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_IncrementSettingElement_Setup_b__6_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Increment/ValueLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Increment/RightButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Increment/LeftButton");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347123 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Increment/ValueLabel",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._valueLabel = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._valueLabel,pUVar3);
      if ((style != (UI_ElementStyle_o *)0x0) &&
         (pUVar3 = (__this->fields)._valueLabel, pUVar3 != (UnityEngine_UI_Text_o *)0x0)) {
        UnityEngine_UI_Text__set_fontSize(pUVar3,(style->fields).FontSize,(MethodInfo *)0x0);
        (__this->fields)._options = options;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._options,options);
        (__this->fields)._onValueChanged = onValueChanged;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._onValueChanged,onValueChanged);
        (__this->fields)._validation = validation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._validation,validation);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Transform__Find(pUVar2,"Increment/LeftButton",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            __this_00 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar2,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
            pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"Increment/RightButton",(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                __this_01 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar2,
                                       (MethodInfo_6651A0 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Button);
                if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
                  pUVar4 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)__this_00,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                  if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
                    pUVar5 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)__this_01,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                    pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                         (pUVar6,(MethodInfo_6F4D60 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_HoldableButton
                                         );
                      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                      System_Action___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar8,
                                 (Il2CppObject *)__this,
                                 (intptr_t)MethodInfo_UI_IncrementSettingElement_Setup_b__6_0,
                                 (MethodInfo *)0x0);
                      if (pUVar7 != (UI_HoldableButton_o *)0x0) {
                        UI_HoldableButton__add_OnClick(pUVar7,pSVar8,(MethodInfo *)0x0);
                        pUVar6 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                             (pUVar6,(MethodInfo_6F4D60 *)
                                                     MethodInfo_UnityEngine_GameObject_AddComponent_HoldableButton
                                             );
                          pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                          System_Action___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar8,
                                     (Il2CppObject *)__this,
                                     (intptr_t)MethodInfo_UI_IncrementSettingElement_Setup_b__6_1,
                                     (MethodInfo *)0x0);
                          if (pUVar7 != (UI_HoldableButton_o *)0x0) {
                            UI_HoldableButton__add_OnClick(pUVar7,pSVar8,(MethodInfo *)0x0);
                            if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                              (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                                        (pUVar5,elementWidth,
                                         (pUVar5->klass->vtable)._36_set_preferredWidth.method);
                              if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                                          (pUVar4,elementWidth,
                                           (pUVar4->klass->vtable)._36_set_preferredWidth.method);
                                (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                                          (pUVar5,elementHeight,
                                           (pUVar5->klass->vtable)._38_set_preferredHeight.method);
                                (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                                          (pUVar4,elementHeight,
                                           (pUVar4->klass->vtable)._38_set_preferredHeight.method);
                                pUVar3 = (__this->fields)._valueLabel;
                                if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                                  pUVar4 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar3,
                                                      (MethodInfo_6651A0 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                     );
                                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                  }
                                  bVar1 = UnityEngine_Object__op_Inequality
                                                    ((UnityEngine_Object_o *)pUVar4,
                                                     (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                  if (bVar1) {
                                    if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18221295e;
                                    (*(pUVar4->klass->vtable)._40_set_flexibleWidth.methodPtr)
                                              (pUVar4,0.0,(pUVar4->klass->vtable)._40_set_flexibleWidth.method
                                              );
                                    (*(pUVar4->klass->vtable)._32_set_minWidth.methodPtr)
                                              (pUVar4,-1.0,(pUVar4->klass->vtable)._32_set_minWidth.method);
                                    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                                              (pUVar4,-1.0,
                                               (pUVar4->klass->vtable)._36_set_preferredWidth.method);
                                  }
                                  UI_BaseSettingElement__Setup
                                            ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                             (MethodInfo *)0x0);
                                  panel = (style->fields).ThemePanel;
                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                  }
                                  pUVar9 = UI_UIManager__GetThemeColorBlock
                                                     (&local_a8,panel,"DefaultButton",
                                                      "","DefaultPanel",
                                                      (MethodInfo *)0x0);
                                  local_108.fields.m_NormalColor.fields.r =
                                       (pUVar9->fields).m_NormalColor.fields.r;
                                  local_108.fields.m_NormalColor.fields.g =
                                       (pUVar9->fields).m_NormalColor.fields.g;
                                  local_108.fields.m_NormalColor.fields.b =
                                       (pUVar9->fields).m_NormalColor.fields.b;
                                  local_108.fields.m_NormalColor.fields.a =
                                       (pUVar9->fields).m_NormalColor.fields.a;
                                  local_108.fields.m_HighlightedColor.fields.r =
                                       (pUVar9->fields).m_HighlightedColor.fields.r;
                                  local_108.fields.m_HighlightedColor.fields.g =
                                       (pUVar9->fields).m_HighlightedColor.fields.g;
                                  local_108.fields.m_HighlightedColor.fields.b =
                                       (pUVar9->fields).m_HighlightedColor.fields.b;
                                  local_108.fields.m_HighlightedColor.fields.a =
                                       (pUVar9->fields).m_HighlightedColor.fields.a;
                                  local_108.fields.m_PressedColor.fields.r =
                                       (pUVar9->fields).m_PressedColor.fields.r;
                                  local_108.fields.m_PressedColor.fields.g =
                                       (pUVar9->fields).m_PressedColor.fields.g;
                                  local_108.fields.m_PressedColor.fields.b =
                                       (pUVar9->fields).m_PressedColor.fields.b;
                                  local_108.fields.m_PressedColor.fields.a =
                                       (pUVar9->fields).m_PressedColor.fields.a;
                                  local_108.fields.m_SelectedColor.fields.r =
                                       (pUVar9->fields).m_SelectedColor.fields.r;
                                  local_108.fields.m_SelectedColor.fields.g =
                                       (pUVar9->fields).m_SelectedColor.fields.g;
                                  local_108.fields.m_SelectedColor.fields.b =
                                       (pUVar9->fields).m_SelectedColor.fields.b;
                                  local_108.fields.m_SelectedColor.fields.a =
                                       (pUVar9->fields).m_SelectedColor.fields.a;
                                  local_108.fields.m_DisabledColor.fields.r =
                                       (pUVar9->fields).m_DisabledColor.fields.r;
                                  local_108.fields.m_DisabledColor.fields.g =
                                       (pUVar9->fields).m_DisabledColor.fields.g;
                                  local_108.fields.m_DisabledColor.fields.b =
                                       (pUVar9->fields).m_DisabledColor.fields.b;
                                  local_108.fields.m_DisabledColor.fields.a =
                                       (pUVar9->fields).m_DisabledColor.fields.a;
                                  local_108.fields.m_ColorMultiplier = (pUVar9->fields).m_ColorMultiplier;
                                  local_108.fields.m_FadeDuration = (pUVar9->fields).m_FadeDuration;
                                  UnityEngine_UI_Selectable__set_colors
                                            ((UnityEngine_UI_Selectable_o *)__this_00,&local_108,
                                             (MethodInfo *)0x0);
                                  pUVar9 = UI_UIManager__GetThemeColorBlock
                                                     (&local_a8,(style->fields).ThemePanel,
                                                      "DefaultButton","",
                                                      "DefaultPanel",(MethodInfo *)0x0);
                                  local_108.fields.m_NormalColor.fields.r =
                                       (pUVar9->fields).m_NormalColor.fields.r;
                                  local_108.fields.m_NormalColor.fields.g =
                                       (pUVar9->fields).m_NormalColor.fields.g;
                                  local_108.fields.m_NormalColor.fields.b =
                                       (pUVar9->fields).m_NormalColor.fields.b;
                                  local_108.fields.m_NormalColor.fields.a =
                                       (pUVar9->fields).m_NormalColor.fields.a;
                                  local_108.fields.m_HighlightedColor.fields.r =
                                       (pUVar9->fields).m_HighlightedColor.fields.r;
                                  local_108.fields.m_HighlightedColor.fields.g =
                                       (pUVar9->fields).m_HighlightedColor.fields.g;
                                  local_108.fields.m_HighlightedColor.fields.b =
                                       (pUVar9->fields).m_HighlightedColor.fields.b;
                                  local_108.fields.m_HighlightedColor.fields.a =
                                       (pUVar9->fields).m_HighlightedColor.fields.a;
                                  local_108.fields.m_PressedColor.fields.r =
                                       (pUVar9->fields).m_PressedColor.fields.r;
                                  local_108.fields.m_PressedColor.fields.g =
                                       (pUVar9->fields).m_PressedColor.fields.g;
                                  local_108.fields.m_PressedColor.fields.b =
                                       (pUVar9->fields).m_PressedColor.fields.b;
                                  local_108.fields.m_PressedColor.fields.a =
                                       (pUVar9->fields).m_PressedColor.fields.a;
                                  local_108.fields.m_SelectedColor.fields.r =
                                       (pUVar9->fields).m_SelectedColor.fields.r;
                                  local_108.fields.m_SelectedColor.fields.g =
                                       (pUVar9->fields).m_SelectedColor.fields.g;
                                  local_108.fields.m_SelectedColor.fields.b =
                                       (pUVar9->fields).m_SelectedColor.fields.b;
                                  local_108.fields.m_SelectedColor.fields.a =
                                       (pUVar9->fields).m_SelectedColor.fields.a;
                                  local_108.fields.m_DisabledColor.fields.r =
                                       (pUVar9->fields).m_DisabledColor.fields.r;
                                  local_108.fields.m_DisabledColor.fields.g =
                                       (pUVar9->fields).m_DisabledColor.fields.g;
                                  local_108.fields.m_DisabledColor.fields.b =
                                       (pUVar9->fields).m_DisabledColor.fields.b;
                                  local_108.fields.m_DisabledColor.fields.a =
                                       (pUVar9->fields).m_DisabledColor.fields.a;
                                  local_108.fields.m_ColorMultiplier = (pUVar9->fields).m_ColorMultiplier;
                                  local_108.fields.m_FadeDuration = (pUVar9->fields).m_FadeDuration;
                                  UnityEngine_UI_Selectable__set_colors
                                            ((UnityEngine_UI_Selectable_o *)__this_01,&local_108,
                                             (MethodInfo *)0x0);
                                  pUVar3 = (__this->fields)._valueLabel;
                                  pUVar10 = UI_UIManager__GetThemeColor
                                                      ((UnityEngine_Color_o *)&local_118,
                                                       (style->fields).ThemePanel,"DefaultSetting",
                                                       "TextColor","DefaultPanel",
                                                       (MethodInfo *)0x0);
                                  if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                                    local_118.r = (pUVar10->fields).r;
                                    local_118.g = (pUVar10->fields).g;
                                    local_118.b = (pUVar10->fields).b;
                                    local_118.a = (pUVar10->fields).a;
                                    (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                                              (pUVar3,(UnityEngine_Color_o *)&local_118,
                                               (pUVar3->klass->vtable)._23_set_color.method);
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
      }
    }
  }
label_18221295e:
  ThrowNullReferenceException();
}


// UI.IncrementSettingElement$$OnButtonPressed
// il2cpp: void UI_IncrementSettingElement__OnButtonPressed (UI_IncrementSettingElement_o* __this, bool increment, const MethodInfo* method);
// 0x1822121f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822122d2: mov rbp, qword ptr [rsp + 0x38]

void UI_IncrementSettingElement__OnButtonPressed
               (UI_IncrementSettingElement_o *__this,bool increment,MethodInfo *method)

{
  byte bVar1;
  int value;
  Settings_TypedSetting_int__o *__this_00;
  System_Func_bool__o *pSVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  char cVar4;
  int32_t value_00;
  
  if (Il2CppMethodInitialized_184347124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347124 = '\x01';
  }
  if ((__this->fields)._settingType == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    value = (__this_00->fields)._value;
    if (increment) {
      value_00 = value + 1;
    }
    else {
      value_00 = value + -1;
    }
    Settings_TypedSetting_int___set_Value
              (__this_00,value_00,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if (((__this->fields)._validation != (System_Func_bool__o *)0x0) &&
       (pSVar2 = (__this->fields)._validation,
       cVar4 = (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code), cVar4 == '\0')) {
      Settings_TypedSetting_int___set_Value
                (__this_00,value,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
  }
  UI_IncrementSettingElement__UpdateValueLabel(__this,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._onValueChanged;
  if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
  }
  return;
}


// UI.IncrementSettingElement$$UpdateValueLabel
// il2cpp: void UI_IncrementSettingElement__UpdateValueLabel (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x1822129a0

void UI_IncrementSettingElement__UpdateValueLabel(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Settings_BaseSetting_o *pSVar3;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347125 = '\x01';
  }
  local_res8[0] = 0;
  if ((__this->fields)._settingType != 2) {
    return;
  }
  pSVar3 = (__this->fields)._setting;
  pUVar4 = (__this->fields)._valueLabel;
  if ((__this->fields)._options == (System_String_array *)0x0) {
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
      }
      local_res8[0] = *(int32_t *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
      pSVar6 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                  (pUVar4,pSVar6,(pUVar4->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  else if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
    }
    pSVar5 = (__this->fields)._options;
    uVar2 = *(uint *)((longlong)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
    if ((uint)pSVar5->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar5->m_Items[(int)uVar2],(pUVar4->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.IncrementSettingElement$$SyncElement
// il2cpp: void UI_IncrementSettingElement__SyncElement (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x182212970

void UI_IncrementSettingElement__SyncElement(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UI_IncrementSettingElement__UpdateValueLabel(__this,(MethodInfo *)0x0);
  return;
}


// UI.IncrementSettingElement$$.ctor
// il2cpp: void UI_IncrementSettingElement___ctor (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_IncrementSettingElement___ctor(UI_IncrementSettingElement_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IncrementSettingElement$$<Setup>b__6_0
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_0 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x182212980

void UI_IncrementSettingElement___Setup_b__6_0(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UI_IncrementSettingElement__OnButtonPressed(__this,false,(MethodInfo *)0x0);
  return;
}


// UI.IncrementSettingElement$$<Setup>b__6_1
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_1 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x182212990

void UI_IncrementSettingElement___Setup_b__6_1(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UI_IncrementSettingElement__OnButtonPressed(__this,true,(MethodInfo *)0x0);
  return;
}


