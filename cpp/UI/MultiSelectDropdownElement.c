// Type: UI.MultiSelectDropdownElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiSelectDropdownElement.cs
// Prior source: NEW in this update
// --------------------------------

// UI.MultiSelectDropdownElement.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass22_0___ctor (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40882a0

void UI_MultiSelectDropdownElement_<>c__DisplayClass22_0___ctor
               (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass22_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass22_0___CreateOptionToggle_b__0 (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o* __this, bool value, const MethodInfo* method);
// 0x4088740

void UI_MultiSelectDropdownElement_<>c__DisplayClass22_0__<CreateOptionToggle>b__0
               (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o *__this,bool_conflict value,
               MethodInfo *method)

{
  int32_t item;
  UI_MultiSelectDropdownElement_o *pUVar1;
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MultiSelectDropdownElement_o *)0x0) {
    item = (__this->fields).index;
    if (DAT_05704551 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Add);
      il2cpp_init_method_metadata(&MethodInfo_Void_Remove);
      DAT_05704551 = '\x01';
    }
    __this_00 = (pUVar1->fields)._hashSetSetting;
    if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
      if ((char)value == '\0') {
        Settings_HashSetSetting<int>__Remove(__this_00,item,MethodInfo_Void_Remove);
        pUVar2 = (pUVar1->fields)._onSelectionChanged;
      }
      else {
        Settings_HashSetSetting<int>__Add(__this_00,item,MethodInfo_Void_Add);
        pUVar2 = (pUVar1->fields)._onSelectionChanged;
      }
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)
                  ((pUVar2->fields).method_code,(pUVar2->fields).method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass22_0$$<CreateOptionToggle>b__1
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass22_0___CreateOptionToggle_b__1 (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40887f0

void UI_MultiSelectDropdownElement_<>c__DisplayClass22_0__<CreateOptionToggle>b__1
               (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *__this_00;
  
  __this_00 = (__this->fields).toggle;
  if (__this_00 != (UnityEngine_UI_Toggle_o *)0x0) {
    UnityEngine_UI_Toggle__set_isOn
              (__this_00,(uint)(*(char *)&(__this_00->fields).onValueChanged == '\0'),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25___ctor (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4088460

void UI_MultiSelectDropdownElement_<WaitAndEnableOptions>d__25___ctor
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.IDisposable.Dispose
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_IDisposable_Dispose (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x4088820

void UI_MultiSelectDropdownElement_<WaitAndEnableOptions>d__25__System_IDisposable_Dispose
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$MoveNext
// il2cpp: bool UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__MoveNext (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x4088830

bool_conflict
UI_MultiSelectDropdownElement_<WaitAndEnableOptions>d__25__MoveNext
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MultiSelectDropdownElement_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_Fields UVar7;
  
  if (DAT_05704556 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05704556 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      pUVar3 = (__this_00->fields)._scrollBar;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pUVar3 = (__this_00->fields)._scrollBar;
        if (pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_04088a11;
        UnityEngine_UI_Scrollbar__set_value
                  (pUVar3,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0);
      }
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        (__this->fields).__1__state = -1;
        pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar5;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar5);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar5 >> 8),1);
      }
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      UI_MultiSelectDropdownElement__SetOptionsPosition(__this_00,method);
      pUVar2 = (__this_00->fields)._optionsPanel;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar6 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetAsLastSibling(pUVar6,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UVar7 = (UnityEngine_Vector3_Fields)
                  UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          (__this_00->fields)._lastKnownPosition.fields = UVar7;
          pUVar2 = (__this_00->fields)._optionsPanel;
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
            pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor
                      ((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar5;
            il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar5);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar5 >> 8),1);
          }
        }
      }
    }
  }
LAB_04088a11:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x4088a20

Il2CppObject *
UI_MultiSelectDropdownElement_<WaitAndEnableOptions>d__25__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_Reset (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x4088a30

void UI_MultiSelectDropdownElement_<WaitAndEnableOptions>d__25__System_Collections_IEnumerator_Reset
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,
               MethodInfo *method)

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


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_get_Current (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x4088a70

Il2CppObject *
UI_MultiSelectDropdownElement_<WaitAndEnableOptions>d__25__System_Collections_IEnumerator_get_Current
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_MultiSelectDropdownElement__get_SupportedSettingTypes (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x40865f0

System_Collections_Generic_HashSet_SettingType__o *
UI_MultiSelectDropdownElement__get_SupportedSettingTypes
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704549 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704549 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  return __this_00;
}


// UI.MultiSelectDropdownElement$$Setup
// il2cpp: void UI_MultiSelectDropdownElement__Setup (UI_MultiSelectDropdownElement_o* __this, Settings_HashSetSetting_int__o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onSelectionChanged, const MethodInfo* method);
// 0x4086650

void UI_MultiSelectDropdownElement__Setup
               (UI_MultiSelectDropdownElement_o *__this,Settings_HashSetSetting_int__o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,float optionsWidth,
               float maxScrollHeight,UnityEngine_Events_UnityAction_o *onSelectionChanged,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o **ppUVar4;
  uint uVar5;
  Il2CppClass *__this_00;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_o *call;
  ulong uVar10;
  UnityEngine_UI_Selectable_o *__this_01;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_Scrollbar_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  undefined8 uVar14;
  System_ArgumentException_o *__this_03;
  System_String_o *pSVar15;
  MethodInfo *method_00;
  ulong uVar16;
  UnityEngine_Color_o UVar17;
  float local_118;
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = (MethodInfo *)tooltip;
  if (DAT_0570454a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"DropdownTextColor");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"DropdownBorderColor");
    il2cpp_init_method_metadata(&"DropdownScrollbarBackgroundColor");
    il2cpp_init_method_metadata(&"DropdownScrollbar");
    il2cpp_init_method_metadata(&"Dropdown/Mask");
    il2cpp_init_method_metadata(&"Dropdown");
    il2cpp_init_method_metadata(&"Image");
    il2cpp_init_method_metadata(&"Scrollbar");
    il2cpp_init_method_metadata(&"Dropdown/SelectedButton");
    il2cpp_init_method_metadata(&"Options");
    DAT_0570454a = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      uVar14 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
      __this_03 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar14);
      pSVar15 = (System_String_o *)il2cpp_init_method_metadata(&"MultiSelectDropdown cannot have 0 options.");
      System_ArgumentException___ctor(__this_03,pSVar15,(MethodInfo *)0x0);
      uVar14 = il2cpp_init_method_metadata(&MethodInfo_Void_Setup);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_03,uVar14);
    }
    (__this->fields)._hashSetSetting = setting;
    il2cpp_runtime_glue(&(__this->fields)._hashSetSetting,setting);
    (__this->fields)._onSelectionChanged = onSelectionChanged;
    il2cpp_runtime_glue(&(__this->fields)._onSelectionChanged,onSelectionChanged);
    (__this->fields)._options = options;
    il2cpp_runtime_glue(&(__this->fields)._options,options);
    if (style != (UI_ElementStyle_o *)0x0) {
      (__this->fields)._themePanel = (style->fields).ThemePanel;
      il2cpp_runtime_glue(&(__this->fields)._themePanel);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__Find(pUVar7,"Dropdown/Mask",(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          ppUVar1 = &(__this->fields)._optionsPanel;
          (__this->fields)._optionsPanel = pUVar8;
          il2cpp_runtime_glue(ppUVar1);
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pUVar7 = UnityEngine_Transform__Find(pUVar7,"Dropdown/SelectedButton",(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              ppUVar2 = &(__this->fields)._selectedButton;
              (__this->fields)._selectedButton = pUVar8;
              il2cpp_runtime_glue(ppUVar2);
              pUVar8 = (__this->fields)._selectedButton;
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                pUVar7 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  pUVar7 = UnityEngine_Transform__Find(pUVar7,"Label",(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                    ppUVar3 = &(__this->fields)._selectedButtonLabel;
                    (__this->fields)._selectedButtonLabel = pUVar8;
                    il2cpp_runtime_glue(ppUVar3,pUVar8);
                    UI_BaseSettingElement__SetupLabel
                              ((UI_BaseSettingElement_o *)__this,
                               (__this->fields)._selectedButtonLabel,title,(style->fields).FontSize,
                               (MethodInfo *)0x0);
                    pUVar8 = (__this->fields)._selectedButton;
                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar9 = UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Button_GetComponent_Button);
                      if (pIVar9 != (Il2CppObject *)0x0) {
                        __this_00 = pIVar9[0x10].klass;
                        call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        if (__this_00 != (Il2CppClass *)0x0) {
                          UnityEngine_Events_UnityEvent__AddListener
                                    ((UnityEngine_Events_UnityEvent_o *)__this_00,call,
                                     (MethodInfo *)0x0);
                          if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                            pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                               (*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                            if (pIVar9 != (Il2CppObject *)0x0) {
                              (*pIVar9->klass->vtable[0x24].methodPtr)
                                        (elementWidth,pIVar9,pIVar9->klass->vtable[0x24].method);
                              if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                                   (*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                if (pIVar9 != (Il2CppObject *)0x0) {
                                  (*pIVar9->klass->vtable[0x26].methodPtr)
                                            (elementHeight,pIVar9,pIVar9->klass->vtable[0x26].method
                                            );
                                  if (0 < (int)options->max_length) {
                                    uVar10 = options->max_length & 0xffffffff;
                                    uVar16 = 0;
                                    do {
                                      if (uVar10 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                                        il2cpp_raise_exception();
                                      }
                                      UI_MultiSelectDropdownElement__CreateOptionToggle
                                                (__this,options->m_Items[uVar16],(int32_t)uVar16,
                                                 optionsWidth,elementHeight,(style->fields).FontSize
                                                 ,(style->fields).ThemePanel,method_00);
                                      uVar16 = uVar16 + 1;
                                      uVar5 = (uint)options->max_length;
                                      uVar10 = (ulong)uVar5;
                                    } while ((long)uVar16 < (long)(int)uVar5);
                                  }
                                  if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                    __this_01 = (UnityEngine_UI_Selectable_o *)
                                                UnityEngine_GameObject__GetComponent<object>
                                                          (*ppUVar2,MethodInfo_Button_GetComponent_Button);
                                    pSVar15 = (style->fields).ThemePanel;
                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    UI_UIManager__GetThemeColorBlock
                                              (&local_88,pSVar15,"DefaultSetting","Dropdown",
                                               "DefaultPanel",(MethodInfo *)0x0);
                                    if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
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
                                                (__this_01,value,(MethodInfo *)0x0);
                                      pUVar8 = *ppUVar3;
                                      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                        pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                                           (pUVar8,MethodInfo_Text_GetComponent_Text);
                                        UVar17 = UI_UIManager__GetThemeColor
                                                           ((style->fields).ThemePanel,"DefaultSetting",
                                                            "DropdownTextColor","DefaultPanel",
                                                            (MethodInfo *)0x0);
                                        if (pIVar9 != (Il2CppObject *)0x0) {
                                          (*pIVar9->klass->vtable[0x17].methodPtr)
                                                    (UVar17.fields.r,UVar17.fields.b,pIVar9);
                                          if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar7 = UnityEngine_GameObject__get_transform
                                                               (*ppUVar2,(MethodInfo *)0x0);
                                            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                              pUVar7 = UnityEngine_Transform__Find
                                                                 (pUVar7,"Image",
                                                                  (MethodInfo *)0x0);
                                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                pIVar9 = UnityEngine_Component__GetComponent<object>
                                                                   ((UnityEngine_Component_o *)
                                                                    pUVar7,MethodInfo_Image_GetComponent_Image);
                                                UVar17 = UI_UIManager__GetThemeColor
                                                                   ((style->fields).ThemePanel,
                                                                    "DefaultSetting","DropdownTextColor",
                                                                    "DefaultPanel",(MethodInfo *)0x0);
                                                if (pIVar9 != (Il2CppObject *)0x0) {
                                                  (*pIVar9->klass->vtable[0x17].methodPtr)
                                                            (UVar17.fields.r,UVar17.fields.b,pIVar9)
                                                  ;
                                                  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar7 = UnityEngine_GameObject__get_transform
                                                                       (*ppUVar1,(MethodInfo *)0x0);
                                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                      pUVar7 = UnityEngine_Transform__Find
                                                                         (pUVar7,"Options",
                                                                          (MethodInfo *)0x0);
                                                      if (pUVar7 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        pIVar9 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar7,
                                                             MethodInfo_Image_GetComponent_Image);
                                                  UVar17 = UI_UIManager__GetThemeColor
                                                                     ((style->fields).ThemePanel,
                                                                      "DefaultSetting","DropdownBorderColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0
                                                                     );
                                                  if (pIVar9 != (Il2CppObject *)0x0) {
                                                    (*pIVar9->klass->vtable[0x17].methodPtr)
                                                              (UVar17.fields.r,UVar17.fields.b);
                                                    UnityEngine_Canvas__ForceUpdateCanvases
                                                              ((MethodInfo *)0x0);
                                                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0)
                                                    {
                                                      pUVar7 = UnityEngine_GameObject__get_transform
                                                                         (*ppUVar1,(MethodInfo *)0x0
                                                                         );
                                                      if (pUVar7 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        pUVar7 = UnityEngine_Transform__Find
                                                                           (pUVar7,"Options",
                                                                            (MethodInfo *)0x0);
                                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0
                                                           ) {
                                                          pUVar11 = (UnityEngine_RectTransform_o *)
                                                                                                                                        
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar7,
                                                             MethodInfo_RectTransform_GetComponent_RectTransform);
                                                  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0)
                                                  {
                                                    UVar6 = UnityEngine_RectTransform__get_sizeDelta
                                                                      (pUVar11,(MethodInfo *)0x0);
                                                    local_118 = maxScrollHeight;
                                                    if (UVar6.fields.y <= maxScrollHeight) {
                                                      if (*ppUVar1 ==
                                                          (UnityEngine_GameObject_o *)0x0)
                                                      goto LAB_040871d7;
                                                      __this_02 = (UnityEngine_UI_ScrollRect_o *)
                                                                                                                                    
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (*ppUVar1,MethodInfo_ScrollRect_GetComponent_ScrollRect);
                                                  if (__this_02 ==
                                                      (UnityEngine_UI_ScrollRect_o *)0x0)
                                                  goto LAB_040871d7;
                                                  UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                            (__this_02,
                                                             (UnityEngine_UI_Scrollbar_o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0)
                                                  goto LAB_040871d7;
                                                  pUVar7 = UnityEngine_GameObject__get_transform
                                                                     (*ppUVar1,(MethodInfo *)0x0);
                                                  if (pUVar7 == (UnityEngine_Transform_o *)0x0)
                                                  goto LAB_040871d7;
                                                  pUVar7 = UnityEngine_Transform__Find
                                                                     (pUVar7,"Scrollbar",
                                                                      (MethodInfo *)0x0);
                                                  if (pUVar7 == (UnityEngine_Transform_o *)0x0)
                                                  goto LAB_040871d7;
                                                  pUVar8 = UnityEngine_Component__get_gameObject
                                                                     ((UnityEngine_Component_o *)
                                                                      pUVar7,(MethodInfo *)0x0);
                                                  if (pUVar8 == (UnityEngine_GameObject_o *)0x0)
                                                  goto LAB_040871d7;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar8,0,(MethodInfo *)0x0);
                                                  local_118 = UVar6.fields.y;
                                                  }
                                                  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar7 = UnityEngine_GameObject__get_transform
                                                                       (*ppUVar1,(MethodInfo *)0x0);
                                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                      pUVar7 = UnityEngine_Transform__Find
                                                                         (pUVar7,"Scrollbar",
                                                                          (MethodInfo *)0x0);
                                                      if (pUVar7 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        pUVar12 = (UnityEngine_UI_Scrollbar_o *)
                                                                                                                                    
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar7,
                                                             MethodInfo_Scrollbar_GetComponent_Scrollbar);
                                                  ppUVar4 = &(__this->fields)._scrollBar;
                                                  (__this->fields)._scrollBar = pUVar12;
                                                  il2cpp_runtime_glue(ppUVar4,pUVar12);
                                                  pUVar12 = (__this->fields)._scrollBar;
                                                  pSVar15 = (style->fields).ThemePanel;
                                                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  UI_UIManager__GetThemeColorBlock
                                                            (&local_88,pSVar15,"DefaultSetting",
                                                             "DropdownScrollbar","DefaultPanel",
                                                             (MethodInfo *)0x0);
                                                  if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0)
                                                  {
                                                    value_00.fields.m_NormalColor.fields.b =
                                                         local_88.fields.m_NormalColor.fields.b;
                                                    value_00.fields.m_NormalColor.fields.a =
                                                         local_88.fields.m_NormalColor.fields.a;
                                                    value_00.fields.m_NormalColor.fields.r =
                                                         local_88.fields.m_NormalColor.fields.r;
                                                    value_00.fields.m_NormalColor.fields.g =
                                                         local_88.fields.m_NormalColor.fields.g;
                                                    value_00.fields.m_HighlightedColor.fields.r =
                                                         local_88.fields.m_HighlightedColor.fields.r
                                                    ;
                                                    value_00.fields.m_HighlightedColor.fields.g =
                                                         local_88.fields.m_HighlightedColor.fields.g
                                                    ;
                                                    value_00.fields.m_HighlightedColor.fields.b =
                                                         local_88.fields.m_HighlightedColor.fields.b
                                                    ;
                                                    value_00.fields.m_HighlightedColor.fields.a =
                                                         local_88.fields.m_HighlightedColor.fields.a
                                                    ;
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
                                                    value_00.fields.m_FadeDuration =
                                                         local_88.fields.m_FadeDuration;
                                                    UnityEngine_UI_Selectable__set_colors
                                                              ((UnityEngine_UI_Selectable_o *)
                                                               pUVar12,value_00,(MethodInfo *)0x0);
                                                    pUVar12 = *ppUVar4;
                                                    if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0
                                                       ) {
                                                      pIVar9 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar12,
                                                             MethodInfo_Image_GetComponent_Image);
                                                  UVar17 = UI_UIManager__GetThemeColor
                                                                     ((style->fields).ThemePanel,
                                                                      "DefaultSetting","DropdownScrollbarBackgroundColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0
                                                                     );
                                                  if (pIVar9 != (Il2CppObject *)0x0) {
                                                    (*pIVar9->klass->vtable[0x17].methodPtr)
                                                              (UVar17.fields.r,UVar17.fields.b,
                                                               pIVar9,pIVar9->klass->vtable[0x17].
                                                                      method);
                                                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0)
                                                    {
                                                      pUVar11 = (UnityEngine_RectTransform_o *)
                                                                                                                                
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
                                                  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0)
                                                  {
                                                    UVar6.fields.y = local_118;
                                                    UVar6.fields.x = optionsWidth;
                                                    UnityEngine_RectTransform__set_sizeDelta
                                                              (pUVar11,UVar6,(MethodInfo *)0x0);
                                                    pUVar7 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        __this,(MethodInfo *)0x0);
                                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                      pUVar7 = UnityEngine_Transform__Find
                                                                         (pUVar7,"Label",
                                                                          (MethodInfo *)0x0);
                                                      if (pUVar7 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        pIVar9 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar7,
                                                             MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                                  if (pIVar9 != (Il2CppObject *)0x0) {
                                                    (*pIVar9->klass->vtable[0x26].methodPtr)
                                                              (elementHeight,pIVar9);
                                                    pUVar7 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        __this,(MethodInfo *)0x0);
                                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                      pUVar7 = UnityEngine_Transform__Find
                                                                         (pUVar7,"Label",
                                                                          (MethodInfo *)0x0);
                                                      if (pUVar7 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        pUVar8 = 
                                                  UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pUVar7,
                                                             (MethodInfo *)0x0);
                                                  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar8,0,(MethodInfo *)0x0);
                                                    UI_BaseSettingElement__SetupTooltip
                                                              ((UI_BaseSettingElement_o *)__this,
                                                               tooltip,style,(MethodInfo *)0x0);
                                                    (__this->fields)._optionsOffset.fields.x =
                                                         (optionsWidth - elementWidth) * 0.5;
                                                    (__this->fields)._optionsOffset.fields.y =
                                                         2.0 - (local_118 + elementHeight) * 0.5;
                                                    (__this->fields)._optionsOffset.fields.z = 0.0;
                                                    pUVar8 = (__this->fields)._optionsPanel;
                                                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                                      pUVar7 = UnityEngine_GameObject__get_transform
                                                                         (pUVar8,(MethodInfo *)0x0);
                                                      pUVar13 = UnityEngine_Component__get_transform
                                                                          ((UnityEngine_Component_o
                                                                            *)__this,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar13 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        pUVar13 = UnityEngine_Transform__get_root
                                                                            (pUVar13,(MethodInfo *)
                                                                                     0x0);
                                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0
                                                           ) {
                                                          UnityEngine_Transform__SetParent
                                                                    (pUVar7,pUVar13,1,
                                                                     (MethodInfo *)0x0);
                                                          if (*ppUVar1 !=
                                                              (UnityEngine_GameObject_o *)0x0) {
                                                            UnityEngine_GameObject__SetActive
                                                                      (*ppUVar1,0,(MethodInfo *)0x0)
                                                            ;
                                                            (*(__this->klass->vtable)._6_SyncElement
                                                              .methodPtr)(__this,(__this->klass->
                                                                                 vtable).
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
LAB_040871d7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$FixScale
// il2cpp: void UI_MultiSelectDropdownElement__FixScale (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4087d30

void UI_MultiSelectDropdownElement__FixScale
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_01,
                 (UnityEngine_Vector3_o)
                 *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$IsOpen
// il2cpp: bool UI_MultiSelectDropdownElement__IsOpen (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4087d90

bool_conflict
UI_MultiSelectDropdownElement__IsOpen(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_0570454b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570454b = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._optionsPanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// UI.MultiSelectDropdownElement$$SetOptionsPosition
// il2cpp: void UI_MultiSelectDropdownElement__SetOptionsPosition (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4087e10

void UI_MultiSelectDropdownElement__SetOptionsPosition
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (DAT_0570454c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570454c = '\x01';
  }
  pUVar5 = (__this->fields)._selectedButton;
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar7 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      uVar3 = (__this->fields)._optionsOffset.fields.x;
      uVar4 = (__this->fields)._optionsOffset.fields.y;
      fVar1 = (__this->fields)._optionsOffset.fields.z;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar5 = (__this->fields)._optionsPanel;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        fVar2 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38);
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            local_28 = UVar7.fields.x;
            fStack_24 = UVar7.fields.y;
            value.fields.x = local_28 + (float)uVar3 * fVar2;
            value.fields.y = fStack_24 + (float)uVar4 * fVar2;
            value.fields.z = UVar7.fields.z + fVar1 * fVar2;
            UnityEngine_Transform__set_position(pUVar6,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$OnDisable
// il2cpp: void UI_MultiSelectDropdownElement__OnDisable (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4087f30

void UI_MultiSelectDropdownElement__OnDisable
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_0570454d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570454d = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._optionsPanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.MultiSelectDropdownElement$$OnDestroy
// il2cpp: void UI_MultiSelectDropdownElement__OnDestroy (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4087fb0

void UI_MultiSelectDropdownElement__OnDestroy
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570454e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570454e = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$Update
// il2cpp: void UI_MultiSelectDropdownElement__Update (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4088030

void UI_MultiSelectDropdownElement__Update
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *rect_00;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (DAT_0570454f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_0570454f = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar3 = (__this->fields)._optionsPanel;
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
LAB_040881fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_040881fc;
  UVar9 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  uVar1 = (__this->fields)._lastKnownPosition.fields.x;
  uVar2 = (__this->fields)._lastKnownPosition.fields.y;
  fVar6 = UVar9.fields.y - (float)uVar2;
  fVar7 = UVar9.fields.z - (__this->fields)._lastKnownPosition.fields.z;
  fVar8 = UVar9.fields.x - (float)uVar1;
  if (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11) {
    bVar5 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar3 = (__this->fields)._optionsPanel;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040881fc;
    rect = (UnityEngine_RectTransform_o *)
           UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
    pUVar3 = (__this->fields)._selectedButton;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_040881fc;
    rect_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
    UVar9 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class(UVar9.fields.x,UVar9.fields.z);
    }
    bVar5 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                      (rect,(UnityEngine_Vector2_o)UVar9.fields._0_8_,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    UVar9 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class(UVar9.fields.x,UVar9.fields.z);
    }
    bVar5 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                      (rect_00,(UnityEngine_Vector2_o)UVar9.fields._0_8_,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
  }
  if (DAT_05704553 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704553 = '\x01';
  }
  pUVar4 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar4 = (__this->fields)._scrollBar;
    if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0408828d;
    fVar6 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar6;
  }
  pUVar3 = (__this->fields)._optionsPanel;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
LAB_0408828d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$CreateOptionToggle
// il2cpp: void UI_MultiSelectDropdownElement__CreateOptionToggle (UI_MultiSelectDropdownElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x4087230

void UI_MultiSelectDropdownElement__CreateOptionToggle
               (UI_MultiSelectDropdownElement_o *__this,System_String_o *option,int32_t index,
               float width,float height,int32_t fontSize,System_String_o *themePanel,
               MethodInfo *method)

{
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  System_Collections_Generic_List_CanvasGroup__o *__this_02;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_Collections_Generic_Dictionary_int__object__o *__this_04;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  uint uVar1;
  Il2CppObject *__this_05;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_UI_Text_o *__this_07;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_UI_Graphic_o *value_02;
  UnityEngine_GameObject_o *__this_09;
  Il2CppClass *pIVar8;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_UI_Selectable_o *__this_10;
  UnityEngine_Events_UnityAction_o *call_00;
  Il2CppObject *pIVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Color_o UVar13;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_05704550 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_AddComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_AddComponent_Toggle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateOptionToggle_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateOptionToggle_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass22_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_bool);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"DropdownTextColor");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"      ");
    il2cpp_init_method_metadata(&"Dropdown");
    il2cpp_init_method_metadata(&"Toggle");
    il2cpp_init_method_metadata(&"ToggleFilledColor");
    il2cpp_init_method_metadata(&"Options");
    il2cpp_init_method_metadata(&"Checkmark");
    il2cpp_init_method_metadata(&"Prefabs/Elements/DropdownOption");
    DAT_05704550 = '\x01';
  }
  __this_05 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass22_0);
  System_Object___ctor(__this_05,(MethodInfo *)0x0);
  if (__this_05 != (Il2CppObject *)0x0) {
    __this_05[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_05 + 1,__this);
    *(int32_t *)&__this_05[1].monitor = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_06 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset<object>
                          (pSVar5,"Prefabs/Elements/DropdownOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      pUVar6 = (__this->fields)._optionsPanel;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__Find(pUVar3,"Options",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar2,pUVar3,0,(MethodInfo *)0x0);
            pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_06,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar4 != (Il2CppObject *)0x0) {
              (*pIVar4->klass->vtable[0x24].methodPtr)
                        (width,pIVar4,pIVar4->klass->vtable[0x24].method);
              pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_06,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar4 != (Il2CppObject *)0x0) {
                (*pIVar4->klass->vtable[0x26].methodPtr)(height,pIVar4);
                pUVar2 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    __this_07 = (UnityEngine_UI_Text_o *)
                                UnityEngine_Component__GetComponent<object>
                                          ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
                    pSVar5 = System_String__Concat("      ",option,(MethodInfo *)0x0);
                    if (__this_07 != (UnityEngine_UI_Text_o *)0x0) {
                      (*(__this_07->klass->vtable)._75_set_text.methodPtr)
                                (__this_07,pSVar5,(__this_07->klass->vtable)._75_set_text.method);
                      UnityEngine_UI_Text__set_fontSize(__this_07,fontSize,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_alignment(__this_07,3,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      UVar13 = UI_UIManager__GetThemeColor
                                         (themePanel,"DefaultSetting","DropdownTextColor","DefaultPanel",
                                          (MethodInfo *)0x0);
                      (*(__this_07->klass->vtable)._23_set_color.methodPtr)
                                (UVar13.fields.r,UVar13.fields.b,__this_07,
                                 (__this_07->klass->vtable)._23_set_color.method);
                      pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                      UnityEngine_GameObject___ctor(pUVar6,"Toggle",(MethodInfo *)0x0);
                      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar2 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                        pUVar3 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
                        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__SetParent(pUVar2,pUVar3,0,(MethodInfo *)0x0);
                          pUVar7 = (UnityEngine_RectTransform_o *)
                                   UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_RectTransform_AddComponent_RectTransform)
                          ;
                          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                            fVar10 = height * 0.6;
                            UnityEngine_RectTransform__set_anchorMin
                                      (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_pivot
                                      (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar7,(UnityEngine_Vector2_o)0x40a00000,(MethodInfo *)0x0);
                            value.fields.y = fVar10;
                            value.fields.x = fVar10;
                            UnityEngine_RectTransform__set_sizeDelta(pUVar7,value,(MethodInfo *)0x0)
                            ;
                            __this_08 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject)
                            ;
                            UnityEngine_GameObject___ctor(__this_08,"Background",(MethodInfo *)0x0);
                            if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar2 = UnityEngine_GameObject__get_transform
                                                 (__this_08,(MethodInfo *)0x0);
                              pUVar3 = UnityEngine_GameObject__get_transform
                                                 (pUVar6,(MethodInfo *)0x0);
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__SetParent(pUVar2,pUVar3,0,(MethodInfo *)0x0);
                                pUVar7 = (UnityEngine_RectTransform_o *)
                                         UnityEngine_GameObject__AddComponent<object>
                                                   (__this_08,MethodInfo_RectTransform_AddComponent_RectTransform);
                                if (DAT_056fe093 == '\0') {
                                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                  DAT_056fe093 = '\x01';
                                }
                                if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar7,(UnityEngine_Vector2_o)
                                                    **(UnityEngine_Vector2_Fields **)
                                                      (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                  if (DAT_0570136e == '\0') {
                                    il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                    DAT_0570136e = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar7,(UnityEngine_Vector2_o)
                                                    *(UnityEngine_Vector2_Fields *)
                                                     (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                                             (MethodInfo *)0x0);
                                  if (DAT_056fe093 == '\0') {
                                    il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                    DAT_056fe093 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar7,(UnityEngine_Vector2_o)
                                                    **(UnityEngine_Vector2_Fields **)
                                                      (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                  if (DAT_056fe093 == '\0') {
                                    il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                    DAT_056fe093 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar7,(UnityEngine_Vector2_o)
                                                    **(UnityEngine_Vector2_Fields **)
                                                      (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                  value_02 = (UnityEngine_UI_Graphic_o *)
                                             UnityEngine_GameObject__AddComponent<object>
                                                       (__this_08,MethodInfo_Image_AddComponent_Image);
                                  UI_UIManager__GetThemeColorBlock
                                            (&local_88,themePanel,"DefaultSetting","Toggle",
                                             "DefaultPanel",(MethodInfo *)0x0);
                                  fVar11 = local_88.fields.m_NormalColor.fields.r;
                                  fVar12 = local_88.fields.m_NormalColor.fields.b;
                                  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                                    il2cpp_init_class();
                                  }
                                  if (value_02 != (UnityEngine_UI_Graphic_o *)0x0) {
                                    (*(value_02->klass->vtable)._23_set_color.methodPtr)
                                              (fVar11,fVar12,value_02,
                                               (value_02->klass->vtable)._23_set_color.method);
                                    __this_09 = (UnityEngine_GameObject_o *)
                                                il2cpp_runtime_glue(TypeInfo_GameObject);
                                    UnityEngine_GameObject___ctor
                                              (__this_09,"Checkmark",(MethodInfo *)0x0);
                                    if (__this_09 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar2 = UnityEngine_GameObject__get_transform
                                                         (__this_09,(MethodInfo *)0x0);
                                      pUVar3 = UnityEngine_GameObject__get_transform
                                                         (__this_08,(MethodInfo *)0x0);
                                      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                        UnityEngine_Transform__SetParent
                                                  (pUVar2,pUVar3,0,(MethodInfo *)0x0);
                                        pUVar7 = (UnityEngine_RectTransform_o *)
                                                 UnityEngine_GameObject__AddComponent<object>
                                                           (__this_09,MethodInfo_RectTransform_AddComponent_RectTransform);
                                        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchorMin
                                                    (pUVar7,(UnityEngine_Vector2_o)
                                                            0x3f0000003f000000,(MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (pUVar7,(UnityEngine_Vector2_o)
                                                            0x3f0000003f000000,(MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_pivot
                                                    (pUVar7,(UnityEngine_Vector2_o)
                                                            0x3f0000003f000000,(MethodInfo *)0x0);
                                          if (DAT_056fe093 == '\0') {
                                            il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                            DAT_056fe093 = '\x01';
                                          }
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar7,(UnityEngine_Vector2_o)
                                                            **(UnityEngine_Vector2_Fields **)
                                                              (TypeInfo_Vector2 + 0xb8),
                                                     (MethodInfo *)0x0);
                                          fVar10 = fVar10 * (__this->fields).
                                                            _checkMarkSizeMultiplier;
                                          value_00.fields.y = fVar10;
                                          value_00.fields.x = fVar10;
                                          UnityEngine_RectTransform__set_sizeDelta
                                                    (pUVar7,value_00,(MethodInfo *)0x0);
                                          pIVar4 = UnityEngine_GameObject__AddComponent<object>
                                                             (__this_09,MethodInfo_Image_AddComponent_Image);
                                          UVar13 = UI_UIManager__GetThemeColor
                                                             (themePanel,"DefaultSetting","ToggleFilledColor",
                                                              "DefaultPanel",(MethodInfo *)0x0);
                                          if (pIVar4 != (Il2CppObject *)0x0) {
                                            (*pIVar4->klass->vtable[0x17].methodPtr)
                                                      (UVar13.fields.r,UVar13.fields.b,pIVar4,
                                                       pIVar4->klass->vtable[0x17].method);
                                            pIVar8 = (Il2CppClass *)
                                                     UnityEngine_GameObject__AddComponent<object>
                                                               (pUVar6,MethodInfo_Toggle_AddComponent_Toggle);
                                            pIVar9 = __this_05 + 2;
                                            __this_05[2].klass = pIVar8;
                                            il2cpp_runtime_glue(pIVar9,pIVar8);
                                            if (__this_05[2].klass != (Il2CppClass *)0x0) {
                                              UnityEngine_UI_Selectable__set_targetGraphic
                                                        ((UnityEngine_UI_Selectable_o *)
                                                         __this_05[2].klass,value_02,
                                                         (MethodInfo *)0x0);
                                              pIVar8 = pIVar9->klass;
                                              if (pIVar8 != (Il2CppClass *)0x0) {
                                                *(Il2CppObject **)&(pIVar8->_2).static_fields_size =
                                                     pIVar4;
                                                il2cpp_runtime_glue(&(pIVar8->_2).static_fields_size,
                                                                   pIVar4);
                                                __this_00 = (__this->fields)._hashSetSetting;
                                                if (__this_00 !=
                                                    (Settings_HashSetSetting_int__o *)0x0) {
                                                  pIVar8 = pIVar9->klass;
                                                  uVar1 = Settings_HashSetSetting<int>__Contains
                                                                    (__this_00,
                                                                     *(int32_t *)
                                                                      &__this_05[1].monitor,
                                                                     MethodInfo_Boolean_Contains);
                                                  if (pIVar8 != (Il2CppClass *)0x0) {
                                                    UnityEngine_UI_Toggle__set_isOn
                                                              ((UnityEngine_UI_Toggle_o *)pIVar8,
                                                               uVar1 & 0xff,(MethodInfo *)0x0);
                                                    if (pIVar9->klass != (Il2CppClass *)0x0) {
                                                      __this_01 = *(
                                                  UnityEngine_Events_UnityEvent_bool__o **)
                                                  &(pIVar9->klass->_2).token;
                                                  call = (UnityEngine_Events_UnityAction_T0__o *)
                                                         il2cpp_runtime_glue(TypeInfo_UnityAction_bool);
                                                  UnityEngine_Events_UnityAction<bool>___ctor();
                                                  if (__this_01 !=
                                                      (UnityEngine_Events_UnityEvent_bool__o *)0x0)
                                                  {
                                                    UnityEngine_Events_UnityEvent<bool>__AddListener
                                                              (__this_01,call,MethodInfo_Void_AddListener);
                                                    __this_10 = (UnityEngine_UI_Selectable_o *)
                                                                                                                                
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (__this_06,MethodInfo_Button_GetComponent_Button);
                                                  if ((__this_10 !=
                                                       (UnityEngine_UI_Selectable_o *)0x0) &&
                                                     (__this_02 = (__this_10->fields).
                                                                  m_CanvasGroupCache,
                                                     __this_02 !=
                                                     (System_Collections_Generic_List_CanvasGroup__o
                                                      *)0x0)) {
                                                                                                        
                                                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                                            ((UnityEngine_Events_UnityEventBase_o *)
                                                             __this_02,(MethodInfo *)0x0);
                                                  UI_UIManager__GetThemeColorBlock
                                                            (&local_88,themePanel,"DefaultSetting",
                                                             "Dropdown","DefaultPanel",
                                                             (MethodInfo *)0x0);
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
                                                            (__this_10,value_01,(MethodInfo *)0x0);
                                                  __this_03 = (UnityEngine_Events_UnityEvent_o *)
                                                              (__this_10->fields).m_CanvasGroupCache
                                                  ;
                                                  call_00 = (UnityEngine_Events_UnityAction_o *)
                                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  if (__this_03 !=
                                                      (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (__this_03,call_00,(MethodInfo *)0x0);
                                                    __this_04 = (
                                                  System_Collections_Generic_Dictionary_int__object__o
                                                  *)(__this->fields)._toggles;
                                                  if (__this_04 !=
                                                      (
                                                  System_Collections_Generic_Dictionary_int__object__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<int__object>__set_Item
                                                            (__this_04,
                                                             *(int32_t *)&__this_05[1].monitor,
                                                             (Il2CppObject *)__this_05[2].klass,
                                                             MethodInfo_Void_set_Item);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$OnToggleValueChanged
// il2cpp: void UI_MultiSelectDropdownElement__OnToggleValueChanged (UI_MultiSelectDropdownElement_o* __this, int32_t index, bool value, const MethodInfo* method);
// 0x40882b0

void UI_MultiSelectDropdownElement__OnToggleValueChanged
               (UI_MultiSelectDropdownElement_o *__this,int32_t index,bool_conflict value,
               MethodInfo *method)

{
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if (DAT_05704551 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Remove);
    DAT_05704551 = '\x01';
  }
  __this_00 = (__this->fields)._hashSetSetting;
  if (__this_00 == (Settings_HashSetSetting_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)value == '\0') {
    Settings_HashSetSetting<int>__Remove(__this_00,index,MethodInfo_Void_Remove);
    pUVar1 = (__this->fields)._onSelectionChanged;
  }
  else {
    Settings_HashSetSetting<int>__Add(__this_00,index,MethodInfo_Void_Add);
    pUVar1 = (__this->fields)._onSelectionChanged;
  }
  if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$OnDropdownSelectedButtonClick
// il2cpp: void UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4088350

void UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  float fVar4;
  
  pUVar2 = (__this->fields)._optionsPanel;
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
LAB_040883e9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (DAT_05704552 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableOptions_d__25);
      DAT_05704552 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndEnableOptions_d__25);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
    goto LAB_040883e9;
  }
  if (DAT_05704553 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704553 = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0408828d;
    fVar4 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar4;
  }
  pUVar2 = (__this->fields)._optionsPanel;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
    return;
  }
LAB_0408828d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$WaitAndEnableOptions
// il2cpp: System_Collections_IEnumerator_o* UI_MultiSelectDropdownElement__WaitAndEnableOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x40883f0

System_Collections_IEnumerator_o *
UI_MultiSelectDropdownElement__WaitAndEnableOptions
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704552 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableOptions_d__25);
    DAT_05704552 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndEnableOptions_d__25);
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


// UI.MultiSelectDropdownElement$$CloseOptions
// il2cpp: void UI_MultiSelectDropdownElement__CloseOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4088210

void UI_MultiSelectDropdownElement__CloseOptions
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05704553 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704553 = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0408828d;
    fVar3 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar3;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    return;
  }
LAB_0408828d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$SyncElement
// il2cpp: void UI_MultiSelectDropdownElement__SyncElement (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4088480

void UI_MultiSelectDropdownElement__SyncElement
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Settings_HashSetSetting_int__o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar1;
  int32_t item;
  uint uVar2;
  UnityEngine_UI_Toggle_o *__this_04;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar7;
  
  if (DAT_05704554 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Int32_UnityEngine_UI_Toggl);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_get_Value);
    DAT_05704554 = '\x01';
  }
  pIVar5 = (Il2CppObject *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._toggles;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffa8,__this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
    while( true ) {
      __this_02.fields._8_8_ = pIVar4;
      __this_02.fields._dictionary = pSVar3;
      __this_02.fields._current.fields.key = pIVar5;
      __this_02.fields._current.fields.value = pIVar6;
      __this_02.fields._32_8_ = pSVar7;
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<int__object>__MoveNext
                        (__this_02,(MethodInfo_31C2A20 *)&stack0xffffffffffffffa8);
      if ((char)bVar1 == '\0') {
        __this_03.fields._8_8_ = pIVar4;
        __this_03.fields._dictionary = pSVar3;
        __this_03.fields._current.fields.key = pIVar5;
        __this_03.fields._current.fields.value = pIVar6;
        __this_03.fields._32_8_ = pSVar7;
        System_Collections_Generic_Dictionary_Enumerator<int__object>__Dispose
                  (__this_03,(MethodInfo_31C2B30 *)&stack0xffffffffffffffa8);
        return;
      }
      item = il2cpp_glue_02716390(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_Int32_UnityEngine_UI_Toggl);
      __this_01 = (__this->fields)._hashSetSetting;
      if (__this_01 == (Settings_HashSetSetting_int__o *)0x0) break;
      uVar2 = Settings_HashSetSetting<int>__Contains(__this_01,item,MethodInfo_Boolean_Contains);
      if (__this_04 == (UnityEngine_UI_Toggle_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_UI_Toggle__set_isOn(__this_04,uVar2 & 0xff,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiSelectDropdownElement$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___ctor (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4088660

void UI_MultiSelectDropdownElement___ctor
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  
  if (DAT_05704555 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_UI_Toggle);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__Toggle);
    DAT_05704555 = '\x01';
  }
  (__this->fields)._currentScrollValue = 1.0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_int__Toggle);
  System_Collections_Generic_Dictionary<int__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Int32_UnityEngine_UI_Toggle);
  (__this->fields)._toggles = (System_Collections_Generic_Dictionary_int__Toggle__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._toggles);
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._lastKnownPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._lastKnownPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  (__this->fields)._checkMarkSizeMultiplier = 0.67;
  UI_BaseSettingElement___ctor((UI_BaseSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$<Setup>b__15_0
// il2cpp: void UI_MultiSelectDropdownElement___Setup_b__15_0 (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4088730

void UI_MultiSelectDropdownElement__<Setup>b__15_0
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  float fVar4;
  
  pUVar2 = (__this->fields)._optionsPanel;
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
LAB_040883e9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (DAT_05704552 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableOptions_d__25);
      DAT_05704552 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndEnableOptions_d__25);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
    goto LAB_040883e9;
  }
  if (DAT_05704553 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704553 = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0408828d;
    fVar4 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar4;
  }
  pUVar2 = (__this->fields)._optionsPanel;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
    return;
  }
LAB_0408828d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


