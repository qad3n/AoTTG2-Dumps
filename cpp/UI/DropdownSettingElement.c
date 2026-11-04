// Type: UI.DropdownSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/DropdownSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSettingElement.cs
// --------------------------------

// UI.DropdownSettingElement.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass20_0___ctor (UI_DropdownSettingElement___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_DropdownSettingElement___c__DisplayClass20_0___ctor(UI_DropdownSettingElement___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement.<>c__DisplayClass20_0$$<CreateOptionButton>b__0
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass20_0___CreateOptionButton_b__0 (UI_DropdownSettingElement___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18221ae30

void UI_DropdownSettingElement___c__DisplayClass20_0___CreateOptionButton_b__0
               (UI_DropdownSettingElement___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_DropdownSettingElement_o *)0x0) {
    (*(pUVar1->klass->vtable)._8_OnDropdownOptionClick.methodPtr)
              (pUVar1,(__this->fields).option,(__this->fields).index,
               (pUVar1->klass->vtable)._8_OnDropdownOptionClick.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__23$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__23___ctor (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_DropdownSettingElement__WaitAndCloseOptions_d__23___ctor(UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__23$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_IDisposable_Dispose(UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, MethodInfo* method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__23$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndCloseOptions_d__23__MoveNext (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, const MethodInfo* method);
// 0x18221b160

bool UI_DropdownSettingElement__WaitAndCloseOptions_d__23__MoveNext
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_DropdownSettingElement_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *__this_02;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434711b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_18434711b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return false;
    }
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pUVar2 != (UI_DropdownSettingElement_o *)0x0) &&
       (__this_00 = (pUVar2->fields)._scrollBar, __this_00 != (UnityEngine_UI_Scrollbar_o *)0x0)) {
      fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
      __this_01 = (pUVar2->fields)._optionsPanel;
      (pUVar2->fields)._currentScrollValue = fVar3;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        return false;
      }
    }
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  __this_02 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
  ;
  UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_02,(MethodInfo *)0x0);
  (__this->fields).__2__current = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_02);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__23$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, const MethodInfo* method);
// 0x18221b230

void UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__23_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__23$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_DropdownSettingElement__WaitAndCloseOptions_d__23__System_Collections_IEnumerator_get_Current(UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__22$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__22___ctor (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_DropdownSettingElement__WaitAndEnableOptions_d__22___ctor(UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__22$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_IDisposable_Dispose(UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, MethodInfo* method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__22$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndEnableOptions_d__22__MoveNext (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, const MethodInfo* method);
// 0x18221b270

bool UI_DropdownSettingElement__WaitAndEnableOptions_d__22__MoveNext
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  UI_DropdownSettingElement_o *__this_00;
  UnityEngine_UI_Scrollbar_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  float fVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434711c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_18434711c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pIVar7 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar7,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      (__this->fields).__1__state = -1;
      if ((__this_00 == (UI_DropdownSettingElement_o *)0x0) ||
         (__this_01 = (__this_00->fields)._scrollBar, __this_01 == (UnityEngine_UI_Scrollbar_o *)0x0))
      goto label_18221b430;
      UnityEngine_UI_Scrollbar__set_value(__this_01,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0)
      ;
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
    UI_DropdownSettingElement__SetOptionsPosition(__this_00,(MethodInfo *)0x0);
    pUVar3 = (__this_00->fields)._optionsPanel;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = UnityEngine_Transform__get_position(&local_18,pUVar5,(MethodInfo *)0x0);
          fVar2 = (pUVar6->fields).z;
          fVar4 = (pUVar6->fields).y;
          (__this_00->fields)._lastKnownPosition.fields.x = (pUVar6->fields).x;
          (__this_00->fields)._lastKnownPosition.fields.y = fVar4;
          (__this_00->fields)._lastKnownPosition.fields.z = fVar2;
          pUVar3 = (__this_00->fields)._optionsPanel;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
            pIVar7 = (Il2CppObject *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar7,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar7;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
            (__this->fields).__1__state = 2;
            return true;
          }
        }
      }
    }
  }
label_18221b430:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, const MethodInfo* method);
// 0x18221b440

void UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__22_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_DropdownSettingElement__WaitAndEnableOptions_d__22__System_Collections_IEnumerator_get_Current(UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_DropdownSettingElement__get_SupportedSettingTypes (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220baa0

System_Collections_Generic_HashSet_SettingType__o *
UI_DropdownSettingElement__get_SupportedSettingTypes(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_18434710f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_18434710f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$Setup
// il2cpp: void UI_DropdownSettingElement__Setup (UI_DropdownSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x18220aa50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18220aead: nop dword ptr [rax]
// asm:   0x18220b263: movaps xmm6, xmm0

void UI_DropdownSettingElement__Setup
               (UI_DropdownSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth
               ,float elementHeight,float optionsWidth,float maxScrollHeight,
               UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,System_Int32_array *intOptionValues,
               MethodInfo *method)

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
  UnityEngine_Color_Fields local_128;
  UnityEngine_UI_ColorBlock_o local_118;
  UnityEngine_UI_ColorBlock_o local_b8;
  
  if (Il2CppMethodInitialized_184347110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_MapEditorScaledPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_DropdownSettingElement_Setup_b__13_0);
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
    Il2CppMethodInitialized_184347110 = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_03 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      pSVar14 = il2cpp_codegen_get_runtime_metadata(&"Dropdown cannot have 0 options.");
      System_ArgumentException___ctor_1a77cc0(__this_03,pSVar14,(MethodInfo *)0x0);
      lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_DropdownSettingElement_Setup);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
    }
    (__this->fields)._onDropdownOptionSelect = onDropdownOptionSelect;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onDropdownOptionSelect,onDropdownOptionSelect);
    (__this->fields)._intOptionValues = intOptionValues;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues,intOptionValues);
    (__this->fields)._options = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._options,options);
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
          pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          (__this->fields)._selectedButtonLabel = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedButtonLabel,pUVar3);
          if ((int)options->max_length == 0) {
label_18220b598:
            ThrowIndexOutOfRangeException();
          }
          if (style != (UI_ElementStyle_o *)0x0) {
            pUVar3 = (__this->fields)._selectedButtonLabel;
            pSVar14 = options->m_Items[0];
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
                        (pUVar4,pSVar14,(pUVar4->klass->vtable)._75_set_text.method);
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
                           (intptr_t)MethodInfo_UI_DropdownSettingElement_Setup_b__13_0,(MethodInfo *)0x0);
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
                        if ((uint)options->max_length <= index) goto label_18220b598;
                        UI_DropdownSettingElement__CreateOptionButton
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
                                           (&local_b8,pSVar14,"DefaultSetting","Dropdown",
                                            "DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
                          local_118.fields.m_NormalColor.fields.r = (pUVar7->fields).m_NormalColor.fields.r;
                          local_118.fields.m_NormalColor.fields.g = (pUVar7->fields).m_NormalColor.fields.g;
                          local_118.fields.m_NormalColor.fields.b = (pUVar7->fields).m_NormalColor.fields.b;
                          local_118.fields.m_NormalColor.fields.a = (pUVar7->fields).m_NormalColor.fields.a;
                          local_118.fields.m_HighlightedColor.fields.r =
                               (pUVar7->fields).m_HighlightedColor.fields.r;
                          local_118.fields.m_HighlightedColor.fields.g =
                               (pUVar7->fields).m_HighlightedColor.fields.g;
                          local_118.fields.m_HighlightedColor.fields.b =
                               (pUVar7->fields).m_HighlightedColor.fields.b;
                          local_118.fields.m_HighlightedColor.fields.a =
                               (pUVar7->fields).m_HighlightedColor.fields.a;
                          local_118.fields.m_PressedColor.fields.r = (pUVar7->fields).m_PressedColor.fields.r;
                          local_118.fields.m_PressedColor.fields.g = (pUVar7->fields).m_PressedColor.fields.g;
                          local_118.fields.m_PressedColor.fields.b = (pUVar7->fields).m_PressedColor.fields.b;
                          local_118.fields.m_PressedColor.fields.a = (pUVar7->fields).m_PressedColor.fields.a;
                          local_118.fields.m_SelectedColor.fields.r =
                               (pUVar7->fields).m_SelectedColor.fields.r;
                          local_118.fields.m_SelectedColor.fields.g =
                               (pUVar7->fields).m_SelectedColor.fields.g;
                          local_118.fields.m_SelectedColor.fields.b =
                               (pUVar7->fields).m_SelectedColor.fields.b;
                          local_118.fields.m_SelectedColor.fields.a =
                               (pUVar7->fields).m_SelectedColor.fields.a;
                          local_118.fields.m_DisabledColor.fields.r =
                               (pUVar7->fields).m_DisabledColor.fields.r;
                          local_118.fields.m_DisabledColor.fields.g =
                               (pUVar7->fields).m_DisabledColor.fields.g;
                          local_118.fields.m_DisabledColor.fields.b =
                               (pUVar7->fields).m_DisabledColor.fields.b;
                          local_118.fields.m_DisabledColor.fields.a =
                               (pUVar7->fields).m_DisabledColor.fields.a;
                          local_118.fields.m_ColorMultiplier = (pUVar7->fields).m_ColorMultiplier;
                          local_118.fields.m_FadeDuration = (pUVar7->fields).m_FadeDuration;
                          UnityEngine_UI_Selectable__set_colors
                                    ((UnityEngine_UI_Selectable_o *)pUVar5,&local_118,(MethodInfo *)0x0);
                          pUVar3 = (__this->fields)._selectedButtonLabel;
                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                               (pUVar3,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                            pUVar8 = UI_UIManager__GetThemeColor
                                               ((UnityEngine_Color_o *)&local_128,(style->fields).ThemePanel,
                                                "DefaultSetting","DropdownTextColor",
                                                "DefaultPanel",(MethodInfo *)0x0);
                            if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
                              local_128.r = (pUVar8->fields).r;
                              local_128.g = (pUVar8->fields).g;
                              local_128.b = (pUVar8->fields).b;
                              local_128.a = (pUVar8->fields).a;
                              (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                                        (pUVar4,(UnityEngine_Color_o *)&local_128,
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
                                                   ((UnityEngine_Color_o *)&local_128,
                                                    (style->fields).ThemePanel,"DefaultSetting",
                                                    "DropdownTextColor","DefaultPanel",
                                                    (MethodInfo *)0x0);
                                if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                                  local_128.r = (pUVar8->fields).r;
                                  local_128.g = (pUVar8->fields).g;
                                  local_128.b = (pUVar8->fields).b;
                                  local_128.a = (pUVar8->fields).a;
                                  (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar9,(UnityEngine_Color_o *)&local_128,
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
                                                       ((UnityEngine_Color_o *)&local_128,
                                                        (style->fields).ThemePanel,"DefaultSetting",
                                                        "DropdownBorderColor","DefaultPanel",
                                                        (MethodInfo *)0x0);
                                    if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                                      local_128.r = (pUVar8->fields).r;
                                      local_128.g = (pUVar8->fields).g;
                                      local_128.b = (pUVar8->fields).b;
                                      local_128.a = (pUVar8->fields).a;
                                      (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                                (pUVar9,(UnityEngine_Color_o *)&local_128,
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
                                          goto label_18220b592;
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
                                          goto label_18220b592;
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
                                                             (&local_b8,pSVar14,"DefaultSetting",
                                                              "DropdownScrollbar","DefaultPanel",
                                                              (MethodInfo *)0x0);
                                          if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                            local_118.fields.m_NormalColor.fields.r =
                                                 (pUVar7->fields).m_NormalColor.fields.r;
                                            local_118.fields.m_NormalColor.fields.g =
                                                 (pUVar7->fields).m_NormalColor.fields.g;
                                            local_118.fields.m_NormalColor.fields.b =
                                                 (pUVar7->fields).m_NormalColor.fields.b;
                                            local_118.fields.m_NormalColor.fields.a =
                                                 (pUVar7->fields).m_NormalColor.fields.a;
                                            local_118.fields.m_HighlightedColor.fields.r =
                                                 (pUVar7->fields).m_HighlightedColor.fields.r;
                                            local_118.fields.m_HighlightedColor.fields.g =
                                                 (pUVar7->fields).m_HighlightedColor.fields.g;
                                            local_118.fields.m_HighlightedColor.fields.b =
                                                 (pUVar7->fields).m_HighlightedColor.fields.b;
                                            local_118.fields.m_HighlightedColor.fields.a =
                                                 (pUVar7->fields).m_HighlightedColor.fields.a;
                                            local_118.fields.m_PressedColor.fields.r =
                                                 (pUVar7->fields).m_PressedColor.fields.r;
                                            local_118.fields.m_PressedColor.fields.g =
                                                 (pUVar7->fields).m_PressedColor.fields.g;
                                            local_118.fields.m_PressedColor.fields.b =
                                                 (pUVar7->fields).m_PressedColor.fields.b;
                                            local_118.fields.m_PressedColor.fields.a =
                                                 (pUVar7->fields).m_PressedColor.fields.a;
                                            local_118.fields.m_SelectedColor.fields.r =
                                                 (pUVar7->fields).m_SelectedColor.fields.r;
                                            local_118.fields.m_SelectedColor.fields.g =
                                                 (pUVar7->fields).m_SelectedColor.fields.g;
                                            local_118.fields.m_SelectedColor.fields.b =
                                                 (pUVar7->fields).m_SelectedColor.fields.b;
                                            local_118.fields.m_SelectedColor.fields.a =
                                                 (pUVar7->fields).m_SelectedColor.fields.a;
                                            local_118.fields.m_DisabledColor.fields.r =
                                                 (pUVar7->fields).m_DisabledColor.fields.r;
                                            local_118.fields.m_DisabledColor.fields.g =
                                                 (pUVar7->fields).m_DisabledColor.fields.g;
                                            local_118.fields.m_DisabledColor.fields.b =
                                                 (pUVar7->fields).m_DisabledColor.fields.b;
                                            local_118.fields.m_DisabledColor.fields.a =
                                                 (pUVar7->fields).m_DisabledColor.fields.a;
                                            local_118.fields.m_ColorMultiplier =
                                                 (pUVar7->fields).m_ColorMultiplier;
                                            local_118.fields.m_FadeDuration = (pUVar7->fields).m_FadeDuration;
                                            UnityEngine_UI_Selectable__set_colors
                                                      ((UnityEngine_UI_Selectable_o *)pUVar12,&local_118,
                                                       (MethodInfo *)0x0);
                                            pUVar12 = (__this->fields)._scrollBar;
                                            if (pUVar12 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                              pUVar9 = UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar12,
                                                                  (MethodInfo_6651A0 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_Component_GetComponent_Image);
                                              pUVar8 = UI_UIManager__GetThemeColor
                                                                 ((UnityEngine_Color_o *)&local_128,
                                                                  (style->fields).ThemePanel,
                                                                  "DefaultSetting","DropdownScrollbarBackgroundColor",
                                                                  "DefaultPanel",(MethodInfo *)0x0);
                                              if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                                                local_128.r = (pUVar8->fields).r;
                                                local_128.g = (pUVar8->fields).g;
                                                local_128.b = (pUVar8->fields).b;
                                                local_128.a = (pUVar8->fields).a;
                                                (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                                          (pUVar9,(UnityEngine_Color_o *)&local_128,
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
                                                                ((Il2CppClass *)TypeInfo_UnityEngine_Object);
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
                                                                          ((UnityEngine_Component_o *)__this,
                                                                           (MethodInfo *)0x0);
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
                                                          UI_BaseSettingElement__Setup
                                                                    ((UI_BaseSettingElement_o *)__this,setting
                                                                     ,style,title,tooltip,(MethodInfo *)0x0);
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
label_18220b592:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$FixScale
// il2cpp: void UI_DropdownSettingElement__FixScale (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220a100

void
UI_DropdownSettingElement__FixScale(UI_DropdownSettingElement_o* __this, MethodInfo* method)

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


// UI.DropdownSettingElement$$IsOpen
// il2cpp: bool UI_DropdownSettingElement__IsOpen (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220a180

bool UI_DropdownSettingElement__IsOpen(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347111 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347111 = '\x01';
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


// UI.DropdownSettingElement$$SetOptionsPosition
// il2cpp: void UI_DropdownSettingElement__SetOptionsPosition (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220a610

void UI_DropdownSettingElement__SetOptionsPosition(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_Vector2_o UVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStackX_c;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_o local_b8 [14];
  
  if (Il2CppMethodInitialized_184347112 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347112 = '\x01';
  }
  if ((__this->fields)._scaleWithPanel == false) {
label_18220a7b7:
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar5->oneVector).fields.x;
    fVar16 = (pUVar5->oneVector).fields.y;
    fVar13 = (pUVar5->oneVector).fields.z;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    fVar12 = TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale;
    fVar11 = fVar11 * fVar12;
    fVar16 = fVar16 * fVar12;
    fVar13 = fVar13 * fVar12;
  }
  else {
    pUVar4 = (__this->fields)._optionsPanel;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_18220aa4a;
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18220aa4a;
    pUVar7 = UnityEngine_Transform__GetRoot(pUVar7,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._selectedButton;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_18220aa4a;
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_18220aa4a;
    pUVar8 = UnityEngine_Transform__get_lossyScale(local_b8,__this_00,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_18220aa4a;
    local_c8.x = (pUVar8->fields).x;
    local_c8.y = (pUVar8->fields).y;
    local_c8.z = (pUVar8->fields).z;
    pUVar8 = UnityEngine_Transform__InverseTransformVector
                       (local_b8,pUVar7,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18220aa4a;
    local_c8.x = (pUVar8->fields).x;
    local_c8.y = (pUVar8->fields).y;
    local_c8.z = (pUVar8->fields).z;
    UnityEngine_Transform__set_localScale(pUVar6,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
    if ((__this->fields)._scaleWithPanel == false) goto label_18220a7b7;
    pUVar4 = (__this->fields)._selectedButton;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_18220aa4a;
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18220aa4a;
    pUVar8 = UnityEngine_Transform__get_lossyScale(local_b8,pUVar6,(MethodInfo *)0x0);
    fVar11 = (pUVar8->fields).x;
    fVar16 = (pUVar8->fields).y;
    fVar13 = (pUVar8->fields).z;
  }
  pUVar4 = (__this->fields)._selectedButton;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Transform__get_position(local_b8,pUVar6,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._optionsPanel;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        fVar12 = (pUVar8->fields).x;
        fVar15 = (pUVar8->fields).y;
        fVar14 = (pUVar8->fields).z;
        fVar1 = (__this->fields)._optionsOffset.fields.x;
        fVar2 = (__this->fields)._optionsOffset.fields.y;
        fVar3 = (__this->fields)._optionsOffset.fields.z;
        pUVar9 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar4,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
          UVar10 = UnityEngine_RectTransform__get_sizeDelta(pUVar9,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._optionsPanel;
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              fVar15 = fVar16 * fVar2 + fVar15;
              pUVar8 = UnityEngine_Transform__get_lossyScale(local_b8,pUVar6,(MethodInfo *)0x0);
              fStackX_c = UVar10.fields.y;
              if (fVar15 - fStackX_c * (pUVar8->fields).y * 0.5 < 0.0) {
                pUVar4 = (__this->fields)._selectedButton;
                fVar15 = (__this->fields)._optionsOffset.fields.y;
                if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_18220aa4a;
                fVar12 = (__this->fields)._optionsOffset.fields.x;
                fVar14 = (__this->fields)._optionsOffset.fields.z;
                pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18220aa4a;
                pUVar8 = UnityEngine_Transform__get_position(local_b8,pUVar6,(MethodInfo *)0x0);
                fVar12 = fVar11 * fVar12 + (pUVar8->fields).x;
                fVar15 = fVar16 * -fVar15 + (pUVar8->fields).y;
                fVar14 = fVar13 * fVar14 + (pUVar8->fields).z;
              }
              else {
                fVar12 = fVar11 * fVar1 + fVar12;
                fVar14 = fVar13 * fVar3 + fVar14;
              }
              pUVar4 = (__this->fields)._optionsPanel;
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pUVar6 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  pUVar9 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar6,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                  if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                    local_c8.y = fVar15;
                    local_c8.x = fVar12;
                    local_c8.z = fVar14;
                    UnityEngine_Transform__set_position
                              ((UnityEngine_Transform_o *)pUVar9,(UnityEngine_Vector3_o *)&local_c8,
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
label_18220aa4a:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$OnDisable
// il2cpp: void UI_DropdownSettingElement__OnDisable (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220a290

void UI_DropdownSettingElement__OnDisable(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347113 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347113 = '\x01';
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


// UI.DropdownSettingElement$$OnDestroy
// il2cpp: void UI_DropdownSettingElement__OnDestroy (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220a200

void UI_DropdownSettingElement__OnDestroy(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347114 = '\x01';
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


// UI.DropdownSettingElement$$Update
// il2cpp: void UI_DropdownSettingElement__Update (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220b7d0

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
  UnityEngine_Vector3_o *pUVar6;
  UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o *routine;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_24;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184347115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347115 = '\x01';
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
      goto label_18220b9ad;
      pUVar3 = (UnityEngine_Object_o *)(pUVar5->fields).m_CurrentSelected;
      y = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar3,y,(MethodInfo *)0x0);
      if (bVar4) goto label_18220b948;
    }
    __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__get_position(&local_18,__this_02,(MethodInfo *)0x0);
      uVar1 = (pUVar6->fields).x;
      uVar2 = (pUVar6->fields).y;
      fVar7 = (pUVar6->fields).z - (__this->fields)._lastKnownPosition.fields.z;
      fVar9 = (float)uVar2 - (__this->fields)._lastKnownPosition.fields.y;
      fVar8 = (float)uVar1 - (__this->fields)._lastKnownPosition.fields.x;
      if (fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11) {
        return;
      }
label_18220b948:
      if (Il2CppMethodInitialized_184347118 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__23);
        Il2CppMethodInitialized_184347118 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__23);
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
  }
label_18220b9ad:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$CreateOptionButton
// il2cpp: void UI_DropdownSettingElement__CreateOptionButton (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x182209c40

void UI_DropdownSettingElement__CreateOptionButton
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,float width,
               float height,int32_t fontSize,System_String_o *themePanel,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UI_DropdownSettingElement___c__DisplayClass20_0_o *object;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Button_o *pUVar6;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_UI_ColorBlock_o *pUVar8;
  UnityEngine_Color_o *pUVar9;
  UnityEngine_Color_Fields local_108;
  UnityEngine_UI_ColorBlock_o local_f8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_184347116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_DropdownSettingElement_c__DisplayClass20_0_CreateOptionButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DropdownSettingElement_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DropdownTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownOption");
    Il2CppMethodInitialized_184347116 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_c__DisplayClass20_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_DropdownSettingElement___c__DisplayClass20_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).option = option;
    Il2CppCodeGenWriteBarrier(&(object->fields).option,option);
    (object->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_01 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar1,"Prefabs/Elements/DropdownOption",false,
                           (MethodInfo_795F00 *)
                           MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._optionsPanel;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__Find(pUVar3,"Options",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,pUVar3,false,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                pSVar1 = (object->fields).option;
                if (Il2CppMethodInitialized_184347105 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                  Il2CppMethodInitialized_184347105 = '\x01';
                }
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar4,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                  if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                    (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                              (pUVar5,pSVar1,(pUVar5->klass->vtable)._75_set_text.method);
                    UnityEngine_UI_Text__set_fontSize(pUVar5,fontSize,(MethodInfo *)0x0);
                    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                       (__this_01,
                                        (MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                    if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar6->fields).m_OnClick;
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,
                                 (Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_UI_DropdownSettingElement_c__DisplayClass20_0_CreateOptionButton_b__0
                                 ,(MethodInfo *)0x0);
                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_02,(MethodInfo *)0x0);
                        pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                           (__this_01,
                                            (MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                        if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                          (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
                                    (pUVar7,width,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
                          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                             (__this_01,
                                              (MethodInfo_6F5650 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                          if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                            (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
                                      (pUVar7,height,(pUVar7->klass->vtable)._38_set_preferredHeight.method);
                            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                               (__this_01,
                                                (MethodInfo_6F5650 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                            }
                            pUVar8 = UI_UIManager__GetThemeColorBlock
                                               (&local_98,themePanel,"DefaultSetting",
                                                "Dropdown","DefaultPanel",(MethodInfo *)0x0)
                            ;
                            if (pUVar6 != (UnityEngine_UI_Button_o *)0x0) {
                              local_f8.fields.m_NormalColor.fields.r = (pUVar8->fields).m_NormalColor.fields.r
                              ;
                              local_f8.fields.m_NormalColor.fields.g = (pUVar8->fields).m_NormalColor.fields.g
                              ;
                              local_f8.fields.m_NormalColor.fields.b = (pUVar8->fields).m_NormalColor.fields.b
                              ;
                              local_f8.fields.m_NormalColor.fields.a = (pUVar8->fields).m_NormalColor.fields.a
                              ;
                              local_f8.fields.m_HighlightedColor.fields.r =
                                   (pUVar8->fields).m_HighlightedColor.fields.r;
                              local_f8.fields.m_HighlightedColor.fields.g =
                                   (pUVar8->fields).m_HighlightedColor.fields.g;
                              local_f8.fields.m_HighlightedColor.fields.b =
                                   (pUVar8->fields).m_HighlightedColor.fields.b;
                              local_f8.fields.m_HighlightedColor.fields.a =
                                   (pUVar8->fields).m_HighlightedColor.fields.a;
                              local_f8.fields.m_PressedColor.fields.r =
                                   (pUVar8->fields).m_PressedColor.fields.r;
                              local_f8.fields.m_PressedColor.fields.g =
                                   (pUVar8->fields).m_PressedColor.fields.g;
                              local_f8.fields.m_PressedColor.fields.b =
                                   (pUVar8->fields).m_PressedColor.fields.b;
                              local_f8.fields.m_PressedColor.fields.a =
                                   (pUVar8->fields).m_PressedColor.fields.a;
                              local_f8.fields.m_SelectedColor.fields.r =
                                   (pUVar8->fields).m_SelectedColor.fields.r;
                              local_f8.fields.m_SelectedColor.fields.g =
                                   (pUVar8->fields).m_SelectedColor.fields.g;
                              local_f8.fields.m_SelectedColor.fields.b =
                                   (pUVar8->fields).m_SelectedColor.fields.b;
                              local_f8.fields.m_SelectedColor.fields.a =
                                   (pUVar8->fields).m_SelectedColor.fields.a;
                              local_f8.fields.m_DisabledColor.fields.r =
                                   (pUVar8->fields).m_DisabledColor.fields.r;
                              local_f8.fields.m_DisabledColor.fields.g =
                                   (pUVar8->fields).m_DisabledColor.fields.g;
                              local_f8.fields.m_DisabledColor.fields.b =
                                   (pUVar8->fields).m_DisabledColor.fields.b;
                              local_f8.fields.m_DisabledColor.fields.a =
                                   (pUVar8->fields).m_DisabledColor.fields.a;
                              local_f8.fields.m_ColorMultiplier = (pUVar8->fields).m_ColorMultiplier;
                              local_f8.fields.m_FadeDuration = (pUVar8->fields).m_FadeDuration;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)pUVar6,&local_f8,(MethodInfo *)0x0);
                              pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                pUVar2 = UnityEngine_Transform__Find
                                                   (pUVar2,"Label",(MethodInfo *)0x0);
                                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar5 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar2,
                                                      (MethodInfo_6651A0 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_Text);
                                  pUVar9 = UI_UIManager__GetThemeColor
                                                     ((UnityEngine_Color_o *)&local_108,themePanel,
                                                      "DefaultSetting","DropdownTextColor",
                                                      "DefaultPanel",(MethodInfo *)0x0);
                                  if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                                    local_108.r = (pUVar9->fields).r;
                                    local_108.g = (pUVar9->fields).g;
                                    local_108.b = (pUVar9->fields).b;
                                    local_108.a = (pUVar9->fields).a;
                                    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                              (pUVar5,(UnityEngine_Color_o *)&local_108,
                                               (pUVar5->klass->vtable)._23_set_color.method);
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
// 0x18220a540

void
UI_DropdownSettingElement__OnDropdownSelectedButtonClick(UI_DropdownSettingElement_o* __this, MethodInfo* method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Scrollbar_o *__this_00;
  bool bVar2;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o *routine;
  float fVar3;
  
  pUVar1 = (__this->fields)._optionsPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_184347117 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__22);
        Il2CppMethodInitialized_184347117 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__22);
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
    __this_00 = (__this->fields)._scrollBar;
    if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._optionsPanel;
      (__this->fields)._currentScrollValue = fVar3;
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
// 0x18220ba30

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndEnableOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o *__this_00;
  
  if (Il2CppMethodInitialized_184347117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__22)
    ;
    Il2CppMethodInitialized_184347117 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__22);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.DropdownSettingElement$$WaitAndCloseOptions
// il2cpp: System_Collections_IEnumerator_o* UI_DropdownSettingElement__WaitAndCloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220b9c0

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndCloseOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement__WaitAndCloseOptions_d__23_o *__this_00;
  
  if (Il2CppMethodInitialized_184347118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__23);
    Il2CppMethodInitialized_184347118 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndCloseOptions_d__23);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.DropdownSettingElement$$OnDropdownOptionClick
// il2cpp: void UI_DropdownSettingElement__OnDropdownOptionClick (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x18220a310

void UI_DropdownSettingElement__OnDropdownOptionClick
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *__this_00;
  Settings_TypedSetting_int__o *__this_01;
  System_Int32_array *pSVar3;
  Settings_TypedSetting_T__o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184347119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347119 = '\x01';
  }
  pUVar2 = (__this->fields)._selectedButtonLabel;
  if (Il2CppMethodInitialized_184347106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    Il2CppMethodInitialized_184347106 = '\x01';
  }
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                (pUVar5,option,(pUVar5->klass->vtable)._75_set_text.method);
      __this_00 = (__this->fields)._scrollBar;
      if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
        fVar6 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._optionsPanel;
        (__this->fields)._currentScrollValue = fVar6;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          if ((__this->fields)._settingType == 4) {
            __this_02 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
            if (__this_02 == (Settings_TypedSetting_T__o *)0x0) goto label_18220a50b;
            bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_Settings_StringSetting);
            }
            Settings_TypedSetting_object___set_Value
                      (__this_02,(Il2CppObject *)option,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          else if ((__this->fields)._settingType == 2) {
            __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
            if ((__this->fields)._intOptionValues == (System_Int32_array *)0x0) {
              if (__this_01 != (Settings_TypedSetting_int__o *)0x0) {
                bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                }
              }
            }
            else {
              if (__this_01 != (Settings_TypedSetting_int__o *)0x0) {
                bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                }
              }
              pSVar3 = (__this->fields)._intOptionValues;
              if ((uint)pSVar3->max_length <= (uint)index) {
                ThrowIndexOutOfRangeException();
              }
              index = pSVar3->m_Items[index];
            }
            if (__this_01 == (Settings_TypedSetting_int__o *)0x0) goto label_18220a50b;
            Settings_TypedSetting_int___set_Value
                      (__this_01,index,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          }
          pUVar4 = (__this->fields)._onDropdownOptionSelect;
          if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
            (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
          }
          return;
        }
      }
    }
  }
label_18220a50b:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$CloseOptions
// il2cpp: void UI_DropdownSettingElement__CloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x182209c00

void UI_DropdownSettingElement__CloseOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollBar;
  if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar1 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._optionsPanel;
    (__this->fields)._currentScrollValue = fVar1;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$SyncElement
// il2cpp: void UI_DropdownSettingElement__SyncElement (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220b5f0

void UI_DropdownSettingElement__SyncElement(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_int__o *__this_00;
  System_String_array *pSVar2;
  UnityEngine_GameObject_o *__this_01;
  Settings_BaseSetting_o *pSVar3;
  uint uVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_18434711a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434711a = '\x01';
  }
  if ((__this->fields)._settingType == 4) {
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_18220b7ad;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
    }
    pSVar6 = (*(uint64_t *)((char *)pSVar3 + 0x20));
  }
  else {
    if ((__this->fields)._settingType != 2) {
      return;
    }
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_18220b7ad;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    if ((__this->fields)._intOptionValues == (System_Int32_array *)0x0) {
      uVar4 = (__this_00->fields)._value;
    }
    else {
      uVar4 = System_Array__IndexOf_int_
                        ((__this->fields)._intOptionValues,(__this_00->fields)._value,
                         (MethodInfo_761C20 *)MethodInfo_System_Array_IndexOf_int);
    }
    if ((int)uVar4 < 0) {
label_18220b6e5:
      Settings_TypedSetting_int___set_Value
                (__this_00,0,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      uVar4 = 0;
    }
    else {
      pSVar2 = (__this->fields)._options;
      if (pSVar2 == (System_String_array *)0x0) goto label_18220b7ad;
      if ((int)pSVar2->max_length <= (int)uVar4) goto label_18220b6e5;
    }
    pSVar2 = (__this->fields)._options;
    if (pSVar2 == (System_String_array *)0x0) goto label_18220b7ad;
    if ((uint)pSVar2->max_length <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    pSVar6 = pSVar2->m_Items[uVar4];
  }
  __this_01 = (__this->fields)._selectedButtonLabel;
  if (Il2CppMethodInitialized_184347106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    Il2CppMethodInitialized_184347106 = '\x01';
  }
  if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text),
     pUVar5 != (UnityEngine_UI_Text_o *)0x0)) {
    (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
              (pUVar5,pSVar6,(pUVar5->klass->vtable)._75_set_text.method);
    return;
  }
label_18220b7ad:
  ThrowNullReferenceException();
}


// UI.DropdownSettingElement$$.ctor
// il2cpp: void UI_DropdownSettingElement___ctor (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x182209ba0

void UI_DropdownSettingElement___ctor(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  (__this->fields)._currentScrollValue = 1.0;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement$$<Setup>b__13_0
// il2cpp: void UI_DropdownSettingElement___Setup_b__13_0 (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x18220a540

void UI_DropdownSettingElement___Setup_b__13_0(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Scrollbar_o *__this_00;
  bool bVar2;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__22_o *routine;
  float fVar3;
  
  pUVar1 = (__this->fields)._optionsPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_184347117 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__22);
        Il2CppMethodInitialized_184347117 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_DropdownSettingElement_WaitAndEnableOptions_d__22);
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
    __this_00 = (__this->fields)._scrollBar;
    if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._optionsPanel;
      (__this->fields)._currentScrollValue = fVar3;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


