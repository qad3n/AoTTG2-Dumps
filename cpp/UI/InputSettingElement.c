// Type: UI.InputSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InputSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// --------------------------------

// UI.InputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_InputSettingElement__get_SupportedSettingTypes (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x182213d70

System_Collections_Generic_HashSet_SettingType__o *
UI_InputSettingElement__get_SupportedSettingTypes(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347126 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,3,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.InputSettingElement$$Setup
// il2cpp: void UI_InputSettingElement__Setup (UI_InputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, bool multiLine, UnityEngine_Events_UnityAction_o* onValueChanged, UnityEngine_Events_UnityAction_o* onEndEdit, System_Func_string__bool__o* onValidate, System_Func_string__string__o* onCleanup, const MethodInfo* method);
// 0x182213250
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822139bd: xor r8d, r8d

void UI_InputSettingElement__Setup
               (UI_InputSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               bool multiLine,UnityEngine_Events_UnityAction_o *onValueChanged,
               UnityEngine_Events_UnityAction_o *onEndEdit,System_Func_string__bool__o *onValidate,
               System_Func_string__string__o *onCleanup,MethodInfo *method)

{
  byte bVar1;
  System_String_o *panel;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_InputField_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_UI_Image_o *value;
  UnityEngine_UI_ColorBlock_o *pUVar9;
  UnityEngine_Color_o *pUVar10;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  DG_Tweening_Core_DOSetter_T__o *pDVar12;
  int value_00;
  UnityEngine_Color_Fields local_e8;
  UnityEngine_UI_ColorBlock_o local_d8;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_184347127 == '\0') {
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
    Il2CppMethodInitialized_184347127 = '\x01';
  }
  if (style == (UI_ElementStyle_o *)0x0) goto label_182213ab0;
  if ((style->fields).FontSize < 0x13) {
    (__this->fields)._inputFontSizeOffset = -2;
  }
  (__this->fields)._onValueChanged = onValueChanged;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onValueChanged,onValueChanged);
  (__this->fields)._onEndEdit = onEndEdit;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onEndEdit,onEndEdit);
  (__this->fields)._onValidate = onValidate;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onValidate,onValidate);
  (__this->fields)._onCleanup = onCleanup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onCleanup,onCleanup);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
      (pUVar5 = UnityEngine_Transform__Find(pUVar5,"InputField",(MethodInfo *)0x0),
      pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
     pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_182213ab0;
  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar6,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
  (__this->fields)._inputField = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputField,pUVar7);
  pUVar7 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar5 = UnityEngine_Transform__Find(pUVar5,"InputField",(MethodInfo *)0x0),
        pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_182213ab0;
    pUVar7 = (UnityEngine_UI_InputField_o *)
             UnityEngine_GameObject__AddComponent_object_
                       (pUVar6,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_InputFieldPasteable);
    (__this->fields)._inputField = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._inputField,pUVar7);
    pUVar7 = (__this->fields)._inputField;
    if (((pUVar7 == (UnityEngine_UI_InputField_o *)0x0) ||
        (pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
        pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_182213ab0;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar5,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    UnityEngine_UI_InputField__set_textComponent(pUVar7,pUVar8,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._inputField;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
    UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)pUVar7,1,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._inputField;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar7,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)pUVar7,(UnityEngine_UI_Graphic_o *)value,(MethodInfo *)0x0);
  }
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
  UnityEngine_UI_InputField__set_text
            (pUVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._inputField;
  panel = (style->fields).ThemePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar9 = UI_UIManager__GetThemeColorBlock
                     (&local_78,panel,"DefaultSetting","Input","DefaultPanel",
                      (MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
  local_d8.fields.m_NormalColor.fields.r = (pUVar9->fields).m_NormalColor.fields.r;
  local_d8.fields.m_NormalColor.fields.g = (pUVar9->fields).m_NormalColor.fields.g;
  local_d8.fields.m_NormalColor.fields.b = (pUVar9->fields).m_NormalColor.fields.b;
  local_d8.fields.m_NormalColor.fields.a = (pUVar9->fields).m_NormalColor.fields.a;
  local_d8.fields.m_HighlightedColor.fields.r = (pUVar9->fields).m_HighlightedColor.fields.r;
  local_d8.fields.m_HighlightedColor.fields.g = (pUVar9->fields).m_HighlightedColor.fields.g;
  local_d8.fields.m_HighlightedColor.fields.b = (pUVar9->fields).m_HighlightedColor.fields.b;
  local_d8.fields.m_HighlightedColor.fields.a = (pUVar9->fields).m_HighlightedColor.fields.a;
  local_d8.fields.m_PressedColor.fields.r = (pUVar9->fields).m_PressedColor.fields.r;
  local_d8.fields.m_PressedColor.fields.g = (pUVar9->fields).m_PressedColor.fields.g;
  local_d8.fields.m_PressedColor.fields.b = (pUVar9->fields).m_PressedColor.fields.b;
  local_d8.fields.m_PressedColor.fields.a = (pUVar9->fields).m_PressedColor.fields.a;
  local_d8.fields.m_SelectedColor.fields.r = (pUVar9->fields).m_SelectedColor.fields.r;
  local_d8.fields.m_SelectedColor.fields.g = (pUVar9->fields).m_SelectedColor.fields.g;
  local_d8.fields.m_SelectedColor.fields.b = (pUVar9->fields).m_SelectedColor.fields.b;
  local_d8.fields.m_SelectedColor.fields.a = (pUVar9->fields).m_SelectedColor.fields.a;
  local_d8.fields.m_DisabledColor.fields.r = (pUVar9->fields).m_DisabledColor.fields.r;
  local_d8.fields.m_DisabledColor.fields.g = (pUVar9->fields).m_DisabledColor.fields.g;
  local_d8.fields.m_DisabledColor.fields.b = (pUVar9->fields).m_DisabledColor.fields.b;
  local_d8.fields.m_DisabledColor.fields.a = (pUVar9->fields).m_DisabledColor.fields.a;
  local_d8.fields.m_ColorMultiplier = (pUVar9->fields).m_ColorMultiplier;
  local_d8.fields.m_FadeDuration = (pUVar9->fields).m_FadeDuration;
  UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar7,&local_d8,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._inputField;
  if (((pUVar7 == (UnityEngine_UI_InputField_o *)0x0) ||
      (pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
      pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_182213ab0;
  pUVar8 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar5,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  pUVar10 = UI_UIManager__GetThemeColor
                      ((UnityEngine_Color_o *)&local_e8,(style->fields).ThemePanel,"DefaultSetting",
                       "InputTextColor","DefaultPanel",(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_182213ab0;
  local_e8.r = (pUVar10->fields).r;
  local_e8.g = (pUVar10->fields).g;
  local_e8.b = (pUVar10->fields).b;
  local_e8.a = (pUVar10->fields).a;
  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
            (pUVar8,(UnityEngine_Color_o *)&local_e8,(pUVar8->klass->vtable)._23_set_color.method);
  pUVar7 = (__this->fields)._inputField;
  pUVar10 = UI_UIManager__GetThemeColor
                      ((UnityEngine_Color_o *)&local_e8,(style->fields).ThemePanel,"DefaultSetting",
                       "InputSelectionColor","DefaultPanel",(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
  local_e8.r = (pUVar10->fields).r;
  local_e8.g = (pUVar10->fields).g;
  local_e8.b = (pUVar10->fields).b;
  local_e8.a = (pUVar10->fields).a;
  UnityEngine_UI_InputField__set_selectionColor(pUVar7,(UnityEngine_Color_o *)&local_e8,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._inputField;
  if (((pUVar7 == (UnityEngine_UI_InputField_o *)0x0) ||
      (pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
      pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
     ((pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0),
      pUVar5 == (UnityEngine_Transform_o *)0x0 ||
      (pUVar8 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar5,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text),
      pUVar8 == (UnityEngine_UI_Text_o *)0x0)))) goto label_182213ab0;
  UnityEngine_UI_Text__set_fontSize
            (pUVar8,(__this->fields)._inputFontSizeOffset + (style->fields).FontSize,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._inputField;
  if (((pUVar7 == (UnityEngine_UI_InputField_o *)0x0) ||
      (pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
      pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_182213ab0;
  pUVar8 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar5,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  pUVar10 = UI_UIManager__GetThemeColor
                      ((UnityEngine_Color_o *)&local_e8,(style->fields).ThemePanel,"DefaultSetting",
                       "InputTextColor","DefaultPanel",(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_182213ab0;
  local_e8.r = (pUVar10->fields).r;
  local_e8.g = (pUVar10->fields).g;
  local_e8.b = (pUVar10->fields).b;
  local_e8.a = (pUVar10->fields).a;
  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
            (pUVar8,(UnityEngine_Color_o *)&local_e8,(pUVar8->klass->vtable)._23_set_color.method);
  pUVar7 = (__this->fields)._inputField;
  if ((pUVar7 == (UnityEngine_UI_InputField_o *)0x0) ||
     (pUVar11 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar7,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement),
     pUVar11 == (UnityEngine_UI_LayoutElement_o *)0x0)) goto label_182213ab0;
  (*(pUVar11->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar11,elementWidth,(pUVar11->klass->vtable)._36_set_preferredWidth.method);
  pUVar7 = (__this->fields)._inputField;
  if ((pUVar7 == (UnityEngine_UI_InputField_o *)0x0) ||
     (pUVar11 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar7,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement),
     pUVar11 == (UnityEngine_UI_LayoutElement_o *)0x0)) goto label_182213ab0;
  (*(pUVar11->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar11,elementHeight,(pUVar11->klass->vtable)._38_set_preferredHeight.method);
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
  UnityEngine_UI_InputField__set_lineType(pUVar7,(uint)multiLine * 2,(MethodInfo *)0x0);
  iVar4 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar4;
  if (iVar4 == 3) {
    pUVar7 = (__this->fields)._inputField;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
    UnityEngine_UI_InputField__set_contentType(pUVar7,3,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._inputField;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
    value_00 = 0x14;
label_1822139c0:
    UnityEngine_UI_InputField__set_characterLimit(pUVar7,value_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar4 == 2) {
      pUVar7 = (__this->fields)._inputField;
      if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
      UnityEngine_UI_InputField__set_contentType(pUVar7,2,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._inputField;
      if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
      value_00 = 10;
      goto label_1822139c0;
    }
    if (iVar4 == 4) {
      pUVar7 = (__this->fields)._inputField;
      if ((pUVar7 == (UnityEngine_UI_InputField_o *)0x0) ||
         (UnityEngine_UI_InputField__set_contentType(pUVar7,0,(MethodInfo *)0x0),
         setting == (Settings_BaseSetting_o *)0x0)) goto label_182213ab0;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      pUVar7 = (__this->fields)._inputField;
      if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_182213ab0;
      value_00 = *(int *)&(*(uint64_t *)((char *)setting + 0x28));
      if (value_00 == 0x7fffffff) {
        value_00 = 0;
      }
      goto label_1822139c0;
    }
  }
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 != (UnityEngine_UI_InputField_o *)0x0) {
    pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar7->fields).m_OnValueChanged;
    pDVar12 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar12,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_InputSettingElement_Setup_b__11_0,
               (MethodInfo_EB6EC0 *)0x0);
    if (pUVar2 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
      UnityEngine_Events_UnityEvent_Vector2___AddListener
                (pUVar2,(UnityEngine_Events_UnityAction_T0__o *)pDVar12,
                 (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      pUVar7 = (__this->fields)._inputField;
      if (pUVar7 != (UnityEngine_UI_InputField_o *)0x0) {
        pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar7->fields).m_OnDidEndEdit;
        pDVar12 = (DG_Tweening_Core_DOSetter_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (pDVar12,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_InputSettingElement_Setup_b__11_1,
                   (MethodInfo_EB6EC0 *)0x0);
        if (pUVar2 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (pUVar2,(UnityEngine_Events_UnityAction_T0__o *)pDVar12,
                     (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          (__this->fields)._finishedSetup = true;
          UI_BaseSettingElement__Setup
                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_182213ab0:
  ThrowNullReferenceException();
}


// UI.InputSettingElement$$OnValueChanged
// il2cpp: void UI_InputSettingElement__OnValueChanged (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182212ff0

void UI_InputSettingElement__OnValueChanged
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  System_Func_string__bool__o *pSVar2;
  System_Func_string__string__o *pSVar3;
  Settings_TypedSetting_int__o *__this_00;
  Settings_TypedSetting_float__o *__this_01;
  Settings_TypedSetting_T__o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar4;
  char cVar5;
  bool bVar6;
  int32_t local_res8 [2];
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184347128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347128 = '\x01';
  }
  local_res20[0] = 0.0;
  local_res8[0] = 0;
  if ((__this->fields)._finishedSetup != false) {
    if (((__this->fields)._onValidate != (System_Func_string__bool__o *)0x0) &&
       (pSVar2 = (__this->fields)._onValidate,
       cVar5 = (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,value), cVar5 == '\0')) {
      return;
    }
    if ((__this->fields)._onCleanup != (System_Func_string__string__o *)0x0) {
      pSVar3 = (__this->fields)._onCleanup;
      value = (System_String_o *)(*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,value);
    }
    if ((__this->fields)._settingType == 4) {
      __this_02 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
      if (__this_02 == (Settings_TypedSetting_T__o *)0x0) goto label_18221322d;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_Settings_StringSetting);
      }
      Settings_TypedSetting_object___set_Value
                (__this_02,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    else {
      bVar6 = System_String__op_Inequality
                        (value,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar6) {
        if ((__this->fields)._settingType == 3) {
          bVar6 = System_Single__TryParse(value,local_res20,(MethodInfo *)0x0);
          if (bVar6) {
            __this_01 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
            if (__this_01 == (Settings_TypedSetting_float__o *)0x0) goto label_18221322d;
            bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_FloatSetting);
            }
            Settings_TypedSetting_float___set_Value
                      (__this_01,local_res20[0],
                       (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          }
        }
        else if (((__this->fields)._settingType == 2) &&
                (bVar6 = System_Int32__TryParse(value,local_res8,(MethodInfo *)0x0), bVar6)) {
          __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
          if (__this_00 == (Settings_TypedSetting_int__o *)0x0) {
label_18221322d:
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_IntSetting);
          }
          Settings_TypedSetting_int___set_Value
                    (__this_00,local_res8[0],
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        }
      }
    }
    if ((__this->fields)._onValueChanged != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar4 = (__this->fields)._onValueChanged;
      (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
    }
  }
  return;
}


// UI.InputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_InputSettingElement__OnInputFinishEditing (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182212fa0

void
UI_InputSettingElement__OnInputFinishEditing(UI_InputSettingElement_o* __this, System_String_o* value, MethodInfo* method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if ((__this->fields)._finishedSetup != false) {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
    if ((__this->fields)._onEndEdit != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar1 = (__this->fields)._onEndEdit;
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      return;
    }
  }
  return;
}


// UI.InputSettingElement$$SyncElement
// il2cpp: void UI_InputSettingElement__SyncElement (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x182213ac0

void UI_InputSettingElement__SyncElement(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  System_String_o *value;
  UnityEngine_UI_InputField_o *pUVar3;
  int32_t local_res8 [4];
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184347129 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
    Il2CppMethodInitialized_184347129 = '\x01';
  }
  local_res18[0] = 0.0;
  local_res8[0] = 0;
  if ((__this->fields)._finishedSetup == false) {
    return;
  }
  if ((__this->fields)._settingType == 3) {
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) goto label_182213c83;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    local_res18[0] = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
    pUVar3 = (__this->fields)._inputField;
    value = System_Single__ToString_1b49f60(local_res18,"0.##################",(MethodInfo *)0x0);
  }
  else {
    if ((__this->fields)._settingType != 2) {
      if ((__this->fields)._settingType != 4) {
        return;
      }
      pSVar2 = (__this->fields)._setting;
      if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
        }
        pUVar3 = (__this->fields)._inputField;
        if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
          UnityEngine_UI_InputField__set_text(pUVar3,(*(uint64_t *)((char *)pSVar2 + 0x20)),(MethodInfo *)0x0);
          return;
        }
      }
      goto label_182213c83;
    }
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) goto label_182213c83;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    local_res8[0] = *(int32_t *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
    pUVar3 = (__this->fields)._inputField;
    value = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  }
  if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_text(pUVar3,value,(MethodInfo *)0x0);
    return;
  }
label_182213c83:
  ThrowNullReferenceException();
}


// UI.InputSettingElement$$Update
// il2cpp: void UI_InputSettingElement__Update (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x182213cc0

void UI_InputSettingElement__Update(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434712a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_18434712a = '\x01';
  }
  pUVar1 = (__this->fields)._inputField;
  if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
    if (((pUVar1->fields).m_AllowInput == false) ||
       (((pUVar1->fields).m_ContentType != 3 && ((pUVar1->fields).m_ContentType != 2)))) {
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
// 0x182213d60

void UI_InputSettingElement___ctor(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$<Setup>b__11_0
// il2cpp: void UI_InputSettingElement___Setup_b__11_0 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182213cb0

void UI_InputSettingElement___Setup_b__11_0
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UI_InputSettingElement__OnValueChanged(__this,value,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$<Setup>b__11_1
// il2cpp: void UI_InputSettingElement___Setup_b__11_1 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182212fa0

void UI_InputSettingElement___Setup_b__11_1
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if ((__this->fields)._finishedSetup != false) {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
    if ((__this->fields)._onEndEdit != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar1 = (__this->fields)._onEndEdit;
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      return;
    }
  }
  return;
}


