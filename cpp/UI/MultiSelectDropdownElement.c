// Type: UI.MultiSelectDropdownElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MultiSelectDropdownElement.cs
// Prior real C# source: none
// --------------------------------

// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass24_0___ctor (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MultiSelectDropdownElement___c__DisplayClass24_0___ctor(UI_MultiSelectDropdownElement___c__DisplayClass24_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__0 (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o* __this, bool value, const MethodInfo* method);
// 0x18221ae70

void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__0
               (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *__this,bool value,MethodInfo *method)

{
  UI_MultiSelectDropdownElement_o *pUVar1;
  System_Int32_array *pSVar2;
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  uint item;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MultiSelectDropdownElement_o *)0x0) {
    item = (__this->fields).index;
    if (Il2CppMethodInitialized_18434713d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Remove);
      Il2CppMethodInitialized_18434713d = '\x01';
    }
    if ((pUVar1->fields)._intOptionValues != (System_Int32_array *)0x0) {
      pSVar2 = (pUVar1->fields)._intOptionValues;
      if ((uint)pSVar2->max_length <= item) {
        ThrowIndexOutOfRangeException();
      }
      item = pSVar2->m_Items[(int)item];
    }
    __this_00 = (pUVar1->fields)._hashSetSetting;
    if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
      if (value) {
        Settings_HashSetSetting_int___Add
                  (__this_00,item,(MethodInfo_1754280 *)MethodInfo_Settings_HashSetSetting_int_Add);
      }
      else {
        Settings_HashSetSetting_int___Remove
                  (__this_00,item,(MethodInfo_1754EF0 *)MethodInfo_Settings_HashSetSetting_int_Remove);
      }
      pUVar3 = (pUVar1->fields)._onSelectionChanged;
      if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass24_0$$<CreateOptionToggle>b__1
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__1 (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x18221af40

void UI_MultiSelectDropdownElement___c__DisplayClass24_0___CreateOptionToggle_b__1
               (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *__this_00;
  
  __this_00 = (__this->fields).toggle;
  if (__this_00 != (UnityEngine_UI_Toggle_o *)0x0) {
    UnityEngine_UI_Toggle__set_isOn(__this_00,(__this_00->fields).m_IsOn == false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28___ctor (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28___ctor(UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_IDisposable_Dispose (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_IDisposable_Dispose(UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, MethodInfo* method)

{
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$MoveNext
// il2cpp: bool UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__MoveNext (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x18221b480

bool UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__MoveNext
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  UI_MultiSelectDropdownElement_o *__this_00;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  float fVar5;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184347142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184347142 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pIVar9 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar9,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (UI_MultiSelectDropdownElement_o *)0x0) goto label_18221b676;
      pUVar3 = (__this_00->fields)._scrollBar;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        pUVar3 = (__this_00->fields)._scrollBar;
        if (pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_18221b676;
        UnityEngine_UI_Scrollbar__set_value(pUVar3,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0);
      }
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
    UI_MultiSelectDropdownElement__SetOptionsPosition(__this_00,(MethodInfo *)0x0);
    pUVar4 = (__this_00->fields)._optionsPanel;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling(pUVar7,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__get_position(&local_18,pUVar7,(MethodInfo *)0x0);
          fVar2 = (pUVar8->fields).z;
          fVar5 = (pUVar8->fields).y;
          (__this_00->fields)._lastKnownPosition.fields.x = (pUVar8->fields).x;
          (__this_00->fields)._lastKnownPosition.fields.y = fVar5;
          (__this_00->fields)._lastKnownPosition.fields.z = fVar2;
          pUVar4 = (__this_00->fields)._optionsPanel;
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
            pIVar9 = (Il2CppObject *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar9,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
            (__this->fields).__1__state = 2;
            return true;
          }
        }
      }
    }
  }
label_18221b676:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_IEnumerator_Reset (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, const MethodInfo* method);
// 0x18221b680

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
// 0x180573e90

Il2CppObject*
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28__System_Collections_IEnumerator_get_Current(UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_MultiSelectDropdownElement__get_SupportedSettingTypes (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x182216bd0

System_Collections_Generic_HashSet_SettingType__o *
UI_MultiSelectDropdownElement__get_SupportedSettingTypes
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347135 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  return __this_00;
}


// UI.MultiSelectDropdownElement$$Setup
// il2cpp: void UI_MultiSelectDropdownElement__Setup (UI_MultiSelectDropdownElement_o* __this, Settings_HashSetSetting_int__o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onSelectionChanged, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x182215af0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182215f5c: nop dword ptr [rax]
// asm:   0x182216313: movaps xmm6, xmm0

void UI_MultiSelectDropdownElement__Setup
               (UI_MultiSelectDropdownElement_o *__this,Settings_HashSetSetting_int__o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,float optionsWidth,
               float maxScrollHeight,UnityEngine_Events_UnityAction_o *onSelectionChanged,
               System_Int32_array *intOptionValues,MethodInfo *method)

{
  int32_t value;
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_Button_o *pUVar5;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_UI_ColorBlock_o *pUVar7;
  UnityEngine_Color_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_Scrollbar_o *pUVar12;
  UI_MapEditorScaledPanel_o *x;
  UnityEngine_Transform_o *pUVar13;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_03;
  System_String_o *pSVar14;
  MethodInfo *lastManagedFrame;
  uint index;
  UnityEngine_Color_Fields local_138;
  UnityEngine_UI_ColorBlock_o local_128;
  UnityEngine_UI_ColorBlock_o local_c8;
  
  if (Il2CppMethodInitialized_184347136 == '\0') {
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
    Il2CppMethodInitialized_184347136 = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_03 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      pSVar14 = il2cpp_codegen_get_runtime_metadata(&"MultiSelectDropdown cannot have 0 options.");
      System_ArgumentException___ctor_1a77cc0(__this_03,pSVar14,(MethodInfo *)0x0);
      lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_MultiSelectDropdownElement_Setup);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
    }
    (__this->fields)._hashSetSetting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hashSetSetting,setting);
    (__this->fields)._intOptionValues = intOptionValues;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues,intOptionValues);
    (__this->fields)._onSelectionChanged = onSelectionChanged;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelectionChanged,onSelectionChanged);
    (__this->fields)._options = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._options,options);
    if (style != (UI_ElementStyle_o *)0x0) {
      pSVar14 = (style->fields).ThemePanel;
      (__this->fields)._themePanel = pSVar14;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._themePanel,pSVar14);
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar2 = UnityEngine_Transform__Find(pUVar2,"Dropdown/Mask",(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        (__this->fields)._optionsPanel = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._optionsPanel,pUVar3);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar2 = UnityEngine_Transform__Find(pUVar2,"Dropdown/SelectedButton",(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          (__this->fields)._selectedButton = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedButton,pUVar3);
          pUVar3 = (__this->fields)._selectedButton;
          if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
              (pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
              pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
             (pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
            (__this->fields)._selectedButtonLabel = pUVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedButtonLabel,pUVar3);
            pUVar3 = (__this->fields)._selectedButtonLabel;
            value = (style->fields).FontSize;
            if (Il2CppMethodInitialized_184347105 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text)
              ;
              Il2CppMethodInitialized_184347105 = '\x01';
            }
            if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar3,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Text),
               pUVar4 != (UnityEngine_UI_Text_o *)0x0)) {
              (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                        (pUVar4,title,(pUVar4->klass->vtable)._75_set_text.method);
              UnityEngine_UI_Text__set_fontSize(pUVar4,value,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._selectedButton;
              if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar3,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button),
                 pUVar5 != (UnityEngine_UI_Button_o *)0x0)) {
                __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar5->fields).m_OnClick;
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_MultiSelectDropdownElement_Setup_b__17_0,(MethodInfo *)0x0)
                ;
                if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_01,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._selectedButton;
                  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar3,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement)
                     , pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
                    (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar6,elementWidth,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
                    pUVar3 = (__this->fields)._selectedButton;
                    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                       (pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar3,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                           ), pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
                      (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                                (pUVar6,elementHeight,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
                      for (index = 0; (int)index < (int)options->max_length; index = index + 1) {
                        if ((uint)options->max_length <= index) {
                          ThrowIndexOutOfRangeException();
                        }
                        UI_MultiSelectDropdownElement__CreateOptionToggle
                                  (__this,options->m_Items[(int)index],index,optionsWidth,elementHeight,
                                   (style->fields).FontSize,(style->fields).ThemePanel,(MethodInfo *)0x0);
                      }
                      pUVar3 = (__this->fields)._selectedButton;
                      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar3,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                        pSVar14 = (style->fields).ThemePanel;
                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                        }
                        pUVar7 = UI_UIManager__GetThemeColorBlock
                                           (&local_c8,pSVar14,"DefaultSetting","Dropdown",
                                            "DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
                          local_128.fields.m_NormalColor.fields.r = (pUVar7->fields).m_NormalColor.fields.r;
                          local_128.fields.m_NormalColor.fields.g = (pUVar7->fields).m_NormalColor.fields.g;
                          local_128.fields.m_NormalColor.fields.b = (pUVar7->fields).m_NormalColor.fields.b;
                          local_128.fields.m_NormalColor.fields.a = (pUVar7->fields).m_NormalColor.fields.a;
                          local_128.fields.m_HighlightedColor.fields.r =
                               (pUVar7->fields).m_HighlightedColor.fields.r;
                          local_128.fields.m_HighlightedColor.fields.g =
                               (pUVar7->fields).m_HighlightedColor.fields.g;
                          local_128.fields.m_HighlightedColor.fields.b =
                               (pUVar7->fields).m_HighlightedColor.fields.b;
                          local_128.fields.m_HighlightedColor.fields.a =
                               (pUVar7->fields).m_HighlightedColor.fields.a;
                          local_128.fields.m_PressedColor.fields.r = (pUVar7->fields).m_PressedColor.fields.r;
                          local_128.fields.m_PressedColor.fields.g = (pUVar7->fields).m_PressedColor.fields.g;
                          local_128.fields.m_PressedColor.fields.b = (pUVar7->fields).m_PressedColor.fields.b;
                          local_128.fields.m_PressedColor.fields.a = (pUVar7->fields).m_PressedColor.fields.a;
                          local_128.fields.m_SelectedColor.fields.r =
                               (pUVar7->fields).m_SelectedColor.fields.r;
                          local_128.fields.m_SelectedColor.fields.g =
                               (pUVar7->fields).m_SelectedColor.fields.g;
                          local_128.fields.m_SelectedColor.fields.b =
                               (pUVar7->fields).m_SelectedColor.fields.b;
                          local_128.fields.m_SelectedColor.fields.a =
                               (pUVar7->fields).m_SelectedColor.fields.a;
                          local_128.fields.m_DisabledColor.fields.r =
                               (pUVar7->fields).m_DisabledColor.fields.r;
                          local_128.fields.m_DisabledColor.fields.g =
                               (pUVar7->fields).m_DisabledColor.fields.g;
                          local_128.fields.m_DisabledColor.fields.b =
                               (pUVar7->fields).m_DisabledColor.fields.b;
                          local_128.fields.m_DisabledColor.fields.a =
                               (pUVar7->fields).m_DisabledColor.fields.a;
                          local_128.fields.m_ColorMultiplier = (pUVar7->fields).m_ColorMultiplier;
                          local_128.fields.m_FadeDuration = (pUVar7->fields).m_FadeDuration;
                          UnityEngine_UI_Selectable__set_colors
                                    ((UnityEngine_UI_Selectable_o *)pUVar5,&local_128,(MethodInfo *)0x0);
                          pUVar3 = (__this->fields)._selectedButtonLabel;
                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                               (pUVar3,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                            pUVar8 = UI_UIManager__GetThemeColor
                                               ((UnityEngine_Color_o *)&local_138,(style->fields).ThemePanel,
                                                "DefaultSetting","DropdownTextColor",
                                                "DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                              local_138.r = (pUVar8->fields).r;
                              local_138.g = (pUVar8->fields).g;
                              local_138.b = (pUVar8->fields).b;
                              local_138.a = (pUVar8->fields).a;
                              (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                                        (pUVar4,(UnityEngine_Color_o *)&local_138,
                                         (pUVar4->klass->vtable)._23_set_color.method);
                              pUVar3 = (__this->fields)._selectedButton;
                              if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                                  (pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
                                  pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
                                 (pUVar2 = UnityEngine_Transform__Find
                                                     (pUVar2,"Image",(MethodInfo *)0x0),
                                 pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                                pUVar9 = UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar2,
                                                    (MethodInfo_6651A0 *)
                                                    MethodInfo_UnityEngine_Component_GetComponent_Image);
                                pUVar8 = UI_UIManager__GetThemeColor
                                                   ((UnityEngine_Color_o *)&local_138,
                                                    (style->fields).ThemePanel,"DefaultSetting",
                                                    "DropdownTextColor","DefaultPanel",
                                                    (MethodInfo *)0x0);
                                if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                                  local_138.r = (pUVar8->fields).r;
                                  local_138.g = (pUVar8->fields).g;
                                  local_138.b = (pUVar8->fields).b;
                                  local_138.a = (pUVar8->fields).a;
                                  (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar9,(UnityEngine_Color_o *)&local_138,
                                             (pUVar9->klass->vtable)._23_set_color.method);
                                  pUVar3 = (__this->fields)._optionsPanel;
                                  if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                                      (pUVar2 = UnityEngine_GameObject__get_transform
                                                          (pUVar3,(MethodInfo *)0x0),
                                      pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
                                     (pUVar2 = UnityEngine_Transform__Find
                                                         (pUVar2,"Options",(MethodInfo *)0x0),
                                     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                                    pUVar9 = UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pUVar2,
                                                        (MethodInfo_6651A0 *)
                                                        MethodInfo_UnityEngine_Component_GetComponent_Image);
                                    pUVar8 = UI_UIManager__GetThemeColor
                                                       ((UnityEngine_Color_o *)&local_138,
                                                        (style->fields).ThemePanel,"DefaultSetting",
                                                        "DropdownBorderColor","DefaultPanel",
                                                        (MethodInfo *)0x0);
                                    if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                                      local_138.r = (pUVar8->fields).r;
                                      local_138.g = (pUVar8->fields).g;
                                      local_138.b = (pUVar8->fields).b;
                                      local_138.a = (pUVar8->fields).a;
                                      (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                                (pUVar9,(UnityEngine_Color_o *)&local_138,
                                                 (pUVar9->klass->vtable)._23_set_color.method);
                                      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                                      pUVar3 = (__this->fields)._optionsPanel;
                                      if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                                          (pUVar2 = UnityEngine_GameObject__get_transform
                                                              (pUVar3,(MethodInfo *)0x0),
                                          pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
                                         ((pUVar2 = UnityEngine_Transform__Find
                                                              (pUVar2,"Options",(MethodInfo *)0x0)
                                          , pUVar2 != (UnityEngine_Transform_o *)0x0 &&
                                          (pUVar10 = UnityEngine_Component__GetComponent_object_
                                                               ((UnityEngine_Component_o *)pUVar2,
                                                                (MethodInfo_6651A0 *)
                                                                                                                                
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                       ), pUVar10 != (UnityEngine_RectTransform_o *)0x0)))) {
                                        UVar11 = UnityEngine_RectTransform__get_sizeDelta
                                                           (pUVar10,(MethodInfo *)0x0);
                                        options._4_4_ = UVar11.fields.y;
                                        if (options._4_4_ <= maxScrollHeight) {
                                          pUVar3 = (__this->fields)._optionsPanel;
                                          if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
                                             (__this_02 = UnityEngine_GameObject__GetComponent_object_
                                                                    (pUVar3,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect
                                                       ), __this_02 == (UnityEngine_UI_ScrollRect_o *)0x0))
                                          goto label_18221667b;
                                          UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                    (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,
                                                     (MethodInfo *)0x0);
                                          pUVar3 = (__this->fields)._optionsPanel;
                                          if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
                                             (((pUVar2 = UnityEngine_GameObject__get_transform
                                                                   (pUVar3,(MethodInfo *)0x0),
                                               pUVar2 == (UnityEngine_Transform_o *)0x0 ||
                                               (pUVar2 = UnityEngine_Transform__Find
                                                                   (pUVar2,"Scrollbar",
                                                                    (MethodInfo *)0x0),
                                               pUVar2 == (UnityEngine_Transform_o *)0x0)) ||
                                              (pUVar3 = UnityEngine_Component__get_gameObject
                                                                  ((UnityEngine_Component_o *)pUVar2,
                                                                   (MethodInfo *)0x0),
                                              pUVar3 == (UnityEngine_GameObject_o *)0x0))))
                                          goto label_18221667b;
                                          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                                          maxScrollHeight = options._4_4_;
                                        }
                                        pUVar3 = (__this->fields)._optionsPanel;
                                        if (((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                                            (pUVar2 = UnityEngine_GameObject__get_transform
                                                                (pUVar3,(MethodInfo *)0x0),
                                            pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
                                           (pUVar2 = UnityEngine_Transform__Find
                                                               (pUVar2,"Scrollbar",(MethodInfo *)0x0
                                                               ), pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                                          pUVar12 = UnityEngine_Component__GetComponent_object_
                                                              ((UnityEngine_Component_o *)pUVar2,
                                                               (MethodInfo_6651A0 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_Component_GetComponent_Scrollbar
                                                       );
                                          (__this->fields)._scrollBar = pUVar12;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollBar,pUVar12);
                                          pUVar12 = (__this->fields)._scrollBar;
                                          pSVar14 = (style->fields).ThemePanel;
                                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_UI_UIManager);
                                          }
                                          pUVar7 = UI_UIManager__GetThemeColorBlock
                                                             (&local_c8,pSVar14,"DefaultSetting",
                                                              "DropdownScrollbar","DefaultPanel",
                                                              (MethodInfo *)0x0);
                                          if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                            local_128.fields.m_NormalColor.fields.r =
                                                 (pUVar7->fields).m_NormalColor.fields.r;
                                            local_128.fields.m_NormalColor.fields.g =
                                                 (pUVar7->fields).m_NormalColor.fields.g;
                                            local_128.fields.m_NormalColor.fields.b =
                                                 (pUVar7->fields).m_NormalColor.fields.b;
                                            local_128.fields.m_NormalColor.fields.a =
                                                 (pUVar7->fields).m_NormalColor.fields.a;
                                            local_128.fields.m_HighlightedColor.fields.r =
                                                 (pUVar7->fields).m_HighlightedColor.fields.r;
                                            local_128.fields.m_HighlightedColor.fields.g =
                                                 (pUVar7->fields).m_HighlightedColor.fields.g;
                                            local_128.fields.m_HighlightedColor.fields.b =
                                                 (pUVar7->fields).m_HighlightedColor.fields.b;
                                            local_128.fields.m_HighlightedColor.fields.a =
                                                 (pUVar7->fields).m_HighlightedColor.fields.a;
                                            local_128.fields.m_PressedColor.fields.r =
                                                 (pUVar7->fields).m_PressedColor.fields.r;
                                            local_128.fields.m_PressedColor.fields.g =
                                                 (pUVar7->fields).m_PressedColor.fields.g;
                                            local_128.fields.m_PressedColor.fields.b =
                                                 (pUVar7->fields).m_PressedColor.fields.b;
                                            local_128.fields.m_PressedColor.fields.a =
                                                 (pUVar7->fields).m_PressedColor.fields.a;
                                            local_128.fields.m_SelectedColor.fields.r =
                                                 (pUVar7->fields).m_SelectedColor.fields.r;
                                            local_128.fields.m_SelectedColor.fields.g =
                                                 (pUVar7->fields).m_SelectedColor.fields.g;
                                            local_128.fields.m_SelectedColor.fields.b =
                                                 (pUVar7->fields).m_SelectedColor.fields.b;
                                            local_128.fields.m_SelectedColor.fields.a =
                                                 (pUVar7->fields).m_SelectedColor.fields.a;
                                            local_128.fields.m_DisabledColor.fields.r =
                                                 (pUVar7->fields).m_DisabledColor.fields.r;
                                            local_128.fields.m_DisabledColor.fields.g =
                                                 (pUVar7->fields).m_DisabledColor.fields.g;
                                            local_128.fields.m_DisabledColor.fields.b =
                                                 (pUVar7->fields).m_DisabledColor.fields.b;
                                            local_128.fields.m_DisabledColor.fields.a =
                                                 (pUVar7->fields).m_DisabledColor.fields.a;
                                            local_128.fields.m_ColorMultiplier =
                                                 (pUVar7->fields).m_ColorMultiplier;
                                            local_128.fields.m_FadeDuration = (pUVar7->fields).m_FadeDuration;
                                            UnityEngine_UI_Selectable__set_colors
                                                      ((UnityEngine_UI_Selectable_o *)pUVar12,&local_128,
                                                       (MethodInfo *)0x0);
                                            pUVar12 = (__this->fields)._scrollBar;
                                            if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                              pUVar9 = UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar12,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                              pUVar8 = UI_UIManager__GetThemeColor
                                                                 ((UnityEngine_Color_o *)&local_138,
                                                                  (style->fields).ThemePanel,
                                                                  "DefaultSetting","DropdownScrollbarBackgroundColor",
                                                                  "DefaultPanel",(MethodInfo *)0x0);
                                              if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                                                local_138.r = (pUVar8->fields).r;
                                                local_138.g = (pUVar8->fields).g;
                                                local_138.b = (pUVar8->fields).b;
                                                local_138.a = (pUVar8->fields).a;
                                                (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                                          (pUVar9,(UnityEngine_Color_o *)&local_138,
                                                           (pUVar9->klass->vtable)._23_set_color.method);
                                                pUVar3 = (__this->fields)._optionsPanel;
                                                if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
                                                   (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                                                        (pUVar3,(MethodInfo_6F5650 *)
                                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       ), pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
                                                  UVar11.fields.y = maxScrollHeight;
                                                  UVar11.fields.x = optionsWidth;
                                                  UnityEngine_RectTransform__set_sizeDelta
                                                            (pUVar10,UVar11,(MethodInfo *)0x0);
                                                  pUVar2 = UnityEngine_Component__get_transform
                                                                     ((UnityEngine_Component_o *)__this,
                                                                      (MethodInfo *)0x0);
                                                  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                                                     ((pUVar2 = UnityEngine_Transform__Find
                                                                          (pUVar2,"Label",
                                                                           (MethodInfo *)0x0),
                                                      pUVar2 != (UnityEngine_Transform_o *)0x0 &&
                                                      (pUVar6 = UnityEngine_Component__GetComponent_object_
                                                                          ((UnityEngine_Component_o *)pUVar2,
                                                                           (MethodInfo_6651A0 *)
                                                                                                                                                      
                                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                       ), pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0))))
                                                  {
                                                    (*(pUVar6->klass->vtable)._38_set_preferredHeight.
                                                      methodPtr)(pUVar6,elementHeight,
                                                                 (pUVar6->klass->vtable).
                                                                 _38_set_preferredHeight.method);
                                                    pUVar2 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)__this,
                                                                        (MethodInfo *)0x0);
                                                    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                                                       ((pUVar2 = UnityEngine_Transform__Find
                                                                            (pUVar2,"Label",
                                                                             (MethodInfo *)0x0),
                                                        pUVar2 != (UnityEngine_Transform_o *)0x0 &&
                                                        (pUVar3 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)pUVar2
                                                                             ,(MethodInfo *)0x0),
                                                        pUVar3 != (UnityEngine_GameObject_o *)0x0)))) {
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar3,false,(MethodInfo *)0x0);
                                                      UI_BaseSettingElement__SetupTooltip
                                                                ((UI_BaseSettingElement_o *)__this,tooltip,
                                                                 style,(MethodInfo *)0x0);
                                                      (__this->fields)._optionsOffset.fields.z = 0.0;
                                                      (__this->fields)._optionsOffset.fields.x =
                                                           (optionsWidth - elementWidth) * 0.5;
                                                      (__this->fields)._optionsOffset.fields.y =
                                                           -(maxScrollHeight + elementHeight) * 0.5 + 2.0;
                                                      x = 
                                                       UnityEngine_Component__GetComponentInParent_object__664f20
                                                                 ((UnityEngine_Component_o *)__this,
                                                                  (MethodInfo_664F20 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponentInParent_MapEditorScaledPanel
                                                       );
                                                      if ((TypeInfo_UnityEngine_Object->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Object)
                                                        ;
                                                      }
                                                      bVar1 = UnityEngine_Object__op_Inequality
                                                                        ((UnityEngine_Object_o *)x,
                                                                         (UnityEngine_Object_o *)0x0,
                                                                         (MethodInfo *)0x0);
                                                      pUVar3 = (__this->fields)._optionsPanel;
                                                      (__this->fields)._scaleWithPanel = bVar1;
                                                      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar2 = UnityEngine_GameObject__get_transform
                                                                           (pUVar3,(MethodInfo *)0x0);
                                                        pUVar13 = UnityEngine_Component__get_transform
                                                                            ((UnityEngine_Component_o *)__this
                                                                             ,(MethodInfo *)0x0);
                                                        if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
                                                           (pUVar13 = UnityEngine_Transform__GetRoot
                                                                                (pUVar13,(MethodInfo *)0x0),
                                                           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                                                          UnityEngine_Transform__SetParent_2f5a7e0
                                                                    (pUVar2,pUVar13,true,(MethodInfo *)0x0);
                                                          pUVar3 = (__this->fields)._optionsPanel;
                                                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                                            UnityEngine_GameObject__SetActive
                                                                      (pUVar3,false,(MethodInfo *)0x0);
                                                            (*(__this->klass->vtable)._6_SyncElement.methodPtr
                                                            )(__this,(__this->klass->vtable)._6_SyncElement.
                                                                     method);
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
label_18221667b:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$FixScale
// il2cpp: void UI_MultiSelectDropdownElement__FixScale (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x18220a100

void UI_MultiSelectDropdownElement__FixScale(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  (__this->fields)._scaleWithPanel = false;
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.x = (pUVar1->oneVector).fields.x;
      local_18.y = (pUVar1->oneVector).fields.y;
      local_18.z = (pUVar1->oneVector).fields.z;
      UnityEngine_Transform__set_localScale(__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$IsOpen
// il2cpp: bool UI_MultiSelectDropdownElement__IsOpen (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x1822154d0

bool UI_MultiSelectDropdownElement__IsOpen(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347137 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$SetOptionsPosition
// il2cpp: void UI_MultiSelectDropdownElement__SetOptionsPosition (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x1822157c0

void UI_MultiSelectDropdownElement__SetOptionsPosition
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_RectTransform_o *__this_01;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_o local_a8 [13];
  
  if (Il2CppMethodInitialized_184347138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347138 = '\x01';
  }
  if ((__this->fields)._scaleWithPanel == false) {
label_182215952:
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar12 = (pUVar8->oneVector).fields.x;
    fVar13 = (pUVar8->oneVector).fields.y;
    fVar14 = (pUVar8->oneVector).fields.z;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    fVar1 = TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale;
    fVar12 = fVar12 * fVar1;
    fVar13 = fVar13 * fVar1;
    fVar14 = fVar14 * fVar1;
  }
  else {
    pUVar7 = (__this->fields)._optionsPanel;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_182215ae6;
    pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_182215ae6;
    pUVar10 = UnityEngine_Transform__GetRoot(pUVar10,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._selectedButton;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_182215ae6;
    __this_00 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_182215ae6;
    pUVar11 = UnityEngine_Transform__get_lossyScale(local_a8,__this_00,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_182215ae6;
    local_b8.x = (pUVar11->fields).x;
    local_b8.y = (pUVar11->fields).y;
    local_b8.z = (pUVar11->fields).z;
    pUVar11 = UnityEngine_Transform__InverseTransformVector
                        (local_a8,pUVar10,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_182215ae6;
    local_b8.x = (pUVar11->fields).x;
    local_b8.y = (pUVar11->fields).y;
    local_b8.z = (pUVar11->fields).z;
    UnityEngine_Transform__set_localScale(pUVar9,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    if ((__this->fields)._scaleWithPanel == false) goto label_182215952;
    pUVar7 = (__this->fields)._selectedButton;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_182215ae6;
    pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_182215ae6;
    pUVar11 = UnityEngine_Transform__get_lossyScale(local_a8,pUVar9,(MethodInfo *)0x0);
    fVar12 = (pUVar11->fields).x;
    fVar13 = (pUVar11->fields).y;
    fVar14 = (pUVar11->fields).z;
  }
  pUVar7 = (__this->fields)._selectedButton;
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pUVar11 = UnityEngine_Transform__get_position(local_a8,pUVar9,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._optionsPanel;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        fVar1 = (pUVar11->fields).x;
        fVar2 = (pUVar11->fields).y;
        fVar3 = (pUVar11->fields).z;
        fVar4 = (__this->fields)._optionsOffset.fields.x;
        fVar5 = (__this->fields)._optionsOffset.fields.y;
        fVar6 = (__this->fields)._optionsOffset.fields.z;
        pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar9,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            local_b8.z = fVar14 * fVar6 + fVar3;
            local_b8.y = fVar13 * fVar5 + fVar2;
            local_b8.x = fVar12 * fVar4 + fVar1;
            UnityEngine_Transform__set_position
                      ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Vector3_o *)&local_b8,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_182215ae6:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$OnDisable
// il2cpp: void UI_MultiSelectDropdownElement__OnDisable (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x1822155e0

void UI_MultiSelectDropdownElement__OnDisable(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347139 = '\x01';
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
  }
  return;
}


// UI.MultiSelectDropdownElement$$OnDestroy
// il2cpp: void UI_MultiSelectDropdownElement__OnDestroy (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x182215550

void UI_MultiSelectDropdownElement__OnDestroy(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434713a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434713a = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// UI.MultiSelectDropdownElement$$Update
// il2cpp: void UI_MultiSelectDropdownElement__Update (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x182216880

void UI_MultiSelectDropdownElement__Update(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Vector2_Fields UVar4;
  bool bVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *rect_00;
  UnityEngine_Vector2_Fields *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_44;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_18434713b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_18434713b = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pUVar3 = (__this->fields)._optionsPanel;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__get_position(local_38,__this_00,(MethodInfo *)0x0);
      uVar1 = (pUVar6->fields).x;
      uVar2 = (pUVar6->fields).y;
      fVar8 = (pUVar6->fields).z - (__this->fields)._lastKnownPosition.fields.z;
      fVar10 = (float)uVar2 - (__this->fields)._lastKnownPosition.fields.y;
      fVar9 = (float)uVar1 - (__this->fields)._lastKnownPosition.fields.x;
      if (9.9999994e-11 <= fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) {
label_182216a64:
        UI_MultiSelectDropdownElement__CloseOptions(__this,(MethodInfo *)0x0);
        return;
      }
      bVar5 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pUVar3 = (__this->fields)._optionsPanel;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        rect = UnityEngine_GameObject__GetComponent_object_
                         (pUVar3,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        pUVar3 = (__this->fields)._selectedButton;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          rect_00 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar3,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          pUVar7 = (UnityEngine_Vector2_Fields *)
                   UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
          UVar4 = *pUVar7;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          bVar5 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (rect,(UnityEngine_Vector2_o)UVar4,(MethodInfo *)0x0);
          if (bVar5) {
            return;
          }
          pUVar7 = (UnityEngine_Vector2_Fields *)
                   UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
          UVar4 = *pUVar7;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          bVar5 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (rect_00,(UnityEngine_Vector2_o)UVar4,(MethodInfo *)0x0);
          if (bVar5) {
            return;
          }
          goto label_182216a64;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$CreateOptionToggle
// il2cpp: void UI_MultiSelectDropdownElement__CreateOptionToggle (UI_MultiSelectDropdownElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x182214950

void UI_MultiSelectDropdownElement__CreateOptionToggle
               (UI_MultiSelectDropdownElement_o *__this,System_String_o *option,int32_t index,float width,
               float height,int32_t fontSize,System_String_o *themePanel,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_02;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_Collections_Generic_Dictionary_int__object__o *__this_04;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  undefined8 uVar2;
  undefined8 uVar3;
  bool value_01;
  UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *object;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_UI_Text_o *__this_06;
  System_String_o *pSVar7;
  UnityEngine_Color_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_GameObject_o *__this_07;
  UnityEngine_UI_Image_o *value_02;
  UnityEngine_UI_ColorBlock_o *pUVar11;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_UI_Image_o *value_03;
  UnityEngine_UI_Toggle_o *pUVar12;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_09;
  UnityEngine_UI_Button_o *__this_10;
  UnityEngine_Events_UnityAction_o *__this_11;
  uint item;
  float fVar13;
  UnityEngine_Color_Fields local_128;
  UnityEngine_UI_ColorBlock_o local_118;
  UnityEngine_UI_ColorBlock_o local_b8;
  
  if (Il2CppMethodInitialized_18434713c == '\0') {
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
    Il2CppMethodInitialized_18434713c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MultiSelectDropdownElement___c__DisplayClass24_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_05 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar7,"Prefabs/Elements/DropdownOption",false,
                           (MethodInfo_795F00 *)
                           MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
      pUVar9 = (__this->fields)._optionsPanel;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Transform__Find(pUVar5,"Options",(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,pUVar5,false,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                               (__this_05,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar6,width,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
              pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_05,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                          (pUVar6,height,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
                pUVar4 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Label",(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    __this_06 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar4,
                                           (MethodInfo_6651A0 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_Text);
                    pSVar7 = System_String__Concat_1969e50("      ",option,(MethodInfo *)0x0);
                    if (__this_06 != (UnityEngine_UI_Text_o *)0x0) {
                      (*(__this_06->klass->vtable)._75_set_text.methodPtr)
                                (__this_06,pSVar7,(__this_06->klass->vtable)._75_set_text.method);
                      UnityEngine_UI_Text__set_fontSize(__this_06,fontSize,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_alignment(__this_06,3,(MethodInfo *)0x0);
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pUVar8 = UI_UIManager__GetThemeColor
                                         ((UnityEngine_Color_o *)&local_128,themePanel,"DefaultSetting",
                                          "DropdownTextColor","DefaultPanel",(MethodInfo *)0x0);
                      local_128.r = (pUVar8->fields).r;
                      local_128.g = (pUVar8->fields).g;
                      local_128.b = (pUVar8->fields).b;
                      local_128.a = (pUVar8->fields).a;
                      (*(__this_06->klass->vtable)._23_set_color.methodPtr)
                                (__this_06,(UnityEngine_Color_o *)&local_128,
                                 (__this_06->klass->vtable)._23_set_color.method);
                      pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                      UnityEngine_GameObject___ctor(pUVar9,"Toggle",(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar4 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                        pUVar5 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,pUVar5,false,(MethodInfo *)0x0);
                          pUVar10 = UnityEngine_GameObject__AddComponent_object_
                                              (pUVar9,(MethodInfo_6F4D60 *)
                                                      MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                              );
                          if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                            fVar13 = height * 0.6;
                            UnityEngine_RectTransform__set_anchorMin
                                      (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_pivot
                                      (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar10,(UnityEngine_Vector2_o)0x40a00000,(MethodInfo *)0x0);
                            value.fields.y = fVar13;
                            value.fields.x = fVar13;
                            UnityEngine_RectTransform__set_sizeDelta(pUVar10,value,(MethodInfo *)0x0);
                            __this_07 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                            UnityEngine_GameObject___ctor(__this_07,"Background",(MethodInfo *)0x0);
                            if (__this_07 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar4 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
                              pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__SetParent_2f5a7e0
                                          (pUVar4,pUVar5,false,(MethodInfo *)0x0);
                                pUVar10 = UnityEngine_GameObject__AddComponent_object_
                                                    (__this_07,
                                                     (MethodInfo_6F4D60 *)
                                                     MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                                    );
                                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                                }
                                if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar10,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_184341f36 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_184341f36 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar10,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).
                                                     fields,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_18433e3c9 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar10,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_18433e3c9 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar10,(UnityEngine_Vector2_o)
                                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  value_02 = UnityEngine_GameObject__AddComponent_object_
                                                       (__this_07,
                                                        (MethodInfo_6F4D60 *)
                                                        MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                                  pUVar11 = UI_UIManager__GetThemeColorBlock
                                                      (&local_b8,themePanel,"DefaultSetting",
                                                       "Toggle","DefaultPanel",
                                                       (MethodInfo *)0x0);
                                  local_118.fields.m_HighlightedColor.fields.r =
                                       (pUVar11->fields).m_HighlightedColor.fields.r;
                                  local_118.fields.m_HighlightedColor.fields.g =
                                       (pUVar11->fields).m_HighlightedColor.fields.g;
                                  local_118.fields.m_HighlightedColor.fields.b =
                                       (pUVar11->fields).m_HighlightedColor.fields.b;
                                  local_118.fields.m_HighlightedColor.fields.a =
                                       (pUVar11->fields).m_HighlightedColor.fields.a;
                                  local_118.fields.m_PressedColor.fields.r =
                                       (pUVar11->fields).m_PressedColor.fields.r;
                                  local_118.fields.m_PressedColor.fields.g =
                                       (pUVar11->fields).m_PressedColor.fields.g;
                                  local_118.fields.m_PressedColor.fields.b =
                                       (pUVar11->fields).m_PressedColor.fields.b;
                                  local_118.fields.m_PressedColor.fields.a =
                                       (pUVar11->fields).m_PressedColor.fields.a;
                                  uVar2._0_4_ = (pUVar11->fields).m_NormalColor.fields.r;
                                  uVar2._4_4_ = (pUVar11->fields).m_NormalColor.fields.g;
                                  uVar3._0_4_ = (pUVar11->fields).m_NormalColor.fields.b;
                                  uVar3._4_4_ = (pUVar11->fields).m_NormalColor.fields.a;
                                  local_118.fields.m_SelectedColor.fields.r =
                                       (pUVar11->fields).m_SelectedColor.fields.r;
                                  local_118.fields.m_SelectedColor.fields.g =
                                       (pUVar11->fields).m_SelectedColor.fields.g;
                                  local_118.fields.m_SelectedColor.fields.b =
                                       (pUVar11->fields).m_SelectedColor.fields.b;
                                  local_118.fields.m_SelectedColor.fields.a =
                                       (pUVar11->fields).m_SelectedColor.fields.a;
                                  local_118.fields.m_DisabledColor.fields.r =
                                       (pUVar11->fields).m_DisabledColor.fields.r;
                                  local_118.fields.m_DisabledColor.fields.g =
                                       (pUVar11->fields).m_DisabledColor.fields.g;
                                  local_118.fields.m_DisabledColor.fields.b =
                                       (pUVar11->fields).m_DisabledColor.fields.b;
                                  local_118.fields.m_DisabledColor.fields.a =
                                       (pUVar11->fields).m_DisabledColor.fields.a;
                                  local_118.fields.m_ColorMultiplier = (pUVar11->fields).m_ColorMultiplier;
                                  local_118.fields.m_FadeDuration = (pUVar11->fields).m_FadeDuration;
                                  if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0
                                     ) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
                                  }
                                  if (value_02 != (UnityEngine_UI_Image_o *)0x0) {
                                    local_128._0_8_ = uVar2;
                                    local_128._8_8_ = uVar3;
                                    (*(value_02->klass->vtable)._23_set_color.methodPtr)
                                              (value_02,(UnityEngine_Color_o *)&local_128,
                                               (value_02->klass->vtable)._23_set_color.method);
                                    __this_08 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                    UnityEngine_GameObject___ctor
                                              (__this_08,"Checkmark",(MethodInfo *)0x0);
                                    if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar4 = UnityEngine_GameObject__get_transform
                                                         (__this_08,(MethodInfo *)0x0);
                                      pUVar5 = UnityEngine_GameObject__get_transform
                                                         (__this_07,(MethodInfo *)0x0);
                                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                        UnityEngine_Transform__SetParent_2f5a7e0
                                                  (pUVar4,pUVar5,false,(MethodInfo *)0x0);
                                        pUVar10 = UnityEngine_GameObject__AddComponent_object_
                                                            (__this_08,
                                                             (MethodInfo_6F4D60 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                                                       );
                                        if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchorMin
                                                    (pUVar10,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (pUVar10,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_pivot
                                                    (pUVar10,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&TypeInfo_UnityEngine_Vector2);
                                            Il2CppMethodInitialized_18433e3c9 = '\x01';
                                          }
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar10,(UnityEngine_Vector2_o)
                                                             (TypeInfo_UnityEngine_Vector2->static_fields->
                                                             zeroVector).fields,(MethodInfo *)0x0);
                                          fVar13 = fVar13 * (__this->fields)._checkMarkSizeMultiplier;
                                          value_00.fields.y = fVar13;
                                          value_00.fields.x = fVar13;
                                          UnityEngine_RectTransform__set_sizeDelta
                                                    (pUVar10,value_00,(MethodInfo *)0x0);
                                          value_03 = UnityEngine_GameObject__AddComponent_object_
                                                               (__this_08,
                                                                (MethodInfo_6F4D60 *)
                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                                          pUVar8 = UI_UIManager__GetThemeColor
                                                             ((UnityEngine_Color_o *)&local_128,themePanel,
                                                              "DefaultSetting","ToggleFilledColor",
                                                              "DefaultPanel",(MethodInfo *)0x0);
                                          if (value_03 != (UnityEngine_UI_Image_o *)0x0) {
                                            local_128.r = (pUVar8->fields).r;
                                            local_128.g = (pUVar8->fields).g;
                                            local_128.b = (pUVar8->fields).b;
                                            local_128.a = (pUVar8->fields).a;
                                            (*(value_03->klass->vtable)._23_set_color.methodPtr)
                                                      (value_03,(UnityEngine_Color_o *)&local_128,
                                                       (value_03->klass->vtable)._23_set_color.method);
                                            pUVar12 = UnityEngine_GameObject__AddComponent_object_
                                                                (pUVar9,(MethodInfo_6F4D60 *)
                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
                                            (object->fields).toggle = pUVar12;
                                            Il2CppCodeGenWriteBarrier(&(object->fields).toggle,pUVar12);
                                            pUVar12 = (object->fields).toggle;
                                            if (pUVar12 != (UnityEngine_UI_Toggle_o *)0x0) {
                                              UnityEngine_UI_Selectable__set_targetGraphic
                                                        ((UnityEngine_UI_Selectable_o *)pUVar12,
                                                         (UnityEngine_UI_Graphic_o *)value_02,
                                                         (MethodInfo *)0x0);
                                              pUVar12 = (object->fields).toggle;
                                              if (pUVar12 != (UnityEngine_UI_Toggle_o *)0x0) {
                                                (pUVar12->fields).graphic =
                                                     (UnityEngine_UI_Graphic_o *)value_03;
                                                Il2CppCodeGenWriteBarrier(&(pUVar12->fields).graphic,value_03)
                                                ;
                                                item = (object->fields).index;
                                                if ((__this->fields)._intOptionValues !=
                                                    (System_Int32_array *)0x0) {
                                                  pSVar1 = (__this->fields)._intOptionValues;
                                                  if ((uint)pSVar1->max_length <= item) {
                                                    ThrowIndexOutOfRangeException();
                                                  }
                                                  item = pSVar1->m_Items[(int)item];
                                                }
                                                __this_00 = (__this->fields)._hashSetSetting;
                                                if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
                                                  pUVar12 = (object->fields).toggle;
                                                  value_01 = Settings_HashSetSetting_int___Contains
                                                                       (__this_00,item,
                                                                        (MethodInfo_17545E0 *)
                                                                                                                                                
                                                       MethodInfo_Settings_HashSetSetting_int_Contains);
                                                  if (pUVar12 != (UnityEngine_UI_Toggle_o *)0x0) {
                                                    UnityEngine_UI_Toggle__set_isOn
                                                              (pUVar12,value_01,(MethodInfo *)0x0);
                                                    pUVar12 = (object->fields).toggle;
                                                    if (pUVar12 != (UnityEngine_UI_Toggle_o *)0x0) {
                                                      __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                                                  (pUVar12->fields).onValueChanged;
                                                      __this_09 = (
                                                       UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o
                                                       *)il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                                                                                        
                                                       TypeInfo_UnityEngine_Events_UnityAction_bool);
                                                      UnityEngine_Events_UnityAction_bool____ctor
                                                                (__this_09,(Il2CppObject *)object,
                                                                 (intptr_t)
                                                                                                                                  
                                                       MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__0
                                                       ,(MethodInfo *)0x0);
                                                      if (__this_01 !=
                                                          (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                                                        UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                                  (__this_01,
                                                                   (UnityEngine_Events_UnityAction_T0__o *)
                                                                   __this_09,
                                                                   (MethodInfo_EBBB50 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener
                                                       );
                                                       __this_10 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (__this_05,
                                                                  (MethodInfo_6F5650 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                                                       if ((__this_10 != (UnityEngine_UI_Button_o *)0x0) &&
                                                          (__this_02 = (__this_10->fields).m_OnClick,
                                                          __this_02 !=
                                                          (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0))
                                                       {
                                                         UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                                                   ((UnityEngine_Events_UnityEventBase_o *)
                                                                    __this_02,(MethodInfo *)0x0);
                                                         pUVar11 = UI_UIManager__GetThemeColorBlock
                                                                             (&local_b8,themePanel,
                                                                              "DefaultSetting",
                                                                              "Dropdown",
                                                                              "DefaultPanel",
                                                                              (MethodInfo *)0x0);
                                                         local_118.fields.m_NormalColor.fields.r =
                                                              (pUVar11->fields).m_NormalColor.fields.r;
                                                         local_118.fields.m_NormalColor.fields.g =
                                                              (pUVar11->fields).m_NormalColor.fields.g;
                                                         local_118.fields.m_NormalColor.fields.b =
                                                              (pUVar11->fields).m_NormalColor.fields.b;
                                                         local_118.fields.m_NormalColor.fields.a =
                                                              (pUVar11->fields).m_NormalColor.fields.a;
                                                         local_118.fields.m_HighlightedColor.fields.r =
                                                              (pUVar11->fields).m_HighlightedColor.fields.r;
                                                         local_118.fields.m_HighlightedColor.fields.g =
                                                              (pUVar11->fields).m_HighlightedColor.fields.g;
                                                         local_118.fields.m_HighlightedColor.fields.b =
                                                              (pUVar11->fields).m_HighlightedColor.fields.b;
                                                         local_118.fields.m_HighlightedColor.fields.a =
                                                              (pUVar11->fields).m_HighlightedColor.fields.a;
                                                         local_118.fields.m_PressedColor.fields.r =
                                                              (pUVar11->fields).m_PressedColor.fields.r;
                                                         local_118.fields.m_PressedColor.fields.g =
                                                              (pUVar11->fields).m_PressedColor.fields.g;
                                                         local_118.fields.m_PressedColor.fields.b =
                                                              (pUVar11->fields).m_PressedColor.fields.b;
                                                         local_118.fields.m_PressedColor.fields.a =
                                                              (pUVar11->fields).m_PressedColor.fields.a;
                                                         local_118.fields.m_SelectedColor.fields.r =
                                                              (pUVar11->fields).m_SelectedColor.fields.r;
                                                         local_118.fields.m_SelectedColor.fields.g =
                                                              (pUVar11->fields).m_SelectedColor.fields.g;
                                                         local_118.fields.m_SelectedColor.fields.b =
                                                              (pUVar11->fields).m_SelectedColor.fields.b;
                                                         local_118.fields.m_SelectedColor.fields.a =
                                                              (pUVar11->fields).m_SelectedColor.fields.a;
                                                         local_118.fields.m_DisabledColor.fields.r =
                                                              (pUVar11->fields).m_DisabledColor.fields.r;
                                                         local_118.fields.m_DisabledColor.fields.g =
                                                              (pUVar11->fields).m_DisabledColor.fields.g;
                                                         local_118.fields.m_DisabledColor.fields.b =
                                                              (pUVar11->fields).m_DisabledColor.fields.b;
                                                         local_118.fields.m_DisabledColor.fields.a =
                                                              (pUVar11->fields).m_DisabledColor.fields.a;
                                                         local_118.fields.m_ColorMultiplier =
                                                              (pUVar11->fields).m_ColorMultiplier;
                                                         local_118.fields.m_FadeDuration =
                                                              (pUVar11->fields).m_FadeDuration;
                                                         UnityEngine_UI_Selectable__set_colors
                                                                   ((UnityEngine_UI_Selectable_o *)__this_10,
                                                                    &local_118,(MethodInfo *)0x0);
                                                         __this_03 = (UnityEngine_Events_UnityEvent_o *)
                                                                     (__this_10->fields).m_OnClick;
                                                         __this_11 = il2cpp_codegen_object_new
                                                                               ((Il2CppClass *)
                                                                                                                                                                
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                       UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                 ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                       __this_11,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_MultiSelectDropdownElement_c__DisplayClass24_0_CreateOptionToggle_b__1
                                                       ,(MethodInfo *)0x0);
                                                       if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                          ) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (__this_03,__this_11,(MethodInfo *)0x0);
                                                         __this_04 = (
                                                       System_Collections_Generic_Dictionary_int__object__o *)
                                                       (__this->fields)._toggles;
                                                       if (__this_04 !=
                                                           (
                                                       System_Collections_Generic_Dictionary_int__object__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_int__object___set_Item
                                                                 (__this_04,(object->fields).index,
                                                                  (Il2CppObject *)(object->fields).toggle,
                                                                  (MethodInfo_1423510 *)
                                                                                                                                    
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
// 0x182215700

void UI_MultiSelectDropdownElement__OnToggleValueChanged
               (UI_MultiSelectDropdownElement_o *__this,int32_t index,bool value,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434713d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_HashSetSetting_int_Remove);
    Il2CppMethodInitialized_18434713d = '\x01';
  }
  if ((__this->fields)._intOptionValues != (System_Int32_array *)0x0) {
    pSVar1 = (__this->fields)._intOptionValues;
    if ((uint)pSVar1->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    index = pSVar1->m_Items[index];
  }
  __this_00 = (__this->fields)._hashSetSetting;
  if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
    if (value) {
      Settings_HashSetSetting_int___Add
                (__this_00,index,(MethodInfo_1754280 *)MethodInfo_Settings_HashSetSetting_int_Add);
    }
    else {
      Settings_HashSetSetting_int___Remove
                (__this_00,index,(MethodInfo_1754EF0 *)MethodInfo_Settings_HashSetSetting_int_Remove);
    }
    pUVar2 = (__this->fields)._onSelectionChanged;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$GetOptionValue
// il2cpp: int32_t UI_MultiSelectDropdownElement__GetOptionValue (UI_MultiSelectDropdownElement_o* __this, int32_t index, const MethodInfo* method);
// 0x182215490

int32_t UI_MultiSelectDropdownElement__GetOptionValue
                  (UI_MultiSelectDropdownElement_o *__this,int32_t index,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  
  if ((__this->fields)._intOptionValues == (System_Int32_array *)0x0) {
    return index;
  }
  pSVar1 = (__this->fields)._intOptionValues;
  if ((uint)index < (uint)pSVar1->max_length) {
    return pSVar1->m_Items[index];
  }
  ThrowIndexOutOfRangeException();
}


// UI.MultiSelectDropdownElement$$OnDropdownSelectedButtonClick
// il2cpp: void UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x182215660

void
UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick(UI_MultiSelectDropdownElement_o* __this, MethodInfo* method)

{
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *routine;
  
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    UI_MultiSelectDropdownElement__CloseOptions(__this,(MethodInfo *)0x0);
    return;
  }
  if (Il2CppMethodInitialized_18434713e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
    Il2CppMethodInitialized_18434713e = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$WaitAndEnableOptions
// il2cpp: System_Collections_IEnumerator_o* UI_MultiSelectDropdownElement__WaitAndEnableOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x182216a90

System_Collections_IEnumerator_o *
UI_MultiSelectDropdownElement__WaitAndEnableOptions
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_18434713e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
    Il2CppMethodInitialized_18434713e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MultiSelectDropdownElement$$CloseOptions
// il2cpp: void UI_MultiSelectDropdownElement__CloseOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x1822148c0

void UI_MultiSelectDropdownElement__CloseOptions(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434713f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434713f = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_182214945;
    fVar3 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar3;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
label_182214945:
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$SyncElement
// il2cpp: void UI_MultiSelectDropdownElement__SyncElement (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x1822166d0
// eh: try 0x1822167b4..0x18221686c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18221682b: mov rdx, qword ptr [rip + 0x1e9b756]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_Dispose
// asm:   0x182216832: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182216837: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18221683c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182216841: test rcx, rcx
// asm:   0x182216844: jne 0x18221686c
// asm:   0x18221686c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MultiSelectDropdownElement__SyncElement(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__Toggle__o *__this_00;
  System_Int32_array *pSVar1;
  Settings_HashSetSetting_int__o *__this_01;
  Il2CppObject *__this_02;
  bool bVar2;
  uint item;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_184347140 == '\0') {
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
    Il2CppMethodInitialized_184347140 = '\x01';
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  __this_00 = (__this->fields)._toggles;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__Toggle__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_38,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_GetEnumerator
              );
    local_60.fields._dictionary = local_38.fields._dictionary;
    local_60.fields._version = local_38.fields._version;
    local_60.fields._index = local_38.fields._index;
    local_60.fields._current.fields.key = local_38.fields._current.fields.key;
    local_60.fields._current.fields.value = local_38.fields._current.fields.value;
    local_60.fields._getEnumeratorRetType = local_38.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_38.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_uint__object___MoveNext
                        (&local_60,
                         (MethodInfo_15642D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_MoveNext);
      __this_02 = local_60.fields._current.fields.value;
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_Toggle_Dispose);
        return;
      }
      item = (uint)local_60.fields._current.fields.key;
      if ((__this->fields)._intOptionValues != (System_Int32_array *)0x0) {
        pSVar1 = (__this->fields)._intOptionValues;
        if ((uint)pSVar1->max_length <= (uint)local_60.fields._current.fields.key) {
          ThrowIndexOutOfRangeException();
        }
        item = pSVar1->m_Items[(int)(uint)local_60.fields._current.fields.key];
      }
      __this_01 = (__this->fields)._hashSetSetting;
      if (__this_01 == (Settings_HashSetSetting_int__o *)0x0) break;
      bVar2 = Settings_HashSetSetting_int___Contains
                        (__this_01,item,(MethodInfo_17545E0 *)MethodInfo_Settings_HashSetSetting_int_Contains)
      ;
      if ((UnityEngine_UI_Toggle_o *)__this_02 == (UnityEngine_UI_Toggle_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_Toggle__set_isOn((UnityEngine_UI_Toggle_o *)__this_02,bVar2,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.MultiSelectDropdownElement$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___ctor (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x182216b00

void UI_MultiSelectDropdownElement___ctor(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  System_Collections_Generic_Dictionary_int__Toggle__o *__this_00;
  
  if (Il2CppMethodInitialized_184347141 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_Toggle);
    Il2CppMethodInitialized_184347141 = '\x01';
  }
  (__this->fields)._currentScrollValue = 1.0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_Toggle);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_Toggle_ctor);
  (__this->fields)._toggles = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggles,__this_00);
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
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
// 0x182215660

void UI_MultiSelectDropdownElement___Setup_b__17_0(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__28_o *routine;
  
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    UI_MultiSelectDropdownElement__CloseOptions(__this,(MethodInfo *)0x0);
    return;
  }
  if (Il2CppMethodInitialized_18434713e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
    Il2CppMethodInitialized_18434713e = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_UI_MultiSelectDropdownElement_WaitAndEnableOptions_d__28);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


