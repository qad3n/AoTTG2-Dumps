// Type: UI.SliderInputSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SliderInputSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/SliderInputSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$.ctor
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4089760

void UI_SliderInputSettingElement_<WaitAndFixInputField>d__9___ctor
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.IDisposable.Dispose
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_IDisposable_Dispose (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4089d60

void UI_SliderInputSettingElement_<WaitAndFixInputField>d__9__System_IDisposable_Dispose
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method
               )

{
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$MoveNext
// il2cpp: bool UI_SliderInputSettingElement__WaitAndFixInputField_d__9__MoveNext (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4089d70

bool_conflict
UI_SliderInputSettingElement_<WaitAndFixInputField>d__9__MoveNext
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_SliderInputSettingElement_o *pUVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  bool_conflict bVar6;
  undefined7 uVar7;
  
  if (DAT_0570455f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_0570455f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_SliderInputSettingElement_o *)0x0) &&
        (pUVar3 = (pUVar2->fields)._inputField, pUVar3 != (UnityEngine_UI_InputField_o *)0x0)) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      pUVar3 = (pUVar2->fields)._inputField;
      if ((pUVar3 != (UnityEngine_UI_InputField_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
        *(undefined1 *)&(pUVar2->fields)._fixedInputField = 1;
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar7 = (undefined7)((ulong)__this >> 8);
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
    (__this->fields).__1__state = 2;
    bVar6 = (bool_conflict)CONCAT71(uVar7,1);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
    (__this->fields).__1__state = 1;
    bVar6 = (bool_conflict)CONCAT71(uVar7,1);
  }
  else {
    bVar6 = 0;
  }
  return bVar6;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4089ea0

Il2CppObject *
UI_SliderInputSettingElement_<WaitAndFixInputField>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_Reset (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4089eb0

void UI_SliderInputSettingElement_<WaitAndFixInputField>d__9__System_Collections_IEnumerator_Reset
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_get_Current (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4089ef0

Il2CppObject *
UI_SliderInputSettingElement_<WaitAndFixInputField>d__9__System_Collections_IEnumerator_get_Current
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderInputSettingElement__get_SupportedSettingTypes (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4088a80

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderInputSettingElement__get_SupportedSettingTypes
          (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704557 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704557 = '\x01';
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


// UI.SliderInputSettingElement$$Setup
// il2cpp: void UI_SliderInputSettingElement__Setup (UI_SliderInputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x4088b20

void UI_SliderInputSettingElement__Setup
               (UI_SliderInputSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,
               float sliderWidth,float sliderHeight,float inputWidth,float inputHeight,
               int32_t decimalPlaces,MethodInfo *method)

{
  UnityEngine_UI_Slider_o **ppUVar1;
  UnityEngine_UI_InputField_o **ppUVar2;
  byte bVar3;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  UnityEngine_UI_InputField_SubmitEvent_o *__this_01;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  int32_t iVar4;
  System_Globalization_NumberFormatInfo_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Slider_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Events_UnityAction_T0__o *pUVar9;
  UnityEngine_UI_InputField_o *pUVar10;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_03;
  float value_00;
  UnityEngine_Color_o UVar11;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_05704558 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_NumberFormatInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__7_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__7_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__7_2);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_float);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"SliderBackgroundColor");
    il2cpp_init_method_metadata(&"Input");
    il2cpp_init_method_metadata(&"Handle Slide Area/Handle");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"Fill Area/Fill");
    il2cpp_init_method_metadata(&"InputTextColor");
    il2cpp_init_method_metadata(&"Slider");
    il2cpp_init_method_metadata(&"SliderHandleColor");
    il2cpp_init_method_metadata(&"InputSelectionColor");
    il2cpp_init_method_metadata(&"SliderFillColor");
    DAT_05704558 = '\x01';
  }
  pSVar5 = (System_Globalization_NumberFormatInfo_o *)il2cpp_runtime_glue(TypeInfo_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor(pSVar5,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = pSVar5;
  il2cpp_runtime_glue(&(__this->fields)._formatInfo,pSVar5);
  pSVar5 = (__this->fields)._formatInfo;
  if (pSVar5 == (System_Globalization_NumberFormatInfo_o *)0x0) goto LAB_04089630;
  System_Globalization_NumberFormatInfo__set_NumberDecimalDigits
            (pSVar5,decimalPlaces,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04089630;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Slider",(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04089630;
  pUVar7 = (UnityEngine_UI_Slider_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_Slider_GetComponent_Slider);
  ppUVar1 = &(__this->fields)._slider;
  (__this->fields)._slider = pUVar7;
  il2cpp_runtime_glue(ppUVar1,pUVar7);
  iVar4 = UI_BaseSettingElement__GetSettingType
                    ((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar4;
  if (iVar4 == 3) {
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
    UnityEngine_UI_Slider__set_wholeNumbers(*ppUVar1,0,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto LAB_04089630;
    bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_FloatSetting)) {
LAB_04089635:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(setting);
    }
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
    UnityEngine_UI_Slider__set_minValue(*ppUVar1,*(float *)&setting[1].monitor,(MethodInfo *)0x0);
    bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_FloatSetting)) goto LAB_04089635;
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
    value_00 = *(float *)((long)&setting[1].monitor + 4);
LAB_04088efb:
    UnityEngine_UI_Slider__set_maxValue(pUVar7,value_00,(MethodInfo *)0x0);
  }
  else if (iVar4 == 2) {
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
    UnityEngine_UI_Slider__set_wholeNumbers(*ppUVar1,1,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto LAB_04089630;
    bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto LAB_04089635;
    if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
    UnityEngine_UI_Slider__set_minValue
              (*ppUVar1,(float)*(int *)&setting[1].monitor,(MethodInfo *)0x0);
    bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar3) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto LAB_04089635;
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
    value_00 = (float)*(int *)((long)&setting[1].monitor + 4);
    goto LAB_04088efb;
  }
  if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
  pIVar8 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar8 == (Il2CppObject *)0x0) goto LAB_04089630;
  (*pIVar8->klass->vtable[0x24].methodPtr)(sliderWidth,pIVar8,pIVar8->klass->vtable[0x24].method);
  if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
  pIVar8 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar8 == (Il2CppObject *)0x0) goto LAB_04089630;
  (*pIVar8->klass->vtable[0x26].methodPtr)(sliderHeight,pIVar8,pIVar8->klass->vtable[0x26].method);
  if (*ppUVar1 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_04089630;
  __this_00 = *(UnityEngine_Events_UnityEvent_float__o **)&((*ppUVar1)->fields).m_Value;
  pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_float);
  UnityEngine_Events_UnityAction<float>___ctor();
  if (__this_00 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_04089630;
  UnityEngine_Events_UnityEvent<float>__AddListener(__this_00,pUVar9,MethodInfo_Void_AddListener);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04089630;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"InputField",(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04089630;
  pUVar10 = (UnityEngine_UI_InputField_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar6,MethodInfo_InputField_GetComponent_InputField);
  ppUVar2 = &(__this->fields)._inputField;
  (__this->fields)._inputField = pUVar10;
  il2cpp_runtime_glue(ppUVar2);
  pUVar10 = (__this->fields)._inputField;
  if (pUVar10 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_04089630;
  pUVar6 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04089630;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04089630;
  __this_02 = (UnityEngine_UI_Text_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
  if ((style == (UI_ElementStyle_o *)0x0) || (__this_02 == (UnityEngine_UI_Text_o *)0x0))
  goto LAB_04089630;
  UnityEngine_UI_Text__set_fontSize
            (__this_02,(style->fields).FontSize + (__this->fields)._inputFontSizeOffset,
             (MethodInfo *)0x0);
  pUVar10 = (__this->fields)._inputField;
  if (pUVar10 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_04089630;
  pIVar8 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar8 == (Il2CppObject *)0x0) goto LAB_04089630;
  (*pIVar8->klass->vtable[0x24].methodPtr)(inputWidth,pIVar8,pIVar8->klass->vtable[0x24].method);
  if (*ppUVar2 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_04089630;
  pIVar8 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar8 == (Il2CppObject *)0x0) goto LAB_04089630;
  (*pIVar8->klass->vtable[0x26].methodPtr)(inputHeight,pIVar8,pIVar8->klass->vtable[0x26].method);
  iVar4 = UI_BaseSettingElement__GetSettingType
                    ((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar4;
  if (iVar4 == 2) {
    pUVar10 = *ppUVar2;
    if (pUVar10 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_04089630;
    iVar4 = 2;
LAB_04089150:
    UnityEngine_UI_InputField__set_contentType(pUVar10,iVar4,(MethodInfo *)0x0);
  }
  else if (iVar4 == 3) {
    pUVar10 = *ppUVar2;
    if (pUVar10 == (UnityEngine_UI_InputField_o *)0x0) goto LAB_04089630;
    iVar4 = 3;
    goto LAB_04089150;
  }
  if (*ppUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
    __this_03 = UnityEngine_UI_InputField__get_onValueChange(*ppUVar2,(MethodInfo *)0x0);
    pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_03 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_03,pUVar9,MethodInfo_Void_AddListener);
      if (*ppUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
        __this_01 = ((*ppUVar2)->fields).m_OnSubmit;
        pUVar9 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (UnityEngine_UI_InputField_SubmitEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar9,MethodInfo_Void_AddListener);
          UI_BaseSettingElement__Setup
                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0
                    );
          pUVar7 = (__this->fields)._slider;
          if (pUVar7 != (UnityEngine_UI_Slider_o *)0x0) {
            pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              pUVar6 = UnityEngine_Transform__Find(pUVar6,"Background",(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                pIVar8 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
                panel = (style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UVar11 = UI_UIManager__GetThemeColor
                                   (panel,"DefaultSetting","SliderBackgroundColor","DefaultPanel",(MethodInfo *)0x0);
                if (pIVar8 != (Il2CppObject *)0x0) {
                  (*pIVar8->klass->vtable[0x17].methodPtr)(UVar11.fields.r,UVar11.fields.b,pIVar8);
                  if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                      pUVar6 = UnityEngine_Transform__Find(pUVar6,"Fill Area/Fill",(MethodInfo *)0x0);
                      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                        pIVar8 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
                        UVar11 = UI_UIManager__GetThemeColor
                                           ((style->fields).ThemePanel,"DefaultSetting","SliderFillColor",
                                            "DefaultPanel",(MethodInfo *)0x0);
                        if (pIVar8 != (Il2CppObject *)0x0) {
                          (*pIVar8->klass->vtable[0x17].methodPtr)
                                    (UVar11.fields.r,UVar11.fields.b,pIVar8);
                          if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                            pUVar6 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)*ppUVar1,
                                                (MethodInfo *)0x0);
                            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                              pUVar6 = UnityEngine_Transform__Find
                                                 (pUVar6,"Handle Slide Area/Handle",(MethodInfo *)0x0);
                              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                pIVar8 = UnityEngine_Component__GetComponent<object>
                                                   ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
                                UVar11 = UI_UIManager__GetThemeColor
                                                   ((style->fields).ThemePanel,"DefaultSetting",
                                                    "SliderHandleColor","DefaultPanel",(MethodInfo *)0x0);
                                if (pIVar8 != (Il2CppObject *)0x0) {
                                  (*pIVar8->klass->vtable[0x17].methodPtr)
                                            (UVar11.fields.r,UVar11.fields.b,pIVar8,
                                             pIVar8->klass->vtable[0x17].method);
                                  pUVar10 = *ppUVar2;
                                  UI_UIManager__GetThemeColorBlock
                                            (&local_88,(style->fields).ThemePanel,"DefaultSetting",
                                             "Input","DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar10 != (UnityEngine_UI_InputField_o *)0x0) {
                                    value.fields.m_NormalColor.fields.b =
                                         local_88.fields.m_NormalColor.fields.b;
                                    value.fields.m_NormalColor.fields.a =
                                         local_88.fields.m_NormalColor.fields.a;
                                    value.fields.m_NormalColor.fields.r =
                                         local_88.fields.m_NormalColor.fields.r;
                                    value.fields.m_NormalColor.fields.g =
                                         local_88.fields.m_NormalColor.fields.g;
                                    value.fields.m_HighlightedColor.fields.r =
                                         local_88.fields.m_HighlightedColor.fields.r;
                                    value.fields.m_HighlightedColor.fields.g =
                                         local_88.fields.m_HighlightedColor.fields.g;
                                    value.fields.m_HighlightedColor.fields.b =
                                         local_88.fields.m_HighlightedColor.fields.b;
                                    value.fields.m_HighlightedColor.fields.a =
                                         local_88.fields.m_HighlightedColor.fields.a;
                                    value.fields.m_PressedColor.fields.r =
                                         local_88.fields.m_PressedColor.fields.r;
                                    value.fields.m_PressedColor.fields.g =
                                         local_88.fields.m_PressedColor.fields.g;
                                    value.fields.m_PressedColor.fields.b =
                                         local_88.fields.m_PressedColor.fields.b;
                                    value.fields.m_PressedColor.fields.a =
                                         local_88.fields.m_PressedColor.fields.a;
                                    value.fields.m_SelectedColor.fields.r =
                                         local_88.fields.m_SelectedColor.fields.r;
                                    value.fields.m_SelectedColor.fields.g =
                                         local_88.fields.m_SelectedColor.fields.g;
                                    value.fields.m_SelectedColor.fields.b =
                                         local_88.fields.m_SelectedColor.fields.b;
                                    value.fields.m_SelectedColor.fields.a =
                                         local_88.fields.m_SelectedColor.fields.a;
                                    value.fields.m_DisabledColor.fields.r =
                                         local_88.fields.m_DisabledColor.fields.r;
                                    value.fields.m_DisabledColor.fields.g =
                                         local_88.fields.m_DisabledColor.fields.g;
                                    value.fields.m_DisabledColor.fields.b =
                                         local_88.fields.m_DisabledColor.fields.b;
                                    value.fields.m_DisabledColor.fields.a =
                                         local_88.fields.m_DisabledColor.fields.a;
                                    value.fields.m_ColorMultiplier =
                                         local_88.fields.m_ColorMultiplier;
                                    value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                    UnityEngine_UI_Selectable__set_colors
                                              ((UnityEngine_UI_Selectable_o *)pUVar10,value,
                                               (MethodInfo *)0x0);
                                    if (*ppUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
                                      pUVar6 = UnityEngine_Component__get_transform
                                                         ((UnityEngine_Component_o *)*ppUVar2,
                                                          (MethodInfo *)0x0);
                                      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                        pUVar6 = UnityEngine_Transform__Find
                                                           (pUVar6,"Text",(MethodInfo *)0x0);
                                        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                          pIVar8 = UnityEngine_Component__GetComponent<object>
                                                             ((UnityEngine_Component_o *)pUVar6,
                                                              MethodInfo_Text_GetComponent_Text);
                                          UVar11 = UI_UIManager__GetThemeColor
                                                             ((style->fields).ThemePanel,
                                                              "DefaultSetting","InputTextColor","DefaultPanel"
                                                              ,(MethodInfo *)0x0);
                                          if (pIVar8 != (Il2CppObject *)0x0) {
                                            (*pIVar8->klass->vtable[0x17].methodPtr)
                                                      (UVar11.fields.r,UVar11.fields.b,pIVar8,
                                                       pIVar8->klass->vtable[0x17].method);
                                            pUVar10 = *ppUVar2;
                                            UVar11 = UI_UIManager__GetThemeColor
                                                               ((style->fields).ThemePanel,
                                                                "DefaultSetting","InputSelectionColor",
                                                                "DefaultPanel",(MethodInfo *)0x0);
                                            if (pUVar10 != (UnityEngine_UI_InputField_o *)0x0) {
                                              UnityEngine_UI_InputField__set_selectionColor
                                                        (pUVar10,UVar11,(MethodInfo *)0x0);
                                              if (DAT_0570455a == '\0') {
                                                il2cpp_init_method_metadata(&TypeInfo_WaitAndFixInputField_d__9);
                                                DAT_0570455a = '\x01';
                                              }
                                              pIVar8 = (Il2CppObject *)
                                                       il2cpp_runtime_glue(TypeInfo_WaitAndFixInputField_d__9);
                                              System_Object___ctor(pIVar8,(MethodInfo *)0x0);
                                              *(undefined4 *)&pIVar8[1].klass = 0;
                                              if (pIVar8 != (Il2CppObject *)0x0) {
                                                pIVar8[2].klass = (Il2CppClass *)__this;
                                                il2cpp_runtime_glue(pIVar8 + 2,__this);
                                                UnityEngine_MonoBehaviour__StartCoroutine
                                                          ((UnityEngine_MonoBehaviour_o *)__this,
                                                           (System_Collections_IEnumerator_o *)
                                                           pIVar8,(MethodInfo *)0x0);
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
LAB_04089630:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderInputSettingElement$$OnEnable
// il2cpp: void UI_SliderInputSettingElement__OnEnable (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x40896b0

void UI_SliderInputSettingElement__OnEnable
               (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (DAT_05704559 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704559 = '\x01';
  }
  pUVar1 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 != '\0') && ((char)(__this->fields)._fixedInputField == '\0')) {
    pUVar1 = (__this->fields)._inputField;
    if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._inputField;
        if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.SliderInputSettingElement$$WaitAndFixInputField
// il2cpp: System_Collections_IEnumerator_o* UI_SliderInputSettingElement__WaitAndFixInputField (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4089640

System_Collections_IEnumerator_o *
UI_SliderInputSettingElement__WaitAndFixInputField
          (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570455a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndFixInputField_d__9);
    DAT_0570455a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFixInputField_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderInputSettingElement$$OnSliderValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnSliderValueChanged (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x4089780

void UI_SliderInputSettingElement__OnSliderValueChanged
               (UI_SliderInputSettingElement_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  Settings_TypedSetting_float__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  Settings_BaseSetting_o *pSVar4;
  UnityEngine_UI_InputField_o *__this_02;
  System_Globalization_NumberFormatInfo_o *provider;
  ulong uVar5;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  Il2CppObject *arg0;
  System_String_o *value_00;
  undefined8 local_18;
  undefined4 uStack_10;
  float local_c;
  
  if (DAT_0570455b == '\0') {
    _uStack_10 = CONCAT44(value,uStack_10);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570455b = '\x01';
    value = local_c;
  }
  uVar2 = (__this->fields)._settingType;
  local_18 = (ulong)uVar2;
  if (uVar2 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_int__o *)0x0) {
LAB_04089886:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
LAB_04089881:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    Settings_TypedSetting<int>__set_Value(__this_01,(int)value,MethodInfo_Void_set_Value);
    local_18 = extraout_RAX_00;
  }
  else if (uVar2 == 3) {
    __this_00 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_float__o *)0x0) goto LAB_04089886;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto LAB_04089881;
    Settings_TypedSetting<float>__set_Value(__this_00,value,MethodInfo_Void_set_Value);
    local_18 = extraout_RAX;
  }
  if (DAT_0570455e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"{0:N}");
    DAT_0570455e = '\x01';
  }
  uVar5 = local_18 >> 0x20;
  local_18 = local_18 & 0xffffffff00000000;
  iVar3 = (__this->fields)._settingType;
  if (iVar3 == 2) {
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) goto LAB_040899e9;
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto LAB_040899e4;
    __this_02 = (__this->fields)._inputField;
    local_18 = CONCAT44((int)uVar5,*(undefined4 *)((long)&pSVar4[1].klass + 4));
    value_00 = System_Int32__ToString((int32_t)&local_18,(MethodInfo *)0x0);
  }
  else {
    if (iVar3 != 3) {
      return;
    }
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) goto LAB_040899e9;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
LAB_040899e4:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_02 = (__this->fields)._inputField;
    provider = (__this->fields)._formatInfo;
    local_18 = (ulong)*(uint *)((long)&pSVar4[1].klass + 4) << 0x20;
    arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&local_18 + 4);
    value_00 = System_String__Format
                         ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
  }
  if (__this_02 != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_text(__this_02,value_00,(MethodInfo *)0x0);
    return;
  }
LAB_040899e9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderInputSettingElement$$OnInputValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnInputValueChanged (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x40899f0

void UI_SliderInputSettingElement__OnInputValueChanged
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  Settings_TypedSetting_float__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  bool_conflict bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iStack_18;
  float fStack_14;
  
  if (DAT_0570455c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570455c = '\x01';
  }
  _iStack_18 = 0;
  bVar5 = System_String__op_Equality
                    (value,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    iVar3 = (__this->fields)._settingType;
    if (iVar3 == 2) {
      bVar5 = System_Int32__TryParse(value,&iStack_18,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 == (UnityEngine_UI_Slider_o *)0x0) ||
           (__this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting,
           __this_01 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_04089bba;
        bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar2) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting))
        goto LAB_04089bbf;
        fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
        fVar7 = (float)(pUVar4->fields).m_Direction;
        fVar8 = (float)iStack_18;
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        uVar6 = -(uint)(fVar1 <= fVar8);
        Settings_TypedSetting<int>__set_Value
                  (__this_01,(int)(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),MethodInfo_Void_set_Value);
      }
    }
    else if (iVar3 == 3) {
      bVar5 = System_Single__TryParse(value,&fStack_14,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
           (__this_00 = (Settings_TypedSetting_float__o *)(__this->fields)._setting,
           __this_00 != (Settings_TypedSetting_float__o *)0x0)) {
          bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar2 <= (__this_00->klass->_2).naturalAligment) &&
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
            fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
            fVar7 = (float)(pUVar4->fields).m_Direction;
            if (fStack_14 <= fVar7) {
              fVar7 = fStack_14;
            }
            uVar6 = -(uint)(fVar1 <= fStack_14);
            Settings_TypedSetting<float>__set_Value
                      (__this_00,(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),MethodInfo_Void_set_Value);
            return;
          }
LAB_04089bbf:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
LAB_04089bba:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// UI.SliderInputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_SliderInputSettingElement__OnInputFinishEditing (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4089bd0

void UI_SliderInputSettingElement__OnInputFinishEditing
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._6_SyncElement.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._6_SyncElement.method,method,vtable_dispatch);
  return;
}


// UI.SliderInputSettingElement$$SyncSlider
// il2cpp: void UI_SliderInputSettingElement__SyncSlider (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4089bf0

void UI_SliderInputSettingElement__SyncSlider
               (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_UI_Slider_o *pUVar4;
  float fVar5;
  
  if (DAT_0570455d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570455d = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto LAB_04089ce6;
      pUVar4 = (__this->fields)._slider;
      if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar5 = (float)*(int *)((long)&pSVar3[1].klass + 4);
        goto LAB_04089ccd;
      }
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
LAB_04089ce6:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pUVar4 = (__this->fields)._slider;
      if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar5 = *(float *)((long)&pSVar3[1].klass + 4);
LAB_04089ccd:
        vtable_dispatch = (pUVar4->klass->vtable)._47_set_value.methodPtr;
        (*vtable_dispatch)
                  (fVar5,pUVar4,(pUVar4->klass->vtable)._47_set_value.method,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderInputSettingElement$$SyncInput
// il2cpp: void UI_SliderInputSettingElement__SyncInput (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4089890

void UI_SliderInputSettingElement__SyncInput
               (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  UnityEngine_UI_InputField_o *__this_00;
  System_Globalization_NumberFormatInfo_o *provider;
  uint uVar4;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *value;
  undefined8 uStack_18;
  
  uStack_18._4_4_ = (uint)((ulong)in_RAX >> 0x20);
  if (DAT_0570455e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"{0:N}");
    DAT_0570455e = '\x01';
  }
  uVar4 = uStack_18._4_4_;
  uStack_18 = (ulong)uStack_18._4_4_ << 0x20;
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_040899e9;
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto LAB_040899e4;
    __this_00 = (__this->fields)._inputField;
    uStack_18 = CONCAT44(uVar4,*(undefined4 *)((long)&pSVar3[1].klass + 4));
    value = System_Int32__ToString((int32_t)&uStack_18,(MethodInfo *)0x0);
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_040899e9;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
LAB_040899e4:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = (__this->fields)._inputField;
    provider = (__this->fields)._formatInfo;
    uStack_18 = (ulong)*(uint *)((long)&pSVar3[1].klass + 4) << 0x20;
    arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_18 + 4);
    value = System_String__Format
                      ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
  }
  if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_text(__this_00,value,(MethodInfo *)0x0);
    return;
  }
LAB_040899e9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderInputSettingElement$$SyncElement
// il2cpp: void UI_SliderInputSettingElement__SyncElement (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4089cf0

void UI_SliderInputSettingElement__SyncElement
               (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  UnityEngine_UI_InputField_o *__this_00;
  System_Globalization_NumberFormatInfo_o *provider;
  ulong uVar4;
  Il2CppObject *arg0;
  System_String_o *value;
  ulong extraout_RAX;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x4089cf9;
  UI_SliderInputSettingElement__SyncSlider(__this,method);
  uStack_18 = extraout_RAX;
  if (DAT_0570455e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"{0:N}");
    DAT_0570455e = '\x01';
  }
  uVar4 = uStack_18 >> 0x20;
  uStack_18 = uStack_18 & 0xffffffff00000000;
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_040899e9;
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto LAB_040899e4;
    __this_00 = (__this->fields)._inputField;
    uStack_18 = CONCAT44((int)uVar4,*(undefined4 *)((long)&pSVar3[1].klass + 4));
    value = System_Int32__ToString((int32_t)&uStack_18,(MethodInfo *)0x0);
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto LAB_040899e9;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
LAB_040899e4:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = (__this->fields)._inputField;
    provider = (__this->fields)._formatInfo;
    uStack_18 = (ulong)*(uint *)((long)&pSVar3[1].klass + 4) << 0x20;
    arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_18 + 4);
    value = System_String__Format
                      ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
  }
  if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
    UnityEngine_UI_InputField__set_text(__this_00,value,(MethodInfo *)0x0);
    return;
  }
LAB_040899e9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SliderInputSettingElement$$.ctor
// il2cpp: void UI_SliderInputSettingElement___ctor (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4089d10

void UI_SliderInputSettingElement___ctor(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_0
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_0 (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x4089d20

void UI_SliderInputSettingElement__<Setup>b__7_0
               (UI_SliderInputSettingElement_o *__this,float value,MethodInfo *method)

{
  UI_SliderInputSettingElement__OnSliderValueChanged(__this,value,method);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_1
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_1 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4089d30

void UI_SliderInputSettingElement__<Setup>b__7_1
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  Settings_TypedSetting_float__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  bool_conflict bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iStack_18;
  float fStack_14;
  
  if (DAT_0570455c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570455c = '\x01';
  }
  _iStack_18 = 0;
  bVar5 = System_String__op_Equality
                    (value,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    iVar3 = (__this->fields)._settingType;
    if (iVar3 == 2) {
      bVar5 = System_Int32__TryParse(value,&iStack_18,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 == (UnityEngine_UI_Slider_o *)0x0) ||
           (__this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting,
           __this_01 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_04089bba;
        bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar2) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting))
        goto LAB_04089bbf;
        fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
        fVar7 = (float)(pUVar4->fields).m_Direction;
        fVar8 = (float)iStack_18;
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        uVar6 = -(uint)(fVar1 <= fVar8);
        Settings_TypedSetting<int>__set_Value
                  (__this_01,(int)(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),MethodInfo_Void_set_Value);
      }
    }
    else if (iVar3 == 3) {
      bVar5 = System_Single__TryParse(value,&fStack_14,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
           (__this_00 = (Settings_TypedSetting_float__o *)(__this->fields)._setting,
           __this_00 != (Settings_TypedSetting_float__o *)0x0)) {
          bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar2 <= (__this_00->klass->_2).naturalAligment) &&
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
            fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
            fVar7 = (float)(pUVar4->fields).m_Direction;
            if (fStack_14 <= fVar7) {
              fVar7 = fStack_14;
            }
            uVar6 = -(uint)(fVar1 <= fStack_14);
            Settings_TypedSetting<float>__set_Value
                      (__this_00,(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),MethodInfo_Void_set_Value);
            return;
          }
LAB_04089bbf:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
LAB_04089bba:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_2
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_2 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4089d40

void UI_SliderInputSettingElement__<Setup>b__7_2
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._6_SyncElement.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._6_SyncElement.method,method,vtable_dispatch);
  return;
}


