// Type: UI.SliderInputSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SliderInputSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/SliderInputSettingElement.cs
// --------------------------------

// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$.ctor
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9___ctor (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43976d0

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
// 0x4397cd0

void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_IDisposable_Dispose
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$MoveNext
// il2cpp: bool UI_SliderInputSettingElement__WaitAndFixInputField_d__9__MoveNext (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4397ce0

bool_conflict
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__MoveNext
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_SliderInputSettingElement_o *pUVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  bool_conflict bVar5;
  undefined7 uVar6;
  UnityEngine_UI_InputField_o *__this_00;
  
  __this_00 = (UnityEngine_UI_InputField_o *)__this;
  if (g_data_057ae2da == '\0') {
    __this_00 = (UnityEngine_UI_InputField_o *)&TypeInfo_WaitForEndOfFrame;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2da = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_SliderInputSettingElement_o *)0x0) &&
        (__this_00 = (pUVar2->fields)._inputField, __this_00 != (UnityEngine_UI_InputField_o *)0x0)) &&
       (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
       , pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
      __this_00 = (pUVar2->fields)._inputField;
      if ((__this_00 != (UnityEngine_UI_InputField_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
        *(undefined1 *)&(pUVar2->fields)._fixedInputField = 1;
        return 0;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(__this_00->fields).m_CancellationTokenSource;
  }
  uVar6 = (undefined7)((ulong)__this >> 8);
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 2;
    bVar5 = (bool_conflict)CONCAT71(uVar6,1);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 1;
    bVar5 = (bool_conflict)CONCAT71(uVar6,1);
  }
  else {
    bVar5 = 0;
  }
  return bVar5;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4397e10

Il2CppObject *
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_Reset (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4397e20

void UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_Reset
               (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.SliderInputSettingElement.<WaitAndFixInputField>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_get_Current (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o* __this, const MethodInfo* method);
// 0x4397e60

Il2CppObject *
UI_SliderInputSettingElement__WaitAndFixInputField_d__9__System_Collections_IEnumerator_get_Current
          (UI_SliderInputSettingElement__WaitAndFixInputField_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SliderInputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_SliderInputSettingElement__get_SupportedSettingTypes (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x43969f0

System_Collections_Generic_HashSet_SettingType__o *
UI_SliderInputSettingElement__get_SupportedSettingTypes
          (UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  MethodInfo *__this_01;
  UnityEngine_Component_o *__this_02;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  uint *puVar1;
  Il2CppClass **ppIVar2;
  uint uVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Events_UnityAction_T0__o *pUVar8;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_04;
  System_Collections_Generic_HashSet_SettingType__o *pSVar9;
  System_Collections_Generic_HashSet_SettingType__o *__this_05;
  undefined4 extraout_var;
  UnityEngine_GameObject_o *pUVar10;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  System_String_o *in_RCX;
  MethodInfo_33DA550 *style;
  int32_t value_00;
  MethodInfo_33DA550 *setting;
  Il2CppClass *__this_06;
  UnityEngine_UI_Slider_o *__this_07;
  System_Runtime_Serialization_SerializationInfo_o *pSVar11;
  System_String_o *in_R8;
  int32_t in_R9D;
  MethodInfo_33DA550 *pMVar12;
  undefined4 uVar13;
  float value_01;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  UnityEngine_Color_o UVar14;
  UnityEngine_UI_ColorBlock_o UStack_a0;
  Il2CppClass *pIStack_48;
  
  if (g_data_057ae2d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2d2 = '\x01';
  }
  pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  setting = MethodInfo_HashSet_1_Settings_SettingType;
  __this_06 = pIVar5;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pIVar5,MethodInfo_HashSet_1_Settings_SettingType);
  if (pIVar5 != (Il2CppClass *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pIVar5,3,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pIVar5,2,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)pIVar5;
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  pIStack_48 = pIVar5;
  if (g_data_057ae2d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NumberFormatInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__7_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"SliderBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"Input");
    il2cpp_runtime_helper_023445d0(&"Handle Slide Area/Handle");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"InputTextColor");
    il2cpp_runtime_helper_023445d0(&"Slider");
    il2cpp_runtime_helper_023445d0(&"SliderHandleColor");
    il2cpp_runtime_helper_023445d0(&"InputSelectionColor");
    il2cpp_runtime_helper_023445d0(&"SliderFillColor");
    g_data_057ae2d3 = '\x01';
  }
  pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor
            ((System_Globalization_NumberFormatInfo_o *)pIVar5,(MethodInfo *)0x0);
  (__this_06->_1).declaringType = pIVar5;
  il2cpp_runtime_helper_022b4080(&(__this_06->_1).declaringType);
  pIVar5 = (__this_06->_1).declaringType;
  pMVar12 = setting;
  if (pIVar5 != (Il2CppClass *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberDecimalDigits
              ((System_Globalization_NumberFormatInfo_o *)pIVar5,in_R9D,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__Find(pUVar6,"Slider",(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_Slider_GetComponent_Slider);
        puVar1 = &(__this_06->_1).this_arg.bits;
        *(Il2CppObject **)&(__this_06->_1).this_arg.bits = pIVar7;
        il2cpp_runtime_helper_022b4080(puVar1,pIVar7);
        uVar3 = UI_BaseSettingElement__GetSettingType
                          ((UI_BaseSettingElement_o *)__this_06,(Settings_BaseSetting_o *)setting,
                           (MethodInfo *)0x0);
        (__this_06->_1).byval_arg.bits = uVar3;
        if (uVar3 == 3) {
          if (*(UnityEngine_UI_Slider_o **)puVar1 != (UnityEngine_UI_Slider_o *)0x0) {
            UnityEngine_UI_Slider__set_wholeNumbers(*(UnityEngine_UI_Slider_o **)puVar1,0,(MethodInfo *)0x0);
            if (setting != (MethodInfo_33DA550 *)0x0) {
              if (((byte)setting->methodPointer[0x130] < (byte)*(code *)(TypeInfo_FloatSetting + 0x130)) ||
                 (*(long *)(*(long *)(setting->methodPointer + 200) + -8 +
                           (ulong)(byte)*(code *)(TypeInfo_FloatSetting + 0x130) * 8) != TypeInfo_FloatSetting))
              goto label_043975a5;
              if (*(UnityEngine_UI_Slider_o **)puVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                UnityEngine_UI_Slider__set_minValue
                          (*(UnityEngine_UI_Slider_o **)puVar1,*(float *)&setting->name,(MethodInfo *)0x0);
                if (((byte)setting->methodPointer[0x130] < (byte)*(code *)(TypeInfo_FloatSetting + 0x130)) ||
                   (*(long *)(*(long *)(setting->methodPointer + 200) + -8 +
                             (ulong)(byte)*(code *)(TypeInfo_FloatSetting + 0x130) * 8) != TypeInfo_FloatSetting))
                goto label_043975a5;
                __this_07 = *(UnityEngine_UI_Slider_o **)puVar1;
                if (__this_07 != (UnityEngine_UI_Slider_o *)0x0) {
                  value_01 = *(float *)((long)&setting->name + 4);
label_04396e6b:
                  UnityEngine_UI_Slider__set_maxValue(__this_07,value_01,(MethodInfo *)0x0);
                  goto label_04396e72;
                }
              }
            }
          }
        }
        else if (uVar3 == 2) {
          if (*(UnityEngine_UI_Slider_o **)puVar1 != (UnityEngine_UI_Slider_o *)0x0) {
            UnityEngine_UI_Slider__set_wholeNumbers(*(UnityEngine_UI_Slider_o **)puVar1,1,(MethodInfo *)0x0);
            if (setting != (MethodInfo_33DA550 *)0x0) {
              if (((byte)setting->methodPointer[0x130] < (byte)*(code *)(TypeInfo_IntSetting + 0x130)) ||
                 (*(long *)(*(long *)(setting->methodPointer + 200) + -8 +
                           (ulong)(byte)*(code *)(TypeInfo_IntSetting + 0x130) * 8) != TypeInfo_IntSetting))
              goto label_043975a5;
              if (*(UnityEngine_UI_Slider_o **)puVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                UnityEngine_UI_Slider__set_minValue
                          (*(UnityEngine_UI_Slider_o **)puVar1,(float)*(int *)&setting->name,(MethodInfo *)0x0
                          );
                if (((byte)setting->methodPointer[0x130] < (byte)*(code *)(TypeInfo_IntSetting + 0x130)) ||
                   (*(long *)(*(long *)(setting->methodPointer + 200) + -8 +
                             (ulong)(byte)*(code *)(TypeInfo_IntSetting + 0x130) * 8) != TypeInfo_IntSetting))
                goto label_043975a5;
                __this_07 = *(UnityEngine_UI_Slider_o **)puVar1;
                if (__this_07 != (UnityEngine_UI_Slider_o *)0x0) {
                  value_01 = (float)*(int *)((long)&setting->name + 4);
                  goto label_04396e6b;
                }
              }
            }
          }
        }
        else {
label_04396e72:
          if (*(UnityEngine_Component_o **)puVar1 != (UnityEngine_Component_o *)0x0) {
            pIVar7 = UnityEngine_Component__GetComponent_object_
                               (*(UnityEngine_Component_o **)puVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar7 != (Il2CppObject *)0x0) {
              (*pIVar7->klass->vtable[0x24].methodPtr)(uVar13,pIVar7);
              if (*(UnityEngine_Component_o **)puVar1 != (UnityEngine_Component_o *)0x0) {
                pIVar7 = UnityEngine_Component__GetComponent_object_
                                   (*(UnityEngine_Component_o **)puVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar7 != (Il2CppObject *)0x0) {
                  (*pIVar7->klass->vtable[0x26].methodPtr)(in_XMM1_Da,pIVar7);
                  if (*(long *)puVar1 != 0) {
                    __this_00 = *(UnityEngine_Events_UnityEvent_float__o **)(*(long *)puVar1 + 0x128);
                    pUVar8 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_float);
                    UnityEngine_Events_UnityAction_float____ctor();
                    if (__this_00 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
                      UnityEngine_Events_UnityEvent_float___AddListener(__this_00,pUVar8,MethodInfo_Void_AddListener);
                      pUVar6 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                        pUVar6 = UnityEngine_Transform__Find(pUVar6,"InputField",(MethodInfo *)0x0);
                        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                          pIVar5 = (Il2CppClass *)
                                   UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)pUVar6,MethodInfo_InputField_GetComponent_InputField);
                          ppIVar2 = &(__this_06->_1).element_class;
                          (__this_06->_1).element_class = pIVar5;
                          il2cpp_runtime_helper_022b4080(ppIVar2);
                          pIVar5 = (__this_06->_1).element_class;
                          if (pIVar5 != (Il2CppClass *)0x0) {
                            pUVar6 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pIVar5,(MethodInfo *)0x0);
                            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                              pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
                              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                __this_03 = (UnityEngine_UI_Text_o *)
                                            UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
                                if ((style != (MethodInfo_33DA550 *)0x0) &&
                                   (__this_03 != (UnityEngine_UI_Text_o *)0x0)) {
                                  UnityEngine_UI_Text__set_fontSize
                                            (__this_03,
                                             *(int *)&style->invoker_method +
                                             *(int *)&(__this_06->_1).castClass,(MethodInfo *)0x0);
                                  pIVar5 = (__this_06->_1).element_class;
                                  if (pIVar5 != (Il2CppClass *)0x0) {
                                    pIVar7 = UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pIVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                    if (pIVar7 != (Il2CppObject *)0x0) {
                                      (*pIVar7->klass->vtable[0x24].methodPtr)(in_XMM2_Da,pIVar7);
                                      if (*ppIVar2 != (Il2CppClass *)0x0) {
                                        pIVar7 = UnityEngine_Component__GetComponent_object_
                                                           ((UnityEngine_Component_o *)*ppIVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                        if (pIVar7 != (Il2CppObject *)0x0) {
                                          (*pIVar7->klass->vtable[0x26].methodPtr)
                                                    (in_XMM3_Da,pIVar7,pIVar7->klass->vtable[0x26].method);
                                          uVar3 = UI_BaseSettingElement__GetSettingType
                                                            ((UI_BaseSettingElement_o *)__this_06,
                                                             (Settings_BaseSetting_o *)setting,
                                                             (MethodInfo *)0x0);
                                          (__this_06->_1).byval_arg.bits = uVar3;
                                          if (uVar3 == 2) {
                                            pIVar5 = *ppIVar2;
                                            if (pIVar5 != (Il2CppClass *)0x0) {
                                              value_00 = 2;
label_043970c0:
                                              UnityEngine_UI_InputField__set_contentType
                                                        ((UnityEngine_UI_InputField_o *)pIVar5,value_00,
                                                         (MethodInfo *)0x0);
                                              goto label_043970c7;
                                            }
                                          }
                                          else if (uVar3 == 3) {
                                            pIVar5 = *ppIVar2;
                                            if (pIVar5 != (Il2CppClass *)0x0) {
                                              value_00 = 3;
                                              goto label_043970c0;
                                            }
                                          }
                                          else {
label_043970c7:
                                            if (*ppIVar2 != (Il2CppClass *)0x0) {
                                              __this_04 = UnityEngine_UI_InputField__get_onValueChange
                                                                    ((UnityEngine_UI_InputField_o *)*ppIVar2,
                                                                     (MethodInfo *)0x0);
                                              pUVar8 = (UnityEngine_Events_UnityAction_T0__o *)
                                                       il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
                                              UnityEngine_Events_UnityAction_object____ctor();
                                              pMVar12 = style;
                                              if (__this_04 !=
                                                  (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
                                                UnityEngine_Events_UnityEvent_object___AddListener
                                                          ((UnityEngine_Events_UnityEvent_T0__o *)__this_04,
                                                           pUVar8,MethodInfo_Void_AddListener);
                                                pMVar12 = style;
                                                if (*ppIVar2 != (Il2CppClass *)0x0) {
                                                  __this_01 = (*ppIVar2)->vtable[0].method;
                                                  pUVar8 = (UnityEngine_Events_UnityAction_T0__o *)
                                                           il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
                                                  UnityEngine_Events_UnityAction_object____ctor();
                                                  pMVar12 = style;
                                                  if (__this_01 != (MethodInfo *)0x0) {
                                                    UnityEngine_Events_UnityEvent_object___AddListener
                                                              ((UnityEngine_Events_UnityEvent_T0__o *)
                                                               __this_01,pUVar8,MethodInfo_Void_AddListener);
                                                    UI_BaseSettingElement__Setup
                                                              ((UI_BaseSettingElement_o *)__this_06,
                                                               (Settings_BaseSetting_o *)setting,
                                                               (UI_ElementStyle_o *)style,in_RCX,in_R8,
                                                               (MethodInfo *)0x0);
                                                    __this_02 = *(UnityEngine_Component_o **)
                                                                 &(__this_06->_1).this_arg.bits;
                                                    pMVar12 = style;
                                                    if (__this_02 != (UnityEngine_Component_o *)0x0) {
                                                      pUVar6 = UnityEngine_Component__get_transform
                                                                         (__this_02,(MethodInfo *)0x0);
                                                      pMVar12 = style;
                                                      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                        pUVar6 = UnityEngine_Transform__Find
                                                                           (pUVar6,"Background",
                                                                            (MethodInfo *)0x0);
                                                        pMVar12 = style;
                                                        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                          pIVar7 = UnityEngine_Component__GetComponent_object_
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar6,MethodInfo_Image_GetComponent_Image);
                                                          panel = (System_String_o *)style->name;
                                                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                            il2cpp_runtime_helper_02337ed0();
                                                          }
                                                          UVar14 = UI_UIManager__GetThemeColor
                                                                             (panel,"DefaultSetting","SliderBackgroundColor",
                                                                              "DefaultPanel",(MethodInfo *)0x0);
                                                          pMVar12 = style;
                                                          if (pIVar7 != (Il2CppObject *)0x0) {
                                                            (*pIVar7->klass->vtable[0x17].methodPtr)
                                                                      (UVar14.fields.r,UVar14.fields.b,pIVar7)
                                                            ;
                                                            pMVar12 = (MethodInfo_33DA550 *)ppIVar2;
                                                            if (*(UnityEngine_Component_o **)puVar1 !=
                                                                (UnityEngine_Component_o *)0x0) {
                                                              pUVar6 = UnityEngine_Component__get_transform
                                                                                 (*(UnityEngine_Component_o **
                                                                                   )puVar1,(MethodInfo *)0x0);
                                                              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                                pUVar6 = UnityEngine_Transform__Find
                                                                                   (pUVar6,"Fill Area/Fill",
                                                                                    (MethodInfo *)0x0);
                                                                if (pUVar6 != (UnityEngine_Transform_o *)0x0)
                                                                {
                                                                  pIVar7 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar6,
                                                                  MethodInfo_Image_GetComponent_Image);
                                                       UVar14 = UI_UIManager__GetThemeColor
                                                                          ((System_String_o *)style->name,
                                                                           "DefaultSetting","SliderFillColor",
                                                                           "DefaultPanel",(MethodInfo *)0x0);
                                                       if (pIVar7 != (Il2CppObject *)0x0) {
                                                         (*pIVar7->klass->vtable[0x17].methodPtr)
                                                                   (UVar14.fields.r,UVar14.fields.b,pIVar7);
                                                         if (*(UnityEngine_Component_o **)puVar1 !=
                                                             (UnityEngine_Component_o *)0x0) {
                                                           pUVar6 = UnityEngine_Component__get_transform
                                                                              (*(UnityEngine_Component_o **)
                                                                                puVar1,(MethodInfo *)0x0);
                                                           if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar6 = UnityEngine_Transform__Find
                                                                                (pUVar6,"Handle Slide Area/Handle",
                                                                                 (MethodInfo *)0x0);
                                                             if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                               pIVar7 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar6,
                                                                  MethodInfo_Image_GetComponent_Image);
                                                       UVar14 = UI_UIManager__GetThemeColor
                                                                          ((System_String_o *)style->name,
                                                                           "DefaultSetting","SliderHandleColor",
                                                                           "DefaultPanel",(MethodInfo *)0x0);
                                                       if (pIVar7 != (Il2CppObject *)0x0) {
                                                         (*pIVar7->klass->vtable[0x17].methodPtr)
                                                                   (UVar14.fields.r,UVar14.fields.b,pIVar7,
                                                                    pIVar7->klass->vtable[0x17].method);
                                                         pIVar5 = *ppIVar2;
                                                         UI_UIManager__GetThemeColorBlock
                                                                   (&UStack_a0,(System_String_o *)style->name,
                                                                    "DefaultSetting","Input","DefaultPanel",
                                                                    (MethodInfo *)0x0);
                                                         if (pIVar5 != (Il2CppClass *)0x0) {
                                                           value.fields.m_NormalColor.fields.b =
                                                                UStack_a0.fields.m_NormalColor.fields.b;
                                                           value.fields.m_NormalColor.fields.a =
                                                                UStack_a0.fields.m_NormalColor.fields.a;
                                                           value.fields.m_NormalColor.fields.r =
                                                                UStack_a0.fields.m_NormalColor.fields.r;
                                                           value.fields.m_NormalColor.fields.g =
                                                                UStack_a0.fields.m_NormalColor.fields.g;
                                                           value.fields.m_HighlightedColor.fields.r =
                                                                UStack_a0.fields.m_HighlightedColor.fields.r;
                                                           value.fields.m_HighlightedColor.fields.g =
                                                                UStack_a0.fields.m_HighlightedColor.fields.g;
                                                           value.fields.m_HighlightedColor.fields.b =
                                                                UStack_a0.fields.m_HighlightedColor.fields.b;
                                                           value.fields.m_HighlightedColor.fields.a =
                                                                UStack_a0.fields.m_HighlightedColor.fields.a;
                                                           value.fields.m_PressedColor.fields.r =
                                                                UStack_a0.fields.m_PressedColor.fields.r;
                                                           value.fields.m_PressedColor.fields.g =
                                                                UStack_a0.fields.m_PressedColor.fields.g;
                                                           value.fields.m_PressedColor.fields.b =
                                                                UStack_a0.fields.m_PressedColor.fields.b;
                                                           value.fields.m_PressedColor.fields.a =
                                                                UStack_a0.fields.m_PressedColor.fields.a;
                                                           value.fields.m_SelectedColor.fields.r =
                                                                UStack_a0.fields.m_SelectedColor.fields.r;
                                                           value.fields.m_SelectedColor.fields.g =
                                                                UStack_a0.fields.m_SelectedColor.fields.g;
                                                           value.fields.m_SelectedColor.fields.b =
                                                                UStack_a0.fields.m_SelectedColor.fields.b;
                                                           value.fields.m_SelectedColor.fields.a =
                                                                UStack_a0.fields.m_SelectedColor.fields.a;
                                                           value.fields.m_DisabledColor.fields.r =
                                                                UStack_a0.fields.m_DisabledColor.fields.r;
                                                           value.fields.m_DisabledColor.fields.g =
                                                                UStack_a0.fields.m_DisabledColor.fields.g;
                                                           value.fields.m_DisabledColor.fields.b =
                                                                UStack_a0.fields.m_DisabledColor.fields.b;
                                                           value.fields.m_DisabledColor.fields.a =
                                                                UStack_a0.fields.m_DisabledColor.fields.a;
                                                           value.fields.m_ColorMultiplier =
                                                                UStack_a0.fields.m_ColorMultiplier;
                                                           value.fields.m_FadeDuration =
                                                                UStack_a0.fields.m_FadeDuration;
                                                           UnityEngine_UI_Selectable__set_colors
                                                                     ((UnityEngine_UI_Selectable_o *)pIVar5,
                                                                      value,(MethodInfo *)0x0);
                                                           if (*ppIVar2 != (Il2CppClass *)0x0) {
                                                             pUVar6 = UnityEngine_Component__get_transform
                                                                                ((UnityEngine_Component_o *)
                                                                                 *ppIVar2,(MethodInfo *)0x0);
                                                             if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                               pUVar6 = UnityEngine_Transform__Find
                                                                                  (pUVar6,"Text",
                                                                                   (MethodInfo *)0x0);
                                                               if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                                 pIVar7 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar6,
                                                                  MethodInfo_Text_GetComponent_Text);
                                                       UVar14 = UI_UIManager__GetThemeColor
                                                                          ((System_String_o *)style->name,
                                                                           "DefaultSetting","InputTextColor",
                                                                           "DefaultPanel",(MethodInfo *)0x0);
                                                       if (pIVar7 != (Il2CppObject *)0x0) {
                                                         (*pIVar7->klass->vtable[0x17].methodPtr)
                                                                   (UVar14.fields.r,UVar14.fields.b,pIVar7,
                                                                    pIVar7->klass->vtable[0x17].method);
                                                         pIVar5 = *ppIVar2;
                                                         UVar14 = UI_UIManager__GetThemeColor
                                                                            ((System_String_o *)style->name,
                                                                             "DefaultSetting","InputSelectionColor",
                                                                             "DefaultPanel",(MethodInfo *)0x0);
                                                         if (pIVar5 != (Il2CppClass *)0x0) {
                                                           UnityEngine_UI_InputField__set_selectionColor
                                                                     ((UnityEngine_UI_InputField_o *)pIVar5,
                                                                      UVar14,(MethodInfo *)0x0);
                                                           if (g_data_057ae2d5 == '\0') {
                                                             il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFixInputField_d__9);
                                                             g_data_057ae2d5 = '\x01';
                                                           }
                                                           pIVar7 = (Il2CppObject *)
                                                                    il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFixInputField_d__9);
                                                           System_Object___ctor(pIVar7,(MethodInfo *)0x0);
                                                           *(undefined4 *)&pIVar7[1].klass = 0;
                                                           if (pIVar7 != (Il2CppObject *)0x0) {
                                                             pIVar7[2].klass = __this_06;
                                                             il2cpp_runtime_helper_022b4080(pIVar7 + 2,__this_06);
                                                             pSVar9 = (
                                                       System_Collections_Generic_HashSet_SettingType__o *)
                                                       UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                                                 ((UnityEngine_MonoBehaviour_o *)__this_06,
                                                                  (System_Collections_IEnumerator_o *)pIVar7,
                                                                  (MethodInfo *)0x0);
                                                       return pSVar9;
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
  il2cpp_runtime_helper_022b2c90();
  setting = pMVar12;
label_043975a5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae2d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFixInputField_d__9);
    g_data_057ae2d5 = '\x01';
  }
  __this_05 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFixInputField_d__9);
  pSVar9 = __this_05;
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_05->fields)._buckets = 0;
  if (__this_05 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    *(MethodInfo_33DA550 **)&(__this_05->fields)._count = setting;
    il2cpp_runtime_helper_022b4080(&(__this_05->fields)._count,setting);
    return __this_05;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2d4 = '\x01';
  }
  pSVar11 = (pSVar9->fields)._siInfo;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 != '\0') && (*(char *)&pSVar9[1].fields._buckets == '\0')) {
    pSVar11 = (pSVar9->fields)._siInfo;
    if (pSVar11 != (System_Runtime_Serialization_SerializationInfo_o *)0x0) {
      uVar13 = 0;
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        uVar13 = 0;
        UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
        pSVar11 = (pSVar9->fields)._siInfo;
        if (pSVar11 != (System_Runtime_Serialization_SerializationInfo_o *)0x0) {
          uVar13 = 0;
          pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar10,1,(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    *(undefined4 *)&(pSVar11->fields).m_members = uVar13;
    return extraout_RAX_00;
  }
  return (System_Collections_Generic_HashSet_SettingType__o *)CONCAT44(extraout_var,bVar4);
}


// UI.SliderInputSettingElement$$Setup
// il2cpp: void UI_SliderInputSettingElement__Setup (UI_SliderInputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x4396a90

void UI_SliderInputSettingElement__Setup
               (UI_SliderInputSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *tooltip,float sliderWidth,
               float sliderHeight,float inputWidth,float inputHeight,int32_t decimalPlaces,MethodInfo *method)

{
  UnityEngine_UI_Slider_o **ppUVar1;
  UnityEngine_UI_InputField_o **ppUVar2;
  byte bVar3;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  UnityEngine_UI_InputField_SubmitEvent_o *__this_01;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  int32_t iVar4;
  bool_conflict bVar5;
  System_Globalization_NumberFormatInfo_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Slider_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_T0__o *pUVar10;
  UnityEngine_UI_InputField_o *pUVar11;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_03;
  Il2CppObject *__this_04;
  UnityEngine_GameObject_o *pUVar12;
  undefined4 uVar13;
  Il2CppClass *pIVar14;
  float value_00;
  UnityEngine_Color_o UVar15;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (g_data_057ae2d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NumberFormatInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__7_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"SliderBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"Input");
    il2cpp_runtime_helper_023445d0(&"Handle Slide Area/Handle");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"InputTextColor");
    il2cpp_runtime_helper_023445d0(&"Slider");
    il2cpp_runtime_helper_023445d0(&"SliderHandleColor");
    il2cpp_runtime_helper_023445d0(&"InputSelectionColor");
    il2cpp_runtime_helper_023445d0(&"SliderFillColor");
    g_data_057ae2d3 = '\x01';
  }
  pSVar6 = (System_Globalization_NumberFormatInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NumberFormatInfo);
  System_Globalization_NumberFormatInfo___ctor(pSVar6,(MethodInfo *)0x0);
  (__this->fields)._formatInfo = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._formatInfo);
  pSVar6 = (__this->fields)._formatInfo;
  pIVar14 = (Il2CppClass *)setting;
  if (pSVar6 != (System_Globalization_NumberFormatInfo_o *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberDecimalDigits(pSVar6,decimalPlaces,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Slider",(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = (UnityEngine_UI_Slider_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Slider_GetComponent_Slider);
        ppUVar1 = &(__this->fields)._slider;
        (__this->fields)._slider = pUVar8;
        il2cpp_runtime_helper_022b4080(ppUVar1,pUVar8);
        iVar4 = UI_BaseSettingElement__GetSettingType
                          ((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0);
        (__this->fields)._settingType = iVar4;
        if (iVar4 == 3) {
          if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
            UnityEngine_UI_Slider__set_wholeNumbers(*ppUVar1,0,(MethodInfo *)0x0);
            if (setting != (Settings_BaseSetting_o *)0x0) {
              bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar3) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_FloatSetting)) goto label_043975a5;
              if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                UnityEngine_UI_Slider__set_minValue(*ppUVar1,*(float *)&setting[1].monitor,(MethodInfo *)0x0);
                bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment;
                if (((setting->klass->_2).naturalAligment < bVar3) ||
                   ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_FloatSetting)) goto label_043975a5;
                pUVar8 = *ppUVar1;
                if (pUVar8 != (UnityEngine_UI_Slider_o *)0x0) {
                  value_00 = *(float *)((long)&setting[1].monitor + 4);
label_04396e6b:
                  UnityEngine_UI_Slider__set_maxValue(pUVar8,value_00,(MethodInfo *)0x0);
                  goto label_04396e72;
                }
              }
            }
          }
        }
        else if (iVar4 == 2) {
          if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
            UnityEngine_UI_Slider__set_wholeNumbers(*ppUVar1,1,(MethodInfo *)0x0);
            if (setting != (Settings_BaseSetting_o *)0x0) {
              bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar3) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto label_043975a5;
              if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                UnityEngine_UI_Slider__set_minValue
                          (*ppUVar1,(float)*(int *)&setting[1].monitor,(MethodInfo *)0x0);
                bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
                if (((setting->klass->_2).naturalAligment < bVar3) ||
                   ((setting->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting)) goto label_043975a5;
                pUVar8 = *ppUVar1;
                if (pUVar8 != (UnityEngine_UI_Slider_o *)0x0) {
                  value_00 = (float)*(int *)((long)&setting[1].monitor + 4);
                  goto label_04396e6b;
                }
              }
            }
          }
        }
        else {
label_04396e72:
          if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
            pIVar9 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar9 != (Il2CppObject *)0x0) {
              (*pIVar9->klass->vtable[0x24].methodPtr)(sliderWidth,pIVar9);
              if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                pIVar9 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar9 != (Il2CppObject *)0x0) {
                  (*pIVar9->klass->vtable[0x26].methodPtr)(sliderHeight,pIVar9);
                  if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    __this_00 = *(UnityEngine_Events_UnityEvent_float__o **)&((*ppUVar1)->fields).m_Value;
                    pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_float);
                    UnityEngine_Events_UnityAction_float____ctor();
                    if (__this_00 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
                      UnityEngine_Events_UnityEvent_float___AddListener(__this_00,pUVar10,MethodInfo_Void_AddListener);
                      pUVar7 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                        pUVar7 = UnityEngine_Transform__Find(pUVar7,"InputField",(MethodInfo *)0x0);
                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                          pUVar11 = (UnityEngine_UI_InputField_o *)
                                    UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar7,MethodInfo_InputField_GetComponent_InputField);
                          ppUVar2 = &(__this->fields)._inputField;
                          (__this->fields)._inputField = pUVar11;
                          il2cpp_runtime_helper_022b4080(ppUVar2);
                          pUVar11 = (__this->fields)._inputField;
                          if (pUVar11 != (UnityEngine_UI_InputField_o *)0x0) {
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                              pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                __this_02 = (UnityEngine_UI_Text_o *)
                                            UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
                                if ((style != (UI_ElementStyle_o *)0x0) &&
                                   (__this_02 != (UnityEngine_UI_Text_o *)0x0)) {
                                  UnityEngine_UI_Text__set_fontSize
                                            (__this_02,
                                             (style->fields).FontSize + (__this->fields)._inputFontSizeOffset,
                                             (MethodInfo *)0x0);
                                  pUVar11 = (__this->fields)._inputField;
                                  if (pUVar11 != (UnityEngine_UI_InputField_o *)0x0) {
                                    pIVar9 = UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                    if (pIVar9 != (Il2CppObject *)0x0) {
                                      (*pIVar9->klass->vtable[0x24].methodPtr)(inputWidth,pIVar9);
                                      if (*ppUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
                                        pIVar9 = UnityEngine_Component__GetComponent_object_
                                                           ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                        if (pIVar9 != (Il2CppObject *)0x0) {
                                          (*pIVar9->klass->vtable[0x26].methodPtr)
                                                    (inputHeight,pIVar9,pIVar9->klass->vtable[0x26].method);
                                          iVar4 = UI_BaseSettingElement__GetSettingType
                                                            ((UI_BaseSettingElement_o *)__this,setting,
                                                             (MethodInfo *)0x0);
                                          (__this->fields)._settingType = iVar4;
                                          if (iVar4 == 2) {
                                            pUVar11 = *ppUVar2;
                                            if (pUVar11 != (UnityEngine_UI_InputField_o *)0x0) {
                                              iVar4 = 2;
label_043970c0:
                                              UnityEngine_UI_InputField__set_contentType
                                                        (pUVar11,iVar4,(MethodInfo *)0x0);
                                              goto label_043970c7;
                                            }
                                          }
                                          else if (iVar4 == 3) {
                                            pUVar11 = *ppUVar2;
                                            if (pUVar11 != (UnityEngine_UI_InputField_o *)0x0) {
                                              iVar4 = 3;
                                              goto label_043970c0;
                                            }
                                          }
                                          else {
label_043970c7:
                                            if (*ppUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
                                              __this_03 = UnityEngine_UI_InputField__get_onValueChange
                                                                    (*ppUVar2,(MethodInfo *)0x0);
                                              pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)
                                                        il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
                                              UnityEngine_Events_UnityAction_object____ctor();
                                              pIVar14 = (Il2CppClass *)style;
                                              if (__this_03 !=
                                                  (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
                                                UnityEngine_Events_UnityEvent_object___AddListener
                                                          ((UnityEngine_Events_UnityEvent_T0__o *)__this_03,
                                                           pUVar10,MethodInfo_Void_AddListener);
                                                pIVar14 = (Il2CppClass *)style;
                                                if (*ppUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
                                                  __this_01 = ((*ppUVar2)->fields).m_OnSubmit;
                                                  pUVar10 = (UnityEngine_Events_UnityAction_T0__o *)
                                                            il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
                                                  UnityEngine_Events_UnityAction_object____ctor();
                                                  pIVar14 = (Il2CppClass *)style;
                                                  if (__this_01 !=
                                                      (UnityEngine_UI_InputField_SubmitEvent_o *)0x0) {
                                                    UnityEngine_Events_UnityEvent_object___AddListener
                                                              ((UnityEngine_Events_UnityEvent_T0__o *)
                                                               __this_01,pUVar10,MethodInfo_Void_AddListener);
                                                    UI_BaseSettingElement__Setup
                                                              ((UI_BaseSettingElement_o *)__this,setting,style
                                                               ,title,tooltip,(MethodInfo *)0x0);
                                                    pUVar8 = (__this->fields)._slider;
                                                    pIVar14 = (Il2CppClass *)style;
                                                    if (pUVar8 != (UnityEngine_UI_Slider_o *)0x0) {
                                                      pUVar7 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *)pUVar8,
                                                                          (MethodInfo *)0x0);
                                                      pIVar14 = (Il2CppClass *)style;
                                                      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                        pUVar7 = UnityEngine_Transform__Find
                                                                           (pUVar7,"Background",
                                                                            (MethodInfo *)0x0);
                                                        pIVar14 = (Il2CppClass *)style;
                                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                          pIVar9 = UnityEngine_Component__GetComponent_object_
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar7,MethodInfo_Image_GetComponent_Image);
                                                          panel = (style->fields).ThemePanel;
                                                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                            il2cpp_runtime_helper_02337ed0();
                                                          }
                                                          UVar15 = UI_UIManager__GetThemeColor
                                                                             (panel,"DefaultSetting","SliderBackgroundColor",
                                                                              "DefaultPanel",(MethodInfo *)0x0);
                                                          pIVar14 = (Il2CppClass *)style;
                                                          if (pIVar9 != (Il2CppObject *)0x0) {
                                                            (*pIVar9->klass->vtable[0x17].methodPtr)
                                                                      (UVar15.fields.r,UVar15.fields.b,pIVar9)
                                                            ;
                                                            pIVar14 = (Il2CppClass *)ppUVar2;
                                                            if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                                                              pUVar7 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  *ppUVar1,(MethodInfo *)0x0);
                                                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                                pUVar7 = UnityEngine_Transform__Find
                                                                                   (pUVar7,"Fill Area/Fill",
                                                                                    (MethodInfo *)0x0);
                                                                if (pUVar7 != (UnityEngine_Transform_o *)0x0)
                                                                {
                                                                  pIVar9 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar7,
                                                                  MethodInfo_Image_GetComponent_Image);
                                                       UVar15 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting","SliderFillColor",
                                                                           "DefaultPanel",(MethodInfo *)0x0);
                                                       if (pIVar9 != (Il2CppObject *)0x0) {
                                                         (*pIVar9->klass->vtable[0x17].methodPtr)
                                                                   (UVar15.fields.r,UVar15.fields.b,pIVar9);
                                                         if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                                                           pUVar7 = UnityEngine_Component__get_transform
                                                                              ((UnityEngine_Component_o *)
                                                                               *ppUVar1,(MethodInfo *)0x0);
                                                           if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar7 = UnityEngine_Transform__Find
                                                                                (pUVar7,"Handle Slide Area/Handle",
                                                                                 (MethodInfo *)0x0);
                                                             if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                               pIVar9 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar7,
                                                                  MethodInfo_Image_GetComponent_Image);
                                                       UVar15 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting","SliderHandleColor",
                                                                           "DefaultPanel",(MethodInfo *)0x0);
                                                       if (pIVar9 != (Il2CppObject *)0x0) {
                                                         (*pIVar9->klass->vtable[0x17].methodPtr)
                                                                   (UVar15.fields.r,UVar15.fields.b,pIVar9,
                                                                    pIVar9->klass->vtable[0x17].method);
                                                         pUVar11 = *ppUVar2;
                                                         UI_UIManager__GetThemeColorBlock
                                                                   (&local_88,(style->fields).ThemePanel,
                                                                    "DefaultSetting","Input","DefaultPanel",
                                                                    (MethodInfo *)0x0);
                                                         if (pUVar11 != (UnityEngine_UI_InputField_o *)0x0) {
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
                                                           value.fields.m_FadeDuration =
                                                                local_88.fields.m_FadeDuration;
                                                           UnityEngine_UI_Selectable__set_colors
                                                                     ((UnityEngine_UI_Selectable_o *)pUVar11,
                                                                      value,(MethodInfo *)0x0);
                                                           if (*ppUVar2 != (UnityEngine_UI_InputField_o *)0x0)
                                                           {
                                                             pUVar7 = UnityEngine_Component__get_transform
                                                                                ((UnityEngine_Component_o *)
                                                                                 *ppUVar2,(MethodInfo *)0x0);
                                                             if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                               pUVar7 = UnityEngine_Transform__Find
                                                                                  (pUVar7,"Text",
                                                                                   (MethodInfo *)0x0);
                                                               if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                                 pIVar9 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar7,
                                                                  MethodInfo_Text_GetComponent_Text);
                                                       UVar15 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting","InputTextColor",
                                                                           "DefaultPanel",(MethodInfo *)0x0);
                                                       if (pIVar9 != (Il2CppObject *)0x0) {
                                                         (*pIVar9->klass->vtable[0x17].methodPtr)
                                                                   (UVar15.fields.r,UVar15.fields.b,pIVar9,
                                                                    pIVar9->klass->vtable[0x17].method);
                                                         pUVar11 = *ppUVar2;
                                                         UVar15 = UI_UIManager__GetThemeColor
                                                                            ((style->fields).ThemePanel,
                                                                             "DefaultSetting","InputSelectionColor",
                                                                             "DefaultPanel",(MethodInfo *)0x0);
                                                         if (pUVar11 != (UnityEngine_UI_InputField_o *)0x0) {
                                                           UnityEngine_UI_InputField__set_selectionColor
                                                                     (pUVar11,UVar15,(MethodInfo *)0x0);
                                                           if (g_data_057ae2d5 == '\0') {
                                                             il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFixInputField_d__9);
                                                             g_data_057ae2d5 = '\x01';
                                                           }
                                                           pIVar9 = (Il2CppObject *)
                                                                    il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFixInputField_d__9);
                                                           System_Object___ctor(pIVar9,(MethodInfo *)0x0);
                                                           *(undefined4 *)&pIVar9[1].klass = 0;
                                                           if (pIVar9 != (Il2CppObject *)0x0) {
                                                             pIVar9[2].klass = (Il2CppClass *)__this;
                                                             il2cpp_runtime_helper_022b4080(pIVar9 + 2,__this);
                                                             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                                                       ((UnityEngine_MonoBehaviour_o *)__this,
                                                                        (System_Collections_IEnumerator_o *)
                                                                        pIVar9,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  setting = (Settings_BaseSetting_o *)pIVar14;
label_043975a5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae2d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFixInputField_d__9);
    g_data_057ae2d5 = '\x01';
  }
  __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFixInputField_d__9);
  pIVar9 = __this_04;
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  *(undefined4 *)&__this_04[1].klass = 0;
  if (__this_04 != (Il2CppObject *)0x0) {
    __this_04[2].klass = (Il2CppClass *)setting;
    il2cpp_runtime_helper_022b4080(__this_04 + 2,setting);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2d4 = '\x01';
  }
  pIVar14 = pIVar9[4].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = 0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar5 != '\0') && (*(char *)&pIVar9[5].monitor == '\0')) {
    pIVar14 = pIVar9[4].klass;
    if (pIVar14 != (Il2CppClass *)0x0) {
      uVar13 = 0;
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        uVar13 = 0;
        UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
        pIVar14 = pIVar9[4].klass;
        if (pIVar14 != (Il2CppClass *)0x0) {
          uVar13 = 0;
          pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar14,(MethodInfo *)0x0);
    *(undefined4 *)&((UnityEngine_Component_Fields *)&(pIVar14->_1).name)->m_CachedPtr = uVar13;
    return;
  }
  return;
}


// UI.SliderInputSettingElement$$OnEnable
// il2cpp: void UI_SliderInputSettingElement__OnEnable (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4397620

void UI_SliderInputSettingElement__OnEnable(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  undefined4 uVar3;
  UnityEngine_UI_InputField_o *pUVar4;
  
  if (g_data_057ae2d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2d4 = '\x01';
  }
  pUVar4 = (__this->fields)._inputField;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = 0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && ((char)(__this->fields)._fixedInputField == '\0')) {
    pUVar4 = (__this->fields)._inputField;
    if (pUVar4 != (UnityEngine_UI_InputField_o *)0x0) {
      uVar3 = 0;
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        uVar3 = 0;
        UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._inputField;
        if (pUVar4 != (UnityEngine_UI_InputField_o *)0x0) {
          uVar3 = 0;
          pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar4->fields).m_CachedPtr = uVar3;
    return;
  }
  return;
}


// UI.SliderInputSettingElement$$WaitAndFixInputField
// il2cpp: System_Collections_IEnumerator_o* UI_SliderInputSettingElement__WaitAndFixInputField (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x43975b0

System_Collections_IEnumerator_o *
UI_SliderInputSettingElement__WaitAndFixInputField(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  undefined4 extraout_var;
  UnityEngine_GameObject_o *pUVar2;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  
  if (g_data_057ae2d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFixInputField_d__9);
    g_data_057ae2d5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFixInputField_d__9);
  pIVar4 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2d4 = '\x01';
  }
  pIVar5 = pIVar4[4].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = 0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && (*(char *)&pIVar4[5].monitor == '\0')) {
    pIVar5 = pIVar4[4].klass;
    if (pIVar5 != (Il2CppClass *)0x0) {
      uVar3 = 0;
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar5,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        uVar3 = 0;
        UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
        pIVar5 = pIVar4[4].klass;
        if (pIVar5 != (Il2CppClass *)0x0) {
          uVar3 = 0;
          pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar5,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar5,(MethodInfo *)0x0);
    *(undefined4 *)&((UnityEngine_Component_Fields *)&(pIVar5->_1).name)->m_CachedPtr = uVar3;
    return extraout_RAX_00;
  }
  return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar1);
}


// UI.SliderInputSettingElement$$OnSliderValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnSliderValueChanged (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x43976f0

void UI_SliderInputSettingElement__OnSliderValueChanged
               (UI_SliderInputSettingElement_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  Il2CppClass *pIVar2;
  UnityEngine_UI_InputField_o *__this_00;
  UnityEngine_UI_Slider_o *pUVar3;
  void *pvVar4;
  bool_conflict bVar5;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  ulong uVar6;
  Il2CppObject *arg0;
  System_String_o *pSVar7;
  undefined8 uVar8;
  UI_SliderInputSettingElement_o *unaff_RBX;
  System_Int32_array *pSVar9;
  System_Int32_array *pSVar10;
  undefined8 unaff_R14;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 local_18 [12];
  float local_c;
  
  if (g_data_057ae2d6 == '\0') {
    local_c = value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2d6 = '\x01';
    value = local_c;
  }
  uVar11 = (__this->fields)._settingType;
  uVar6 = (ulong)uVar11;
  if (uVar11 == 2) {
    pSVar9 = (System_Int32_array *)(__this->fields)._setting;
    if (pSVar9 != (System_Int32_array *)0x0) {
      pIVar2 = (pSVar9->obj).klass;
      method = (MethodInfo *)TypeInfo_IntSetting;
      if ((*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) <= (pIVar2->_2).naturalAligment) &&
         ((System_Int32_array *)
          (pIVar2->_2).typeHierarchy[(ulong)*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) - 1] ==
          TypeInfo_IntSetting)) {
        method = (MethodInfo *)(ulong)(uint)(int)value;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar9,(int)value,MethodInfo_Void_set_Value);
        uVar6 = extraout_RAX_00;
        goto UI_SliderInputSettingElement__SyncInput;
      }
label_043977f1:
      il2cpp_runtime_helper_022b2fd0();
    }
label_043977f6:
    uVar6 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)local_18;
    __this = (UI_SliderInputSettingElement_o *)pSVar9;
  }
  else if (uVar11 == 3) {
    pSVar9 = (System_Int32_array *)(__this->fields)._setting;
    if (pSVar9 == (System_Int32_array *)0x0) goto label_043977f6;
    pIVar2 = (pSVar9->obj).klass;
    method = (MethodInfo *)TypeInfo_FloatSetting;
    if (((pIVar2->_2).naturalAligment < *(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11)) ||
       ((System_Int32_array *)
        (pIVar2->_2).typeHierarchy[(ulong)*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) - 1] !=
        TypeInfo_FloatSetting)) goto label_043977f1;
    method = (MethodInfo *)MethodInfo_Void_set_Value;
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar9,value,(MethodInfo_2A241B0 *)MethodInfo_Void_set_Value);
    uVar6 = extraout_RAX;
  }
UI_SliderInputSettingElement__SyncInput:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
  *(UI_SliderInputSettingElement_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  pSVar9 = (System_Int32_array *)((long)register0x00000020 + -0x18);
  *(ulong *)((long)register0x00000020 + -0x18) = uVar6;
  if (g_data_057ae2d9 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439781c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4397828;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4397834;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4397840;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439784c;
    il2cpp_runtime_helper_023445d0(&"{0:N}");
    g_data_057ae2d9 = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0x18) = 0;
  if (*(int32_t *)((long)((System_Int32_array *)__this)->m_Items + 8) == 2) {
    pSVar10 = *(System_Int32_array **)((System_Int32_array *)__this)->m_Items;
    if (pSVar10 != (System_Int32_array *)0x0) {
      pIVar2 = (pSVar10->obj).klass;
      method = (MethodInfo *)TypeInfo_IntSetting;
      if (((pIVar2->_2).naturalAligment < *(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11)) ||
         ((System_Int32_array *)
          (pIVar2->_2).typeHierarchy[(ulong)*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) - 1] !=
          TypeInfo_IntSetting)) goto label_04397954;
      __this_00 = *(UnityEngine_UI_InputField_o **)(((System_Int32_array *)__this)->m_Items + 8);
      *(float *)((long)register0x00000020 + -0x18) =
           *(float *)((long)&((System_Globalization_NumberFormatInfo_Fields *)&pSVar10->bounds)->
                             numberGroupSizes + 4);
      method = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439793a;
      pSVar7 = System_Int32__ToString
                         ((int32_t)(undefined1 *)((long)register0x00000020 + -0x18),(MethodInfo *)0x0);
      __this = (UI_SliderInputSettingElement_o *)0x0;
      pSVar10 = pSVar9;
joined_r0x0439793d:
      if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439794c;
        UnityEngine_UI_InputField__set_text(__this_00,pSVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (*(int32_t *)((long)((System_Int32_array *)__this)->m_Items + 8) != 3) {
      return;
    }
    pSVar10 = *(System_Int32_array **)((System_Int32_array *)__this)->m_Items;
    if (pSVar10 != (System_Int32_array *)0x0) {
      pIVar2 = (pSVar10->obj).klass;
      method = (MethodInfo *)TypeInfo_FloatSetting;
      if ((*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) <= (pIVar2->_2).naturalAligment) &&
         ((System_Int32_array *)
          (pIVar2->_2).typeHierarchy[(ulong)*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) - 1] ==
          TypeInfo_FloatSetting)) {
        __this_00 = *(UnityEngine_UI_InputField_o **)((long)((System_Int32_array *)__this)->m_Items + 0x20);
        __this = *(UI_SliderInputSettingElement_o **)((long)((System_Int32_array *)__this)->m_Items + 0x30);
        *(float *)((long)register0x00000020 + -0x14) =
             *(float *)((long)&((System_Globalization_NumberFormatInfo_Fields *)&pSVar10->bounds)->
                               numberGroupSizes + 4);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43978d2;
        arg0 = (Il2CppObject *)
               il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)register0x00000020 + -0x14));
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43978e9;
        method = (MethodInfo *)"{0:N}";
        pSVar10 = (System_Int32_array *)__this;
        pSVar7 = System_String__Format_3af7a30
                           ((System_IFormatProvider_o *)__this,(System_String_o *)"{0:N}",arg0,
                            (MethodInfo *)0x0);
        unaff_R14 = 0;
        goto joined_r0x0439793d;
      }
label_04397954:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4397959;
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439795e;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R14;
  *(UI_SliderInputSettingElement_o **)((long)register0x00000020 + -0x28) = __this;
  *(undefined8 *)((long)register0x00000020 + -0x30) = uVar8;
  if (g_data_057ae2d7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x439797f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x439798b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4397997;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x43979a3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2d7 = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0x2c) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x30) = 0;
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x43979db;
  bVar5 = System_String__op_Equality((System_String_o *)method,pSVar7,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)((long)pSVar10->m_Items + 8) == 2) {
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4397aa8;
    bVar5 = System_Int32__TryParse
                      ((System_String_o *)method,(int32_t *)((long)register0x00000020 + -0x30),
                       (MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar3 = *(UnityEngine_UI_Slider_o **)((long)pSVar10->m_Items + 0x18);
    if ((pUVar3 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = *(MethodInfo **)pSVar10->m_Items, (System_Int32_array *)method != (System_Int32_array *)0x0))
    {
      pvVar4 = ((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image;
      if ((*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) <= *(byte *)((long)pvVar4 + 0x130)) &&
         (*(System_Int32_array **)
           (*(long *)((long)pvVar4 + 200) + -8 +
           (ulong)*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) * 8) == TypeInfo_IntSetting)) {
        fVar1 = *(float *)((long)&(pUVar3->fields).m_HandleRect + 4);
        fVar12 = (float)(pUVar3->fields).m_Direction;
        fVar13 = (float)*(int *)((long)register0x00000020 + -0x30);
        if (fVar13 <= fVar12) {
          fVar12 = fVar13;
        }
        uVar11 = -(uint)(fVar1 <= fVar13);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4397b22;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)method,
                   (int)(float)(~uVar11 & (uint)fVar1 | (uint)fVar12 & uVar11),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  else {
    if (*(int *)((long)pSVar10->m_Items + 8) != 3) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4397a08;
    bVar5 = System_Single__TryParse
                      ((System_String_o *)method,(float *)((long)register0x00000020 + -0x2c),(MethodInfo *)0x0
                      );
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar3 = *(UnityEngine_UI_Slider_o **)((long)pSVar10->m_Items + 0x18);
    if ((pUVar3 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = *(MethodInfo **)pSVar10->m_Items, (System_Int32_array *)method != (System_Int32_array *)0x0))
    {
      pvVar4 = ((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image;
      if ((*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) <= *(byte *)((long)pvVar4 + 0x130)) &&
         (*(System_Int32_array **)
           (*(long *)((long)pvVar4 + 200) + -8 +
           (ulong)*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) * 8) == TypeInfo_FloatSetting)) {
        fVar1 = *(float *)((long)register0x00000020 + -0x2c);
        fVar12 = *(float *)((long)&(pUVar3->fields).m_HandleRect + 4);
        fVar13 = (float)(pUVar3->fields).m_Direction;
        if (fVar1 <= fVar13) {
          fVar13 = fVar1;
        }
        uVar11 = -(uint)(fVar12 <= fVar1);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4397a93;
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)method,
                   (float)(~uVar11 & (uint)fVar12 | (uint)fVar13 & uVar11),(MethodInfo_2A241B0 *)MethodInfo_Void_set_Value)
        ;
        return;
      }
      goto label_04397b2f;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4397b2f;
  il2cpp_runtime_helper_022b2c90();
label_04397b2f:
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4397b34;
  il2cpp_runtime_helper_022b2fd0();
  (**(code **)((long)((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image + 0x198))();
  return;
}


// UI.SliderInputSettingElement$$OnInputValueChanged
// il2cpp: void UI_SliderInputSettingElement__OnInputValueChanged (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4397960

void UI_SliderInputSettingElement__OnInputValueChanged
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  bool_conflict bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iStack_18;
  float fStack_14;
  
  if (g_data_057ae2d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2d7 = '\x01';
  }
  _iStack_18 = 0;
  bVar5 = System_String__op_Equality
                    (value,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  iVar3 = (__this->fields)._settingType;
  if (iVar3 == 2) {
    bVar5 = System_Int32__TryParse(value,&iStack_18,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar4 = (__this->fields)._slider;
    if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
       (value = (System_String_o *)(__this->fields)._setting, value != (System_String_o *)0x0)) {
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar2 <= (value->klass->_2).naturalAligment) &&
         ((value->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
        fVar7 = (float)(pUVar4->fields).m_Direction;
        fVar8 = (float)iStack_18;
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        uVar6 = -(uint)(fVar1 <= fVar8);
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)value,
                   (int)(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  else {
    if (iVar3 != 3) {
      return;
    }
    bVar5 = System_Single__TryParse(value,&fStack_14,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar4 = (__this->fields)._slider;
    if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
       (value = (System_String_o *)(__this->fields)._setting, value != (System_String_o *)0x0)) {
      bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if ((bVar2 <= (value->klass->_2).naturalAligment) &&
         ((value->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
        fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
        fVar7 = (float)(pUVar4->fields).m_Direction;
        if (fStack_14 <= fVar7) {
          fVar7 = fStack_14;
        }
        uVar6 = -(uint)(fVar1 <= fStack_14);
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)value,(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6)
                   ,MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04397b2f:
  il2cpp_runtime_helper_022b2fd0();
  (*(value->klass->vtable)._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr)();
  return;
}


// UI.SliderInputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_SliderInputSettingElement__OnInputFinishEditing (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4397b40

void UI_SliderInputSettingElement__OnInputFinishEditing
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._6_SyncElement.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._6_SyncElement.method,method,vtableDispatch);
  return;
}


// UI.SliderInputSettingElement$$SyncSlider
// il2cpp: void UI_SliderInputSettingElement__SyncSlider (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4397b60

void UI_SliderInputSettingElement__SyncSlider(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_UI_InputField_o *__this_00;
  Il2CppClass *pIVar4;
  UnityEngine_UI_Slider_o *pUVar5;
  Il2CppMethodPointer vtableDispatch;
  ulong uVar6;
  bool_conflict bVar7;
  Il2CppObject *arg0;
  System_String_o *value;
  Il2CppClass *extraout_RAX;
  System_Int32_array *__this_01;
  System_Int32_array *pSVar8;
  System_Int32_array *pSVar9;
  undefined8 unaff_R14;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_38;
  System_Int32_array *pSStack_30;
  undefined8 uStack_28;
  Il2CppClass *pIStack_20;
  UI_SliderInputSettingElement_o *pUStack_18;
  
  if (g_data_057ae2d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae2d8 = '\x01';
  }
  iVar3 = (__this->fields)._settingType;
  if (iVar3 == 2) {
    __this_01 = (System_Int32_array *)(__this->fields)._setting;
    if (__this_01 != (System_Int32_array *)0x0) {
      pIVar4 = (__this_01->obj).klass;
      bVar2 = (byte)TypeInfo_IntSetting->m_Items[0x44];
      method = (MethodInfo *)TypeInfo_IntSetting;
      if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
         ((System_Int32_array *)(pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        pUVar5 = (__this->fields)._slider;
        goto joined_r0x04397c36;
      }
label_04397c56:
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  else {
    if (iVar3 != 3) {
      return;
    }
    __this_01 = (System_Int32_array *)(__this->fields)._setting;
    if (__this_01 != (System_Int32_array *)0x0) {
      pIVar4 = (__this_01->obj).klass;
      bVar2 = (byte)TypeInfo_FloatSetting->m_Items[0x44];
      method = (MethodInfo *)TypeInfo_FloatSetting;
      if (((pIVar4->_2).naturalAligment < bVar2) ||
         ((System_Int32_array *)(pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_FloatSetting))
      goto label_04397c56;
      pUVar5 = (__this->fields)._slider;
joined_r0x04397c36:
      if (pUVar5 != (UnityEngine_UI_Slider_o *)0x0) {
        vtableDispatch = (pUVar5->klass->vtable)._47_set_value.methodPtr;
        (*vtableDispatch)(pUVar5,(pUVar5->klass->vtable)._47_set_value.method,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_18 = (void *)0x4397c69;
  UI_SliderInputSettingElement__SyncSlider((UI_SliderInputSettingElement_o *)__this_01,method);
  pSVar8 = (System_Int32_array *)&stack0xffffffffffffffe0;
  pIStack_20 = extraout_RAX;
  pUStack_18 = __this;
  if (g_data_057ae2d9 == '\0') {
    uStack_28 = 0x439781c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    uStack_28 = 0x4397828;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    uStack_28 = 0x4397834;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    uStack_28 = 0x4397840;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    uStack_28 = 0x439784c;
    il2cpp_runtime_helper_023445d0(&"{0:N}");
    g_data_057ae2d9 = '\x01';
  }
  uVar6 = (ulong)pIStack_20 >> 0x20;
  pIStack_20 = (Il2CppClass *)((ulong)pIStack_20 & 0xffffffff00000000);
  if (*(int32_t *)((long)__this_01->m_Items + 8) == 2) {
    pSVar9 = *(System_Int32_array **)__this_01->m_Items;
    if (pSVar9 != (System_Int32_array *)0x0) {
      pIVar4 = (pSVar9->obj).klass;
      bVar2 = (byte)TypeInfo_IntSetting->m_Items[0x44];
      method = (MethodInfo *)TypeInfo_IntSetting;
      if (((pIVar4->_2).naturalAligment < bVar2) ||
         ((System_Int32_array *)(pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_IntSetting))
      goto label_04397954;
      __this_00 = *(UnityEngine_UI_InputField_o **)(__this_01->m_Items + 8);
      pIStack_20 = (Il2CppClass *)
                   CONCAT44((int)uVar6,
                            *(undefined4 *)
                             ((long)&((System_Globalization_NumberFormatInfo_Fields *)&pSVar9->bounds)->
                                     numberGroupSizes + 4));
      method = (MethodInfo *)0x0;
      uStack_28 = 0x439793a;
      value = System_Int32__ToString((int32_t)&stack0xffffffffffffffe0,(MethodInfo *)0x0);
      __this_01 = (System_Int32_array *)0x0;
      pSVar9 = pSVar8;
joined_r0x0439793d:
      if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
        uStack_28 = 0x439794c;
        UnityEngine_UI_InputField__set_text(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (*(int32_t *)((long)__this_01->m_Items + 8) != 3) {
      return;
    }
    pSVar9 = *(System_Int32_array **)__this_01->m_Items;
    if (pSVar9 != (System_Int32_array *)0x0) {
      pIVar4 = (pSVar9->obj).klass;
      bVar2 = (byte)TypeInfo_FloatSetting->m_Items[0x44];
      method = (MethodInfo *)TypeInfo_FloatSetting;
      if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
         ((System_Int32_array *)(pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
        __this_00 = *(UnityEngine_UI_InputField_o **)((long)__this_01->m_Items + 0x20);
        __this_01 = *(System_Int32_array **)((long)__this_01->m_Items + 0x30);
        pIStack_20 = (Il2CppClass *)
                     ((ulong)*(uint *)((long)&((System_Globalization_NumberFormatInfo_Fields *)&pSVar9->bounds
                                              )->numberGroupSizes + 4) << 0x20);
        uStack_28 = 0x43978d2;
        arg0 = (Il2CppObject *)
               il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)register0x00000020 + -0x1c));
        uStack_28 = 0x43978e9;
        method = (MethodInfo *)"{0:N}";
        pSVar9 = __this_01;
        value = System_String__Format_3af7a30
                          ((System_IFormatProvider_o *)__this_01,(System_String_o *)"{0:N}",arg0,
                           (MethodInfo *)0x0);
        unaff_R14 = 0;
        goto joined_r0x0439793d;
      }
label_04397954:
      uStack_28 = 0x4397959;
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  uStack_28 = 0x439795e;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this_01;
  uStack_28 = unaff_R14;
  if (g_data_057ae2d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2d7 = '\x01';
  }
  uStack_38 = 0;
  bVar7 = System_String__op_Equality
                    ((System_String_o *)method,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (*(int *)((long)pSVar9->m_Items + 8) == 2) {
    bVar7 = System_Int32__TryParse((System_String_o *)method,(int32_t *)&uStack_38,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    pUVar5 = *(UnityEngine_UI_Slider_o **)((long)pSVar9->m_Items + 0x18);
    if ((pUVar5 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = *(MethodInfo **)pSVar9->m_Items, (System_Int32_array *)method != (System_Int32_array *)0x0))
    {
      pIVar4 = (((System_Int32_array *)method)->obj).klass;
      bVar2 = (byte)TypeInfo_IntSetting->m_Items[0x44];
      if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
         ((System_Int32_array *)(pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        fVar1 = *(float *)((long)&(pUVar5->fields).m_HandleRect + 4);
        fVar11 = (float)(pUVar5->fields).m_Direction;
        fVar12 = (float)(int)uStack_38;
        if (fVar12 <= fVar11) {
          fVar11 = fVar12;
        }
        uVar10 = -(uint)(fVar1 <= fVar12);
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)method,
                   (int)(float)(~uVar10 & (uint)fVar1 | (uint)fVar11 & uVar10),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  else {
    if (*(int *)((long)pSVar9->m_Items + 8) != 3) {
      return;
    }
    bVar7 = System_Single__TryParse
                      ((System_String_o *)method,(float *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    pUVar5 = *(UnityEngine_UI_Slider_o **)((long)pSVar9->m_Items + 0x18);
    if ((pUVar5 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = *(MethodInfo **)pSVar9->m_Items, (System_Int32_array *)method != (System_Int32_array *)0x0))
    {
      pIVar4 = (((System_Int32_array *)method)->obj).klass;
      bVar2 = (byte)TypeInfo_FloatSetting->m_Items[0x44];
      if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
         ((System_Int32_array *)(pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
        fVar1 = *(float *)((long)&(pUVar5->fields).m_HandleRect + 4);
        fVar11 = (float)(pUVar5->fields).m_Direction;
        if (uStack_38._4_4_ <= fVar11) {
          fVar11 = uStack_38._4_4_;
        }
        uVar10 = -(uint)(fVar1 <= uStack_38._4_4_);
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)method,
                   (float)(~uVar10 & (uint)fVar1 | (uint)fVar11 & uVar10),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04397b2f:
  il2cpp_runtime_helper_022b2fd0();
  (*(((Settings_TypedSetting_float__VTable *)((((System_Int32_array *)method)->obj).klass)->vtable)->
    _6_unknown).methodPtr)();
  return;
}


// UI.SliderInputSettingElement$$SyncInput
// il2cpp: void UI_SliderInputSettingElement__SyncInput (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4397800

void UI_SliderInputSettingElement__SyncInput(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  UnityEngine_UI_InputField_o *__this_00;
  UnityEngine_UI_Slider_o *pUVar3;
  void *pvVar4;
  bool_conflict bVar5;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *value;
  System_Globalization_NumberFormatInfo_o *pSVar6;
  System_Globalization_NumberFormatInfo_o *pSVar7;
  undefined8 unaff_R14;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_30;
  System_Globalization_NumberFormatInfo_o *pSStack_28;
  undefined8 uStack_20;
  System_Globalization_NumberFormatInfo_c *pSStack_18;
  
  pSStack_18._4_4_ = (uint)((ulong)in_RAX >> 0x20);
  pSVar6 = (System_Globalization_NumberFormatInfo_o *)&stack0xffffffffffffffe8;
  if (g_data_057ae2d9 == '\0') {
    uStack_20 = 0x439781c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    uStack_20 = 0x4397828;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    uStack_20 = 0x4397834;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    uStack_20 = 0x4397840;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    uStack_20 = 0x439784c;
    il2cpp_runtime_helper_023445d0(&"{0:N}");
    g_data_057ae2d9 = '\x01';
  }
  uVar8 = pSStack_18._4_4_;
  pSStack_18 = (System_Globalization_NumberFormatInfo_c *)((ulong)pSStack_18._4_4_ << 0x20);
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar7 = (System_Globalization_NumberFormatInfo_o *)(__this->fields)._setting;
    if (pSVar7 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      method = (MethodInfo *)TypeInfo_IntSetting;
      if (((((System_IFormatProvider_c *)pSVar7->klass)->_2).naturalAligment <
           *(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11)) ||
         ((System_Int32_array *)
          (((System_IFormatProvider_c *)pSVar7->klass)->_2).typeHierarchy
          [(ulong)*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) - 1] != TypeInfo_IntSetting))
      goto label_04397954;
      __this_00 = (__this->fields)._inputField;
      pSStack_18 = (System_Globalization_NumberFormatInfo_c *)
                   CONCAT44(uVar8,*(undefined4 *)((long)&(pSVar7->fields).numberGroupSizes + 4));
      method = (MethodInfo *)0x0;
      uStack_20 = 0x439793a;
      value = System_Int32__ToString((int32_t)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
      __this = (UI_SliderInputSettingElement_o *)0x0;
      pSVar7 = pSVar6;
joined_r0x0439793d:
      if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
        uStack_20 = 0x439794c;
        UnityEngine_UI_InputField__set_text(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pSVar7 = (System_Globalization_NumberFormatInfo_o *)(__this->fields)._setting;
    if (pSVar7 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      method = (MethodInfo *)TypeInfo_FloatSetting;
      if ((*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) <=
           (((System_IFormatProvider_c *)pSVar7->klass)->_2).naturalAligment) &&
         ((System_Int32_array *)
          (((System_IFormatProvider_c *)pSVar7->klass)->_2).typeHierarchy
          [(ulong)*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) - 1] == TypeInfo_FloatSetting)) {
        __this_00 = (__this->fields)._inputField;
        __this = (UI_SliderInputSettingElement_o *)(__this->fields)._formatInfo;
        pSStack_18 = (System_Globalization_NumberFormatInfo_c *)
                     ((ulong)*(uint *)((long)&(pSVar7->fields).numberGroupSizes + 4) << 0x20);
        uStack_20 = 0x43978d2;
        arg0 = (Il2CppObject *)
               il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)register0x00000020 + -0x14));
        uStack_20 = 0x43978e9;
        method = (MethodInfo *)"{0:N}";
        pSVar7 = (System_Globalization_NumberFormatInfo_o *)__this;
        value = System_String__Format_3af7a30
                          ((System_IFormatProvider_o *)__this,(System_String_o *)"{0:N}",arg0,
                           (MethodInfo *)0x0);
        unaff_R14 = 0;
        goto joined_r0x0439793d;
      }
label_04397954:
      uStack_20 = 0x4397959;
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  uStack_20 = 0x439795e;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pSStack_28 = (System_Globalization_NumberFormatInfo_o *)__this;
  uStack_20 = unaff_R14;
  if (g_data_057ae2d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2d7 = '\x01';
  }
  uStack_30 = 0;
  bVar5 = System_String__op_Equality
                    ((System_String_o *)method,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  iVar2 = *(int *)&(pSVar7->fields).positiveSign;
  if (iVar2 == 2) {
    bVar5 = System_Int32__TryParse((System_String_o *)method,(int32_t *)&uStack_30,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar3 = (UnityEngine_UI_Slider_o *)(pSVar7->fields).numberDecimalSeparator;
    if ((pUVar3 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = (MethodInfo *)(pSVar7->fields).percentGroupSizes,
       (System_Int32_array *)method != (System_Int32_array *)0x0)) {
      pvVar4 = ((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image;
      if ((*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) <= *(byte *)((long)pvVar4 + 0x130)) &&
         (*(System_Int32_array **)
           (*(long *)((long)pvVar4 + 200) + -8 +
           (ulong)*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) * 8) == TypeInfo_IntSetting)) {
        fVar1 = *(float *)((long)&(pUVar3->fields).m_HandleRect + 4);
        fVar9 = (float)(pUVar3->fields).m_Direction;
        fVar10 = (float)(int)uStack_30;
        if (fVar10 <= fVar9) {
          fVar9 = fVar10;
        }
        uVar8 = -(uint)(fVar1 <= fVar10);
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)method,
                   (int)(float)(~uVar8 & (uint)fVar1 | (uint)fVar9 & uVar8),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    bVar5 = System_Single__TryParse
                      ((System_String_o *)method,(float *)((long)&uStack_30 + 4),(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar3 = (UnityEngine_UI_Slider_o *)(pSVar7->fields).numberDecimalSeparator;
    if ((pUVar3 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = (MethodInfo *)(pSVar7->fields).percentGroupSizes,
       (System_Int32_array *)method != (System_Int32_array *)0x0)) {
      pvVar4 = ((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image;
      if ((*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) <= *(byte *)((long)pvVar4 + 0x130)) &&
         (*(System_Int32_array **)
           (*(long *)((long)pvVar4 + 200) + -8 +
           (ulong)*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) * 8) == TypeInfo_FloatSetting)) {
        fVar1 = *(float *)((long)&(pUVar3->fields).m_HandleRect + 4);
        fVar9 = (float)(pUVar3->fields).m_Direction;
        if (uStack_30._4_4_ <= fVar9) {
          fVar9 = uStack_30._4_4_;
        }
        uVar8 = -(uint)(fVar1 <= uStack_30._4_4_);
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)method,
                   (float)(~uVar8 & (uint)fVar1 | (uint)fVar9 & uVar8),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04397b2f:
  il2cpp_runtime_helper_022b2fd0();
  (**(code **)((long)((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image + 0x198))();
  return;
}


// UI.SliderInputSettingElement$$SyncElement
// il2cpp: void UI_SliderInputSettingElement__SyncElement (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4397c60

void UI_SliderInputSettingElement__SyncElement(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  UnityEngine_UI_InputField_o *__this_00;
  UnityEngine_UI_Slider_o *pUVar3;
  void *pvVar4;
  ulong uVar5;
  bool_conflict bVar6;
  Il2CppObject *arg0;
  System_String_o *value;
  System_Globalization_NumberFormatInfo_c *extraout_RAX;
  System_Globalization_NumberFormatInfo_o *pSVar7;
  System_Globalization_NumberFormatInfo_o *pSVar8;
  undefined8 unaff_R14;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_30;
  System_Globalization_NumberFormatInfo_o *pSStack_28;
  undefined8 uStack_20;
  System_Globalization_NumberFormatInfo_c *pSStack_18;
  void *pvStack_10;
  
  pvStack_10 = (void *)0x4397c69;
  UI_SliderInputSettingElement__SyncSlider(__this,method);
  pSVar7 = (System_Globalization_NumberFormatInfo_o *)&stack0xffffffffffffffe8;
  pSStack_18 = extraout_RAX;
  if (g_data_057ae2d9 == '\0') {
    uStack_20 = 0x439781c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    uStack_20 = 0x4397828;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    uStack_20 = 0x4397834;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    uStack_20 = 0x4397840;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    uStack_20 = 0x439784c;
    il2cpp_runtime_helper_023445d0(&"{0:N}");
    g_data_057ae2d9 = '\x01';
  }
  uVar5 = (ulong)pSStack_18 >> 0x20;
  pSStack_18 = (System_Globalization_NumberFormatInfo_c *)((ulong)pSStack_18 & 0xffffffff00000000);
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    pSVar8 = (System_Globalization_NumberFormatInfo_o *)(__this->fields)._setting;
    if (pSVar8 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      method = (MethodInfo *)TypeInfo_IntSetting;
      if (((((System_IFormatProvider_c *)pSVar8->klass)->_2).naturalAligment <
           *(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11)) ||
         ((System_Int32_array *)
          (((System_IFormatProvider_c *)pSVar8->klass)->_2).typeHierarchy
          [(ulong)*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) - 1] != TypeInfo_IntSetting))
      goto label_04397954;
      __this_00 = (__this->fields)._inputField;
      pSStack_18 = (System_Globalization_NumberFormatInfo_c *)
                   CONCAT44((int)uVar5,*(undefined4 *)((long)&(pSVar8->fields).numberGroupSizes + 4));
      method = (MethodInfo *)0x0;
      uStack_20 = 0x439793a;
      value = System_Int32__ToString((int32_t)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
      __this = (UI_SliderInputSettingElement_o *)0x0;
      pSVar8 = pSVar7;
joined_r0x0439793d:
      if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
        uStack_20 = 0x439794c;
        UnityEngine_UI_InputField__set_text(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    pSVar8 = (System_Globalization_NumberFormatInfo_o *)(__this->fields)._setting;
    if (pSVar8 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      method = (MethodInfo *)TypeInfo_FloatSetting;
      if ((*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) <=
           (((System_IFormatProvider_c *)pSVar8->klass)->_2).naturalAligment) &&
         ((System_Int32_array *)
          (((System_IFormatProvider_c *)pSVar8->klass)->_2).typeHierarchy
          [(ulong)*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) - 1] == TypeInfo_FloatSetting)) {
        __this_00 = (__this->fields)._inputField;
        __this = (UI_SliderInputSettingElement_o *)(__this->fields)._formatInfo;
        pSStack_18 = (System_Globalization_NumberFormatInfo_c *)
                     ((ulong)*(uint *)((long)&(pSVar8->fields).numberGroupSizes + 4) << 0x20);
        uStack_20 = 0x43978d2;
        arg0 = (Il2CppObject *)
               il2cpp_runtime_helper_02304f30(g_data_057b9be8,(undefined1 *)((long)register0x00000020 + -0x14));
        uStack_20 = 0x43978e9;
        method = (MethodInfo *)"{0:N}";
        pSVar8 = (System_Globalization_NumberFormatInfo_o *)__this;
        value = System_String__Format_3af7a30
                          ((System_IFormatProvider_o *)__this,(System_String_o *)"{0:N}",arg0,
                           (MethodInfo *)0x0);
        unaff_R14 = 0;
        goto joined_r0x0439793d;
      }
label_04397954:
      uStack_20 = 0x4397959;
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  uStack_20 = 0x439795e;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pSStack_28 = (System_Globalization_NumberFormatInfo_o *)__this;
  uStack_20 = unaff_R14;
  if (g_data_057ae2d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2d7 = '\x01';
  }
  uStack_30 = 0;
  bVar6 = System_String__op_Equality
                    ((System_String_o *)method,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  iVar2 = *(int *)&(pSVar8->fields).positiveSign;
  if (iVar2 == 2) {
    bVar6 = System_Int32__TryParse((System_String_o *)method,(int32_t *)&uStack_30,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pUVar3 = (UnityEngine_UI_Slider_o *)(pSVar8->fields).numberDecimalSeparator;
    if ((pUVar3 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = (MethodInfo *)(pSVar8->fields).percentGroupSizes,
       (System_Int32_array *)method != (System_Int32_array *)0x0)) {
      pvVar4 = ((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image;
      if ((*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) <= *(byte *)((long)pvVar4 + 0x130)) &&
         (*(System_Int32_array **)
           (*(long *)((long)pvVar4 + 200) + -8 +
           (ulong)*(byte *)((Il2CppType *)TypeInfo_IntSetting->m_Items + 0x11) * 8) == TypeInfo_IntSetting)) {
        fVar1 = *(float *)((long)&(pUVar3->fields).m_HandleRect + 4);
        fVar10 = (float)(pUVar3->fields).m_Direction;
        fVar11 = (float)(int)uStack_30;
        if (fVar11 <= fVar10) {
          fVar10 = fVar11;
        }
        uVar9 = -(uint)(fVar1 <= fVar11);
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)method,
                   (int)(float)(~uVar9 & (uint)fVar1 | (uint)fVar10 & uVar9),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    bVar6 = System_Single__TryParse
                      ((System_String_o *)method,(float *)((long)&uStack_30 + 4),(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pUVar3 = (UnityEngine_UI_Slider_o *)(pSVar8->fields).numberDecimalSeparator;
    if ((pUVar3 != (UnityEngine_UI_Slider_o *)0x0) &&
       (method = (MethodInfo *)(pSVar8->fields).percentGroupSizes,
       (System_Int32_array *)method != (System_Int32_array *)0x0)) {
      pvVar4 = ((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image;
      if ((*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) <= *(byte *)((long)pvVar4 + 0x130)) &&
         (*(System_Int32_array **)
           (*(long *)((long)pvVar4 + 200) + -8 +
           (ulong)*(byte *)((Il2CppType *)TypeInfo_FloatSetting->m_Items + 0x11) * 8) == TypeInfo_FloatSetting)) {
        fVar1 = *(float *)((long)&(pUVar3->fields).m_HandleRect + 4);
        fVar10 = (float)(pUVar3->fields).m_Direction;
        if (uStack_30._4_4_ <= fVar10) {
          fVar10 = uStack_30._4_4_;
        }
        uVar9 = -(uint)(fVar1 <= uStack_30._4_4_);
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)method,
                   (float)(~uVar9 & (uint)fVar1 | (uint)fVar10 & uVar9),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04397b2f:
  il2cpp_runtime_helper_022b2fd0();
  (**(code **)((long)((Il2CppClass_1 *)&((System_Int32_array *)method)->obj)->image + 0x198))();
  return;
}


// UI.SliderInputSettingElement$$.ctor
// il2cpp: void UI_SliderInputSettingElement___ctor (UI_SliderInputSettingElement_o* __this, const MethodInfo* method);
// 0x4397c80

void UI_SliderInputSettingElement___ctor(UI_SliderInputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_0
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_0 (UI_SliderInputSettingElement_o* __this, float value, const MethodInfo* method);
// 0x4397c90

void UI_SliderInputSettingElement___Setup_b__7_0
               (UI_SliderInputSettingElement_o *__this,float value,MethodInfo *method)

{
  UI_SliderInputSettingElement__OnSliderValueChanged(__this,value,method);
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_1
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_1 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4397ca0

void UI_SliderInputSettingElement___Setup_b__7_1
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  bool_conflict bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iStack_18;
  float fStack_14;
  
  if (g_data_057ae2d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2d7 = '\x01';
  }
  _iStack_18 = 0;
  bVar5 = System_String__op_Equality
                    (value,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  iVar3 = (__this->fields)._settingType;
  if (iVar3 == 2) {
    bVar5 = System_Int32__TryParse(value,&iStack_18,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar4 = (__this->fields)._slider;
    if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
       (value = (System_String_o *)(__this->fields)._setting, value != (System_String_o *)0x0)) {
      bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar2 <= (value->klass->_2).naturalAligment) &&
         ((value->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_IntSetting)) {
        fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
        fVar7 = (float)(pUVar4->fields).m_Direction;
        fVar8 = (float)iStack_18;
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        uVar6 = -(uint)(fVar1 <= fVar8);
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)value,
                   (int)(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6),MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  else {
    if (iVar3 != 3) {
      return;
    }
    bVar5 = System_Single__TryParse(value,&fStack_14,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar4 = (__this->fields)._slider;
    if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
       (value = (System_String_o *)(__this->fields)._setting, value != (System_String_o *)0x0)) {
      bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if ((bVar2 <= (value->klass->_2).naturalAligment) &&
         ((value->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_FloatSetting)) {
        fVar1 = *(float *)((long)&(pUVar4->fields).m_HandleRect + 4);
        fVar7 = (float)(pUVar4->fields).m_Direction;
        if (fStack_14 <= fVar7) {
          fVar7 = fStack_14;
        }
        uVar6 = -(uint)(fVar1 <= fStack_14);
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)value,(float)(~uVar6 & (uint)fVar1 | (uint)fVar7 & uVar6)
                   ,MethodInfo_Void_set_Value);
        return;
      }
      goto label_04397b2f;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04397b2f:
  il2cpp_runtime_helper_022b2fd0();
  (*(value->klass->vtable)._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr)();
  return;
}


// UI.SliderInputSettingElement$$<Setup>b__7_2
// il2cpp: void UI_SliderInputSettingElement___Setup_b__7_2 (UI_SliderInputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4397cb0

void UI_SliderInputSettingElement___Setup_b__7_2
               (UI_SliderInputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._6_SyncElement.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._6_SyncElement.method,method,vtableDispatch);
  return;
}


