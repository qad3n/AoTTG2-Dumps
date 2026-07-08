// Type: UI.DropdownSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/DropdownSettingElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/DropdownSettingElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.DropdownSettingElement.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass18_0___ctor (UI_DropdownSettingElement___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x40831c0

void UI_DropdownSettingElement_<>c__DisplayClass18_0___ctor
               (UI_DropdownSettingElement___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement.<>c__DisplayClass18_0$$<CreateOptionButton>b__0
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass18_0___CreateOptionButton_b__0 (UI_DropdownSettingElement___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x40831d0

void UI_DropdownSettingElement_<>c__DisplayClass18_0__<CreateOptionButton>b__0
               (UI_DropdownSettingElement___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_DropdownSettingElement_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._8_OnDropdownOptionClick.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).option,(ulong)(uint)(__this->fields).index,
               (pUVar1->klass->vtable)._8_OnDropdownOptionClick.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__21___ctor (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4083200

void UI_DropdownSettingElement_<WaitAndCloseOptions>d__21___ctor
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x4083220

void UI_DropdownSettingElement_<WaitAndCloseOptions>d__21__System_IDisposable_Dispose
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndCloseOptions_d__21__MoveNext (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x4083230

bool_conflict
UI_DropdownSettingElement_<WaitAndCloseOptions>d__21__MoveNext
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_DropdownSettingElement_o *__this_00;
  Il2CppObject *__this_01;
  bool_conflict bVar2;
  
  if (DAT_05704530 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05704530 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_DropdownSettingElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = 0;
    UI_DropdownSettingElement__CloseOptions(__this_00,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x40832d0

Il2CppObject *
UI_DropdownSettingElement_<WaitAndCloseOptions>d__21__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x40832e0

void UI_DropdownSettingElement_<WaitAndCloseOptions>d__21__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

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


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x4083320

Il2CppObject *
UI_DropdownSettingElement_<WaitAndCloseOptions>d__21__System_Collections_IEnumerator_get_Current
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4083330

void UI_DropdownSettingElement_<WaitAndEnableOptions>d__20___ctor
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x4083350

void UI_DropdownSettingElement_<WaitAndEnableOptions>d__20__System_IDisposable_Dispose
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndEnableOptions_d__20__MoveNext (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x4083360

bool_conflict
UI_DropdownSettingElement_<WaitAndEnableOptions>d__20__MoveNext
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_DropdownSettingElement_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *__this_01;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_Vector3_Fields UVar6;
  
  if (DAT_05704531 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05704531 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (UI_DropdownSettingElement_o *)0x0) ||
       (__this_01 = (__this_00->fields)._scrollBar, __this_01 == (UnityEngine_UI_Scrollbar_o *)0x0))
    goto LAB_04083507;
    bVar5 = 0;
    UnityEngine_UI_Scrollbar__set_value
              (__this_01,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
        UI_DropdownSettingElement__SetOptionsPosition(__this_00,(MethodInfo *)0x0);
        pUVar2 = (__this_00->fields)._optionsPanel;
        if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UVar6 = (UnityEngine_Vector3_Fields)
                    UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
            (__this_00->fields)._lastKnownPosition.fields = UVar6;
            pUVar2 = (__this_00->fields)._optionsPanel;
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar2,1,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
              pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
              UnityEngine_WaitForEndOfFrame___ctor
                        ((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
              (__this->fields).__2__current = pIVar3;
              il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar3);
              (__this->fields).__1__state = 2;
              return (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),1);
            }
          }
        }
      }
LAB_04083507:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar3;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar3);
      (__this->fields).__1__state = 1;
      bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),1);
    }
    else {
      bVar5 = 0;
    }
  }
  return bVar5;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x4083510

Il2CppObject *
UI_DropdownSettingElement_<WaitAndEnableOptions>d__20__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x4083520

void UI_DropdownSettingElement_<WaitAndEnableOptions>d__20__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

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


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x4083560

Il2CppObject *
UI_DropdownSettingElement_<WaitAndEnableOptions>d__20__System_Collections_IEnumerator_get_Current
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_DropdownSettingElement__get_SupportedSettingTypes (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x40821d0

System_Collections_Generic_HashSet_SettingType__o *
UI_DropdownSettingElement__get_SupportedSettingTypes
          (UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (DAT_05704524 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SettingType);
    DAT_05704524 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$Setup
// il2cpp: void UI_DropdownSettingElement__Setup (UI_DropdownSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x4081380

void UI_DropdownSettingElement__Setup
               (UI_DropdownSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,float optionsWidth,
               float maxScrollHeight,UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o **ppUVar4;
  int32_t value;
  uint uVar5;
  Il2CppClass *__this_00;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Text_o *__this_01;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_o *call;
  ulong uVar10;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_UI_ScrollRect_o *__this_03;
  UnityEngine_UI_Scrollbar_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  undefined8 uVar14;
  System_ArgumentException_o *__this_04;
  System_String_o *pSVar15;
  ulong uVar16;
  MethodInfo *pMVar17;
  UnityEngine_Color_o UVar18;
  float local_128;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pMVar17 = (MethodInfo *)tooltip;
  if (DAT_05704525 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_0);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
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
    DAT_05704525 = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      uVar14 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
      __this_04 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar14);
      pSVar15 = (System_String_o *)il2cpp_init_method_metadata(&"Dropdown cannot have 0 options.");
      System_ArgumentException___ctor(__this_04,pSVar15,(MethodInfo *)0x0);
      uVar14 = il2cpp_init_method_metadata(&MethodInfo_Void_Setup);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_04,uVar14);
    }
    (__this->fields)._onDropdownOptionSelect = onDropdownOptionSelect;
    il2cpp_runtime_glue(&(__this->fields)._onDropdownOptionSelect);
    (__this->fields)._options = options;
    il2cpp_runtime_glue(&(__this->fields)._options);
    pUVar7 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Dropdown/Mask",(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
        ppUVar1 = &(__this->fields)._optionsPanel;
        (__this->fields)._optionsPanel = pUVar8;
        il2cpp_runtime_glue();
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Dropdown/SelectedButton",(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
            ppUVar2 = &(__this->fields)._selectedButton;
            (__this->fields)._selectedButton = pUVar8;
            il2cpp_runtime_glue();
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
                  if ((int)options->max_length == 0) {
LAB_04081f22:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if (style != (UI_ElementStyle_o *)0x0) {
                    pUVar8 = (__this->fields)._selectedButtonLabel;
                    pSVar15 = options->m_Items[0];
                    value = (style->fields).FontSize;
                    if (DAT_0570451a == '\0') {
                      il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                      DAT_0570451a = '\x01';
                    }
                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                      __this_01 = (UnityEngine_UI_Text_o *)
                                  UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_Text_GetComponent_Text);
                      if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                                  (__this_01,pSVar15,(__this_01->klass->vtable)._75_set_text.method)
                        ;
                        UnityEngine_UI_Text__set_fontSize(__this_01,value,(MethodInfo *)0x0);
                        if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                             (*ppUVar2,MethodInfo_Button_GetComponent_Button);
                          if (pIVar9 != (Il2CppObject *)0x0) {
                            __this_00 = pIVar9[0x10].klass;
                            call = (UnityEngine_Events_UnityAction_o *)
                                   il2cpp_runtime_glue(TypeInfo_UnityAction);
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
                                            (elementWidth,pIVar9,pIVar9->klass->vtable[0x24].method)
                                  ;
                                  if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                                       (*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                    if (pIVar9 != (Il2CppObject *)0x0) {
                                      (*pIVar9->klass->vtable[0x26].methodPtr)
                                                (elementHeight,pIVar9,
                                                 pIVar9->klass->vtable[0x26].method);
                                      if (0 < (int)options->max_length) {
                                        uVar10 = options->max_length & 0xffffffff;
                                        uVar16 = 0;
                                        do {
                                          if (uVar10 <= uVar16) goto LAB_04081f22;
                                          UI_DropdownSettingElement__CreateOptionButton
                                                    (__this,options->m_Items[uVar16],(int32_t)uVar16
                                                     ,optionsWidth,elementHeight,
                                                     (style->fields).FontSize,
                                                     (style->fields).ThemePanel,pMVar17);
                                          uVar16 = uVar16 + 1;
                                          uVar5 = (uint)options->max_length;
                                          uVar10 = (ulong)uVar5;
                                        } while ((long)uVar16 < (long)(int)uVar5);
                                      }
                                      if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                        __this_02 = (UnityEngine_UI_Selectable_o *)
                                                    UnityEngine_GameObject__GetComponent<object>
                                                              (*ppUVar2,MethodInfo_Button_GetComponent_Button);
                                        pSVar15 = (style->fields).ThemePanel;
                                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                          il2cpp_init_class();
                                        }
                                        UI_UIManager__GetThemeColorBlock
                                                  (&local_88,pSVar15,"DefaultSetting","Dropdown",
                                                   "DefaultPanel",(MethodInfo *)0x0);
                                        if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
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
                                          value_00.fields.m_FadeDuration =
                                               local_88.fields.m_FadeDuration;
                                          UnityEngine_UI_Selectable__set_colors
                                                    (__this_02,value_00,(MethodInfo *)0x0);
                                          pUVar8 = *ppUVar3;
                                          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                                               (pUVar8,MethodInfo_Text_GetComponent_Text);
                                            UVar18 = UI_UIManager__GetThemeColor
                                                               ((style->fields).ThemePanel,
                                                                "DefaultSetting","DropdownTextColor",
                                                                "DefaultPanel",(MethodInfo *)0x0);
                                            if (pIVar9 != (Il2CppObject *)0x0) {
                                              (*pIVar9->klass->vtable[0x17].methodPtr)
                                                        (UVar18.fields.r,UVar18.fields.b,pIVar9);
                                              if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                                pUVar7 = UnityEngine_GameObject__get_transform
                                                                   (*ppUVar2,(MethodInfo *)0x0);
                                                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                  pUVar7 = UnityEngine_Transform__Find
                                                                     (pUVar7,"Image",
                                                                      (MethodInfo *)0x0);
                                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                    pIVar9 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar7,
                                                             MethodInfo_Image_GetComponent_Image);
                                                  UVar18 = UI_UIManager__GetThemeColor
                                                                     ((style->fields).ThemePanel,
                                                                      "DefaultSetting","DropdownTextColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0
                                                                     );
                                                  if (pIVar9 != (Il2CppObject *)0x0) {
                                                    (*pIVar9->klass->vtable[0x17].methodPtr)
                                                              (UVar18.fields.r,UVar18.fields.b,
                                                               pIVar9);
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
                                                          pIVar9 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar7,
                                                             MethodInfo_Image_GetComponent_Image);
                                                  UVar18 = UI_UIManager__GetThemeColor
                                                                     ((style->fields).ThemePanel,
                                                                      "DefaultSetting","DropdownBorderColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0
                                                                     );
                                                  if (pIVar9 != (Il2CppObject *)0x0) {
                                                    (*pIVar9->klass->vtable[0x17].methodPtr)
                                                              (UVar18.fields.r,UVar18.fields.b);
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
                                                    local_128 = maxScrollHeight;
                                                    if (UVar6.fields.y <= maxScrollHeight) {
                                                      if (*ppUVar1 ==
                                                          (UnityEngine_GameObject_o *)0x0)
                                                      goto LAB_04081f1d;
                                                      __this_03 = (UnityEngine_UI_ScrollRect_o *)
                                                                                                                                    
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (*ppUVar1,MethodInfo_ScrollRect_GetComponent_ScrollRect);
                                                  if (__this_03 ==
                                                      (UnityEngine_UI_ScrollRect_o *)0x0)
                                                  goto LAB_04081f1d;
                                                  UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                            (__this_03,
                                                             (UnityEngine_UI_Scrollbar_o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0)
                                                  goto LAB_04081f1d;
                                                  pUVar7 = UnityEngine_GameObject__get_transform
                                                                     (*ppUVar1,(MethodInfo *)0x0);
                                                  if (pUVar7 == (UnityEngine_Transform_o *)0x0)
                                                  goto LAB_04081f1d;
                                                  pUVar7 = UnityEngine_Transform__Find
                                                                     (pUVar7,"Scrollbar",
                                                                      (MethodInfo *)0x0);
                                                  if (pUVar7 == (UnityEngine_Transform_o *)0x0)
                                                  goto LAB_04081f1d;
                                                  pUVar8 = UnityEngine_Component__get_gameObject
                                                                     ((UnityEngine_Component_o *)
                                                                      pUVar7,(MethodInfo *)0x0);
                                                  if (pUVar8 == (UnityEngine_GameObject_o *)0x0)
                                                  goto LAB_04081f1d;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar8,0,(MethodInfo *)0x0);
                                                  local_128 = UVar6.fields.y;
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
                                                  pMVar17 = (MethodInfo *)0x0;
                                                  UI_UIManager__GetThemeColorBlock
                                                            (&local_88,pSVar15,"DefaultSetting",
                                                             "DropdownScrollbar","DefaultPanel",
                                                             (MethodInfo *)0x0);
                                                  if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0)
                                                  {
                                                    value_01.fields.m_NormalColor.fields.b =
                                                         local_88.fields.m_NormalColor.fields.b;
                                                    value_01.fields.m_NormalColor.fields.a =
                                                         local_88.fields.m_NormalColor.fields.a;
                                                    value_01.fields.m_NormalColor.fields.r =
                                                         local_88.fields.m_NormalColor.fields.r;
                                                    value_01.fields.m_NormalColor.fields.g =
                                                         local_88.fields.m_NormalColor.fields.g;
                                                    value_01.fields.m_HighlightedColor.fields.r =
                                                         local_88.fields.m_HighlightedColor.fields.r
                                                    ;
                                                    value_01.fields.m_HighlightedColor.fields.g =
                                                         local_88.fields.m_HighlightedColor.fields.g
                                                    ;
                                                    value_01.fields.m_HighlightedColor.fields.b =
                                                         local_88.fields.m_HighlightedColor.fields.b
                                                    ;
                                                    value_01.fields.m_HighlightedColor.fields.a =
                                                         local_88.fields.m_HighlightedColor.fields.a
                                                    ;
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
                                                              ((UnityEngine_UI_Selectable_o *)
                                                               pUVar12,value_01,(MethodInfo *)0x0);
                                                    pUVar12 = *ppUVar4;
                                                    if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0
                                                       ) {
                                                      pIVar9 = 
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar12,
                                                             MethodInfo_Image_GetComponent_Image);
                                                  UVar18 = UI_UIManager__GetThemeColor
                                                                     ((style->fields).ThemePanel,
                                                                      "DefaultSetting","DropdownScrollbarBackgroundColor",
                                                                      "DefaultPanel",(MethodInfo *)0x0
                                                                     );
                                                  if (pIVar9 != (Il2CppObject *)0x0) {
                                                    (*pIVar9->klass->vtable[0x17].methodPtr)
                                                              (UVar18.fields.r,UVar18.fields.b,
                                                               pIVar9,pIVar9->klass->vtable[0x17].
                                                                      method);
                                                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0)
                                                    {
                                                      pUVar11 = (UnityEngine_RectTransform_o *)
                                                                                                                                
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
                                                  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0)
                                                  {
                                                    UVar6.fields.y = local_128;
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
                                                    (__this->fields)._optionsOffset.fields.x =
                                                         (optionsWidth - elementWidth) * 0.5;
                                                    (__this->fields)._optionsOffset.fields.y =
                                                         2.0 - (local_128 + elementHeight) * 0.5;
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
                                                            UI_BaseSettingElement__Setup
                                                                      ((UI_BaseSettingElement_o *)
                                                                       __this,setting,style,title,
                                                                       tooltip,pMVar17);
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
LAB_04081f1d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$FixScale
// il2cpp: void UI_DropdownSettingElement__FixScale (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082790

void UI_DropdownSettingElement__FixScale(UI_DropdownSettingElement_o *__this,MethodInfo *method)

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


// UI.DropdownSettingElement$$IsOpen
// il2cpp: bool UI_DropdownSettingElement__IsOpen (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x40827f0

bool_conflict
UI_DropdownSettingElement__IsOpen(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05704526 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704526 = '\x01';
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


// UI.DropdownSettingElement$$SetOptionsPosition
// il2cpp: void UI_DropdownSettingElement__SetOptionsPosition (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082870

void UI_DropdownSettingElement__SetOptionsPosition
               (UI_DropdownSettingElement_o *__this,MethodInfo *method)

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
  
  if (DAT_05704527 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704527 = '\x01';
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


// UI.DropdownSettingElement$$OnDisable
// il2cpp: void UI_DropdownSettingElement__OnDisable (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082990

void UI_DropdownSettingElement__OnDisable(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05704528 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704528 = '\x01';
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


// UI.DropdownSettingElement$$OnDestroy
// il2cpp: void UI_DropdownSettingElement__OnDestroy (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082a10

void UI_DropdownSettingElement__OnDestroy(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05704529 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704529 = '\x01';
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


// UI.DropdownSettingElement$$Update
// il2cpp: void UI_DropdownSettingElement__Update (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082a90

void UI_DropdownSettingElement__Update(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Scrollbar_o *__this_01;
  bool_conflict bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  UnityEngine_Object_o *y;
  UnityEngine_Transform_o *__this_02;
  UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this_03;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (DAT_0570452a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570452a = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_04082c63;
  bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  bVar4 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
LAB_04082b86:
    __this_02 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto LAB_04082c63;
    UVar9 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
    uVar1 = (__this->fields)._lastKnownPosition.fields.x;
    uVar2 = (__this->fields)._lastKnownPosition.fields.y;
    fVar6 = UVar9.fields.y - (float)uVar2;
    fVar7 = UVar9.fields.z - (__this->fields)._lastKnownPosition.fields.z;
    fVar8 = UVar9.fields.x - (float)uVar1;
    if (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11) {
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((pUVar5 == (UnityEngine_EventSystems_EventSystem_o *)0x0) ||
       (__this_01 = (__this->fields)._scrollBar, __this_01 == (UnityEngine_UI_Scrollbar_o *)0x0))
    goto LAB_04082c63;
    pUVar3 = (UnityEngine_Object_o *)(pUVar5->fields).m_CurrentSelected;
    y = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject
                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar3,y,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto LAB_04082b86;
  }
  if (DAT_0570452d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndCloseOptions_d__21);
    DAT_0570452d = '\x01';
  }
  __this_03 = (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *)
              il2cpp_runtime_glue(TypeInfo_WaitAndCloseOptions_d__21);
  UI_DropdownSettingElement_<WaitAndCloseOptions>d__21___ctor(__this_03,0,(MethodInfo *)0x0);
  if (__this_03 != (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *)0x0) {
    (__this_03->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_03->fields).__4__this,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_03,
               (MethodInfo *)0x0);
    return;
  }
LAB_04082c63:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$CreateOptionButton
// il2cpp: void UI_DropdownSettingElement__CreateOptionButton (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x4082270

void UI_DropdownSettingElement__CreateOptionButton
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,
               float width,float height,int32_t fontSize,System_String_o *themePanel,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppClass *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  UI_DropdownSettingElement___c__DisplayClass18_0_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *__this_03;
  Il2CppObject *pIVar5;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Selectable_o *__this_04;
  System_String_o **ppSVar6;
  UnityEngine_Color_o UVar7;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (DAT_0570452b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateOptionButton_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass18_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"DropdownTextColor");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Dropdown");
    il2cpp_init_method_metadata(&"Options");
    il2cpp_init_method_metadata(&"Prefabs/Elements/DropdownOption");
    DAT_0570452b = '\x01';
  }
  __this_01 = (UI_DropdownSettingElement___c__DisplayClass18_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass18_0);
  UI_DropdownSettingElement_<>c__DisplayClass18_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_DropdownSettingElement___c__DisplayClass18_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    il2cpp_runtime_glue(&__this_01->fields,__this);
    ppSVar6 = &(__this_01->fields).option;
    (__this_01->fields).option = option;
    il2cpp_runtime_glue(ppSVar6,option);
    (__this_01->fields).index = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_02 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset<object>
                          (pSVar1,"Prefabs/Elements/DropdownOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._optionsPanel;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__Find(pUVar3,"Options",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar2,pUVar3,0,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                pSVar1 = *ppSVar6;
                if (DAT_0570451a == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                  DAT_0570451a = '\x01';
                }
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  __this_03 = (UnityEngine_UI_Text_o *)
                              UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
                  if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
                    (*(__this_03->klass->vtable)._75_set_text.methodPtr)
                              (__this_03,pSVar1,(__this_03->klass->vtable)._75_set_text.method);
                    UnityEngine_UI_Text__set_fontSize(__this_03,fontSize,(MethodInfo *)0x0);
                    pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
                    if (pIVar5 != (Il2CppObject *)0x0) {
                      __this_00 = pIVar5[0x10].klass;
                      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_00 != (Il2CppClass *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener
                                  ((UnityEngine_Events_UnityEvent_o *)__this_00,call,
                                   (MethodInfo *)0x0);
                        pIVar5 = UnityEngine_GameObject__GetComponent<object>
                                           (__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        if (pIVar5 != (Il2CppObject *)0x0) {
                          (*pIVar5->klass->vtable[0x24].methodPtr)
                                    (width,pIVar5,pIVar5->klass->vtable[0x24].method);
                          pIVar5 = UnityEngine_GameObject__GetComponent<object>
                                             (__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                          if (pIVar5 != (Il2CppObject *)0x0) {
                            (*pIVar5->klass->vtable[0x26].methodPtr)
                                      (height,pIVar5,pIVar5->klass->vtable[0x26].method);
                            __this_04 = (UnityEngine_UI_Selectable_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (__this_02,MethodInfo_Button_GetComponent_Button);
                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            UI_UIManager__GetThemeColorBlock
                                      (&local_88,themePanel,"DefaultSetting","Dropdown","DefaultPanel",
                                       (MethodInfo *)0x0);
                            if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
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
                                        (__this_04,value,(MethodInfo *)0x0);
                              pUVar2 = UnityEngine_GameObject__get_transform
                                                 (__this_02,(MethodInfo *)0x0);
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                pUVar2 = UnityEngine_Transform__Find
                                                   (pUVar2,"Label",(MethodInfo *)0x0);
                                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                  pIVar5 = UnityEngine_Component__GetComponent<object>
                                                     ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text
                                                     );
                                  UVar7 = UI_UIManager__GetThemeColor
                                                    (themePanel,"DefaultSetting","DropdownTextColor",
                                                     "DefaultPanel",(MethodInfo *)0x0);
                                  if (pIVar5 != (Il2CppObject *)0x0) {
                                    (*pIVar5->klass->vtable[0x17].methodPtr)
                                              (UVar7.fields.r,UVar7.fields.b,pIVar5,
                                               pIVar5->klass->vtable[0x17].method);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$OnDropdownSelectedButtonClick
// il2cpp: void UI_DropdownSettingElement__OnDropdownSelectedButtonClick (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082ce0

void UI_DropdownSettingElement__OnDropdownSelectedButtonClick
               (UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Scrollbar_o *__this_00;
  bool_conflict bVar2;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this_01;
  float fVar3;
  
  pUVar1 = (__this->fields)._optionsPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (DAT_0570452c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableOptions_d__20);
        DAT_0570452c = '\x01';
      }
      __this_01 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)
                  il2cpp_runtime_glue(TypeInfo_WaitAndEnableOptions_d__20);
      UI_DropdownSettingElement_<WaitAndEnableOptions>d__20___ctor(__this_01,0,(MethodInfo *)0x0);
      if (__this_01 != (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0) {
        (__this_01->fields).__4__this = __this;
        il2cpp_runtime_glue(&(__this_01->fields).__4__this,__this);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = (__this->fields)._scrollBar;
      if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
        fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
        (__this->fields)._currentScrollValue = fVar3;
        pUVar1 = (__this->fields)._optionsPanel;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$WaitAndEnableOptions
// il2cpp: System_Collections_IEnumerator_o* UI_DropdownSettingElement__WaitAndEnableOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082da0

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndEnableOptions
          (UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this_00;
  
  if (DAT_0570452c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableOptions_d__20);
    DAT_0570452c = '\x01';
  }
  __this_00 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)
              il2cpp_runtime_glue(TypeInfo_WaitAndEnableOptions_d__20);
  UI_DropdownSettingElement_<WaitAndEnableOptions>d__20___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$WaitAndCloseOptions
// il2cpp: System_Collections_IEnumerator_o* UI_DropdownSettingElement__WaitAndCloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082c70

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndCloseOptions
          (UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this_00;
  
  if (DAT_0570452d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndCloseOptions_d__21);
    DAT_0570452d = '\x01';
  }
  __this_00 = (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *)
              il2cpp_runtime_glue(TypeInfo_WaitAndCloseOptions_d__21);
  UI_DropdownSettingElement_<WaitAndCloseOptions>d__21___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$OnDropdownOptionClick
// il2cpp: void UI_DropdownSettingElement__OnDropdownOptionClick (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x4082e10

void UI_DropdownSettingElement__OnDropdownOptionClick
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *__this_00;
  Settings_TypedSetting_T__o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Settings_TypedSetting_int__o *__this_02;
  Il2CppObject *pIVar5;
  float fVar6;
  
  if (DAT_0570452e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570452e = '\x01';
    pUVar3 = (__this->fields)._selectedButtonLabel;
  }
  else {
    pUVar3 = (__this->fields)._selectedButtonLabel;
  }
  if (DAT_0570451b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_0570451b = '\x01';
  }
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pIVar5 = UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_Text_GetComponent_Text),
     pIVar5 != (Il2CppObject *)0x0)) {
    (*pIVar5->klass->vtable[0x4b].methodPtr)(pIVar5,option,pIVar5->klass->vtable[0x4b].method);
    __this_00 = (__this->fields)._scrollBar;
    if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      fVar6 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
      (__this->fields)._currentScrollValue = fVar6;
      pUVar3 = (__this->fields)._optionsPanel;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
        iVar2 = (__this->fields)._settingType;
        if (iVar2 == 2) {
          __this_02 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
          if (__this_02 == (Settings_TypedSetting_int__o *)0x0) goto LAB_04082fd8;
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar1) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
LAB_04082fdd:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          Settings_TypedSetting<int>__set_Value(__this_02,index,MethodInfo_Void_set_Value);
          pUVar4 = (__this->fields)._onDropdownOptionSelect;
        }
        else {
          if (iVar2 == 4) {
            __this_01 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
            if (__this_01 == (Settings_TypedSetting_T__o *)0x0) goto LAB_04082fd8;
            bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
            if (((__this_01->klass->_2).naturalAligment < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting))
            goto LAB_04082fdd;
            Settings_TypedSetting<object>__set_Value(__this_01,(Il2CppObject *)option,MethodInfo_Void_set_Value);
          }
          pUVar4 = (__this->fields)._onDropdownOptionSelect;
        }
        if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar4->fields).invoke_impl)
                    ((pUVar4->fields).method_code,(pUVar4->fields).method);
          return;
        }
        return;
      }
    }
  }
LAB_04082fd8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$CloseOptions
// il2cpp: void UI_DropdownSettingElement__CloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x40820c0

void UI_DropdownSettingElement__CloseOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollBar;
  if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar1 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar1;
    __this_01 = (__this->fields)._optionsPanel;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$SyncElement
// il2cpp: void UI_DropdownSettingElement__SyncElement (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082ff0

void UI_DropdownSettingElement__SyncElement(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Settings_BaseSetting_o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  Il2CppMethodPointer vtable_dispatch;
  Settings_TypedSetting_int__o *__this_01;
  Il2CppObject *pIVar7;
  System_String_array *pSVar8;
  
  if (DAT_0570452f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570452f = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_int__o *)0x0) goto LAB_04083195;
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_01);
    }
    pSVar8 = (__this->fields)._options;
    if (pSVar8 == (System_String_array *)0x0) goto LAB_04083195;
    uVar3 = (__this_01->fields)._value;
    if ((int)pSVar8->max_length <= (int)uVar3) {
      Settings_TypedSetting<int>__set_Value(__this_01,0,MethodInfo_Void_set_Value);
      pSVar8 = (__this->fields)._options;
      if (pSVar8 == (System_String_array *)0x0) goto LAB_04083195;
      uVar3 = (__this_01->fields)._value;
    }
    if ((uint)pSVar8->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (__this->fields)._selectedButtonLabel;
    pSVar5 = pSVar8->m_Items[(int)uVar3];
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) goto LAB_04083195;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = (__this->fields)._selectedButtonLabel;
    pSVar5 = pSVar4[1].monitor;
  }
  if (DAT_0570451b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_0570451b = '\x01';
  }
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pIVar7 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Text_GetComponent_Text),
     pIVar7 != (Il2CppObject *)0x0)) {
    pIVar6 = pIVar7->klass;
    vtable_dispatch = pIVar6->vtable[0x4b].methodPtr;
    (*vtable_dispatch)(pIVar7,pSVar5,pIVar6->vtable[0x4b].method,pIVar6,vtable_dispatch)
    ;
    return;
  }
LAB_04083195:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSettingElement$$.ctor
// il2cpp: void UI_DropdownSettingElement___ctor (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4082170

void UI_DropdownSettingElement___ctor(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  
  (__this->fields)._currentScrollValue = 1.0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._lastKnownPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._lastKnownPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement$$<Setup>b__11_0
// il2cpp: void UI_DropdownSettingElement___Setup_b__11_0 (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x40831b0

void UI_DropdownSettingElement__<Setup>b__11_0
               (UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Scrollbar_o *__this_00;
  bool_conflict bVar2;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this_01;
  float fVar3;
  
  pUVar1 = (__this->fields)._optionsPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (DAT_0570452c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableOptions_d__20);
        DAT_0570452c = '\x01';
      }
      __this_01 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)
                  il2cpp_runtime_glue(TypeInfo_WaitAndEnableOptions_d__20);
      UI_DropdownSettingElement_<WaitAndEnableOptions>d__20___ctor(__this_01,0,(MethodInfo *)0x0);
      if (__this_01 != (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0) {
        (__this_01->fields).__4__this = __this;
        il2cpp_runtime_glue(&(__this_01->fields).__4__this,__this);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = (__this->fields)._scrollBar;
      if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
        fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
        (__this->fields)._currentScrollValue = fVar3;
        pUVar1 = (__this->fields)._optionsPanel;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


