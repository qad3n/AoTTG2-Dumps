// Type: UI.DropdownSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/DropdownSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSettingElement.cs
// --------------------------------

// UI.DropdownSettingElement.<>c__DisplayClass23_0$$.ctor
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass23_0___ctor (UI_DropdownSettingElement___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x5ceff60

void UI_DropdownSettingElement___c__DisplayClass23_0___ctor
               (UI_DropdownSettingElement___c__DisplayClass23_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement.<>c__DisplayClass23_0$$<CreateOptionButton>b__0
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass23_0___CreateOptionButton_b__0 (UI_DropdownSettingElement___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x5cf0590

void UI_DropdownSettingElement___c__DisplayClass23_0___CreateOptionButton_b__0
               (UI_DropdownSettingElement___c__DisplayClass23_0_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_DropdownSettingElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._8_OnDropdownOptionClick.methodPtr)
            (pUVar1,(__this->fields).option,(__this->fields).index,
             (pUVar1->klass->vtable)._8_OnDropdownOptionClick.method);
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__26___ctor (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cf00c0

void UI_DropdownSettingElement__WaitAndCloseOptions_d__26___ctor
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o* __this, const MethodInfo* method);
// 0x5cf05c0

void UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_IDisposable_Dispose
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndCloseOptions_d__26__MoveNext (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o* __this, const MethodInfo* method);
// 0x5cf05d0

bool UI_DropdownSettingElement__WaitAndCloseOptions_d__26__MoveNext
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_DropdownSettingElement_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *__this_02;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547c88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547c88 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_02 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_02,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pUVar2 != (UI_DropdownSettingElement_o *)0x0) &&
       (__this_00 = (pUVar2->fields)._scrollBar, __this_00 != (UnityEngine_UI_Scrollbar_o *)0x0)) {
      fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
      (pUVar2->fields)._currentScrollValue = fVar3;
      __this_01 = (pUVar2->fields)._optionsPanel;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        goto label_05cf0673;
      }
    }
    ThrowNullReferenceException();
  }
label_05cf0673:
  return iVar1 == 0;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o* __this, const MethodInfo* method);
// 0x5cf0690

Il2CppObject *
UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o* __this, const MethodInfo* method);
// 0x5cf06a0

void UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__26_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o* __this, const MethodInfo* method);
// 0x5cf06e0

Il2CppObject *
UI_DropdownSettingElement__WaitAndCloseOptions_d__26__System_Collections_IEnumerator_get_Current
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__25___ctor (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cf00a0

void UI_DropdownSettingElement__WaitAndEnableOptions_d__25___ctor
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x5cf06f0

void UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_IDisposable_Dispose
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndEnableOptions_d__25__MoveNext (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x5cf0700

bool UI_DropdownSettingElement__WaitAndEnableOptions_d__25__MoveNext
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_DropdownSettingElement_o *__this_00;
  UnityEngine_UI_Scrollbar_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  bool bVar5;
  UnityEngine_Vector3_Fields UVar6;
  
  if (Il2CppMethodInitialized_07547c89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547c89 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (UI_DropdownSettingElement_o *)0x0) ||
       (__this_01 = (__this_00->fields)._scrollBar, __this_01 == (UnityEngine_UI_Scrollbar_o *)0x0))
    goto label_05cf08a8;
    bVar5 = false;
    UnityEngine_UI_Scrollbar__set_value(__this_01,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
        UI_DropdownSettingElement__SetOptionsPosition(__this_00,method);
        pUVar2 = (__this_00->fields)._optionsPanel;
        if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UVar6 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
            (__this_00->fields)._lastKnownPosition.fields = UVar6;
            pUVar2 = (__this_00->fields)._optionsPanel;
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
              pIVar3 = (Il2CppObject *)
                       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
              UnityEngine_WaitForEndOfFrame___ctor
                        ((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
              (__this->fields).__2__current = pIVar3;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
              (__this->fields).__1__state = 2;
              return true;
            }
          }
        }
      }
label_05cf08a8:
      ThrowNullReferenceException();
    }
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      pIVar3 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x5cf08b0

Il2CppObject *
UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x5cf08c0

void UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__25_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x5cf0900

Il2CppObject *
UI_DropdownSettingElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_get_Current
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_DropdownSettingElement__get_SupportedSettingTypes (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cef1d0

System_Collections_Generic_HashSet_SettingType__o *
UI_DropdownSettingElement__get_SupportedSettingTypes(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_07547c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_07547c7c = '\x01';
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
            ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
  return __this_00;
}


// UI.DropdownSettingElement$$Setup
// il2cpp: void UI_DropdownSettingElement__Setup (UI_DropdownSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x5cee3b0

void UI_DropdownSettingElement__Setup
               (UI_DropdownSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth
               ,float elementHeight,float optionsWidth,float maxScrollHeight,
               UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,System_Int32_array *intOptionValues,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_GameObject_o **targetAddress_00;
  UnityEngine_GameObject_o **targetAddress_01;
  UnityEngine_UI_Scrollbar_o **targetAddress_02;
  int32_t value;
  uint uVar1;
  System_Func_string__string__o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_UI_Button_o *pUVar9;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar10;
  ulong uVar11;
  UnityEngine_UI_Image_o *pUVar12;
  UnityEngine_RectTransform_o *pUVar13;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_Scrollbar_o *pUVar14;
  UI_MapEditorScaledPanel_o *x;
  UnityEngine_Transform_o *pUVar15;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_03;
  MethodInfo *pMVar16;
  ulong uVar17;
  UnityEngine_Color_o UVar18;
  float local_c8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pMVar16 = (MethodInfo *)tooltip;
  if (Il2CppMethodInitialized_07547c7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_MapEditorScaledPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_DropdownSettingElement_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
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
    Il2CppMethodInitialized_07547c7d = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_03 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Dropdown cannot have 0 options.");
      System_ArgumentException___ctor_54186d0(__this_03,pSVar7,(MethodInfo *)0x0);
      pMVar16 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_DropdownSettingElement_Setup);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar16);
    }
    (__this->fields)._onDropdownOptionSelect = onDropdownOptionSelect;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onDropdownOptionSelect);
    (__this->fields)._intOptionValues = intOptionValues;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues);
    (__this->fields)._options = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Dropdown/Mask",(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        targetAddress = &(__this->fields)._optionsPanel;
        (__this->fields)._optionsPanel = pUVar6;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Transform__Find(pUVar5,"Dropdown/SelectedButton",(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
            targetAddress_00 = &(__this->fields)._selectedButton;
            (__this->fields)._selectedButton = pUVar6;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            pUVar6 = (__this->fields)._selectedButton;
            if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Transform__Find(pUVar5,"Label",(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                  targetAddress_01 = &(__this->fields)._selectedButtonLabel;
                  (__this->fields)._selectedButtonLabel = pUVar6;
                  Il2CppCodeGenWriteBarrier(targetAddress_01);
                  if ((int)options->max_length == 0) {
label_05ceef16:
                    ThrowIndexOutOfRangeException();
                  }
                  pUVar6 = (__this->fields)._selectedButtonLabel;
                  pSVar7 = options->m_Items[0];
                  pSVar2 = (__this->fields)._optionLabel;
                  if (pSVar2 != (System_Func_string__string__o *)0x0) {
                    pSVar7 = (System_String_o *)
                             (*(code *)(pSVar2->fields).invoke_impl)
                                       ((pSVar2->fields).method_code,pSVar7,(pSVar2->fields).method);
                  }
                  if (style != (UI_ElementStyle_o *)0x0) {
                    value = (style->fields).FontSize;
                    if (Il2CppMethodInitialized_07547c72 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                      Il2CppMethodInitialized_07547c72 = '\x01';
                    }
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar6,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                  (pUVar8,pSVar7,(pUVar8->klass->vtable)._75_set_text.method);
                        UnityEngine_UI_Text__set_fontSize(pUVar8,value,(MethodInfo *)0x0);
                        if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                             (*targetAddress_00,
                                              (MethodInfo_353B730 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                          if (pUVar9 != (UnityEngine_UI_Button_o *)0x0) {
                            __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar9->fields).m_OnClick;
                            __this_01 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                            UnityEngine_Events_UnityAction___ctor
                                      (__this_01,(Il2CppObject *)__this,
                                       (intptr_t)MethodInfo_UI_DropdownSettingElement_Setup_b__14_0,
                                       (MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (__this_00,__this_01,(MethodInfo *)0x0);
                              if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                                    (*targetAddress_00,
                                                     (MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                    );
                                if (pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                  (*(pUVar10->klass->vtable)._36_set_preferredWidth.methodPtr)
                                            (pUVar10,elementWidth,
                                             (pUVar10->klass->vtable)._36_set_preferredWidth.method);
                                  if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                                        (*targetAddress_00,
                                                         (MethodInfo_353B730 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                       );
                                    if (pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                      (*(pUVar10->klass->vtable)._38_set_preferredHeight.methodPtr)
                                                (pUVar10,elementHeight,
                                                 (pUVar10->klass->vtable)._38_set_preferredHeight.method);
                                      if (0 < (int)options->max_length) {
                                        uVar11 = options->max_length & 0xffffffff;
                                        uVar17 = 0;
                                        do {
                                          if (uVar11 <= uVar17) goto label_05ceef16;
                                          UI_DropdownSettingElement__CreateOptionButton
                                                    (__this,options->m_Items[uVar17],(int32_t)uVar17,
                                                     optionsWidth,elementHeight,(style->fields).FontSize,
                                                     (style->fields).ThemePanel,pMVar16);
                                          uVar17 = uVar17 + 1;
                                          uVar1 = (uint)options->max_length;
                                          uVar11 = (ulong)uVar1;
                                        } while ((long)uVar17 < (long)(int)uVar1);
                                      }
                                      if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                                           (*targetAddress_00,
                                                            (MethodInfo_353B730 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                        pSVar7 = (style->fields).ThemePanel;
                                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_UI_UIManager);
                                        }
                                        UI_UIManager__GetThemeColorBlock
                                                  (&local_88,pSVar7,"DefaultSetting",
                                                   "Dropdown","DefaultPanel",
                                                   (MethodInfo *)0x0);
                                        if (pUVar9 != (UnityEngine_UI_Button_o *)0x0) {
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
                                                    ((UnityEngine_UI_Selectable_o *)pUVar9,value_00,
                                                     (MethodInfo *)0x0);
                                          pUVar6 = *targetAddress_01;
                                          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                               (pUVar6,(MethodInfo_353B730 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                            UVar18 = UI_UIManager__GetThemeColor
                                                               ((style->fields).ThemePanel,
                                                                "DefaultSetting","DropdownTextColor",
                                                                "DefaultPanel",(MethodInfo *)0x0);
                                            if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
                                              (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                                        (pUVar8,UVar18,
                                                         (pUVar8->klass->vtable)._23_set_color.method);
                                              if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                                pUVar5 = UnityEngine_GameObject__get_transform
                                                                   (*targetAddress_00,(MethodInfo *)0x0);
                                                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                  pUVar5 = UnityEngine_Transform__Find
                                                                     (pUVar5,"Image",
                                                                      (MethodInfo *)0x0);
                                                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                    pUVar12 = UnityEngine_Component__GetComponent_object_
                                                                        ((UnityEngine_Component_o *)pUVar5,
                                                                         (MethodInfo_34B0830 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                                    UVar18 = UI_UIManager__GetThemeColor
                                                                       ((style->fields).ThemePanel,
                                                                        "DefaultSetting",
                                                                        "DropdownTextColor",
                                                                        "DefaultPanel",
                                                                        (MethodInfo *)0x0);
                                                    if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
                                                      (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                                                                (pUVar12,UVar18,
                                                                 (pUVar12->klass->vtable)._23_set_color.method
                                                                );
                                                      if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar5 = UnityEngine_GameObject__get_transform
                                                                           (*targetAddress,(MethodInfo *)0x0);
                                                        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                          pUVar5 = UnityEngine_Transform__Find
                                                                             (pUVar5,"Options",
                                                                              (MethodInfo *)0x0);
                                                          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                            pUVar12 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar5,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                                       UVar18 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting",
                                                                           "DropdownBorderColor",
                                                                           "DefaultPanel",
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
                                                         (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                                                                   (pUVar12,UVar18,
                                                                    (pUVar12->klass->vtable)._23_set_color.
                                                                    method);
                                                         UnityEngine_Canvas__ForceUpdateCanvases
                                                                   ((MethodInfo *)0x0);
                                                         if (*targetAddress != (UnityEngine_GameObject_o *)0x0
                                                            ) {
                                                           pUVar5 = UnityEngine_GameObject__get_transform
                                                                              (*targetAddress,
                                                                               (MethodInfo *)0x0);
                                                           if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar5 = UnityEngine_Transform__Find
                                                                                (pUVar5,"Options",
                                                                                 (MethodInfo *)0x0);
                                                             if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                               pUVar13 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar5,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       );
                                                       if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UVar3 = UnityEngine_RectTransform__get_sizeDelta
                                                                           (pUVar13,(MethodInfo *)0x0);
                                                         local_c8 = maxScrollHeight;
                                                         if (UVar3.fields.y <= maxScrollHeight) {
                                                           if (*targetAddress ==
                                                               (UnityEngine_GameObject_o *)0x0)
                                                           goto label_05ceef11;
                                                           __this_02 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (*targetAddress,
                                                                  (MethodInfo_353B730 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect
                                                       );
                                                       if (__this_02 == (UnityEngine_UI_ScrollRect_o *)0x0)
                                                       goto label_05ceef11;
                                                       UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                                 (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                       if (*targetAddress == (UnityEngine_GameObject_o *)0x0)
                                                       goto label_05ceef11;
                                                       pUVar5 = UnityEngine_GameObject__get_transform
                                                                          (*targetAddress,(MethodInfo *)0x0);
                                                       if (pUVar5 == (UnityEngine_Transform_o *)0x0)
                                                       goto label_05ceef11;
                                                       pUVar5 = UnityEngine_Transform__Find
                                                                          (pUVar5,"Scrollbar",
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar5 == (UnityEngine_Transform_o *)0x0)
                                                       goto label_05ceef11;
                                                       pUVar6 = UnityEngine_Component__get_gameObject
                                                                          ((UnityEngine_Component_o *)pUVar5,
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar6 == (UnityEngine_GameObject_o *)0x0)
                                                       goto label_05ceef11;
                                                       UnityEngine_GameObject__SetActive
                                                                 (pUVar6,false,(MethodInfo *)0x0);
                                                       local_c8 = UVar3.fields.y;
                                                       }
                                                       if (*targetAddress != (UnityEngine_GameObject_o *)0x0)
                                                       {
                                                         pUVar5 = UnityEngine_GameObject__get_transform
                                                                            (*targetAddress,(MethodInfo *)0x0)
                                                         ;
                                                         if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar5 = UnityEngine_Transform__Find
                                                                              (pUVar5,"Scrollbar",
                                                                               (MethodInfo *)0x0);
                                                           if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar14 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar5,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Scrollbar
                                                       );
                                                       targetAddress_02 = &(__this->fields)._scrollBar;
                                                       (__this->fields)._scrollBar = pUVar14;
                                                       Il2CppCodeGenWriteBarrier(targetAddress_02);
                                                       pUVar14 = (__this->fields)._scrollBar;
                                                       pSVar7 = (style->fields).ThemePanel;
                                                       if ((TypeInfo_UI_UIManager->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                       }
                                                       pMVar16 = (MethodInfo *)0x0;
                                                       UI_UIManager__GetThemeColorBlock
                                                                 (&local_88,pSVar7,"DefaultSetting",
                                                                  "DropdownScrollbar","DefaultPanel",
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar14 != (UnityEngine_UI_Scrollbar_o *)0x0) {
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
                                                                   ((UnityEngine_UI_Selectable_o *)pUVar14,
                                                                    value_01,(MethodInfo *)0x0);
                                                         pUVar14 = *targetAddress_02;
                                                         if (pUVar14 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                                           pUVar12 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar14,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                                       UVar18 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting",
                                                                           "DropdownScrollbarBackgroundColor",
                                                                           "DefaultPanel",
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
                                                         (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                                                                   (pUVar12,UVar18,
                                                                    (pUVar12->klass->vtable)._23_set_color.
                                                                    method);
                                                         if (*targetAddress != (UnityEngine_GameObject_o *)0x0
                                                            ) {
                                                           pUVar13 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (*targetAddress,
                                                                  (MethodInfo_353B730 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UVar3.fields.y = local_c8;
                                                         UVar3.fields.x = optionsWidth;
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar13,UVar3,(MethodInfo *)0x0);
                                                         pUVar5 = UnityEngine_Component__get_transform
                                                                            ((UnityEngine_Component_o *)__this
                                                                             ,(MethodInfo *)0x0);
                                                         if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar5 = UnityEngine_Transform__Find
                                                                              (pUVar5,"Label",
                                                                               (MethodInfo *)0x0);
                                                           if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar10 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar5,
                                                                  (MethodInfo_34B0830 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                       );
                                                       if (pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                                         (*(pUVar10->klass->vtable)._38_set_preferredHeight.
                                                           methodPtr)(pUVar10,elementHeight,
                                                                      (pUVar10->klass->vtable).
                                                                      _38_set_preferredHeight.method);
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
                                                       bVar4 = UnityEngine_Object__op_Inequality
                                                                         ((UnityEngine_Object_o *)x,
                                                                          (UnityEngine_Object_o *)0x0,
                                                                          (MethodInfo *)0x0);
                                                       (__this->fields)._scaleWithPanel = bVar4;
                                                       pUVar6 = (__this->fields)._optionsPanel;
                                                       if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar5 = UnityEngine_GameObject__get_transform
                                                                            (pUVar6,(MethodInfo *)0x0);
                                                         pUVar15 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                                                           pUVar15 = UnityEngine_Transform__get_root
                                                                               (pUVar15,(MethodInfo *)0x0);
                                                           if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent_692d510
                                                                       (pUVar5,pUVar15,true,(MethodInfo *)0x0)
                                                             ;
                                                             if (*targetAddress !=
                                                                 (UnityEngine_GameObject_o *)0x0) {
                                                               UnityEngine_GameObject__SetActive
                                                                         (*targetAddress,false,
                                                                          (MethodInfo *)0x0);
                                                               UI_BaseSettingElement__Setup
                                                                         ((UI_BaseSettingElement_o *)__this,
                                                                          setting,style,title,tooltip,pMVar16)
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
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05ceef11:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$SetOptionLabel
// il2cpp: void UI_DropdownSettingElement__SetOptionLabel (UI_DropdownSettingElement_o* __this, System_Func_string__string__o* optionLabel, const MethodInfo* method);
// 0x5cef7b0

void UI_DropdownSettingElement__SetOptionLabel
               (UI_DropdownSettingElement_o *__this,System_Func_string__string__o *optionLabel,
               MethodInfo *method)

{
  (__this->fields)._optionLabel = optionLabel;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._optionLabel);
  return;
}


// UI.DropdownSettingElement$$OptionLabel
// il2cpp: System_String_o* UI_DropdownSettingElement__OptionLabel (UI_DropdownSettingElement_o* __this, System_String_o* option, const MethodInfo* method);
// 0x5cef270

System_String_o *
UI_DropdownSettingElement__OptionLabel
          (UI_DropdownSettingElement_o *__this,System_String_o *option,MethodInfo *method)

{
  System_Func_string__string__o *pSVar1;
  code *vtableDispatch;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields)._optionLabel;
  if (pSVar1 == (System_Func_string__string__o *)0x0) {
    return option;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  pSVar2 = (System_String_o *)
           (*vtableDispatch)
                     ((pSVar1->fields).method_code,option,(pSVar1->fields).method,vtableDispatch);
  return pSVar2;
}


// UI.DropdownSettingElement$$FixScale
// il2cpp: void UI_DropdownSettingElement__FixScale (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cef7d0

void UI_DropdownSettingElement__FixScale(UI_DropdownSettingElement_o *__this,MethodInfo *method)

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


// UI.DropdownSettingElement$$IsOpen
// il2cpp: bool UI_DropdownSettingElement__IsOpen (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cef840

bool UI_DropdownSettingElement__IsOpen(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547c7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c7e = '\x01';
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


// UI.DropdownSettingElement$$SetOptionsPosition
// il2cpp: void UI_DropdownSettingElement__SetOptionsPosition (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cef8c0

void UI_DropdownSettingElement__SetOptionsPosition(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  float local_7c;
  undefined8 local_78;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547c7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547c7f = '\x01';
  }
  if ((__this->fields)._scaleWithPanel == false) {
label_05cef9cb:
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1 = (pUVar8->oneVector).fields.x;
    uVar4 = (pUVar8->oneVector).fields.y;
    local_7c = (pUVar8->oneVector).fields.z;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    fVar13 = TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale;
    local_7c = local_7c * fVar13;
    local_48 = CONCAT44((float)uVar4 * fVar13,(float)uVar1 * fVar13);
  }
  else {
    pUVar7 = (__this->fields)._optionsPanel;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_05cefc0d;
    pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05cefc0d;
    pUVar11 = UnityEngine_Transform__get_root(pUVar11,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._selectedButton;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_05cefc0d;
    __this_00 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05cefc0d;
    UVar14 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05cefc0d;
    UVar14 = UnityEngine_Transform__InverseTransformVector(pUVar11,UVar14,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05cefc0d;
    UnityEngine_Transform__set_localScale(pUVar10,UVar14,(MethodInfo *)0x0);
    if ((__this->fields)._scaleWithPanel == false) goto label_05cef9cb;
    pUVar7 = (__this->fields)._selectedButton;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_05cefc0d;
    pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05cefc0d;
    UVar14 = UnityEngine_Transform__get_lossyScale(pUVar10,(MethodInfo *)0x0);
    local_7c = UVar14.fields.z;
    local_48 = UVar14.fields._0_8_;
  }
  pUVar7 = (__this->fields)._selectedButton;
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      UVar14 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._optionsPanel;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        uVar2 = (__this->fields)._optionsOffset.fields.x;
        uVar5 = (__this->fields)._optionsOffset.fields.y;
        fVar13 = (__this->fields)._optionsOffset.fields.z;
        pUVar12 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar7,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
          UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar12,(MethodInfo *)0x0);
          pUVar7 = (__this->fields)._optionsPanel;
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              local_78._0_4_ = UVar14.fields.x;
              local_78._4_4_ = UVar14.fields.y;
              local_78._4_4_ = local_78._4_4_ + (float)uVar5 * local_48._4_4_;
              local_78 = CONCAT44(local_78._4_4_,(float)local_78 + (float)uVar2 * (float)local_48);
              UVar15 = UnityEngine_Transform__get_lossyScale(pUVar10,(MethodInfo *)0x0);
              fStack_34 = UVar9.fields.y;
              if (0.0 <= local_78._4_4_ + fStack_34 * UVar15.fields.y * -0.5) {
                fVar13 = UVar14.fields.z + fVar13 * local_7c;
              }
              else {
                pUVar7 = (__this->fields)._selectedButton;
                if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_05cefc0d;
                uVar3 = (__this->fields)._optionsOffset.fields.x;
                uVar6 = (__this->fields)._optionsOffset.fields.y;
                fVar13 = (__this->fields)._optionsOffset.fields.z;
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05cefc0d;
                UVar14 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
                local_78 = CONCAT44(UVar14.fields.y - local_48._4_4_ * (float)uVar6,
                                    UVar14.fields.x + (float)local_48 * (float)uVar3);
                fVar13 = local_7c * fVar13 + UVar14.fields.z;
              }
              pUVar7 = (__this->fields)._optionsPanel;
              if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  pUVar12 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar10,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                  if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar14.fields.z = fVar13;
                    UVar14.fields.x = (float)local_78;
                    UVar14.fields.y = local_78._4_4_;
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)pUVar12,UVar14,(MethodInfo *)0x0);
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
label_05cefc0d:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$OnDisable
// il2cpp: void UI_DropdownSettingElement__OnDisable (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cefc20

void UI_DropdownSettingElement__OnDisable(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547c80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c80 = '\x01';
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


// UI.DropdownSettingElement$$OnDestroy
// il2cpp: void UI_DropdownSettingElement__OnDestroy (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cefca0

void UI_DropdownSettingElement__OnDestroy(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547c81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c81 = '\x01';
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


// UI.DropdownSettingElement$$Update
// il2cpp: void UI_DropdownSettingElement__Update (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cefd20

void UI_DropdownSettingElement__Update(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Scrollbar_o *__this_01;
  bool bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  UnityEngine_Object_o *y;
  UnityEngine_Transform_o *__this_02;
  UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this_03;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (Il2CppMethodInitialized_07547c82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c82 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    bVar4 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar5 == (UnityEngine_EventSystems_EventSystem_o *)0x0) ||
         (__this_01 = (__this->fields)._scrollBar, __this_01 == (UnityEngine_UI_Scrollbar_o *)0x0))
      goto label_05cefee4;
      pUVar3 = (UnityEngine_Object_o *)(pUVar5->fields).m_CurrentSelected;
      y = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar3,y,(MethodInfo *)0x0);
      if (bVar4) goto label_05cefe75;
    }
    __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._lastKnownPosition.fields.x;
      uVar2 = (__this->fields)._lastKnownPosition.fields.y;
      fVar6 = UVar9.fields.y - (float)uVar2;
      fVar7 = UVar9.fields.z - (__this->fields)._lastKnownPosition.fields.z;
      fVar8 = UVar9.fields.x - (float)uVar1;
      if (fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11) {
        return;
      }
label_05cefe75:
      if (Il2CppMethodInitialized_07547c85 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__26);
        Il2CppMethodInitialized_07547c85 = '\x01';
      }
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__26);
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      (__this_03->fields).__1__state = 0;
      (__this_03->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_03,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_05cefee4:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$CreateOptionButton
// il2cpp: void UI_DropdownSettingElement__CreateOptionButton (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x5cef290

void UI_DropdownSettingElement__CreateOptionButton
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,float width,
               float height,int32_t fontSize,System_String_o *themePanel,MethodInfo *method)

{
  System_Func_string__string__o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  UI_DropdownSettingElement___c__DisplayClass23_0_o *__this_01;
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  System_String_o **targetAddress;
  UnityEngine_Color_o UVar9;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547c83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_DropdownSettingElement_c__DisplayClass23_0_CreateOptionButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DropdownSettingElement_c__DisplayClass23_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownOption");
    Il2CppMethodInitialized_07547c83 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_c__DisplayClass23_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_DropdownSettingElement___c__DisplayClass23_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    targetAddress = &(__this_01->fields).option;
    (__this_01->fields).option = option;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this_01->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar5,"Prefabs/Elements/DropdownOption",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
    if (root != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._optionsPanel;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__Find(pUVar3,"Options",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(pUVar2,pUVar3,false,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                pSVar5 = *targetAddress;
                pSVar1 = (__this->fields)._optionLabel;
                if (pSVar1 != (System_Func_string__string__o *)0x0) {
                  pSVar5 = (System_String_o *)
                           (*(code *)(pSVar1->fields).invoke_impl)
                                     ((pSVar1->fields).method_code,pSVar5,(pSVar1->fields).method);
                }
                if (Il2CppMethodInitialized_07547c72 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                  Il2CppMethodInitialized_07547c72 = '\x01';
                }
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar4,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                  if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                    (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                              (pUVar6,pSVar5,(pUVar6->klass->vtable)._75_set_text.method);
                    UnityEngine_UI_Text__set_fontSize(pUVar6,fontSize,(MethodInfo *)0x0);
                    pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                       (root,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                    if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                (__this_02,(Il2CppObject *)__this_01,
                                 (intptr_t)
                                 MethodInfo_UI_DropdownSettingElement_c__DisplayClass23_0_CreateOptionButton_b__0
                                 ,(MethodInfo *)0x0);
                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_02,(MethodInfo *)0x0);
                        pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                           (root,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement)
                        ;
                        if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                          (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                                    (pUVar8,width,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
                          pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                             (root,(MethodInfo_353B730 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                             );
                          if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                            (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                                      (pUVar8,height,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
                            pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                               (root,(MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                            }
                            UI_UIManager__GetThemeColorBlock
                                      (&local_88,themePanel,"DefaultSetting","Dropdown",
                                       "DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                              value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                              value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                              value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                              value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                              value.fields.m_HighlightedColor.fields.r =
                                   local_88.fields.m_HighlightedColor.fields.r;
                              value.fields.m_HighlightedColor.fields.g =
                                   local_88.fields.m_HighlightedColor.fields.g;
                              value.fields.m_HighlightedColor.fields.b =
                                   local_88.fields.m_HighlightedColor.fields.b;
                              value.fields.m_HighlightedColor.fields.a =
                                   local_88.fields.m_HighlightedColor.fields.a;
                              value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
                              value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
                              value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
                              value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
                              value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r
                              ;
                              value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g
                              ;
                              value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b
                              ;
                              value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a
                              ;
                              value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r
                              ;
                              value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g
                              ;
                              value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b
                              ;
                              value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a
                              ;
                              value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                              value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)pUVar7,value,(MethodInfo *)0x0);
                              pUVar2 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                pUVar2 = UnityEngine_Transform__Find
                                                   (pUVar2,"Label",(MethodInfo *)0x0);
                                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar6 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar2,
                                                      (MethodInfo_34B0830 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_Text);
                                  UVar9 = UI_UIManager__GetThemeColor
                                                    (themePanel,"DefaultSetting","DropdownTextColor",
                                                     "DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                                    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                              (pUVar6,UVar9,(pUVar6->klass->vtable)._23_set_color.method);
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
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$OnDropdownSelectedButtonClick
// il2cpp: void UI_DropdownSettingElement__OnDropdownSelectedButtonClick (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5ceff70

void UI_DropdownSettingElement__OnDropdownSelectedButtonClick
               (UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Scrollbar_o *__this_00;
  bool bVar2;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this_01;
  float fVar3;
  
  pUVar1 = (__this->fields)._optionsPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_07547c84 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__25);
        Il2CppMethodInitialized_07547c84 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__25);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      (__this_01->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
    __this_00 = (__this->fields)._scrollBar;
    if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
      (__this->fields)._currentScrollValue = fVar3;
      pUVar1 = (__this->fields)._optionsPanel;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$WaitAndEnableOptions
// il2cpp: System_Collections_IEnumerator_o* UI_DropdownSettingElement__WaitAndEnableOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cf0030

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndEnableOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement__WaitAndEnableOptions_d__25_o *__this_00;
  
  if (Il2CppMethodInitialized_07547c84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__25)
    ;
    Il2CppMethodInitialized_07547c84 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__25);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.DropdownSettingElement$$WaitAndCloseOptions
// il2cpp: System_Collections_IEnumerator_o* UI_DropdownSettingElement__WaitAndCloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cefef0

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndCloseOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement__WaitAndCloseOptions_d__26_o *__this_00;
  
  if (Il2CppMethodInitialized_07547c85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__26);
    Il2CppMethodInitialized_07547c85 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__26);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.DropdownSettingElement$$OnDropdownOptionClick
// il2cpp: void UI_DropdownSettingElement__OnDropdownOptionClick (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x5cf00e0

void UI_DropdownSettingElement__OnDropdownOptionClick
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Func_string__string__o *pSVar4;
  UnityEngine_UI_Scrollbar_o *__this_00;
  Settings_TypedSetting_T__o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Settings_TypedSetting_int__o *__this_02;
  System_Int32_array *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_07547c86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547c86 = '\x01';
  }
  pUVar3 = (__this->fields)._selectedButtonLabel;
  pSVar4 = (__this->fields)._optionLabel;
  pSVar7 = option;
  if (pSVar4 != (System_Func_string__string__o *)0x0) {
    pSVar7 = (System_String_o *)
             (*(code *)(pSVar4->fields).invoke_impl)
                       ((pSVar4->fields).method_code,option,(pSVar4->fields).method);
  }
  if (Il2CppMethodInitialized_07547c73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    Il2CppMethodInitialized_07547c73 = '\x01';
  }
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pIVar8 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text),
     pIVar8 != (Il2CppObject *)0x0)) {
    (*pIVar8->klass->vtable[0x4b].methodPtr)(pIVar8,pSVar7,pIVar8->klass->vtable[0x4b].method);
    __this_00 = (__this->fields)._scrollBar;
    if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      fVar9 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
      (__this->fields)._currentScrollValue = fVar9;
      pUVar3 = (__this->fields)._optionsPanel;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        iVar2 = (__this->fields)._settingType;
        if (iVar2 == 2) {
          __this_02 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
          pSVar6 = (__this->fields)._intOptionValues;
          if (pSVar6 == (System_Int32_array *)0x0) {
            if (__this_02 == (Settings_TypedSetting_int__o *)0x0) goto label_05cf0313;
            bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
            if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_IntSetting)) goto label_05cf0308;
          }
          else {
            if (__this_02 == (Settings_TypedSetting_int__o *)0x0) {
              if ((uint)pSVar6->max_length <= (uint)index) {
label_05cf0318:
                ThrowIndexOutOfRangeException();
              }
              goto label_05cf0313;
            }
            bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
            if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
label_05cf0308:
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            if ((uint)pSVar6->max_length <= (uint)index) goto label_05cf0318;
            index = pSVar6->m_Items[index];
          }
          Settings_TypedSetting_int___set_Value
                    (__this_02,index,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pUVar5 = (__this->fields)._onDropdownOptionSelect;
        }
        else {
          if (iVar2 == 4) {
            __this_01 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
            if (__this_01 == (Settings_TypedSetting_T__o *)0x0) goto label_05cf0313;
            bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_05cf0308;
            Settings_TypedSetting_object___set_Value
                      (__this_01,(Il2CppObject *)option,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          pUVar5 = (__this->fields)._onDropdownOptionSelect;
        }
        if (pUVar5 == (UnityEngine_Events_UnityAction_o *)0x0) {
          return;
        }
        (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
        return;
      }
    }
  }
label_05cf0313:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$CloseOptions
// il2cpp: void UI_DropdownSettingElement__CloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cef0c0

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
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$SyncElement
// il2cpp: void UI_DropdownSettingElement__SyncElement (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cf0320
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cf0420: lea rax, [rip + 0x15bab51]  ; MethodInfo_UnityEngine_GameObject_GetComponent_Text
// asm:   0x5cf0427: mov rsi, qword ptr [rax]
// asm:   0x5cf042a: mov rdi, rbp
// asm:   0x5cf042d: jmp 0x5cf052c
// asm:   0x5cf051f: lea rax, [rip + 0x15baa52]  ; MethodInfo_UnityEngine_GameObject_GetComponent_Text
// asm:   0x5cf0526: mov rsi, qword ptr [rax]
// asm:   0x5cf0529: mov rdi, r15

void UI_DropdownSettingElement__SyncElement(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_BaseSetting_o *pSVar3;
  System_Func_string__string__o *pSVar4;
  Settings_TypedSetting_int__o *__this_00;
  System_Int32_array *array;
  uint value;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_07547c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547c87 = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_05cf0565;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
       ) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    array = (__this->fields)._intOptionValues;
    value = (__this_00->fields)._value;
    if (array != (System_Int32_array *)0x0) {
      value = System_Array__IndexOf_int_
                        (array,value,(MethodInfo_36029E0 *)MethodInfo_System_Array_IndexOf_int);
    }
    if ((int)value < 0) {
label_05cf04aa:
      value = 0;
      Settings_TypedSetting_int___set_Value
                (__this_00,0,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar6 = (__this->fields)._options;
      if (pSVar6 == (System_String_array *)0x0) goto label_05cf0565;
    }
    else {
      pSVar6 = (__this->fields)._options;
      if (pSVar6 == (System_String_array *)0x0) goto label_05cf0565;
      if ((int)pSVar6->max_length <= (int)value) goto label_05cf04aa;
    }
    if ((uint)pSVar6->max_length <= value) {
      ThrowIndexOutOfRangeException();
    }
    __this_01 = (__this->fields)._selectedButtonLabel;
    pSVar5 = pSVar6->m_Items[value];
    pSVar4 = (__this->fields)._optionLabel;
    if (pSVar4 != (System_Func_string__string__o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(code *)(pSVar4->fields).invoke_impl)
                         ((pSVar4->fields).method_code,pSVar5,(pSVar4->fields).method);
    }
    if (Il2CppMethodInitialized_07547c73 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      Il2CppMethodInitialized_07547c73 = '\x01';
    }
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05cf0565;
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_05cf0565;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)
       ) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_01 = (__this->fields)._selectedButtonLabel;
    pSVar5 = (*(uint64_t *)((char *)pSVar3 + 0x20));
    pSVar4 = (__this->fields)._optionLabel;
    if (pSVar4 != (System_Func_string__string__o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(code *)(pSVar4->fields).invoke_impl)
                         ((pSVar4->fields).method_code,pSVar5,(pSVar4->fields).method);
    }
    if (Il2CppMethodInitialized_07547c73 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      Il2CppMethodInitialized_07547c73 = '\x01';
    }
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05cf0565;
  }
  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                     (__this_01,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
  if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
              (pUVar7,pSVar5,(pUVar7->klass->vtable)._75_set_text.method);
    return;
  }
label_05cf0565:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$.ctor
// il2cpp: void UI_DropdownSettingElement___ctor (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cef170

void UI_DropdownSettingElement___ctor(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  (__this->fields)._currentScrollValue = 1.0;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement$$<Setup>b__14_0
// il2cpp: void UI_DropdownSettingElement___Setup_b__14_0 (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cf0580

void UI_DropdownSettingElement___Setup_b__14_0(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement__OnDropdownSelectedButtonClick(__this,method);
  return;
}


