// Type: UI.SliderInputSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SliderInputSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderInputSettingElement.cs
// --------------------------------

// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$.ctor
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cf6c60

void UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.IDisposable.Dispose
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_IDisposable_Dispose (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x5cf7270

void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_IDisposable_Dispose
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$MoveNext
// il2cpp: bool UI_SliderInputSettingElement__WaitAndFixInputField_d__9__MoveNext (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x5cf7280

bool UI_SliderInputSettingElement__WaitAndFixInputField_d__9__MoveNext
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_SliderInputSettingElement_o *pUVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_07547cb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547cb8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      bVar6 = true;
    }
    else if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    return bVar6;
  }
  pUVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((pUVar2 != (UI_SliderInputSettingElement_o *)0x0) &&
      (pUVar3 = (pUVar2->fields)._inputField, pUVar3 != (UnityEngine_UI_InputField_o *)0x0)) &&
     (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    pUVar3 = (pUVar2->fields)._inputField;
    if ((pUVar3 != (UnityEngine_UI_InputField_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      (pUVar2->fields)._fixedInputField = true;
      return false;
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x5cf73c0

Il2CppObject *
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_Reset (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x5cf73d0

void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_Reset
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_get_Current (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x5cf7410

Il2CppObject *
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_get_Current
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderInputSettingElement__get_SupportedSettingTypes (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf6000

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderInputSettingElement__get_SupportedSettingTypes
          (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547cb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547cb0 = '\x01';
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


// UI.SliderInputSettingElement$$Setup
// il2cpp: void UI_SliderInputSettingElement__Setup (UI_SliderInputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x5cf60a0

void UI_SliderInputSettingElement__Setup
               (UI_SliderInputSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,float sliderWidth,
               float sliderHeight,float inputWidth,float inputHeight,int32_t decimalPlaces,MethodInfo *method)

{
  UnityEngine_UI_Slider_o **targetAddress;
  UnityEngine_UI_InputField_o **targetAddress_00;
  byte bVar1;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  int32_t iVar2;
  System_Globalization_NumberFormatInfo_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Slider_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_Events_UnityAction_T0__o *pUVar7;
  UnityEngine_UI_InputField_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_02;
  UnityEngine_UI_Image_o *pUVar10;
  UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this_03;
  undefined4 in_register_0000008c;
  MethodInfo *method_00;
  float value_00;
  UnityEngine_Color_o UVar11;
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000008c,decimalPlaces);
  if (Il2CppMethodInitialized_07547cb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Slider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_NumberFormatInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SliderInputSettingElement_Setup_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SliderInputSettingElement_Setup_b__7_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SliderInputSettingElement_Setup_b__7_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Input");
    il2cpp_codegen_initialize_runtime_metadata(&"Handle Slide Area/Handle");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Fill Area/Fill");
    il2cpp_codegen_initialize_runtime_metadata(&"InputTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderHandleColor");
    il2cpp_codegen_initialize_runtime_metadata(&"InputSelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SliderFillColor");
    Il2CppMethodInitialized_07547cb1 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Globalization_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._formatInfo);
  pSVar3 = (__this->fields)._formatInfo;
  if (pSVar3 == (System_Globalization_NumberFormatInfo_o *)0x0) goto label_05cf6b30;
  System_Globalization_NumberFormatInfo__set_NumberDecimalDigits(pSVar3,decimalPlaces,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf6b30;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Slider",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf6b30;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
  targetAddress = &(__this->fields)._slider;
  (__this->fields)._slider = pUVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  iVar2 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar2;
  if (iVar2 == 3) {
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
    UnityEngine_UI_Slider__set_wholeNumbers(*targetAddress,false,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_05cf6b30;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
       ) {
label_05cf6b35:
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
    UnityEngine_UI_Slider__set_minValue(*targetAddress,*(float *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
       ) goto label_05cf6b35;
    pUVar5 = *targetAddress;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
    value_00 = *(float *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
label_05cf6478:
    UnityEngine_UI_Slider__set_maxValue(pUVar5,value_00,(MethodInfo *)0x0);
  }
  else if (iVar2 == 2) {
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
    UnityEngine_UI_Slider__set_wholeNumbers(*targetAddress,true,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_05cf6b30;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
    goto label_05cf6b35;
    if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
    UnityEngine_UI_Slider__set_minValue(*targetAddress,(float)*(int *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
    goto label_05cf6b35;
    pUVar5 = *targetAddress;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
    value_00 = (float)*(int *)((long)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
    goto label_05cf6478;
  }
  if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)*targetAddress,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf6b30;
  (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar6,sliderWidth,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
  if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)*targetAddress,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf6b30;
  (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar6,sliderHeight,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
  if (*targetAddress == (UnityEngine_UI_Slider_o *)0x0) goto label_05cf6b30;
  __this_00 = (UnityEngine_Events_UnityEvent_float__o *)((*targetAddress)->fields).m_OnValueChanged;
  pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_float);
  UnityEngine_Events_UnityAction_float____ctor
            ((UnityEngine_Events_UnityAction_float__o *)pUVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_0,(MethodInfo_4311C00 *)0x0);
  if (__this_00 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto label_05cf6b30;
  UnityEngine_Events_UnityEvent_float___AddListener
            (__this_00,pUVar7,(MethodInfo_43194E0 *)MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener
            );
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf6b30;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"InputField",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf6b30;
  pUVar8 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_InputField);
  targetAddress_00 = &(__this->fields)._inputField;
  (__this->fields)._inputField = pUVar8;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pUVar8 = (__this->fields)._inputField;
  if (pUVar8 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf6b30;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf6b30;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cf6b30;
  pUVar9 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  if ((style == (UI_ElementStyle_o *)0x0) || (pUVar9 == (UnityEngine_UI_Text_o *)0x0)) goto label_05cf6b30;
  UnityEngine_UI_Text__set_fontSize
            (pUVar9,(style->fields).FontSize + (__this->fields)._inputFontSizeOffset,(MethodInfo *)0x0);
  pUVar8 = (__this->fields)._inputField;
  if (pUVar8 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf6b30;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar8,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf6b30;
  (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar6,inputWidth,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
  if (*targetAddress_00 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf6b30;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)*targetAddress_00,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cf6b30;
  (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar6,inputHeight,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
  iVar2 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar2;
  if (iVar2 == 2) {
    pUVar8 = *targetAddress_00;
    if (pUVar8 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf6b30;
    iVar2 = 2;
label_05cf66ca:
    UnityEngine_UI_InputField__set_contentType(pUVar8,iVar2,(MethodInfo *)0x0);
  }
  else if (iVar2 == 3) {
    pUVar8 = *targetAddress_00;
    if (pUVar8 == (UnityEngine_UI_InputField_o *)0x0) goto label_05cf6b30;
    iVar2 = 3;
    goto label_05cf66ca;
  }
  if (*targetAddress_00 != (UnityEngine_UI_InputField_o *)0x0) {
    __this_02 = UnityEngine_UI_InputField__get_onValueChange(*targetAddress_00,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pUVar7,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_1,
               (MethodInfo_4311A10 *)0x0);
    if (__this_02 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,pUVar7,
                 (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      if (*targetAddress_00 != (UnityEngine_UI_InputField_o *)0x0) {
        __this_01 = ((*targetAddress_00)->fields).m_OnDidEndEdit;
        pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (pUVar7,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_2,(MethodInfo_4311A10 *)0x0);
        if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent_object___AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar7,
                     (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          UI_BaseSettingElement__Setup
                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,method_00);
          pUVar5 = (__this->fields)._slider;
          if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0)
            ;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar10 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar4,
                                     (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image
                                    );
                panel = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                UVar11 = UI_UIManager__GetThemeColor
                                   (panel,"DefaultSetting","SliderBackgroundColor","DefaultPanel",
                                    (MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                  (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                            (pUVar10,UVar11,(pUVar10->klass->vtable)._23_set_color.method);
                  if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
                    pUVar4 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Fill Area/Fill",(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                        pUVar10 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar4,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Image);
                        UVar11 = UI_UIManager__GetThemeColor
                                           ((style->fields).ThemePanel,"DefaultSetting",
                                            "SliderFillColor","DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                          (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar10,UVar11,(pUVar10->klass->vtable)._23_set_color.method);
                          if (*targetAddress != (UnityEngine_UI_Slider_o *)0x0) {
                            pUVar4 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                              pUVar4 = UnityEngine_Transform__Find
                                                 (pUVar4,"Handle Slide Area/Handle",(MethodInfo *)0x0);
                              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                pUVar10 = UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar4,
                                                     (MethodInfo_34B0830 *)
                                                     MethodInfo_UnityEngine_Component_GetComponent_Image);
                                UVar11 = UI_UIManager__GetThemeColor
                                                   ((style->fields).ThemePanel,"DefaultSetting",
                                                    "SliderHandleColor","DefaultPanel",
                                                    (MethodInfo *)0x0);
                                if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                                  (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar10,UVar11,(pUVar10->klass->vtable)._23_set_color.method);
                                  pUVar8 = *targetAddress_00;
                                  UI_UIManager__GetThemeColorBlock
                                            (&local_88,(style->fields).ThemePanel,"DefaultSetting",
                                             "Input","DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
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
                                    value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                                    value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                    UnityEngine_UI_Selectable__set_colors
                                              ((UnityEngine_UI_Selectable_o *)pUVar8,value,(MethodInfo *)0x0);
                                    if (*targetAddress_00 != (UnityEngine_UI_InputField_o *)0x0) {
                                      pUVar4 = UnityEngine_Component__get_transform
                                                         ((UnityEngine_Component_o *)*targetAddress_00,
                                                          (MethodInfo *)0x0);
                                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                        pUVar4 = UnityEngine_Transform__Find
                                                           (pUVar4,"Text",(MethodInfo *)0x0);
                                        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar9 = UnityEngine_Component__GetComponent_object_
                                                             ((UnityEngine_Component_o *)pUVar4,
                                                              (MethodInfo_34B0830 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                          UVar11 = UI_UIManager__GetThemeColor
                                                             ((style->fields).ThemePanel,"DefaultSetting"
                                                              ,"InputTextColor","DefaultPanel",
                                                              (MethodInfo *)0x0);
                                          if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                                            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                                      (pUVar9,UVar11,
                                                       (pUVar9->klass->vtable)._23_set_color.method);
                                            pUVar8 = *targetAddress_00;
                                            UVar11 = UI_UIManager__GetThemeColor
                                                               ((style->fields).ThemePanel,
                                                                "DefaultSetting","InputSelectionColor",
                                                                "DefaultPanel",(MethodInfo *)0x0);
                                            if (pUVar8 != (UnityEngine_UI_InputField_o *)0x0) {
                                              UnityEngine_UI_InputField__set_selectionColor
                                                        (pUVar8,UVar11,(MethodInfo *)0x0);
                                              if (Il2CppMethodInitialized_07547cb3 == '\0') {
                                                il2cpp_codegen_initialize_runtime_metadata
                                                          (&
                                                       TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9
                                                       );
                                                Il2CppMethodInitialized_07547cb3 = '\x01';
                                              }
                                              __this_03 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                                                                                          
                                                       TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9
                                                       );
                                              System_Object___ctor
                                                        ((Il2CppObject *)__this_03,(MethodInfo *)0x0);
                                              (__this_03->fields).__1__state = 0;
                                              (__this_03->fields).__4__this = __this;
                                              Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
                                              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                                        ((UnityEngine_MonoBehaviour_o *)__this,
                                                         (System_Collections_IEnumerator_o *)__this_03,
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05cf6b30:
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement$$OnEnable
// il2cpp: void UI_SliderInputSettingElement__OnEnable (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf6bb0

void UI_SliderInputSettingElement__OnEnable(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547cb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cb2 = '\x01';
  }
  pUVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._fixedInputField == false)) {
    pUVar1 = (__this->fields)._inputField;
    if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._inputField;
        if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.SliderInputSettingElement$$WaitAndFixInputField
// il2cpp: System_Collections_IEnumerator_o* UI_SliderInputSettingElement__WaitAndFixInputField (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf6b40

System_Collections_IEnumerator_o *
UI_SliderInputSettingElement__WaitAndFixInputField(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_07547cb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9);
    Il2CppMethodInitialized_07547cb3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.SliderInputSettingElement$$OnSliderValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnSliderValueChanged (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x5cf6c80

void UI_SliderInputSettingElement__OnSliderValueChanged
               (UI_SliderInputSettingElement_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_TypedSetting_float__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547cb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547cb4 = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 != (Settings_TypedSetting_int__o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        method_00 = (MethodInfo *)(ulong)(uint)(int)value;
        Settings_TypedSetting_int___set_Value
                  (__this_01,(int)value,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        UI_SliderInputSettingElement__SyncInput(__this,method_00);
        return;
      }
label_05cf6d87:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
label_05cf6d8c:
    ThrowNullReferenceException();
  }
  if (iVar2 == 3) {
    __this_00 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_float__o *)0x0) goto label_05cf6d8c;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) goto label_05cf6d87;
    method = MethodInfo_Settings_TypedSetting_float_set_Value;
    Settings_TypedSetting_float___set_Value
              (__this_00,value,(MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  UI_SliderInputSettingElement__SyncInput(__this,method);
  return;
}


// UI.SliderInputSettingElement$$OnInputValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnInputValueChanged (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf6f00

void UI_SliderInputSettingElement__OnInputValueChanged
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  Settings_TypedSetting_float__o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  bool bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iStack_18;
  float fStack_14;
  
  if (Il2CppMethodInitialized_07547cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547cb5 = '\x01';
  }
  _iStack_18 = 0;
  bVar5 = System_String__op_Equality
                    (value,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar5) {
    iVar3 = (__this->fields)._settingType;
    if (iVar3 == 2) {
      bVar5 = System_Int32__TryParse(value,&iStack_18,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
           (__this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting,
           __this_01 != (Settings_TypedSetting_int__o *)0x0)) {
          bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if ((bVar2 <= (__this_01->klass->_2).typeHierarchyDepth) &&
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
            fVar1 = (pUVar4->fields).m_MinValue;
            fVar7 = (pUVar4->fields).m_MaxValue;
            fVar8 = (float)iStack_18;
            if (fVar8 <= fVar7) {
              fVar7 = fVar8;
            }
            uVar6 = -(uint)(fVar1 <= fVar8);
            Settings_TypedSetting_int___set_Value
                      (__this_01,(int)(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            return;
          }
label_05cf70cf:
          il2cpp_codegen_raise_invalid_cast_exception();
        }
label_05cf70ca:
        ThrowNullReferenceException();
      }
    }
    else if (iVar3 == 3) {
      bVar5 = System_Single__TryParse(value,&fStack_14,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 == (UnityEngine_UI_Slider_o *)0x0) ||
           (__this_00 = (Settings_TypedSetting_float__o *)(__this->fields)._setting,
           __this_00 == (Settings_TypedSetting_float__o *)0x0)) goto label_05cf70ca;
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) goto label_05cf70cf;
        fVar1 = (pUVar4->fields).m_MinValue;
        fVar7 = (pUVar4->fields).m_MaxValue;
        if (fStack_14 <= fVar7) {
          fVar7 = fStack_14;
        }
        uVar6 = -(uint)(fVar1 <= fStack_14);
        Settings_TypedSetting_float___set_Value
                  (__this_00,(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),
                   (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      }
    }
  }
  return;
}


// UI.SliderInputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_SliderInputSettingElement__OnInputFinishEditing (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf70e0

void UI_SliderInputSettingElement__OnInputFinishEditing
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
  return;
}


// UI.SliderInputSettingElement$$SyncSlider
// il2cpp: void UI_SliderInputSettingElement__SyncSlider (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf7100

void UI_SliderInputSettingElement__SyncSlider(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547cb6 = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
      goto label_05cf71f6;
      pUVar4 = (__this->fields)._slider;
      if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar5 = (float)*(int *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
        goto label_05cf71dd;
      }
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting
         )) {
label_05cf71f6:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pUVar4 = (__this->fields)._slider;
      if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar5 = *(float *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
label_05cf71dd:
        (*(pUVar4->klass->vtable)._47_set_value.methodPtr)
                  (pUVar4,fVar5,(pUVar4->klass->vtable)._47_set_value.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement$$SyncInput
// il2cpp: void UI_SliderInputSettingElement__SyncInput (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf6da0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cf6e88: mov rdi, r14
// asm:   0x5cf6e8b: jmp 0x5cf6edf
// asm:   0x5cf6edc: mov rdi, rbx

void UI_SliderInputSettingElement__SyncInput(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  System_Globalization_NumberFormatInfo_o *provider;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *value;
  UnityEngine_UI_InputField_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07547cb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"{0:N}");
    Il2CppMethodInitialized_07547cb7 = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
      goto label_05cf6ef1;
      __this_00 = (__this->fields)._inputField;
      uStack_18 = CONCAT44(*(undefined4 *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4),(undefined4)uStack_18);
      value = System_Int32__ToString((int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) goto label_05cf6edf;
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting
         )) {
label_05cf6ef1:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      __this_00 = (__this->fields)._inputField;
      provider = (__this->fields)._formatInfo;
      uStack_18 = CONCAT44(uStack_18._4_4_,*(undefined4 *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4));
      arg0 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_18);
      value = System_String__Format_5302da0
                        ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
label_05cf6edf:
        UnityEngine_UI_InputField__set_text(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement$$SyncElement
// il2cpp: void UI_SliderInputSettingElement__SyncElement (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf7200

void UI_SliderInputSettingElement__SyncElement(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  UI_SliderInputSettingElement__SyncSlider(__this,method);
  UI_SliderInputSettingElement__SyncInput(__this,method);
  return;
}


// UI.SliderInputSettingElement$$.ctor
// il2cpp: void UI_SliderInputSettingElement___ctor (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x5cf7220

void UI_SliderInputSettingElement___ctor(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_0
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_0 (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x5cf7230

void UI_SliderInputSettingElement___Setup_b__7_0
               (UI_SliderInputSettingElement_o *__this,float value,MethodInfo *method)

{
  UI_SliderInputSettingElement__OnSliderValueChanged(__this,value,method);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_1
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_1 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf7240

void UI_SliderInputSettingElement___Setup_b__7_1
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UI_SliderInputSettingElement__OnInputValueChanged(__this,value,method);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_2
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_2 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cf7250

void UI_SliderInputSettingElement___Setup_b__7_2
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
  return;
}


