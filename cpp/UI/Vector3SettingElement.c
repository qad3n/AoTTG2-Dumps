// Type: UI.Vector3SettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Vector3SettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/Vector3SettingElement.cs
// --------------------------------

// UI.Vector3SettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_Vector3SettingElement__get_SupportedSettingTypes (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x18223ac00

System_Collections_Generic_HashSet_SettingType__o *
UI_Vector3SettingElement__get_SupportedSettingTypes(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_18434715e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_18434715e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,8,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.Vector3SettingElement$$Setup
// il2cpp: void UI_Vector3SettingElement__Setup (UI_Vector3SettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_Vector3Popup_o* vector3Popup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x18223a710

void UI_Vector3SettingElement__Setup
               (UI_Vector3SettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_Vector3Popup_o *vector3Popup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeVector,
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
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_Color_Fields local_e8;
  UnityEngine_UI_ColorBlock_o local_d8;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_18434715f == '\0') {
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
    Il2CppMethodInitialized_18434715f = '\x01';
  }
  (__this->fields)._vector3Popup = vector3Popup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vector3Popup,vector3Popup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Vector3Button",(MethodInfo *)0x0);
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
                         (intptr_t)MethodInfo_UI_Vector3SettingElement_Setup_b__5_0,(MethodInfo *)0x0);
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
                                     (&local_78,panel,"DefaultButton","",
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
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar5 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Text);
                        (__this->fields)._text = pUVar5;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._text,pUVar5);
                        pUVar5 = (__this->fields)._text;
                        pUVar6 = UI_UIManager__GetThemeColor
                                           ((UnityEngine_Color_o *)&local_e8,(style->fields).ThemePanel,
                                            "DefaultButton","TextColor","DefaultPanel",
                                            (MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                          local_e8.r = (pUVar6->fields).r;
                          local_e8.g = (pUVar6->fields).g;
                          local_e8.b = (pUVar6->fields).b;
                          local_e8.a = (pUVar6->fields).a;
                          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar5,(UnityEngine_Color_o *)&local_e8,
                                     (pUVar5->klass->vtable)._23_set_color.method);
                          pUVar5 = (__this->fields)._text;
                          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_fontSize
                                      (pUVar5,(style->fields).FontSize,(MethodInfo *)0x0);
                            (__this->fields)._onChangeVector = onChangeVector;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._onChangeVector,onChangeVector);
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
  }
  ThrowNullReferenceException();
}


// UI.Vector3SettingElement$$OnButtonClicked
// il2cpp: void UI_Vector3SettingElement__OnButtonClicked (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x18223a670

void
UI_Vector3SettingElement__OnButtonClicked(UI_Vector3SettingElement_o* __this, MethodInfo* method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  Settings_Vector3Setting_o *setting;
  
  if (Il2CppMethodInitialized_184347160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_184347160 = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  if (__this_00 != (UI_Vector3Popup_o *)0x0) {
    setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
    if (setting != (Settings_Vector3Setting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    UI_Vector3Popup__Show
              (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.Vector3SettingElement$$SyncElement
// il2cpp: void UI_Vector3SettingElement__SyncElement (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x18223ab00

void UI_Vector3SettingElement__SyncElement(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  Settings_BaseSetting_o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_184347161 = '\x01';
  }
  pSVar4 = (__this->fields)._setting;
  if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
    bVar2 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
    if (((pSVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar4);
    }
    pUVar5 = (__this->fields)._text;
    fVar3 = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar4 + 0x28)) + 4);
    uVar1 = *(undefined8 *)((longlong)&(*(uint64_t *)((char *)pSVar4 + 0x20)) + 4);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar3;
    pSVar6 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                (pUVar5,pSVar6,(pUVar5->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.Vector3SettingElement$$.ctor
// il2cpp: void UI_Vector3SettingElement___ctor (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x18190eda0

void
UI_Vector3SettingElement___ctor(UI_Vector3SettingElement_o* __this, MethodInfo* method)

{
  UI_BaseSettingElement___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.Vector3SettingElement$$<Setup>b__5_0
// il2cpp: void UI_Vector3SettingElement___Setup_b__5_0 (UI_Vector3SettingElement_o* __this, const MethodInfo* method);
// 0x18223a670

void UI_Vector3SettingElement___Setup_b__5_0(UI_Vector3SettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_Vector3Popup_o *__this_00;
  Settings_Vector3Setting_o *setting;
  
  if (Il2CppMethodInitialized_184347160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_184347160 = '\x01';
  }
  __this_00 = (__this->fields)._vector3Popup;
  if (__this_00 != (UI_Vector3Popup_o *)0x0) {
    setting = (Settings_Vector3Setting_o *)(__this->fields)._setting;
    if (setting != (Settings_Vector3Setting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
    }
    UI_Vector3Popup__Show
              (__this_00,setting,(__this->fields)._text,(__this->fields)._onChangeVector,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


