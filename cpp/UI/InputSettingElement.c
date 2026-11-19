// Type: UI.InputSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InputSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// --------------------------------

// UI.InputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_InputSettingElement__get_SupportedSettingTypes (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1cb0

System_Collections_Generic_HashSet_SettingType__o *
UI_InputSettingElement__get_SupportedSettingTypes(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547c93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547c93 = '\x01';
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
            ((System_Collections_Generic_HashSet_T__o *)__this_00,3,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.InputSettingElement$$Setup
// il2cpp: void UI_InputSettingElement__Setup (UI_InputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, bool multiLine, UnityEngine_Events_UnityAction_o* onValueChanged, UnityEngine_Events_UnityAction_o* onEndEdit, System_Func_string__bool__o* onValidate, System_Func_string__string__o* onCleanup, const MethodInfo* method);
// 0x5cf1d60

void UI_InputSettingElement__Setup
               (UI_InputSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               bool multiLine,UnityEngine_Events_UnityAction_o *onValueChanged,
               UnityEngine_Events_UnityAction_o *onEndEdit,System_Func_string__bool__o *onValidate,
               System_Func_string__string__o *onCleanup,MethodInfo *method)

{
  UnityEngine_UI_InputField_o **targetAddress;
  byte bVar1;
  System_String_o *panel;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  UnityEngine_UI_ColorBlock_o value;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_InputField_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_UI_Image_o *value_00;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  UnityEngine_Events_UnityAction_T0__o *pUVar9;
  int value_01;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar10;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547c94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_InputFieldPasteable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InputSettingElement_Setup_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InputSettingElement_Setup_b__11_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Input");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"InputTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"InputSelectionColor");
    Il2CppMethodInitialized_07547c94 = '\x01';
  }
  if (style == (UI_ElementStyle_o *)0x0) goto label_05cf25b9;
  if ((style->fields).FontSize < 0x13) {
    (__this->fields)._inputFontSizeOffset = -2;
  }
  (__this->fields)._onValueChanged = onValueChanged;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onValueChanged);
  (__this->fields)._onEndEdit = onEndEdit;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onEndEdit);
  (__this->fields)._onValidate = onValidate;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onValidate);
  (__this->fields)._onCleanup = onCleanup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onCleanup);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"InputField",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05cf25b9;
  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
  targetAddress = &(__this->fields)._inputField;
  (__this->fields)._inputField = pUVar6;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar6 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"InputField",(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05cf25b9;
    pUVar6 = (UnityEngine_UI_InputField_o *)
             UnityEngine_GameObject__AddComponent_object_
                       (pUVar5,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_InputFieldPasteable);
    *targetAddress = pUVar6;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar6 = *targetAddress;
    if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    UnityEngine_UI_InputField__set_textComponent(pUVar6,pUVar7,(MethodInfo *)0x0);
    if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
    UnityEngine_UI_Selectable__set_transition
              ((UnityEngine_UI_Selectable_o *)*targetAddress,1,(MethodInfo *)0x0);
    pUVar6 = *targetAddress;
    if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
    value_00 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar6,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)pUVar6,(UnityEngine_UI_Graphic_o *)value_00,(MethodInfo *)0x0);
  }
  if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  UnityEngine_UI_InputField__set_text
            (*targetAddress,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  pUVar6 = *targetAddress;
  panel = (style->fields).ThemePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  method_00 = (MethodInfo *)0x0;
  UI_UIManager__GetThemeColorBlock
            (&local_88,panel,"DefaultSetting","Input","DefaultPanel",
             (MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
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
  UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar6,value,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar7 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  UVar10 = UI_UIManager__GetThemeColor
                     ((style->fields).ThemePanel,"DefaultSetting","InputTextColor",
                      "DefaultPanel",(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_05cf25b9;
  (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
            (pUVar7,UVar10,(pUVar7->klass->vtable)._23_set_color.method);
  pUVar6 = *targetAddress;
  UVar10 = UI_UIManager__GetThemeColor
                     ((style->fields).ThemePanel,"DefaultSetting","InputSelectionColor",
                      "DefaultPanel",(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  UnityEngine_UI_InputField__set_selectionColor(pUVar6,UVar10,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar7 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_05cf25b9;
  UnityEngine_UI_Text__set_fontSize
            (pUVar7,(style->fields).FontSize + (__this->fields)._inputFontSizeOffset,(MethodInfo *)0x0);
  pUVar6 = (__this->fields)._inputField;
  if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf25b9;
  pUVar7 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  UVar10 = UI_UIManager__GetThemeColor
                     ((style->fields).ThemePanel,"DefaultSetting","InputTextColor",
                      "DefaultPanel",(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_05cf25b9;
  (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
            (pUVar7,UVar10,(pUVar7->klass->vtable)._23_set_color.method);
  if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  pUVar8 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)*targetAddress,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar8 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf25b9;
  (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar8,elementWidth,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
  if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  pUVar8 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)*targetAddress,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar8 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf25b9;
  (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar8,elementHeight,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
  if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
  UnityEngine_UI_InputField__set_lineType(*targetAddress,(uint)multiLine * 2,(MethodInfo *)0x0);
  iVar3 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar3;
  if (iVar3 == 2) {
    if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
    UnityEngine_UI_InputField__set_contentType(*targetAddress,2,(MethodInfo *)0x0);
    pUVar6 = *targetAddress;
    if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
    value_01 = 10;
label_05cf24d8:
    UnityEngine_UI_InputField__set_characterLimit(pUVar6,value_01,(MethodInfo *)0x0);
  }
  else {
    if (iVar3 == 4) {
      if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
      UnityEngine_UI_InputField__set_contentType(*targetAddress,0,(MethodInfo *)0x0);
      if (setting == (Settings_BaseSetting_o *)0x0) goto label_05cf25b9;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      value_01 = *(int *)&(*(uint64_t *)((char *)setting + 0x28));
      pUVar6 = *targetAddress;
      if (value_01 == 0x7fffffff) {
        if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
        value_01 = 0;
      }
      else if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
      goto label_05cf24d8;
    }
    if (iVar3 == 3) {
      if (*targetAddress == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
      UnityEngine_UI_InputField__set_contentType(*targetAddress,3,(MethodInfo *)0x0);
      pUVar6 = *targetAddress;
      if (pUVar6 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf25b9;
      value_01 = 0x14;
      goto label_05cf24d8;
    }
  }
  if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
    __this_00 = ((*targetAddress)->fields).m_OnValueChanged;
    pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_InputSettingElement_Setup_b__11_0,
               (MethodInfo_4311A10 *)0x0);
    if (__this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar9,
                 (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      if (*targetAddress != (UnityEngine_UI_InputField_o *)0x0) {
        __this_01 = ((*targetAddress)->fields).m_OnDidEndEdit;
        pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_InputSettingElement_Setup_b__11_1,
                   (MethodInfo_4311A10 *)0x0);
        if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent_object___AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar9,
                     (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          (__this->fields)._finishedSetup = true;
          UI_BaseSettingElement__Setup
                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,method_00);
          return;
        }
      }
    }
  }
label_05cf25b9:
  ThrowNullReferenceException();
}


// UI.InputSettingElement$$OnValueChanged
// il2cpp: void UI_InputSettingElement__OnValueChanged (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf25d0

void UI_InputSettingElement__OnValueChanged
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Func_string__bool__o *pSVar3;
  System_Func_string__string__o *pSVar4;
  Settings_TypedSetting_T__o *__this_00;
  Settings_TypedSetting_float__o *__this_01;
  Settings_BaseSetting_o *obj;
  UnityEngine_Events_UnityAction_o *pUVar5;
  int32_t value_00;
  char cVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  Settings_TypedSetting_int__o *__this_02;
  int32_t iStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547c95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547c95 = '\x01';
  }
  _iStack_28 = 0;
  if ((__this->fields)._finishedSetup != false) {
    pSVar3 = (__this->fields)._onValidate;
    if ((pSVar3 != (System_Func_string__bool__o *)0x0) &&
       (cVar6 = (*(code *)(pSVar3->fields).invoke_impl)
                          ((pSVar3->fields).method_code,value,(pSVar3->fields).method), cVar6 == '\0')) {
      return;
    }
    pSVar4 = (__this->fields)._onCleanup;
    if (pSVar4 != (System_Func_string__string__o *)0x0) {
      value = (System_String_o *)
              (*(code *)(pSVar4->fields).invoke_impl)
                        ((pSVar4->fields).method_code,value,(pSVar4->fields).method);
    }
    if ((__this->fields)._settingType == 4) {
      __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
      if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_05cf27ff;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
label_05cf27fa:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      Settings_TypedSetting_object___set_Value
                (__this_00,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    else {
      bVar7 = System_String__op_Inequality
                        (value,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (bVar7) {
        iVar2 = (__this->fields)._settingType;
        if (iVar2 == 2) {
          bVar7 = System_Int32__TryParse(value,&iStack_28,(MethodInfo *)0x0);
          if (bVar7) {
            obj = (__this->fields)._setting;
            value_00 = iStack_28;
            pIVar8 = il2cpp_codegen_is_inst_class
                               ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IntSetting);
            if (pIVar8 == (Il2CppObject *)0x0) goto label_05cf27ff;
            __this_02 = (Settings_TypedSetting_int__o *)
                        il2cpp_codegen_is_inst_class
                                  ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IntSetting);
            Settings_TypedSetting_int___set_Value
                      (__this_02,value_00,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value
                      );
          }
        }
        else if ((iVar2 == 3) && (bVar7 = System_Single__TryParse(value,&fStack_24,(MethodInfo *)0x0), bVar7))
        {
          __this_01 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
          if (__this_01 == (Settings_TypedSetting_float__o *)0x0) {
label_05cf27ff:
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) goto label_05cf27fa;
          Settings_TypedSetting_float___set_Value
                    (__this_01,fStack_24,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        }
      }
    }
    pUVar5 = (__this->fields)._onValueChanged;
    if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
    }
  }
  return;
}


// UI.InputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_InputSettingElement__OnInputFinishEditing (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf2810

void UI_InputSettingElement__OnInputFinishEditing
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  if ((__this->fields)._finishedSetup != false) {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
    pUVar1 = (__this->fields)._onEndEdit;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtableDispatch = (code *)(pUVar1->fields).invoke_impl;
      (*vtableDispatch)
                ((pUVar1->fields).method_code,(pUVar1->fields).method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// UI.InputSettingElement$$SyncElement
// il2cpp: void UI_InputSettingElement__SyncElement (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf2850

void UI_InputSettingElement__SyncElement(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  System_String_o *value;
  UnityEngine_UI_InputField_o *pUVar4;
  int32_t local_10;
  float local_c;
  
  if (Il2CppMethodInitialized_07547c96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
    Il2CppMethodInitialized_07547c96 = '\x01';
  }
  if ((__this->fields)._finishedSetup != false) {
    iVar2 = (__this->fields)._settingType;
    if (iVar2 == 2) {
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_05cf2a04;
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
      goto label_05cf29ff;
      pUVar4 = (__this->fields)._inputField;
      local_10 = *(int32_t *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
      value = System_Int32__ToString(&local_10,(MethodInfo *)0x0);
    }
    else {
      if (iVar2 == 4) {
        pSVar3 = (__this->fields)._setting;
        if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_05cf29ff;
          pUVar4 = (__this->fields)._inputField;
          if (pUVar4 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__set_text(pUVar4,(*(uint64_t *)((char *)pSVar3 + 0x20)),(MethodInfo *)0x0);
            return;
          }
        }
        goto label_05cf2a04;
      }
      if (iVar2 != 3) {
        return;
      }
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_05cf2a04;
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting
         )) {
label_05cf29ff:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pUVar4 = (__this->fields)._inputField;
      local_c = *(float *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
      value = System_Single__ToString_54d0a60(&local_c,"0.##################",(MethodInfo *)0x0);
    }
    if (pUVar4 == (UnityEngine_UI_InputField_o *)0x0) {
label_05cf2a04:
      ThrowNullReferenceException();
    }
    UnityEngine_UI_InputField__set_text(pUVar4,value,(MethodInfo *)0x0);
  }
  return;
}


// UI.InputSettingElement$$Update
// il2cpp: void UI_InputSettingElement__Update (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf2a10

void UI_InputSettingElement__Update(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547c97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_07547c97 = '\x01';
  }
  pUVar1 = (__this->fields)._inputField;
  if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
    if (((pUVar1->fields).m_AllowInput == false) || (((pUVar1->fields).m_ContentType & 0xfffffffeU) != 2)) {
      return;
    }
    bVar2 = UnityEngine_Input__GetKeyDown(0x2d,(MethodInfo *)0x0);
    if ((!bVar2) && (bVar2 = UnityEngine_Input__GetKeyDown(0x10d,(MethodInfo *)0x0), !bVar2)) {
      return;
    }
    pUVar1 = (__this->fields)._inputField;
    if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_text(pUVar1,"-",(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InputSettingElement$$.ctor
// il2cpp: void UI_InputSettingElement___ctor (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf2aa0

void UI_InputSettingElement___ctor(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$<Setup>b__11_0
// il2cpp: void UI_InputSettingElement___Setup_b__11_0 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf2ab0

void UI_InputSettingElement___Setup_b__11_0
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UI_InputSettingElement__OnValueChanged(__this,value,method);
  return;
}


// UI.InputSettingElement$$<Setup>b__11_1
// il2cpp: void UI_InputSettingElement___Setup_b__11_1 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf2ac0

void UI_InputSettingElement___Setup_b__11_1
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  if ((__this->fields)._finishedSetup != false) {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
    pUVar1 = (__this->fields)._onEndEdit;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtableDispatch = (code *)(pUVar1->fields).invoke_impl;
      (*vtableDispatch)
                ((pUVar1->fields).method_code,(pUVar1->fields).method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


