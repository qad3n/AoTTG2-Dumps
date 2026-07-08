// Type: UI.SliderSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SliderSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/SliderSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.SliderSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderSettingElement__get_SupportedSettingTypes (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x4089f00

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderSettingElement__get_SupportedSettingTypes
          (UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704560 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704560 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,3,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderSettingElement$$Setup
// il2cpp: void UI_SliderSettingElement__Setup (UI_SliderSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x4089fa0

void UI_SliderSettingElement__Setup
               (UI_SliderSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,
               float elementWidth,float elementHeight,int32_t decimalPlaces,MethodInfo *method)

{
  UnityEngine_UI_Slider_o **ppUVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  byte bVar3;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  System_String_o *panel;
  int32_t iVar4;
  System_Globalization_NumberFormatInfo_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Slider_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_T0__o *call;
  float value;
  UnityEngine_Color_o UVar10;
  
  if (DAT_05704561 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_NumberFormatInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_float);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"SliderBackgroundColor");
    il2cpp_init_method_metadata(&"Handle Slide Area/Handle");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"Fill Area/Fill");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"Slider");
    il2cpp_init_method_metadata(&"SliderHandleColor");
    il2cpp_init_method_metadata(&"SliderFillColor");
    DAT_05704561 = '\x01';
  }
  pSVar5 = (System_Globalization_NumberFormatInfo_o *)il2cpp_runtime_glue(TypeInfo_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor(pSVar5,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = pSVar5;
  il2cpp_runtime_glue(&(__this->fields)._formatInfo,pSVar5);
  pSVar5 = (__this->fields)._formatInfo;
  if (pSVar5 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_0408a69c;
  System_Globalization_NumberFormatInfo__set_NumberDecimalDigits
            (pSVar5,decimalPlaces,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0408a69c;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Slider",(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0408a69c;
  pUVar7 = (UnityEngine_UI_Slider_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_Slider_GetComponent_Slider);
  ppUVar1 = &(__this->fields)._slider;
  (__this->fields)._slider = pUVar7;
  il2cpp_runtime_glue(ppUVar1);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0408a69c;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Value",(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0408a69c;
  pUVar8 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
  ppUVar2 = &(__this->fields)._valueLabel;
  (__this->fields)._valueLabel = pUVar8;
  il2cpp_runtime_glue(ppUVar2,pUVar8);
  iVar4 = UI_BaseSettingElement__GetSettingType
                    ((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar4;
  if (iVar4 == 3) {
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408a69c;
    UnityEngine_UI_Slider__set_wholeNumbers(*ppUVar1,0,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto LAB_0408a69c;
    bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_FloatSetting)) {
LAB_0408a6a1:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(setting);
    }
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408a69c;
    UnityEngine_UI_Slider__set_minValue(*ppUVar1,*(float *)&setting[1].monitor,(MethodInfo *)0x0);
    bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_FloatSetting)) goto LAB_0408a6a1;
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408a69c;
    value = *(float *)((long)&setting[1].monitor + 4);
LAB_0408a35b:
    UnityEngine_UI_Slider__set_maxValue(pUVar7,value,(MethodInfo *)0x0);
  }
  else if (iVar4 == 2) {
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408a69c;
    UnityEngine_UI_Slider__set_wholeNumbers(*ppUVar1,1,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto LAB_0408a69c;
    bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto LAB_0408a6a1;
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408a69c;
    UnityEngine_UI_Slider__set_minValue
              (*ppUVar1,(float)*(int *)&setting[1].monitor,(MethodInfo *)0x0);
    bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto LAB_0408a6a1;
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408a69c;
    value = (float)*(int *)((long)&setting[1].monitor + 4);
    goto LAB_0408a35b;
  }
  if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
    pIVar9 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar9 != (Il2CppObject *)0x0) {
      (*pIVar9->klass->vtable[0x24].methodPtr)
                (elementWidth,pIVar9,pIVar9->klass->vtable[0x24].method);
      if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
        pIVar9 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (pIVar9 != (Il2CppObject *)0x0) {
          (*pIVar9->klass->vtable[0x26].methodPtr)
                    (elementHeight,pIVar9,pIVar9->klass->vtable[0x26].method);
          if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
            __this_00 = *(UnityEngine_Events_UnityEvent_float__o **)&((*ppUVar1)->fields).m_Value;
            call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_float);
            UnityEngine_Events_UnityAction<float>___ctor();
            if (__this_00 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
              UnityEngine_Events_UnityEvent<float>__AddListener(__this_00,call,MethodInfo_Void_AddListener);
              if ((style != (UI_ElementStyle_o *)0x0) && (*ppUVar2 != (UnityEngine_UI_Text_o *)0x0))
              {
                UnityEngine_UI_Text__set_fontSize
                          (*ppUVar2,(style->fields).FontSize,(MethodInfo *)0x0);
                if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Background",(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                      pIVar9 = UnityEngine_Component__GetComponent<object>
                                         ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
                      panel = (style->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      UVar10 = UI_UIManager__GetThemeColor
                                         (panel,"DefaultSetting","SliderBackgroundColor","DefaultPanel",
                                          (MethodInfo *)0x0);
                      if (pIVar9 != (Il2CppObject *)0x0) {
                        (*pIVar9->klass->vtable[0x17].methodPtr)
                                  (UVar10.fields._0_8_,UVar10.fields._8_8_,pIVar9);
                        if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                          pUVar6 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0)
                          ;
                          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                            pUVar6 = UnityEngine_Transform__Find
                                               (pUVar6,"Fill Area/Fill",(MethodInfo *)0x0);
                            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                              pIVar9 = UnityEngine_Component__GetComponent<object>
                                                 ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
                              UVar10 = UI_UIManager__GetThemeColor
                                                 ((style->fields).ThemePanel,"DefaultSetting",
                                                  "SliderFillColor","DefaultPanel",(MethodInfo *)0x0);
                              if (pIVar9 != (Il2CppObject *)0x0) {
                                (*pIVar9->klass->vtable[0x17].methodPtr)
                                          (UVar10.fields._0_8_,UVar10.fields._8_8_,pIVar9);
                                if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                                  pUVar6 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)*ppUVar1,
                                                      (MethodInfo *)0x0);
                                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar6 = UnityEngine_Transform__Find
                                                       (pUVar6,"Handle Slide Area/Handle",(MethodInfo *)0x0);
                                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                      pIVar9 = UnityEngine_Component__GetComponent<object>
                                                         ((UnityEngine_Component_o *)pUVar6,
                                                          MethodInfo_Image_GetComponent_Image);
                                      UVar10 = UI_UIManager__GetThemeColor
                                                         ((style->fields).ThemePanel,"DefaultSetting",
                                                          "SliderHandleColor","DefaultPanel",
                                                          (MethodInfo *)0x0);
                                      if (pIVar9 != (Il2CppObject *)0x0) {
                                        (*pIVar9->klass->vtable[0x17].methodPtr)
                                                  (UVar10.fields._0_8_,UVar10.fields._8_8_,pIVar9,
                                                   pIVar9->klass->vtable[0x17].method);
                                        pUVar8 = *ppUVar2;
                                        UVar10 = UI_UIManager__GetThemeColor
                                                           ((style->fields).ThemePanel,"DefaultSetting",
                                                            "TextColor","DefaultPanel",
                                                            (MethodInfo *)0x0);
                                        if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                    (UVar10.fields._0_8_,UVar10.fields._8_8_,pUVar8,
                                                     (pUVar8->klass->vtable)._23_set_color.method);
                                          UI_BaseSettingElement__Setup
                                                    ((UI_BaseSettingElement_o *)__this,setting,style
                                                     ,title,tooltip,(MethodInfo *)0x0);
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
LAB_0408a69c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderSettingElement$$OnValueChanged
// il2cpp: void UI_SliderSettingElement__OnValueChanged (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x408a6b0

void UI_SliderSettingElement__OnValueChanged
               (UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  UnityEngine_UI_Slider_o *pUVar5;
  Settings_TypedSetting_float__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  System_Globalization_NumberFormatInfo_o *provider;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  Il2CppObject *arg0;
  System_String_o *pSVar6;
  UnityEngine_UI_Text_c *pUVar7;
  MethodInfo *pMVar8;
  UnityEngine_UI_Text_o *pUVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_18;
  undefined4 uStack_10;
  float local_c;
  
  if (DAT_05704562 == '\0') {
    _uStack_10 = CONCAT44(value,uStack_10);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704562 = '\x01';
    value = local_c;
  }
  uVar3 = (__this->fields)._settingType;
  local_18 = (ulong)uVar3;
  if (uVar3 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_int__o *)0x0) goto LAB_0408a846;
    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar2) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting)) {
LAB_0408a841:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    Settings_TypedSetting<int>__set_Value(__this_01,(int)value,MethodInfo_Void_set_Value);
    local_18 = extraout_RAX_00;
  }
  else if (uVar3 == 3) {
    if ((0.99 <= value) && (value <= 1.01)) {
      pUVar5 = (__this->fields)._slider;
      if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408a846;
      (*(pUVar5->klass->vtable)._47_set_value.methodPtr)
                (0x3f800000,pUVar5,(pUVar5->klass->vtable)._47_set_value.method);
      value = 1.0;
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) {
LAB_0408a846:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (((value <= 0.01) && (-0.01 <= value)) &&
       (pfVar1 = (float *)((long)&(pUVar5->fields).m_HandleRect + 4),
       *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
      (*(pUVar5->klass->vtable)._47_set_value.methodPtr)
                (0,pUVar5,(pUVar5->klass->vtable)._47_set_value.method);
      value = 0.0;
    }
    __this_00 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_float__o *)0x0) goto LAB_0408a846;
    bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) goto LAB_0408a841;
    Settings_TypedSetting<float>__set_Value(__this_00,value,MethodInfo_Void_set_Value);
    local_18 = extraout_RAX;
  }
  if (DAT_05704563 == '\0') {
    il2cpp_init_method_metadata(&"{0:N}");
    DAT_05704563 = '\x01';
  }
  local_18 = local_18 & 0xffffffff00000000;
  iVar4 = (__this->fields)._settingType;
  if (iVar4 == 2) {
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar9 = (__this->fields)._valueLabel;
      fVar11 = (float)(*(pUVar5->klass->vtable)._46_get_value.methodPtr)();
      local_18 = CONCAT44(local_18._4_4_,(int)fVar11);
      pSVar6 = System_Int32__ToString((int32_t)&local_18,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar7 = pUVar9->klass;
        pMVar8 = (pUVar7->vtable)._75_set_text.method;
        goto LAB_0408a936;
      }
    }
  }
  else {
    if (iVar4 != 3) {
      return;
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar9 = (__this->fields)._valueLabel;
      provider = (__this->fields)._formatInfo;
      uVar10 = (*(pUVar5->klass->vtable)._46_get_value.methodPtr)
                         (pUVar5,(pUVar5->klass->vtable)._46_get_value.method);
      local_18 = CONCAT44(uVar10,(undefined4)local_18);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&local_18 + 4);
      pSVar6 = System_String__Format
                         ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar7 = pUVar9->klass;
        pMVar8 = (pUVar7->vtable)._75_set_text.method;
LAB_0408a936:
        (*(pUVar7->vtable)._75_set_text.methodPtr)(pUVar9,pSVar6,pMVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderSettingElement$$UpdateValueLabel
// il2cpp: void UI_SliderSettingElement__UpdateValueLabel (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x408a850

void UI_SliderSettingElement__UpdateValueLabel(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  System_Globalization_NumberFormatInfo_o *provider;
  int iVar3;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *pSVar4;
  UnityEngine_UI_Text_c *pUVar5;
  MethodInfo *pMVar6;
  UnityEngine_UI_Text_o *pUVar7;
  float fVar8;
  int iStack_18;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)((ulong)in_RAX >> 0x20);
  if (DAT_05704563 == '\0') {
    il2cpp_init_method_metadata(&"{0:N}");
    DAT_05704563 = '\x01';
  }
  iStack_18 = 0;
  iVar3 = iStack_18;
  iStack_18 = 0;
  iVar1 = (__this->fields)._settingType;
  if (iVar1 == 2) {
    pUVar2 = (__this->fields)._slider;
    iVar3 = iStack_18;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar7 = (__this->fields)._valueLabel;
      fVar8 = (float)(*(pUVar2->klass->vtable)._46_get_value.methodPtr)();
      iStack_18 = (int)fVar8;
      pSVar4 = System_Int32__ToString((int32_t)&iStack_18,(MethodInfo *)0x0);
      iVar3 = iStack_18;
      if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar5 = pUVar7->klass;
        pMVar6 = (pUVar5->vtable)._75_set_text.method;
        goto LAB_0408a936;
      }
    }
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar7 = (__this->fields)._valueLabel;
      provider = (__this->fields)._formatInfo;
      uStack_14 = (*(pUVar2->klass->vtable)._46_get_value.methodPtr)
                            (pUVar2,(pUVar2->klass->vtable)._46_get_value.method);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_14);
      pSVar4 = System_String__Format
                         ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
      iVar3 = iStack_18;
      if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar5 = pUVar7->klass;
        pMVar6 = (pUVar5->vtable)._75_set_text.method;
LAB_0408a936:
        (*(pUVar5->vtable)._75_set_text.methodPtr)(pUVar7,pSVar4,pMVar6);
        return;
      }
    }
  }
  iStack_18 = iVar3;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderSettingElement$$SyncElement
// il2cpp: void UI_SliderSettingElement__SyncElement (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x408a950

void UI_SliderSettingElement__SyncElement(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  System_Globalization_NumberFormatInfo_o *provider;
  Settings_BaseSetting_o *pSVar4;
  Il2CppObject *arg0;
  System_String_o *pSVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  UnityEngine_UI_Text_c *pUVar7;
  MethodInfo *pMVar8;
  UnityEngine_UI_Text_o *pUVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uStack_18;
  undefined *puStack_10;
  
  if (DAT_05704564 == '\0') {
    puStack_10 = (undefined *)0x408a969;
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    puStack_10 = (undefined *)0x408a975;
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    puStack_10 = (undefined *)0x408a981;
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    puStack_10 = (undefined *)0x408a98d;
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704564 = '\x01';
  }
  uVar3 = (__this->fields)._settingType;
  uStack_18 = (ulong)uVar3;
  if (uVar3 == 2) {
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) {
LAB_0408aa4e:
                    /* WARNING: Subroutine does not return */
      puStack_10 = &UNK_0408aa53;
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
LAB_0408aa49:
                    /* WARNING: Subroutine does not return */
      puStack_10 = (undefined *)0x408aa4e;
      il2cpp_unwind_resume();
    }
    pUVar6 = (__this->fields)._slider;
    if (pUVar6 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408aa4e;
    fVar11 = (float)*(int *)((long)&pSVar4[1].klass + 4);
LAB_0408aa2d:
    puStack_10 = (undefined *)0x408aa40;
    uStack_18 = (*(pUVar6->klass->vtable)._47_set_value.methodPtr)
                          (fVar11,pUVar6,(pUVar6->klass->vtable)._47_set_value.method);
  }
  else if (uVar3 == 3) {
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) goto LAB_0408aa4e;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto LAB_0408aa49;
    pUVar6 = (__this->fields)._slider;
    if (pUVar6 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_0408aa4e;
    fVar11 = *(float *)((long)&pSVar4[1].klass + 4);
    goto LAB_0408aa2d;
  }
  if (DAT_05704563 == '\0') {
    il2cpp_init_method_metadata(&"{0:N}");
    DAT_05704563 = '\x01';
  }
  uStack_18 = uStack_18 & 0xffffffff00000000;
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pUVar6 = (__this->fields)._slider;
    if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar9 = (__this->fields)._valueLabel;
      fVar11 = (float)(*(pUVar6->klass->vtable)._46_get_value.methodPtr)();
      uStack_18 = CONCAT44(uStack_18._4_4_,(int)fVar11);
      pSVar5 = System_Int32__ToString((int32_t)&uStack_18,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar7 = pUVar9->klass;
        pMVar8 = (pUVar7->vtable)._75_set_text.method;
        goto LAB_0408a936;
      }
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pUVar6 = (__this->fields)._slider;
    if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
      pUVar9 = (__this->fields)._valueLabel;
      provider = (__this->fields)._formatInfo;
      uVar10 = (*(pUVar6->klass->vtable)._46_get_value.methodPtr)
                         (pUVar6,(pUVar6->klass->vtable)._46_get_value.method);
      uStack_18 = CONCAT44(uVar10,(undefined4)uStack_18);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_18 + 4);
      pSVar5 = System_String__Format
                         ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar7 = pUVar9->klass;
        pMVar8 = (pUVar7->vtable)._75_set_text.method;
LAB_0408a936:
        (*(pUVar7->vtable)._75_set_text.methodPtr)(pUVar9,pSVar5,pMVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderSettingElement$$.ctor
// il2cpp: void UI_SliderSettingElement___ctor (UI_SliderSettingElement_o* __this, const MethodInfo* method);
// 0x408aa60

void UI_SliderSettingElement___ctor(UI_SliderSettingElement_o *__this,MethodInfo *method)

{
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderSettingElement$$<Setup>b__5_0
// il2cpp: void UI_SliderSettingElement___Setup_b__5_0 (UI_SliderSettingElement_o* __this, float value, const MethodInfo* method);
// 0x408aa70

void UI_SliderSettingElement__<Setup>b__5_0
               (UI_SliderSettingElement_o *__this,float value,MethodInfo *method)

{
  UI_SliderSettingElement__OnValueChanged(__this,value,method);
  return;
}


