// Type: UI.IconPickSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IconPickSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IconPickSettingElement.cs
// --------------------------------

// UI.IconPickSettingElement.<>c__DisplayClass5_0$$.ctor
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass5_0___ctor (UI_IconPickSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5cf1070

void UI_IconPickSettingElement___c__DisplayClass5_0___ctor
               (UI_IconPickSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickSettingElement.<>c__DisplayClass5_0$$<Setup>b__0
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass5_0___Setup_b__0 (UI_IconPickSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5cf1260

void UI_IconPickSettingElement___c__DisplayClass5_0___Setup_b__0
               (UI_IconPickSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  UI_IconPickSettingElement_o *pUVar1;
  UI_IconPickPopup_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_IconPickSettingElement_o *)0x0) ||
     (__this_00 = (__this->fields).iconPickPopup, __this_00 == (UI_IconPickPopup_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_IconPickPopup__Show
            (__this_00,(pUVar1->fields)._setting,(pUVar1->fields)._label,(__this->fields).options,
             (__this->fields).iconPaths,(__this->fields).tooltips,(__this->fields).onSelect,
             (__this->fields).tooltipPopup,(pUVar1->fields)._intOptionValues,(MethodInfo *)0x0);
  return;
}


// UI.IconPickSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IconPickSettingElement__get_SupportedSettingTypes (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x5cf0b20

System_Collections_Generic_HashSet_SettingType__o *
UI_IconPickSettingElement__get_SupportedSettingTypes(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547c8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547c8c = '\x01';
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
            ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.IconPickSettingElement$$Setup
// il2cpp: void UI_IconPickSettingElement__Setup (UI_IconPickSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_array* iconPaths, System_String_array* tooltips, UI_IconPickPopup_o* iconPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x5cf0bc0

void UI_IconPickSettingElement__Setup
               (UI_IconPickSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_array *iconPaths,
               System_String_array *tooltips,UI_IconPickPopup_o *iconPickPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onSelect,
               UI_TooltipPopup_o *tooltipPopup,System_Int32_array *intOptionValues,MethodInfo *method)

{
  System_String_array **targetAddress;
  UnityEngine_UI_Text_o **targetAddress_00;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UI_IconPickSettingElement___c__DisplayClass5_0_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_UI_Text_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar5;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547c8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_IconPickSettingElement_c__DisplayClass5_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_IconPickSettingElement_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547c8d = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_IconPickSettingElement_c__DisplayClass5_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_IconPickSettingElement___c__DisplayClass5_0_o *)0x0) {
    (__this_01->fields).iconPickPopup = iconPickPopup;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).iconPickPopup);
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    targetAddress = &(__this_01->fields).options;
    (__this_01->fields).options = options;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this_01->fields).iconPaths = iconPaths;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).iconPaths);
    (__this_01->fields).tooltips = tooltips;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).tooltips);
    (__this_01->fields).onSelect = onSelect;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).onSelect);
    (__this_01->fields).tooltipPopup = tooltipPopup;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).tooltipPopup);
    (__this->fields)._intOptionValues = intOptionValues;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Button",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0)
        ;
        if (0.0 < elementWidth) {
          if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_05cf1066;
          pUVar2 = UnityEngine_GameObject__GetComponent_object_
                             (__this_02,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf1066;
          (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
        }
        if (0.0 < elementHeight) {
          if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_05cf1066;
          pUVar2 = UnityEngine_GameObject__GetComponent_object_
                             (__this_02,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf1066;
          (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
        }
        (__this->fields)._options = *targetAddress;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_02,
                              (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
            __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_03,(Il2CppObject *)__this_01,
                       (intptr_t)MethodInfo_UI_IconPickSettingElement_c__DisplayClass5_0_Setup_b__0,
                       (MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_02,
                                  (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button)
              ;
              if (style != (UI_ElementStyle_o *)0x0) {
                panel = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                method_00 = (MethodInfo *)0x0;
                UI_UIManager__GetThemeColorBlock
                          (&local_88,panel,"DefaultButton","","DefaultPanel",
                           (MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
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
                            ((UnityEngine_UI_Selectable_o *)pUVar3,value,(MethodInfo *)0x0);
                  pUVar1 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar4 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar1,
                                          (MethodInfo_34B0830 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Text);
                      targetAddress_00 = &(__this->fields)._label;
                      (__this->fields)._label = pUVar4;
                      Il2CppCodeGenWriteBarrier(targetAddress_00);
                      pUVar4 = (__this->fields)._label;
                      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                        UnityEngine_UI_Text__set_fontSize(pUVar4,(style->fields).FontSize,(MethodInfo *)0x0);
                        pUVar4 = *targetAddress_00;
                        UVar5 = UI_UIManager__GetThemeColor
                                          ((style->fields).ThemePanel,"DefaultButton",
                                           "TextColor","DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar4,UVar5,(pUVar4->klass->vtable)._23_set_color.method);
                          UI_BaseSettingElement__Setup
                                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,method_00);
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
label_05cf1066:
  ThrowNullReferenceException();
}


// UI.IconPickSettingElement$$SyncElement
// il2cpp: void UI_IconPickSettingElement__SyncElement (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1080

void UI_IconPickSettingElement__SyncElement(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  UnityEngine_UI_Text_o *pUVar4;
  Settings_TypedSetting_int__o *__this_00;
  System_Int32_array *pSVar5;
  uint value;
  System_String_array *pSVar6;
  int32_t value_00;
  
  if (Il2CppMethodInitialized_07547c8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547c8e = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 != 2) {
    if (iVar2 != 4) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pUVar4 = (__this->fields)._label;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                  (pUVar4,(*(uint64_t *)((char *)pSVar3 + 0x20)),(pUVar4->klass->vtable)._75_set_text.method);
        return;
      }
    }
    goto label_05cf1231;
  }
  __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
  if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_05cf1231;
  bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
  {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  pSVar5 = (__this->fields)._intOptionValues;
  value = (__this_00->fields)._value;
  if (pSVar5 != (System_Int32_array *)0x0) {
    value = System_Array__IndexOf_int_(pSVar5,value,(MethodInfo_36029E0 *)MethodInfo_System_Array_IndexOf_int)
    ;
  }
  if ((int)value < 0) {
label_05cf11cc:
    pSVar5 = (__this->fields)._intOptionValues;
    value = 0;
    value_00 = 0;
    if (pSVar5 != (System_Int32_array *)0x0) {
      if ((int)pSVar5->max_length == 0) goto label_05cf1243;
      value_00 = pSVar5->m_Items[0];
    }
    Settings_TypedSetting_int___set_Value
              (__this_00,value_00,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar6 = (__this->fields)._options;
    if (pSVar6 == (System_String_array *)0x0) goto label_05cf1231;
  }
  else {
    pSVar6 = (__this->fields)._options;
    if (pSVar6 == (System_String_array *)0x0) goto label_05cf1231;
    if ((int)pSVar6->max_length <= (int)value) goto label_05cf11cc;
  }
  if ((uint)pSVar6->max_length <= value) {
label_05cf1243:
    ThrowIndexOutOfRangeException();
  }
  pUVar4 = (__this->fields)._label;
  if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
              (pUVar4,pSVar6->m_Items[value],(pUVar4->klass->vtable)._75_set_text.method);
    return;
  }
label_05cf1231:
  ThrowNullReferenceException();
}


// UI.IconPickSettingElement$$.ctor
// il2cpp: void UI_IconPickSettingElement___ctor (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x5cf1250

void UI_IconPickSettingElement___ctor(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


