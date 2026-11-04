// Type: UI.ColorSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ColorSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ColorSettingElement.cs
// --------------------------------

// UI.ColorSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ColorSettingElement__get_SupportedSettingTypes (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x1822037e0

System_Collections_Generic_HashSet_SettingType__o *
UI_ColorSettingElement__get_SupportedSettingTypes(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_18434710a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_18434710a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,6,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.ColorSettingElement$$Setup
// il2cpp: void UI_ColorSettingElement__Setup (UI_ColorSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x1822033b0

void UI_ColorSettingElement__Setup
               (UI_ColorSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_ColorPickPopup_o *colorPickPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeColor,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *panel;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_UI_ColorBlock_o *pUVar4;
  UnityEngine_UI_Image_o *value;
  UnityEngine_UI_ColorBlock_o local_d8;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_18434710b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorSettingElement_Setup_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Border/Image");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_18434710b = '\x01';
  }
  (__this->fields)._colorPickPopup = colorPickPopup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colorPickPopup,colorPickPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"ColorButton",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__GetComponent_object_
                           (__this_01,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement)
        ;
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
          pUVar2 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this_01,
                                (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
              __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_ColorSettingElement_Setup_b__5_0,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_02,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_01,
                                    (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                                   );
                if (style != (UI_ElementStyle_o *)0x0) {
                  panel = (style->fields).ThemePanel;
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  pUVar4 = UI_UIManager__GetThemeColorBlock
                                     (&local_78,panel,"DefaultSetting","Icon",
                                      "DefaultPanel",(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
                    local_d8.fields.m_NormalColor.fields.r = (pUVar4->fields).m_NormalColor.fields.r;
                    local_d8.fields.m_NormalColor.fields.g = (pUVar4->fields).m_NormalColor.fields.g;
                    local_d8.fields.m_NormalColor.fields.b = (pUVar4->fields).m_NormalColor.fields.b;
                    local_d8.fields.m_NormalColor.fields.a = (pUVar4->fields).m_NormalColor.fields.a;
                    local_d8.fields.m_HighlightedColor.fields.r = (pUVar4->fields).m_HighlightedColor.fields.r
                    ;
                    local_d8.fields.m_HighlightedColor.fields.g = (pUVar4->fields).m_HighlightedColor.fields.g
                    ;
                    local_d8.fields.m_HighlightedColor.fields.b = (pUVar4->fields).m_HighlightedColor.fields.b
                    ;
                    local_d8.fields.m_HighlightedColor.fields.a = (pUVar4->fields).m_HighlightedColor.fields.a
                    ;
                    local_d8.fields.m_PressedColor.fields.r = (pUVar4->fields).m_PressedColor.fields.r;
                    local_d8.fields.m_PressedColor.fields.g = (pUVar4->fields).m_PressedColor.fields.g;
                    local_d8.fields.m_PressedColor.fields.b = (pUVar4->fields).m_PressedColor.fields.b;
                    local_d8.fields.m_PressedColor.fields.a = (pUVar4->fields).m_PressedColor.fields.a;
                    local_d8.fields.m_SelectedColor.fields.r = (pUVar4->fields).m_SelectedColor.fields.r;
                    local_d8.fields.m_SelectedColor.fields.g = (pUVar4->fields).m_SelectedColor.fields.g;
                    local_d8.fields.m_SelectedColor.fields.b = (pUVar4->fields).m_SelectedColor.fields.b;
                    local_d8.fields.m_SelectedColor.fields.a = (pUVar4->fields).m_SelectedColor.fields.a;
                    local_d8.fields.m_DisabledColor.fields.r = (pUVar4->fields).m_DisabledColor.fields.r;
                    local_d8.fields.m_DisabledColor.fields.g = (pUVar4->fields).m_DisabledColor.fields.g;
                    local_d8.fields.m_DisabledColor.fields.b = (pUVar4->fields).m_DisabledColor.fields.b;
                    local_d8.fields.m_DisabledColor.fields.a = (pUVar4->fields).m_DisabledColor.fields.a;
                    local_d8.fields.m_ColorMultiplier = (pUVar4->fields).m_ColorMultiplier;
                    local_d8.fields.m_FadeDuration = (pUVar4->fields).m_FadeDuration;
                    UnityEngine_UI_Selectable__set_colors
                              ((UnityEngine_UI_Selectable_o *)pUVar3,&local_d8,(MethodInfo *)0x0);
                    pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Border/Image",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        value = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar1,
                                           (MethodInfo_6651A0 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_Image);
                        (__this->fields)._image = value;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._image,value);
                        (__this->fields)._onChangeColor = onChangeColor;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._onChangeColor,onChangeColor);
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
  ThrowNullReferenceException();
}


// UI.ColorSettingElement$$OnButtonClicked
// il2cpp: void UI_ColorSettingElement__OnButtonClicked (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x182203310

void
UI_ColorSettingElement__OnButtonClicked(UI_ColorSettingElement_o* __this, MethodInfo* method)

{
  byte bVar1;
  UI_ColorPickPopup_o *__this_00;
  Settings_ColorSetting_o *setting;
  
  if (Il2CppMethodInitialized_18434710c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    Il2CppMethodInitialized_18434710c = '\x01';
  }
  __this_00 = (__this->fields)._colorPickPopup;
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    setting = (Settings_ColorSetting_o *)(__this->fields)._setting;
    if (setting != (Settings_ColorSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    UI_ColorPickPopup__Show
              (__this_00,setting,(__this->fields)._image,(__this->fields)._onChangeColor,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ColorSettingElement$$SyncElement
// il2cpp: void UI_ColorSettingElement__SyncElement (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x182203720

void UI_ColorSettingElement__SyncElement(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_18434710d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_18434710d = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    if ((*(uint64_t *)((char *)pSVar2 + 0x20)) != (Utility_Color255_o *)0x0) {
      pUVar3 = (__this->fields)._image;
      pUVar4 = Utility_Color255__ToColor(&local_18,(*(uint64_t *)((char *)pSVar2 + 0x20)),(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        local_18.fields.r = (pUVar4->fields).r;
        local_18.fields.g = (pUVar4->fields).g;
        local_18.fields.b = (pUVar4->fields).b;
        local_18.fields.a = (pUVar4->fields).a;
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (pUVar3,&local_18,(pUVar3->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ColorSettingElement$$.ctor
// il2cpp: void UI_ColorSettingElement___ctor (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_ColorSettingElement___ctor(UI_ColorSettingElement_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ColorSettingElement$$<Setup>b__5_0
// il2cpp: void UI_ColorSettingElement___Setup_b__5_0 (UI_ColorSettingElement_o* __this, const MethodInfo* method);
// 0x182203310

void UI_ColorSettingElement___Setup_b__5_0(UI_ColorSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_ColorPickPopup_o *__this_00;
  Settings_ColorSetting_o *setting;
  
  if (Il2CppMethodInitialized_18434710c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    Il2CppMethodInitialized_18434710c = '\x01';
  }
  __this_00 = (__this->fields)._colorPickPopup;
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    setting = (Settings_ColorSetting_o *)(__this->fields)._setting;
    if (setting != (Settings_ColorSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    UI_ColorPickPopup__Show
              (__this_00,setting,(__this->fields)._image,(__this->fields)._onChangeColor,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


