// Type: UI.ToggleSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ToggleSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleSettingElement.cs
// --------------------------------

// UI.ToggleSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleSettingElement__get_SupportedSettingTypes (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x5cf8f00

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleSettingElement__get_SupportedSettingTypes(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547cc4 = '\x01';
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
            ((System_Collections_Generic_HashSet_T__o *)__this_00,1,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.ToggleSettingElement$$Setup
// il2cpp: void UI_ToggleSettingElement__Setup (UI_ToggleSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x5cf8f80

void UI_ToggleSettingElement__Setup
               (UI_ToggleSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               UnityEngine_Events_UnityAction_o *onValueChanged,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **targetAddress;
  float fVar1;
  UnityEngine_Events_UnityEvent_bool__o *__this_00;
  System_String_o *panel;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Toggle_o *pUVar3;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_UI_LayoutElement_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Events_UnityAction_o *method_00;
  UnityEngine_Color_o UVar5;
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = onValueChanged;
  if (Il2CppMethodInitialized_07547cc5 == '\0') {
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
    Il2CppMethodInitialized_07547cc5 = '\x01';
  }
  (__this->fields)._onValueChanged = onValueChanged;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onValueChanged);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Toggle",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Toggle);
      targetAddress = &(__this->fields)._toggle;
      (__this->fields)._toggle = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar3 = (__this->fields)._toggle;
      if (pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_00 = (UnityEngine_Events_UnityEvent_bool__o *)(pUVar3->fields).onValueChanged;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
        UnityEngine_Events_UnityAction_bool____ctor
                  ((UnityEngine_Events_UnityAction_bool__o *)call,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_ToggleSettingElement_Setup_b__5_0,(MethodInfo_4311710 *)0x0);
        if (__this_00 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
          UnityEngine_Events_UnityEvent_bool___AddListener
                    (__this_00,call,
                     (MethodInfo_43179D0 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
          if (*targetAddress != (UnityEngine_UI_Toggle_o *)0x0) {
            pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"Background",(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                __this_01 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar2,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (__this_01 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Checkmark",(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                      __this_02 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar2,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                      (*(__this_01->klass->vtable)._38_set_preferredHeight.methodPtr)
                                (__this_01,elementHeight,
                                 (__this_01->klass->vtable)._38_set_preferredHeight.method);
                      (*(__this_01->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (__this_01,elementWidth,
                                 (__this_01->klass->vtable)._36_set_preferredWidth.method);
                      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                        fVar1 = (__this->fields)._checkMarkSizeMultiplier;
                        value.fields.y = elementHeight * fVar1;
                        value.fields.x = elementWidth * fVar1;
                        UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
                        UI_BaseSettingElement__Setup
                                  ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                   (MethodInfo *)method_00);
                        pUVar4 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)__this_02,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Image);
                        if (style != (UI_ElementStyle_o *)0x0) {
                          panel = (style->fields).ThemePanel;
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          UVar5 = UI_UIManager__GetThemeColor
                                            (panel,"DefaultSetting","ToggleFilledColor",
                                             "DefaultPanel",(MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                            (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar4,UVar5,(pUVar4->klass->vtable)._23_set_color.method);
                            pUVar3 = *targetAddress;
                            UI_UIManager__GetThemeColorBlock
                                      (&local_88,(style->fields).ThemePanel,"DefaultSetting",
                                       "Toggle","DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) {
                              value_00.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                              value_00.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                              value_00.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                              value_00.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                              value_00.fields.m_HighlightedColor.fields.r =
                                   local_88.fields.m_HighlightedColor.fields.r;
                              value_00.fields.m_HighlightedColor.fields.g =
                                   local_88.fields.m_HighlightedColor.fields.g;
                              value_00.fields.m_HighlightedColor.fields.b =
                                   local_88.fields.m_HighlightedColor.fields.b;
                              value_00.fields.m_HighlightedColor.fields.a =
                                   local_88.fields.m_HighlightedColor.fields.a;
                              value_00.fields.m_PressedColor.fields.r =
                                   local_88.fields.m_PressedColor.fields.r;
                              value_00.fields.m_PressedColor.fields.g =
                                   local_88.fields.m_PressedColor.fields.g;
                              value_00.fields.m_PressedColor.fields.b =
                                   local_88.fields.m_PressedColor.fields.b;
                              value_00.fields.m_PressedColor.fields.a =
                                   local_88.fields.m_PressedColor.fields.a;
                              value_00.fields.m_SelectedColor.fields.r =
                                   local_88.fields.m_SelectedColor.fields.r;
                              value_00.fields.m_SelectedColor.fields.g =
                                   local_88.fields.m_SelectedColor.fields.g;
                              value_00.fields.m_SelectedColor.fields.b =
                                   local_88.fields.m_SelectedColor.fields.b;
                              value_00.fields.m_SelectedColor.fields.a =
                                   local_88.fields.m_SelectedColor.fields.a;
                              value_00.fields.m_DisabledColor.fields.r =
                                   local_88.fields.m_DisabledColor.fields.r;
                              value_00.fields.m_DisabledColor.fields.g =
                                   local_88.fields.m_DisabledColor.fields.g;
                              value_00.fields.m_DisabledColor.fields.b =
                                   local_88.fields.m_DisabledColor.fields.b;
                              value_00.fields.m_DisabledColor.fields.a =
                                   local_88.fields.m_DisabledColor.fields.a;
                              value_00.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                              value_00.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)pUVar3,value_00,(MethodInfo *)0x0);
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
// 0x5cf9370

void UI_ToggleSettingElement__OnValueChanged(UI_ToggleSettingElement_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_bool__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547cc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_07547cc6 = '\x01';
  }
  __this_00 = (Settings_TypedSetting_bool__o *)(__this->fields)._setting;
  if (__this_00 == (Settings_TypedSetting_bool__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting))
  {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  Settings_TypedSetting_bool___set_Value
            (__this_00,value,(MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pUVar2 = (__this->fields)._onValueChanged;
  if (pUVar2 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
  return;
}


// UI.ToggleSettingElement$$SyncElement
// il2cpp: void UI_ToggleSettingElement__SyncElement (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x5cf9420

void UI_ToggleSettingElement__SyncElement(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Toggle_o *__this_00;
  
  if (Il2CppMethodInitialized_07547cc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547cc7 = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = (__this->fields)._toggle;
    if (__this_00 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                (__this_00,*(bool *)((long)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 1),(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ToggleSettingElement$$.ctor
// il2cpp: void UI_ToggleSettingElement___ctor (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x5cf94b0

void UI_ToggleSettingElement___ctor(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._checkMarkSizeMultiplier = 0.66;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleSettingElement$$<Setup>b__5_0
// il2cpp: void UI_ToggleSettingElement___Setup_b__5_0 (UI_ToggleSettingElement_o* __this, bool value, const MethodInfo* method);
// 0x5cf94c0

void UI_ToggleSettingElement___Setup_b__5_0(UI_ToggleSettingElement_o *__this,bool value,MethodInfo *method)

{
  UI_ToggleSettingElement__OnValueChanged(__this,value,method);
  return;
}


