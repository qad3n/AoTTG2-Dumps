// Type: UI.IconPickSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/IconPickSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/IconPickSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.IconPickSettingElement.<>c__DisplayClass4_0$$.ctor
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass4_0___ctor (UI_IconPickSettingElement___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4083d20

void UI_IconPickSettingElement_<>c__DisplayClass4_0___ctor
               (UI_IconPickSettingElement___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickSettingElement.<>c__DisplayClass4_0$$<Setup>b__0
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass4_0___Setup_b__0 (UI_IconPickSettingElement___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4083f00

void UI_IconPickSettingElement_<>c__DisplayClass4_0__<Setup>b__0
               (UI_IconPickSettingElement___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  UI_IconPickSettingElement_o *pUVar1;
  UI_IconPickPopup_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_IconPickSettingElement_o *)0x0) &&
     (__this_00 = (__this->fields).iconPickPopup, __this_00 != (UI_IconPickPopup_o *)0x0)) {
    UI_IconPickPopup__Show
              (__this_00,(pUVar1->fields)._setting,(pUVar1->fields)._label,(__this->fields).options,
               (__this->fields).iconPaths,(__this->fields).tooltips,(__this->fields).onSelect,
               (__this->fields).tooltipPopup,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IconPickSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IconPickSettingElement__get_SupportedSettingTypes (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x4083780

System_Collections_Generic_HashSet_SettingType__o *
UI_IconPickSettingElement__get_SupportedSettingTypes
          (UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704534 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704534 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IconPickSettingElement$$Setup
// il2cpp: void UI_IconPickSettingElement__Setup (UI_IconPickSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_array* iconPaths, System_String_array* tooltips, UI_IconPickPopup_o* iconPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x4083820

void UI_IconPickSettingElement__Setup
               (UI_IconPickSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_array *iconPaths,System_String_array *tooltips,
               UI_IconPickPopup_o *iconPickPopup,System_String_o *tooltip,float elementWidth,
               float elementHeight,UnityEngine_Events_UnityAction_o *onSelect,
               UI_TooltipPopup_o *tooltipPopup,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  Il2CppClass *__this_00;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar4;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_05704535 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"");
    DAT_05704535 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)iconPickPopup;
    il2cpp_runtime_glue(pIVar2 + 1);
    pIVar2[1].monitor = __this;
    il2cpp_runtime_glue(&pIVar2[1].monitor,__this);
    pIVar2[2].klass = (Il2CppClass *)options;
    il2cpp_runtime_glue(pIVar2 + 2,options);
    pIVar2[2].monitor = iconPaths;
    il2cpp_runtime_glue(&pIVar2[2].monitor,iconPaths);
    pIVar2[3].klass = (Il2CppClass *)tooltips;
    il2cpp_runtime_glue(pIVar2 + 3,tooltips);
    pIVar2[3].monitor = onSelect;
    il2cpp_runtime_glue(&pIVar2[3].monitor,onSelect);
    pIVar2[4].klass = (Il2CppClass *)tooltipPopup;
    il2cpp_runtime_glue(pIVar2 + 4);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Button",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        if (0.0 < elementWidth) {
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_04083d14;
          pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_04083d14;
          (*pIVar4->klass->vtable[0x24].methodPtr)
                    (elementWidth,pIVar4,pIVar4->klass->vtable[0x24].method);
        }
        if (0.0 < elementHeight) {
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_04083d14;
          pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_04083d14;
          (*pIVar4->klass->vtable[0x26].methodPtr)
                    (elementHeight,pIVar4,pIVar4->klass->vtable[0x26].method);
        }
        (__this->fields)._options = (System_String_array *)pIVar2[2].klass;
        il2cpp_runtime_glue(&(__this->fields)._options);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Button_GetComponent_Button);
          if (pIVar2 != (Il2CppObject *)0x0) {
            __this_00 = pIVar2[0x10].klass;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_00 != (Il2CppClass *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener
                        ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
              __this_02 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Button_GetComponent_Button);
              if (style != (UI_ElementStyle_o *)0x0) {
                panel = (style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UI_UIManager__GetThemeColorBlock
                          (&local_88,panel,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0)
                ;
                if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                  value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                  value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                  value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                  value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                  value.fields.m_HighlightedColor.fields.r =
                       local_88.fields.m_HighlightedColor.fields.r;
                  value.fields.m_HighlightedColor.fields.g =
                       local_88.fields.m_HighlightedColor.fields.g;
                  value.fields.m_HighlightedColor.fields.b =
                       local_88.fields.m_HighlightedColor.fields.b;
                  value.fields.m_HighlightedColor.fields.a =
                       local_88.fields.m_HighlightedColor.fields.a;
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
                  UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                  pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      pUVar5 = (UnityEngine_UI_Text_o *)
                               UnityEngine_Component__GetComponent<object>
                                         ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
                      ppUVar1 = &(__this->fields)._label;
                      (__this->fields)._label = pUVar5;
                      il2cpp_runtime_glue(ppUVar1,pUVar5);
                      pUVar5 = (__this->fields)._label;
                      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                        UnityEngine_UI_Text__set_fontSize
                                  (pUVar5,(style->fields).FontSize,(MethodInfo *)0x0);
                        pUVar5 = *ppUVar1;
                        UVar6 = UI_UIManager__GetThemeColor
                                          ((style->fields).ThemePanel,"DefaultButton","TextColor",
                                           "DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                    (UVar6.fields.r,UVar6.fields.b,pUVar5,
                                     (pUVar5->klass->vtable)._23_set_color.method);
                          UI_BaseSettingElement__Setup
                                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
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
LAB_04083d14:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IconPickSettingElement$$SyncElement
// il2cpp: void UI_IconPickSettingElement__SyncElement (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x4083d30

void UI_IconPickSettingElement__SyncElement(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Settings_BaseSetting_o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Text_c *pUVar6;
  Il2CppMethodPointer vtable_dispatch_00;
  System_String_array *pSVar7;
  Settings_TypedSetting_int__o *__this_00;
  
  if (DAT_05704536 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704536 = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting))
      goto LAB_04083eda;
      pSVar7 = (__this->fields)._options;
      if (pSVar7 != (System_String_array *)0x0) {
        if ((int)pSVar7->max_length <= (__this_00->fields)._value) {
          Settings_TypedSetting<int>__set_Value(__this_00,0,MethodInfo_Void_set_Value);
          __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
          if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto LAB_04083ed5;
          pSVar7 = (__this->fields)._options;
        }
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting))
        goto LAB_04083eda;
        if (pSVar7 != (System_String_array *)0x0) {
          uVar3 = (__this_00->fields)._value;
          if ((uint)pSVar7->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = (__this->fields)._label;
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            vtable_dispatch_00 = (pUVar5->klass->vtable)._75_set_text.methodPtr;
            (*vtable_dispatch_00)
                      (pUVar5,pSVar7->m_Items[(int)uVar3],
                       (pUVar5->klass->vtable)._75_set_text.method,vtable_dispatch_00);
            return;
          }
        }
      }
    }
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
         ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
LAB_04083eda:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pUVar5 = (__this->fields)._label;
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar6 = pUVar5->klass;
        vtable_dispatch_00 = (pUVar6->vtable)._75_set_text.methodPtr;
        (*vtable_dispatch_00)
                  (pUVar5,pSVar4[1].monitor,(pUVar6->vtable)._75_set_text.method,pUVar6,
                   vtable_dispatch_00);
        return;
      }
    }
  }
LAB_04083ed5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IconPickSettingElement$$.ctor
// il2cpp: void UI_IconPickSettingElement___ctor (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x4083ef0

void UI_IconPickSettingElement___ctor(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


