// Type: UI.ColorSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ColorSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/ColorSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.ColorSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ColorSettingElement__get_SupportedSettingTypes (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x40810a0

System_Collections_Generic_HashSet_SettingType__o *
UI_ColorSettingElement__get_SupportedSettingTypes
          (UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_0570451f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_0570451f = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,6,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorSettingElement$$Setup
// il2cpp: void UI_ColorSettingElement__Setup (UI_ColorSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x407e7b0

void UI_ColorSettingElement__Setup
               (UI_ColorSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,UI_ColorPickPopup_o *colorPickPopup,
               System_String_o *tooltip,float elementWidth,float elementHeight,
               UnityEngine_Events_UnityAction_o *onChangeColor,MethodInfo *method)

{
  Il2CppClass *__this_00;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar2;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_UI_Image_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_05704520 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__5_0);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Border/Image");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"ColorButton");
    il2cpp_init_method_metadata(&"Icon");
    DAT_05704520 = '\x01';
  }
  (__this->fields)._colorPickPopup = colorPickPopup;
  il2cpp_runtime_glue(&(__this->fields)._colorPickPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"ColorButton",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (pIVar2 != (Il2CppObject *)0x0) {
          (*pIVar2->klass->vtable[0x24].methodPtr)
                    (elementWidth,pIVar2,pIVar2->klass->vtable[0x24].method);
          pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar2 != (Il2CppObject *)0x0) {
            (*pIVar2->klass->vtable[0x26].methodPtr)
                      (elementHeight,pIVar2,pIVar2->klass->vtable[0x26].method);
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
                  method_00 = (MethodInfo *)0x0;
                  UI_UIManager__GetThemeColorBlock
                            (&local_88,panel,"DefaultSetting","Icon","DefaultPanel",
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
                    pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Border/Image",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar3 = (UnityEngine_UI_Image_o *)
                                 UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_Image_GetComponent_Image);
                        (__this->fields)._image = pUVar3;
                        il2cpp_runtime_glue(&(__this->fields)._image,pUVar3);
                        (__this->fields)._onChangeColor = onChangeColor;
                        il2cpp_runtime_glue(&(__this->fields)._onChangeColor,onChangeColor);
                        UI_BaseSettingElement__Setup
                                  ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,
                                   method_00);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorSettingElement$$OnButtonClicked
// il2cpp: void UI_ColorSettingElement__OnButtonClicked (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x4081120

void UI_ColorSettingElement__OnButtonClicked(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_ColorPickPopup_o *__this_00;
  Settings_ColorSetting_o *setting;
  
  if (DAT_05704521 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    DAT_05704521 = '\x01';
  }
  __this_00 = (__this->fields)._colorPickPopup;
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    setting = (Settings_ColorSetting_o *)(__this->fields)._setting;
    if (setting != (Settings_ColorSetting_o *)0x0) {
      bVar1 = (TypeInfo_ColorSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(setting,TypeInfo_ColorSetting);
      }
    }
    UI_ColorPickPopup__Show
              (__this_00,setting,(__this->fields)._image,(__this->fields)._onChangeColor,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorSettingElement$$SyncElement
// il2cpp: void UI_ColorSettingElement__SyncElement (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x40811a0

void UI_ColorSettingElement__SyncElement(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  UnityEngine_Color_o UVar4;
  
  if (DAT_05704522 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_05704522 = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_ColorSetting->_2).naturalAligment;
    if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if (pSVar2[1].monitor != (Utility_Color255_o *)0x0) {
      pUVar3 = (__this->fields)._image;
      UVar4 = Utility_Color255__ToColor(pSVar2[1].monitor,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        vtable_dispatch = (pUVar3->klass->vtable)._23_set_color.methodPtr;
        (*vtable_dispatch)
                  (UVar4.fields._0_8_,UVar4.fields._8_8_,pUVar3,
                   (pUVar3->klass->vtable)._23_set_color.method,extraout_RDX,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorSettingElement$$.ctor
// il2cpp: void UI_ColorSettingElement___ctor (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x4081240

void UI_ColorSettingElement___ctor(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ColorSettingElement$$<Setup>b__5_0
// il2cpp: void UI_ColorSettingElement___Setup_b__5_0 (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x4081250

void UI_ColorSettingElement__<Setup>b__5_0(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_ColorPickPopup_o *__this_00;
  Settings_ColorSetting_o *setting;
  
  if (DAT_05704521 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    DAT_05704521 = '\x01';
  }
  __this_00 = (__this->fields)._colorPickPopup;
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    setting = (Settings_ColorSetting_o *)(__this->fields)._setting;
    if (setting != (Settings_ColorSetting_o *)0x0) {
      bVar1 = (TypeInfo_ColorSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(setting,TypeInfo_ColorSetting);
      }
    }
    UI_ColorPickPopup__Show
              (__this_00,setting,(__this->fields)._image,(__this->fields)._onChangeColor,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


