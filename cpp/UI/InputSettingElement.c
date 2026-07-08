// Type: UI.InputSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/InputSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.InputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_InputSettingElement__get_SupportedSettingTypes (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x4084a70

System_Collections_Generic_HashSet_SettingType__o *
UI_InputSettingElement__get_SupportedSettingTypes
          (UI_InputSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_0570453b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_0570453b = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,3,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InputSettingElement$$Setup
// il2cpp: void UI_InputSettingElement__Setup (UI_InputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, bool multiLine, UnityEngine_Events_UnityAction_o* onValueChanged, UnityEngine_Events_UnityAction_o* onEndEdit, System_Func_string__bool__o* onValidate, System_Func_string__string__o* onCleanup, const MethodInfo* method);
// 0x4084b20

void UI_InputSettingElement__Setup
               (UI_InputSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,
               float elementWidth,float elementHeight,bool_conflict multiLine,
               UnityEngine_Events_UnityAction_o *onValueChanged,
               UnityEngine_Events_UnityAction_o *onEndEdit,System_Func_string__bool__o *onValidate,
               System_Func_string__string__o *onCleanup,MethodInfo *method)

{
  UnityEngine_UI_InputField_o **ppUVar1;
  byte bVar2;
  System_String_o *panel;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_00;
  UnityEngine_UI_InputField_SubmitEvent_o *__this_01;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_InputField_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_UI_Graphic_o *value_00;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_T0__o *pUVar10;
  int value_01;
  UnityEngine_Color_o UVar11;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_0570453c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_InputFieldPasteable_AddComponent_InputFieldPaste);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_1);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Input");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"InputTextColor");
    il2cpp_init_method_metadata(&"InputSelectionColor");
    DAT_0570453c = '\x01';
  }
  if (style == (UI_ElementStyle_o *)0x0) goto LAB_040853d1;
  if ((style->fields).FontSize < 0x13) {
    (__this->fields)._inputFontSizeOffset = -2;
  }
  (__this->fields)._onValueChanged = onValueChanged;
  il2cpp_runtime_glue(&(__this->fields)._onValueChanged);
  (__this->fields)._onEndEdit = onEndEdit;
  il2cpp_runtime_glue(&(__this->fields)._onEndEdit,onEndEdit);
  (__this->fields)._onValidate = onValidate;
  il2cpp_runtime_glue(&(__this->fields)._onValidate,onValidate);
  (__this->fields)._onCleanup = onCleanup;
  il2cpp_runtime_glue(&(__this->fields)._onCleanup);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"InputField",(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pUVar6 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040853d1;
  pUVar7 = (UnityEngine_UI_InputField_o *)
           UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_InputField_GetComponent_InputField);
  ppUVar1 = &(__this->fields)._inputField;
  (__this->fields)._inputField = pUVar7;
  il2cpp_runtime_glue(ppUVar1);
  pUVar7 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"InputField",(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040853d1;
    pUVar7 = (UnityEngine_UI_InputField_o *)
             UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_InputFieldPasteable_AddComponent_InputFieldPaste);
    *ppUVar1 = pUVar7;
    il2cpp_runtime_glue(ppUVar1);
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
    pUVar8 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
    UnityEngine_UI_InputField__set_textComponent(pUVar7,pUVar8,(MethodInfo *)0x0);
    if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
    UnityEngine_UI_Selectable__set_transition
              ((UnityEngine_UI_Selectable_o *)*ppUVar1,1,(MethodInfo *)0x0);
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
    value_00 = (UnityEngine_UI_Graphic_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)pUVar7,value_00,(MethodInfo *)0x0);
  }
  if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  UnityEngine_UI_InputField__set_text
            (*ppUVar1,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  pUVar7 = *ppUVar1;
  panel = (style->fields).ThemePanel;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_UIManager__GetThemeColorBlock
            (&local_88,panel,"DefaultSetting","Input","DefaultPanel",(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
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
            ((UnityEngine_UI_Selectable_o *)pUVar7,value,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  pUVar5 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pIVar9 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
  UVar11 = UI_UIManager__GetThemeColor
                     ((style->fields).ThemePanel,"DefaultSetting","InputTextColor","DefaultPanel",
                      (MethodInfo *)0x0);
  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_040853d1;
  (*pIVar9->klass->vtable[0x17].methodPtr)
            (UVar11.fields.r,UVar11.fields.b,pIVar9,pIVar9->klass->vtable[0x17].method);
  pUVar7 = *ppUVar1;
  UVar11 = UI_UIManager__GetThemeColor
                     ((style->fields).ThemePanel,"DefaultSetting","InputSelectionColor","DefaultPanel",
                      (MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  UnityEngine_UI_InputField__set_selectionColor(pUVar7,UVar11,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  pUVar5 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pUVar8 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
  if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040853d1;
  UnityEngine_UI_Text__set_fontSize
            (pUVar8,(style->fields).FontSize + (__this->fields)._inputFontSizeOffset,
             (MethodInfo *)0x0);
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0)
  ;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_040853d1;
  pIVar9 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
  UVar11 = UI_UIManager__GetThemeColor
                     ((style->fields).ThemePanel,"DefaultSetting","InputTextColor","DefaultPanel",
                      (MethodInfo *)0x0);
  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_040853d1;
  (*pIVar9->klass->vtable[0x17].methodPtr)
            (UVar11.fields.r,UVar11.fields.b,pIVar9,pIVar9->klass->vtable[0x17].method);
  if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  pIVar9 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_040853d1;
  (*pIVar9->klass->vtable[0x24].methodPtr)(elementWidth,pIVar9,pIVar9->klass->vtable[0x24].method);
  if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  pIVar9 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_040853d1;
  (*pIVar9->klass->vtable[0x26].methodPtr)(elementHeight,pIVar9,pIVar9->klass->vtable[0x26].method);
  if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
  UnityEngine_UI_InputField__set_lineType(*ppUVar1,(multiLine & 0xffU) * 2,(MethodInfo *)0x0);
  iVar4 = UI_BaseSettingElement__GetSettingType
                    ((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar4;
  if (iVar4 == 2) {
    if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
    UnityEngine_UI_InputField__set_contentType(*ppUVar1,2,(MethodInfo *)0x0);
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
    value_01 = 10;
LAB_040852ed:
    UnityEngine_UI_InputField__set_characterLimit(pUVar7,value_01,(MethodInfo *)0x0);
  }
  else {
    if (iVar4 == 4) {
      if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
      UnityEngine_UI_InputField__set_contentType(*ppUVar1,0,(MethodInfo *)0x0);
      if (setting == (Settings_BaseSetting_o *)0x0) goto LAB_040853d1;
      bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar2) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(setting);
      }
      pUVar7 = *ppUVar1;
      if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
      value_01 = *(int *)&setting[2].klass;
      if (value_01 == 0x7fffffff) {
        value_01 = 0;
      }
      goto LAB_040852ed;
    }
    if (iVar4 == 3) {
      if (*ppUVar1 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
      UnityEngine_UI_InputField__set_contentType(*ppUVar1,3,(MethodInfo *)0x0);
      pUVar7 = *ppUVar1;
      if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_040853d1;
      value_01 = 0x14;
      goto LAB_040852ed;
    }
  }
  if (*ppUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
    __this_00 = ((*ppUVar1)->fields).m_OnDidEndEdit;
    pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar10,MethodInfo_Void_AddListener);
      if (*ppUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
        __this_01 = ((*ppUVar1)->fields).m_OnSubmit;
        pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (UnityEngine_UI_InputField_SubmitEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar10,MethodInfo_Void_AddListener);
          *(undefined1 *)&(__this->fields)._finishedSetup = 1;
          UI_BaseSettingElement__Setup
                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
LAB_040853d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InputSettingElement$$OnValueChanged
// il2cpp: void UI_InputSettingElement__OnValueChanged (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x40853e0

void UI_InputSettingElement__OnValueChanged
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Func_string__bool__o *pSVar3;
  System_Func_string__string__o *pSVar4;
  Settings_TypedSetting_T__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Settings_TypedSetting_float__o *__this_01;
  Settings_TypedSetting_int__o *__this_02;
  char cVar6;
  bool_conflict bVar7;
  undefined8 local_18;
  
  if (DAT_0570453d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570453d = '\x01';
  }
  local_18 = 0;
  if ((char)(__this->fields)._finishedSetup == '\0') {
    return;
  }
  pSVar3 = (__this->fields)._onValidate;
  if ((pSVar3 != (System_Func_string__bool__o *)0x0) &&
     (cVar6 = (*(code *)(pSVar3->fields).invoke_impl)
                        ((pSVar3->fields).method_code,value,(pSVar3->fields).method), cVar6 == '\0')
     ) {
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
    if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto LAB_04085625;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto LAB_04085620;
    Settings_TypedSetting<object>__set_Value(__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    pUVar5 = (__this->fields)._onValueChanged;
  }
  else {
    bVar7 = System_String__op_Inequality
                      (value,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      iVar2 = (__this->fields)._settingType;
      if (iVar2 == 2) {
        bVar7 = System_Int32__TryParse(value,(int32_t *)&local_18,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          __this_02 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
          if (__this_02 == (Settings_TypedSetting_int__o *)0x0) goto LAB_04085625;
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar1) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting))
          goto LAB_04085620;
          Settings_TypedSetting<int>__set_Value(__this_02,(int32_t)local_18,MethodInfo_Void_set_Value);
        }
      }
      else if ((iVar2 == 3) &&
              (bVar7 = System_Single__TryParse
                                 (value,(float *)((long)&local_18 + 4),(MethodInfo *)0x0),
              (char)bVar7 != '\0')) {
        __this_01 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
        if (__this_01 != (Settings_TypedSetting_float__o *)0x0) {
          bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
            Settings_TypedSetting<float>__set_Value(__this_01,local_18._4_4_,MethodInfo_Void_set_Value);
            pUVar5 = (__this->fields)._onValueChanged;
            goto joined_r0x0408560b;
          }
LAB_04085620:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
LAB_04085625:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    pUVar5 = (__this->fields)._onValueChanged;
  }
joined_r0x0408560b:
  if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
  }
  return;
}


// UI.InputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_InputSettingElement__OnInputFinishEditing (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4085630

void UI_InputSettingElement__OnInputFinishEditing
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtable_dispatch;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._finishedSetup != '\0') {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)
              (__this,(__this->klass->vtable)._6_SyncElement.method);
    pUVar1 = (__this->fields)._onEndEdit;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtable_dispatch = (code *)(pUVar1->fields).invoke_impl;
      (*vtable_dispatch)
                ((pUVar1->fields).method_code,(pUVar1->fields).method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
  return;
}


// UI.InputSettingElement$$SyncElement
// il2cpp: void UI_InputSettingElement__SyncElement (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x4085670

void UI_InputSettingElement__SyncElement(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  System_String_o *value;
  UnityEngine_UI_InputField_o *__this_00;
  float in_XMM0_Da;
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_0570453e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    in_XMM0_Da = (float)il2cpp_init_method_metadata(&"0.##################");
    DAT_0570453e = '\x01';
  }
  local_c = 0;
  local_10 = 0;
  if ((char)(__this->fields)._finishedSetup == '\0') {
    return;
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_04085832;
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto LAB_0408582d;
    __this_00 = (__this->fields)._inputField;
    local_10 = *(undefined4 *)((long)&pSVar3[1].klass + 4);
    value = System_Int32__ToString((int32_t)&local_10,(MethodInfo *)0x0);
  }
  else {
    if (iVar2 == 4) {
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_04085832;
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
LAB_0408582d:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      __this_00 = (__this->fields)._inputField;
      if (__this_00 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_04085832;
      value = pSVar3[1].monitor;
      goto LAB_04085820;
    }
    if (iVar2 != 3) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_04085832;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto LAB_0408582d;
    __this_00 = (__this->fields)._inputField;
    local_c = *(undefined4 *)((long)&pSVar3[1].klass + 4);
    value = System_Single__ToString
                      (in_XMM0_Da,(System_String_o *)&stack0xfffffffffffffff4,"0.##################");
  }
  if (__this_00 == (UnityEngine_UI_InputField_o *)0x0) {
LAB_04085832:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04085820:
  UnityEngine_UI_InputField__set_text(__this_00,value,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$Update
// il2cpp: void UI_InputSettingElement__Update (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x4085840

void UI_InputSettingElement__Update(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570453f == '\0') {
    il2cpp_init_method_metadata(&"-");
    DAT_0570453f = '\x01';
  }
  pUVar1 = (__this->fields)._inputField;
  if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
    if ((*(char *)&(pUVar1->fields).m_Mesh == '\0') ||
       (((ulong)(pUVar1->fields).m_Placeholder & 0xfffffffe) != 2)) {
      return;
    }
    bVar2 = UnityEngine_Input__GetKeyDown(0x2d,(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') &&
       (bVar2 = UnityEngine_Input__GetKeyDown(0x10d,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
      return;
    }
    pUVar1 = (__this->fields)._inputField;
    if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_text(pUVar1,"-",(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.InputSettingElement$$.ctor
// il2cpp: void UI_InputSettingElement___ctor (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x40858d0

void UI_InputSettingElement___ctor(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$<Setup>b__11_0
// il2cpp: void UI_InputSettingElement___Setup_b__11_0 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x40858e0

void UI_InputSettingElement__<Setup>b__11_0
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UI_InputSettingElement__OnValueChanged(__this,value,method);
  return;
}


// UI.InputSettingElement$$<Setup>b__11_1
// il2cpp: void UI_InputSettingElement___Setup_b__11_1 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x40858f0

void UI_InputSettingElement__<Setup>b__11_1
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtable_dispatch;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._finishedSetup != '\0') {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)
              (__this,(__this->klass->vtable)._6_SyncElement.method);
    pUVar1 = (__this->fields)._onEndEdit;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtable_dispatch = (code *)(pUVar1->fields).invoke_impl;
      (*vtable_dispatch)
                ((pUVar1->fields).method_code,(pUVar1->fields).method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
  return;
}


