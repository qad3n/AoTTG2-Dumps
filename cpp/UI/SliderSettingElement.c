// Type: UI.SliderSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/SliderSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderSettingElement.cs
// --------------------------------

// UI.SliderSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderSettingElement__get_SupportedSettingTypes (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x182238210

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderSettingElement__get_SupportedSettingTypes(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_18434714c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_18434714c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,3,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.SliderSettingElement$$Setup
// il2cpp: void UI_SliderSettingElement__Setup (UI_SliderSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t decimalPlaces, float interval, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x182237790

void UI_SliderSettingElement__Setup
               (UI_SliderSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               int32_t decimalPlaces,float interval,UnityEngine_Events_UnityAction_o *onValueChanged,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  System_String_o *panel;
  int32_t iVar2;
  System_Globalization_NumberFormatInfo_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Slider_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  DG_Tweening_Core_DOSetter_float__o *__this_01;
  UnityEngine_UI_Image_o *pUVar8;
  UnityEngine_Color_o *pUVar9;
  float value;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_18434714d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Slider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_NumberFormatInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SliderSettingElement_Setup_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Handle Slide Area/Handle");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Fill Area/Fill");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderHandleColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderFillColor");
    Il2CppMethodInitialized_18434714d = '\x01';
  }
  (__this->fields)._interval = interval;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Globalization_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._formatInfo,pSVar3);
  pSVar3 = (__this->fields)._formatInfo;
  if (pSVar3 == (System_Globalization_NumberFormatInfo_o *)0x0) goto label_182237f83;
  System_Globalization_NumberFormatInfo__set_NumberDecimalDigits(pSVar3,decimalPlaces,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182237f83;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Slider",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182237f83;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
  (__this->fields)._slider = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slider,pUVar5);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182237f83;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Value",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182237f83;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  (__this->fields)._valueLabel = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueLabel,pUVar6);
  iVar2 = UI_BaseSettingElement__GetSettingType((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar2;
  if (iVar2 == 2) {
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_182237f83;
    UnityEngine_UI_Slider__set_wholeNumbers(pUVar5,true,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_182237f83;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_182237f83;
    UnityEngine_UI_Slider__set_minValue(pUVar5,(float)*(int *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_182237f83;
    value = (float)*(int *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
label_182237b53:
    UnityEngine_UI_Slider__set_maxValue(pUVar5,value,(MethodInfo *)0x0);
  }
  else if (iVar2 == 3) {
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_182237f83;
    UnityEngine_UI_Slider__set_wholeNumbers(pUVar5,false,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_182237f83;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_182237f83;
    UnityEngine_UI_Slider__set_minValue(pUVar5,*(float *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_182237f83;
    value = *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
    goto label_182237b53;
  }
  pUVar5 = (__this->fields)._slider;
  if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar5,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar7,elementWidth,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
      pUVar5 = (__this->fields)._slider;
      if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
        pUVar7 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar5,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar7,elementHeight,(pUVar7->klass->vtable)._38_set_preferredHeight.method);
          pUVar5 = (__this->fields)._slider;
          if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
            __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar5->fields).m_OnValueChanged;
            __this_01 = (DG_Tweening_Core_DOSetter_float__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_float);
            UnityEngine_Events_UnityAction_float____ctor
                      (__this_01,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_SliderSettingElement_Setup_b__7_0,(MethodInfo_E5A750 *)0x0);
            if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
              UnityEngine_Events_UnityEvent_Vector2___AddListener
                        (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
                         (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
              if ((style != (UI_ElementStyle_o *)0x0) &&
                 (pUVar6 = (__this->fields)._valueLabel, pUVar6 != (UnityEngine_UI_Text_o *)0x0)) {
                UnityEngine_UI_Text__set_fontSize(pUVar6,(style->fields).FontSize,(MethodInfo *)0x0);
                pUVar6 = (__this->fields)._valueLabel;
                if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                  pUVar7 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar6,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                  if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar7->klass->vtable)._32_set_minWidth.methodPtr)
                              (pUVar7,55.0,(pUVar7->klass->vtable)._32_set_minWidth.method);
                    (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar7,55.0,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
                    pUVar6 = (__this->fields)._valueLabel;
                    if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                      UnityEngine_UI_Text__set_horizontalOverflow(pUVar6,1,(MethodInfo *)0x0);
                      pUVar6 = (__this->fields)._valueLabel;
                      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                        UnityEngine_UI_Text__set_verticalOverflow(pUVar6,1,(MethodInfo *)0x0);
                        pUVar5 = (__this->fields)._slider;
                        if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
                          pUVar4 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                            pUVar4 = UnityEngine_Transform__Find
                                               (pUVar4,"Background",(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                              pUVar8 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar4,
                                                  (MethodInfo_6651A0 *)
                                                  MethodInfo_UnityEngine_Component_GetComponent_Image);
                              panel = (style->fields).ThemePanel;
                              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                              }
                              pUVar9 = UI_UIManager__GetThemeColor
                                                 ((UnityEngine_Color_o *)&local_28,panel,"DefaultSetting"
                                                  ,"SliderBackgroundColor","DefaultPanel",
                                                  (MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                                local_28.r = (pUVar9->fields).r;
                                local_28.g = (pUVar9->fields).g;
                                local_28.b = (pUVar9->fields).b;
                                local_28.a = (pUVar9->fields).a;
                                (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                          (pUVar8,(UnityEngine_Color_o *)&local_28,
                                           (pUVar8->klass->vtable)._23_set_color.method);
                                pUVar5 = (__this->fields)._slider;
                                if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
                                  pUVar4 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar4 = UnityEngine_Transform__Find
                                                       (pUVar4,"Fill Area/Fill",(MethodInfo *)0x0);
                                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar8 = UnityEngine_Component__GetComponent_object_
                                                         ((UnityEngine_Component_o *)pUVar4,
                                                          (MethodInfo_6651A0 *)
                                                          MethodInfo_UnityEngine_Component_GetComponent_Image)
                                      ;
                                      pUVar9 = UI_UIManager__GetThemeColor
                                                         ((UnityEngine_Color_o *)&local_28,
                                                          (style->fields).ThemePanel,"DefaultSetting",
                                                          "SliderFillColor","DefaultPanel",
                                                          (MethodInfo *)0x0);
                                      if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                                        local_28.r = (pUVar9->fields).r;
                                        local_28.g = (pUVar9->fields).g;
                                        local_28.b = (pUVar9->fields).b;
                                        local_28.a = (pUVar9->fields).a;
                                        (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                  (pUVar8,(UnityEngine_Color_o *)&local_28,
                                                   (pUVar8->klass->vtable)._23_set_color.method);
                                        pUVar5 = (__this->fields)._slider;
                                        if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
                                          pUVar4 = UnityEngine_Component__get_transform
                                                             ((UnityEngine_Component_o *)pUVar5,
                                                              (MethodInfo *)0x0);
                                          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                            pUVar4 = UnityEngine_Transform__Find
                                                               (pUVar4,"Handle Slide Area/Handle",(MethodInfo *)0x0
                                                               );
                                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                              pUVar8 = UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar4,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                              pUVar9 = UI_UIManager__GetThemeColor
                                                                 ((UnityEngine_Color_o *)&local_28,
                                                                  (style->fields).ThemePanel,
                                                                  "DefaultSetting","SliderHandleColor",
                                                                  "DefaultPanel",(MethodInfo *)0x0);
                                              if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                                                local_28.r = (pUVar9->fields).r;
                                                local_28.g = (pUVar9->fields).g;
                                                local_28.b = (pUVar9->fields).b;
                                                local_28.a = (pUVar9->fields).a;
                                                (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                          (pUVar8,(UnityEngine_Color_o *)&local_28,
                                                           (pUVar8->klass->vtable)._23_set_color.method);
                                                pUVar6 = (__this->fields)._valueLabel;
                                                pUVar9 = UI_UIManager__GetThemeColor
                                                                   ((UnityEngine_Color_o *)&local_28,
                                                                    (style->fields).ThemePanel,
                                                                    "DefaultSetting",
                                                                    "TextColor",
                                                                    "DefaultPanel",(MethodInfo *)0x0);
                                                if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                                                  local_28.r = (pUVar9->fields).r;
                                                  local_28.g = (pUVar9->fields).g;
                                                  local_28.b = (pUVar9->fields).b;
                                                  local_28.a = (pUVar9->fields).a;
                                                  (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                                            (pUVar6,(UnityEngine_Color_o *)&local_28,
                                                             (pUVar6->klass->vtable)._23_set_color.method);
                                                  UI_BaseSettingElement__Setup
                                                            ((UI_BaseSettingElement_o *)__this,setting,style,
                                                             title,tooltip,(MethodInfo *)0x0);
                                                  (__this->fields)._onValueChanged = onValueChanged;
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(__this->fields)._onValueChanged,onValueChanged)
                                                  ;
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
label_182237f83:
  ThrowNullReferenceException();
}


// UI.SliderSettingElement$$OnValueChanged
// il2cpp: void UI_SliderSettingElement__OnValueChanged (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x182237570

void UI_SliderSettingElement__OnValueChanged(UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  UnityEngine_UI_Slider_o *pUVar3;
  Settings_TypedSetting_int__o *__this_00;
  Settings_TypedSetting_float__o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434714e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434714e = '\x01';
  }
  fVar5 = (__this->fields)._interval;
  if (0.0 < fVar5) {
    pUVar3 = (__this->fields)._slider;
    if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) goto label_18223776c;
    fVar5 = (float)il2cpp_runtime_helper_180012930((value - (pUVar3->fields).m_MinValue) / fVar5);
    pUVar3 = (__this->fields)._slider;
    if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) goto label_18223776c;
    value = fVar5 * (__this->fields)._interval + (pUVar3->fields).m_MinValue;
  }
  if ((__this->fields)._settingType != 3) {
    if ((__this->fields)._settingType == 2) {
      __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
      if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_18223776c;
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_IntSetting);
      }
      Settings_TypedSetting_int___set_Value
                (__this_00,(int)value,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
label_18223773e:
    UI_SliderSettingElement__UpdateValueLabel(__this,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._onValueChanged;
    if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
    }
    return;
  }
  if ((0.99 <= value) && (value <= 1.01)) {
    pUVar3 = (__this->fields)._slider;
    if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) goto label_18223776c;
    value = 1.0;
    (*(pUVar3->klass->vtable)._47_set_value.methodPtr)
              (pUVar3,1.0,(pUVar3->klass->vtable)._47_set_value.method);
  }
  pUVar3 = (__this->fields)._slider;
  if (pUVar3 != (UnityEngine_UI_Slider_o *)0x0) {
    pfVar1 = &(pUVar3->fields).m_MinValue;
    if (((*pfVar1 <= 0.0 && *pfVar1 != 0.0) && (-0.01 <= value)) && (value <= 0.01)) {
      value = 0.0;
      (*(pUVar3->klass->vtable)._47_set_value.methodPtr)
                (pUVar3,0.0,(pUVar3->klass->vtable)._47_set_value.method);
    }
    __this_01 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
    if (__this_01 != (Settings_TypedSetting_float__o *)0x0) {
      bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_FloatSetting);
      }
      Settings_TypedSetting_float___set_Value
                (__this_01,value,(MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      goto label_18223773e;
    }
  }
label_18223776c:
  ThrowNullReferenceException();
}


// UI.SliderSettingElement$$UpdateValueLabel
// il2cpp: void UI_SliderSettingElement__UpdateValueLabel (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x1822380f0

void UI_SliderSettingElement__UpdateValueLabel(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  System_Globalization_NumberFormatInfo_o *provider;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  float fVar4;
  int32_t local_res8 [2];
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434714f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"{0:N}");
    Il2CppMethodInitialized_18434714f = '\x01';
  }
  local_res8[0] = 0;
  if ((__this->fields)._settingType == 3) {
    pUVar1 = (__this->fields)._slider;
    if (pUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar2 = (__this->fields)._valueLabel;
      provider = (__this->fields)._formatInfo;
      local_res18[0] =
           (*(pUVar1->klass->vtable)._46_get_value.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._46_get_value.method);
      arg0 = il2cpp_value_box(g_data_184354e38,local_res18);
      pSVar3 = System_String__Format_196ca50
                         ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,pSVar3,(pUVar2->klass->vtable)._75_set_text.method);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  if ((__this->fields)._settingType != 2) {
    return;
  }
  pUVar1 = (__this->fields)._slider;
  if (pUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
    pUVar2 = (__this->fields)._valueLabel;
    fVar4 = (*(pUVar1->klass->vtable)._46_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._46_get_value.method);
    local_res8[0] = (int32_t)fVar4;
    pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,pSVar3,(pUVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderSettingElement$$SyncElement
// il2cpp: void UI_SliderSettingElement__SyncElement (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x182237fb0

void UI_SliderSettingElement__SyncElement(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Slider_o *pUVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184347150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347150 = '\x01';
  }
  if ((__this->fields)._settingType == 3) {
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) {
label_1822380bb:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    pUVar3 = (__this->fields)._slider;
    if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) goto label_1822380bb;
    fVar4 = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
  }
  else {
    if ((__this->fields)._settingType != 2) goto label_1822380ac;
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) goto label_1822380bb;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    pUVar3 = (__this->fields)._slider;
    if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) goto label_1822380bb;
    fVar4 = (float)*(int *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
  }
  (*(pUVar3->klass->vtable)._47_set_value.methodPtr)
            (pUVar3,fVar4,(pUVar3->klass->vtable)._47_set_value.method);
label_1822380ac:
  UI_SliderSettingElement__UpdateValueLabel(__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderSettingElement$$.ctor
// il2cpp: void UI_SliderSettingElement___ctor (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x18190eda0

void
UI_SliderSettingElement___ctor(UI_SliderSettingElement_o* __this, MethodInfo* method)

{
  UI_BaseSettingElement___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderSettingElement$$<Setup>b__7_0
// il2cpp: void UI_SliderSettingElement___Setup_b__7_0 (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x1822380e0

void UI_SliderSettingElement___Setup_b__7_0(UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  UI_SliderSettingElement__OnValueChanged(__this,value,(MethodInfo *)0x0);
  return;
}


