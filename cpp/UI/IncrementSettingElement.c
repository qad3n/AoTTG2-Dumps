// Type: UI.IncrementSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/IncrementSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IncrementSettingElement.cs
// --------------------------------

// UI.IncrementSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IncrementSettingElement__get_SupportedSettingTypes (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x5cf12c0

System_Collections_Generic_HashSet_SettingType__o *
UI_IncrementSettingElement__get_SupportedSettingTypes(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547c8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547c8f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_4FAD1E0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 == (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.IncrementSettingElement$$Setup
// il2cpp: void UI_IncrementSettingElement__Setup (UI_IncrementSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, System_String_array* options, UnityEngine_Events_UnityAction_o* onValueChanged, System_Func_bool__o* validation, const MethodInfo* method);
// 0x5cf1340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cf16b0: jmp 0x5cf1770

void UI_IncrementSettingElement__Setup
               (UI_IncrementSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               System_String_array *options,UnityEngine_Events_UnityAction_o *onValueChanged,
               System_Func_bool__o *validation,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UI_HoldableButton_o *pUVar6;
  System_Action_o *pSVar7;
  System_Action_o *pSVar8;
  System_Delegate_o *value_01;
  System_Action_o *pSVar9;
  System_String_array *method_00;
  bool bVar10;
  UnityEngine_Color_o UVar11;
  UnityEngine_UI_ColorBlock_o local_e0;
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = options;
  if (Il2CppMethodInitialized_07547c90 == '\0') {
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
    Il2CppMethodInitialized_07547c90 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar1 = UnityEngine_Transform__Find(pUVar1,"Increment/ValueLabel",(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    targetAddress = &(__this->fields)._valueLabel;
    (__this->fields)._valueLabel = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((style != (UI_ElementStyle_o *)0x0) &&
       (pUVar2 = (__this->fields)._valueLabel, pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(pUVar2,(style->fields).FontSize,(MethodInfo *)0x0);
      (__this->fields)._options = options;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
      (__this->fields)._onValueChanged = onValueChanged;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onValueChanged);
      (__this->fields)._validation = validation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._validation);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar1 = UnityEngine_Transform__Find(pUVar1,"Increment/LeftButton",(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
        __this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
        pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
           (((pUVar1 = UnityEngine_Transform__Find(pUVar1,"Increment/RightButton",(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_Transform_o *)0x0 &&
             (__this_01 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar1,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_Button),
             __this_00 != (UnityEngine_UI_Button_o *)0x0)) &&
            (pUVar3 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_00,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_LayoutElement),
            __this_01 != (UnityEngine_UI_Button_o *)0x0)))) {
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar5,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_HoldableButton);
            pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
            System_Action___ctor
                      (pSVar7,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_IncrementSettingElement_Setup_b__6_0,(MethodInfo *)0x0);
            if (pUVar6 != (UI_HoldableButton_o *)0x0) {
              if (Il2CppMethodInitialized_07547c8a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
                Il2CppMethodInitialized_07547c8a = '\x01';
              }
              pSVar9 = (pUVar6->fields).OnClick;
              do {
                value_01 = System_Delegate__Combine
                                     ((System_Delegate_o *)pSVar9,(System_Delegate_o *)pSVar7,
                                      (MethodInfo *)0x0);
                if ((value_01 != (System_Delegate_o *)0x0) &&
                   ((System_Action_c *)value_01->klass != TypeInfo_System_Action)) goto label_05cf1770;
                pSVar8 = il2cpp_codegen_interlocked_compare_exchange_ref
                                   (&(pUVar6->fields).OnClick,value_01,pSVar9);
                bVar10 = pSVar8 != pSVar9;
                pSVar9 = pSVar8;
              } while (bVar10);
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                pUVar6 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar5,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_HoldableButton);
                pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                System_Action___ctor
                          (pSVar7,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_IncrementSettingElement_Setup_b__6_1,(MethodInfo *)0x0);
                if (pUVar6 != (UI_HoldableButton_o *)0x0) {
                  if (Il2CppMethodInitialized_07547c8a == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
                    Il2CppMethodInitialized_07547c8a = '\x01';
                  }
                  pSVar9 = (pUVar6->fields).OnClick;
                  do {
                    value_01 = System_Delegate__Combine
                                         ((System_Delegate_o *)pSVar9,(System_Delegate_o *)pSVar7,
                                          (MethodInfo *)0x0);
                    if ((value_01 != (System_Delegate_o *)0x0) &&
                       ((System_Action_c *)value_01->klass != TypeInfo_System_Action)) {
label_05cf1770:
                      il2cpp_codegen_raise_invalid_cast_exception(value_01);
                    }
                    pSVar8 = il2cpp_codegen_interlocked_compare_exchange_ref
                                       (&(pUVar6->fields).OnClick,value_01,pSVar9);
                    bVar10 = pSVar8 != pSVar9;
                    pSVar9 = pSVar8;
                  } while (bVar10);
                  if ((pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
                     ((*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (pUVar4,elementWidth,(pUVar4->klass->vtable)._36_set_preferredWidth.method),
                     pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
                    (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar3,elementWidth,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
                    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                              (pUVar4,elementHeight,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
                    (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                              (pUVar3,elementHeight,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
                    if (*targetAddress != (UnityEngine_UI_Text_o *)0x0) {
                      pUVar3 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)*targetAddress,
                                          (MethodInfo_34B0830 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar10 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (bVar10) {
                        if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf1a36;
                        (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                                  (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
                        (*(pUVar3->klass->vtable)._32_set_minWidth.methodPtr)
                                  (pUVar3,-1.0,(pUVar3->klass->vtable)._32_set_minWidth.method);
                        (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                                  (pUVar3,-1.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
                      }
                      UI_BaseSettingElement__Setup
                                ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                 (MethodInfo *)method_00);
                      panel = (style->fields).ThemePanel;
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      UI_UIManager__GetThemeColorBlock
                                (&local_88,panel,"DefaultButton","",
                                 "DefaultPanel",(MethodInfo *)0x0);
                      value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                      value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                      value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                      value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                      value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r;
                      value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g;
                      value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b;
                      value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a;
                      value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
                      value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
                      value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
                      value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
                      value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
                      value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
                      value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
                      value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
                      value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
                      value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
                      value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
                      value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
                      value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                      value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                      UnityEngine_UI_Selectable__set_colors
                                ((UnityEngine_UI_Selectable_o *)__this_00,value,(MethodInfo *)0x0);
                      UI_UIManager__GetThemeColorBlock
                                (&local_e0,(style->fields).ThemePanel,"DefaultButton",
                                 "","DefaultPanel",(MethodInfo *)0x0);
                      value_00.fields.m_NormalColor.fields.b = local_e0.fields.m_NormalColor.fields.b;
                      value_00.fields.m_NormalColor.fields.a = local_e0.fields.m_NormalColor.fields.a;
                      value_00.fields.m_NormalColor.fields.r = local_e0.fields.m_NormalColor.fields.r;
                      value_00.fields.m_NormalColor.fields.g = local_e0.fields.m_NormalColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.r =
                           local_e0.fields.m_HighlightedColor.fields.r;
                      value_00.fields.m_HighlightedColor.fields.g =
                           local_e0.fields.m_HighlightedColor.fields.g;
                      value_00.fields.m_HighlightedColor.fields.b =
                           local_e0.fields.m_HighlightedColor.fields.b;
                      value_00.fields.m_HighlightedColor.fields.a =
                           local_e0.fields.m_HighlightedColor.fields.a;
                      value_00.fields.m_PressedColor.fields.r = local_e0.fields.m_PressedColor.fields.r;
                      value_00.fields.m_PressedColor.fields.g = local_e0.fields.m_PressedColor.fields.g;
                      value_00.fields.m_PressedColor.fields.b = local_e0.fields.m_PressedColor.fields.b;
                      value_00.fields.m_PressedColor.fields.a = local_e0.fields.m_PressedColor.fields.a;
                      value_00.fields.m_SelectedColor.fields.r = local_e0.fields.m_SelectedColor.fields.r;
                      value_00.fields.m_SelectedColor.fields.g = local_e0.fields.m_SelectedColor.fields.g;
                      value_00.fields.m_SelectedColor.fields.b = local_e0.fields.m_SelectedColor.fields.b;
                      value_00.fields.m_SelectedColor.fields.a = local_e0.fields.m_SelectedColor.fields.a;
                      value_00.fields.m_DisabledColor.fields.r = local_e0.fields.m_DisabledColor.fields.r;
                      value_00.fields.m_DisabledColor.fields.g = local_e0.fields.m_DisabledColor.fields.g;
                      value_00.fields.m_DisabledColor.fields.b = local_e0.fields.m_DisabledColor.fields.b;
                      value_00.fields.m_DisabledColor.fields.a = local_e0.fields.m_DisabledColor.fields.a;
                      value_00.fields.m_ColorMultiplier = local_e0.fields.m_ColorMultiplier;
                      value_00.fields.m_FadeDuration = local_e0.fields.m_FadeDuration;
                      UnityEngine_UI_Selectable__set_colors
                                ((UnityEngine_UI_Selectable_o *)__this_01,value_00,(MethodInfo *)0x0);
                      pUVar2 = *targetAddress;
                      UVar11 = UI_UIManager__GetThemeColor
                                         ((style->fields).ThemePanel,"DefaultSetting",
                                          "TextColor","DefaultPanel",(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar2,UVar11,(pUVar2->klass->vtable)._23_set_color.method);
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
label_05cf1a36:
  ThrowNullReferenceException();
}


// UI.IncrementSettingElement$$OnButtonPressed
// il2cpp: void UI_IncrementSettingElement__OnButtonPressed (UI_IncrementSettingElement_o* __this, bool increment, const MethodInfo* method);
// 0x5cf1a40

void UI_IncrementSettingElement__OnButtonPressed
               (UI_IncrementSettingElement_o *__this,bool increment,MethodInfo *method)

{
  byte bVar1;
  uint value;
  Settings_TypedSetting_int__o *__this_00;
  System_Func_bool__o *pSVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  char cVar4;
  uint value_00;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,increment);
  if (Il2CppMethodInitialized_07547c91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547c91 = '\x01';
  }
  if ((__this->fields)._settingType == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
       ) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    value = (__this_00->fields)._value;
    value_00 = (value + (uint)increment * 2) - 1;
    method_00 = (MethodInfo *)(ulong)value_00;
    Settings_TypedSetting_int___set_Value
              (__this_00,value_00,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar2 = (__this->fields)._validation;
    if (pSVar2 != (System_Func_bool__o *)0x0) {
      method_00 = (MethodInfo *)(pSVar2->fields).method;
      cVar4 = (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code);
      if (cVar4 == '\0') {
        method_00 = (MethodInfo *)(ulong)value;
        Settings_TypedSetting_int___set_Value
                  (__this_00,value,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      }
    }
  }
  UI_IncrementSettingElement__UpdateValueLabel(__this,method_00);
  pUVar3 = (__this->fields)._onValueChanged;
  if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
  return;
}


// UI.IncrementSettingElement$$UpdateValueLabel
// il2cpp: void UI_IncrementSettingElement__UpdateValueLabel (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1b50

void UI_IncrementSettingElement__UpdateValueLabel(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Settings_BaseSetting_o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  int32_t iStack_c;
  
  if (Il2CppMethodInitialized_07547c92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547c92 = '\x01';
  }
  if ((__this->fields)._settingType != 2) {
    return;
  }
  pSVar3 = (__this->fields)._options;
  pSVar4 = (__this->fields)._setting;
  pUVar5 = (__this->fields)._valueLabel;
  if (pSVar3 == (System_String_array *)0x0) {
    if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
      goto label_05cf1c61;
      iStack_c = *(int32_t *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x18)) + 4);
      pSVar6 = System_Int32__ToString(&iStack_c,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar6,(pUVar5->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  else if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
label_05cf1c61:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    uVar2 = *(uint *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x18)) + 4);
    if ((uint)pSVar3->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                (pUVar5,pSVar3->m_Items[(int)uVar2],(pUVar5->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.IncrementSettingElement$$SyncElement
// il2cpp: void UI_IncrementSettingElement__SyncElement (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1c70

void UI_IncrementSettingElement__SyncElement(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UI_IncrementSettingElement__UpdateValueLabel(__this,method);
  return;
}


// UI.IncrementSettingElement$$.ctor
// il2cpp: void UI_IncrementSettingElement___ctor (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1c80

void UI_IncrementSettingElement___ctor(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IncrementSettingElement$$<Setup>b__6_0
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_0 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1c90

void UI_IncrementSettingElement___Setup_b__6_0(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_IncrementSettingElement__OnButtonPressed(__this,false,in_RDX);
  return;
}


// UI.IncrementSettingElement$$<Setup>b__6_1
// il2cpp: void UI_IncrementSettingElement___Setup_b__6_1 (UI_IncrementSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1ca0

void UI_IncrementSettingElement___Setup_b__6_1(UI_IncrementSettingElement_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_IncrementSettingElement__OnButtonPressed(__this,true,in_RDX);
  return;
}


