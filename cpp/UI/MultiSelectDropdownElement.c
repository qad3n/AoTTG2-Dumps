// Type: UI.MultiSelectDropdownElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MultiSelectDropdownElement.cs
// Prior real C# source: none
// --------------------------------

// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass24_0___ctor (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5cf5850

void UI_MultiSelectDropdownElement___c__DisplayClass24_0___ctor
               (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__0 (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o* __this, bool value, const MethodInfo* method);
// 0x5cf5d30

void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__0
               (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *__this,bool value,MethodInfo *method)

{
  UI_MultiSelectDropdownElement_o *__this_00;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MultiSelectDropdownElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MultiSelectDropdownElement__OnToggleValueChanged(__this_00,(__this->fields).index,value,in_RCX);
  return;
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$<CreateOptionToggle>b__1
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__1 (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5cf5d60

void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__1
               (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *__this_00;
  
  __this_00 = (__this->fields).toggle;
  if (__this_00 == (UnityEngine_UI_Toggle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UI_Toggle__set_isOn(__this_00,(__this_00->fields).m_IsOn == false,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28___ctor (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cf5a60

void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28___ctor
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_IDisposable_Dispose (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x5cf5d90

void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_IDisposable_Dispose
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this,MethodInfo *method)

{
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$MoveNext
// il2cpp: bool UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__MoveNext (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x5cf5da0

bool UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__MoveNext
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MultiSelectDropdownElement_o *__this_00;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_Fields UVar7;
  
  if (Il2CppMethodInitialized_07547caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547caf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      pUVar2 = (__this_00->fields)._scrollBar;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar2 = (__this_00->fields)._scrollBar;
        if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_05cf5f8c;
        UnityEngine_UI_Scrollbar__set_value(pUVar2,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0);
      }
      return false;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        (__this->fields).__1__state = -1;
        pIVar5 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      UI_MultiSelectDropdownElement__SetOptionsPosition(__this_00,method);
      pUVar3 = (__this_00->fields)._optionsPanel;
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar6 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetAsLastSibling(pUVar6,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UVar7 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          (__this_00->fields)._lastKnownPosition.fields = UVar7;
          pUVar3 = (__this_00->fields)._optionsPanel;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
            pIVar5 = (Il2CppObject *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar5;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 2;
            return true;
          }
        }
      }
    }
  }
label_05cf5f8c:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x5cf5fa0

Il2CppObject *
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_IEnumerator_Reset (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x5cf5fb0

void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_IEnumerator_Reset
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_IEnumerator_get_Current (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x5cf5ff0

Il2CppObject *
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_IEnumerator_get_Current
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_MultiSelectDropdownElement__get_SupportedSettingTypes (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf3a80

System_Collections_Generic_HashSet_SettingType__o *
UI_MultiSelectDropdownElement__get_SupportedSettingTypes
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547ca2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_4FAD1E0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  return __this_00;
}


// UI.MultiSelectDropdownElement$$Setup
// il2cpp: void UI_MultiSelectDropdownElement__Setup (UI_MultiSelectDropdownElement_o* __this, Settings_HashSetSetting_int__o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onSelectionChanged, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x5cf3ae0

void UI_MultiSelectDropdownElement__Setup
               (UI_MultiSelectDropdownElement_o *__this,Settings_HashSetSetting_int__o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,float optionsWidth,
               float maxScrollHeight,UnityEngine_Events_UnityAction_o *onSelectionChanged,
               System_Int32_array *intOptionValues,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_GameObject_o **targetAddress_00;
  UnityEngine_GameObject_o **targetAddress_01;
  UnityEngine_UI_Scrollbar_o **targetAddress_02;
  int32_t value;
  uint uVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  ulong uVar9;
  UnityEngine_UI_Image_o *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_Scrollbar_o *pUVar12;
  UI_MapEditorScaledPanel_o *x;
  UnityEngine_Transform_o *pUVar13;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_03;
  System_String_o *pSVar14;
  MethodInfo *pMVar15;
  UnityEngine_UI_LayoutElement_c *method_00;
  ulong uVar16;
  UnityEngine_Color_o UVar17;
  float local_c8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pMVar15 = (MethodInfo *)tooltip;
  if (Il2CppMethodInitialized_07547ca3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_MapEditorScaledPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiSelectDropdownElement_Setup_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownBorderColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownScrollbarBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownScrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown/Mask");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    il2cpp_codegen_initialize_runtime_metadata(&"Scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown/SelectedButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07547ca3 = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_03 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      pSVar14 = il2cpp_codegen_get_runtime_metadata(&"MultiSelectDropdown cannot have 0 options.");
      System_ArgumentException___ctor_54186d0(__this_03,pSVar14,(MethodInfo *)0x0);
      pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_MultiSelectDropdownElement_Setup);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar15);
    }
    (__this->fields)._hashSetSetting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hashSetSetting);
    (__this->fields)._intOptionValues = intOptionValues;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues);
    (__this->fields)._onSelectionChanged = onSelectionChanged;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelectionChanged);
    (__this->fields)._options = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
    if (style != (UI_ElementStyle_o *)0x0) {
      (__this->fields)._themePanel = (style->fields).ThemePanel;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._themePanel);
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Dropdown/Mask",(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          targetAddress = &(__this->fields)._optionsPanel;
          (__this->fields)._optionsPanel = pUVar5;
          Il2CppCodeGenWriteBarrier(targetAddress);
          pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Transform__Find(pUVar4,"Dropdown/SelectedButton",(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
              targetAddress_00 = &(__this->fields)._selectedButton;
              (__this->fields)._selectedButton = pUVar5;
              Il2CppCodeGenWriteBarrier(targetAddress_00);
              pUVar5 = (__this->fields)._selectedButton;
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Label",(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                    targetAddress_01 = &(__this->fields)._selectedButtonLabel;
                    (__this->fields)._selectedButtonLabel = pUVar5;
                    Il2CppCodeGenWriteBarrier(targetAddress_01);
                    pUVar5 = (__this->fields)._selectedButtonLabel;
                    value = (style->fields).FontSize;
                    if (Il2CppMethodInitialized_07547c72 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                      Il2CppMethodInitialized_07547c72 = '\x01';
                    }
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar5,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar6,title,(pUVar6->klass->vtable)._75_set_text.method);
                        UnityEngine_UI_Text__set_fontSize(pUVar6,value,(MethodInfo *)0x0);
                        if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                             (*targetAddress_00,
                                              (MethodInfo_353B730 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                          if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                            __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
                            __this_01 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                            UnityEngine_Events_UnityAction___ctor
                                      (__this_01,(Il2CppObject *)__this,
                                       (intptr_t)MethodInfo_UI_MultiSelectDropdownElement_Setup_b__17_0,
                                       (MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (__this_00,__this_01,(MethodInfo *)0x0);
                              if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                   (*targetAddress_00,
                                                    (MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                   );
                                if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                  (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                                            (pUVar8,elementWidth,
                                             (pUVar8->klass->vtable)._36_set_preferredWidth.method);
                                  if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                    pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                       (*targetAddress_00,
                                                        (MethodInfo_353B730 *)
                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                       );
                                    if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                      (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                                                (pUVar8,elementHeight,
                                                 (pUVar8->klass->vtable)._38_set_preferredHeight.method);
                                      if (0 < (int)options->max_length) {
                                        uVar9 = options->max_length & 0xffffffff;
                                        uVar16 = 0;
                                        do {
                                          if (uVar9 <= uVar16) {
                                            ThrowIndexOutOfRangeException();
                                          }
                                          UI_MultiSelectDropdownElement__CreateOptionToggle
                                                    (__this,options->m_Items[uVar16],(int32_t)uVar16,
                                                     optionsWidth,elementHeight,(style->fields).FontSize,
                                                     (style->fields).ThemePanel,pMVar15);
                                          uVar16 = uVar16 + 1;
                                          uVar1 = (uint)options->max_length;
                                          uVar9 = (ulong)uVar1;
                                        } while ((long)uVar16 < (long)(int)uVar1);
                                      }
                                      if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                                           (*targetAddress_00,
                                                            (MethodInfo_353B730 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                        pSVar14 = (style->fields).ThemePanel;
                                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UI_UIManager);
                                        }
                                        UI_UIManager__GetThemeColorBlock
                                                  (&local_88,pSVar14,"DefaultSetting",
                                                   "Dropdown","DefaultPanel",
                                                   (MethodInfo *)0x0);
                                        if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                                          value_00.fields.m_NormalColor.fields.b =
                                               local_88.fields.m_NormalColor.fields.b;
                                          value_00.fields.m_NormalColor.fields.a =
                                               local_88.fields.m_NormalColor.fields.a;
                                          value_00.fields.m_NormalColor.fields.r =
                                               local_88.fields.m_NormalColor.fields.r;
                                          value_00.fields.m_NormalColor.fields.g =
                                               local_88.fields.m_NormalColor.fields.g;
                                          value_00.fields.m_HighlightedColor.fields.r =
                                               local_88.fields.m_HighlightedColor.fields.r;
                                          value_00.fields.m_HighlightedColor.fields.g =
                                               local_88.fields.m_HighlightedColor.fields.g;
                                          value_00.fields.m_HighlightedColor.fields.b =
                                               local_88.fields.m_HighlightedColor.fields.b;
                                          value_00.fields.m_HighlightedColor.fields.a =
                                               local_88.fields.m_HighlightedColor.fields.a;
                                          value_00.fields.m_PressedColor.fields.r =
                                               local_88.fields.m_PressedColor.fields.r;
                                          value_00.fields.m_PressedColor.fields.g =
                                               local_88.fields.m_PressedColor.fields.g;
                                          value_00.fields.m_PressedColor.fields.b =
                                               local_88.fields.m_PressedColor.fields.b;
                                          value_00.fields.m_PressedColor.fields.a =
                                               local_88.fields.m_PressedColor.fields.a;
                                          value_00.fields.m_SelectedColor.fields.r =
                                               local_88.fields.m_SelectedColor.fields.r;
                                          value_00.fields.m_SelectedColor.fields.g =
                                               local_88.fields.m_SelectedColor.fields.g;
                                          value_00.fields.m_SelectedColor.fields.b =
                                               local_88.fields.m_SelectedColor.fields.b;
                                          value_00.fields.m_SelectedColor.fields.a =
                                               local_88.fields.m_SelectedColor.fields.a;
                                          value_00.fields.m_DisabledColor.fields.r =
                                               local_88.fields.m_DisabledColor.fields.r;
                                          value_00.fields.m_DisabledColor.fields.g =
                                               local_88.fields.m_DisabledColor.fields.g;
                                          value_00.fields.m_DisabledColor.fields.b =
                                               local_88.fields.m_DisabledColor.fields.b;
                                          value_00.fields.m_DisabledColor.fields.a =
                                               local_88.fields.m_DisabledColor.fields.a;
                                          value_00.fields.m_ColorMultiplier =
                                               local_88.fields.m_ColorMultiplier;
                                          value_00.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                          UnityEngine_UI_Selectable__set_colors
                                                    ((UnityEngine_UI_Selectable_o *)pUVar7,value_00,
                                                     (MethodInfo *)0x0);
                                          pUVar5 = *targetAddress_01;
                                          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                                               (pUVar5,(MethodInfo_353B730 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                            UVar17 = UI_UIManager__GetThemeColor
                                                               ((style->fields).ThemePanel,
                                                                "DefaultSetting","DropdownTextColor",
                                                                "DefaultPanel",(MethodInfo *)0x0);
                                            if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                                              (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                                        (pUVar6,UVar17,
                                                         (pUVar6->klass->vtable)._23_set_color.method);
                                              if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                                pUVar4 = UnityEngine_GameObject__get_transform
                                                                   (*targetAddress_00,(MethodInfo *)0x0);
                                                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                  pUVar4 = UnityEngine_Transform__Find
                                                                     (pUVar4,"Image",
                                                                      (MethodInfo *)0x0);
                                                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                    pUVar10 = UnityEngine_Component__GetComponent_object_
                                                                        ((UnityEngine_Component_o *)pUVar4,
                                                                         (MethodInfo_34B0830 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                                    UVar17 = UI_UIManager__GetThemeColor
                                                                       ((style->fields).ThemePanel,
                                                                        "DefaultSetting",
                                                                        "DropdownTextColor",
                                                                        "DefaultPanel",
                                                                        (MethodInfo *)0x0);
                                                    if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                                                      (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                                                (pUVar10,UVar17,
                                                                 (pUVar10->klass->vtable)._23_set_color.method
                                                                );
                                                      if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar4 = UnityEngine_GameObject__get_transform
                                                                           (*targetAddress,(MethodInfo *)0x0);
                                                        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                          pUVar4 = UnityEngine_Transform__Find
                                                                             (pUVar4,"Options",
                                                                              (MethodInfo *)0x0);
                                                          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                            pUVar10 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar4,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                                       UVar17 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting",
                                                                           "DropdownBorderColor",
                                                                           "DefaultPanel",
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                                                         (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                                                   (pUVar10,UVar17,
                                                                    (pUVar10->klass->vtable)._23_set_color.
                                                                    method);
                                                         UnityEngine_Canvas__ForceUpdateCanvases
                                                                   ((MethodInfo *)0x0);
                                                         if (*targetAddress != (UnityEngine_GameObject_o *)0x0
                                                            ) {
                                                           pUVar4 = UnityEngine_GameObject__get_transform
                                                                              (*targetAddress,
                                                                               (MethodInfo *)0x0);
                                                           if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar4 = UnityEngine_Transform__Find
                                                                                (pUVar4,"Options",
                                                                                 (MethodInfo *)0x0);
                                                             if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                               pUVar11 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar4,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                                       if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UVar2 = UnityEngine_RectTransform__get_sizeDelta
                                                                           (pUVar11,(MethodInfo *)0x0);
                                                         local_c8 = maxScrollHeight;
                                                         if (UVar2.fields.y <= maxScrollHeight) {
                                                           if (*targetAddress ==
                                                               (UnityEngine_GameObject_o *)0x0)
                                                           goto label_05cf4670;
                                                           __this_02 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (*targetAddress,
                                                                  (MethodInfo_353B730 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect
                                                       );
                                                       if (__this_02 == (UnityEngine_UI_ScrollRect_o *)0x0)
                                                       goto label_05cf4670;
                                                       UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                                 (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                       if (*targetAddress == (UnityEngine_GameObject_o *)0x0)
                                                       goto label_05cf4670;
                                                       pUVar4 = UnityEngine_GameObject__get_transform
                                                                          (*targetAddress,(MethodInfo *)0x0);
                                                       if (pUVar4 == (UnityEngine_Transform_o *)0x0)
                                                       goto label_05cf4670;
                                                       pUVar4 = UnityEngine_Transform__Find
                                                                          (pUVar4,"Scrollbar",
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar4 == (UnityEngine_Transform_o *)0x0)
                                                       goto label_05cf4670;
                                                       pUVar5 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pUVar4,
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar5 == (UnityEngine_GameObject_o *)0x0)
                                                       goto label_05cf4670;
                                                       UnityEngine_GameObject__SetActive
                                                                 (pUVar5,false,(MethodInfo *)0x0);
                                                       local_c8 = UVar2.fields.y;
                                                       }
                                                       if (*targetAddress != (UnityEngine_GameObject_o *)0x0)
                                                       {
                                                         pUVar4 = UnityEngine_GameObject__get_transform
                                                                            (*targetAddress,(MethodInfo *)0x0)
                                                         ;
                                                         if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar4 = UnityEngine_Transform__Find
                                                                              (pUVar4,"Scrollbar",
                                                                               (MethodInfo *)0x0);
                                                           if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar12 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar4,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Scrollbar
                                                       );
                                                       targetAddress_02 = &(__this->fields)._scrollBar;
                                                       (__this->fields)._scrollBar = pUVar12;
                                                       Il2CppCodeGenWriteBarrier(targetAddress_02);
                                                       pUVar12 = (__this->fields)._scrollBar;
                                                       pSVar14 = (style->fields).ThemePanel;
                                                       if ((TypeInfo_UI_UIManager->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                       }
                                                       UI_UIManager__GetThemeColorBlock
                                                                 (&local_88,pSVar14,"DefaultSetting",
                                                                  "DropdownScrollbar","DefaultPanel",
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                                         value_01.fields.m_NormalColor.fields.b =
                                                              local_88.fields.m_NormalColor.fields.b;
                                                         value_01.fields.m_NormalColor.fields.a =
                                                              local_88.fields.m_NormalColor.fields.a;
                                                         value_01.fields.m_NormalColor.fields.r =
                                                              local_88.fields.m_NormalColor.fields.r;
                                                         value_01.fields.m_NormalColor.fields.g =
                                                              local_88.fields.m_NormalColor.fields.g;
                                                         value_01.fields.m_HighlightedColor.fields.r =
                                                              local_88.fields.m_HighlightedColor.fields.r;
                                                         value_01.fields.m_HighlightedColor.fields.g =
                                                              local_88.fields.m_HighlightedColor.fields.g;
                                                         value_01.fields.m_HighlightedColor.fields.b =
                                                              local_88.fields.m_HighlightedColor.fields.b;
                                                         value_01.fields.m_HighlightedColor.fields.a =
                                                              local_88.fields.m_HighlightedColor.fields.a;
                                                         value_01.fields.m_PressedColor.fields.r =
                                                              local_88.fields.m_PressedColor.fields.r;
                                                         value_01.fields.m_PressedColor.fields.g =
                                                              local_88.fields.m_PressedColor.fields.g;
                                                         value_01.fields.m_PressedColor.fields.b =
                                                              local_88.fields.m_PressedColor.fields.b;
                                                         value_01.fields.m_PressedColor.fields.a =
                                                              local_88.fields.m_PressedColor.fields.a;
                                                         value_01.fields.m_SelectedColor.fields.r =
                                                              local_88.fields.m_SelectedColor.fields.r;
                                                         value_01.fields.m_SelectedColor.fields.g =
                                                              local_88.fields.m_SelectedColor.fields.g;
                                                         value_01.fields.m_SelectedColor.fields.b =
                                                              local_88.fields.m_SelectedColor.fields.b;
                                                         value_01.fields.m_SelectedColor.fields.a =
                                                              local_88.fields.m_SelectedColor.fields.a;
                                                         value_01.fields.m_DisabledColor.fields.r =
                                                              local_88.fields.m_DisabledColor.fields.r;
                                                         value_01.fields.m_DisabledColor.fields.g =
                                                              local_88.fields.m_DisabledColor.fields.g;
                                                         value_01.fields.m_DisabledColor.fields.b =
                                                              local_88.fields.m_DisabledColor.fields.b;
                                                         value_01.fields.m_DisabledColor.fields.a =
                                                              local_88.fields.m_DisabledColor.fields.a;
                                                         value_01.fields.m_ColorMultiplier =
                                                              local_88.fields.m_ColorMultiplier;
                                                         value_01.fields.m_FadeDuration =
                                                              local_88.fields.m_FadeDuration;
                                                         UnityEngine_UI_Selectable__set_colors
                                                                   ((UnityEngine_UI_Selectable_o *)pUVar12,
                                                                    value_01,(MethodInfo *)0x0);
                                                         pUVar12 = *targetAddress_02;
                                                         if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                                           pUVar10 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar12,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                                       UVar17 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting",
                                                                           "DropdownScrollbarBackgroundColor",
                                                                           "DefaultPanel",
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
                                                         (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                                                   (pUVar10,UVar17,
                                                                    (pUVar10->klass->vtable)._23_set_color.
                                                                    method);
                                                         if (*targetAddress != (UnityEngine_GameObject_o *)0x0
                                                            ) {
                                                           pUVar11 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (*targetAddress,
                                                                  (MethodInfo_353B730 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UVar2.fields.y = local_c8;
                                                         UVar2.fields.x = optionsWidth;
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar11,UVar2,(MethodInfo *)0x0);
                                                         pUVar4 = UnityEngine_Component__get_transform
                                                                            ((UnityEngine_Component_o *)__this
                                                                             ,(MethodInfo *)0x0);
                                                         if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar4 = UnityEngine_Transform__Find
                                                                              (pUVar4,"Label",
                                                                               (MethodInfo *)0x0);
                                                           if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar8 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar4,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                       );
                                                       if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                                         method_00 = pUVar8->klass;
                                                         (*(method_00->vtable)._38_set_preferredHeight.
                                                           methodPtr)(pUVar8,elementHeight,
                                                                      (method_00->vtable).
                                                                      _38_set_preferredHeight.method);
                                                         pUVar4 = UnityEngine_Component__get_transform
                                                                            ((UnityEngine_Component_o *)__this
                                                                             ,(MethodInfo *)0x0);
                                                         if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar4 = UnityEngine_Transform__Find
                                                                              (pUVar4,"Label",
                                                                               (MethodInfo *)0x0);
                                                           if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar5 = UnityEngine_Component__get_gameObject
                                                                                ((UnityEngine_Component_o *)
                                                                                 pUVar4,(MethodInfo *)0x0);
                                                             if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                                               UnityEngine_GameObject__SetActive
                                                                         (pUVar5,false,(MethodInfo *)0x0);
                                                               UI_BaseSettingElement__SetupTooltip
                                                                         ((UI_BaseSettingElement_o *)__this,
                                                                          tooltip,style,
                                                                          (MethodInfo *)method_00);
                                                               (__this->fields)._optionsOffset.fields.x =
                                                                    (optionsWidth - elementWidth) * 0.5;
                                                               (__this->fields)._optionsOffset.fields.y =
                                                                    2.0 - (local_c8 + elementHeight) * 0.5;
                                                               (__this->fields)._optionsOffset.fields.z = 0.0;
                                                               x = 
                                                       UnityEngine_Component__GetComponentInParent_object__34b0d00
                                                                 ((UnityEngine_Component_o *)__this,
                                                                  (MethodInfo_34B0D00 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponentInParent_MapEditorScaledPanel
                                                       );
                                                       if ((TypeInfo_UnityEngine_Object->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UnityEngine_Object
                                                                   );
                                                       }
                                                       bVar3 = UnityEngine_Object__op_Inequality
                                                                         ((UnityEngine_Object_o *)x,
                                                                          (UnityEngine_Object_o *)0x0,
                                                                          (MethodInfo *)0x0);
                                                       (__this->fields)._scaleWithPanel = bVar3;
                                                       pUVar5 = (__this->fields)._optionsPanel;
                                                       if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar4 = UnityEngine_GameObject__get_transform
                                                                            (pUVar5,(MethodInfo *)0x0);
                                                         pUVar13 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar13 = UnityEngine_Transform__get_root
                                                                               (pUVar13,(MethodInfo *)0x0);
                                                           if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent_692d510
                                                                       (pUVar4,pUVar13,true,(MethodInfo *)0x0)
                                                             ;
                                                             if (*targetAddress !=
                                                                 (UnityEngine_GameObject_o *)0x0) {
                                                               UnityEngine_GameObject__SetActive
                                                                         (*targetAddress,false,
                                                                          (MethodInfo *)0x0);
                                                               (*(__this->klass->vtable)._6_SyncElement.
                                                                 methodPtr)(__this,(__this->klass->vtable).
                                                                                   _6_SyncElement.method);
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
                }
              }
            }
          }
        }
      }
    }
  }
label_05cf4670:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$FixScale
// il2cpp: void UI_MultiSelectDropdownElement__FixScale (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf51c0

void UI_MultiSelectDropdownElement__FixScale(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  (__this->fields)._scaleWithPanel = false;
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_01,
                 (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$IsOpen
// il2cpp: bool UI_MultiSelectDropdownElement__IsOpen (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf5230

bool UI_MultiSelectDropdownElement__IsOpen(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547ca4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ca4 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._optionsPanel;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// UI.MultiSelectDropdownElement$$SetOptionsPosition
// il2cpp: void UI_MultiSelectDropdownElement__SetOptionsPosition (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf52b0

void UI_MultiSelectDropdownElement__SetOptionsPosition
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547ca5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547ca5 = '\x01';
  }
  if ((__this->fields)._scaleWithPanel == false) {
label_05cf53a4:
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar7->oneVector).fields.x;
    uVar4 = (pUVar7->oneVector).fields.y;
    fVar10 = (pUVar7->oneVector).fields.z;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    fVar12 = TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale;
    fVar10 = fVar10 * fVar12;
    fVar11 = (float)uVar2 * fVar12;
    fVar12 = (float)uVar4 * fVar12;
  }
  else {
    pUVar6 = (__this->fields)._optionsPanel;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05cf54dc;
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05cf54dc;
    pUVar9 = UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._selectedButton;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05cf54dc;
    __this_00 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05cf54dc;
    UVar13 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05cf54dc;
    UVar13 = UnityEngine_Transform__InverseTransformVector(pUVar9,UVar13,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05cf54dc;
    UnityEngine_Transform__set_localScale(pUVar8,UVar13,(MethodInfo *)0x0);
    if ((__this->fields)._scaleWithPanel == false) goto label_05cf53a4;
    pUVar6 = (__this->fields)._selectedButton;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05cf54dc;
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05cf54dc;
    UVar13 = UnityEngine_Transform__get_lossyScale(pUVar8,(MethodInfo *)0x0);
    fVar10 = UVar13.fields.z;
    fVar11 = UVar13.fields.x;
    fVar12 = UVar13.fields.y;
  }
  pUVar6 = (__this->fields)._selectedButton;
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UVar13 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._optionsPanel;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        uVar3 = (__this->fields)._optionsOffset.fields.x;
        uVar5 = (__this->fields)._optionsOffset.fields.y;
        fVar1 = (__this->fields)._optionsOffset.fields.z;
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar8,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            value.fields.z = UVar13.fields.z + fVar10 * fVar1;
            local_28 = UVar13.fields.x;
            fStack_24 = UVar13.fields.y;
            value.fields.x = local_28 + fVar11 * (float)uVar3;
            value.fields.y = fStack_24 + fVar12 * (float)uVar5;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05cf54dc:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$OnDisable
// il2cpp: void UI_MultiSelectDropdownElement__OnDisable (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf54f0

void UI_MultiSelectDropdownElement__OnDisable(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547ca6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ca6 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._optionsPanel;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$OnDestroy
// il2cpp: void UI_MultiSelectDropdownElement__OnDestroy (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf5570

void UI_MultiSelectDropdownElement__OnDestroy(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ca7 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$Update
// il2cpp: void UI_MultiSelectDropdownElement__Update (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf55f0

void UI_MultiSelectDropdownElement__Update(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *rect_00;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
  if (Il2CppMethodInitialized_07547ca8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547ca8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pUVar3 = (__this->fields)._optionsPanel;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UVar8 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._lastKnownPosition.fields.x;
      uVar2 = (__this->fields)._lastKnownPosition.fields.y;
      fVar5 = UVar8.fields.y - (float)uVar2;
      fVar6 = UVar8.fields.z - (__this->fields)._lastKnownPosition.fields.z;
      fVar7 = UVar8.fields.x - (float)uVar1;
      if (9.9999994e-11 <= fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) {
label_05cf56db:
        UI_MultiSelectDropdownElement__CloseOptions(__this,method_00);
        return;
      }
      bVar4 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pUVar3 = (__this->fields)._optionsPanel;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        pUVar3 = (__this->fields)._selectedButton;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          rect_00 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              (pUVar3,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          UVar8 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          bVar4 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (rect,(UnityEngine_Vector2_o)UVar8.fields._0_8_,(MethodInfo *)0x0);
          if (bVar4) {
            return;
          }
          UVar8 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          method_00 = (MethodInfo *)0x0;
          bVar4 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (rect_00,(UnityEngine_Vector2_o)UVar8.fields._0_8_,(MethodInfo *)0x0);
          if (bVar4) {
            return;
          }
          goto label_05cf56db;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$CreateOptionToggle
// il2cpp: void UI_MultiSelectDropdownElement__CreateOptionToggle (UI_MultiSelectDropdownElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x5cf46d0

void UI_MultiSelectDropdownElement__CreateOptionToggle
               (UI_MultiSelectDropdownElement_o *__this,System_String_o *option,int32_t index,float width,
               float height,int32_t fontSize,System_String_o *themePanel,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_02;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_Collections_Generic_Dictionary_int__object__o *__this_04;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool value_02;
  UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *__this_05;
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  UnityEngine_UI_Text_o *__this_06;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_GameObject_o *__this_07;
  UnityEngine_UI_Image_o *value_03;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_UI_Image_o *pUVar12;
  UnityEngine_UI_Toggle_o *pUVar13;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_UI_Button_o *__this_09;
  UnityEngine_Events_UnityAction_o *__this_10;
  UnityEngine_UI_Toggle_o **targetAddress;
  uint item;
  float fVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547ca9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"      ");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleFilledColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkmark");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownOption");
    Il2CppMethodInitialized_07547ca9 = '\x01';
  }
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0);
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  if (__this_05 != (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *)0x0) {
    (__this_05->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_05->fields).__4__this);
    (__this_05->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar9 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar9,"Prefabs/Elements/DropdownOption",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
    if (root != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
      pUVar10 = (__this->fields)._optionsPanel;
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Options",(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
            pUVar8 = UnityEngine_GameObject__GetComponent_object_
                               (root,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar8,width,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
              pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                 (root,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                          (pUVar8,height,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
                pUVar6 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Label",(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    __this_06 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar6,
                                           (MethodInfo_34B0830 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_Text);
                    pSVar9 = System_String__Concat_52f0320("      ",option,(MethodInfo *)0x0);
                    if (__this_06 != (UnityEngine_UI_Text_o *)0x0) {
                      (*(__this_06->klass->vtable)._75_set_text.methodPtr)
                                (__this_06,pSVar9,(__this_06->klass->vtable)._75_set_text.method);
                      UnityEngine_UI_Text__set_fontSize(__this_06,fontSize,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_alignment(__this_06,3,(MethodInfo *)0x0);
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      UVar15 = UI_UIManager__GetThemeColor
                                         (themePanel,"DefaultSetting","DropdownTextColor",
                                          "DefaultPanel",(MethodInfo *)0x0);
                      (*(__this_06->klass->vtable)._23_set_color.methodPtr)
                                (__this_06,UVar15,(__this_06->klass->vtable)._23_set_color.method);
                      pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                      UnityEngine_GameObject___ctor(pUVar10,"Toggle",(MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar6 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
                        pUVar7 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__SetParent_692d510(pUVar6,pUVar7,false,(MethodInfo *)0x0);
                          pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                              (pUVar10,(MethodInfo_353B6A0 *)
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                              );
                          if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                            fVar14 = height * 0.6;
                            UnityEngine_RectTransform__set_anchorMin
                                      (pUVar11,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (pUVar11,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_pivot
                                      (pUVar11,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar11,(UnityEngine_Vector2_o)0x40a00000,(MethodInfo *)0x0);
                            value.fields.y = fVar14;
                            value.fields.x = fVar14;
                            UnityEngine_RectTransform__set_sizeDelta(pUVar11,value,(MethodInfo *)0x0);
                            __this_07 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                            UnityEngine_GameObject___ctor(__this_07,"Background",(MethodInfo *)0x0);
                            if (__this_07 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar6 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
                              pUVar7 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
                              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__SetParent_692d510
                                          (pUVar6,pUVar7,false,(MethodInfo *)0x0);
                                pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                                    (__this_07,
                                                     (MethodInfo_353B6A0 *)
                                                     MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                                    );
                                if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                  Il2CppMethodInitialized_0753ecc8 = '\x01';
                                }
                                if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar11,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_07542885 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_07542885 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar11,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).
                                                     fields,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_0753ecc8 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar11,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_0753ecc8 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar11,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  value_03 = UnityEngine_GameObject__AddComponent_object_
                                                       (__this_07,
                                                        (MethodInfo_353B6A0 *)
                                                        MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                                  UI_UIManager__GetThemeColorBlock
                                            (&local_88,themePanel,"DefaultSetting","Toggle",
                                             "DefaultPanel",(MethodInfo *)0x0);
                                  uVar4 = local_88.fields.m_NormalColor.fields._8_8_;
                                  uVar2 = local_88.fields.m_NormalColor.fields._0_8_;
                                  if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0
                                     ) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
                                  }
                                  uVar5 = local_88.fields.m_NormalColor.fields._8_8_;
                                  uVar3 = local_88.fields.m_NormalColor.fields._0_8_;
                                  if (value_03 != (UnityEngine_UI_Image_o *)0x0) {
                                    local_88.fields.m_NormalColor.fields.b = (float)uVar4;
                                    local_88.fields.m_NormalColor.fields.a = SUB84(uVar4,4);
                                    UVar15.fields.b = local_88.fields.m_NormalColor.fields.b;
                                    UVar15.fields.a = local_88.fields.m_NormalColor.fields.a;
                                    local_88.fields.m_NormalColor.fields.r = (float)uVar2;
                                    local_88.fields.m_NormalColor.fields.g = SUB84(uVar2,4);
                                    UVar15.fields.r = local_88.fields.m_NormalColor.fields.r;
                                    UVar15.fields.g = local_88.fields.m_NormalColor.fields.g;
                                    local_88.fields.m_NormalColor.fields._0_8_ = uVar3;
                                    local_88.fields.m_NormalColor.fields._8_8_ = uVar5;
                                    (*(value_03->klass->vtable)._23_set_color.methodPtr)
                                              (value_03,UVar15,(value_03->klass->vtable)._23_set_color.method)
                                    ;
                                    __this_08 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                    UnityEngine_GameObject___ctor
                                              (__this_08,"Checkmark",(MethodInfo *)0x0);
                                    if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar6 = UnityEngine_GameObject__get_transform
                                                         (__this_08,(MethodInfo *)0x0);
                                      pUVar7 = UnityEngine_GameObject__get_transform
                                                         (__this_07,(MethodInfo *)0x0);
                                      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                        UnityEngine_Transform__SetParent_692d510
                                                  (pUVar6,pUVar7,false,(MethodInfo *)0x0);
                                        pUVar11 = UnityEngine_GameObject__AddComponent_object_
                                                            (__this_08,
                                                             (MethodInfo_353B6A0 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                                       );
                                        if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchorMin
                                                    (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_pivot
                                                    (pUVar11,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&TypeInfo_UnityEngine_Vector2);
                                            Il2CppMethodInitialized_0753ecc8 = '\x01';
                                          }
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar11,(UnityEngine_Vector2_o)
                                                             (TypeInfo_UnityEngine_Vector2->static_fields->
                                                             zeroVector).fields,(MethodInfo *)0x0);
                                          fVar14 = fVar14 * (__this->fields)._checkMarkSizeMultiplier;
                                          value_00.fields.y = fVar14;
                                          value_00.fields.x = fVar14;
                                          UnityEngine_RectTransform__set_sizeDelta
                                                    (pUVar11,value_00,(MethodInfo *)0x0);
                                          pUVar12 = UnityEngine_GameObject__AddComponent_object_
                                                              (__this_08,
                                                               (MethodInfo_353B6A0 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                                          UVar15 = UI_UIManager__GetThemeColor
                                                             (themePanel,"DefaultSetting",
                                                              "ToggleFilledColor","DefaultPanel",
                                                              (MethodInfo *)0x0);
                                          if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
                                            (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                                                      (pUVar12,UVar15,
                                                       (pUVar12->klass->vtable)._23_set_color.method);
                                            pUVar13 = UnityEngine_GameObject__AddComponent_object_
                                                                (pUVar10,(MethodInfo_353B6A0 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
                                            targetAddress = &(__this_05->fields).toggle;
                                            (__this_05->fields).toggle = pUVar13;
                                            Il2CppCodeGenWriteBarrier(targetAddress);
                                            pUVar13 = (__this_05->fields).toggle;
                                            if (pUVar13 != (UnityEngine_UI_Toggle_o *)0x0) {
                                              UnityEngine_UI_Selectable__set_targetGraphic
                                                        ((UnityEngine_UI_Selectable_o *)pUVar13,
                                                         (UnityEngine_UI_Graphic_o *)value_03,
                                                         (MethodInfo *)0x0);
                                              pUVar13 = *targetAddress;
                                              if (pUVar13 != (UnityEngine_UI_Toggle_o *)0x0) {
                                                (pUVar13->fields).graphic =
                                                     (UnityEngine_UI_Graphic_o *)pUVar12;
                                                Il2CppCodeGenWriteBarrier(&(pUVar13->fields).graphic);
                                                item = (__this_05->fields).index;
                                                pSVar1 = (__this->fields)._intOptionValues;
                                                if (pSVar1 != (System_Int32_array *)0x0) {
                                                  if ((uint)pSVar1->max_length <= item) {
                                                    ThrowIndexOutOfRangeException();
                                                  }
                                                  item = pSVar1->m_Items[(int)item];
                                                }
                                                __this_00 = (__this->fields)._hashSetSetting;
                                                if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
                                                  pUVar13 = *targetAddress;
                                                  value_02 = Settings_HashSetSetting_int___Contains
                                                                       (__this_00,item,
                                                                        (MethodInfo_4F647F0 *)
                                                                                                                                                
                                                       MethodInfo_Settings_HashSetSetting_int_Contains);
                                                  if (pUVar13 != (UnityEngine_UI_Toggle_o *)0x0) {
                                                    UnityEngine_UI_Toggle__set_isOn
                                                              (pUVar13,value_02,(MethodInfo *)0x0);
                                                    if (*targetAddress != (UnityEngine_UI_Toggle_o *)0x0) {
                                                      __this_01 = (UnityEngine_Events_UnityEvent_bool__o *)
                                                                  ((*targetAddress)->fields).onValueChanged;
                                                      call = (UnityEngine_Events_UnityAction_T0__o *)
                                                             il2cpp_codegen_object_new
                                                                       ((Il2CppClass *)
                                                                                                                                                
                                                       TypeInfo_UnityEngine_Events_UnityAction_bool);
                                                      UnityEngine_Events_UnityAction_bool____ctor
                                                                ((UnityEngine_Events_UnityAction_bool__o *)
                                                                 call,(Il2CppObject *)__this_05,
                                                                 (intptr_t)
                                                                                                                                  
                                                       MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__0
                                                       ,(MethodInfo_4311710 *)0x0);
                                                      if (__this_01 !=
                                                          (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                                                        UnityEngine_Events_UnityEvent_bool___AddListener
                                                                  (__this_01,call,
                                                                   (MethodInfo_43179D0 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener
                                                       );
                                                       __this_09 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (root,(MethodInfo_353B730 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                       if ((__this_09 != (UnityEngine_UI_Button_o *)0x0) &&
                                                          (__this_02 = (__this_09->fields).m_OnClick,
                                                          __this_02 !=
                                                          (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0))
                                                       {
                                                         UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                                                   ((UnityEngine_Events_UnityEventBase_o *)
                                                                    __this_02,(MethodInfo *)0x0);
                                                         UI_UIManager__GetThemeColorBlock
                                                                   (&local_88,themePanel,"DefaultSetting"
                                                                    ,"Dropdown",
                                                                    "DefaultPanel",(MethodInfo *)0x0);
                                                         value_01.fields.m_NormalColor.fields.b =
                                                              local_88.fields.m_NormalColor.fields.b;
                                                         value_01.fields.m_NormalColor.fields.a =
                                                              local_88.fields.m_NormalColor.fields.a;
                                                         value_01.fields.m_NormalColor.fields.r =
                                                              local_88.fields.m_NormalColor.fields.r;
                                                         value_01.fields.m_NormalColor.fields.g =
                                                              local_88.fields.m_NormalColor.fields.g;
                                                         value_01.fields.m_HighlightedColor.fields.r =
                                                              local_88.fields.m_HighlightedColor.fields.r;
                                                         value_01.fields.m_HighlightedColor.fields.g =
                                                              local_88.fields.m_HighlightedColor.fields.g;
                                                         value_01.fields.m_HighlightedColor.fields.b =
                                                              local_88.fields.m_HighlightedColor.fields.b;
                                                         value_01.fields.m_HighlightedColor.fields.a =
                                                              local_88.fields.m_HighlightedColor.fields.a;
                                                         value_01.fields.m_PressedColor.fields.r =
                                                              local_88.fields.m_PressedColor.fields.r;
                                                         value_01.fields.m_PressedColor.fields.g =
                                                              local_88.fields.m_PressedColor.fields.g;
                                                         value_01.fields.m_PressedColor.fields.b =
                                                              local_88.fields.m_PressedColor.fields.b;
                                                         value_01.fields.m_PressedColor.fields.a =
                                                              local_88.fields.m_PressedColor.fields.a;
                                                         value_01.fields.m_SelectedColor.fields.r =
                                                              local_88.fields.m_SelectedColor.fields.r;
                                                         value_01.fields.m_SelectedColor.fields.g =
                                                              local_88.fields.m_SelectedColor.fields.g;
                                                         value_01.fields.m_SelectedColor.fields.b =
                                                              local_88.fields.m_SelectedColor.fields.b;
                                                         value_01.fields.m_SelectedColor.fields.a =
                                                              local_88.fields.m_SelectedColor.fields.a;
                                                         value_01.fields.m_DisabledColor.fields.r =
                                                              local_88.fields.m_DisabledColor.fields.r;
                                                         value_01.fields.m_DisabledColor.fields.g =
                                                              local_88.fields.m_DisabledColor.fields.g;
                                                         value_01.fields.m_DisabledColor.fields.b =
                                                              local_88.fields.m_DisabledColor.fields.b;
                                                         value_01.fields.m_DisabledColor.fields.a =
                                                              local_88.fields.m_DisabledColor.fields.a;
                                                         value_01.fields.m_ColorMultiplier =
                                                              local_88.fields.m_ColorMultiplier;
                                                         value_01.fields.m_FadeDuration =
                                                              local_88.fields.m_FadeDuration;
                                                         UnityEngine_UI_Selectable__set_colors
                                                                   ((UnityEngine_UI_Selectable_o *)__this_09,
                                                                    value_01,(MethodInfo *)0x0);
                                                         __this_03 = (UnityEngine_Events_UnityEvent_o *)
                                                                     (__this_09->fields).m_OnClick;
                                                         __this_10 = il2cpp_codegen_object_new
                                                                               ((Il2CppClass *)
                                                                                                                                                                
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Events_UnityAction___ctor
                                                                 (__this_10,(Il2CppObject *)__this_05,
                                                                  (intptr_t)
                                                                                                                                    
                                                       MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__1
                                                       ,(MethodInfo *)0x0);
                                                       if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                          ) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (__this_03,__this_10,(MethodInfo *)0x0);
                                                         __this_04 = (
                                                       System_Collections_Generic_Dictionary_int__object__o *)
                                                       (__this->fields)._toggles;
                                                       if (__this_04 !=
                                                           (
                                                       System_Collections_Generic_Dictionary_int__object__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_int__object___set_Item
                                                                 (__this_04,(__this_05->fields).index,
                                                                  (Il2CppObject *)(__this_05->fields).toggle,
                                                                  (MethodInfo_4A0F720 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_set_Item
                                                       );
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
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$OnToggleValueChanged
// il2cpp: void UI_MultiSelectDropdownElement__OnToggleValueChanged (UI_MultiSelectDropdownElement_o* __this, int32_t index, bool value, const MethodInfo* method);
// 0x5cf5890

void UI_MultiSelectDropdownElement__OnToggleValueChanged
               (UI_MultiSelectDropdownElement_o *__this,int32_t index,bool value,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547caa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Remove);
    Il2CppMethodInitialized_07547caa = '\x01';
  }
  pSVar1 = (__this->fields)._intOptionValues;
  if (pSVar1 != (System_Int32_array *)0x0) {
    if ((uint)pSVar1->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    index = pSVar1->m_Items[index];
  }
  __this_00 = (__this->fields)._hashSetSetting;
  if (value) {
    if (__this_00 == (Settings_HashSetSetting_int__o *)0x0) {
label_05cf593d:
      ThrowNullReferenceException();
    }
    Settings_HashSetSetting_int___Add
              (__this_00,index,(MethodInfo_4F64820 *)MethodInfo_Settings_HashSetSetting_int_Add);
    pUVar2 = (__this->fields)._onSelectionChanged;
  }
  else {
    if (__this_00 == (Settings_HashSetSetting_int__o *)0x0) goto label_05cf593d;
    Settings_HashSetSetting_int___Remove
              (__this_00,index,(MethodInfo_4F64850 *)MethodInfo_Settings_HashSetSetting_int_Remove);
    pUVar2 = (__this->fields)._onSelectionChanged;
  }
  if (pUVar2 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
  return;
}


// UI.MultiSelectDropdownElement$$GetOptionValue
// il2cpp: int32_t UI_MultiSelectDropdownElement__GetOptionValue (UI_MultiSelectDropdownElement_o* __this, int32_t index, const MethodInfo* method);
// 0x5cf5860

int32_t UI_MultiSelectDropdownElement__GetOptionValue
                  (UI_MultiSelectDropdownElement_o *__this,int32_t index,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  
  pSVar1 = (__this->fields)._intOptionValues;
  if (pSVar1 != (System_Int32_array *)0x0) {
    if ((uint)pSVar1->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    index = pSVar1->m_Items[index];
  }
  return index;
}


// UI.MultiSelectDropdownElement$$OnDropdownSelectedButtonClick
// il2cpp: void UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf5950

void UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    UI_MultiSelectDropdownElement__CloseOptions(__this,method_00);
    return;
  }
  if (Il2CppMethodInitialized_07547cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
    Il2CppMethodInitialized_07547cab = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).__1__state = 0;
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
             (MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$WaitAndEnableOptions
// il2cpp: System_Collections_IEnumerator_o* UI_MultiSelectDropdownElement__WaitAndEnableOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf59f0

System_Collections_IEnumerator_o *
UI_MultiSelectDropdownElement__WaitAndEnableOptions
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_07547cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
    Il2CppMethodInitialized_07547cab = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MultiSelectDropdownElement$$CloseOptions
// il2cpp: void UI_MultiSelectDropdownElement__CloseOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf57c0

void UI_MultiSelectDropdownElement__CloseOptions(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547cac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cac = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_05cf583d;
    fVar3 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar3;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
label_05cf583d:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$SyncElement
// il2cpp: void UI_MultiSelectDropdownElement__SyncElement (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf5a80
// eh: try 0x5cf5b54..0x5cf5bdb -> pad 0x5cf5be2 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cf5bfd..0x5cf5c02 -> pad 0x5cf5c23 cleanup
// eh: try 0x5cf5c26..0x5cf5c2e -> pad 0x5cf5c36 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cf5b4c: nop dword ptr [rax]
// asm:   0x5cf5be0: jmp 0x5cf5be6
// asm:   0x5cf5be2: jmp 0x5cf5be6
// asm:   0x5cf5be4: jmp 0x5cf5be6
// asm:   0x5cf5be6: mov rbx, rax
// asm:   0x5cf5be9: cmp edx, 1
// asm:   0x5cf5bec: jne 0x5cf5c26
// asm:   0x5cf5bee: mov rdi, rbx
// asm:   0x5cf5bf1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cf5bf6: mov rbx, qword ptr [rax]
// asm:   0x5cf5bf9: mov qword ptr [rsp], rbx
// asm:   0x5cf5bfd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cf5c02: lea rax, [rip + 0x1599e5f]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_Dispose
// asm:   0x5cf5c09: mov rsi, qword ptr [rax]
// asm:   0x5cf5c0c: lea rdi, [rsp + 0x10]
// asm:   0x5cf5c11: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x5cf5c16: test rbx, rbx
// asm:   0x5cf5c19: je 0x5cf5bbe
// asm:   0x5cf5c1b: mov rdi, rbx
// asm:   0x5cf5c1e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cf5c23: mov rbx, rax
// asm:   0x5cf5c26: mov rdi, rsp
// asm:   0x5cf5c29: call 0x2fdb9f0  ; il2cpp_runtime_helper_02fdb9f0()
// asm:   0x5cf5c2e: mov rdi, rbx
// asm:   0x5cf5c31: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cf5c36: mov rdi, rax
// asm:   0x5cf5c39: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MultiSelectDropdownElement__SyncElement(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Settings_HashSetSetting_int__o *__this_01;
  System_Int32_array *pSVar1;
  Il2CppObject *__this_02;
  bool bVar2;
  uint item;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_07547cad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_Toggle_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_Toggle_get_Value);
    Il2CppMethodInitialized_07547cad = '\x01';
  }
  local_58.fields._current.fields.key = (Il2CppObject *)0x0;
  local_58.fields._current.fields.value = (Il2CppObject *)0x0;
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._version = 0;
  local_58.fields._index = 0;
  local_58.fields._getEnumeratorRetType = 0;
  local_58.fields._36_4_ = 0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._toggles;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator
            (&local_58,__this_00,
             (MethodInfo_4A0FBD0 *)MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_GetEnumerator);
  while( true ) {
    bVar2 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                      (&local_58,
                       (MethodInfo_4CA10B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_MoveNext);
    __this_02 = local_58.fields._current.fields.value;
    if (!bVar2) {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                (&local_58,
                 (MethodInfo_4CA11D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_Dispose);
      return;
    }
    __this_01 = (__this->fields)._hashSetSetting;
    pSVar1 = (__this->fields)._intOptionValues;
    item = (uint)local_58.fields._current.fields.key;
    if (pSVar1 != (System_Int32_array *)0x0) {
      if ((uint)pSVar1->max_length <= (uint)local_58.fields._current.fields.key) {
        ThrowIndexOutOfRangeException();
      }
      item = pSVar1->m_Items[(int)(uint)local_58.fields._current.fields.key];
    }
    if (__this_01 == (Settings_HashSetSetting_int__o *)0x0) break;
    bVar2 = Settings_HashSetSetting_int___Contains
                      (__this_01,item,(MethodInfo_4F647F0 *)MethodInfo_Settings_HashSetSetting_int_Contains);
    if ((UnityEngine_UI_Toggle_o *)__this_02 == (UnityEngine_UI_Toggle_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_UI_Toggle__set_isOn((UnityEngine_UI_Toggle_o *)__this_02,bVar2,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___ctor (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf5c40

void UI_MultiSelectDropdownElement___ctor(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  System_Collections_Generic_Dictionary_int__Toggle__o *__this_00;
  
  if (Il2CppMethodInitialized_07547cae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_Toggle);
    Il2CppMethodInitialized_07547cae = '\x01';
  }
  (__this->fields)._currentScrollValue = 1.0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_Toggle);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_ctor);
  (__this->fields)._toggles = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggles);
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._lastKnownPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._lastKnownPosition.fields.y = fVar3;
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  (__this->fields)._checkMarkSizeMultiplier = 0.67;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$<Setup>b__17_0
// il2cpp: void UI_MultiSelectDropdownElement___Setup_b__17_0 (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x5cf5d20

void UI_MultiSelectDropdownElement___Setup_b__17_0(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick(__this,method);
  return;
}


