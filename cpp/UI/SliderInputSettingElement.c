// Type: UI.SliderInputSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SliderInputSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderInputSettingElement.cs
// --------------------------------

// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$.ctor
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor(UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.IDisposable.Dispose
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_IDisposable_Dispose (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_IDisposable_Dispose(UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, MethodInfo* method)

{
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$MoveNext
// il2cpp: bool UI_SliderInputSettingElement__WaitAndFixInputField_d__9__MoveNext (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x18223a4e0

bool UI_SliderInputSettingElement__WaitAndFixInputField_d__9__MoveNext
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_SliderInputSettingElement_o *pUVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_18434714b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_18434714b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 2;
    return true;
  }
  if (iVar1 != 2) {
    return false;
  }
  pUVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((pUVar2 != (UI_SliderInputSettingElement_o *)0x0) &&
      (pUVar3 = (pUVar2->fields)._inputField, pUVar3 != (UnityEngine_UI_InputField_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    pUVar3 = (pUVar2->fields)._inputField;
    if ((pUVar3 != (UnityEngine_UI_InputField_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      (pUVar2->fields)._fixedInputField = true;
      return false;
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_Reset (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x18223a630

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
// 0x180573e90

Il2CppObject*
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_get_Current(UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderInputSettingElement__get_SupportedSettingTypes (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x18221a860

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderInputSettingElement__get_SupportedSettingTypes
          (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347143 = '\x01';
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


// UI.SliderInputSettingElement$$Setup
// il2cpp: void UI_SliderInputSettingElement__Setup (UI_SliderInputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x1822198e0

void UI_SliderInputSettingElement__Setup
               (UI_SliderInputSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,float sliderWidth,
               float sliderHeight,float inputWidth,float inputHeight,int32_t decimalPlaces,MethodInfo *method)

{
  byte bVar1;
  System_String_o *panel;
  int32_t iVar2;
  System_Globalization_NumberFormatInfo_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Slider_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  DG_Tweening_Core_DOSetter_float__o *__this_00;
  UnityEngine_UI_InputField_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar9;
  DG_Tweening_Core_DOSetter_T__o *pDVar10;
  UnityEngine_UI_Image_o *pUVar11;
  UnityEngine_Color_o *pUVar12;
  UnityEngine_UI_ColorBlock_o *pUVar13;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_01;
  float value;
  UnityEngine_Color_Fields local_108;
  UnityEngine_UI_ColorBlock_o local_f8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_184347144 == '\0') {
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
    Il2CppMethodInitialized_184347144 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Globalization_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._formatInfo,pSVar3);
  pSVar3 = (__this->fields)._formatInfo;
  if (pSVar3 == (System_Globalization_NumberFormatInfo_o *)0x0) goto label_18221a38d;
  System_Globalization_NumberFormatInfo__set_NumberDecimalDigits(pSVar3,decimalPlaces,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18221a38d;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Slider",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18221a38d;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
  (__this->fields)._slider = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slider,pUVar5);
  iVar2 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar2;
  if (iVar2 == 2) {
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
    UnityEngine_UI_Slider__set_wholeNumbers(pUVar5,true,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_18221a38d;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
    UnityEngine_UI_Slider__set_minValue(pUVar5,(float)*(int *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
    value = (float)*(int *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
label_182219ca4:
    UnityEngine_UI_Slider__set_maxValue(pUVar5,value,(MethodInfo *)0x0);
  }
  else if (iVar2 == 3) {
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
    UnityEngine_UI_Slider__set_wholeNumbers(pUVar5,false,(MethodInfo *)0x0);
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_18221a38d;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
    UnityEngine_UI_Slider__set_minValue(pUVar5,*(float *)&(*(uint64_t *)((char *)setting + 0x20)),(MethodInfo *)0x0);
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    pUVar5 = (__this->fields)._slider;
    if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
    value = *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
    goto label_182219ca4;
  }
  pUVar5 = (__this->fields)._slider;
  if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar5,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18221a38d;
  (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar6,sliderWidth,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
  pUVar5 = (__this->fields)._slider;
  if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar5,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18221a38d;
  (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar6,sliderHeight,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
  pUVar5 = (__this->fields)._slider;
  if (pUVar5 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a38d;
  pUVar9 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar5->fields).m_OnValueChanged;
  __this_00 = (DG_Tweening_Core_DOSetter_float__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_float);
  UnityEngine_Events_UnityAction_float____ctor
            (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_0,
             (MethodInfo_E5A750 *)0x0);
  if (pUVar9 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) goto label_18221a38d;
  UnityEngine_Events_UnityEvent_Vector2___AddListener
            (pUVar9,(UnityEngine_Events_UnityAction_T0__o *)__this_00,
             (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_float_AddListener);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18221a38d;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"InputField",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18221a38d;
  pUVar7 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_InputField);
  (__this->fields)._inputField = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputField,pUVar7);
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_18221a38d;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18221a38d;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18221a38d;
  pUVar8 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  if ((style == (UI_ElementStyle_o *)0x0) || (pUVar8 == (UnityEngine_UI_Text_o *)0x0)) goto label_18221a38d;
  UnityEngine_UI_Text__set_fontSize
            (pUVar8,(__this->fields)._inputFontSizeOffset + (style->fields).FontSize,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_18221a38d;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar7,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18221a38d;
  (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar6,inputWidth,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_18221a38d;
  pUVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar7,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18221a38d;
  (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar6,inputHeight,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
  iVar2 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
  (__this->fields)._settingType = iVar2;
  if (iVar2 == 3) {
    pUVar7 = (__this->fields)._inputField;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_18221a38d;
    iVar2 = 3;
label_182219edc:
    UnityEngine_UI_InputField__set_contentType(pUVar7,iVar2,(MethodInfo *)0x0);
  }
  else if (iVar2 == 2) {
    pUVar7 = (__this->fields)._inputField;
    if (pUVar7 == (UnityEngine_UI_InputField_o *)0x0) goto label_18221a38d;
    iVar2 = 2;
    goto label_182219edc;
  }
  pUVar7 = (__this->fields)._inputField;
  if (pUVar7 != (UnityEngine_UI_InputField_o *)0x0) {
    pUVar9 = (UnityEngine_Events_UnityEvent_Vector2__o *)
             Photon_Realtime_LoadBalancingClient__get_CurrentCluster
                       ((Photon_Realtime_LoadBalancingClient_o *)pUVar7,(MethodInfo *)0x0);
    pDVar10 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (pDVar10,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_1,
               (MethodInfo_EB6EC0 *)0x0);
    if (pUVar9 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
      UnityEngine_Events_UnityEvent_Vector2___AddListener
                (pUVar9,(UnityEngine_Events_UnityAction_T0__o *)pDVar10,
                 (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      pUVar7 = (__this->fields)._inputField;
      if (pUVar7 != (UnityEngine_UI_InputField_o *)0x0) {
        pUVar9 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar7->fields).m_OnDidEndEdit;
        pDVar10 = (DG_Tweening_Core_DOSetter_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
        UnityEngine_Events_UnityAction_object____ctor
                  (pDVar10,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_SliderInputSettingElement_Setup_b__7_2,(MethodInfo_EB6EC0 *)0x0);
        if (pUVar9 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (pUVar9,(UnityEngine_Events_UnityAction_T0__o *)pDVar10,
                     (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          UI_BaseSettingElement__Setup
                    ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._slider;
          if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0)
            ;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar11 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar4,
                                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image)
                ;
                panel = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar12 = UI_UIManager__GetThemeColor
                                    ((UnityEngine_Color_o *)&local_108,panel,"DefaultSetting",
                                     "SliderBackgroundColor","DefaultPanel",(MethodInfo *)0x0);
                if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                  local_108.r = (pUVar12->fields).r;
                  local_108.g = (pUVar12->fields).g;
                  local_108.b = (pUVar12->fields).b;
                  local_108.a = (pUVar12->fields).a;
                  (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                            (pUVar11,(UnityEngine_Color_o *)&local_108,
                             (pUVar11->klass->vtable)._23_set_color.method);
                  pUVar5 = (__this->fields)._slider;
                  if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
                    pUVar4 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Fill Area/Fill",(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                        pUVar11 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar4,
                                             (MethodInfo_6651A0 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Image);
                        pUVar12 = UI_UIManager__GetThemeColor
                                            ((UnityEngine_Color_o *)&local_108,(style->fields).ThemePanel,
                                             "DefaultSetting","SliderFillColor","DefaultPanel"
                                             ,(MethodInfo *)0x0);
                        if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                          local_108.r = (pUVar12->fields).r;
                          local_108.g = (pUVar12->fields).g;
                          local_108.b = (pUVar12->fields).b;
                          local_108.a = (pUVar12->fields).a;
                          (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar11,(UnityEngine_Color_o *)&local_108,
                                     (pUVar11->klass->vtable)._23_set_color.method);
                          pUVar5 = (__this->fields)._slider;
                          if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
                            pUVar4 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                              pUVar4 = UnityEngine_Transform__Find
                                                 (pUVar4,"Handle Slide Area/Handle",(MethodInfo *)0x0);
                              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                pUVar11 = UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar4,
                                                     (MethodInfo_6651A0 *)
                                                     MethodInfo_UnityEngine_Component_GetComponent_Image);
                                pUVar12 = UI_UIManager__GetThemeColor
                                                    ((UnityEngine_Color_o *)&local_108,
                                                     (style->fields).ThemePanel,"DefaultSetting",
                                                     "SliderHandleColor","DefaultPanel",
                                                     (MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                                  local_108.r = (pUVar12->fields).r;
                                  local_108.g = (pUVar12->fields).g;
                                  local_108.b = (pUVar12->fields).b;
                                  local_108.a = (pUVar12->fields).a;
                                  (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar11,(UnityEngine_Color_o *)&local_108,
                                             (pUVar11->klass->vtable)._23_set_color.method);
                                  pUVar7 = (__this->fields)._inputField;
                                  pUVar13 = UI_UIManager__GetThemeColorBlock
                                                      (&local_98,(style->fields).ThemePanel,
                                                       "DefaultSetting","Input",
                                                       "DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar7 != (UnityEngine_UI_InputField_o *)0x0) {
                                    local_f8.fields.m_NormalColor.fields.r =
                                         (pUVar13->fields).m_NormalColor.fields.r;
                                    local_f8.fields.m_NormalColor.fields.g =
                                         (pUVar13->fields).m_NormalColor.fields.g;
                                    local_f8.fields.m_NormalColor.fields.b =
                                         (pUVar13->fields).m_NormalColor.fields.b;
                                    local_f8.fields.m_NormalColor.fields.a =
                                         (pUVar13->fields).m_NormalColor.fields.a;
                                    local_f8.fields.m_HighlightedColor.fields.r =
                                         (pUVar13->fields).m_HighlightedColor.fields.r;
                                    local_f8.fields.m_HighlightedColor.fields.g =
                                         (pUVar13->fields).m_HighlightedColor.fields.g;
                                    local_f8.fields.m_HighlightedColor.fields.b =
                                         (pUVar13->fields).m_HighlightedColor.fields.b;
                                    local_f8.fields.m_HighlightedColor.fields.a =
                                         (pUVar13->fields).m_HighlightedColor.fields.a;
                                    local_f8.fields.m_PressedColor.fields.r =
                                         (pUVar13->fields).m_PressedColor.fields.r;
                                    local_f8.fields.m_PressedColor.fields.g =
                                         (pUVar13->fields).m_PressedColor.fields.g;
                                    local_f8.fields.m_PressedColor.fields.b =
                                         (pUVar13->fields).m_PressedColor.fields.b;
                                    local_f8.fields.m_PressedColor.fields.a =
                                         (pUVar13->fields).m_PressedColor.fields.a;
                                    local_f8.fields.m_SelectedColor.fields.r =
                                         (pUVar13->fields).m_SelectedColor.fields.r;
                                    local_f8.fields.m_SelectedColor.fields.g =
                                         (pUVar13->fields).m_SelectedColor.fields.g;
                                    local_f8.fields.m_SelectedColor.fields.b =
                                         (pUVar13->fields).m_SelectedColor.fields.b;
                                    local_f8.fields.m_SelectedColor.fields.a =
                                         (pUVar13->fields).m_SelectedColor.fields.a;
                                    local_f8.fields.m_DisabledColor.fields.r =
                                         (pUVar13->fields).m_DisabledColor.fields.r;
                                    local_f8.fields.m_DisabledColor.fields.g =
                                         (pUVar13->fields).m_DisabledColor.fields.g;
                                    local_f8.fields.m_DisabledColor.fields.b =
                                         (pUVar13->fields).m_DisabledColor.fields.b;
                                    local_f8.fields.m_DisabledColor.fields.a =
                                         (pUVar13->fields).m_DisabledColor.fields.a;
                                    local_f8.fields.m_ColorMultiplier = (pUVar13->fields).m_ColorMultiplier;
                                    local_f8.fields.m_FadeDuration = (pUVar13->fields).m_FadeDuration;
                                    UnityEngine_UI_Selectable__set_colors
                                              ((UnityEngine_UI_Selectable_o *)pUVar7,&local_f8,
                                               (MethodInfo *)0x0);
                                    pUVar7 = (__this->fields)._inputField;
                                    if (pUVar7 != (UnityEngine_UI_InputField_o *)0x0) {
                                      pUVar4 = UnityEngine_Component__get_transform
                                                         ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0)
                                      ;
                                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                        pUVar4 = UnityEngine_Transform__Find
                                                           (pUVar4,"Text",(MethodInfo *)0x0);
                                        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar8 = UnityEngine_Component__GetComponent_object_
                                                             ((UnityEngine_Component_o *)pUVar4,
                                                              (MethodInfo_6651A0 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                                          pUVar12 = UI_UIManager__GetThemeColor
                                                              ((UnityEngine_Color_o *)&local_108,
                                                               (style->fields).ThemePanel,
                                                               "DefaultSetting","InputTextColor",
                                                               "DefaultPanel",(MethodInfo *)0x0);
                                          if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                            local_108.r = (pUVar12->fields).r;
                                            local_108.g = (pUVar12->fields).g;
                                            local_108.b = (pUVar12->fields).b;
                                            local_108.a = (pUVar12->fields).a;
                                            (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                      (pUVar8,(UnityEngine_Color_o *)&local_108,
                                                       (pUVar8->klass->vtable)._23_set_color.method);
                                            pUVar7 = (__this->fields)._inputField;
                                            pUVar12 = UI_UIManager__GetThemeColor
                                                                ((UnityEngine_Color_o *)&local_108,
                                                                 (style->fields).ThemePanel,
                                                                 "DefaultSetting","InputSelectionColor",
                                                                 "DefaultPanel",(MethodInfo *)0x0);
                                            if (pUVar7 != (UnityEngine_UI_InputField_o *)0x0) {
                                              local_108.r = (pUVar12->fields).r;
                                              local_108.g = (pUVar12->fields).g;
                                              local_108.b = (pUVar12->fields).b;
                                              local_108.a = (pUVar12->fields).a;
                                              UnityEngine_UI_InputField__set_selectionColor
                                                        (pUVar7,(UnityEngine_Color_o *)&local_108,
                                                         (MethodInfo *)0x0);
                                              if (Il2CppMethodInitialized_184347146 == '\0') {
                                                il2cpp_codegen_initialize_runtime_metadata
                                                          (&
                                                       TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9
                                                       );
                                                Il2CppMethodInitialized_184347146 = '\x01';
                                              }
                                              __this_01 = (
                                                       Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o
                                                       *)il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9
                                                       );
                                              UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor
                                                        (__this_01,0,(MethodInfo *)0x0);
                                              if (__this_01 !=
                                                  (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                                                  0x0) {
                                                (__this_01->fields).__4__this =
                                                     (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(__this_01->fields).__4__this,__this);
                                                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                                          ((UnityEngine_MonoBehaviour_o *)__this,
                                                           (System_Collections_IEnumerator_o *)__this_01,
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
  }
label_18221a38d:
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement$$OnEnable
// il2cpp: void UI_SliderInputSettingElement__OnEnable (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x182219520

void UI_SliderInputSettingElement__OnEnable(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_184347145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347145 = '\x01';
  }
  pUVar1 = (__this->fields)._inputField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._fixedInputField == false)) {
    pUVar1 = (__this->fields)._inputField;
    if ((pUVar1 != (UnityEngine_UI_InputField_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._inputField;
      if ((pUVar1 != (UnityEngine_UI_InputField_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.SliderInputSettingElement$$WaitAndFixInputField
// il2cpp: System_Collections_IEnumerator_o* UI_SliderInputSettingElement__WaitAndFixInputField (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x18221a7e0

System_Collections_IEnumerator_o *
UI_SliderInputSettingElement__WaitAndFixInputField(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184347146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9);
    Il2CppMethodInitialized_184347146 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_SliderInputSettingElement_WaitAndFixInputField_d__9);
  UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement$$OnSliderValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnSliderValueChanged (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x1822197c0

void
UI_SliderInputSettingElement__OnSliderValueChanged(UI_SliderInputSettingElement_o* __this, float value, MethodInfo* method)

{
  byte bVar1;
  Settings_TypedSetting_int__o *__this_00;
  Settings_TypedSetting_float__o *__this_01;
  
  if (Il2CppMethodInitialized_184347147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347147 = '\x01';
  }
  if ((__this->fields)._settingType == 3) {
    __this_01 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_float__o *)0x0) {
label_1822198c8:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_FloatSetting);
    }
    Settings_TypedSetting_float___set_Value
              (__this_01,value,(MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  else if ((__this->fields)._settingType == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_1822198c8;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_IntSetting);
    }
    Settings_TypedSetting_int___set_Value
              (__this_00,(int)value,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  }
  UI_SliderInputSettingElement__SyncInput(__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$OnInputValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnInputValueChanged (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1822195d0

void UI_SliderInputSettingElement__OnInputValueChanged
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  Settings_TypedSetting_int__o *__this_00;
  Settings_TypedSetting_float__o *__this_01;
  bool bVar3;
  float fVar4;
  float fVar5;
  int32_t local_res10 [4];
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184347148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347148 = '\x01';
  }
  local_res20[0] = 0.0;
  local_res10[0] = 0;
  bVar3 = System_String__op_Equality
                    (value,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar3) {
    if ((__this->fields)._settingType == 3) {
      bVar3 = System_Single__TryParse(value,local_res20,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar2 = (__this->fields)._slider;
        if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
          fVar4 = (pUVar2->fields).m_MinValue;
          __this_01 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
          if ((fVar4 <= local_res20[0]) && (fVar4 = (pUVar2->fields).m_MaxValue, local_res20[0] <= fVar4)) {
            fVar4 = local_res20[0];
          }
          if (__this_01 != (Settings_TypedSetting_float__o *)0x0) {
            bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
            if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
               ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
              Settings_TypedSetting_float___set_Value
                        (__this_01,fVar4,(MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value
                        );
              return;
            }
            il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_FloatSetting);
          }
        }
        goto label_18221979b;
      }
    }
    else if (((__this->fields)._settingType == 2) &&
            (bVar3 = System_Int32__TryParse(value,local_res10,(MethodInfo *)0x0), bVar3)) {
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = (pUVar2->fields).m_MinValue;
        __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
        fVar5 = (float)local_res10[0];
        if ((fVar4 <= fVar5) && (fVar4 = (pUVar2->fields).m_MaxValue, fVar5 <= fVar4)) {
          fVar4 = fVar5;
        }
        if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
            Settings_TypedSetting_int___set_Value
                      (__this_00,(int)fVar4,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_IntSetting);
        }
      }
label_18221979b:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.SliderInputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_SliderInputSettingElement__OnInputFinishEditing (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1821b9e00

void
UI_SliderInputSettingElement__OnInputFinishEditing_21b9e00(UI_SliderInputSettingElement_o* __this, System_String_o* value, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (*(__this->klass->vtable)._6_Eval.methodPtr)(__this,(__this->klass->vtable)._6_Eval.method);
  return pIVar1;
}


// UI.SliderInputSettingElement$$SyncSlider
// il2cpp: void UI_SliderInputSettingElement__SyncSlider (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x18221a690

void UI_SliderInputSettingElement__SyncSlider(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Slider_o *pUVar3;
  
  if (Il2CppMethodInitialized_184347149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347149 = '\x01';
  }
  if ((__this->fields)._settingType == 3) {
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
      }
      pUVar3 = (__this->fields)._slider;
      if (pUVar3 != (UnityEngine_UI_Slider_o *)0x0) {
        (*(pUVar3->klass->vtable)._47_set_value.methodPtr)
                  (pUVar3,*(float *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4),
                   (pUVar3->klass->vtable)._47_set_value.method);
        return;
      }
    }
  }
  else {
    if ((__this->fields)._settingType != 2) {
      return;
    }
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
      }
      pUVar3 = (__this->fields)._slider;
      if (pUVar3 != (UnityEngine_UI_Slider_o *)0x0) {
        (*(pUVar3->klass->vtable)._47_set_value.methodPtr)
                  (pUVar3,(float)*(int *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4),
                   (pUVar3->klass->vtable)._47_set_value.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement$$SyncInput
// il2cpp: void UI_SliderInputSettingElement__SyncInput (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x18221a4f0

void UI_SliderInputSettingElement__SyncInput(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  System_Globalization_NumberFormatInfo_o *provider;
  System_String_o *pSVar4;
  Il2CppObject *arg0;
  int32_t local_res8 [2];
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_18434714a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"{0:N}");
    Il2CppMethodInitialized_18434714a = '\x01';
  }
  local_res8[0] = 0;
  if ((__this->fields)._settingType == 3) {
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
      }
      local_res18[0] = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
      pUVar3 = (__this->fields)._inputField;
      provider = (__this->fields)._formatInfo;
      arg0 = il2cpp_value_box(g_data_184354e38,local_res18);
      pSVar4 = System_String__Format_196ca50
                         ((System_IFormatProvider_o *)provider,"{0:N}",arg0,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
        UnityEngine_UI_InputField__set_text(pUVar3,pSVar4,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  if ((__this->fields)._settingType != 2) {
    return;
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    local_res8[0] = *(int32_t *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
    pUVar3 = (__this->fields)._inputField;
    pSVar4 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_text(pUVar3,pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SliderInputSettingElement$$SyncElement
// il2cpp: void UI_SliderInputSettingElement__SyncElement (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x18221a3c0

void UI_SliderInputSettingElement__SyncElement(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_UI_Slider_o *pUVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184347149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347149 = '\x01';
  }
  if ((__this->fields)._settingType == 3) {
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) {
label_18221a4cb:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    pUVar3 = (__this->fields)._slider;
    if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a4cb;
    fVar4 = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
  }
  else {
    if ((__this->fields)._settingType != 2) goto label_18221a4bc;
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 == (Settings_BaseSetting_o *)0x0) goto label_18221a4cb;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    pUVar3 = (__this->fields)._slider;
    if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) goto label_18221a4cb;
    fVar4 = (float)*(int *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
  }
  (*(pUVar3->klass->vtable)._47_set_value.methodPtr)
            (pUVar3,fVar4,(pUVar3->klass->vtable)._47_set_value.method);
label_18221a4bc:
  UI_SliderInputSettingElement__SyncInput(__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$.ctor
// il2cpp: void UI_SliderInputSettingElement___ctor (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x18221a850

void UI_SliderInputSettingElement___ctor(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_0
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_0 (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x1822197c0

void UI_SliderInputSettingElement___Setup_b__7_0
               (UI_SliderInputSettingElement_o *__this,float value,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_int__o *__this_00;
  Settings_TypedSetting_float__o *__this_01;
  
  if (Il2CppMethodInitialized_184347147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347147 = '\x01';
  }
  if ((__this->fields)._settingType == 3) {
    __this_01 = (Settings_TypedSetting_float__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_float__o *)0x0) {
label_1822198c8:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_FloatSetting);
    }
    Settings_TypedSetting_float___set_Value
              (__this_01,value,(MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  else if ((__this->fields)._settingType == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_1822198c8;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_IntSetting);
    }
    Settings_TypedSetting_int___set_Value
              (__this_00,(int)value,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  }
  UI_SliderInputSettingElement__SyncInput(__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_1
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_1 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18221a7d0

void UI_SliderInputSettingElement___Setup_b__7_1
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UI_SliderInputSettingElement__OnInputValueChanged(__this,value,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_2
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_2 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1821b9e00

void
UI_SliderInputSettingElement___Setup_b__7_2_21b9e00(UI_SliderInputSettingElement_o* __this, System_String_o* value, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (*(__this->klass->vtable)._6_Eval.methodPtr)(__this,(__this->klass->vtable)._6_Eval.method);
  return pIVar1;
}


