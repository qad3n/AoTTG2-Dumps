// Type: UI.ButtonPopupSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ButtonPopupSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ButtonPopupSettingElement.cs
// --------------------------------

// UI.ButtonPopupSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ButtonPopupSettingElement__get_SupportedSettingTypes (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x182202560

System_Collections_Generic_HashSet_SettingType__o *
UI_ButtonPopupSettingElement__get_SupportedSettingTypes
          (UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347107 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.ButtonPopupSettingElement$$Setup
// il2cpp: void UI_ButtonPopupSettingElement__Setup (UI_ButtonPopupSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_BasePopup_o* popup, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x182201fd0

void UI_ButtonPopupSettingElement__Setup
               (UI_ButtonPopupSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,UI_BasePopup_o *popup,System_String_o *tooltip,
               float elementWidth,float elementHeight,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *panel;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_UI_ColorBlock_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_Color_o local_108;
  UnityEngine_UI_ColorBlock_o local_f8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_184347108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ButtonPopupSettingElement_Setup_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Button/Text");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347108 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Button",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"Button/Text",(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          __this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (0.0 < elementWidth) {
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_1822024b3;
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_01,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822024b3;
            (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
            if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_1822024b3;
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_02,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822024b3;
            (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
          }
          if (elementHeight <= 0.0) {
            (__this->fields)._popup = popup;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._popup,popup);
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_1822024b3;
          }
          else {
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_1822024b3;
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_01,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822024b3;
            (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_1822024b3;
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_02,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822024b3;
            (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            (__this->fields)._popup = popup;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._popup,popup);
          }
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
            __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_ButtonPopupSettingElement_Setup_b__4_0,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_01,
                                  (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
              if (style != (UI_ElementStyle_o *)0x0) {
                panel = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar4 = UI_UIManager__GetThemeColorBlock
                                   (&local_98,panel,"DefaultButton","",
                                    "DefaultPanel",(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
                  local_f8.fields.m_NormalColor.fields.r = (pUVar4->fields).m_NormalColor.fields.r;
                  local_f8.fields.m_NormalColor.fields.g = (pUVar4->fields).m_NormalColor.fields.g;
                  local_f8.fields.m_NormalColor.fields.b = (pUVar4->fields).m_NormalColor.fields.b;
                  local_f8.fields.m_NormalColor.fields.a = (pUVar4->fields).m_NormalColor.fields.a;
                  local_f8.fields.m_HighlightedColor.fields.r = (pUVar4->fields).m_HighlightedColor.fields.r;
                  local_f8.fields.m_HighlightedColor.fields.g = (pUVar4->fields).m_HighlightedColor.fields.g;
                  local_f8.fields.m_HighlightedColor.fields.b = (pUVar4->fields).m_HighlightedColor.fields.b;
                  local_f8.fields.m_HighlightedColor.fields.a = (pUVar4->fields).m_HighlightedColor.fields.a;
                  local_f8.fields.m_PressedColor.fields.r = (pUVar4->fields).m_PressedColor.fields.r;
                  local_f8.fields.m_PressedColor.fields.g = (pUVar4->fields).m_PressedColor.fields.g;
                  local_f8.fields.m_PressedColor.fields.b = (pUVar4->fields).m_PressedColor.fields.b;
                  local_f8.fields.m_PressedColor.fields.a = (pUVar4->fields).m_PressedColor.fields.a;
                  local_f8.fields.m_SelectedColor.fields.r = (pUVar4->fields).m_SelectedColor.fields.r;
                  local_f8.fields.m_SelectedColor.fields.g = (pUVar4->fields).m_SelectedColor.fields.g;
                  local_f8.fields.m_SelectedColor.fields.b = (pUVar4->fields).m_SelectedColor.fields.b;
                  local_f8.fields.m_SelectedColor.fields.a = (pUVar4->fields).m_SelectedColor.fields.a;
                  local_f8.fields.m_DisabledColor.fields.r = (pUVar4->fields).m_DisabledColor.fields.r;
                  local_f8.fields.m_DisabledColor.fields.g = (pUVar4->fields).m_DisabledColor.fields.g;
                  local_f8.fields.m_DisabledColor.fields.b = (pUVar4->fields).m_DisabledColor.fields.b;
                  local_f8.fields.m_DisabledColor.fields.a = (pUVar4->fields).m_DisabledColor.fields.a;
                  local_f8.fields.m_ColorMultiplier = (pUVar4->fields).m_ColorMultiplier;
                  local_f8.fields.m_FadeDuration = (pUVar4->fields).m_FadeDuration;
                  UnityEngine_UI_Selectable__set_colors
                            ((UnityEngine_UI_Selectable_o *)pUVar3,&local_f8,(MethodInfo *)0x0);
                  pUVar1 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar5 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar1,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Text);
                      (__this->fields)._label = pUVar5;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pUVar5);
                      pUVar5 = (__this->fields)._label;
                      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                        UnityEngine_UI_Text__set_fontSize(pUVar5,(style->fields).FontSize,(MethodInfo *)0x0);
                        pUVar5 = (__this->fields)._label;
                        pUVar6 = UI_UIManager__GetThemeColor
                                           (&local_108,(style->fields).ThemePanel,"DefaultButton",
                                            "TextColor","DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                          local_108.fields.r = (pUVar6->fields).r;
                          local_108.fields.g = (pUVar6->fields).g;
                          local_108.fields.b = (pUVar6->fields).b;
                          local_108.fields.a = (pUVar6->fields).a;
                          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar5,&local_108,(pUVar5->klass->vtable)._23_set_color.method);
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
label_1822024b3:
  ThrowNullReferenceException();
}


// UI.ButtonPopupSettingElement$$OnClick
// il2cpp: void UI_ButtonPopupSettingElement__OnClick (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x182201fa0

void
UI_ButtonPopupSettingElement__OnClick(UI_ButtonPopupSettingElement_o* __this, MethodInfo* method)

{
  UI_BasePopup_o *pUVar1;
  
  pUVar1 = (__this->fields)._popup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ButtonPopupSettingElement$$SyncElement
// il2cpp: void UI_ButtonPopupSettingElement__SyncElement (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x1822024c0

void UI_ButtonPopupSettingElement__SyncElement(UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Text_o *pUVar3;
  
  if (Il2CppMethodInitialized_184347109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347109 = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    pUVar3 = (__this->fields)._label;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,(*(uint64_t *)((char *)pSVar2 + 0x20)),(pUVar3->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ButtonPopupSettingElement$$.ctor
// il2cpp: void UI_ButtonPopupSettingElement___ctor (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_ButtonPopupSettingElement___ctor(UI_ButtonPopupSettingElement_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ButtonPopupSettingElement$$<Setup>b__4_0
// il2cpp: void UI_ButtonPopupSettingElement___Setup_b__4_0 (UI_ButtonPopupSettingElement_o* __this, const MethodInfo* method);
// 0x182201fa0

void UI_ButtonPopupSettingElement___Setup_b__4_0(UI_ButtonPopupSettingElement_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  
  pUVar1 = (__this->fields)._popup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    return;
  }
  ThrowNullReferenceException();
}


