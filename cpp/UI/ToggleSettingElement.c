// Type: UI.ToggleSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ToggleSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/ToggleSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.ToggleSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleSettingElement__get_SupportedSettingTypes (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x408b800

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleSettingElement__get_SupportedSettingTypes
          (UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_0570456b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_0570456b = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,1,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleSettingElement$$Setup
// il2cpp: void UI_ToggleSettingElement__Setup (UI_ToggleSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x408b880

void UI_ToggleSettingElement__Setup
               (UI_ToggleSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,
               float elementWidth,float elementHeight,
               UnityEngine_Events_UnityAction_o *onValueChanged,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **ppUVar1;
  float fVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  System_String_o *panel;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Toggle_o *pUVar4;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Component_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppObject *pIVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_0570456c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_bool);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"Toggle");
    il2cpp_init_method_metadata(&"ToggleFilledColor");
    il2cpp_init_method_metadata(&"Checkmark");
    DAT_0570456c = '\x01';
  }
  (__this->fields)._onValueChanged = onValueChanged;
  il2cpp_runtime_glue(&(__this->fields)._onValueChanged);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Toggle",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = (UnityEngine_UI_Toggle_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar3,MethodInfo_Toggle_GetComponent_Toggle);
      ppUVar1 = &(__this->fields)._toggle;
      (__this->fields)._toggle = pUVar4;
      il2cpp_runtime_glue(ppUVar1,pUVar4);
      pUVar4 = (__this->fields)._toggle;
      if (pUVar4 != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_00 = (pUVar4->fields).m_Group;
        call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_bool);
        UnityEngine_Events_UnityAction<bool>___ctor();
        if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
          UnityEngine_Events_UnityEvent<bool>__AddListener
                    ((UnityEngine_Events_UnityEvent_bool__o *)__this_00,call,MethodInfo_Void_AddListener);
          if (*ppUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background",(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                __this_01 = (UnityEngine_Component_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (__this_01 != (UnityEngine_Component_o *)0x0) {
                  pUVar3 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Checkmark",(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      __this_02 = (UnityEngine_RectTransform_o *)
                                  UnityEngine_Component__GetComponent<object>
                                            ((UnityEngine_Component_o *)pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
                      (*(code *)__this_01->klass[2]._1.implementedInterfaces)
                                (elementHeight,__this_01,__this_01->klass[2]._1.interfaceOffsets);
                      (*__this_01->klass[2]._1.events)(elementWidth,__this_01);
                      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                        fVar2 = (__this->fields)._checkMarkSizeMultiplier;
                        value.fields.y = elementHeight * fVar2;
                        value.fields.x = elementWidth * fVar2;
                        UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
                        UI_BaseSettingElement__Setup
                                  ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                   (MethodInfo *)0x0);
                        pIVar5 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)__this_02,MethodInfo_Image_GetComponent_Image);
                        if (style != (UI_ElementStyle_o *)0x0) {
                          panel = (style->fields).ThemePanel;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          UVar6 = UI_UIManager__GetThemeColor
                                            (panel,"DefaultSetting","ToggleFilledColor","DefaultPanel",
                                             (MethodInfo *)0x0);
                          if (pIVar5 != (Il2CppObject *)0x0) {
                            (*pIVar5->klass->vtable[0x17].methodPtr)
                                      (UVar6.fields.r,UVar6.fields.b,pIVar5,
                                       pIVar5->klass->vtable[0x17].method);
                            pUVar4 = *ppUVar1;
                            UI_UIManager__GetThemeColorBlock
                                      (&local_88,(style->fields).ThemePanel,"DefaultSetting",
                                       "Toggle","DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_UI_Toggle_o *)0x0) {
                              value_00.fields.m_NormalColor.fields.b =
                                   local_88.fields.m_NormalColor.fields.b;
                              value_00.fields.m_NormalColor.fields.a =
                                   local_88.fields.m_NormalColor.fields.a;
                              value_00.fields.m_NormalColor.fields.r =
                                   local_88.fields.m_NormalColor.fields.r;
                              value_00.fields.m_NormalColor.fields.g =
                                   local_88.fields.m_NormalColor.fields.g;
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
                                        ((UnityEngine_UI_Selectable_o *)pUVar4,value_00,
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleSettingElement$$OnValueChanged
// il2cpp: void UI_ToggleSettingElement__OnValueChanged (UI_ToggleSettingElement_o* __this, bool value, const MethodInfo* method);
// 0x408bce0

void UI_ToggleSettingElement__OnValueChanged
               (UI_ToggleSettingElement_o *__this,bool_conflict value,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_bool__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (DAT_0570456d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570456d = '\x01';
  }
  __this_00 = (Settings_TypedSetting_bool__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_bool__o *)0x0) {
    bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BoolSetting)) {
      Settings_TypedSetting<bool>__set_Value(__this_00,value & 0xff,MethodInfo_Void_set_Value);
      pUVar2 = (__this->fields)._onValueChanged;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)
                  ((pUVar2->fields).method_code,(pUVar2->fields).method);
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleSettingElement$$SyncElement
// il2cpp: void UI_ToggleSettingElement__SyncElement (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x408bd90

void UI_ToggleSettingElement__SyncElement(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Toggle_o *__this_00;
  
  if (DAT_0570456e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570456e = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
    if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = (__this->fields)._toggle;
    if (__this_00 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn
                (__this_00,(uint)*(byte *)((long)&pSVar2[1].klass + 1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ToggleSettingElement$$.ctor
// il2cpp: void UI_ToggleSettingElement___ctor (UI_ToggleSettingElement_o* __this, const MethodInfo* method);
// 0x408be20

void UI_ToggleSettingElement___ctor(UI_ToggleSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._checkMarkSizeMultiplier = 0.66;
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleSettingElement$$<Setup>b__5_0
// il2cpp: void UI_ToggleSettingElement___Setup_b__5_0 (UI_ToggleSettingElement_o* __this, bool value, const MethodInfo* method);
// 0x408be30

void UI_ToggleSettingElement__<Setup>b__5_0
               (UI_ToggleSettingElement_o *__this,bool_conflict value,MethodInfo *method)

{
  UI_ToggleSettingElement__OnValueChanged(__this,value,method);
  return;
}


