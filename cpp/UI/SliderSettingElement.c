// Type: UI.SliderSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/SliderSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderSettingElement.cs
// --------------------------------

// UI.SliderSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderSettingElement__get_SupportedSettingTypes (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x5cf7420

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderSettingElement__get_SupportedSettingTypes(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547cb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547cb9 = '\x01';
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
            ((System_Collections_Generic_HashSet_T__o *)__this_00,3,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.SliderSettingElement$$Setup
// il2cpp: void UI_SliderSettingElement__Setup (UI_SliderSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t decimalPlaces, float interval, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x5cf74c0

void UI_SliderSettingElement__Setup
               (UI_SliderSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               int32_t decimalPlaces,float interval,UnityEngine_Events_UnityAction_o *onValueChanged,
               MethodInfo *method)

{
  UnityEngine_UI_Slider_o **targetAddress;
  UnityEngine_UI_Text_o **targetAddress_00;
  byte bVar1;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  System_String_o *panel;
  int32_t iVar2;
  System_Globalization_NumberFormatInfo_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Slider_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_UI_Image_o *pUVar8;
  int32_t iVar9;
  undefined4 in_register_0000008c;
  float value;
  UnityEngine_Color_o UVar10;
  
  iVar9 = decimalPlaces;
  if (Il2CppMethodInitialized_07547cba == '\0') {
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
    Il2CppMethodInitialized_07547cba = '\x01';
  }
  (__this->fields)._interval = interval;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Globalization_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._formatInfo);
  pSVar3 = (__this->fields)._formatInfo;
  if (pSVar3 == (System_Globalization_NumberFormatInfo_o *)0x0) goto label_05cf7c8e;
  System_Globalization_NumberFormatInfo__set_NumberDecimalDigits(pSVar3,decimalPlaces,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf7c8e;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Slider",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf7c8e;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
  targetAddress = &(__this->fields)._slider;
  (__this->fields)._slider = pUVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf7c8e;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Value",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf7c8e;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  targetAddress_00 = &(__this->fields)._valueLabel;
  (__this->fields)._valueLabel = pUVar6;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  iVar2 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar2;
  if (iVar2 == 3) {
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7c8e;
    UnityEngine_UI_Slider__set_wholeNumbers(*targetAddress,false,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_05cf7c8e;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
       ) {
label_05cf7c93:
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7c8e;
    UnityEngine_UI_Slider__set_minValue(*targetAddress,*(float *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
       ) goto label_05cf7c93;
    pUVar5 = *targetAddress;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7c8e;
    value = *(float *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
label_05cf7896:
    UnityEngine_UI_Slider__set_maxValue(pUVar5,value,(MethodInfo *)0x0);
  }
  else if (iVar2 == 2) {
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7c8e;
    UnityEngine_UI_Slider__set_wholeNumbers(*targetAddress,true,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_05cf7c8e;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
    goto label_05cf7c93;
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7c8e;
    UnityEngine_UI_Slider__set_minValue(*targetAddress,(float)*(int *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
    goto label_05cf7c93;
    pUVar5 = *targetAddress;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7c8e;
    value = (float)*(int *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
    goto label_05cf7896;
  }
  if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)*targetAddress,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar7,elementWidth,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
      if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
        pUVar7 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)*targetAddress,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement)
        ;
        if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar7,elementHeight,(pUVar7->klass->vtable)._38_set_preferredHeight.method);
          if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
            __this_00 = (UnityEngine_Events_UnityEvent_float__o *)((*targetAddress)->fields).m_OnValueChanged;
            call = (UnityEngine_Events_UnityAction_T0__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_float);
            UnityEngine_Events_UnityAction_float____ctor
                      ((UnityEngine_Events_UnityAction_float__o *)call,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_SliderSettingElement_Setup_b__7_0,(MethodInfo_4311C00 *)0x0);
            if (__this_00 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
              UnityEngine_Events_UnityEvent_float___AddListener
                        (__this_00,call,
                         (MethodInfo_43194E0 *)MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
              if (style != (UI_ElementStyle_o *)0x0) {
                if (*targetAddress_00 != (UnityEngine_UI_Text_o *)0x0) {
                  UnityEngine_UI_Text__set_fontSize
                            (*targetAddress_00,(style->fields).FontSize,(MethodInfo *)0x0);
                  if (*targetAddress_00 != (UnityEngine_UI_Text_o *)0x0) {
                    pUVar7 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)*targetAddress_00,
                                        (MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                    if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*(pUVar7->klass->vtable)._32_set_minWidth.methodPtr)
                                (pUVar7,55.0,(pUVar7->klass->vtable)._32_set_minWidth.method);
                      (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (pUVar7,55.0,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
                      if (*targetAddress_00 != (UnityEngine_UI_Text_o *)0x0) {
                        UnityEngine_UI_Text__set_horizontalOverflow(*targetAddress_00,1,(MethodInfo *)0x0);
                        if (*targetAddress_00 != (UnityEngine_UI_Text_o *)0x0) {
                          UnityEngine_UI_Text__set_verticalOverflow(*targetAddress_00,1,(MethodInfo *)0x0);
                          if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
                            pUVar4 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                              pUVar4 = UnityEngine_Transform__Find
                                                 (pUVar4,"Background",(MethodInfo *)0x0);
                              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                pUVar8 = UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar4,
                                                    (MethodInfo_34B0830 *)
                                                    MethodInfo_UnityEngine_Component_GetComponent_Image);
                                panel = (style->fields).ThemePanel;
                                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                }
                                UVar10 = UI_UIManager__GetThemeColor
                                                   (panel,"DefaultSetting","SliderBackgroundColor",
                                                    "DefaultPanel",(MethodInfo *)0x0);
                                if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                                  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar8,UVar10,(pUVar8->klass->vtable)._23_set_color.method);
                                  if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
                                    pUVar4 = UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)*targetAddress,
                                                        (MethodInfo *)0x0);
                                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar4 = UnityEngine_Transform__Find
                                                         (pUVar4,"Fill Area/Fill",(MethodInfo *)0x0);
                                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                        pUVar8 = UnityEngine_Component__GetComponent_object_
                                                           ((UnityEngine_Component_o *)pUVar4,
                                                            (MethodInfo_34B0830 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                        UVar10 = UI_UIManager__GetThemeColor
                                                           ((style->fields).ThemePanel,"DefaultSetting",
                                                            "SliderFillColor","DefaultPanel",
                                                            (MethodInfo *)0x0);
                                        if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                                          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                    (pUVar8,UVar10,
                                                     (pUVar8->klass->vtable)._23_set_color.method);
                                          if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
                                            pUVar4 = UnityEngine_Component__get_transform
                                                               ((UnityEngine_Component_o *)*targetAddress,
                                                                (MethodInfo *)0x0);
                                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                              pUVar4 = UnityEngine_Transform__Find
                                                                 (pUVar4,"Handle Slide Area/Handle",
                                                                  (MethodInfo *)0x0);
                                              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                pUVar8 = UnityEngine_Component__GetComponent_object_
                                                                   ((UnityEngine_Component_o *)pUVar4,
                                                                    (MethodInfo_34B0830 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                                UVar10 = UI_UIManager__GetThemeColor
                                                                   ((style->fields).ThemePanel,
                                                                    "DefaultSetting",
                                                                    "SliderHandleColor",
                                                                    "DefaultPanel",(MethodInfo *)0x0);
                                                if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                                                  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                            (pUVar8,UVar10,
                                                             (pUVar8->klass->vtable)._23_set_color.method);
                                                  pUVar6 = *targetAddress_00;
                                                  UVar10 = UI_UIManager__GetThemeColor
                                                                     ((style->fields).ThemePanel,
                                                                      "DefaultSetting",
                                                                      "TextColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0)
                                                  ;
                                                  if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                                                    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                                              (pUVar6,UVar10,
                                                               (pUVar6->klass->vtable)._23_set_color.method);
                                                    UI_BaseSettingElement__Setup
                                                              ((UI_BaseSettingElement_o *)__this,setting,style
                                                               ,title,tooltip,
                                                               (MethodInfo *)
                                                               CONCAT44(in_register_0000008c,iVar9));
                                                    (__this->fields)._onValueChanged = onValueChanged;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(__this->fields)._onValueChanged);
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
  }
label_05cf7c8e:
  ThrowNullReferenceException();
}


// UI.SliderSettingElement$$OnValueChanged
// il2cpp: void UI_SliderSettingElement__OnValueChanged (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x5cf7ca0

void UI_SliderSettingElement__OnValueChanged(UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  Settings_TypedSetting_float__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  float fVar6;
  double dVar7;
  double local_10;
  
  if (Il2CppMethodInitialized_07547cbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547cbb = '\x01';
  }
  fVar6 = (__this->fields)._interval;
  if (0.0 < fVar6) {
    pUVar4 = (__this->fields)._slider;
    if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7f2b;
    fVar6 = (value - (pUVar4->fields).m_MinValue) / fVar6;
    dVar7 = modf((double)fVar6,&local_10,method);
    if (0.0 <= fVar6) {
      if ((dVar7 != 0.5) || (NAN(dVar7))) {
        fVar6 = floorf(fVar6 + 0.5);
      }
      else {
        fVar6 = (float)local_10;
        if (((long)local_10 & 1U) != 0) {
          fVar6 = fVar6 + 1.0;
        }
      }
    }
    else if ((dVar7 != -0.5) || (NAN(dVar7))) {
      fVar6 = ceilf(fVar6 + -0.5);
    }
    else {
      fVar6 = (float)local_10;
      if (((long)local_10 & 1U) != 0) {
        fVar6 = fVar6 + -1.0;
      }
    }
    pUVar4 = (__this->fields)._slider;
    if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7f2b;
    value = fVar6 * (__this->fields)._interval + (pUVar4->fields).m_MinValue;
  }
  iVar3 = (__this->fields)._settingType;
  if (iVar3 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_int__o *)0x0) goto label_05cf7f2b;
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
       ) {
label_05cf7f30:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    method = (MethodInfo *)(ulong)(uint)(int)value;
    Settings_TypedSetting_int___set_Value
              (__this_01,(int)value,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  }
  else if (iVar3 == 3) {
    if ((0.99 <= value) && (value <= 1.01)) {
      pUVar4 = (__this->fields)._slider;
      if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf7f2b;
      (*(pUVar4->klass->vtable)._47_set_value.methodPtr)
                (pUVar4,1.0,(pUVar4->klass->vtable)._47_set_value.method);
      value = 1.0;
    }
    pUVar4 = (__this->fields)._slider;
    if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
      if (((value <= 0.01) && (-0.01 <= value)) &&
         (pfVar1 = &(pUVar4->fields).m_MinValue, *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
        (*(pUVar4->klass->vtable)._47_set_value.methodPtr)
                  (pUVar4,0.0,(pUVar4->klass->vtable)._47_set_value.method);
        value = 0.0;
      }
      __this_00 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
      if (__this_00 != (Settings_TypedSetting_float__o *)0x0) {
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) goto label_05cf7f30;
        method = MethodInfo_Settings_TypedSetting_float_set_Value;
        Settings_TypedSetting_float___set_Value
                  (__this_00,value,(MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        goto label_05cf7f01;
      }
    }
label_05cf7f2b:
    ThrowNullReferenceException();
  }
label_05cf7f01:
  UI_SliderSettingElement__UpdateValueLabel(__this,method);
  pUVar5 = (__this->fields)._onValueChanged;
  if (pUVar5 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
  return;
}


// UI.SliderSettingElement$$UpdateValueLabel
// il2cpp: void UI_SliderSettingElement__UpdateValueLabel (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x5cf7f40

void UI_SliderSettingElement__UpdateValueLabel(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  System_Globalization_NumberFormatInfo_o *provider;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  UnityEngine_UI_Text_c *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_UI_Text_o *pUVar6;
  float fVar7;
  undefined8 local_18;
  
  local_18 = in_RAX;
  if (Il2CppMethodInitialized_07547cbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"{0:N}");
    Il2CppMethodInitialized_07547cbc = '\x01';
  }
  iVar1 = (__this->fields)._settingType;
  if (iVar1 == 2) {
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar6 = (__this->fields)._valueLabel;
      fVar7 = (*(pUVar2->klass->vtable)._46_get_value.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._46_get_value.method);
      local_18 = CONCAT44((int)fVar7,(undefined4)local_18);
      pSVar3 = System_Int32__ToString((int32_t *)((long)&local_18 + 4),(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar4 = pUVar6->klass;
        pMVar5 = (pUVar4->vtable)._75_set_text.method;
        goto label_05cf801f;
      }
    }
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar6 = (__this->fields)._valueLabel;
      provider = (__this->fields)._formatInfo;
      fVar7 = (*(pUVar2->klass->vtable)._46_get_value.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._46_get_value.method);
      local_18 = CONCAT44(local_18._4_4_,fVar7);
      arg0 = il2cpp_vm_Object_Box(g_data_07556740,&local_18);
      pSVar3 = System_String__Format_5302da0
                         ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar4 = pUVar6->klass;
        pMVar5 = (pUVar4->vtable)._75_set_text.method;
label_05cf801f:
        (*(pUVar4->vtable)._75_set_text.methodPtr)(pUVar6,pSVar3,pMVar5);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderSettingElement$$SyncElement
// il2cpp: void UI_SliderSettingElement__SyncElement (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x5cf8040

void UI_SliderSettingElement__SyncElement(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547cbd = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) {
label_05cf813e:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
label_05cf8139:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar4 = (__this->fields)._slider;
    if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf813e;
    fVar5 = (float)*(int *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
  }
  else {
    if (iVar2 != 3) goto label_05cf8130;
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_05cf813e;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting))
    goto label_05cf8139;
    pUVar4 = (__this->fields)._slider;
    if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf813e;
    fVar5 = *(float *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
  }
  method = (pUVar4->klass->vtable)._47_set_value.method;
  (*(pUVar4->klass->vtable)._47_set_value.methodPtr)(pUVar4,fVar5,method);
label_05cf8130:
  UI_SliderSettingElement__UpdateValueLabel(__this,method);
  return;
}


// UI.SliderSettingElement$$.ctor
// il2cpp: void UI_SliderSettingElement___ctor (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x5cf8150

void UI_SliderSettingElement___ctor(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderSettingElement$$<Setup>b__7_0
// il2cpp: void UI_SliderSettingElement___Setup_b__7_0 (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x5cf8160

void UI_SliderSettingElement___Setup_b__7_0(UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  UI_SliderSettingElement__OnValueChanged(__this,value,method);
  return;
}


