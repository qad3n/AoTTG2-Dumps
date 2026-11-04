// Type: UI.IconPickSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/IconPickSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IconPickSettingElement.cs
// --------------------------------

// UI.IconPickSettingElement.<>c__DisplayClass5_0$$.ctor
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass5_0___ctor (UI_IconPickSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_IconPickSettingElement___c__DisplayClass5_0___ctor(UI_IconPickSettingElement___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickSettingElement.<>c__DisplayClass5_0$$<Setup>b__0
// il2cpp: void UI_IconPickSettingElement___c__DisplayClass5_0___Setup_b__0 (UI_IconPickSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18221b060

void UI_IconPickSettingElement___c__DisplayClass5_0___Setup_b__0
               (UI_IconPickSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  UI_IconPickSettingElement_o *pUVar1;
  UI_IconPickPopup_o *__this_00;
  
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_IconPickSettingElement_o *)0x0) &&
     (__this_00 = (__this->fields).iconPickPopup, __this_00 != (UI_IconPickPopup_o *)0x0)) {
    UI_IconPickPopup__Show
              (__this_00,(pUVar1->fields)._setting,(pUVar1->fields)._label,(__this->fields).options,
               (__this->fields).iconPaths,(__this->fields).tooltips,(__this->fields).onSelect,
               (__this->fields).tooltipPopup,(pUVar1->fields)._intOptionValues,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.IconPickSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_IconPickSettingElement__get_SupportedSettingTypes (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x182212080

System_Collections_Generic_HashSet_SettingType__o *
UI_IconPickSettingElement__get_SupportedSettingTypes(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_18434711f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_18434711f = '\x01';
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
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.IconPickSettingElement$$Setup
// il2cpp: void UI_IconPickSettingElement__Setup (UI_IconPickSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_array* iconPaths, System_String_array* tooltips, UI_IconPickPopup_o* iconPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x1822119b0

void UI_IconPickSettingElement__Setup
               (UI_IconPickSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_array *iconPaths,
               System_String_array *tooltips,UI_IconPickPopup_o *iconPickPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onSelect,
               UI_TooltipPopup_o *tooltipPopup,System_Int32_array *intOptionValues,MethodInfo *method)

{
  System_String_array *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *panel;
  UI_IconPickSettingElement___c__DisplayClass5_0_o *object;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_UI_Button_o *pUVar4;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_UI_ColorBlock_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  UnityEngine_Color_o local_118;
  UnityEngine_UI_ColorBlock_o local_108;
  UnityEngine_UI_ColorBlock_o local_a8;
  
  if (Il2CppMethodInitialized_184347120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_IconPickSettingElement_c__DisplayClass5_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_IconPickSettingElement_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347120 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_IconPickSettingElement_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_IconPickSettingElement___c__DisplayClass5_0_o *)0x0) {
    (object->fields).iconPickPopup = iconPickPopup;
    Il2CppCodeGenWriteBarrier(&(object->fields).iconPickPopup,iconPickPopup);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).options = options;
    Il2CppCodeGenWriteBarrier(&(object->fields).options,options);
    (object->fields).iconPaths = iconPaths;
    Il2CppCodeGenWriteBarrier(&(object->fields).iconPaths,iconPaths);
    (object->fields).tooltips = tooltips;
    Il2CppCodeGenWriteBarrier(&(object->fields).tooltips,tooltips);
    (object->fields).onSelect = onSelect;
    Il2CppCodeGenWriteBarrier(&(object->fields).onSelect,onSelect);
    (object->fields).tooltipPopup = tooltipPopup;
    Il2CppCodeGenWriteBarrier(&(object->fields).tooltipPopup,tooltipPopup);
    (__this->fields)._intOptionValues = intOptionValues;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues,intOptionValues);
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Button",(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
        ;
        if (0.0 < elementWidth) {
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_182211e92;
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_182211e92;
          (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar3,elementWidth,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
        }
        if (elementHeight <= 0.0) {
          pSVar1 = (object->fields).options;
          (__this->fields)._options = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._options,pSVar1);
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_182211e92;
        }
        else {
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_182211e92;
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_182211e92;
          (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar3,elementHeight,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
          pSVar1 = (object->fields).options;
          (__this->fields)._options = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._options,pSVar1);
        }
        pUVar4 = UnityEngine_GameObject__GetComponent_object_
                           (__this_01,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if (pUVar4 != (UnityEngine_UI_Button_o *)0x0) {
          __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar4->fields).m_OnClick;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_IconPickSettingElement_c__DisplayClass5_0_Setup_b__0,
                     (MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_02,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_GameObject__GetComponent_object_
                               (__this_01,
                                (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            if (style != (UI_ElementStyle_o *)0x0) {
              panel = (style->fields).ThemePanel;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar5 = UI_UIManager__GetThemeColorBlock
                                 (&local_a8,panel,"DefaultButton","",
                                  "DefaultPanel",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_UI_Button_o *)0x0) {
                local_108.fields.m_NormalColor.fields.r = (pUVar5->fields).m_NormalColor.fields.r;
                local_108.fields.m_NormalColor.fields.g = (pUVar5->fields).m_NormalColor.fields.g;
                local_108.fields.m_NormalColor.fields.b = (pUVar5->fields).m_NormalColor.fields.b;
                local_108.fields.m_NormalColor.fields.a = (pUVar5->fields).m_NormalColor.fields.a;
                local_108.fields.m_HighlightedColor.fields.r = (pUVar5->fields).m_HighlightedColor.fields.r;
                local_108.fields.m_HighlightedColor.fields.g = (pUVar5->fields).m_HighlightedColor.fields.g;
                local_108.fields.m_HighlightedColor.fields.b = (pUVar5->fields).m_HighlightedColor.fields.b;
                local_108.fields.m_HighlightedColor.fields.a = (pUVar5->fields).m_HighlightedColor.fields.a;
                local_108.fields.m_PressedColor.fields.r = (pUVar5->fields).m_PressedColor.fields.r;
                local_108.fields.m_PressedColor.fields.g = (pUVar5->fields).m_PressedColor.fields.g;
                local_108.fields.m_PressedColor.fields.b = (pUVar5->fields).m_PressedColor.fields.b;
                local_108.fields.m_PressedColor.fields.a = (pUVar5->fields).m_PressedColor.fields.a;
                local_108.fields.m_SelectedColor.fields.r = (pUVar5->fields).m_SelectedColor.fields.r;
                local_108.fields.m_SelectedColor.fields.g = (pUVar5->fields).m_SelectedColor.fields.g;
                local_108.fields.m_SelectedColor.fields.b = (pUVar5->fields).m_SelectedColor.fields.b;
                local_108.fields.m_SelectedColor.fields.a = (pUVar5->fields).m_SelectedColor.fields.a;
                local_108.fields.m_DisabledColor.fields.r = (pUVar5->fields).m_DisabledColor.fields.r;
                local_108.fields.m_DisabledColor.fields.g = (pUVar5->fields).m_DisabledColor.fields.g;
                local_108.fields.m_DisabledColor.fields.b = (pUVar5->fields).m_DisabledColor.fields.b;
                local_108.fields.m_DisabledColor.fields.a = (pUVar5->fields).m_DisabledColor.fields.a;
                local_108.fields.m_ColorMultiplier = (pUVar5->fields).m_ColorMultiplier;
                local_108.fields.m_FadeDuration = (pUVar5->fields).m_FadeDuration;
                UnityEngine_UI_Selectable__set_colors
                          ((UnityEngine_UI_Selectable_o *)pUVar4,&local_108,(MethodInfo *)0x0);
                pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    pUVar6 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar2,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Text);
                    (__this->fields)._label = pUVar6;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pUVar6);
                    pUVar6 = (__this->fields)._label;
                    if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                      UnityEngine_UI_Text__set_fontSize(pUVar6,(style->fields).FontSize,(MethodInfo *)0x0);
                      pUVar6 = (__this->fields)._label;
                      pUVar7 = UI_UIManager__GetThemeColor
                                         (&local_118,(style->fields).ThemePanel,"DefaultButton",
                                          "TextColor","DefaultPanel",(MethodInfo *)0x0);
                      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                        local_118.fields.r = (pUVar7->fields).r;
                        local_118.fields.g = (pUVar7->fields).g;
                        local_118.fields.b = (pUVar7->fields).b;
                        local_118.fields.a = (pUVar7->fields).a;
                        (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar6,&local_118,(pUVar6->klass->vtable)._23_set_color.method);
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
label_182211e92:
  ThrowNullReferenceException();
}


// UI.IconPickSettingElement$$SyncElement
// il2cpp: void UI_IconPickSettingElement__SyncElement (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x182211ea0

void UI_IconPickSettingElement__SyncElement(UI_IconPickSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_int__o *__this_00;
  System_String_array *pSVar2;
  System_Int32_array *pSVar3;
  Settings_BaseSetting_o *pSVar4;
  uint uVar5;
  UnityEngine_UI_Text_c *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  int32_t value;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_184347121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347121 = '\x01';
  }
  if ((__this->fields)._settingType == 4) {
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) goto label_182212059;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar4);
    }
    pUVar7 = (__this->fields)._label;
    if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_182212059;
    pUVar6 = pUVar7->klass;
    pSVar8 = (*(uint64_t *)((char *)pSVar4 + 0x20));
    pMVar9 = (pUVar6->vtable)._75_set_text.method;
    goto label_182211ff6;
  }
  if ((__this->fields)._settingType != 2) {
    return;
  }
  __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
  if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_182212059;
  bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  if ((__this->fields)._intOptionValues == (System_Int32_array *)0x0) {
    uVar5 = (__this_00->fields)._value;
  }
  else {
    uVar5 = System_Array__IndexOf_int_
                      ((__this->fields)._intOptionValues,(__this_00->fields)._value,
                       (MethodInfo_761C20 *)MethodInfo_System_Array_IndexOf_int);
  }
  if ((int)uVar5 < 0) {
label_182211f96:
    if ((__this->fields)._intOptionValues == (System_Int32_array *)0x0) {
      value = 0;
    }
    else {
      pSVar3 = (__this->fields)._intOptionValues;
      if ((int)pSVar3->max_length == 0) goto label_18221205f;
      value = pSVar3->m_Items[0];
    }
    uVar5 = 0;
    Settings_TypedSetting_int___set_Value
              (__this_00,value,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  }
  else {
    pSVar2 = (__this->fields)._options;
    if (pSVar2 == (System_String_array *)0x0) goto label_182212059;
    if ((int)pSVar2->max_length <= (int)uVar5) goto label_182211f96;
  }
  pSVar2 = (__this->fields)._options;
  if (pSVar2 != (System_String_array *)0x0) {
    if ((uint)pSVar2->max_length <= uVar5) {
label_18221205f:
      ThrowIndexOutOfRangeException();
    }
    pUVar7 = (__this->fields)._label;
    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar6 = pUVar7->klass;
      pMVar9 = (pUVar6->vtable)._75_set_text.method;
      pSVar8 = pSVar2->m_Items[uVar5];
label_182211ff6:
      (*(pUVar6->vtable)._75_set_text.methodPtr)(pUVar7,pSVar8,pMVar9);
      return;
    }
  }
label_182212059:
  ThrowNullReferenceException();
}


// UI.IconPickSettingElement$$.ctor
// il2cpp: void UI_IconPickSettingElement___ctor (UI_IconPickSettingElement_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_IconPickSettingElement___ctor(UI_IconPickSettingElement_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


