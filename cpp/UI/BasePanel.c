// Type: UI.BasePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/BasePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePanel.cs
// --------------------------------

// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$.ctor
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb4fd0

void UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.IDisposable.Dispose
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_IDisposable_Dispose (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x5cb5af0

void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_IDisposable_Dispose
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndEnableCategoryPanel_d__51__MoveNext (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x5cb5b00

bool UI_BasePanel__WaitAndEnableCategoryPanel_d__51__MoveNext
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePanel_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  bool bVar4;
  Il2CppObject *__this_01;
  
  if (Il2CppMethodInitialized_07547ac8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547ac8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pUVar2 != (UI_BasePanel_o *)0x0) {
      pUVar3 = (pUVar2->fields).MaskBackground;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar3 = (pUVar2->fields).MaskBackground;
        if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cb5c37;
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (pUVar3,(UnityEngine_Color_o)(ZEXT816(0x3d4ccccd00000000) << 0x40),
                   (pUVar3->klass->vtable)._23_set_color.method);
      }
      __this_00 = (pUVar2->fields)._currentCategoryPanel;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
        goto label_05cb5c2d;
      }
    }
label_05cb5c37:
    ThrowNullReferenceException();
  }
label_05cb5c2d:
  return iVar1 == 0;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x5cb5c40

Il2CppObject *
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x5cb5c50

void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_Reset
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_get_Current (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x5cb5c90

Il2CppObject *
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_get_Current
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$.ctor
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb5170

void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.IDisposable.Dispose
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_IDisposable_Dispose (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x5cb5ca0

void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_IDisposable_Dispose
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__MoveNext (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x5cb5cb0

bool UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__MoveNext
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UI_BasePanel_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ac9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547ac9 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pUVar2 != (UI_BasePanel_o *)0x0) {
      pSVar3 = (pUVar2->fields)._currentCategoryPanelName;
      if (Il2CppMethodInitialized_07547abc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
        Il2CppMethodInitialized_07547abc = '\x01';
      }
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        (*(pUVar2->klass->vtable)._28_SetCategoryPanel.methodPtr)
                  (pUVar2,(pSVar3->fields)._value,(pUVar2->klass->vtable)._28_SetCategoryPanel.method);
        goto label_05cb5d84;
      }
    }
    ThrowNullReferenceException();
  }
label_05cb5d84:
  return iVar1 == 0;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x5cb5da0

Il2CppObject *
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x5cb5db0

void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_Reset
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_BasePanel_WaitAndRebuildCategoryPanel_d__54_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_get_Current (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x5cb5df0

Il2CppObject *
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_get_Current
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel$$get_ThemePanel
// il2cpp: System_String_o* UI_BasePanel__get_ThemePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3600

System_String_o * UI_BasePanel__get_ThemePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_07547ab2 = '\x01';
  }
  return "DefaultPanel";
}


// UI.BasePanel$$get_Width
// il2cpp: float UI_BasePanel__get_Width (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3630

float UI_BasePanel__get_Width(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.BasePanel$$get_Height
// il2cpp: float UI_BasePanel__get_Height (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3640

float UI_BasePanel__get_Height(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.BasePanel$$get_BorderVerticalPadding
// il2cpp: float UI_BasePanel__get_BorderVerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3650

float UI_BasePanel__get_BorderVerticalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$get_BorderHorizontalPadding
// il2cpp: float UI_BasePanel__get_BorderHorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3660

float UI_BasePanel__get_BorderHorizontalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$get_VerticalPadding
// il2cpp: int32_t UI_BasePanel__get_VerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3670

int32_t UI_BasePanel__get_VerticalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.BasePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_BasePanel__get_HorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3680

int32_t UI_BasePanel__get_HorizontalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.BasePanel$$get_VerticalSpacing
// il2cpp: float UI_BasePanel__get_VerticalSpacing (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3690

float UI_BasePanel__get_VerticalSpacing(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 30.0;
}


// UI.BasePanel$$get_PanelAlignment
// il2cpp: int32_t UI_BasePanel__get_PanelAlignment (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb36a0

int32_t UI_BasePanel__get_PanelAlignment(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_DoublePanel
// il2cpp: bool UI_BasePanel__get_DoublePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb36b0

bool UI_BasePanel__get_DoublePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return false;
}


// UI.BasePanel$$get_DoublePanelDivider
// il2cpp: bool UI_BasePanel__get_DoublePanelDivider (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb36c0

bool UI_BasePanel__get_DoublePanelDivider(UI_BasePanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.BasePanel$$get_ScrollBar
// il2cpp: bool UI_BasePanel__get_ScrollBar (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb36d0

bool UI_BasePanel__get_ScrollBar(UI_BasePanel_o *__this,MethodInfo *method)

{
  return false;
}


// UI.BasePanel$$get_CategoryPanel
// il2cpp: bool UI_BasePanel__get_CategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb36e0

bool UI_BasePanel__get_CategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return false;
}


// UI.BasePanel$$get_UseLastCategory
// il2cpp: bool UI_BasePanel__get_UseLastCategory (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb36f0

bool UI_BasePanel__get_UseLastCategory(UI_BasePanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.BasePanel$$get_HasPremadeContent
// il2cpp: bool UI_BasePanel__get_HasPremadeContent (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3700

bool UI_BasePanel__get_HasPremadeContent(UI_BasePanel_o *__this,MethodInfo *method)

{
  return false;
}


// UI.BasePanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_BasePanel__get_DefaultCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3710

System_String_o * UI_BasePanel__get_DefaultCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.BasePanel$$OnEnable
// il2cpp: void UI_BasePanel__OnEnable (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb3730

void UI_BasePanel__OnEnable(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *__this_01;
  
  if (Il2CppMethodInitialized_07547ab3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    Il2CppMethodInitialized_07547ab3 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb385c;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Border",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb385c;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Border",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb385c;
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar2,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    if (__this_01 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05cb385c;
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_01,false,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields)._currentCategoryPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
label_05cb385c:
  ThrowNullReferenceException();
}


// UI.BasePanel$$Setup
// il2cpp: void UI_BasePanel__Setup (UI_BasePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cb3870

void UI_BasePanel__Setup(UI_BasePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **targetAddress;
  UnityEngine_Vector2_o value;
  bool bVar1;
  bool scrollBar;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_RawImage_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_Texture_o *value_00;
  System_Type_o *t;
  MethodInfo **method_00;
  MethodInfo *method_01;
  UnityEngine_Transform_o **targetAddress_00;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07547ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_07547ab4 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_05cb3da4:
    ThrowNullReferenceException();
  }
  method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar2,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  fVar6 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                    (__this,(__this->klass->vtable)._33_GetWidth.method);
  fVar7 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(__this->klass->vtable)._34_GetHeight.method);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_05cb3da4;
  value.fields.y = fVar7;
  value.fields.x = fVar6;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cb3da4;
  pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cb3da4;
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cb3da4;
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    targetAddress = &(__this->fields).MaskBackground;
    (__this->fields).MaskBackground = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar4 = (__this->fields).MaskBackground;
    pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    method_00 = (MethodInfo **)"DefaultPanel";
    value_00 = (UnityEngine_Texture_o *)
               UI_UIManager__GetThemeTexture
                         (pSVar5,"MainBody","BackgroundTexture","DefaultPanel",
                          (MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cb3da4;
    UnityEngine_UI_RawImage__set_texture(pUVar4,value_00,(MethodInfo *)0x0);
    pUVar4 = *targetAddress;
    if (pUVar4 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cb3da4;
    (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
              (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3d4ccccd00000000) << 0x40),
               (pUVar4->klass->vtable)._23_set_color.method);
  }
  bVar1 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                    (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
  if (bVar1) {
label_05cb3ae6:
    bVar1 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                      (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method);
    if (bVar1) {
      (*(__this->klass->vtable)._24_SetupPremadePanel.methodPtr)
                (__this,(__this->klass->vtable)._24_SetupPremadePanel.method);
    }
  }
  else {
    bVar1 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                      (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method);
    if (bVar1) goto label_05cb3ae6;
    bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                      (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
    scrollBar = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                          (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    if (bVar1) {
      bVar1 = (*(__this->klass->vtable)._14_get_DoublePanelDivider.methodPtr)
                        (__this,(__this->klass->vtable)._14_get_DoublePanelDivider.method);
      pUVar2 = UI_BasePanel__CreateDoublePanel(__this,scrollBar,bVar1,(MethodInfo *)method_00);
      if (Il2CppMethodInitialized_07547abf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
        Il2CppMethodInitialized_07547abf = '\x01';
      }
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05cb3da4;
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cb3da4;
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      (__this->fields).DoublePanelLeft = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft);
      if (Il2CppMethodInitialized_07547ac0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
        Il2CppMethodInitialized_07547ac0 = '\x01';
      }
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cb3da4;
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"ScrollView/RightPanel",(MethodInfo *)0x0);
      targetAddress_00 = &(__this->fields).DoublePanelRight;
      (__this->fields).DoublePanelRight = pUVar3;
    }
    else {
      pUVar2 = UI_BasePanel__CreateSinglePanel(__this,scrollBar,method_01);
      if (Il2CppMethodInitialized_07547abe == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
        Il2CppMethodInitialized_07547abe = '\x01';
      }
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05cb3da4;
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cb3da4;
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"ScrollView/Panel",(MethodInfo *)0x0);
      targetAddress_00 = &(__this->fields).SinglePanel;
      (__this->fields).SinglePanel = pUVar3;
    }
    Il2CppCodeGenWriteBarrier(targetAddress_00);
  }
  (*(__this->klass->vtable)._25_SetupPopups.methodPtr)(__this,(__this->klass->vtable)._25_SetupPopups.method);
  bVar1 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                    (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
  if (!bVar1) goto label_05cb3d71;
  (*(__this->klass->vtable)._27_RegisterCategoryPanels.methodPtr)
            (__this,(__this->klass->vtable)._27_RegisterCategoryPanels.method);
  t = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar5 = UI_UIManager__GetLastcategory(t,(MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._17_get_UseLastCategory.methodPtr)
                    (__this,(__this->klass->vtable)._17_get_UseLastCategory.method);
  if (bVar1) {
    bVar1 = System_String__op_Inequality
                      (pSVar5,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (!bVar1) goto label_05cb3d43;
  }
  else {
label_05cb3d43:
    pSVar5 = (*(__this->klass->vtable)._19_get_DefaultCategoryPanel.methodPtr)
                       (__this,(__this->klass->vtable)._19_get_DefaultCategoryPanel.method);
  }
  (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
            (__this,pSVar5,(__this->klass->vtable)._28_SetCategoryPanel.method);
label_05cb3d71:
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
  return;
}


// UI.BasePanel$$Show
// il2cpp: void UI_BasePanel__Show (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4540

void UI_BasePanel__Show(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  return;
}


// UI.BasePanel$$Hide
// il2cpp: void UI_BasePanel__Hide (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4570

void UI_BasePanel__Hide(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method);
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  return;
}


// UI.BasePanel$$SyncSettingElements
// il2cpp: void UI_BasePanel__SyncSettingElements (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb45b0

void UI_BasePanel__SyncSettingElements(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_07547ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseSettingElement);
    Il2CppMethodInitialized_07547ab5 = '\x01';
  }
  pSVar3 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseSettingElement);
  if (pSVar3 == (System_Object_array *)0x0) {
label_05cb4636:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar3->max_length;
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      if (uVar2 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = pSVar3->m_Items[(int)uVar4];
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05cb4636;
      (*pIVar1->klass->vtable[6].methodPtr)(pIVar1,pIVar1->klass->vtable[6].method);
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
    } while ((int)uVar4 < (int)uVar2);
  }
  return;
}


// UI.BasePanel$$SetupPremadePanel
// il2cpp: void UI_BasePanel__SetupPremadePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4640

void UI_BasePanel__SetupPremadePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_GameObject_o *panel;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07547ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DoublePanelContent");
    il2cpp_codegen_initialize_runtime_metadata(&"SinglePanelContent");
    Il2CppMethodInitialized_07547ab6 = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"DoublePanelContent",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547abf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
      Il2CppMethodInitialized_07547abf = '\x01';
    }
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05cb4943;
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft);
    if (Il2CppMethodInitialized_07547ac0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
      Il2CppMethodInitialized_07547ac0 = '\x01';
    }
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    ppSVar4 = &"ScrollView/RightPanel";
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelRight);
    bVar1 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar3,bVar1,(__this->klass->vtable)._29_BindPanel.method);
    if (Il2CppMethodInitialized_07547abf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
      Il2CppMethodInitialized_07547abf = '\x01';
    }
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    panel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,panel,method_00);
    if (Il2CppMethodInitialized_07547ac0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
      Il2CppMethodInitialized_07547ac0 = '\x01';
    }
  }
  else {
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"SinglePanelContent",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547abe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
      Il2CppMethodInitialized_07547abe = '\x01';
    }
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05cb4943;
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb4943;
    ppSVar4 = &"ScrollView/Panel";
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SinglePanel);
    bVar1 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar3,bVar1,(__this->klass->vtable)._29_BindPanel.method);
    if (Il2CppMethodInitialized_07547abe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
      Il2CppMethodInitialized_07547abe = '\x01';
    }
  }
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,*ppSVar4,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding(__this,pUVar3,method_01);
      return;
    }
  }
label_05cb4943:
  ThrowNullReferenceException();
}


// UI.BasePanel$$SetupPopups
// il2cpp: void UI_BasePanel__SetupPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4ad0

void UI_BasePanel__SetupPopups(UI_BasePanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel$$HideAllPopups
// il2cpp: void UI_BasePanel__HideAllPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4ae0
// eh: try 0x5cb4b73..0x5cb4bba -> pad 0x5cb4bc3 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cb4bdb..0x5cb4be0 -> pad 0x5cb4bff cleanup
// eh: try 0x5cb4c02..0x5cb4c0c -> pad 0x5cb4c14 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb4b6d: nop dword ptr [rax]
// asm:   0x5cb4bbf: jmp 0x5cb4bc3
// asm:   0x5cb4bc1: jmp 0x5cb4bc3
// asm:   0x5cb4bc3: mov rbx, rax
// asm:   0x5cb4bc6: cmp edx, 1
// asm:   0x5cb4bc9: jne 0x5cb4c02
// asm:   0x5cb4bcb: mov rdi, rbx
// asm:   0x5cb4bce: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cb4bd3: mov rbx, qword ptr [rax]
// asm:   0x5cb4bd6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5cb4bdb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cb4be0: lea rax, [rip + 0x15d8b79]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5cb4be7: mov rsi, qword ptr [rax]
// asm:   0x5cb4bea: mov rdi, rsp
// asm:   0x5cb4bed: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cb4bf2: test rbx, rbx
// asm:   0x5cb4bf5: je 0x5cb4bad
// asm:   0x5cb4bf7: mov rdi, rbx
// asm:   0x5cb4bfa: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cb4bff: mov rbx, rax
// asm:   0x5cb4c02: lea rdi, [rsp + 0x18]
// asm:   0x5cb4c07: call 0x2fdb130  ; il2cpp_runtime_helper_02fdb130()
// asm:   0x5cb4c0c: mov rdi, rbx
// asm:   0x5cb4c0f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cb4c14: mov rdi, rax
// asm:   0x5cb4c17: call 0x2ab61e0  ; __clang_call_terminate()

void UI_BasePanel__HideAllPopups(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_07547ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_07547ab7 = '\x01';
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_38,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
  uStack_20 = 0;
  puStack_18 = (undefined1 *)&SStack_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
                );
      return;
    }
    if (SStack_38.fields._current == (Il2CppObject *)0x0) break;
    (*(SStack_38.fields._current)->klass->vtable[0x16].methodPtr)
              (SStack_38.fields._current,(SStack_38.fields._current)->klass->vtable[0x16].method);
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$RegisterCategoryPanels
// il2cpp: void UI_BasePanel__RegisterCategoryPanels (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4c20

void UI_BasePanel__RegisterCategoryPanels(UI_BasePanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cb4c30

void UI_BasePanel__SetCategoryPanel(UI_BasePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Object_o *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_StringSetting_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_UI_RawImage_o *pUVar6;
  bool bVar7;
  System_Type_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_String_o *panel;
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this_02;
  float fVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Vector3_o value;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_07547ab8 = '\x01';
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method);
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._currentCategoryPanel;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar4 = (UnityEngine_Object_o *)*targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)name,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Type_get_Item);
    __this_01 = (__this->fields)._currentCategoryPanelName;
    if (__this_01 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)name,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar10 = UI_ElementFactory__CreateEmptyPanel(pUVar9,pSVar8,true,(MethodInfo *)0x0);
      (__this->fields)._currentCategoryPanel = pUVar10;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar10 = (__this->fields)._currentCategoryPanel;
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar2 = (pUVar5->upVector).fields.x;
          uVar3 = (pUVar5->upVector).fields.y;
          fVar1 = (pUVar5->upVector).fields.z;
          fVar11 = (*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)
                             (__this,(__this->klass->vtable)._32_GetPanelVerticalOffset.method);
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            value.fields.z = fVar1 * fVar11;
            value.fields.y = (float)uVar3 * fVar11;
            value.fields.x = (float)uVar2 * fVar11;
            UnityEngine_Transform__set_localPosition(pUVar9,value,(MethodInfo *)0x0);
            pUVar6 = (__this->fields).MaskBackground;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar7) {
              pUVar6 = (__this->fields).MaskBackground;
              panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              UVar12 = UI_UIManager__GetThemeColor
                                 (panel,"MainBody","BackgroundColor","DefaultPanel",
                                  (MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cb4f5b;
              (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                        (pUVar6,UVar12,(pUVar6->klass->vtable)._23_set_color.method);
            }
            if (Il2CppMethodInitialized_07547ab9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51);
              Il2CppMethodInitialized_07547ab9 = '\x01';
            }
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51);
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            (__this_02->fields).__1__state = 0;
            (__this_02->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
            UnityEngine_MonoBehaviour__StartCoroutine_691c390
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_02,
                       (MethodInfo *)0x0);
            pSVar8 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            UI_UIManager__SetLastCategory(pSVar8,name,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05cb4f5b:
  ThrowNullReferenceException();
}


// UI.BasePanel$$WaitAndEnableCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndEnableCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4f60

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndEnableCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51);
    Il2CppMethodInitialized_07547ab9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePanel$$GetCurrentCategoryName
// il2cpp: System_String_o* UI_BasePanel__GetCurrentCategoryName (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb4ff0

System_String_o * UI_BasePanel__GetCurrentCategoryName(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547aba = '\x01';
  }
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value;
}


// UI.BasePanel$$RebuildCategoryPanel
// il2cpp: void UI_BasePanel__RebuildCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb5030

void UI_BasePanel__RebuildCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (Il2CppMethodInitialized_07547abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547abc = '\x01';
  }
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
            (__this,(pSVar1->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method);
  return;
}


// UI.BasePanel$$WaitAndRebuildCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndRebuildCategoryPanel (UI_BasePanel_o* __this, float time, const MethodInfo* method);
// 0x5cb50f0

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndRebuildCategoryPanel(UI_BasePanel_o *__this,float time,MethodInfo *method)

{
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  
  if (Il2CppMethodInitialized_07547abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePanel_WaitAndRebuildCategoryPanel_d__54);
    Il2CppMethodInitialized_07547abb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_BasePanel_WaitAndRebuildCategoryPanel_d__54);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x5cb5090

void UI_BasePanel__SetCategoryPanel_5bb5090
               (UI_BasePanel_o *__this,Settings_StringSetting_o *setting,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547abc = '\x01';
  }
  if (setting == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
            (__this,(setting->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method);
  return;
}


// UI.BasePanel$$CreateHorizontalDivider
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateHorizontalDivider (UI_BasePanel_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x5cb5190
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb5206: movss xmm1, dword ptr [rsp + 8]
// asm:   0x5cb520c: jmp 0x5cb521c

UnityEngine_GameObject_o *
UI_BasePanel__CreateHorizontalDivider
          (UI_BasePanel_o *__this,UnityEngine_Transform_o *parent,float height,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    Il2CppMethodInitialized_07547abd = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
  fVar4 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                    (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (bVar1) {
    fVar4 = fVar4 * 0.5;
  }
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHorizontalLine
                     (parent,__this_00,fVar4 - ((float)iVar2 + (float)iVar2),height,(MethodInfo *)0x0);
  return pUVar3;
}


// UI.BasePanel$$GetSinglePanelTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetSinglePanelTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* singlePanel, const MethodInfo* method);
// 0x5cb44f0

UnityEngine_Transform_o *
UI_BasePanel__GetSinglePanelTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *singlePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
    Il2CppMethodInitialized_07547abe = '\x01';
  }
  if (singlePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(singlePanel,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$GetDoublePanelLeftTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetDoublePanelLeftTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* doublePanel, const MethodInfo* method);
// 0x5cb4250

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelLeftTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
    Il2CppMethodInitialized_07547abf = '\x01';
  }
  if (doublePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(doublePanel,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$GetDoublePanelRightTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetDoublePanelRightTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* doublePanel, const MethodInfo* method);
// 0x5cb42a0

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelRightTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
    Il2CppMethodInitialized_07547ac0 = '\x01';
  }
  if (doublePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(doublePanel,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$CreateSinglePanel
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateSinglePanel (UI_BasePanel_o* __this, bool scrollBar, const MethodInfo* method);
// 0x5cb42f0

UnityEngine_GameObject_o *
UI_BasePanel__CreateSinglePanel(UI_BasePanel_o *__this,bool scrollBar,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_GameObject_o *panel;
  MethodInfo *method_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/SinglePanelContent");
    Il2CppMethodInitialized_07547ac1 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                   (path,"Prefabs/Panels/SinglePanelContent",false,false,
                    (MethodInfo_3665790 *)
                    MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07547abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
    Il2CppMethodInitialized_07547abe = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement)
        ;
        fVar3 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                          (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar2,fVar3,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
          (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                    (__this,root,scrollBar,(__this->klass->vtable)._29_BindPanel.method);
          if (Il2CppMethodInitialized_07547abe == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
            Il2CppMethodInitialized_07547abe = '\x01';
          }
          pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              panel = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
              UI_BasePanel__SetPanelPadding(__this,panel,method_00);
              return root;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$CreateDoublePanel
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateDoublePanel (UI_BasePanel_o* __this, bool scrollBar, bool divider, const MethodInfo* method);
// 0x5cb3db0

UnityEngine_GameObject_o *
UI_BasePanel__CreateDoublePanel(UI_BasePanel_o *__this,bool scrollBar,bool divider,MethodInfo *method)

{
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar6;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLineScaler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"LineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/VerticalLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/DoublePanelContent");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_07547ac2 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                   (pSVar4,"Prefabs/Panels/DoublePanelContent",false,false,
                    (MethodInfo_3665790 *)
                    MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07547abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
    Il2CppMethodInitialized_07547abf = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement)
        ;
        fVar6 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                          (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar2,fVar6 * 0.5,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
          if (Il2CppMethodInitialized_07547ac0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
            Il2CppMethodInitialized_07547ac0 = '\x01';
          }
          pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar1,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
              fVar6 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
              if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar2,fVar6 * 0.5,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
                pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                if (divider) {
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_05cb4244;
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/VerticalLine",(MethodInfo *)0x0);
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_05cb4244;
                  pUVar3 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar1,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_Image);
                  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  UVar7 = UI_UIManager__GetThemeColor
                                    (pSVar4,"MainBody","LineColor","DefaultPanel",
                                     (MethodInfo *)0x0);
                  if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_05cb4244;
                  (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                            (pUVar3,UVar7,(pUVar3->klass->vtable)._23_set_color.method);
                  pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05cb4244;
                  UnityEngine_GameObject__AddComponent_object_
                            (pUVar5,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLineScaler);
                }
                else {
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_05cb4244;
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/VerticalLine",(MethodInfo *)0x0);
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_05cb4244;
                  pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05cb4244;
                  UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                }
                (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                          (__this,root,scrollBar,(__this->klass->vtable)._29_BindPanel.method);
                if (Il2CppMethodInitialized_07547abf == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
                  Il2CppMethodInitialized_07547abf = '\x01';
                }
                pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                    UI_BasePanel__SetPanelPadding(__this,pUVar5,method_00);
                    if (Il2CppMethodInitialized_07547ac0 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
                      Il2CppMethodInitialized_07547ac0 = '\x01';
                    }
                    pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                        UI_BasePanel__SetPanelPadding(__this,pUVar5,method_01);
                        return root;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05cb4244:
  ThrowNullReferenceException();
}


// UI.BasePanel$$BindPanel
// il2cpp: void UI_BasePanel__BindPanel (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, bool scrollBar, const MethodInfo* method);
// 0x5cb52a0

void UI_BasePanel__BindPanel
               (UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,bool scrollBar,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  Il2CppObject *pIVar6;
  UnityEngine_UI_Scrollbar_o *__this_01;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_RawImage_o *__this_03;
  System_String_o *pSVar7;
  UnityEngine_Texture_o *value_01;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  UnityEngine_Vector3_o value_02;
  float fStack_98;
  float fStack_94;
  UnityEngine_UI_ColorBlock_o UStack_88;
  
  if (Il2CppMethodInitialized_07547ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollbarBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"Scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_07547ac3 = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(pUVar4,parent,false,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar1 = (pUVar3->upVector).fields.x;
        uVar2 = (pUVar3->upVector).fields.y;
        fVar9 = (pUVar3->upVector).fields.z;
        fVar8 = (*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)
                          (__this,(__this->klass->vtable)._32_GetPanelVerticalOffset.method);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          value_02.fields.z = fVar9 * fVar8;
          value_02.fields.y = (float)uVar2 * fVar8;
          value_02.fields.x = (float)uVar1 * fVar8;
          UnityEngine_Transform__set_localPosition(pUVar4,value_02,(MethodInfo *)0x0);
          fVar9 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                            (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
          __this_00 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                (panel,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          fVar8 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                            (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            value.fields.y = fVar9;
            value.fields.x = fVar8;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Transform__Find(pUVar4,"ScrollView",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pIVar6 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar4,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  (*pIVar6->klass->vtable[0x22].methodPtr)(fVar9,pIVar6);
                  pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Scrollbar",(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      __this_01 = (UnityEngine_UI_Scrollbar_o *)
                                  UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar4,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Scrollbar);
                      if (__this_01 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                        UnityEngine_UI_Scrollbar__set_value(__this_01,1.0,(MethodInfo *)0x0);
                        if (!scrollBar) {
                          __this_02 = (UnityEngine_UI_ScrollRect_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                (panel,(MethodInfo_353B730 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect
                                                );
                          if (__this_02 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_05cb57a0;
                          UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                    (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,(MethodInfo *)0x0);
                          pUVar5 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05cb57a0;
                          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                        }
                        __this_03 = (UnityEngine_UI_RawImage_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              (panel,(MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
                        pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                        }
                        value_01 = (UnityEngine_Texture_o *)
                                   UI_UIManager__GetThemeTexture
                                             (pSVar7,"MainBody","BackgroundTexture",
                                              "DefaultPanel",(MethodInfo *)0x0);
                        if (__this_03 != (UnityEngine_UI_RawImage_o *)0x0) {
                          UnityEngine_UI_RawImage__set_texture(__this_03,value_01,(MethodInfo *)0x0);
                          pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                             (panel,(MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
                          pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                          UVar10 = UI_UIManager__GetThemeColor
                                             (pSVar7,"MainBody","BackgroundColor",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          if (pIVar6 != (Il2CppObject *)0x0) {
                            (*pIVar6->klass->vtable[0x17].methodPtr)
                                      (UVar10.fields.r,UVar10.fields.b,pIVar6,
                                       pIVar6->klass->vtable[0x17].method);
                            pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            UI_UIManager__GetThemeColorBlock
                                      (&UStack_88,pSVar7,"MainBody","Scrollbar",
                                       "DefaultPanel",(MethodInfo *)0x0);
                            value_00.fields.m_NormalColor.fields.b = UStack_88.fields.m_NormalColor.fields.b;
                            value_00.fields.m_NormalColor.fields.a = UStack_88.fields.m_NormalColor.fields.a;
                            value_00.fields.m_NormalColor.fields.r = UStack_88.fields.m_NormalColor.fields.r;
                            value_00.fields.m_NormalColor.fields.g = UStack_88.fields.m_NormalColor.fields.g;
                            value_00.fields.m_HighlightedColor.fields.r =
                                 UStack_88.fields.m_HighlightedColor.fields.r;
                            value_00.fields.m_HighlightedColor.fields.g =
                                 UStack_88.fields.m_HighlightedColor.fields.g;
                            value_00.fields.m_HighlightedColor.fields.b =
                                 UStack_88.fields.m_HighlightedColor.fields.b;
                            value_00.fields.m_HighlightedColor.fields.a =
                                 UStack_88.fields.m_HighlightedColor.fields.a;
                            value_00.fields.m_PressedColor.fields.r = UStack_88.fields.m_PressedColor.fields.r
                            ;
                            value_00.fields.m_PressedColor.fields.g = UStack_88.fields.m_PressedColor.fields.g
                            ;
                            value_00.fields.m_PressedColor.fields.b = UStack_88.fields.m_PressedColor.fields.b
                            ;
                            value_00.fields.m_PressedColor.fields.a = UStack_88.fields.m_PressedColor.fields.a
                            ;
                            value_00.fields.m_SelectedColor.fields.r =
                                 UStack_88.fields.m_SelectedColor.fields.r;
                            value_00.fields.m_SelectedColor.fields.g =
                                 UStack_88.fields.m_SelectedColor.fields.g;
                            value_00.fields.m_SelectedColor.fields.b =
                                 UStack_88.fields.m_SelectedColor.fields.b;
                            value_00.fields.m_SelectedColor.fields.a =
                                 UStack_88.fields.m_SelectedColor.fields.a;
                            value_00.fields.m_DisabledColor.fields.r =
                                 UStack_88.fields.m_DisabledColor.fields.r;
                            value_00.fields.m_DisabledColor.fields.g =
                                 UStack_88.fields.m_DisabledColor.fields.g;
                            value_00.fields.m_DisabledColor.fields.b =
                                 UStack_88.fields.m_DisabledColor.fields.b;
                            value_00.fields.m_DisabledColor.fields.a =
                                 UStack_88.fields.m_DisabledColor.fields.a;
                            value_00.fields.m_ColorMultiplier = UStack_88.fields.m_ColorMultiplier;
                            value_00.fields.m_FadeDuration = UStack_88.fields.m_FadeDuration;
                            UnityEngine_UI_Selectable__set_colors
                                      ((UnityEngine_UI_Selectable_o *)__this_01,value_00,(MethodInfo *)0x0);
                            pIVar6 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)__this_01,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Image);
                            pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            UVar10 = UI_UIManager__GetThemeColor
                                               (pSVar7,"MainBody","ScrollbarBackgroundColor",
                                                "DefaultPanel",(MethodInfo *)0x0);
                            if (pIVar6 != (Il2CppObject *)0x0) {
                              (*pIVar6->klass->vtable[0x17].methodPtr)
                                        (UVar10.fields.r,UVar10.fields.b,pIVar6,
                                         pIVar6->klass->vtable[0x17].method);
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
label_05cb57a0:
  ThrowNullReferenceException();
}


// UI.BasePanel$$SetPanelPadding
// il2cpp: void UI_BasePanel__SetPanelPadding (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, const MethodInfo* method);
// 0x5cb4950

void UI_BasePanel__SetPanelPadding(UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,MethodInfo *method)

{
  int32_t iVar1;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  UnityEngine_RectOffset_o *__this_00;
  float value;
  
  if (Il2CppMethodInitialized_07547ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    Il2CppMethodInitialized_07547ac4 = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (panel,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
    right = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
    UnityEngine_RectOffset___ctor_68cd0a0(__this_00,iVar1,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding
                ((UnityEngine_UI_LayoutGroup_o *)pUVar2,__this_00,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (panel,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
      value = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                        (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
      if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,value,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__GetComponent_object_
                           (panel,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
        iVar1 = (*(__this->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (__this,(__this->klass->vtable)._12_get_PanelAlignment.method);
        if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)pUVar2,iVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$GetPanelWidth
// il2cpp: float UI_BasePanel__GetPanelWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb57b0

float UI_BasePanel__GetPanelWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                    (__this,(__this->klass->vtable)._33_GetWidth.method);
  return fVar1;
}


// UI.BasePanel$$GetPanelHeight
// il2cpp: float UI_BasePanel__GetPanelHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb57d0

float UI_BasePanel__GetPanelHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(__this->klass->vtable)._34_GetHeight.method);
  return fVar1;
}


// UI.BasePanel$$GetPanelVerticalOffset
// il2cpp: float UI_BasePanel__GetPanelVerticalOffset (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb57f0

float UI_BasePanel__GetPanelVerticalOffset(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$GetWidth
// il2cpp: float UI_BasePanel__GetWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb5800

float UI_BasePanel__GetWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  return fVar1;
}


// UI.BasePanel$$GetHeight
// il2cpp: float UI_BasePanel__GetHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb5820

float UI_BasePanel__GetHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_Height.method);
  return fVar1;
}


// UI.BasePanel$$GetPhysicalWidth
// il2cpp: float UI_BasePanel__GetPhysicalWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb5840

float UI_BasePanel__GetPhysicalWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  float fVar2;
  float local_18;
  
  if (Il2CppMethodInitialized_07547ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547ac5 = '\x01';
  }
  __this_01 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 != (UI_BaseMenu_o *)0x0) {
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
        fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
        local_18 = UVar1.fields.x;
        return fVar2 * local_18;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$GetPhysicalHeight
// il2cpp: float UI_BasePanel__GetPhysicalHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb5900

float UI_BasePanel__GetPhysicalHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  float fVar2;
  float fStack_14;
  
  if (Il2CppMethodInitialized_07547ac6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547ac6 = '\x01';
  }
  __this_01 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 != (UI_BaseMenu_o *)0x0) {
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
        fStack_14 = UVar1.fields.y;
        fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
        return fVar2 * fStack_14;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$.ctor
// il2cpp: void UI_BasePanel___ctor (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x5cb59d0

void UI_BasePanel___ctor(UI_SimplePanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_string__Type__o *__this_02;
  
  if (Il2CppMethodInitialized_07547ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Type);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547ac7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
  (__this->fields)._popups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._popups);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentCategoryPanelName);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_ctor);
  (__this->fields)._categoryPanelTypes = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


