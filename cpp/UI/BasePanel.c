// Type: UI.BasePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BasePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePanel.cs
// --------------------------------

// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$.ctor
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor(UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.IDisposable.Dispose
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_IDisposable_Dispose (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_IDisposable_Dispose(UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndEnableCategoryPanel_d__51__MoveNext (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x1821d1220

bool UI_BasePanel__WaitAndEnableCategoryPanel_d__51__MoveNext
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePanel_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  bool bVar4;
  Il2CppObject *__this_01;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184346ece = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    return false;
  }
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
      if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1821d1369;
      local_18.r = 0.0;
      local_18.g = 0.0;
      local_18.b = 0.0;
      local_18.a = 0.05;
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,(UnityEngine_Color_o *)&local_18,(pUVar3->klass->vtable)._23_set_color.method);
    }
    __this_00 = (pUVar2->fields)._currentCategoryPanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
      return false;
    }
  }
label_1821d1369:
  ThrowNullReferenceException();
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x1821d1370

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
// 0x180573e90

Il2CppObject*
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_get_Current(UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$.ctor
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor(UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.IDisposable.Dispose
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_IDisposable_Dispose (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_IDisposable_Dispose(UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__MoveNext (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x1821d13b0

bool UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__MoveNext
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  UI_BasePanel_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346ecf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    amplificationFactor = (__this->fields).time;
    (__this->fields).__1__state = -1;
    __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_00,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    return false;
  }
  pUVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    pSVar3 = (pUVar2->fields)._currentCategoryPanelName;
    if (Il2CppMethodInitialized_184346ec2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      Il2CppMethodInitialized_184346ec2 = '\x01';
    }
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      (*(pUVar2->klass->vtable)._28_SetCategoryPanel.methodPtr)
                (pUVar2,(pSVar3->fields)._value,(pUVar2->klass->vtable)._28_SetCategoryPanel.method);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x1821d14a0

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
// 0x180573e90

Il2CppObject*
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_get_Current(UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel$$get_ThemePanel
// il2cpp: System_String_o* UI_BasePanel__get_ThemePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821bb400

System_String_o * UI_BasePanel__get_ThemePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_184346eb8 = '\x01';
  }
  return "DefaultPanel";
}


// UI.BasePanel$$get_Width
// il2cpp: float UI_BasePanel__get_Width (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821bb440

float
UI_BasePanel__get_Width(UI_BasePanel_o* __this, MethodInfo* method)

{
  return 800.0;
}


// UI.BasePanel$$get_Height
// il2cpp: float UI_BasePanel__get_Height (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821500a0

float
UI_BasePanel__get_Height(UI_BasePanel_o* __this, MethodInfo* method)

{
  return 600.0;
}


// UI.BasePanel$$get_BorderVerticalPadding
// il2cpp: float UI_BasePanel__get_BorderVerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BasePanel__get_BorderVerticalPadding(UI_BasePanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BasePanel$$get_BorderHorizontalPadding
// il2cpp: float UI_BasePanel__get_BorderHorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BasePanel__get_BorderHorizontalPadding(UI_BasePanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BasePanel$$get_VerticalPadding
// il2cpp: int32_t UI_BasePanel__get_VerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_BasePanel__get_VerticalPadding(UI_BasePanel_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.BasePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_BasePanel__get_HorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180846f60

int32_t
UI_BasePanel__get_HorizontalPadding(UI_BasePanel_o* __this, MethodInfo* method)

{
  return 0x28;
}


// UI.BasePanel$$get_VerticalSpacing
// il2cpp: float UI_BasePanel__get_VerticalSpacing (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x182175ed0

float UI_BasePanel__get_VerticalSpacing(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 30.0;
}


// UI.BasePanel$$get_PanelAlignment
// il2cpp: int32_t UI_BasePanel__get_PanelAlignment (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_BasePanel__get_PanelAlignment(UI_BasePanel_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.BasePanel$$get_DoublePanel
// il2cpp: bool UI_BasePanel__get_DoublePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_BasePanel__get_DoublePanel(UI_BasePanel_o* __this, MethodInfo* method)

{
  return false;
}


// UI.BasePanel$$get_DoublePanelDivider
// il2cpp: bool UI_BasePanel__get_DoublePanelDivider (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_BasePanel__get_DoublePanelDivider(UI_BasePanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.BasePanel$$get_ScrollBar
// il2cpp: bool UI_BasePanel__get_ScrollBar (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_BasePanel__get_ScrollBar(UI_BasePanel_o* __this, MethodInfo* method)

{
  return false;
}


// UI.BasePanel$$get_CategoryPanel
// il2cpp: bool UI_BasePanel__get_CategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_BasePanel__get_CategoryPanel(UI_BasePanel_o* __this, MethodInfo* method)

{
  return false;
}


// UI.BasePanel$$get_UseLastCategory
// il2cpp: bool UI_BasePanel__get_UseLastCategory (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_BasePanel__get_UseLastCategory(UI_BasePanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.BasePanel$$get_HasPremadeContent
// il2cpp: bool UI_BasePanel__get_HasPremadeContent (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_BasePanel__get_HasPremadeContent(UI_BasePanel_o* __this, MethodInfo* method)

{
  return false;
}


// UI.BasePanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_BasePanel__get_DefaultCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_BasePanel__get_DefaultCategoryPanel(UI_BasePanel_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.BasePanel$$OnEnable
// il2cpp: void UI_BasePanel__OnEnable (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821ba190

void UI_BasePanel__OnEnable(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *__this_01;
  
  if (Il2CppMethodInitialized_184346eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    Il2CppMethodInitialized_184346eb9 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821ba2b3;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Border",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821ba2b3;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Border",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821ba2b3;
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar2,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    if (__this_01 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1821ba2b3;
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_01,false,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._currentCategoryPanel;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_1821ba2b3:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  }
  return;
}


// UI.BasePanel$$Setup
// il2cpp: void UI_BasePanel__Setup (UI_BasePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821babe0

void UI_BasePanel__Setup(UI_BasePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel_c *pUVar1;
  _func_6 *p_Var2;
  UnityEngine_Vector2_o value;
  bool bVar3;
  bool divider;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_RawImage_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_Texture_o *value_00;
  System_Type_o *t;
  MethodInfo *pMVar8;
  float fVar9;
  float extraout_XMM0_Da;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_184346eba = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
label_1821bb123:
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar4,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  fVar9 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                           (__this,(__this->klass->vtable)._33_GetWidth.method);
  pUVar1 = __this->klass;
  (*(pUVar1->vtable)._34_GetHeight.methodPtr)
            (__this,(System_Int32_array *)(pUVar1->vtable)._34_GetHeight.method,(MethodInfo *)pUVar1);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto label_1821bb123;
  value.fields.y = extraout_XMM0_Da;
  value.fields.x = fVar9;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821bb123;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Background",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821bb123;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Background",(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821bb123;
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar5,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    (__this->fields).MaskBackground = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).MaskBackground,pUVar6);
    pUVar6 = (__this->fields).MaskBackground;
    pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    value_00 = (UnityEngine_Texture_o *)
               UI_UIManager__GetThemeTexture
                         (pSVar7,"MainBody","BackgroundTexture","DefaultPanel",
                          (MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1821bb123;
    UnityEngine_UI_RawImage__set_texture(pUVar6,value_00,(MethodInfo *)0x0);
    pUVar6 = (__this->fields).MaskBackground;
    if (pUVar6 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1821bb123;
    local_28[0].r = 0.0;
    local_28[0].g = 0.0;
    local_28[0].b = 0.0;
    local_28[0].a = 0.05;
    pMVar8 = (pUVar6->klass->vtable)._23_set_color.method;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)(pUVar6,(UnityEngine_Color_o *)local_28,pMVar8);
  }
  bVar3 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                    (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
  if (bVar3) {
label_1821bafd5:
    bVar3 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                      (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method);
    if (bVar3) {
      (*(__this->klass->vtable)._24_SetupPremadePanel.methodPtr)
                (__this,(__this->klass->vtable)._24_SetupPremadePanel.method);
    }
  }
  else {
    bVar3 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                      (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method);
    if (bVar3) goto label_1821bafd5;
    bVar3 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                      (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
    p_Var2 = (__this->klass->vtable)._15_get_ScrollBar.methodPtr;
    pMVar8 = (__this->klass->vtable)._15_get_ScrollBar.method;
    if (bVar3) {
      bVar3 = (*p_Var2)(__this,pMVar8);
      divider = (*(__this->klass->vtable)._14_get_DoublePanelDivider.methodPtr)
                          (__this,(__this->klass->vtable)._14_get_DoublePanelDivider.method);
      pUVar4 = UI_BasePanel__CreateDoublePanel(__this,bVar3,divider,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184346ec5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
        Il2CppMethodInitialized_184346ec5 = '\x01';
      }
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_1821bb123;
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821bb123;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      (__this->fields).DoublePanelLeft = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft,pUVar5);
      if (Il2CppMethodInitialized_184346ec6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
        Il2CppMethodInitialized_184346ec6 = '\x01';
      }
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821bb123;
      pMVar8 = (MethodInfo *)0x0;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/RightPanel",(MethodInfo *)0x0);
      (__this->fields).DoublePanelRight = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelRight,pUVar5);
    }
    else {
      bVar3 = (*p_Var2)(__this,pMVar8);
      pUVar4 = UI_BasePanel__CreateSinglePanel(__this,bVar3,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184346ec4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
        Il2CppMethodInitialized_184346ec4 = '\x01';
      }
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_1821bb123;
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_1821bb123;
      pMVar8 = (MethodInfo *)0x0;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/Panel",(MethodInfo *)0x0);
      (__this->fields).SinglePanel = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SinglePanel,pUVar5);
    }
  }
  (*(__this->klass->vtable)._25_SetupPopups.methodPtr)
            (__this,(System_Type_o *)(__this->klass->vtable)._25_SetupPopups.method,pMVar8);
  bVar3 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                    (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
  if (bVar3) {
    (*(__this->klass->vtable)._27_RegisterCategoryPanels.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._27_RegisterCategoryPanels.method,pMVar8);
    t = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar7 = UI_UIManager__GetLastcategory(t,(MethodInfo *)0x0);
    bVar3 = (*(__this->klass->vtable)._17_get_UseLastCategory.methodPtr)
                      (__this,(__this->klass->vtable)._17_get_UseLastCategory.method);
    if (bVar3) {
      bVar3 = System_String__op_Inequality
                        (pSVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar3) {
        (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                  (__this,pSVar7,(__this->klass->vtable)._28_SetCategoryPanel.method);
        goto label_1821bb0e9;
      }
    }
    pSVar7 = (*(__this->klass->vtable)._19_get_DefaultCategoryPanel.methodPtr)
                       (__this,(__this->klass->vtable)._19_get_DefaultCategoryPanel.method);
    (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (__this,pSVar7,(__this->klass->vtable)._28_SetCategoryPanel.method);
  }
label_1821bb0e9:
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
  return;
}


// UI.BasePanel$$Show
// il2cpp: void UI_BasePanel__Show (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821bb130

void UI_BasePanel__Show(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$Hide
// il2cpp: void UI_BasePanel__Hide (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821ba150

void UI_BasePanel__Hide(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method);
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$SyncSettingElements
// il2cpp: void UI_BasePanel__SyncSettingElements (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821bb160

void UI_BasePanel__SyncSettingElements(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184346ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseSettingElement);
    Il2CppMethodInitialized_184346ebb = '\x01';
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__665370
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_665370 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseSettingElement);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar3 = 0;
    while( true ) {
      if ((int)pSVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = pSVar2->m_Items[(int)uVar3];
      if (pIVar1 == (Il2CppObject *)0x0) break;
      (*pIVar1->klass->vtable[6].methodPtr)(pIVar1,pIVar1->klass->vtable[6].method);
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$SetupPremadePanel
// il2cpp: void UI_BasePanel__SetupPremadePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821ba8b0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ba9f3: mov rdx, qword ptr [rip + 0x1ec566e]  ; "ScrollView/Panel"
// asm:   0x1821ba9fa: xor r8d, r8d
// asm:   0x1821babc4: mov rdx, qword ptr [rip + 0x1ec557d]  ; "ScrollView/RightPanel"
// asm:   0x1821babcb: xor r8d, r8d
// asm:   0x1821babce: jmp 0x1821ba9fd

void UI_BasePanel__SetupPremadePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_String_o *n;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_GameObject_o *panel;
  
  if (Il2CppMethodInitialized_184346ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DoublePanelContent");
    il2cpp_codegen_initialize_runtime_metadata(&"SinglePanelContent");
    Il2CppMethodInitialized_184346ebc = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar2 = UnityEngine_Transform__Find(pUVar2,"DoublePanelContent",(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1821babd3;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184346ec5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
      Il2CppMethodInitialized_184346ec5 = '\x01';
    }
    if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1821babd3;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft,pUVar2);
    if (Il2CppMethodInitialized_184346ec6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
      Il2CppMethodInitialized_184346ec6 = '\x01';
    }
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821babd3;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelRight,pUVar2);
    bVar1 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar3,bVar1,(__this->klass->vtable)._29_BindPanel.method);
    if (Il2CppMethodInitialized_184346ec5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
      Il2CppMethodInitialized_184346ec5 = '\x01';
    }
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/LeftPanel",(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1821babd3;
    panel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,panel,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184346ec6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
      Il2CppMethodInitialized_184346ec6 = '\x01';
    }
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    n = "ScrollView/RightPanel";
  }
  else {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar2 = UnityEngine_Transform__Find(pUVar2,"SinglePanelContent",(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1821babd3;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184346ec4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
      Il2CppMethodInitialized_184346ec4 = '\x01';
    }
    if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1821babd3;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SinglePanel,pUVar2);
    bVar1 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar3,bVar1,(__this->klass->vtable)._29_BindPanel.method);
    if (Il2CppMethodInitialized_184346ec4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
      Il2CppMethodInitialized_184346ec4 = '\x01';
    }
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    n = "ScrollView/Panel";
  }
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar2 = UnityEngine_Transform__Find(pUVar2,n,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,pUVar3,(MethodInfo *)0x0);
    return;
  }
label_1821babd3:
  ThrowNullReferenceException();
}


// UI.BasePanel$$SetupPopups
// il2cpp: void UI_BasePanel__SetupPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePanel__SetupPopups(UI_BasePanel_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePanel$$HideAllPopups
// il2cpp: void UI_BasePanel__HideAllPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821ba030
// eh: try 0x1821ba0d0..0x1821ba139 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ba0cf: nop 
// asm:   0x1821ba112: mov rdx, qword ptr [rip + 0x1ebbbdf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x1821ba119: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ba11e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ba123: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ba128: test rcx, rcx
// asm:   0x1821ba12b: jne 0x1821ba139
// asm:   0x1821ba139: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_BasePanel__HideAllPopups(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346ebd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_184346ebd = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      (*(local_28.fields._current)->klass->vtable[0x16].methodPtr)
                (local_28.fields._current,(local_28.fields._current)->klass->vtable[0x16].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$RegisterCategoryPanels
// il2cpp: void UI_BasePanel__RegisterCategoryPanels (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePanel__RegisterCategoryPanels(UI_BasePanel_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821ba380

void UI_BasePanel__SetCategoryPanel(UI_BasePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  UnityEngine_Color_o *pUVar11;
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *routine;
  float fVar12;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184346ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_184346ebe = '\x01';
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method);
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar4,(MethodInfo *)0x0);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)name,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Type_get_Item);
    __this_01 = (__this->fields)._currentCategoryPanelName;
    if (__this_01 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)name,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar10 = UI_ElementFactory__CreateEmptyPanel(pUVar9,pSVar8,true,(MethodInfo *)0x0);
      (__this->fields)._currentCategoryPanel = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentCategoryPanel,pUVar10);
      pUVar10 = (__this->fields)._currentCategoryPanel;
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
        pUVar10 = (__this->fields)._currentCategoryPanel;
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar1 = (pUVar5->upVector).fields.x;
          fVar2 = (pUVar5->upVector).fields.y;
          fVar3 = (pUVar5->upVector).fields.z;
          fVar12 = (*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)
                             (__this,(__this->klass->vtable)._32_GetPanelVerticalOffset.method);
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            local_48[0].g = fVar2 * fVar12;
            local_48[0].r = fVar1 * fVar12;
            local_48[0].b = fVar3 * fVar12;
            UnityEngine_Transform__set_localPosition
                      (pUVar9,(UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
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
              pUVar11 = UI_UIManager__GetThemeColor
                                  ((UnityEngine_Color_o *)local_48,panel,"MainBody",
                                   "BackgroundColor","DefaultPanel",(MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1821ba6f6;
              local_48[0].r = (pUVar11->fields).r;
              local_48[0].g = (pUVar11->fields).g;
              local_48[0].b = (pUVar11->fields).b;
              local_48[0].a = (pUVar11->fields).a;
              (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                        (pUVar6,(UnityEngine_Color_o *)local_48,(pUVar6->klass->vtable)._23_set_color.method);
            }
            if (Il2CppMethodInitialized_184346ebf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51);
              Il2CppMethodInitialized_184346ebf = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            (routine->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
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
label_1821ba6f6:
  ThrowNullReferenceException();
}


// UI.BasePanel$$WaitAndEnableCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndEnableCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821bb1f0

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndEnableCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51);
    Il2CppMethodInitialized_184346ebf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePanel$$GetCurrentCategoryName
// il2cpp: System_String_o* UI_BasePanel__GetCurrentCategoryName (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821b9d00

System_String_o * UI_BasePanel__GetCurrentCategoryName(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346ec0 = '\x01';
  }
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$RebuildCategoryPanel
// il2cpp: void UI_BasePanel__RebuildCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821ba2c0

void UI_BasePanel__RebuildCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (Il2CppMethodInitialized_184346ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346ec2 = '\x01';
  }
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (__this,(pSVar1->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$WaitAndRebuildCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndRebuildCategoryPanel (UI_BasePanel_o* __this, float time, const MethodInfo* method);
// 0x1821bb260

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndRebuildCategoryPanel(UI_BasePanel_o *__this,float time,MethodInfo *method)

{
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePanel_WaitAndRebuildCategoryPanel_d__54);
    Il2CppMethodInitialized_184346ec1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_BasePanel_WaitAndRebuildCategoryPanel_d__54);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x1821ba320

void UI_BasePanel__SetCategoryPanel_21ba320
               (UI_BasePanel_o *__this,Settings_StringSetting_o *setting,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346ec2 = '\x01';
  }
  if (setting != (Settings_StringSetting_o *)0x0) {
    (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (__this,(setting->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$CreateHorizontalDivider
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateHorizontalDivider (UI_BasePanel_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x1821b99d0

UnityEngine_GameObject_o *
UI_BasePanel__CreateHorizontalDivider
          (UI_BasePanel_o *__this,UnityEngine_Transform_o *parent,float height,MethodInfo *method)

{
  _func_22 *p_Var1;
  MethodInfo *pMVar2;
  bool bVar3;
  int iVar4;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    Il2CppMethodInitialized_184346ec3 = '\x01';
  }
  bVar3 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
  p_Var1 = (__this->klass->vtable)._30_GetPanelWidth.methodPtr;
  pMVar2 = (__this->klass->vtable)._30_GetPanelWidth.method;
  if (bVar3) {
    fVar6 = (*p_Var1)(__this,pMVar2);
    iVar4 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
    fVar6 = fVar6 * 0.5;
  }
  else {
    fVar6 = (*p_Var1)(__this,pMVar2);
    iVar4 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
  }
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
  pUVar5 = UI_ElementFactory__CreateHorizontalLine
                     (parent,__this_00,fVar6 - ((float)iVar4 + (float)iVar4),height,(MethodInfo *)0x0);
  return pUVar5;
}


// UI.BasePanel$$GetSinglePanelTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetSinglePanelTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* singlePanel, const MethodInfo* method);
// 0x1821b9fd0

UnityEngine_Transform_o *
UI_BasePanel__GetSinglePanelTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *singlePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
    Il2CppMethodInitialized_184346ec4 = '\x01';
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
// 0x1821b9d40

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelLeftTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
    Il2CppMethodInitialized_184346ec5 = '\x01';
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
// 0x1821b9da0

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelRightTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
    Il2CppMethodInitialized_184346ec6 = '\x01';
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
// 0x1821b9b10

UnityEngine_GameObject_o *
UI_BasePanel__CreateSinglePanel(UI_BasePanel_o *__this,bool scrollBar,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_GameObject_o *panel;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/SinglePanelContent");
    Il2CppMethodInitialized_184346ec7 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,"Prefabs/Panels/SinglePanelContent",false,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (Il2CppMethodInitialized_184346ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
    Il2CppMethodInitialized_184346ec4 = '\x01';
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        fVar3 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                          (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar2,fVar3,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
          (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                    (__this,__this_00,scrollBar,(__this->klass->vtable)._29_BindPanel.method);
          if (Il2CppMethodInitialized_184346ec4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/Panel");
            Il2CppMethodInitialized_184346ec4 = '\x01';
          }
          pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              panel = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
              UI_BasePanel__SetPanelPadding(__this,panel,(MethodInfo *)0x0);
              return __this_00;
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
// 0x1821b9540

UnityEngine_GameObject_o *
UI_BasePanel__CreateDoublePanel(UI_BasePanel_o *__this,bool scrollBar,bool divider,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Image_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_Color_o *pUVar6;
  float fVar7;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184346ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLineScaler);
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
    Il2CppMethodInitialized_184346ec8 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar5,"Prefabs/Panels/DoublePanelContent",false,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (Il2CppMethodInitialized_184346ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
    Il2CppMethodInitialized_184346ec5 = '\x01';
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        fVar7 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                          (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar2,fVar7 * 0.5,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
          if (Il2CppMethodInitialized_184346ec6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
            Il2CppMethodInitialized_184346ec6 = '\x01';
          }
          pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar1,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
              fVar7 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
              if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar2,fVar7 * 0.5,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
                pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                if (divider) {
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_1821b99c1;
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/VerticalLine",(MethodInfo *)0x0);
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_1821b99c1;
                  pUVar4 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar1,
                                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image
                                     );
                  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  pUVar6 = UI_UIManager__GetThemeColor
                                     ((UnityEngine_Color_o *)&local_28,pSVar5,"MainBody",
                                      "LineColor","DefaultPanel",(MethodInfo *)0x0);
                  if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_1821b99c1;
                  local_28.r = (pUVar6->fields).r;
                  local_28.g = (pUVar6->fields).g;
                  local_28.b = (pUVar6->fields).b;
                  local_28.a = (pUVar6->fields).a;
                  (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                            (pUVar4,(UnityEngine_Color_o *)&local_28,
                             (pUVar4->klass->vtable)._23_set_color.method);
                  pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_1821b99c1;
                  UnityEngine_GameObject__AddComponent_object_
                            (pUVar3,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLineScaler);
                }
                else {
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_1821b99c1;
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/VerticalLine",(MethodInfo *)0x0);
                  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_1821b99c1;
                  pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_1821b99c1;
                  UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                }
                (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                          (__this,__this_00,scrollBar,(__this->klass->vtable)._29_BindPanel.method);
                if (Il2CppMethodInitialized_184346ec5 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/LeftPanel");
                  Il2CppMethodInitialized_184346ec5 = '\x01';
                }
                pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                    UI_BasePanel__SetPanelPadding(__this,pUVar3,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_184346ec6 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&"ScrollView/RightPanel");
                      Il2CppMethodInitialized_184346ec6 = '\x01';
                    }
                    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar3 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                        UI_BasePanel__SetPanelPadding(__this,pUVar3,(MethodInfo *)0x0);
                        return __this_00;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_1821b99c1:
  ThrowNullReferenceException();
}


// UI.BasePanel$$BindPanel
// il2cpp: void UI_BasePanel__BindPanel (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, bool scrollBar, const MethodInfo* method);
// 0x1821b8fc0

void UI_BasePanel__BindPanel
               (UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,bool scrollBar,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  UnityEngine_UI_Scrollbar_o *__this_01;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_RawImage_o *pUVar7;
  System_String_o *pSVar8;
  UnityEngine_Texture_o *value_00;
  UnityEngine_Color_o *pUVar9;
  UnityEngine_UI_ColorBlock_o *pUVar10;
  UnityEngine_UI_Image_o *pUVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  UnityEngine_Color_Fields local_118;
  UnityEngine_UI_ColorBlock_o local_108;
  UnityEngine_UI_ColorBlock_o local_a8;
  
  if (Il2CppMethodInitialized_184346ec9 == '\0') {
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
    Il2CppMethodInitialized_184346ec9 = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent,false,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar13 = (pUVar3->upVector).fields.x;
        fVar1 = (pUVar3->upVector).fields.y;
        fVar2 = (pUVar3->upVector).fields.z;
        fVar12 = (*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)
                           (__this,(__this->klass->vtable)._32_GetPanelVerticalOffset.method);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          local_118.g = fVar1 * fVar12;
          local_118.r = fVar13 * fVar12;
          local_118.b = fVar2 * fVar12;
          UnityEngine_Transform__set_localPosition
                    (pUVar4,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                    (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                (panel,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          fVar13 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                             (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            value.fields.y = extraout_XMM0_Da;
            value.fields.x = fVar13;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Transform__Find(pUVar4,"ScrollView",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar6 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar4,
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar6->klass->vtable)._34_set_minHeight.methodPtr)
                            (pUVar6,extraout_XMM0_Da,(pUVar6->klass->vtable)._34_set_minHeight.method);
                  pUVar4 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Scrollbar",(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      __this_01 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar4,
                                             (MethodInfo_6651A0 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Scrollbar);
                      if (__this_01 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                        UnityEngine_UI_Scrollbar__set_value(__this_01,1.0,(MethodInfo *)0x0);
                        if (!scrollBar) {
                          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                                (panel,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect
                                                );
                          if (__this_02 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_1821b9536;
                          UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                    (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,(MethodInfo *)0x0);
                          pUVar5 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_1821b9536;
                          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                        }
                        pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                           (panel,(MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
                        pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                        }
                        value_00 = (UnityEngine_Texture_o *)
                                   UI_UIManager__GetThemeTexture
                                             (pSVar8,"MainBody","BackgroundTexture",
                                              "DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                          UnityEngine_UI_RawImage__set_texture(pUVar7,value_00,(MethodInfo *)0x0);
                          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                             (panel,(MethodInfo_6F5650 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
                          pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                          pUVar9 = UI_UIManager__GetThemeColor
                                             ((UnityEngine_Color_o *)&local_118,pSVar8,"MainBody",
                                              "BackgroundColor","DefaultPanel",(MethodInfo *)0x0);
                          if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                            local_118.r = (pUVar9->fields).r;
                            local_118.g = (pUVar9->fields).g;
                            local_118.b = (pUVar9->fields).b;
                            local_118.a = (pUVar9->fields).a;
                            (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                                      (pUVar7,(UnityEngine_Color_o *)&local_118,
                                       (pUVar7->klass->vtable)._23_set_color.method);
                            pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            pUVar10 = UI_UIManager__GetThemeColorBlock
                                                (&local_a8,pSVar8,"MainBody","Scrollbar",
                                                 "DefaultPanel",(MethodInfo *)0x0);
                            local_108.fields.m_NormalColor.fields.r = (pUVar10->fields).m_NormalColor.fields.r
                            ;
                            local_108.fields.m_NormalColor.fields.g = (pUVar10->fields).m_NormalColor.fields.g
                            ;
                            local_108.fields.m_NormalColor.fields.b = (pUVar10->fields).m_NormalColor.fields.b
                            ;
                            local_108.fields.m_NormalColor.fields.a = (pUVar10->fields).m_NormalColor.fields.a
                            ;
                            local_108.fields.m_HighlightedColor.fields.r =
                                 (pUVar10->fields).m_HighlightedColor.fields.r;
                            local_108.fields.m_HighlightedColor.fields.g =
                                 (pUVar10->fields).m_HighlightedColor.fields.g;
                            local_108.fields.m_HighlightedColor.fields.b =
                                 (pUVar10->fields).m_HighlightedColor.fields.b;
                            local_108.fields.m_HighlightedColor.fields.a =
                                 (pUVar10->fields).m_HighlightedColor.fields.a;
                            local_108.fields.m_PressedColor.fields.r =
                                 (pUVar10->fields).m_PressedColor.fields.r;
                            local_108.fields.m_PressedColor.fields.g =
                                 (pUVar10->fields).m_PressedColor.fields.g;
                            local_108.fields.m_PressedColor.fields.b =
                                 (pUVar10->fields).m_PressedColor.fields.b;
                            local_108.fields.m_PressedColor.fields.a =
                                 (pUVar10->fields).m_PressedColor.fields.a;
                            local_108.fields.m_SelectedColor.fields.r =
                                 (pUVar10->fields).m_SelectedColor.fields.r;
                            local_108.fields.m_SelectedColor.fields.g =
                                 (pUVar10->fields).m_SelectedColor.fields.g;
                            local_108.fields.m_SelectedColor.fields.b =
                                 (pUVar10->fields).m_SelectedColor.fields.b;
                            local_108.fields.m_SelectedColor.fields.a =
                                 (pUVar10->fields).m_SelectedColor.fields.a;
                            local_108.fields.m_DisabledColor.fields.r =
                                 (pUVar10->fields).m_DisabledColor.fields.r;
                            local_108.fields.m_DisabledColor.fields.g =
                                 (pUVar10->fields).m_DisabledColor.fields.g;
                            local_108.fields.m_DisabledColor.fields.b =
                                 (pUVar10->fields).m_DisabledColor.fields.b;
                            local_108.fields.m_DisabledColor.fields.a =
                                 (pUVar10->fields).m_DisabledColor.fields.a;
                            local_108.fields.m_ColorMultiplier = (pUVar10->fields).m_ColorMultiplier;
                            local_108.fields.m_FadeDuration = (pUVar10->fields).m_FadeDuration;
                            UnityEngine_UI_Selectable__set_colors
                                      ((UnityEngine_UI_Selectable_o *)__this_01,&local_108,(MethodInfo *)0x0);
                            pUVar11 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)__this_01,
                                                 (MethodInfo_6651A0 *)
                                                 MethodInfo_UnityEngine_Component_GetComponent_Image);
                            pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            pUVar9 = UI_UIManager__GetThemeColor
                                               ((UnityEngine_Color_o *)&local_118,pSVar8,"MainBody"
                                                ,"ScrollbarBackgroundColor","DefaultPanel",(MethodInfo *)0x0
                                               );
                            if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
                              local_118.r = (pUVar9->fields).r;
                              local_118.g = (pUVar9->fields).g;
                              local_118.b = (pUVar9->fields).b;
                              local_118.a = (pUVar9->fields).a;
                              (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                        (pUVar11,(UnityEngine_Color_o *)&local_118,
                                         (pUVar11->klass->vtable)._23_set_color.method);
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
label_1821b9536:
  ThrowNullReferenceException();
}


// UI.BasePanel$$SetPanelPadding
// il2cpp: void UI_BasePanel__SetPanelPadding (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, const MethodInfo* method);
// 0x1821ba700

void UI_BasePanel__SetPanelPadding(UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,MethodInfo *method)

{
  int32_t left;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar1;
  UnityEngine_RectOffset_o *__this_00;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  float value;
  
  if (Il2CppMethodInitialized_184346eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    Il2CppMethodInitialized_184346eca = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (panel,(MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    left = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
    right = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
    UnityEngine_RectOffset___ctor_2ed1030(__this_00,left,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding
                ((UnityEngine_UI_LayoutGroup_o *)pUVar1,__this_00,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__GetComponent_object_
                         (panel,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
      value = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                        (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
      if (pUVar1 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar1,value,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_GameObject__GetComponent_object_
                           (panel,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
        pSVar2 = (*(__this->klass->vtable)._12_get_PanelAlignment.methodPtr)
                           (__this,(__this->klass->vtable)._12_get_PanelAlignment.method);
        if (pUVar1 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)pUVar1,(int32_t)pSVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$GetPanelWidth
// il2cpp: float UI_BasePanel__GetPanelWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821b9e20

float UI_BasePanel__GetPanelWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                           (__this,(__this->klass->vtable)._33_GetWidth.method);
  return fVar1;
}


// UI.BasePanel$$GetPanelHeight
// il2cpp: float UI_BasePanel__GetPanelHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180a36e60

float
UI_BasePanel__GetPanelHeight(UI_BasePanel_o* __this, MethodInfo* method)

{
  Unity_VisualScripting_IGraph_o *pUVar1;
  
  pUVar1 = (Unity_VisualScripting_IGraph_o *)
           (*(__this->klass->vtable)._34_DefaultGraph.methodPtr)
                     (__this,(__this->klass->vtable)._34_DefaultGraph.method);
  return pUVar1;
}


// UI.BasePanel$$GetPanelVerticalOffset
// il2cpp: float UI_BasePanel__GetPanelVerticalOffset (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BasePanel__GetPanelVerticalOffset(UI_BasePanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BasePanel$$GetWidth
// il2cpp: float UI_BasePanel__GetWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821b8ea0

float
UI_BasePanel__GetWidth(UI_BasePanel_o* __this, MethodInfo* method)

{
  (*(__this->klass->vtable)._5_Cancel.methodPtr)(__this,(__this->klass->vtable)._5_Cancel.method);
  return;
}


// UI.BasePanel$$GetHeight
// il2cpp: float UI_BasePanel__GetHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821b9e00

float
UI_BasePanel__GetHeight_21b9e00(UI_BasePanel_o* __this, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (*(__this->klass->vtable)._6_Eval.methodPtr)(__this,(__this->klass->vtable)._6_Eval.method);
  return pIVar1;
}


// UI.BasePanel$$GetPhysicalWidth
// il2cpp: float UI_BasePanel__GetPhysicalWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821b9f00

float UI_BasePanel__GetPhysicalWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Canvas_o *__this_02;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346ecb = '\x01';
  }
  __this_01 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 != (UI_BaseMenu_o *)0x0) {
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
        fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
        return fVar2 * UVar1.fields.x;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$GetPhysicalHeight
// il2cpp: float UI_BasePanel__GetPhysicalHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821b9e40

float UI_BasePanel__GetPhysicalHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Canvas_o *__this_02;
  float fVar2;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_184346ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346ecc = '\x01';
  }
  __this_01 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_00 != (UI_BaseMenu_o *)0x0) {
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
        fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
        fStackX_1c = UVar1.fields.y;
        return fVar2 * fStackX_1c;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePanel$$.ctor
// il2cpp: void UI_BasePanel___ctor (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x1821bb2e0

void UI_BasePanel___ctor(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_string__Type__o *__this_02;
  
  if (Il2CppMethodInitialized_184346ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Type);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184346ecd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
  (__this->fields)._popups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_ctor);
  (__this->fields)._categoryPanelTypes = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryPanelTypes,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


