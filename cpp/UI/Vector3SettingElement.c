// Type: UI.Vector3SettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Vector3SettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/Vector3SettingElement.cs
// --------------------------------

// UI.Vector3SettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_Vector3SettingElement__get_SupportedSettingTypes (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x5cf97e0

System_Collections_Generic_HashSet_SettingType__o *
UI_Vector3SettingElement__get_SupportedSettingTypes(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547ccb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547ccb = '\x01';
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
            ((System_Collections_Generic_HashSet_T__o *)__this_00,8,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.Vector3SettingElement$$Setup
// il2cpp: void UI_Vector3SettingElement__Setup (UI_Vector3SettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_Vector3Popup_o* vector3Popup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x5cf9860

void UI_Vector3SettingElement__Setup
               (UI_Vector3SettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_Vector3Popup_o *vector3Popup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeVector,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_UI_Text_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar5;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547ccc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_Vector3SettingElement_Setup_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3Button");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547ccc = '\x01';
  }
  (__this->fields)._vector3Popup = vector3Popup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vector3Popup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Vector3Button",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__GetComponent_object_
                           (__this_01,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                           );
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
          pUVar2 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this_01,
                                (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
              __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (__this_02,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_Vector3SettingElement_Setup_b__5_0,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_02,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_01,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                if (style != (UI_ElementStyle_o *)0x0) {
                  panel = (style->fields).ThemePanel;
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  method_00 = (MethodInfo *)0x0;
                  UI_UIManager__GetThemeColorBlock
                            (&local_88,panel,"DefaultButton","","DefaultPanel"
                             ,(MethodInfo *)0x0);
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
                    pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar4 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Text);
                        targetAddress = &(__this->fields)._text;
                        (__this->fields)._text = pUVar4;
                        Il2CppCodeGenWriteBarrier(targetAddress);
                        pUVar4 = (__this->fields)._text;
                        UVar5 = UI_UIManager__GetThemeColor
                                          ((style->fields).ThemePanel,"DefaultButton",
                                           "TextColor","DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar4,UVar5,(pUVar4->klass->vtable)._23_set_color.method);
                          pUVar4 = *targetAddress;
                          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_fontSize
                                      (pUVar4,(style->fields).FontSize,(MethodInfo *)0x0);
                            (__this->fields)._onChangeVector = onChangeVector;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._onChangeVector);
                            UI_BaseSettingElement__Setup
                                      ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,method_00
                                      );
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
  ThrowNullReferenceException();
}


// UI.Vector3SettingElement$$OnButtonClicked
// il2cpp: void UI_Vector3SettingElement__OnButtonClicked (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x5cf9c20

void UI_Vector3SettingElement__OnButtonClicked(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  Settings_Vector3Setting_o *setting;
  
  if (Il2CppMethodInitialized_07547ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_07547ccd = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  if (__this_00 == (UI_Vector3Popup_o *)0x0) {
    ThrowNullReferenceException();
  }
  setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
  if (setting != (Settings_Vector3Setting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting,TypeInfo_Settings_Vector3Setting);
    }
  }
  UI_Vector3Popup__Show
            (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$SyncElement
// il2cpp: void UI_Vector3SettingElement__SyncElement (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x5cf9ca0

void UI_Vector3SettingElement__SyncElement(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Vector3_Fields vector;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547cce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_07547cce = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_Vector3Setting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (__this->fields)._text;
    vector = *(UnityEngine_Vector3_Fields *)((long)&(*(uint64_t *)((char *)pSVar2 + 0x20)) + 4);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar4 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar4,(pUVar3->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.Vector3SettingElement$$.ctor
// il2cpp: void UI_Vector3SettingElement___ctor (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x5cf9d90

void UI_Vector3SettingElement___ctor(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$<Setup>b__5_0
// il2cpp: void UI_Vector3SettingElement___Setup_b__5_0 (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x5cf9da0

void UI_Vector3SettingElement___Setup_b__5_0(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  Settings_Vector3Setting_o *setting;
  
  if (Il2CppMethodInitialized_07547ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_07547ccd = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  if (__this_00 == (UI_Vector3Popup_o *)0x0) {
    ThrowNullReferenceException();
  }
  setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
  if (setting != (Settings_Vector3Setting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting,TypeInfo_Settings_Vector3Setting);
    }
  }
  UI_Vector3Popup__Show
            (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,(MethodInfo *)0x0);
  return;
}


