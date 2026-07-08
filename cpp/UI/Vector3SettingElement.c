// Type: UI.Vector3SettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/Vector3SettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/Vector3SettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.Vector3SettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_Vector3SettingElement__get_SupportedSettingTypes (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x408c1b0

System_Collections_Generic_HashSet_SettingType__o *
UI_Vector3SettingElement__get_SupportedSettingTypes
          (UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704572 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704572 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,8,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Vector3SettingElement$$Setup
// il2cpp: void UI_Vector3SettingElement__Setup (UI_Vector3SettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_Vector3Popup_o* vector3Popup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x408c230

void UI_Vector3SettingElement__Setup
               (UI_Vector3SettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,UI_Vector3Popup_o *vector3Popup,
               System_String_o *tooltip,float elementWidth,float elementHeight,
               UnityEngine_Events_UnityAction_o *onChangeVector,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  Il2CppClass *__this_00;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar3;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Color_o UVar5;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_05704573 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__5_0);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Vector3Button");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"");
    DAT_05704573 = '\x01';
  }
  (__this->fields)._vector3Popup = vector3Popup;
  il2cpp_runtime_glue(&(__this->fields)._vector3Popup);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Vector3Button",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (pIVar3 != (Il2CppObject *)0x0) {
          (*pIVar3->klass->vtable[0x24].methodPtr)
                    (elementWidth,pIVar3,pIVar3->klass->vtable[0x24].method);
          pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar3 != (Il2CppObject *)0x0) {
            (*pIVar3->klass->vtable[0x26].methodPtr)
                      (elementHeight,pIVar3,pIVar3->klass->vtable[0x26].method);
            pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Button_GetComponent_Button);
            if (pIVar3 != (Il2CppObject *)0x0) {
              __this_00 = pIVar3[0x10].klass;
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
                            (&local_88,panel,"DefaultButton","","DefaultPanel",
                             (MethodInfo *)0x0);
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
                    value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r
                    ;
                    value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g
                    ;
                    value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b
                    ;
                    value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a
                    ;
                    value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r
                    ;
                    value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g
                    ;
                    value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b
                    ;
                    value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a
                    ;
                    value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                    value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                    UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                    pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                        pUVar4 = (UnityEngine_UI_Text_o *)
                                 UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
                        ppUVar1 = &(__this->fields)._text;
                        (__this->fields)._text = pUVar4;
                        il2cpp_runtime_glue(ppUVar1,pUVar4);
                        pUVar4 = (__this->fields)._text;
                        UVar5 = UI_UIManager__GetThemeColor
                                          ((style->fields).ThemePanel,"DefaultButton","TextColor",
                                           "DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                                    (UVar5.fields.r,UVar5.fields.b,pUVar4,
                                     (pUVar4->klass->vtable)._23_set_color.method);
                          pUVar4 = *ppUVar1;
                          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_fontSize
                                      (pUVar4,(style->fields).FontSize,(MethodInfo *)0x0);
                            (__this->fields)._onChangeVector = onChangeVector;
                            il2cpp_runtime_glue(&(__this->fields)._onChangeVector,onChangeVector);
                            UI_BaseSettingElement__Setup
                                      ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip
                                       ,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Vector3SettingElement$$OnButtonClicked
// il2cpp: void UI_Vector3SettingElement__OnButtonClicked (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x408c650

void UI_Vector3SettingElement__OnButtonClicked
               (UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  Settings_Vector3Setting_o *setting;
  
  if (DAT_05704574 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    DAT_05704574 = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  if (__this_00 != (UI_Vector3Popup_o *)0x0) {
    setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
    if (setting != (Settings_Vector3Setting_o *)0x0) {
      bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(setting,TypeInfo_Vector3Setting);
      }
    }
    UI_Vector3Popup__Show
              (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Vector3SettingElement$$SyncElement
// il2cpp: void UI_Vector3SettingElement__SyncElement (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x408c6d0

void UI_Vector3SettingElement__SyncElement(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Text_c *pUVar4;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Vector3_Fields vector;
  System_String_o *pSVar5;
  
  if (DAT_05704575 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    DAT_05704575 = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
    if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    pUVar3 = (__this->fields)._text;
    vector = *(UnityEngine_Vector3_Fields *)((long)&pSVar2[1].monitor + 4);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar4 = pUVar3->klass;
      vtable_dispatch = (pUVar4->vtable)._75_set_text.methodPtr;
      (*vtable_dispatch)
                (pUVar3,pSVar5,(pUVar4->vtable)._75_set_text.method,pUVar4,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.Vector3SettingElement$$.ctor
// il2cpp: void UI_Vector3SettingElement___ctor (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x408c7c0

void UI_Vector3SettingElement___ctor(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$<Setup>b__5_0
// il2cpp: void UI_Vector3SettingElement___Setup_b__5_0 (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x408c7d0

void UI_Vector3SettingElement__<Setup>b__5_0(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  Settings_Vector3Setting_o *setting;
  
  if (DAT_05704574 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    DAT_05704574 = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  if (__this_00 != (UI_Vector3Popup_o *)0x0) {
    setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
    if (setting != (Settings_Vector3Setting_o *)0x0) {
      bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(setting,TypeInfo_Vector3Setting);
      }
    }
    UI_Vector3Popup__Show
              (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


