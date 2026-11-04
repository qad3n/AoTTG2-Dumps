// Type: UI.ToggleSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ToggleSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleSettingElement.cs
// --------------------------------

// UI.ToggleSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleSettingElement__get_SupportedSettingTypes (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x182239640

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleSettingElement__get_SupportedSettingTypes(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347157 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,1,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.ToggleSettingElement$$Setup
// il2cpp: void UI_ToggleSettingElement__Setup (UI_ToggleSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x182239170

void UI_ToggleSettingElement__Setup
               (UI_ToggleSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               UnityEngine_Events_UnityAction_o *onValueChanged,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  System_String_o *panel;
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Toggle_o *pUVar2;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_01;
  UnityEngine_UI_LayoutElement_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_UI_ColorBlock_o *pUVar5;
  UnityEngine_Color_Fields local_108;
  UnityEngine_UI_ColorBlock_o local_f8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_184347158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ToggleSettingElement_Setup_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleFilledColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkmark");
    Il2CppMethodInitialized_184347158 = '\x01';
  }
  (__this->fields)._onValueChanged = onValueChanged;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onValueChanged,onValueChanged);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Toggle",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Toggle);
      (__this->fields)._toggle = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._toggle,pUVar2);
      pUVar2 = (__this->fields)._toggle;
      if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar2->fields).onValueChanged;
        __this_01 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
        UnityEngine_Events_UnityAction_bool____ctor
                  (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ToggleSettingElement_Setup_b__5_0,
                   (MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
                     (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
          pUVar2 = (__this->fields)._toggle;
          if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
            pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
            ;
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar1 = UnityEngine_Transform__Find(pUVar1,"Background",(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                __this_02 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar1,
                                       (MethodInfo_6651A0 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (__this_02 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  pUVar1 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Checkmark",(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      __this_03 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar1,
                                             (MethodInfo_6651A0 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                      (*(__this_02->klass->vtable)._38_set_preferredHeight.methodPtr)
                                (__this_02,elementHeight,
                                 (__this_02->klass->vtable)._38_set_preferredHeight.method);
                      (*(__this_02->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (__this_02,elementWidth,
                                 (__this_02->klass->vtable)._36_set_preferredWidth.method);
                      if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                        value.fields.y = elementHeight * (__this->fields)._checkMarkSizeMultiplier;
                        value.fields.x = elementWidth * (__this->fields)._checkMarkSizeMultiplier;
                        UnityEngine_RectTransform__set_sizeDelta(__this_03,value,(MethodInfo *)0x0);
                        UI_BaseSettingElement__Setup
                                  ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                   (MethodInfo *)0x0);
                        pUVar3 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)__this_03,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Image);
                        if (style != (UI_ElementStyle_o *)0x0) {
                          panel = (style->fields).ThemePanel;
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pUVar4 = UI_UIManager__GetThemeColor
                                             ((UnityEngine_Color_o *)&local_108,panel,"DefaultSetting",
                                              "ToggleFilledColor","DefaultPanel",(MethodInfo *)0x0);
                          if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                            local_108.r = (pUVar4->fields).r;
                            local_108.g = (pUVar4->fields).g;
                            local_108.b = (pUVar4->fields).b;
                            local_108.a = (pUVar4->fields).a;
                            (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar3,(UnityEngine_Color_o *)&local_108,
                                       (pUVar3->klass->vtable)._23_set_color.method);
                            pUVar2 = (__this->fields)._toggle;
                            pUVar5 = UI_UIManager__GetThemeColorBlock
                                               (&local_98,(style->fields).ThemePanel,"DefaultSetting",
                                                "Toggle","DefaultPanel",(MethodInfo *)0x0)
                            ;
                            if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
                              local_f8.fields.m_NormalColor.fields.r = (pUVar5->fields).m_NormalColor.fields.r
                              ;
                              local_f8.fields.m_NormalColor.fields.g = (pUVar5->fields).m_NormalColor.fields.g
                              ;
                              local_f8.fields.m_NormalColor.fields.b = (pUVar5->fields).m_NormalColor.fields.b
                              ;
                              local_f8.fields.m_NormalColor.fields.a = (pUVar5->fields).m_NormalColor.fields.a
                              ;
                              local_f8.fields.m_HighlightedColor.fields.r =
                                   (pUVar5->fields).m_HighlightedColor.fields.r;
                              local_f8.fields.m_HighlightedColor.fields.g =
                                   (pUVar5->fields).m_HighlightedColor.fields.g;
                              local_f8.fields.m_HighlightedColor.fields.b =
                                   (pUVar5->fields).m_HighlightedColor.fields.b;
                              local_f8.fields.m_HighlightedColor.fields.a =
                                   (pUVar5->fields).m_HighlightedColor.fields.a;
                              local_f8.fields.m_PressedColor.fields.r =
                                   (pUVar5->fields).m_PressedColor.fields.r;
                              local_f8.fields.m_PressedColor.fields.g =
                                   (pUVar5->fields).m_PressedColor.fields.g;
                              local_f8.fields.m_PressedColor.fields.b =
                                   (pUVar5->fields).m_PressedColor.fields.b;
                              local_f8.fields.m_PressedColor.fields.a =
                                   (pUVar5->fields).m_PressedColor.fields.a;
                              local_f8.fields.m_SelectedColor.fields.r =
                                   (pUVar5->fields).m_SelectedColor.fields.r;
                              local_f8.fields.m_SelectedColor.fields.g =
                                   (pUVar5->fields).m_SelectedColor.fields.g;
                              local_f8.fields.m_SelectedColor.fields.b =
                                   (pUVar5->fields).m_SelectedColor.fields.b;
                              local_f8.fields.m_SelectedColor.fields.a =
                                   (pUVar5->fields).m_SelectedColor.fields.a;
                              local_f8.fields.m_DisabledColor.fields.r =
                                   (pUVar5->fields).m_DisabledColor.fields.r;
                              local_f8.fields.m_DisabledColor.fields.g =
                                   (pUVar5->fields).m_DisabledColor.fields.g;
                              local_f8.fields.m_DisabledColor.fields.b =
                                   (pUVar5->fields).m_DisabledColor.fields.b;
                              local_f8.fields.m_DisabledColor.fields.a =
                                   (pUVar5->fields).m_DisabledColor.fields.a;
                              local_f8.fields.m_ColorMultiplier = (pUVar5->fields).m_ColorMultiplier;
                              local_f8.fields.m_FadeDuration = (pUVar5->fields).m_FadeDuration;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)pUVar2,&local_f8,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.ToggleSettingElement$$OnValueChanged
// il2cpp: void UI_ToggleSettingElement__OnValueChanged (UI_ToggleSettingElement_o* __this, bool value, const MethodInfo* method);
// 0x1822390c0

void
UI_ToggleSettingElement__OnValueChanged(UI_ToggleSettingElement_o* __this, bool value, MethodInfo* method)

{
  byte bVar1;
  Settings_TypedSetting_bool__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (Il2CppMethodInitialized_184347159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347159 = '\x01';
  }
  __this_00 = (Settings_TypedSetting_bool__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_bool__o *)0x0) {
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      Settings_TypedSetting_bool___set_Value
                (__this_00,value,(MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      if ((__this->fields)._onValueChanged != (UnityEngine_Events_UnityAction_o *)0x0) {
        pUVar2 = (__this->fields)._onValueChanged;
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      }
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_BoolSetting);
  }
  ThrowNullReferenceException();
}


// UI.ToggleSettingElement$$SyncElement
// il2cpp: void UI_ToggleSettingElement__SyncElement (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x1822395a0

void UI_ToggleSettingElement__SyncElement(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Toggle_o *__this_00;
  
  if (Il2CppMethodInitialized_18434715a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434715a = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    __this_00 = (__this->fields)._toggle;
    if (__this_00 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                (__this_00,*(bool *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 1),(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ToggleSettingElement$$.ctor
// il2cpp: void UI_ToggleSettingElement___ctor (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x182239630

void UI_ToggleSettingElement___ctor(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._checkMarkSizeMultiplier = 0.66;
  UI_BaseSettingElement___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleSettingElement$$<Setup>b__5_0
// il2cpp: void UI_ToggleSettingElement___Setup_b__5_0 (UI_ToggleSettingElement_o* __this, bool value, const MethodInfo* method);
// 0x1822390c0

void UI_ToggleSettingElement___Setup_b__5_0(UI_ToggleSettingElement_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_bool__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (Il2CppMethodInitialized_184347159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347159 = '\x01';
  }
  __this_00 = (Settings_TypedSetting_bool__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_bool__o *)0x0) {
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      Settings_TypedSetting_bool___set_Value
                (__this_00,value,(MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      if ((__this->fields)._onValueChanged != (UnityEngine_Events_UnityAction_o *)0x0) {
        pUVar2 = (__this->fields)._onValueChanged;
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      }
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_BoolSetting);
  }
  ThrowNullReferenceException();
}


