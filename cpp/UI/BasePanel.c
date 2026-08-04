// Type: UI.BasePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BasePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePanel.cs
// --------------------------------

// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$.ctor
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4344550

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
// 0x4344570

void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_IDisposable_Dispose
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndEnableCategoryPanel_d__51__MoveNext (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x4344580

bool_conflict
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__MoveNext
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePanel_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar4;
  Il2CppObject *__this_01;
  undefined8 uVar5;
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *pUVar6;
  
  pUVar6 = __this;
  if (g_data_057ae0d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUVar6 = (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)&TypeInfo_WaitForEndOfFrame;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0d5 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
  }
  pUVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    pUVar3 = (pUVar2->fields).MaskBackground;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar3 = (pUVar2->fields).MaskBackground;
      pUVar6 = (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)0x0;
      if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043446b7;
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (0,0,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
    }
    __this_00 = (pUVar2->fields)._currentCategoryPanel;
    pUVar6 = (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
      return 0;
    }
  }
label_043446b7:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pUVar6->fields).__2__current;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x43446c0

Il2CppObject *
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x43446d0

void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_Reset
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

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


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_get_Current (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x4344710

Il2CppObject *
UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_get_Current
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$.ctor
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4344720

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
// 0x4344740

void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_IDisposable_Dispose
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__MoveNext (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x4344750

bool_conflict
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__MoveNext
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  bool_conflict bVar2;
  UI_BasePanel_o *__this_01;
  
  if (g_data_057ae0d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    g_data_057ae0d6 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (UI_BasePanel_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this_01->fields).m_CancellationTokenSource;
    }
    bVar2 = 0;
    UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x4344800

Il2CppObject *
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x4344810

void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_Reset
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

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


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_get_Current (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x4344850

Il2CppObject *
UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_get_Current
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel$$get_ThemePanel
// il2cpp: System_String_o* UI_BasePanel__get_ThemePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43253c0

System_String_o * UI_BasePanel__get_ThemePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae017 == '\0') {
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    g_data_057ae017 = '\x01';
  }
  return "DefaultPanel";
}


// UI.BasePanel$$get_Width
// il2cpp: float UI_BasePanel__get_Width (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43253f0

float UI_BasePanel__get_Width(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.BasePanel$$get_Height
// il2cpp: float UI_BasePanel__get_Height (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325400

float UI_BasePanel__get_Height(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.BasePanel$$get_BorderVerticalPadding
// il2cpp: float UI_BasePanel__get_BorderVerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325410

float UI_BasePanel__get_BorderVerticalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$get_BorderHorizontalPadding
// il2cpp: float UI_BasePanel__get_BorderHorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325420

float UI_BasePanel__get_BorderHorizontalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$get_VerticalPadding
// il2cpp: int32_t UI_BasePanel__get_VerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325430

int32_t UI_BasePanel__get_VerticalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.BasePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_BasePanel__get_HorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325440

int32_t UI_BasePanel__get_HorizontalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.BasePanel$$get_VerticalSpacing
// il2cpp: float UI_BasePanel__get_VerticalSpacing (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325450

float UI_BasePanel__get_VerticalSpacing(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 30.0;
}


// UI.BasePanel$$get_PanelAlignment
// il2cpp: int32_t UI_BasePanel__get_PanelAlignment (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325460

int32_t UI_BasePanel__get_PanelAlignment(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_DoublePanel
// il2cpp: bool UI_BasePanel__get_DoublePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325470

bool_conflict UI_BasePanel__get_DoublePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_DoublePanelDivider
// il2cpp: bool UI_BasePanel__get_DoublePanelDivider (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325480

bool_conflict UI_BasePanel__get_DoublePanelDivider(UI_BasePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.BasePanel$$get_ScrollBar
// il2cpp: bool UI_BasePanel__get_ScrollBar (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4325490

bool_conflict UI_BasePanel__get_ScrollBar(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_CategoryPanel
// il2cpp: bool UI_BasePanel__get_CategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43254a0

bool_conflict UI_BasePanel__get_CategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_UseLastCategory
// il2cpp: bool UI_BasePanel__get_UseLastCategory (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43254b0

bool_conflict UI_BasePanel__get_UseLastCategory(UI_BasePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.BasePanel$$get_HasPremadeContent
// il2cpp: bool UI_BasePanel__get_HasPremadeContent (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43254c0

bool_conflict UI_BasePanel__get_HasPremadeContent(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_BasePanel__get_DefaultCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43254d0

System_String_o * UI_BasePanel__get_DefaultCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.BasePanel$$OnEnable
// il2cpp: void UI_BasePanel__OnEnable (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43254f0

void UI_BasePanel__OnEnable(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o value;
  char cVar3;
  byte bVar4;
  bool_conflict bVar5;
  uint uVar6;
  int32_t iVar7;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_Transform_o *pUVar8;
  UI_BasePanel_o *pUVar9;
  UI_BasePanel_o *pUVar10;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_RectTransform_o *__this_01;
  UI_BasePanel_o *pUVar12;
  UnityEngine_UI_RawImage_o *pUVar13;
  UI_BasePanel_o **ppUVar14;
  UnityEngine_Texture_o *value_00;
  System_Type_o *t;
  System_String_o *pSVar15;
  undefined8 uVar16;
  Il2CppObject *pIVar17;
  System_Object_array *pSVar18;
  UI_BasePanel_o **ppUVar19;
  UnityEngine_UI_LayoutGroup_o *pUVar20;
  UnityEngine_RectOffset_o *__this_02;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_03;
  MethodInfo_255A0F0 **method_00;
  char extraout_DL;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  uint uVar21;
  UI_BasePanel_o *pUVar22;
  UnityEngine_Transform_o **ppUVar23;
  UI_BasePanel_o **ppUVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Color_o UVar27;
  
  if (g_data_057ae018 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Border");
    g_data_057ae018 = '\x01';
  }
  pUVar12 = (UI_BasePanel_o *)0x0;
  pUVar22 = __this;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = UnityEngine_Transform__Find(pUVar8,(System_String_o *)"Border",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar12 = (UI_BasePanel_o *)0x0;
      pUVar22 = __this;
      pUVar9 = (UI_BasePanel_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (((pUVar9 == (UI_BasePanel_o *)0x0) ||
          (pUVar12 = "Border",
          pUVar10 = (UI_BasePanel_o *)
                    UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"Border",
                               (MethodInfo *)0x0), pUVar22 = pUVar9, pUVar10 == (UI_BasePanel_o *)0x0)) ||
         (pUVar12 = MethodInfo_CanvasGroup_GetComponent_CanvasGroup,
         __this_00 = (UnityEngine_CanvasGroup_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
         pUVar22 = pUVar10, __this_00 == (UnityEngine_CanvasGroup_o *)0x0)) goto label_0432561c;
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,0,(MethodInfo *)0x0);
    }
    x = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar12 = (UI_BasePanel_o *)0x0;
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar11 = (__this->fields)._currentCategoryPanel;
    pUVar22 = (UI_BasePanel_o *)0x0;
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
      return;
    }
  }
label_0432561c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae019 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae019 = '\x01';
  }
  (pUVar22->fields).Parent = pUVar12;
  il2cpp_runtime_helper_022b4080(&(pUVar22->fields).Parent);
  uVar6 = 0;
  ppUVar14 = (UI_BasePanel_o **)pUVar22;
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = &MethodInfo_RectTransform_GetComponent_RectTransform;
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
    fVar25 = (float)(*(pUVar22->klass->vtable)._33_GetWidth.methodPtr)
                              (pUVar22,(pUVar22->klass->vtable)._33_GetWidth.method);
    uVar6 = (uint)(pUVar22->klass->vtable)._34_GetHeight.method;
    ppUVar14 = (UI_BasePanel_o **)pUVar22;
    fVar26 = (float)(*(pUVar22->klass->vtable)._34_GetHeight.methodPtr)();
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar26;
      value.fields.x = fVar25;
      UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
      uVar6 = 0;
      ppUVar14 = (UI_BasePanel_o **)pUVar22;
      pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = UnityEngine_Transform__Find(pUVar8,"Background",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04325876:
          cVar3 = (*(pUVar22->klass->vtable)._16_get_CategoryPanel.methodPtr)
                            (pUVar22,(pUVar22->klass->vtable)._16_get_CategoryPanel.method);
          if ((cVar3 != '\0') ||
             (cVar3 = (*(pUVar22->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                                (pUVar22,(pUVar22->klass->vtable)._18_get_HasPremadeContent.method),
             cVar3 != '\0')) {
            cVar3 = (*(pUVar22->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                              (pUVar22,(pUVar22->klass->vtable)._18_get_HasPremadeContent.method);
            if (cVar3 != '\0') {
              (*(pUVar22->klass->vtable)._24_SetupPremadePanel.methodPtr)
                        (pUVar22,(pUVar22->klass->vtable)._24_SetupPremadePanel.method);
            }
label_04325a4f:
            (*(pUVar22->klass->vtable)._25_SetupPopups.methodPtr)
                      (pUVar22,(pUVar22->klass->vtable)._25_SetupPopups.method);
            cVar3 = (*(pUVar22->klass->vtable)._16_get_CategoryPanel.methodPtr)
                              (pUVar22,(pUVar22->klass->vtable)._16_get_CategoryPanel.method);
            if (cVar3 != '\0') {
              (*(pUVar22->klass->vtable)._27_RegisterCategoryPanels.methodPtr)(pUVar22);
              t = System_Object__GetType((Il2CppObject *)pUVar22,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar15 = UI_UIManager__GetLastcategory(t,(MethodInfo *)0x0);
              cVar3 = (*(pUVar22->klass->vtable)._17_get_UseLastCategory.methodPtr)
                                (pUVar22,(pUVar22->klass->vtable)._17_get_UseLastCategory.method);
              if ((cVar3 != '\0') &&
                 (bVar5 = System_String__op_Inequality
                                    (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                     (MethodInfo *)0x0), (char)bVar5 != '\0')) {
                (*(pUVar22->klass->vtable)._28_SetCategoryPanel.methodPtr)
                          (pUVar22,pSVar15,(pUVar22->klass->vtable)._28_SetCategoryPanel.method);
                iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
                goto joined_r0x04325b6b;
              }
              uVar16 = (*(pUVar22->klass->vtable)._19_get_DefaultCategoryPanel.methodPtr)
                                 (pUVar22,(pUVar22->klass->vtable)._19_get_DefaultCategoryPanel.method);
              (*(pUVar22->klass->vtable)._28_SetCategoryPanel.methodPtr)
                        (pUVar22,uVar16,(pUVar22->klass->vtable)._28_SetCategoryPanel.method);
            }
            iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x04325b6b:
            if (iVar2 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
            return;
          }
          cVar3 = (*(pUVar22->klass->vtable)._13_get_DoublePanel.methodPtr)
                            (pUVar22,(pUVar22->klass->vtable)._13_get_DoublePanel.method);
          uVar6 = (*(pUVar22->klass->vtable)._15_get_ScrollBar.methodPtr)
                            (pUVar22,(pUVar22->klass->vtable)._15_get_ScrollBar.method);
          if (cVar3 == '\0') {
            uVar6 = uVar6 & 0xff;
            ppUVar14 = (UI_BasePanel_o **)pUVar22;
            pUVar12 = (UI_BasePanel_o *)UI_BasePanel__CreateSinglePanel(pUVar22,uVar6,method_01);
            if (g_data_057ae023 == '\0') {
              ppUVar14 = &"ScrollView/Panel";
              il2cpp_runtime_helper_023445d0();
              g_data_057ae023 = '\x01';
            }
            if (pUVar12 != (UI_BasePanel_o *)0x0) {
              uVar6 = 0;
              pUVar8 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
              ppUVar14 = (UI_BasePanel_o **)pUVar12;
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0)
                ;
                ppUVar23 = &(pUVar22->fields).SinglePanel;
                (pUVar22->fields).SinglePanel = pUVar8;
label_04325a47:
                il2cpp_runtime_helper_022b4080(ppUVar23,pUVar8);
                goto label_04325a4f;
              }
            }
          }
          else {
            bVar4 = (*(pUVar22->klass->vtable)._14_get_DoublePanelDivider.methodPtr)
                              (pUVar22,(pUVar22->klass->vtable)._14_get_DoublePanelDivider.method);
            uVar6 = uVar6 & 0xff;
            ppUVar14 = (UI_BasePanel_o **)pUVar22;
            pUVar12 = (UI_BasePanel_o *)
                      UI_BasePanel__CreateDoublePanel(pUVar22,uVar6,(uint)bVar4,(MethodInfo *)method_00);
            if (g_data_057ae024 == '\0') {
              ppUVar14 = &"ScrollView/LeftPanel";
              il2cpp_runtime_helper_023445d0();
              g_data_057ae024 = '\x01';
            }
            if (pUVar12 != (UI_BasePanel_o *)0x0) {
              uVar6 = 0;
              ppUVar14 = (UI_BasePanel_o **)pUVar12;
              pUVar8 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0)
                ;
                (pUVar22->fields).DoublePanelLeft = pUVar8;
                il2cpp_runtime_helper_022b4080(&(pUVar22->fields).DoublePanelLeft);
                if (g_data_057ae025 == '\0') {
                  il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
                  g_data_057ae025 = '\x01';
                }
                uVar6 = 0;
                pUVar8 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
                ppUVar14 = (UI_BasePanel_o **)pUVar12;
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  pUVar8 = UnityEngine_Transform__Find
                                     (pUVar8,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
                  ppUVar23 = &(pUVar22->fields).DoublePanelRight;
                  (pUVar22->fields).DoublePanelRight = pUVar8;
                  goto label_04325a47;
                }
              }
            }
          }
        }
        else {
          uVar6 = 0;
          ppUVar14 = (UI_BasePanel_o **)pUVar22;
          pUVar12 = (UI_BasePanel_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0)
          ;
          if (pUVar12 != (UI_BasePanel_o *)0x0) {
            pSVar15 = "Background";
            pUVar8 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar12,"Background",(MethodInfo *)0x0);
            uVar6 = (uint)pSVar15;
            ppUVar14 = (UI_BasePanel_o **)pUVar12;
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              pUVar13 = (UnityEngine_UI_RawImage_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar8,MethodInfo_RawImage_GetComponent_RawImage);
              ppUVar1 = &(pUVar22->fields).MaskBackground;
              (pUVar22->fields).MaskBackground = pUVar13;
              il2cpp_runtime_helper_022b4080(ppUVar1,pUVar13);
              pUVar13 = (pUVar22->fields).MaskBackground;
              ppUVar14 = (UI_BasePanel_o **)
                         (*(pUVar22->klass->vtable)._4_get_ThemePanel.methodPtr)
                                   (pUVar22,(pUVar22->klass->vtable)._4_get_ThemePanel.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo_255A0F0 **)"DefaultPanel";
              pUVar12 = "MainBody";
              value_00 = (UnityEngine_Texture_o *)
                         UI_UIManager__GetThemeTexture
                                   ((System_String_o *)ppUVar14,(System_String_o *)"MainBody","BackgroundTexture",
                                    (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
              uVar6 = (uint)pUVar12;
              if (pUVar13 != (UnityEngine_UI_RawImage_o *)0x0) {
                UnityEngine_UI_RawImage__set_texture(pUVar13,value_00,(MethodInfo *)0x0);
                uVar6 = (uint)value_00;
                pUVar13 = *ppUVar1;
                ppUVar14 = (UI_BasePanel_o **)(UI_BasePanel_o *)0x0;
                if (pUVar13 != (UnityEngine_UI_RawImage_o *)0x0) {
                  (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                            (0,0x3d4ccccd00000000,pUVar13,(pUVar13->klass->vtable)._23_set_color.method);
                  goto label_04325876;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae027 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"LineColor");
    il2cpp_runtime_helper_023445d0(&"ScrollView/VerticalLine");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae027 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar24 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar22 = "Prefabs/Panels/DoublePanelContent";
  pUVar12 = (UI_BasePanel_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)ppUVar24,(System_String_o *)"Prefabs/Panels/DoublePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae024 == '\0') {
    ppUVar24 = &"ScrollView/LeftPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae024 = '\x01';
  }
  if (pUVar12 != (UI_BasePanel_o *)0x0) {
    pUVar22 = (UI_BasePanel_o *)0x0;
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    pUVar9 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    if ((pUVar9 != (UI_BasePanel_o *)0x0) &&
       (pUVar22 = "ScrollView/LeftPanel",
       pUVar8 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0
                          ), ppUVar24 = (UI_BasePanel_o **)pUVar9, pUVar8 != (UnityEngine_Transform_o *)0x0))
    {
      pIVar17 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      pUVar22 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._30_GetPanelWidth.method;
      ppUVar24 = ppUVar14;
      fVar25 = (float)(*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._30_GetPanelWidth.methodPtr)();
      if (pIVar17 != (Il2CppObject *)0x0) {
        (*pIVar17->klass->vtable[0x24].methodPtr)(fVar25 * 0.5,pIVar17);
        if (g_data_057ae025 == '\0') {
          il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
          g_data_057ae025 = '\x01';
        }
        pUVar22 = (UI_BasePanel_o *)0x0;
        ppUVar24 = (UI_BasePanel_o **)pUVar12;
        pUVar9 = (UI_BasePanel_o *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
        if ((pUVar9 != (UI_BasePanel_o *)0x0) &&
           (pUVar22 = "ScrollView/RightPanel",
           pUVar8 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/RightPanel",
                               (MethodInfo *)0x0), ppUVar24 = (UI_BasePanel_o **)pUVar9,
           pUVar8 != (UnityEngine_Transform_o *)0x0)) {
          pIVar17 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar8,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pUVar22 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._30_GetPanelWidth.method;
          ppUVar24 = ppUVar14;
          fVar25 = (float)(*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._30_GetPanelWidth.methodPtr)();
          if (pIVar17 != (Il2CppObject *)0x0) {
            (*pIVar17->klass->vtable[0x24].methodPtr)(fVar25 * 0.5,pIVar17);
            pUVar22 = (UI_BasePanel_o *)0x0;
            ppUVar24 = (UI_BasePanel_o **)pUVar12;
            pUVar9 = (UI_BasePanel_o *)
                     UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
            if ((pUVar9 != (UI_BasePanel_o *)0x0) &&
               (pUVar22 = "ScrollView/VerticalLine",
               pUVar10 = (UI_BasePanel_o *)
                         UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/VerticalLine",
                                    (MethodInfo *)0x0), ppUVar24 = (UI_BasePanel_o **)pUVar9,
               pUVar10 != (UI_BasePanel_o *)0x0)) {
              if (extraout_DL == '\0') {
                pUVar22 = (UI_BasePanel_o *)0x0;
                pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                ppUVar24 = (UI_BasePanel_o **)pUVar10;
                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
label_04325ef4:
                  (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._29_BindPanel.methodPtr)
                            (ppUVar14,pUVar12,(ulong)uVar6 & 0xff,
                             (((UI_BasePanel_o *)ppUVar14)->klass->vtable)._29_BindPanel.method);
                  if (g_data_057ae024 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
                    g_data_057ae024 = '\x01';
                  }
                  pUVar22 = (UI_BasePanel_o *)0x0;
                  ppUVar24 = (UI_BasePanel_o **)pUVar12;
                  pUVar9 = (UI_BasePanel_o *)
                           UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
                  if ((pUVar9 != (UI_BasePanel_o *)0x0) &&
                     (pUVar22 = "ScrollView/LeftPanel",
                     pUVar8 = UnityEngine_Transform__Find
                                        ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/LeftPanel",
                                         (MethodInfo *)0x0), ppUVar24 = (UI_BasePanel_o **)pUVar9,
                     pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                    pUVar11 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar14,pUVar11,method_02);
                    if (g_data_057ae025 == '\0') {
                      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
                      g_data_057ae025 = '\x01';
                    }
                    pUVar22 = (UI_BasePanel_o *)0x0;
                    pUVar9 = (UI_BasePanel_o *)
                             UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
                    ppUVar24 = (UI_BasePanel_o **)pUVar12;
                    if ((pUVar9 != (UI_BasePanel_o *)0x0) &&
                       (pUVar22 = "ScrollView/RightPanel",
                       pUVar8 = UnityEngine_Transform__Find
                                          ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/RightPanel",
                                           (MethodInfo *)0x0), ppUVar24 = (UI_BasePanel_o **)pUVar9,
                       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar11 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar14,pUVar11,method_03);
                      return;
                    }
                  }
                }
              }
              else {
                pIVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
                ppUVar24 = (UI_BasePanel_o **)
                           (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (ppUVar14,(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._4_get_ThemePanel
                                               .method);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar22 = "MainBody";
                UVar27 = UI_UIManager__GetThemeColor
                                   ((System_String_o *)ppUVar24,(System_String_o *)"MainBody","LineColor",
                                    (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                if (pIVar17 != (Il2CppObject *)0x0) {
                  (*pIVar17->klass->vtable[0x17].methodPtr)(UVar27.fields.r,UVar27.fields._8_8_,pIVar17);
                  pUVar22 = (UI_BasePanel_o *)0x0;
                  pUVar11 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                  ppUVar24 = (UI_BasePanel_o **)pUVar10;
                  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScaler);
                    goto label_04325ef4;
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
  pUVar12 = pUVar22;
  if (g_data_057ae024 == '\0') {
    ppUVar24 = &"ScrollView/LeftPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae024 = '\x01';
  }
  if (pUVar22 != (UI_BasePanel_o *)0x0) {
    pUVar12 = (UI_BasePanel_o *)0x0;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar22,(MethodInfo *)0x0);
    ppUVar24 = (UI_BasePanel_o **)pUVar22;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar22 = pUVar12;
  if (g_data_057ae025 == '\0') {
    ppUVar24 = &"ScrollView/RightPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae025 = '\x01';
  }
  uVar6 = (uint)pUVar22;
  if (pUVar12 != (UI_BasePanel_o *)0x0) {
    uVar6 = 0;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae026 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/SinglePanelContent");
    g_data_057ae026 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar14 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar22 = "Prefabs/Panels/SinglePanelContent";
  pUVar12 = (UI_BasePanel_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)ppUVar14,(System_String_o *)"Prefabs/Panels/SinglePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae023 == '\0') {
    ppUVar14 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar12 != (UI_BasePanel_o *)0x0) {
    pUVar22 = (UI_BasePanel_o *)0x0;
    ppUVar14 = (UI_BasePanel_o **)pUVar12;
    pUVar9 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    if ((pUVar9 != (UI_BasePanel_o *)0x0) &&
       (pUVar22 = "ScrollView/Panel",
       pUVar8 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0
                          ), ppUVar14 = (UI_BasePanel_o **)pUVar9, pUVar8 != (UnityEngine_Transform_o *)0x0))
    {
      pIVar17 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      pUVar22 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._30_GetPanelWidth.method;
      ppUVar14 = ppUVar24;
      (*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._30_GetPanelWidth.methodPtr)();
      if (pIVar17 != (Il2CppObject *)0x0) {
        (*pIVar17->klass->vtable[0x24].methodPtr)(pIVar17,pIVar17->klass->vtable[0x24].method);
        (*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._29_BindPanel.methodPtr)
                  (ppUVar24,pUVar12,(ulong)uVar6 & 0xff,
                   (((UI_BasePanel_o *)ppUVar24)->klass->vtable)._29_BindPanel.method);
        if (g_data_057ae023 == '\0') {
          il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
          g_data_057ae023 = '\x01';
        }
        pUVar22 = (UI_BasePanel_o *)0x0;
        pUVar9 = (UI_BasePanel_o *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
        ppUVar14 = (UI_BasePanel_o **)pUVar12;
        if ((pUVar9 != (UI_BasePanel_o *)0x0) &&
           (pUVar22 = "ScrollView/Panel",
           pUVar8 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/Panel",
                               (MethodInfo *)0x0), ppUVar14 = (UI_BasePanel_o **)pUVar9,
           pUVar8 != (UnityEngine_Transform_o *)0x0)) {
          pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0)
          ;
          UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar24,pUVar11,method_04);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae023 == '\0') {
    ppUVar14 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if ((pUVar22 != (UI_BasePanel_o *)0x0) &&
     (pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar22,(MethodInfo *)0x0),
     ppUVar14 = (UI_BasePanel_o **)pUVar22, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppUVar14,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppUVar14,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar18 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)ppUVar14,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar18 != (System_Object_array *)0x0) {
    uVar6 = (uint)pSVar18->max_length;
    if (0 < (int)uVar6) {
      uVar21 = 0;
      do {
        if (uVar6 <= uVar21) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        ppUVar14 = (UI_BasePanel_o **)pSVar18->m_Items[(int)uVar21];
        if ((UI_BasePanel_o *)ppUVar14 == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._6_get_Height.methodPtr)
                  (ppUVar14,(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._6_get_Height.method);
        uVar21 = uVar21 + 1;
        uVar6 = (uint)pSVar18->max_length;
      } while ((int)uVar21 < (int)uVar6);
    }
    return;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar3 = (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._13_get_DoublePanel.methodPtr)(ppUVar14);
  pUVar22 = (UI_BasePanel_o *)0x0;
  ppUVar24 = ppUVar14;
  pUVar12 = (UI_BasePanel_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)ppUVar14,(MethodInfo *)0x0);
  if (pUVar12 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar3 == '\0') {
    pUVar22 = "SinglePanelContent";
    pUVar9 = (UI_BasePanel_o *)
             UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar12,(System_String_o *)"SinglePanelContent",(MethodInfo *)0x0);
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    if (pUVar9 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar22 = (UI_BasePanel_o *)0x0;
    pUVar12 = (UI_BasePanel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    ppUVar24 = (UI_BasePanel_o **)pUVar9;
    if (g_data_057ae023 == '\0') {
      ppUVar24 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar12 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar22 = (UI_BasePanel_o *)0x0;
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppUVar19 = &"ScrollView/Panel";
    pUVar8 = UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)ppUVar14)->fields).SinglePanel = pUVar8;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)ppUVar14)->fields).SinglePanel,pUVar8);
    bVar4 = (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (ppUVar14,(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._29_BindPanel.methodPtr)
              (ppUVar14,pUVar12,(ulong)bVar4,
               (((UI_BasePanel_o *)ppUVar14)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    pUVar22 = "DoublePanelContent";
    ppUVar19 = (UI_BasePanel_o **)
               UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar12,(System_String_o *)"DoublePanelContent",(MethodInfo *)0x0
                         );
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    if ((UI_BasePanel_o *)ppUVar19 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar22 = (UI_BasePanel_o *)0x0;
    pUVar12 = (UI_BasePanel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppUVar19,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppUVar19 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppUVar24 = ppUVar19;
    if (pUVar12 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar22 = (UI_BasePanel_o *)0x0;
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar8 = UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)ppUVar14)->fields).DoublePanelLeft = pUVar8;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)ppUVar14)->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    pUVar22 = (UI_BasePanel_o *)0x0;
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppUVar19 = &"ScrollView/RightPanel";
    pUVar8 = UnityEngine_Transform__Find(pUVar8,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)ppUVar14)->fields).DoublePanelRight = pUVar8;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)ppUVar14)->fields).DoublePanelRight,pUVar8);
    bVar4 = (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (ppUVar14,(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)ppUVar14)->klass->vtable)._29_BindPanel.methodPtr)
              (ppUVar14,pUVar12,(ulong)bVar4,
               (((UI_BasePanel_o *)ppUVar14)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    pUVar22 = (UI_BasePanel_o *)0x0;
    ppUVar24 = (UI_BasePanel_o **)pUVar12;
    pUVar9 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    if ((pUVar9 == (UI_BasePanel_o *)0x0) ||
       (pUVar22 = "ScrollView/LeftPanel",
       pUVar8 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0
                          ), ppUVar24 = (UI_BasePanel_o **)pUVar9, pUVar8 == (UnityEngine_Transform_o *)0x0))
    goto label_04326697;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar14,pUVar11,method_05);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  pUVar22 = (UI_BasePanel_o *)0x0;
  pUVar9 = (UI_BasePanel_o *)
           UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
  ppUVar24 = (UI_BasePanel_o **)pUVar12;
  if (pUVar9 != (UI_BasePanel_o *)0x0) {
    pUVar22 = *ppUVar19;
    pUVar8 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)pUVar22,(MethodInfo *)0x0);
    ppUVar24 = (UI_BasePanel_o **)pUVar9;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar14,pUVar11,method_06);
      return;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (pUVar22 != (UI_BasePanel_o *)0x0) {
    pUVar20 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar22,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar7 = (*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar24,(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar24,(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppUVar24,(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppUVar24,(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._9_get_VerticalPadding.method);
    __this_02 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_02,iVar7,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar20 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar20,__this_02,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar22,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      fVar25 = (float)(*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                                (ppUVar24);
      if (__this_03 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_03,fVar25,(MethodInfo *)0x0);
        pUVar20 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar22,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar7 = (*(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppUVar24,(((UI_BasePanel_o *)ppUVar24)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar20 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar20,iVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.BasePanel$$Setup
// il2cpp: void UI_BasePanel__Setup (UI_BasePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4325630

void UI_BasePanel__Setup(UI_BasePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  int iVar2;
  UnityEngine_Vector2_o value;
  char cVar3;
  byte bVar4;
  bool_conflict bVar5;
  uint uVar6;
  int32_t iVar7;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar9;
  UI_BasePanel_o *pUVar10;
  UnityEngine_UI_RawImage_o *pUVar11;
  UI_BasePanel_o **ppUVar12;
  UnityEngine_Texture_o *value_00;
  System_Type_o *t;
  System_String_o *pSVar13;
  undefined8 uVar14;
  UI_BasePanel_o *pUVar15;
  UI_BasePanel_o *pUVar16;
  Il2CppObject *pIVar17;
  UI_BasePanel_o *__this_01;
  System_Object_array *pSVar18;
  UI_BasePanel_o **ppUVar19;
  UnityEngine_UI_LayoutGroup_o *pUVar20;
  UnityEngine_RectOffset_o *__this_02;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_03;
  MethodInfo_255A0F0 **method_00;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  uint uVar21;
  UnityEngine_Transform_o **ppUVar22;
  UI_BasePanel_o **ppUVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Color_o UVar26;
  
  if (g_data_057ae019 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae019 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).Parent = parent;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Parent,parent,method);
  uVar6 = 0;
  ppUVar12 = (UI_BasePanel_o **)__this;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = &MethodInfo_RectTransform_GetComponent_RectTransform;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_RectTransform_GetComponent_RectTransform);
    fVar24 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                              (__this,(__this->klass->vtable)._33_GetWidth.method);
    uVar6 = (uint)(__this->klass->vtable)._34_GetHeight.method;
    ppUVar12 = (UI_BasePanel_o **)__this;
    fVar25 = (float)(*(__this->klass->vtable)._34_GetHeight.methodPtr)();
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar25;
      value.fields.x = fVar24;
      UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
      uVar6 = 0;
      ppUVar12 = (UI_BasePanel_o **)__this;
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        pUVar9 = UnityEngine_Transform__Find(pUVar9,"Background",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04325876:
          cVar3 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                            (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
          if ((cVar3 != '\0') ||
             (cVar3 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                                (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method),
             cVar3 != '\0')) {
            cVar3 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                              (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method);
            if (cVar3 != '\0') {
              (*(__this->klass->vtable)._24_SetupPremadePanel.methodPtr)
                        (__this,(__this->klass->vtable)._24_SetupPremadePanel.method);
            }
label_04325a4f:
            (*(__this->klass->vtable)._25_SetupPopups.methodPtr)
                      (__this,(__this->klass->vtable)._25_SetupPopups.method);
            cVar3 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                              (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
            if (cVar3 != '\0') {
              (*(__this->klass->vtable)._27_RegisterCategoryPanels.methodPtr)(__this);
              t = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = UI_UIManager__GetLastcategory(t,(MethodInfo *)0x0);
              cVar3 = (*(__this->klass->vtable)._17_get_UseLastCategory.methodPtr)
                                (__this,(__this->klass->vtable)._17_get_UseLastCategory.method);
              if ((cVar3 != '\0') &&
                 (bVar5 = System_String__op_Inequality
                                    (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                     (MethodInfo *)0x0), (char)bVar5 != '\0')) {
                (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                          (__this,pSVar13,(__this->klass->vtable)._28_SetCategoryPanel.method);
                iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
                goto joined_r0x04325b6b;
              }
              uVar14 = (*(__this->klass->vtable)._19_get_DefaultCategoryPanel.methodPtr)
                                 (__this,(__this->klass->vtable)._19_get_DefaultCategoryPanel.method);
              (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                        (__this,uVar14,(__this->klass->vtable)._28_SetCategoryPanel.method);
            }
            iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x04325b6b:
            if (iVar2 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
            return;
          }
          cVar3 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                            (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
          uVar6 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                            (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
          if (cVar3 == '\0') {
            uVar6 = uVar6 & 0xff;
            ppUVar12 = (UI_BasePanel_o **)__this;
            pUVar10 = (UI_BasePanel_o *)UI_BasePanel__CreateSinglePanel(__this,uVar6,method_01);
            if (g_data_057ae023 == '\0') {
              ppUVar12 = &"ScrollView/Panel";
              il2cpp_runtime_helper_023445d0();
              g_data_057ae023 = '\x01';
            }
            if (pUVar10 != (UI_BasePanel_o *)0x0) {
              uVar6 = 0;
              pUVar9 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
              ppUVar12 = (UI_BasePanel_o **)pUVar10;
              if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0)
                ;
                ppUVar22 = &(__this->fields).SinglePanel;
                (__this->fields).SinglePanel = pUVar9;
label_04325a47:
                il2cpp_runtime_helper_022b4080(ppUVar22,pUVar9);
                goto label_04325a4f;
              }
            }
          }
          else {
            bVar4 = (*(__this->klass->vtable)._14_get_DoublePanelDivider.methodPtr)
                              (__this,(__this->klass->vtable)._14_get_DoublePanelDivider.method);
            uVar6 = uVar6 & 0xff;
            ppUVar12 = (UI_BasePanel_o **)__this;
            pUVar10 = (UI_BasePanel_o *)
                      UI_BasePanel__CreateDoublePanel(__this,uVar6,(uint)bVar4,(MethodInfo *)method_00);
            if (g_data_057ae024 == '\0') {
              ppUVar12 = &"ScrollView/LeftPanel";
              il2cpp_runtime_helper_023445d0();
              g_data_057ae024 = '\x01';
            }
            if (pUVar10 != (UI_BasePanel_o *)0x0) {
              uVar6 = 0;
              ppUVar12 = (UI_BasePanel_o **)pUVar10;
              pUVar9 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
              if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0)
                ;
                (__this->fields).DoublePanelLeft = pUVar9;
                il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelLeft);
                if (g_data_057ae025 == '\0') {
                  il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
                  g_data_057ae025 = '\x01';
                }
                uVar6 = 0;
                pUVar9 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
                ppUVar12 = (UI_BasePanel_o **)pUVar10;
                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                  pUVar9 = UnityEngine_Transform__Find
                                     (pUVar9,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
                  ppUVar22 = &(__this->fields).DoublePanelRight;
                  (__this->fields).DoublePanelRight = pUVar9;
                  goto label_04325a47;
                }
              }
            }
          }
        }
        else {
          uVar6 = 0;
          ppUVar12 = (UI_BasePanel_o **)__this;
          pUVar10 = (UI_BasePanel_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar10 != (UI_BasePanel_o *)0x0) {
            pSVar13 = "Background";
            pUVar9 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar10,"Background",(MethodInfo *)0x0);
            uVar6 = (uint)pSVar13;
            ppUVar12 = (UI_BasePanel_o **)pUVar10;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              pUVar11 = (UnityEngine_UI_RawImage_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar9,MethodInfo_RawImage_GetComponent_RawImage);
              ppUVar1 = &(__this->fields).MaskBackground;
              (__this->fields).MaskBackground = pUVar11;
              il2cpp_runtime_helper_022b4080(ppUVar1,pUVar11);
              pUVar11 = (__this->fields).MaskBackground;
              ppUVar12 = (UI_BasePanel_o **)
                         (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo_255A0F0 **)"DefaultPanel";
              pUVar10 = "MainBody";
              value_00 = (UnityEngine_Texture_o *)
                         UI_UIManager__GetThemeTexture
                                   ((System_String_o *)ppUVar12,(System_String_o *)"MainBody","BackgroundTexture",
                                    (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
              uVar6 = (uint)pUVar10;
              if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
                UnityEngine_UI_RawImage__set_texture(pUVar11,value_00,(MethodInfo *)0x0);
                uVar6 = (uint)value_00;
                pUVar11 = *ppUVar1;
                ppUVar12 = (UI_BasePanel_o **)(UI_BasePanel_o *)0x0;
                if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
                  (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                            (0,0x3d4ccccd00000000,pUVar11,(pUVar11->klass->vtable)._23_set_color.method);
                  goto label_04325876;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae027 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"LineColor");
    il2cpp_runtime_helper_023445d0(&"ScrollView/VerticalLine");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae027 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar23 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar10 = "Prefabs/Panels/DoublePanelContent";
  pUVar15 = (UI_BasePanel_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)ppUVar23,(System_String_o *)"Prefabs/Panels/DoublePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae024 == '\0') {
    ppUVar23 = &"ScrollView/LeftPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae024 = '\x01';
  }
  if (pUVar15 != (UI_BasePanel_o *)0x0) {
    pUVar10 = (UI_BasePanel_o *)0x0;
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    pUVar16 = (UI_BasePanel_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    if ((pUVar16 != (UI_BasePanel_o *)0x0) &&
       (pUVar10 = "ScrollView/LeftPanel",
       pUVar9 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/LeftPanel",
                           (MethodInfo *)0x0), ppUVar23 = (UI_BasePanel_o **)pUVar16,
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      pIVar17 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      pUVar10 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._30_GetPanelWidth.method;
      ppUVar23 = ppUVar12;
      fVar24 = (float)(*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._30_GetPanelWidth.methodPtr)();
      if (pIVar17 != (Il2CppObject *)0x0) {
        (*pIVar17->klass->vtable[0x24].methodPtr)(fVar24 * 0.5,pIVar17);
        if (g_data_057ae025 == '\0') {
          il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
          g_data_057ae025 = '\x01';
        }
        pUVar10 = (UI_BasePanel_o *)0x0;
        ppUVar23 = (UI_BasePanel_o **)pUVar15;
        pUVar16 = (UI_BasePanel_o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0)
        ;
        if ((pUVar16 != (UI_BasePanel_o *)0x0) &&
           (pUVar10 = "ScrollView/RightPanel",
           pUVar9 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/RightPanel",
                               (MethodInfo *)0x0), ppUVar23 = (UI_BasePanel_o **)pUVar16,
           pUVar9 != (UnityEngine_Transform_o *)0x0)) {
          pIVar17 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pUVar10 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._30_GetPanelWidth.method;
          ppUVar23 = ppUVar12;
          fVar24 = (float)(*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._30_GetPanelWidth.methodPtr)();
          if (pIVar17 != (Il2CppObject *)0x0) {
            (*pIVar17->klass->vtable[0x24].methodPtr)(fVar24 * 0.5,pIVar17);
            pUVar10 = (UI_BasePanel_o *)0x0;
            ppUVar23 = (UI_BasePanel_o **)pUVar15;
            pUVar16 = (UI_BasePanel_o *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
            if ((pUVar16 != (UI_BasePanel_o *)0x0) &&
               (pUVar10 = "ScrollView/VerticalLine",
               __this_01 = (UI_BasePanel_o *)
                           UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/VerticalLine",
                                      (MethodInfo *)0x0), ppUVar23 = (UI_BasePanel_o **)pUVar16,
               __this_01 != (UI_BasePanel_o *)0x0)) {
              if (extraout_DL == '\0') {
                pUVar10 = (UI_BasePanel_o *)0x0;
                pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                ppUVar23 = (UI_BasePanel_o **)__this_01;
                if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
label_04325ef4:
                  (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._29_BindPanel.methodPtr)
                            (ppUVar12,pUVar15,(ulong)uVar6 & 0xff,
                             (((UI_BasePanel_o *)ppUVar12)->klass->vtable)._29_BindPanel.method);
                  if (g_data_057ae024 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
                    g_data_057ae024 = '\x01';
                  }
                  pUVar10 = (UI_BasePanel_o *)0x0;
                  ppUVar23 = (UI_BasePanel_o **)pUVar15;
                  pUVar16 = (UI_BasePanel_o *)
                            UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
                  if ((pUVar16 != (UI_BasePanel_o *)0x0) &&
                     (pUVar10 = "ScrollView/LeftPanel",
                     pUVar9 = UnityEngine_Transform__Find
                                        ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/LeftPanel",
                                         (MethodInfo *)0x0), ppUVar23 = (UI_BasePanel_o **)pUVar16,
                     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                    pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar12,pUVar8,method_02);
                    if (g_data_057ae025 == '\0') {
                      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
                      g_data_057ae025 = '\x01';
                    }
                    pUVar10 = (UI_BasePanel_o *)0x0;
                    pUVar16 = (UI_BasePanel_o *)
                              UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
                    ppUVar23 = (UI_BasePanel_o **)pUVar15;
                    if ((pUVar16 != (UI_BasePanel_o *)0x0) &&
                       (pUVar10 = "ScrollView/RightPanel",
                       pUVar9 = UnityEngine_Transform__Find
                                          ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/RightPanel",
                                           (MethodInfo *)0x0), ppUVar23 = (UI_BasePanel_o **)pUVar16,
                       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar8 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar12,pUVar8,method_03);
                      return;
                    }
                  }
                }
              }
              else {
                pIVar17 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
                ppUVar23 = (UI_BasePanel_o **)
                           (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (ppUVar12,(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._4_get_ThemePanel
                                               .method);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar10 = "MainBody";
                UVar26 = UI_UIManager__GetThemeColor
                                   ((System_String_o *)ppUVar23,(System_String_o *)"MainBody","LineColor",
                                    (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                if (pIVar17 != (Il2CppObject *)0x0) {
                  (*pIVar17->klass->vtable[0x17].methodPtr)(UVar26.fields.r,UVar26.fields._8_8_,pIVar17);
                  pUVar10 = (UI_BasePanel_o *)0x0;
                  pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  ppUVar23 = (UI_BasePanel_o **)__this_01;
                  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScaler);
                    goto label_04325ef4;
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
  pUVar15 = pUVar10;
  if (g_data_057ae024 == '\0') {
    ppUVar23 = &"ScrollView/LeftPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae024 = '\x01';
  }
  if (pUVar10 != (UI_BasePanel_o *)0x0) {
    pUVar15 = (UI_BasePanel_o *)0x0;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
    ppUVar23 = (UI_BasePanel_o **)pUVar10;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar15;
  if (g_data_057ae025 == '\0') {
    ppUVar23 = &"ScrollView/RightPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae025 = '\x01';
  }
  uVar6 = (uint)pUVar10;
  if (pUVar15 != (UI_BasePanel_o *)0x0) {
    uVar6 = 0;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae026 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/SinglePanelContent");
    g_data_057ae026 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar12 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar10 = "Prefabs/Panels/SinglePanelContent";
  pUVar15 = (UI_BasePanel_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)ppUVar12,(System_String_o *)"Prefabs/Panels/SinglePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae023 == '\0') {
    ppUVar12 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar15 != (UI_BasePanel_o *)0x0) {
    pUVar10 = (UI_BasePanel_o *)0x0;
    ppUVar12 = (UI_BasePanel_o **)pUVar15;
    pUVar16 = (UI_BasePanel_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    if ((pUVar16 != (UI_BasePanel_o *)0x0) &&
       (pUVar10 = "ScrollView/Panel",
       pUVar9 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/Panel",
                           (MethodInfo *)0x0), ppUVar12 = (UI_BasePanel_o **)pUVar16,
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      pIVar17 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      pUVar10 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._30_GetPanelWidth.method;
      ppUVar12 = ppUVar23;
      (*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._30_GetPanelWidth.methodPtr)();
      if (pIVar17 != (Il2CppObject *)0x0) {
        (*pIVar17->klass->vtable[0x24].methodPtr)(pIVar17,pIVar17->klass->vtable[0x24].method);
        (*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._29_BindPanel.methodPtr)
                  (ppUVar23,pUVar15,(ulong)uVar6 & 0xff,
                   (((UI_BasePanel_o *)ppUVar23)->klass->vtable)._29_BindPanel.method);
        if (g_data_057ae023 == '\0') {
          il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
          g_data_057ae023 = '\x01';
        }
        pUVar10 = (UI_BasePanel_o *)0x0;
        pUVar16 = (UI_BasePanel_o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0)
        ;
        ppUVar12 = (UI_BasePanel_o **)pUVar15;
        if ((pUVar16 != (UI_BasePanel_o *)0x0) &&
           (pUVar10 = "ScrollView/Panel",
           pUVar9 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/Panel",
                               (MethodInfo *)0x0), ppUVar12 = (UI_BasePanel_o **)pUVar16,
           pUVar9 != (UnityEngine_Transform_o *)0x0)) {
          pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
          UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar23,pUVar8,method_04);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae023 == '\0') {
    ppUVar12 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if ((pUVar10 != (UI_BasePanel_o *)0x0) &&
     (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0),
     ppUVar12 = (UI_BasePanel_o **)pUVar10, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppUVar12,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppUVar12,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar18 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)ppUVar12,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar18 != (System_Object_array *)0x0) {
    uVar6 = (uint)pSVar18->max_length;
    if (0 < (int)uVar6) {
      uVar21 = 0;
      do {
        if (uVar6 <= uVar21) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        ppUVar12 = (UI_BasePanel_o **)pSVar18->m_Items[(int)uVar21];
        if ((UI_BasePanel_o *)ppUVar12 == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._6_get_Height.methodPtr)
                  (ppUVar12,(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._6_get_Height.method);
        uVar21 = uVar21 + 1;
        uVar6 = (uint)pSVar18->max_length;
      } while ((int)uVar21 < (int)uVar6);
    }
    return;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar3 = (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._13_get_DoublePanel.methodPtr)(ppUVar12);
  pUVar10 = (UI_BasePanel_o *)0x0;
  ppUVar23 = ppUVar12;
  pUVar15 = (UI_BasePanel_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)ppUVar12,(MethodInfo *)0x0);
  if (pUVar15 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar3 == '\0') {
    pUVar10 = "SinglePanelContent";
    pUVar16 = (UI_BasePanel_o *)
              UnityEngine_Transform__Find
                        ((UnityEngine_Transform_o *)pUVar15,(System_String_o *)"SinglePanelContent",(MethodInfo *)0x0)
    ;
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    if (pUVar16 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar10 = (UI_BasePanel_o *)0x0;
    pUVar15 = (UI_BasePanel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
    ppUVar23 = (UI_BasePanel_o **)pUVar16;
    if (g_data_057ae023 == '\0') {
      ppUVar23 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar15 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar10 = (UI_BasePanel_o *)0x0;
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppUVar19 = &"ScrollView/Panel";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)ppUVar12)->fields).SinglePanel = pUVar9;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)ppUVar12)->fields).SinglePanel,pUVar9);
    bVar4 = (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (ppUVar12,(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._29_BindPanel.methodPtr)
              (ppUVar12,pUVar15,(ulong)bVar4,
               (((UI_BasePanel_o *)ppUVar12)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    pUVar10 = "DoublePanelContent";
    ppUVar19 = (UI_BasePanel_o **)
               UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar15,(System_String_o *)"DoublePanelContent",(MethodInfo *)0x0
                         );
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    if ((UI_BasePanel_o *)ppUVar19 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar10 = (UI_BasePanel_o *)0x0;
    pUVar15 = (UI_BasePanel_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppUVar19,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppUVar19 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppUVar23 = ppUVar19;
    if (pUVar15 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar10 = (UI_BasePanel_o *)0x0;
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)ppUVar12)->fields).DoublePanelLeft = pUVar9;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)ppUVar12)->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    pUVar10 = (UI_BasePanel_o *)0x0;
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppUVar19 = &"ScrollView/RightPanel";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)ppUVar12)->fields).DoublePanelRight = pUVar9;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)ppUVar12)->fields).DoublePanelRight,pUVar9);
    bVar4 = (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (ppUVar12,(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)ppUVar12)->klass->vtable)._29_BindPanel.methodPtr)
              (ppUVar12,pUVar15,(ulong)bVar4,
               (((UI_BasePanel_o *)ppUVar12)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    pUVar10 = (UI_BasePanel_o *)0x0;
    ppUVar23 = (UI_BasePanel_o **)pUVar15;
    pUVar16 = (UI_BasePanel_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    if ((pUVar16 == (UI_BasePanel_o *)0x0) ||
       (pUVar10 = "ScrollView/LeftPanel",
       pUVar9 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)"ScrollView/LeftPanel",
                           (MethodInfo *)0x0), ppUVar23 = (UI_BasePanel_o **)pUVar16,
       pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_04326697;
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar12,pUVar8,method_05);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  pUVar10 = (UI_BasePanel_o *)0x0;
  pUVar16 = (UI_BasePanel_o *)
            UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
  ppUVar23 = (UI_BasePanel_o **)pUVar15;
  if (pUVar16 != (UI_BasePanel_o *)0x0) {
    pUVar10 = *ppUVar19;
    pUVar9 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar16,(System_String_o *)pUVar10,(MethodInfo *)0x0);
    ppUVar23 = (UI_BasePanel_o **)pUVar16;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar12,pUVar8,method_06);
      return;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (pUVar10 != (UI_BasePanel_o *)0x0) {
    pUVar20 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar10,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar7 = (*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar23,(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar23,(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppUVar23,(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppUVar23,(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._9_get_VerticalPadding.method);
    __this_02 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_02,iVar7,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar20 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar20,__this_02,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar10,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      fVar24 = (float)(*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                                (ppUVar23);
      if (__this_03 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_03,fVar24,(MethodInfo *)0x0);
        pUVar20 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar10,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar7 = (*(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppUVar23,(((UI_BasePanel_o *)ppUVar23)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar20 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar20,iVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.BasePanel$$Show
// il2cpp: void UI_BasePanel__Show (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43262a0

void UI_BasePanel__Show(UI_BasePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_GameObject_o *pUVar5;
  System_Object_array *pSVar6;
  UI_BasePanel_o *pUVar7;
  System_String_o **ppSVar8;
  UnityEngine_Transform_o *pUVar9;
  UI_BasePanel_o *pUVar10;
  UnityEngine_UI_LayoutGroup_o *pUVar11;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar12;
  System_String_o *n;
  System_String_o **ppSVar13;
  float value;
  
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar6 != (System_Object_array *)0x0) {
    uVar3 = (uint)pSVar6->max_length;
    if (0 < (int)uVar3) {
      uVar12 = 0;
      do {
        if (uVar3 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this = (UI_BasePanel_o *)pSVar6->m_Items[(int)uVar12];
        if (__this == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*((Il2CppClass *)__this->klass)->vtable[6].methodPtr)
                  (__this,((Il2CppClass *)__this->klass)->vtable[6].method);
        uVar12 = uVar12 + 1;
        uVar3 = (uint)pSVar6->max_length;
      } while ((int)uVar12 < (int)uVar3);
    }
    return;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)(__this);
  n = (System_String_o *)0x0;
  ppSVar13 = (System_String_o **)__this;
  pUVar7 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar1 == '\0') {
    n = "SinglePanelContent";
    pUVar10 = (UI_BasePanel_o *)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"SinglePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar7;
    if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (g_data_057ae023 == '\0') {
      ppSVar13 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar8 = &"ScrollView/Panel";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).SinglePanel,pUVar9);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar7,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    n = "DoublePanelContent";
    ppSVar8 = (System_String_o **)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"DoublePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar7;
    if ((UI_BasePanel_o *)ppSVar8 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar8,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar8 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppSVar13 = ppSVar8;
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar8 = &"ScrollView/RightPanel";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelRight,pUVar9);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar7,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar10 = (UI_BasePanel_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = "ScrollView/LeftPanel";
    pUVar9 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar10,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,pUVar5,method_00);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  n = (System_String_o *)0x0;
  pUVar10 = (UI_BasePanel_o *)
            UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
  ppSVar13 = (System_String_o **)pUVar7;
  if (pUVar10 != (UI_BasePanel_o *)0x0) {
    n = *ppSVar8;
    pUVar9 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar10,n,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding(__this,pUVar5,method_01);
      return;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (n != (System_String_o *)0x0) {
    pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar11,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppSVar13);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar11,iVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.BasePanel$$Hide
// il2cpp: void UI_BasePanel__Hide (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43262d0

void UI_BasePanel__Hide(UI_BasePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_GameObject_o *pUVar5;
  System_Object_array *pSVar6;
  UI_BasePanel_o *pUVar7;
  System_String_o **ppSVar8;
  UnityEngine_Transform_o *pUVar9;
  UI_BasePanel_o *pUVar10;
  UnityEngine_UI_LayoutGroup_o *pUVar11;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar12;
  System_String_o *n;
  System_String_o **ppSVar13;
  float value;
  
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar6 != (System_Object_array *)0x0) {
    uVar3 = (uint)pSVar6->max_length;
    if (0 < (int)uVar3) {
      uVar12 = 0;
      do {
        if (uVar3 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this = (UI_BasePanel_o *)pSVar6->m_Items[(int)uVar12];
        if (__this == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*((Il2CppClass *)__this->klass)->vtable[6].methodPtr)
                  (__this,((Il2CppClass *)__this->klass)->vtable[6].method);
        uVar12 = uVar12 + 1;
        uVar3 = (uint)pSVar6->max_length;
      } while ((int)uVar12 < (int)uVar3);
    }
    return;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)(__this);
  n = (System_String_o *)0x0;
  ppSVar13 = (System_String_o **)__this;
  pUVar7 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar1 == '\0') {
    n = "SinglePanelContent";
    pUVar10 = (UI_BasePanel_o *)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"SinglePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar7;
    if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (g_data_057ae023 == '\0') {
      ppSVar13 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar8 = &"ScrollView/Panel";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).SinglePanel,pUVar9);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar7,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    n = "DoublePanelContent";
    ppSVar8 = (System_String_o **)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"DoublePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar7;
    if ((UI_BasePanel_o *)ppSVar8 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar8,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar8 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppSVar13 = ppSVar8;
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar8 = &"ScrollView/RightPanel";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelRight,pUVar9);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar7,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar7;
    pUVar10 = (UI_BasePanel_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = "ScrollView/LeftPanel";
    pUVar9 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar10,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,pUVar5,method_00);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  n = (System_String_o *)0x0;
  pUVar10 = (UI_BasePanel_o *)
            UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
  ppSVar13 = (System_String_o **)pUVar7;
  if (pUVar10 != (UI_BasePanel_o *)0x0) {
    n = *ppSVar8;
    pUVar9 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar10,n,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding(__this,pUVar5,method_01);
      return;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (n != (System_String_o *)0x0) {
    pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar11,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppSVar13);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar11,iVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.BasePanel$$SyncSettingElements
// il2cpp: void UI_BasePanel__SyncSettingElements (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4326310

void UI_BasePanel__SyncSettingElements(UI_BasePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  System_Object_array *pSVar5;
  UI_BasePanel_o *pUVar6;
  System_String_o **ppSVar7;
  UnityEngine_Transform_o *pUVar8;
  UI_BasePanel_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_LayoutGroup_o *pUVar11;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar12;
  System_String_o *n;
  System_String_o **ppSVar13;
  float value;
  
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar5 != (System_Object_array *)0x0) {
    uVar3 = (uint)pSVar5->max_length;
    if (0 < (int)uVar3) {
      uVar12 = 0;
      do {
        if (uVar3 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this = (UI_BasePanel_o *)pSVar5->m_Items[(int)uVar12];
        if (__this == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*((Il2CppClass *)__this->klass)->vtable[6].methodPtr)
                  (__this,((Il2CppClass *)__this->klass)->vtable[6].method);
        uVar12 = uVar12 + 1;
        uVar3 = (uint)pSVar5->max_length;
      } while ((int)uVar12 < (int)uVar3);
    }
    return;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)(__this);
  n = (System_String_o *)0x0;
  ppSVar13 = (System_String_o **)__this;
  pUVar6 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar1 == '\0') {
    n = "SinglePanelContent";
    pUVar9 = (UI_BasePanel_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"SinglePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar6;
    if (pUVar9 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar9;
    if (g_data_057ae023 == '\0') {
      ppSVar13 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar6;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar7 = &"ScrollView/Panel";
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).SinglePanel,pUVar8);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar6,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    n = "DoublePanelContent";
    ppSVar7 = (System_String_o **)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"DoublePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar6;
    if ((UI_BasePanel_o *)ppSVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar7,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar7 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppSVar13 = ppSVar7;
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar6;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar6;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar7 = &"ScrollView/RightPanel";
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelRight,pUVar8);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar6,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar6;
    pUVar9 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar9 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = "ScrollView/LeftPanel";
    pUVar8 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar9,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar9;
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,pUVar10,method_00);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  n = (System_String_o *)0x0;
  pUVar9 = (UI_BasePanel_o *)
           UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
  ppSVar13 = (System_String_o **)pUVar6;
  if (pUVar9 != (UI_BasePanel_o *)0x0) {
    n = *ppSVar7;
    pUVar8 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar9,n,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar9;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding(__this,pUVar10,method_01);
      return;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (n != (System_String_o *)0x0) {
    pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar11,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppSVar13);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar11,iVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.BasePanel$$SetupPremadePanel
// il2cpp: void UI_BasePanel__SetupPremadePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43263a0

void UI_BasePanel__SetupPremadePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  int32_t iVar3;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UI_BasePanel_o *pUVar4;
  System_String_o **ppSVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_BasePanel_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_LayoutGroup_o *pUVar9;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *n;
  System_String_o **ppSVar10;
  float value;
  
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)(__this);
  n = (System_String_o *)0x0;
  ppSVar10 = (System_String_o **)__this;
  pUVar4 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar1 == '\0') {
    n = "SinglePanelContent";
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar4,"SinglePanelContent",(MethodInfo *)0x0);
    ppSVar10 = (System_String_o **)pUVar4;
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar4 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    ppSVar10 = (System_String_o **)pUVar7;
    if (g_data_057ae023 == '\0') {
      ppSVar10 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar4 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar10 = (System_String_o **)pUVar4;
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar5 = &"ScrollView/Panel";
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).SinglePanel,pUVar6);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar4,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    n = "DoublePanelContent";
    ppSVar5 = (System_String_o **)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar4,"DoublePanelContent",(MethodInfo *)0x0);
    ppSVar10 = (System_String_o **)pUVar4;
    if ((UI_BasePanel_o *)ppSVar5 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar4 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar5,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar5 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppSVar10 = ppSVar5;
    if (pUVar4 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar10 = (System_String_o **)pUVar4;
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar10 = (System_String_o **)pUVar4;
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar5 = &"ScrollView/RightPanel";
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelRight,pUVar6);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar4,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar10 = (System_String_o **)pUVar4;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = "ScrollView/LeftPanel";
    pUVar6 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppSVar10 = (System_String_o **)pUVar7;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,pUVar8,method_00);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  n = (System_String_o *)0x0;
  pUVar7 = (UI_BasePanel_o *)
           UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0);
  ppSVar10 = (System_String_o **)pUVar4;
  if (pUVar7 != (UI_BasePanel_o *)0x0) {
    n = *ppSVar5;
    pUVar6 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,n,(MethodInfo *)0x0);
    ppSVar10 = (System_String_o **)pUVar7;
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding(__this,pUVar8,method_01);
      return;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (n != (System_String_o *)0x0) {
    pUVar9 = (UnityEngine_UI_LayoutGroup_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar3 = (*(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar10,(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar10,(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppSVar10,(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppSVar10,(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar3,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar9,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppSVar10);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_UI_LayoutGroup_o *)
                 UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar3 = (*(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppSVar10,(((UI_BasePanel_o *)ppSVar10)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar9 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar9,iVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.BasePanel$$SetupPopups
// il2cpp: void UI_BasePanel__SetupPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4326820

void UI_BasePanel__SetupPopups(UI_BasePanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel$$HideAllPopups
// il2cpp: void UI_BasePanel__HideAllPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4326830

void UI_BasePanel__HideAllPopups(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae01c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae01c = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[0x16].methodPtr)(pIVar7,pIVar7->klass->vtable[0x16].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.BasePanel$$RegisterCategoryPanels
// il2cpp: void UI_BasePanel__RegisterCategoryPanels (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4326980

void UI_BasePanel__RegisterCategoryPanels(UI_BasePanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4326990

void UI_BasePanel__SetCategoryPanel(UI_BasePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  char cVar6;
  bool_conflict bVar7;
  int iVar8;
  System_Type_o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UI_BasePanel_o *pUVar12;
  UI_BasePanel_o *pUVar13;
  UI_BasePanel_o *__this_01;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_02;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_03;
  MethodInfo *extraout_RDX;
  long lVar14;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *pUVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Vector3_o value;
  float local_48;
  float fStack_44;
  
  if (g_data_057ae01d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Type_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundColor");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae01d = '\x01';
    method = extraout_RDX;
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method,method);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._currentCategoryPanel;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  pUVar12 = (UI_BasePanel_o *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar9 = (System_Type_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)name,MethodInfo_Type_get_Item);
    pSVar4 = (__this->fields)._currentCategoryPanelName;
    pUVar12 = (UI_BasePanel_o *)0x0;
    if (pSVar4 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)name,MethodInfo_Void_set_Value);
      pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar11 = UI_ElementFactory__CreateEmptyPanel(pUVar10,pSVar9,1,(MethodInfo *)0x0);
      (__this->fields)._currentCategoryPanel = pUVar11;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      pUVar11 = (__this->fields)._currentCategoryPanel;
      pUVar12 = (UI_BasePanel_o *)0x0;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
        pUVar12 = (UI_BasePanel_o *)0x0;
        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar17 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          pUVar12 = __this;
          fVar16 = (float)(*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)();
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            local_48 = (float)uVar2;
            fStack_44 = (float)((ulong)uVar2 >> 0x20);
            value.fields.z = fVar17 * fVar16;
            value.fields.y = fStack_44 * fVar16;
            value.fields.x = local_48 * fVar16;
            UnityEngine_Transform__set_localPosition(pUVar10,value,(MethodInfo *)0x0);
            pUVar5 = (__this->fields).MaskBackground;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              pUVar5 = (__this->fields).MaskBackground;
              pUVar12 = (UI_BasePanel_o *)
                        (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                  (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UVar18 = UI_UIManager__GetThemeColor
                                 ((System_String_o *)pUVar12,"MainBody","BackgroundColor","DefaultPanel",
                                  (MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04326cc6;
              (*(pUVar5->klass->vtable)._23_set_color.methodPtr)(UVar18.fields.r,UVar18.fields._8_8_,pUVar5);
            }
            if (g_data_057ae01e == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableCategoryPanel_d__51);
              g_data_057ae01e = '\x01';
            }
            pUVar13 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableCategoryPanel_d__51);
            pUVar12 = pUVar13;
            UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor
                      ((UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)pUVar13,0,(MethodInfo *)0x0);
            if (pUVar13 != (UI_BasePanel_o *)0x0) {
              (pUVar13->fields).SinglePanel = (UnityEngine_Transform_o *)__this;
              il2cpp_runtime_helper_022b4080(&(pUVar13->fields).SinglePanel,__this);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar13,
                         (MethodInfo *)0x0);
              pSVar9 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UI_UIManager__SetLastCategory(pSVar9,name,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_04326cc6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableCategoryPanel_d__51);
    g_data_057ae01e = '\x01';
  }
  __this_01 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableCategoryPanel_d__51);
  lVar14 = 0;
  pUVar13 = __this_01;
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor
            ((UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (UI_BasePanel_o *)0x0) {
    (__this_01->fields).SinglePanel = (UnityEngine_Transform_o *)pUVar12;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).SinglePanel,pUVar12);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar13;
  if (g_data_057ae01f == '\0') {
    pUVar12 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae01f = '\x01';
  }
  if ((pUVar13->fields)._currentCategoryPanelName != (Settings_StringSetting_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (pUVar12->fields)._currentCategoryPanelName;
  pUVar13 = pUVar12;
  if (g_data_057ae021 == '\0') {
    pUVar13 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (pSVar4 != (Settings_StringSetting_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar12->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar12,(pSVar4->fields)._value,(pUVar12->klass->vtable)._28_SetCategoryPanel.method,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar13;
  if (g_data_057ae021 == '\0') {
    pUVar12 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (lVar14 == 0) {
    fVar17 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae020 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndRebuildCategoryPanel_d__54);
      g_data_057ae020 = '\x01';
    }
    __this_02 = (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndRebuildCategoryPanel_d__54);
    pUVar10 = (UnityEngine_Transform_o *)0x0;
    pUVar15 = __this_02;
    UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor(__this_02,0,(MethodInfo *)0x0);
    if (__this_02 == (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)0x0) {
      fVar17 = (float)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae022 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
        g_data_057ae022 = '\x01';
      }
      cVar6 = (*(code *)pUVar15->klass[1]._1.element_class)(pUVar15,pUVar15->klass[1]._1.castClass);
      fVar16 = (float)(*(code *)pUVar15->klass[1].vtable._1_Finalize.method)
                                (pUVar15,pUVar15->klass[1].vtable._2_GetHashCode.methodPtr);
      iVar8 = (*(code *)pUVar15->klass[1]._1.name)(pUVar15,pUVar15->klass[1]._1.namespaze);
      if (cVar6 != '\0') {
        fVar16 = fVar16 * 0.5;
      }
      themePanel = (System_String_o *)
                   (*(pUVar15->klass->vtable).
                     _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)
                             (pUVar15,(pUVar15->klass->vtable).
                                      _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.
                                      method);
      __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(__this_03,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
      UI_ElementFactory__CreateHorizontalLine
                (pUVar10,__this_03,fVar16 - ((float)iVar8 + (float)iVar8),fVar17,(MethodInfo *)0x0);
      return;
    }
    (__this_02->fields).__4__this = pUVar12;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this,pUVar12);
    (__this_02->fields).time = fVar17;
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = (pUVar13->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*UNRECOVERED_JUMPTABLE_00)
            (pUVar13,*(undefined8 *)(lVar14 + 0x18),(pUVar13->klass->vtable)._28_SetCategoryPanel.method,
             UNRECOVERED_JUMPTABLE_00);
  return;
}


// UI.BasePanel$$WaitAndEnableCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndEnableCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4326cd0

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndEnableCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  char cVar2;
  int iVar3;
  UI_BasePanel_o *pUVar4;
  System_Collections_IEnumerator_o *pSVar5;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar6;
  long lVar7;
  UnityEngine_Transform_o *parent;
  UI_BasePanel_o *pUVar8;
  UI_BasePanel_o *pUVar9;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *pUVar10;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar11;
  float fVar12;
  
  if (g_data_057ae01e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableCategoryPanel_d__51);
    g_data_057ae01e = '\x01';
  }
  pUVar4 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableCategoryPanel_d__51);
  lVar7 = 0;
  pUVar8 = pUVar4;
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor
            ((UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)pUVar4,0,(MethodInfo *)0x0);
  if (pUVar4 != (UI_BasePanel_o *)0x0) {
    (pUVar4->fields).SinglePanel = (UnityEngine_Transform_o *)__this;
    il2cpp_runtime_helper_022b4080(&(pUVar4->fields).SinglePanel,__this);
    return (System_Collections_IEnumerator_o *)pUVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = pUVar8;
  if (g_data_057ae01f == '\0') {
    pUVar4 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae01f = '\x01';
  }
  pSVar1 = (pUVar8->fields)._currentCategoryPanelName;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    return (System_Collections_IEnumerator_o *)(pSVar1->fields)._value;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (pUVar4->fields)._currentCategoryPanelName;
  pUVar9 = pUVar4;
  if (g_data_057ae021 == '\0') {
    pUVar9 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar4->klass->vtable)._28_SetCategoryPanel.methodPtr;
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pUVar4,(pSVar1->fields)._value,(pUVar4->klass->vtable)._28_SetCategoryPanel.method,
                        UNRECOVERED_JUMPTABLE_00);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar4 = pUVar9;
  if (g_data_057ae021 == '\0') {
    pUVar4 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (lVar7 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar9->klass->vtable)._28_SetCategoryPanel.methodPtr;
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pUVar9,*(undefined8 *)(lVar7 + 0x18),
                        (pUVar9->klass->vtable)._28_SetCategoryPanel.method,UNRECOVERED_JUMPTABLE_00,in_R8,
                        in_R9,pUVar8,__this);
    return pSVar5;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae020 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndRebuildCategoryPanel_d__54);
    g_data_057ae020 = '\x01';
  }
  __this_00 = (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndRebuildCategoryPanel_d__54);
  parent = (UnityEngine_Transform_o *)0x0;
  pUVar10 = __this_00;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)0x0) {
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae022 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      g_data_057ae022 = '\x01';
    }
    cVar2 = (*(code *)pUVar10->klass[1]._1.element_class)(pUVar10,pUVar10->klass[1]._1.castClass);
    fVar12 = (float)(*(code *)pUVar10->klass[1].vtable._1_Finalize.method)
                              (pUVar10,pUVar10->klass[1].vtable._2_GetHashCode.methodPtr);
    iVar3 = (*(code *)pUVar10->klass[1]._1.name)(pUVar10,pUVar10->klass[1]._1.namespaze);
    if (cVar2 != '\0') {
      fVar12 = fVar12 * 0.5;
    }
    themePanel = (System_String_o *)
                 (*(pUVar10->klass->vtable).
                   _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)
                           (pUVar10,(pUVar10->klass->vtable).
                                    _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.
                                    method);
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreateHorizontalLine
                       (parent,__this_01,fVar12 - ((float)iVar3 + (float)iVar3),fVar11,(MethodInfo *)0x0);
    return (System_Collections_IEnumerator_o *)pUVar6;
  }
  (__this_00->fields).__4__this = pUVar4;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pUVar4);
  (__this_00->fields).time = fVar11;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePanel$$GetCurrentCategoryName
// il2cpp: System_String_o* UI_BasePanel__GetCurrentCategoryName (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4326d40

System_String_o * UI_BasePanel__GetCurrentCategoryName(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  char cVar2;
  int iVar3;
  System_String_o *pSVar4;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *parent;
  UI_BasePanel_o *pUVar5;
  UI_BasePanel_o *pUVar6;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *pUVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar8;
  float fVar9;
  
  pUVar5 = __this;
  if (g_data_057ae01f == '\0') {
    pUVar5 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae01f = '\x01';
  }
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    return (pSVar1->fields)._value;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (pUVar5->fields)._currentCategoryPanelName;
  pUVar6 = pUVar5;
  if (g_data_057ae021 == '\0') {
    pUVar6 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar5 = pUVar6;
    if (g_data_057ae021 == '\0') {
      pUVar5 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae021 = '\x01';
    }
    if (method == (MethodInfo *)0x0) {
      fVar8 = (float)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae020 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndRebuildCategoryPanel_d__54);
        g_data_057ae020 = '\x01';
      }
      __this_00 = (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndRebuildCategoryPanel_d__54);
      parent = (UnityEngine_Transform_o *)0x0;
      pUVar7 = __this_00;
      UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
      if (__this_00 == (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)0x0) {
        fVar8 = (float)il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae022 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
          g_data_057ae022 = '\x01';
        }
        cVar2 = (*(code *)pUVar7->klass[1]._1.element_class)(pUVar7,pUVar7->klass[1]._1.castClass);
        fVar9 = (float)(*(code *)pUVar7->klass[1].vtable._1_Finalize.method)
                                 (pUVar7,pUVar7->klass[1].vtable._2_GetHashCode.methodPtr);
        iVar3 = (*(code *)pUVar7->klass[1]._1.name)(pUVar7,pUVar7->klass[1]._1.namespaze);
        if (cVar2 != '\0') {
          fVar9 = fVar9 * 0.5;
        }
        pSVar4 = (System_String_o *)
                 (*(pUVar7->klass->vtable).
                   _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)
                           (pUVar7,(pUVar7->klass->vtable).
                                   _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method
                           );
        __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar4,(MethodInfo *)0x0);
        pSVar4 = (System_String_o *)
                 UI_ElementFactory__CreateHorizontalLine
                           (parent,__this_01,fVar9 - ((float)iVar3 + (float)iVar3),fVar8,(MethodInfo *)0x0);
        return pSVar4;
      }
      (__this_00->fields).__4__this = pUVar5;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pUVar5);
      (__this_00->fields).time = fVar8;
      return (System_String_o *)__this_00;
    }
    UNRECOVERED_JUMPTABLE_00 = (pUVar6->klass->vtable)._28_SetCategoryPanel.methodPtr;
    pSVar4 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pUVar6,method->name,(pUVar6->klass->vtable)._28_SetCategoryPanel.method,
                        UNRECOVERED_JUMPTABLE_00,in_R8,in_R9,__this);
    return pSVar4;
  }
  UNRECOVERED_JUMPTABLE_00 = (pUVar5->klass->vtable)._28_SetCategoryPanel.methodPtr;
  pSVar4 = (System_String_o *)
           (*UNRECOVERED_JUMPTABLE_00)
                     (pUVar5,(pSVar1->fields)._value,(pUVar5->klass->vtable)._28_SetCategoryPanel.method,
                      UNRECOVERED_JUMPTABLE_00);
  return pSVar4;
}


// UI.BasePanel$$RebuildCategoryPanel
// il2cpp: void UI_BasePanel__RebuildCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4326d80

void UI_BasePanel__RebuildCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  char cVar2;
  int iVar3;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *parent;
  UI_BasePanel_o *pUVar4;
  UI_BasePanel_o *pUVar5;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *pUVar6;
  float fVar7;
  float fVar8;
  
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  pUVar4 = __this;
  if (g_data_057ae021 == '\0') {
    pUVar4 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (__this,(pSVar1->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = pUVar4;
  if (g_data_057ae021 == '\0') {
    pUVar5 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (method == (MethodInfo *)0x0) {
    fVar7 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae020 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndRebuildCategoryPanel_d__54);
      g_data_057ae020 = '\x01';
    }
    __this_00 = (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndRebuildCategoryPanel_d__54);
    parent = (UnityEngine_Transform_o *)0x0;
    pUVar6 = __this_00;
    UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
    if (__this_00 == (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)0x0) {
      fVar7 = (float)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae022 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
        g_data_057ae022 = '\x01';
      }
      cVar2 = (*(code *)pUVar6->klass[1]._1.element_class)(pUVar6,pUVar6->klass[1]._1.castClass);
      fVar8 = (float)(*(code *)pUVar6->klass[1].vtable._1_Finalize.method)
                               (pUVar6,pUVar6->klass[1].vtable._2_GetHashCode.methodPtr);
      iVar3 = (*(code *)pUVar6->klass[1]._1.name)(pUVar6,pUVar6->klass[1]._1.namespaze);
      if (cVar2 != '\0') {
        fVar8 = fVar8 * 0.5;
      }
      themePanel = (System_String_o *)
                   (*(pUVar6->klass->vtable).
                     _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)
                             (pUVar6,(pUVar6->klass->vtable).
                                     _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.
                                     method);
      __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
      UI_ElementFactory__CreateHorizontalLine
                (parent,__this_01,fVar8 - ((float)iVar3 + (float)iVar3),fVar7,(MethodInfo *)0x0);
      return;
    }
    (__this_00->fields).__4__this = pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pUVar5);
    (__this_00->fields).time = fVar7;
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = (pUVar4->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*UNRECOVERED_JUMPTABLE_00)
            (pUVar4,method->name,(pUVar4->klass->vtable)._28_SetCategoryPanel.method,UNRECOVERED_JUMPTABLE_00)
  ;
  return;
}


// UI.BasePanel$$WaitAndRebuildCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndRebuildCategoryPanel (UI_BasePanel_o* __this, float time, const MethodInfo* method);
// 0x4326e40

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndRebuildCategoryPanel(UI_BasePanel_o *__this,float time,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *pUVar4;
  float height;
  float fVar5;
  
  if (g_data_057ae020 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndRebuildCategoryPanel_d__54);
    g_data_057ae020 = '\x01';
  }
  __this_00 = (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndRebuildCategoryPanel_d__54);
  parent = (UnityEngine_Transform_o *)0x0;
  pUVar4 = __this_00;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)0x0) {
    height = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae022 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      g_data_057ae022 = '\x01';
    }
    cVar1 = (*(code *)pUVar4->klass[1]._1.element_class)(pUVar4,pUVar4->klass[1]._1.castClass);
    fVar5 = (float)(*(code *)pUVar4->klass[1].vtable._1_Finalize.method)
                             (pUVar4,pUVar4->klass[1].vtable._2_GetHashCode.methodPtr);
    iVar2 = (*(code *)pUVar4->klass[1]._1.name)(pUVar4,pUVar4->klass[1]._1.namespaze);
    if (cVar1 != '\0') {
      fVar5 = fVar5 * 0.5;
    }
    themePanel = (System_String_o *)
                 (*(pUVar4->klass->vtable).
                   _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)
                           (pUVar4,(pUVar4->klass->vtable).
                                   _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method
                           );
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pUVar3 = UI_ElementFactory__CreateHorizontalLine
                       (parent,__this_01,fVar5 - ((float)iVar2 + (float)iVar2),height,(MethodInfo *)0x0);
    return (System_Collections_IEnumerator_o *)pUVar3;
  }
  (__this_00->fields).__4__this = __this;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x4326de0

void UI_BasePanel__SetCategoryPanel_4226de0
               (UI_BasePanel_o *__this,Settings_StringSetting_o *setting,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  char cVar1;
  int iVar2;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *parent;
  UI_BasePanel_o *pUVar3;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *pUVar4;
  float fVar5;
  float fVar6;
  
  pUVar3 = __this;
  if (g_data_057ae021 == '\0') {
    pUVar3 = (UI_BasePanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae021 = '\x01';
  }
  if (setting != (Settings_StringSetting_o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (__this,(setting->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae020 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndRebuildCategoryPanel_d__54);
    g_data_057ae020 = '\x01';
  }
  __this_00 = (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndRebuildCategoryPanel_d__54);
  parent = (UnityEngine_Transform_o *)0x0;
  pUVar4 = __this_00;
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)0x0) {
    fVar5 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae022 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      g_data_057ae022 = '\x01';
    }
    cVar1 = (*(code *)pUVar4->klass[1]._1.element_class)(pUVar4,pUVar4->klass[1]._1.castClass);
    fVar6 = (float)(*(code *)pUVar4->klass[1].vtable._1_Finalize.method)
                             (pUVar4,pUVar4->klass[1].vtable._2_GetHashCode.methodPtr);
    iVar2 = (*(code *)pUVar4->klass[1]._1.name)(pUVar4,pUVar4->klass[1]._1.namespaze);
    if (cVar1 != '\0') {
      fVar6 = fVar6 * 0.5;
    }
    themePanel = (System_String_o *)
                 (*(pUVar4->klass->vtable).
                   _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)
                           (pUVar4,(pUVar4->klass->vtable).
                                   _4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method
                           );
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
    UI_ElementFactory__CreateHorizontalLine
              (parent,__this_01,fVar6 - ((float)iVar2 + (float)iVar2),fVar5,(MethodInfo *)0x0);
    return;
  }
  (__this_00->fields).__4__this = pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pUVar3);
  (__this_00->fields).time = fVar5;
  return;
}


// UI.BasePanel$$CreateHorizontalDivider
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateHorizontalDivider (UI_BasePanel_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x4326ec0

UnityEngine_GameObject_o *
UI_BasePanel__CreateHorizontalDivider
          (UI_BasePanel_o *__this,UnityEngine_Transform_o *parent,float height,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_RDX;
  float fVar4;
  
  if (g_data_057ae022 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    g_data_057ae022 = '\x01';
    method = extraout_RDX;
  }
  cVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_DoublePanel.method,method);
  fVar4 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                           (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
  iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
  if (cVar1 != '\0') {
    fVar4 = fVar4 * 0.5;
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHorizontalLine
                     (parent,__this_00,fVar4 - ((float)iVar2 + (float)iVar2),height,(MethodInfo *)0x0);
  return pUVar3;
}


// UI.BasePanel$$GetSinglePanelTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetSinglePanelTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* singlePanel, const MethodInfo* method);
// 0x4326250

UnityEngine_Transform_o *
UI_BasePanel__GetSinglePanelTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *singlePanel,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *extraout_RAX;
  UnityEngine_Transform_o *extraout_RAX_00;
  System_Object_array *pSVar7;
  UI_BasePanel_o *pUVar8;
  System_String_o **ppSVar9;
  UI_BasePanel_o *pUVar10;
  UnityEngine_Transform_o *extraout_RAX_01;
  UnityEngine_UI_LayoutGroup_o *pUVar11;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_Transform_o *extraout_RAX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar12;
  System_String_o *n;
  System_String_o **ppSVar13;
  float value;
  
  if (g_data_057ae023 == '\0') {
    ppSVar13 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
    __this = (UI_BasePanel_o *)ppSVar13;
  }
  if (singlePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform(singlePanel,(MethodInfo *)0x0);
    __this = (UI_BasePanel_o *)singlePanel;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/Panel",(MethodInfo *)0x0);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar7 != (System_Object_array *)0x0) {
    uVar12 = (uint)pSVar7->max_length;
    pUVar5 = (UnityEngine_Transform_o *)(ulong)uVar12;
    if (0 < (int)uVar12) {
      uVar12 = 0;
      do {
        if ((uint)pUVar5 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this = (UI_BasePanel_o *)pSVar7->m_Items[(int)uVar12];
        if (__this == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*((Il2CppClass *)__this->klass)->vtable[6].methodPtr)
                  (__this,((Il2CppClass *)__this->klass)->vtable[6].method);
        uVar12 = uVar12 + 1;
        uVar1 = (uint)pSVar7->max_length;
        pUVar5 = (UnityEngine_Transform_o *)(ulong)uVar1;
      } while ((int)uVar12 < (int)uVar1);
    }
    return pUVar5;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar2 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)(__this);
  n = (System_String_o *)0x0;
  ppSVar13 = (System_String_o **)__this;
  pUVar8 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar2 == '\0') {
    n = "SinglePanelContent";
    pUVar10 = (UI_BasePanel_o *)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar8,"SinglePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar8;
    if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar8 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (g_data_057ae023 == '\0') {
      ppSVar13 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar8 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar8;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar9 = &"ScrollView/Panel";
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields).SinglePanel,pUVar5);
    bVar3 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar8,(ulong)bVar3,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    n = "DoublePanelContent";
    ppSVar9 = (System_String_o **)
              UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar8,"DoublePanelContent",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar8;
    if ((UI_BasePanel_o *)ppSVar9 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    pUVar8 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar9,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar9 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppSVar13 = ppSVar9;
    if (pUVar8 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar8;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar8;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar9 = &"ScrollView/RightPanel";
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelRight,pUVar5);
    bVar3 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar8,(ulong)bVar3,(__this->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    n = (System_String_o *)0x0;
    ppSVar13 = (System_String_o **)pUVar8;
    pUVar10 = (UI_BasePanel_o *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar10 == (UI_BasePanel_o *)0x0) goto label_04326697;
    n = "ScrollView/LeftPanel";
    pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar10,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,pUVar6,method_00);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  n = (System_String_o *)0x0;
  pUVar10 = (UI_BasePanel_o *)
            UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
  ppSVar13 = (System_String_o **)pUVar8;
  if (pUVar10 != (UI_BasePanel_o *)0x0) {
    n = *ppSVar9;
    pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar10,n,(MethodInfo *)0x0);
    ppSVar13 = (System_String_o **)pUVar10;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding(__this,pUVar6,method_01);
      return extraout_RAX_01;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (n != (System_String_o *)0x0) {
    pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar11,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppSVar13);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)n,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppSVar13,(((UI_BasePanel_o *)ppSVar13)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar11,iVar4,(MethodInfo *)0x0);
          return extraout_RAX_02;
        }
      }
    }
  }
  pUVar5 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar5;
}


// UI.BasePanel$$GetDoublePanelLeftTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetDoublePanelLeftTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* doublePanel, const MethodInfo* method);
// 0x4325fe0

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelLeftTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_Transform_o *pUVar5;
  UI_BasePanel_o *pUVar6;
  UI_BasePanel_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *extraout_RAX;
  UnityEngine_Transform_o *extraout_RAX_00;
  System_Object_array *pSVar10;
  UnityEngine_Transform_o *extraout_RAX_01;
  UnityEngine_UI_LayoutGroup_o *pUVar11;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_Transform_o *extraout_RAX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint uVar12;
  UI_BasePanel_o *pUVar13;
  System_String_o **ppSVar14;
  UI_BasePanel_o **__this_02;
  UI_BasePanel_o **ppUVar15;
  float value;
  
  pUVar13 = (UI_BasePanel_o *)doublePanel;
  ppSVar14 = (System_String_o **)__this;
  if (g_data_057ae024 == '\0') {
    ppSVar14 = &"ScrollView/LeftPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae024 = '\x01';
  }
  if (doublePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar13 = (UI_BasePanel_o *)0x0;
    pUVar5 = UnityEngine_GameObject__get_transform(doublePanel,(MethodInfo *)0x0);
    ppSVar14 = (System_String_o **)doublePanel;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar6 = pUVar13;
  if (g_data_057ae025 == '\0') {
    ppSVar14 = &"ScrollView/RightPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae025 = '\x01';
  }
  uVar12 = (uint)pUVar6;
  if (pUVar13 != (UI_BasePanel_o *)0x0) {
    uVar12 = 0;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
    ppSVar14 = (System_String_o **)pUVar13;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/RightPanel",(MethodInfo *)0x0);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae026 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/SinglePanelContent");
    g_data_057ae026 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar13 = "Prefabs/Panels/SinglePanelContent";
  pUVar6 = (UI_BasePanel_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ((System_String_o *)__this_02,(System_String_o *)"Prefabs/Panels/SinglePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae023 == '\0') {
    __this_02 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar6 != (UI_BasePanel_o *)0x0) {
    pUVar13 = (UI_BasePanel_o *)0x0;
    __this_02 = (UI_BasePanel_o **)pUVar6;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar7 != (UI_BasePanel_o *)0x0) {
      pUVar13 = "ScrollView/Panel";
      pUVar5 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar7,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0)
      ;
      __this_02 = (UI_BasePanel_o **)pUVar7;
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar13 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppSVar14)->klass->vtable)._30_GetPanelWidth.method;
        __this_02 = (UI_BasePanel_o **)ppSVar14;
        (*(((UI_BasePanel_o *)ppSVar14)->klass->vtable)._30_GetPanelWidth.methodPtr)();
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x24].methodPtr)(pIVar8,pIVar8->klass->vtable[0x24].method);
          (*(((UI_BasePanel_o *)ppSVar14)->klass->vtable)._29_BindPanel.methodPtr)
                    (ppSVar14,pUVar6,(ulong)uVar12 & 0xff,
                     (((UI_BasePanel_o *)ppSVar14)->klass->vtable)._29_BindPanel.method);
          if (g_data_057ae023 == '\0') {
            il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
            g_data_057ae023 = '\x01';
          }
          pUVar13 = (UI_BasePanel_o *)0x0;
          __this_02 = (UI_BasePanel_o **)pUVar6;
          pUVar7 = (UI_BasePanel_o *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0)
          ;
          if (pUVar7 != (UI_BasePanel_o *)0x0) {
            pUVar13 = "ScrollView/Panel";
            pUVar5 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar7,(System_String_o *)"ScrollView/Panel",
                                (MethodInfo *)0x0);
            __this_02 = (UI_BasePanel_o **)pUVar7;
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
              UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppSVar14,pUVar9,method_00);
              return (UnityEngine_Transform_o *)pUVar6;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae023 == '\0') {
    __this_02 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar13 != (UI_BasePanel_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
    __this_02 = (UI_BasePanel_o **)pUVar13;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)__this_02,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar10 != (System_Object_array *)0x0) {
    uVar12 = (uint)pSVar10->max_length;
    pUVar5 = (UnityEngine_Transform_o *)(ulong)uVar12;
    if (0 < (int)uVar12) {
      uVar12 = 0;
      do {
        if ((uint)pUVar5 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this_02 = (UI_BasePanel_o **)pSVar10->m_Items[(int)uVar12];
        if ((UI_BasePanel_o *)__this_02 == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._6_get_Height.methodPtr)
                  (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._6_get_Height.method);
        uVar12 = uVar12 + 1;
        uVar1 = (uint)pSVar10->max_length;
        pUVar5 = (UnityEngine_Transform_o *)(ulong)uVar1;
      } while ((int)uVar12 < (int)uVar1);
    }
    return pUVar5;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar2 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._13_get_DoublePanel.methodPtr)(__this_02);
  pUVar13 = (UI_BasePanel_o *)0x0;
  ppUVar15 = __this_02;
  pUVar6 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar2 == '\0') {
    pUVar13 = (UI_BasePanel_o *)"SinglePanelContent";
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"SinglePanelContent",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar7;
    if (g_data_057ae023 == '\0') {
      ppUVar15 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).SinglePanel = pUVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).SinglePanel,pUVar5);
    bVar3 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_02,pUVar6,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.method);
    ppSVar14 = (System_String_o **)&"ScrollView/Panel";
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    pUVar13 = (UI_BasePanel_o *)"DoublePanelContent";
    ppSVar14 = (System_String_o **)
               UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"DoublePanelContent",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if ((UI_BasePanel_o *)ppSVar14 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar14,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar14 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppUVar15 = (UI_BasePanel_o **)ppSVar14;
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).DoublePanelLeft = pUVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar14 = &"ScrollView/RightPanel";
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).DoublePanelRight = pUVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).DoublePanelRight,pUVar5);
    bVar3 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_02,pUVar6,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)"ScrollView/LeftPanel";
    pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar7;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_02,pUVar9,method_01);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  pUVar13 = (UI_BasePanel_o *)0x0;
  pUVar7 = (UI_BasePanel_o *)
           UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
  ppUVar15 = (UI_BasePanel_o **)pUVar6;
  if (pUVar7 != (UI_BasePanel_o *)0x0) {
    pUVar13 = (UI_BasePanel_o *)*ppSVar14;
    pUVar5 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar7,(System_String_o *)pUVar13,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar7;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_02,pUVar9,method_02);
      return extraout_RAX_01;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (pUVar13 != (UI_BasePanel_o *)0x0) {
    pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar13,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar11,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar13,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppUVar15);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar13,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar11,iVar4,(MethodInfo *)0x0);
          return extraout_RAX_02;
        }
      }
    }
  }
  pUVar5 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar5;
}


// UI.BasePanel$$GetDoublePanelRightTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetDoublePanelRightTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* doublePanel, const MethodInfo* method);
// 0x4326030

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelRightTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_Transform_o *pUVar5;
  UI_BasePanel_o *pUVar6;
  UI_BasePanel_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *extraout_RAX;
  UnityEngine_Transform_o *extraout_RAX_00;
  System_Object_array *pSVar10;
  UnityEngine_Transform_o *extraout_RAX_01;
  UnityEngine_UI_LayoutGroup_o *pUVar11;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_Transform_o *extraout_RAX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint uVar12;
  UI_BasePanel_o *pUVar13;
  System_String_o **ppSVar14;
  UI_BasePanel_o **__this_02;
  UI_BasePanel_o **ppUVar15;
  float value;
  
  pUVar9 = doublePanel;
  if (g_data_057ae025 == '\0') {
    ppSVar14 = &"ScrollView/RightPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae025 = '\x01';
    __this = (UI_BasePanel_o *)ppSVar14;
  }
  uVar12 = (uint)pUVar9;
  if (doublePanel != (UnityEngine_GameObject_o *)0x0) {
    uVar12 = 0;
    pUVar5 = UnityEngine_GameObject__get_transform(doublePanel,(MethodInfo *)0x0);
    __this = (UI_BasePanel_o *)doublePanel;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/RightPanel",(MethodInfo *)0x0);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae026 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/SinglePanelContent");
    g_data_057ae026 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar13 = "Prefabs/Panels/SinglePanelContent";
  pUVar6 = (UI_BasePanel_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ((System_String_o *)__this_02,(System_String_o *)"Prefabs/Panels/SinglePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae023 == '\0') {
    __this_02 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar6 != (UI_BasePanel_o *)0x0) {
    pUVar13 = (UI_BasePanel_o *)0x0;
    __this_02 = (UI_BasePanel_o **)pUVar6;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar7 != (UI_BasePanel_o *)0x0) {
      pUVar13 = "ScrollView/Panel";
      pUVar5 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar7,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0)
      ;
      __this_02 = (UI_BasePanel_o **)pUVar7;
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar13 = (UI_BasePanel_o *)(__this->klass->vtable)._30_GetPanelWidth.method;
        __this_02 = (UI_BasePanel_o **)__this;
        (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x24].methodPtr)(pIVar8,pIVar8->klass->vtable[0x24].method);
          (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                    (__this,pUVar6,(ulong)uVar12 & 0xff,(__this->klass->vtable)._29_BindPanel.method);
          if (g_data_057ae023 == '\0') {
            il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
            g_data_057ae023 = '\x01';
          }
          pUVar13 = (UI_BasePanel_o *)0x0;
          __this_02 = (UI_BasePanel_o **)pUVar6;
          pUVar7 = (UI_BasePanel_o *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0)
          ;
          if (pUVar7 != (UI_BasePanel_o *)0x0) {
            pUVar13 = "ScrollView/Panel";
            pUVar5 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar7,(System_String_o *)"ScrollView/Panel",
                                (MethodInfo *)0x0);
            __this_02 = (UI_BasePanel_o **)pUVar7;
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
              UI_BasePanel__SetPanelPadding(__this,pUVar9,method_00);
              return (UnityEngine_Transform_o *)pUVar6;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae023 == '\0') {
    __this_02 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar13 != (UI_BasePanel_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
    __this_02 = (UI_BasePanel_o **)pUVar13;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)__this_02,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar10 != (System_Object_array *)0x0) {
    uVar12 = (uint)pSVar10->max_length;
    pUVar5 = (UnityEngine_Transform_o *)(ulong)uVar12;
    if (0 < (int)uVar12) {
      uVar12 = 0;
      do {
        if ((uint)pUVar5 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this_02 = (UI_BasePanel_o **)pSVar10->m_Items[(int)uVar12];
        if ((UI_BasePanel_o *)__this_02 == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._6_get_Height.methodPtr)
                  (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._6_get_Height.method);
        uVar12 = uVar12 + 1;
        uVar1 = (uint)pSVar10->max_length;
        pUVar5 = (UnityEngine_Transform_o *)(ulong)uVar1;
      } while ((int)uVar12 < (int)uVar1);
    }
    return pUVar5;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar2 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._13_get_DoublePanel.methodPtr)(__this_02);
  pUVar13 = (UI_BasePanel_o *)0x0;
  ppUVar15 = __this_02;
  pUVar6 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar2 == '\0') {
    pUVar13 = (UI_BasePanel_o *)"SinglePanelContent";
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"SinglePanelContent",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar7;
    if (g_data_057ae023 == '\0') {
      ppUVar15 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).SinglePanel = pUVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).SinglePanel,pUVar5);
    bVar3 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_02,pUVar6,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.method);
    ppSVar14 = (System_String_o **)&"ScrollView/Panel";
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    pUVar13 = (UI_BasePanel_o *)"DoublePanelContent";
    ppSVar14 = (System_String_o **)
               UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"DoublePanelContent",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if ((UI_BasePanel_o *)ppSVar14 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar14,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar14 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppUVar15 = (UI_BasePanel_o **)ppSVar14;
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).DoublePanelLeft = pUVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar14 = &"ScrollView/RightPanel";
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).DoublePanelRight = pUVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).DoublePanelRight,pUVar5);
    bVar3 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_02,pUVar6,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    pUVar13 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    pUVar7 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar7 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar13 = (UI_BasePanel_o *)"ScrollView/LeftPanel";
    pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar7;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_02,pUVar9,method_01);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  pUVar13 = (UI_BasePanel_o *)0x0;
  pUVar7 = (UI_BasePanel_o *)
           UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
  ppUVar15 = (UI_BasePanel_o **)pUVar6;
  if (pUVar7 != (UI_BasePanel_o *)0x0) {
    pUVar13 = (UI_BasePanel_o *)*ppSVar14;
    pUVar5 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar7,(System_String_o *)pUVar13,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar7;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_02,pUVar9,method_02);
      return extraout_RAX_01;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (pUVar13 != (UI_BasePanel_o *)0x0) {
    pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar13,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar11,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar13,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppUVar15);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar13,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar11,iVar4,(MethodInfo *)0x0);
          return extraout_RAX_02;
        }
      }
    }
  }
  pUVar5 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar5;
}


// UI.BasePanel$$CreateSinglePanel
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateSinglePanel (UI_BasePanel_o* __this, bool scrollBar, const MethodInfo* method);
// 0x4326080

UnityEngine_GameObject_o *
UI_BasePanel__CreateSinglePanel(UI_BasePanel_o *__this,bool_conflict scrollBar,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UI_BasePanel_o *pUVar5;
  UI_BasePanel_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_GameObject_o *extraout_RAX;
  UnityEngine_GameObject_o *extraout_RAX_00;
  System_Object_array *pSVar10;
  System_String_o **ppSVar11;
  UnityEngine_GameObject_o *extraout_RAX_01;
  UnityEngine_UI_LayoutGroup_o *pUVar12;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_GameObject_o *extraout_RAX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint uVar13;
  UI_BasePanel_o *pUVar14;
  UI_BasePanel_o **__this_02;
  UI_BasePanel_o **ppUVar15;
  float value;
  
  if (g_data_057ae026 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/SinglePanelContent");
    g_data_057ae026 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar14 = "Prefabs/Panels/SinglePanelContent";
  pUVar5 = (UI_BasePanel_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ((System_String_o *)__this_02,(System_String_o *)"Prefabs/Panels/SinglePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae023 == '\0') {
    __this_02 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar5 != (UI_BasePanel_o *)0x0) {
    pUVar14 = (UI_BasePanel_o *)0x0;
    __this_02 = (UI_BasePanel_o **)pUVar5;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 != (UI_BasePanel_o *)0x0) {
      pUVar14 = "ScrollView/Panel";
      pUVar7 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0)
      ;
      __this_02 = (UI_BasePanel_o **)pUVar6;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar14 = (UI_BasePanel_o *)(__this->klass->vtable)._30_GetPanelWidth.method;
        __this_02 = (UI_BasePanel_o **)__this;
        (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x24].methodPtr)(pIVar8,pIVar8->klass->vtable[0x24].method);
          (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                    (__this,pUVar5,(ulong)(uint)scrollBar & 0xff,(__this->klass->vtable)._29_BindPanel.method)
          ;
          if (g_data_057ae023 == '\0') {
            il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
            g_data_057ae023 = '\x01';
          }
          pUVar14 = (UI_BasePanel_o *)0x0;
          __this_02 = (UI_BasePanel_o **)pUVar5;
          pUVar6 = (UI_BasePanel_o *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0)
          ;
          if (pUVar6 != (UI_BasePanel_o *)0x0) {
            pUVar14 = "ScrollView/Panel";
            pUVar7 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/Panel",
                                (MethodInfo *)0x0);
            __this_02 = (UI_BasePanel_o **)pUVar6;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              UI_BasePanel__SetPanelPadding(__this,pUVar9,method_00);
              return (UnityEngine_GameObject_o *)pUVar5;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae023 == '\0') {
    __this_02 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
    __this_02 = (UI_BasePanel_o **)pUVar14;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)pUVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)__this_02,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar10 != (System_Object_array *)0x0) {
    uVar13 = (uint)pSVar10->max_length;
    pUVar9 = (UnityEngine_GameObject_o *)(ulong)uVar13;
    if (0 < (int)uVar13) {
      uVar13 = 0;
      do {
        if ((uint)pUVar9 <= uVar13) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this_02 = (UI_BasePanel_o **)pSVar10->m_Items[(int)uVar13];
        if ((UI_BasePanel_o *)__this_02 == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._6_get_Height.methodPtr)
                  (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._6_get_Height.method);
        uVar13 = uVar13 + 1;
        uVar1 = (uint)pSVar10->max_length;
        pUVar9 = (UnityEngine_GameObject_o *)(ulong)uVar1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return pUVar9;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar2 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._13_get_DoublePanel.methodPtr)(__this_02);
  pUVar14 = (UI_BasePanel_o *)0x0;
  ppUVar15 = __this_02;
  pUVar5 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar5 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar2 == '\0') {
    pUVar14 = (UI_BasePanel_o *)"SinglePanelContent";
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar5,"SinglePanelContent",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    pUVar5 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (g_data_057ae023 == '\0') {
      ppUVar15 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar5 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).SinglePanel = pUVar7;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).SinglePanel,pUVar7);
    bVar3 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_02,pUVar5,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.method);
    ppSVar11 = (System_String_o **)&"ScrollView/Panel";
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    pUVar14 = (UI_BasePanel_o *)"DoublePanelContent";
    ppSVar11 = (System_String_o **)
               UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar5,"DoublePanelContent",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    if ((UI_BasePanel_o *)ppSVar11 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    pUVar5 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppSVar11,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppSVar11 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppUVar15 = (UI_BasePanel_o **)ppSVar11;
    if (pUVar5 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).DoublePanelLeft = pUVar7;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppSVar11 = &"ScrollView/RightPanel";
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_02)->fields).DoublePanelRight = pUVar7;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_02)->fields).DoublePanelRight,pUVar7);
    bVar3 = (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_02,(((UI_BasePanel_o *)__this_02)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_02,pUVar5,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_02)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)"ScrollView/LeftPanel";
    pUVar7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_02,pUVar9,method_01);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  pUVar14 = (UI_BasePanel_o *)0x0;
  pUVar6 = (UI_BasePanel_o *)
           UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
  ppUVar15 = (UI_BasePanel_o **)pUVar5;
  if (pUVar6 != (UI_BasePanel_o *)0x0) {
    pUVar14 = (UI_BasePanel_o *)*ppSVar11;
    pUVar7 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)pUVar14,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_02,pUVar9,method_02);
      return extraout_RAX_01;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    pUVar12 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar14,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar12,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar14,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppUVar15);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar12 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar14,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar12 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar12,iVar4,(MethodInfo *)0x0);
          return extraout_RAX_02;
        }
      }
    }
  }
  pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar9;
}


// UI.BasePanel$$CreateDoublePanel
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateDoublePanel (UI_BasePanel_o* __this, bool scrollBar, bool divider, const MethodInfo* method);
// 0x4325ba0

UnityEngine_GameObject_o *
UI_BasePanel__CreateDoublePanel
          (UI_BasePanel_o *__this,bool_conflict scrollBar,bool_conflict divider,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int32_t iVar4;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UI_BasePanel_o *pUVar5;
  UI_BasePanel_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  UI_BasePanel_o *__this_00;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_GameObject_o *extraout_RAX;
  UnityEngine_GameObject_o *extraout_RAX_00;
  System_Object_array *pSVar10;
  UI_BasePanel_o **ppUVar11;
  UnityEngine_GameObject_o *extraout_RAX_01;
  UnityEngine_UI_LayoutGroup_o *pUVar12;
  UnityEngine_RectOffset_o *__this_01;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UnityEngine_GameObject_o *extraout_RAX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  uint uVar13;
  UI_BasePanel_o *pUVar14;
  UI_BasePanel_o **ppUVar15;
  UI_BasePanel_o **__this_03;
  float value;
  undefined8 uVar16;
  UnityEngine_Color_o UVar17;
  
  if (g_data_057ae027 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"LineColor");
    il2cpp_runtime_helper_023445d0(&"ScrollView/VerticalLine");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae027 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar15 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar14 = "Prefabs/Panels/DoublePanelContent";
  pUVar5 = (UI_BasePanel_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ((System_String_o *)ppUVar15,(System_String_o *)"Prefabs/Panels/DoublePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae024 == '\0') {
    ppUVar15 = &"ScrollView/LeftPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae024 = '\x01';
  }
  if (pUVar5 != (UI_BasePanel_o *)0x0) {
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 != (UI_BasePanel_o *)0x0) {
      pUVar14 = "ScrollView/LeftPanel";
      pUVar7 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0)
      ;
      ppUVar15 = (UI_BasePanel_o **)pUVar6;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar14 = (UI_BasePanel_o *)(__this->klass->vtable)._30_GetPanelWidth.method;
        ppUVar15 = (UI_BasePanel_o **)__this;
        uVar16 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x24].methodPtr)
                    (CONCAT44((int)((ulong)uVar16 >> 0x20),(float)uVar16 * 0.5),pIVar8);
          if (g_data_057ae025 == '\0') {
            il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
            g_data_057ae025 = '\x01';
          }
          pUVar14 = (UI_BasePanel_o *)0x0;
          ppUVar15 = (UI_BasePanel_o **)pUVar5;
          pUVar6 = (UI_BasePanel_o *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0)
          ;
          if (pUVar6 != (UI_BasePanel_o *)0x0) {
            pUVar14 = "ScrollView/RightPanel";
            pUVar7 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/RightPanel",
                                (MethodInfo *)0x0);
            ppUVar15 = (UI_BasePanel_o **)pUVar6;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pIVar8 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              pUVar14 = (UI_BasePanel_o *)(__this->klass->vtable)._30_GetPanelWidth.method;
              ppUVar15 = (UI_BasePanel_o **)__this;
              uVar16 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
              if (pIVar8 != (Il2CppObject *)0x0) {
                (*pIVar8->klass->vtable[0x24].methodPtr)
                          (CONCAT44((int)((ulong)uVar16 >> 0x20),(float)uVar16 * 0.5),pIVar8);
                pUVar14 = (UI_BasePanel_o *)0x0;
                ppUVar15 = (UI_BasePanel_o **)pUVar5;
                pUVar6 = (UI_BasePanel_o *)
                         UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                if (pUVar6 != (UI_BasePanel_o *)0x0) {
                  pUVar14 = "ScrollView/VerticalLine";
                  __this_00 = (UI_BasePanel_o *)
                              UnityEngine_Transform__Find
                                        ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/VerticalLine",
                                         (MethodInfo *)0x0);
                  ppUVar15 = (UI_BasePanel_o **)pUVar6;
                  if (__this_00 != (UI_BasePanel_o *)0x0) {
                    if ((char)divider == '\0') {
                      pUVar14 = (UI_BasePanel_o *)0x0;
                      pUVar9 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                      ppUVar15 = (UI_BasePanel_o **)__this_00;
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
label_04325ef4:
                        (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                                  (__this,pUVar5,(ulong)(uint)scrollBar & 0xff,
                                   (__this->klass->vtable)._29_BindPanel.method);
                        if (g_data_057ae024 == '\0') {
                          il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
                          g_data_057ae024 = '\x01';
                        }
                        pUVar14 = (UI_BasePanel_o *)0x0;
                        ppUVar15 = (UI_BasePanel_o **)pUVar5;
                        pUVar6 = (UI_BasePanel_o *)
                                 UnityEngine_GameObject__get_transform
                                           ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                        if (pUVar6 != (UI_BasePanel_o *)0x0) {
                          pUVar14 = "ScrollView/LeftPanel";
                          pUVar7 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)pUVar6,
                                              (System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
                          ppUVar15 = (UI_BasePanel_o **)pUVar6;
                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                            pUVar9 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                            UI_BasePanel__SetPanelPadding(__this,pUVar9,method_00);
                            if (g_data_057ae025 == '\0') {
                              il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
                              g_data_057ae025 = '\x01';
                            }
                            pUVar14 = (UI_BasePanel_o *)0x0;
                            ppUVar15 = (UI_BasePanel_o **)pUVar5;
                            pUVar6 = (UI_BasePanel_o *)
                                     UnityEngine_GameObject__get_transform
                                               ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                            if (pUVar6 != (UI_BasePanel_o *)0x0) {
                              pUVar14 = "ScrollView/RightPanel";
                              pUVar7 = UnityEngine_Transform__Find
                                                 ((UnityEngine_Transform_o *)pUVar6,
                                                  (System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
                              ppUVar15 = (UI_BasePanel_o **)pUVar6;
                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                pUVar9 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                                UI_BasePanel__SetPanelPadding(__this,pUVar9,method_01);
                                return (UnityEngine_GameObject_o *)pUVar5;
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      pIVar8 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)__this_00,MethodInfo_Image_GetComponent_Image);
                      ppUVar15 = (UI_BasePanel_o **)
                                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pUVar14 = "MainBody";
                      UVar17 = UI_UIManager__GetThemeColor
                                         ((System_String_o *)ppUVar15,(System_String_o *)"MainBody",
                                          "LineColor","DefaultPanel",(MethodInfo *)0x0);
                      if (pIVar8 != (Il2CppObject *)0x0) {
                        (*pIVar8->klass->vtable[0x17].methodPtr)
                                  (UVar17.fields._0_8_,UVar17.fields._8_8_,pIVar8);
                        pUVar14 = (UI_BasePanel_o *)0x0;
                        pUVar9 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                        ppUVar15 = (UI_BasePanel_o **)__this_00;
                        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__AddComponent_object_(pUVar9,MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScaler);
                          goto label_04325ef4;
                        }
                      }
                    }
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
  pUVar5 = pUVar14;
  if (g_data_057ae024 == '\0') {
    ppUVar15 = &"ScrollView/LeftPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae024 = '\x01';
  }
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    pUVar5 = (UI_BasePanel_o *)0x0;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar14;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)pUVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = pUVar5;
  if (g_data_057ae025 == '\0') {
    ppUVar15 = &"ScrollView/RightPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae025 = '\x01';
  }
  uVar13 = (uint)pUVar14;
  if (pUVar5 != (UI_BasePanel_o *)0x0) {
    uVar13 = 0;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)pUVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae026 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/SinglePanelContent");
    g_data_057ae026 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = (UI_BasePanel_o **)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar14 = "Prefabs/Panels/SinglePanelContent";
  pUVar5 = (UI_BasePanel_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ((System_String_o *)__this_03,(System_String_o *)"Prefabs/Panels/SinglePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (g_data_057ae023 == '\0') {
    __this_03 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar5 != (UI_BasePanel_o *)0x0) {
    pUVar14 = (UI_BasePanel_o *)0x0;
    __this_03 = (UI_BasePanel_o **)pUVar5;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 != (UI_BasePanel_o *)0x0) {
      pUVar14 = "ScrollView/Panel";
      pUVar7 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0)
      ;
      __this_03 = (UI_BasePanel_o **)pUVar6;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar14 = (UI_BasePanel_o *)(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._30_GetPanelWidth.method;
        __this_03 = ppUVar15;
        (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._30_GetPanelWidth.methodPtr)();
        if (pIVar8 != (Il2CppObject *)0x0) {
          (*pIVar8->klass->vtable[0x24].methodPtr)(pIVar8,pIVar8->klass->vtable[0x24].method);
          (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._29_BindPanel.methodPtr)
                    (ppUVar15,pUVar5,(ulong)uVar13 & 0xff,
                     (((UI_BasePanel_o *)ppUVar15)->klass->vtable)._29_BindPanel.method);
          if (g_data_057ae023 == '\0') {
            il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
            g_data_057ae023 = '\x01';
          }
          pUVar14 = (UI_BasePanel_o *)0x0;
          __this_03 = (UI_BasePanel_o **)pUVar5;
          pUVar6 = (UI_BasePanel_o *)
                   UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0)
          ;
          if (pUVar6 != (UI_BasePanel_o *)0x0) {
            pUVar14 = "ScrollView/Panel";
            pUVar7 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/Panel",
                                (MethodInfo *)0x0);
            __this_03 = (UI_BasePanel_o **)pUVar6;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)ppUVar15,pUVar9,method_02);
              return (UnityEngine_GameObject_o *)pUVar5;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae023 == '\0') {
    __this_03 = &"ScrollView/Panel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae023 = '\x01';
  }
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
    __this_03 = (UI_BasePanel_o **)pUVar14;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)pUVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((UI_BasePanel_o *)__this_03)->klass->vtable)._26_HideAllPopups.methodPtr)();
  pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
    g_data_057ae01a = '\x01';
  }
  pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)__this_03,MethodInfo_BaseSettingElement_GetComponentsInChildren_BaseSettingEl);
  if (pSVar10 != (System_Object_array *)0x0) {
    uVar13 = (uint)pSVar10->max_length;
    pUVar9 = (UnityEngine_GameObject_o *)(ulong)uVar13;
    if (0 < (int)uVar13) {
      uVar13 = 0;
      do {
        if ((uint)pUVar9 <= uVar13) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_04326397;
        }
        __this_03 = (UI_BasePanel_o **)pSVar10->m_Items[(int)uVar13];
        if ((UI_BasePanel_o *)__this_03 == (UI_BasePanel_o *)0x0) goto label_04326397;
        (*(((UI_BasePanel_o *)__this_03)->klass->vtable)._6_get_Height.methodPtr)
                  (__this_03,(((UI_BasePanel_o *)__this_03)->klass->vtable)._6_get_Height.method);
        uVar13 = uVar13 + 1;
        uVar1 = (uint)pSVar10->max_length;
        pUVar9 = (UnityEngine_GameObject_o *)(ulong)uVar1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return pUVar9;
  }
label_04326397:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae01b == '\0') {
    il2cpp_runtime_helper_023445d0(&"DoublePanelContent");
    il2cpp_runtime_helper_023445d0(&"SinglePanelContent");
    g_data_057ae01b = '\x01';
  }
  cVar2 = (*(((UI_BasePanel_o *)__this_03)->klass->vtable)._13_get_DoublePanel.methodPtr)(__this_03);
  pUVar14 = (UI_BasePanel_o *)0x0;
  ppUVar15 = __this_03;
  pUVar5 = (UI_BasePanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar5 == (UI_BasePanel_o *)0x0) goto label_04326697;
  if (cVar2 == '\0') {
    pUVar14 = "SinglePanelContent";
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar5,(System_String_o *)"SinglePanelContent",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    pUVar5 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (g_data_057ae023 == '\0') {
      ppUVar15 = &"ScrollView/Panel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae023 = '\x01';
    }
    if (pUVar5 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppUVar11 = &"ScrollView/Panel";
    pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/Panel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_03)->fields).SinglePanel = pUVar7;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_03)->fields).SinglePanel,pUVar7);
    bVar3 = (*(((UI_BasePanel_o *)__this_03)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_03,(((UI_BasePanel_o *)__this_03)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_03)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_03,pUVar5,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_03)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae023 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/Panel");
      g_data_057ae023 = '\x01';
    }
  }
  else {
    pUVar14 = "DoublePanelContent";
    ppUVar11 = (UI_BasePanel_o **)
               UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)pUVar5,(System_String_o *)"DoublePanelContent",(MethodInfo *)0x0)
    ;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    if ((UI_BasePanel_o *)ppUVar11 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    pUVar5 = (UI_BasePanel_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppUVar11,(MethodInfo *)0x0);
    if (g_data_057ae024 == '\0') {
      ppUVar11 = &"ScrollView/LeftPanel";
      il2cpp_runtime_helper_023445d0();
      g_data_057ae024 = '\x01';
    }
    ppUVar15 = ppUVar11;
    if (pUVar5 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_03)->fields).DoublePanelLeft = pUVar7;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_03)->fields).DoublePanelLeft);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    ppUVar11 = &"ScrollView/RightPanel";
    pUVar7 = UnityEngine_Transform__Find(pUVar7,(System_String_o *)"ScrollView/RightPanel",(MethodInfo *)0x0);
    (((UI_BasePanel_o *)__this_03)->fields).DoublePanelRight = pUVar7;
    il2cpp_runtime_helper_022b4080(&(((UI_BasePanel_o *)__this_03)->fields).DoublePanelRight,pUVar7);
    bVar3 = (*(((UI_BasePanel_o *)__this_03)->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this_03,(((UI_BasePanel_o *)__this_03)->klass->vtable)._15_get_ScrollBar.method);
    (*(((UI_BasePanel_o *)__this_03)->klass->vtable)._29_BindPanel.methodPtr)
              (__this_03,pUVar5,(ulong)bVar3,
               (((UI_BasePanel_o *)__this_03)->klass->vtable)._29_BindPanel.method);
    if (g_data_057ae024 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/LeftPanel");
      g_data_057ae024 = '\x01';
    }
    pUVar14 = (UI_BasePanel_o *)0x0;
    ppUVar15 = (UI_BasePanel_o **)pUVar5;
    pUVar6 = (UI_BasePanel_o *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 == (UI_BasePanel_o *)0x0) goto label_04326697;
    pUVar14 = "ScrollView/LeftPanel";
    pUVar7 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)"ScrollView/LeftPanel",(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04326697;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_03,pUVar9,method_03);
    if (g_data_057ae025 == '\0') {
      il2cpp_runtime_helper_023445d0(&"ScrollView/RightPanel");
      g_data_057ae025 = '\x01';
    }
  }
  pUVar14 = (UI_BasePanel_o *)0x0;
  pUVar6 = (UI_BasePanel_o *)
           UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
  ppUVar15 = (UI_BasePanel_o **)pUVar5;
  if (pUVar6 != (UI_BasePanel_o *)0x0) {
    pUVar14 = *ppUVar11;
    pUVar7 = UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)pUVar6,(System_String_o *)pUVar14,(MethodInfo *)0x0);
    ppUVar15 = (UI_BasePanel_o **)pUVar6;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding((UI_BasePanel_o *)__this_03,pUVar9,method_04);
      return extraout_RAX_01;
    }
  }
label_04326697:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    pUVar12 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar14,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    right = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._10_get_HorizontalPadding.method
                      );
    top = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._9_get_VerticalPadding.method);
    __this_01 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_01,iVar4,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar12,__this_01,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar14,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                               (ppUVar15);
      if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_02,value,(MethodInfo *)0x0);
        pUVar12 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar14,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar4 = (*(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (ppUVar15,(((UI_BasePanel_o *)ppUVar15)->klass->vtable)._12_get_PanelAlignment.
                                    method);
        if (pUVar12 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar12,iVar4,(MethodInfo *)0x0);
          return extraout_RAX_02;
        }
      }
    }
  }
  pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar9;
}


// UI.BasePanel$$BindPanel
// il2cpp: void UI_BasePanel__BindPanel (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, bool scrollBar, const MethodInfo* method);
// 0x4326fd0

void UI_BasePanel__BindPanel
               (UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,bool_conflict scrollBar,
               MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  Il2CppObject *pIVar5;
  UnityEngine_UI_ScrollRect_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_RawImage_o *__this_03;
  UnityEngine_Texture_o *value_01;
  System_String_o *panel_00;
  System_String_o **panel_01;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o UVar8;
  UnityEngine_Vector3_o value_02;
  float fStack_f8;
  float fStack_f4;
  UnityEngine_UI_ColorBlock_o UStack_88;
  
  panel_01 = (System_String_o **)__this;
  if (cRam00000000057ae028 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"ScrollbarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    il2cpp_runtime_helper_023445d0(&"Scrollbar");
    il2cpp_runtime_helper_023445d0(&"BackgroundColor");
    panel_01 = &"MainBody";
    il2cpp_runtime_helper_023445d0();
    cRam00000000057ae028 = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
    panel_01 = (System_String_o **)__this;
    pUVar3 = (UnityEngine_UI_Scrollbar_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
      panel_01 = (System_String_o **)pUVar3;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar2,parent,0,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        panel_01 = (System_String_o **)__this;
        fVar6 = (float)(*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)();
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          fStack_f8 = (float)uVar1;
          fStack_f4 = (float)((ulong)uVar1 >> 0x20);
          value_02.fields.z = fVar7 * fVar6;
          value_02.fields.y = fStack_f4 * fVar6;
          value_02.fields.x = fStack_f8 * fVar6;
          UnityEngine_Transform__set_localPosition(pUVar2,value_02,(MethodInfo *)0x0);
          fVar7 = (float)(*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                                   (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
          __this_00 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(panel,MethodInfo_RectTransform_GetComponent_RectTransform);
          panel_01 = (System_String_o **)__this;
          fVar6 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            value.fields.y = fVar7;
            value.fields.x = fVar6;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
            panel_01 = (System_String_o **)panel;
            pUVar3 = (UnityEngine_UI_Scrollbar_o *)
                     UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
              pUVar4 = (UnityEngine_UI_Scrollbar_o *)
                       UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)pUVar3,"ScrollView",(MethodInfo *)0x0);
              panel_01 = (System_String_o **)pUVar3;
              if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                pIVar5 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                panel_01 = (System_String_o **)pUVar4;
                if (pIVar5 != (Il2CppObject *)0x0) {
                  (*pIVar5->klass->vtable[0x22].methodPtr)(fVar7,pIVar5);
                  panel_01 = (System_String_o **)panel;
                  pUVar3 = (UnityEngine_UI_Scrollbar_o *)
                           UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                    pUVar4 = (UnityEngine_UI_Scrollbar_o *)
                             UnityEngine_Transform__Find
                                       ((UnityEngine_Transform_o *)pUVar3,"Scrollbar",(MethodInfo *)0x0);
                    panel_01 = (System_String_o **)pUVar3;
                    if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                      pUVar3 = (UnityEngine_UI_Scrollbar_o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar4,MethodInfo_Scrollbar_GetComponent_Scrollbar);
                      panel_01 = (System_String_o **)pUVar4;
                      if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                        UnityEngine_UI_Scrollbar__set_value(pUVar3,1.0,(MethodInfo *)0x0);
                        if ((char)scrollBar == '\0') {
                          panel_01 = (System_String_o **)panel;
                          __this_01 = (UnityEngine_UI_ScrollRect_o *)
                                      UnityEngine_GameObject__GetComponent_object_(panel,MethodInfo_ScrollRect_GetComponent_ScrollRect);
                          if (__this_01 == (UnityEngine_UI_ScrollRect_o *)0x0) goto code_r0x0432752d;
                          UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                    (__this_01,(UnityEngine_UI_Scrollbar_o *)0x0,(MethodInfo *)0x0);
                          panel_01 = (System_String_o **)pUVar3;
                          __this_02 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                          if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto code_r0x0432752d;
                          UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
                        }
                        __this_03 = (UnityEngine_UI_RawImage_o *)
                                    UnityEngine_GameObject__GetComponent_object_(panel,MethodInfo_RawImage_GetComponent_RawImage);
                        panel_01 = (System_String_o **)
                                   (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        value_01 = (UnityEngine_Texture_o *)
                                   UI_UIManager__GetThemeTexture
                                             ((System_String_o *)panel_01,"MainBody","BackgroundTexture",
                                              "DefaultPanel",(MethodInfo *)0x0);
                        if (__this_03 != (UnityEngine_UI_RawImage_o *)0x0) {
                          UnityEngine_UI_RawImage__set_texture(__this_03,value_01,(MethodInfo *)0x0);
                          pIVar5 = UnityEngine_GameObject__GetComponent_object_(panel,MethodInfo_RawImage_GetComponent_RawImage);
                          panel_01 = (System_String_o **)
                                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                          UVar8 = UI_UIManager__GetThemeColor
                                            ((System_String_o *)panel_01,"MainBody","BackgroundColor",
                                             "DefaultPanel",(MethodInfo *)0x0);
                          if (pIVar5 != (Il2CppObject *)0x0) {
                            (*pIVar5->klass->vtable[0x17].methodPtr)
                                      (UVar8.fields.r,UVar8.fields.b,pIVar5,pIVar5->klass->vtable[0x17].method
                                      );
                            panel_00 = (System_String_o *)
                                       (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            UI_UIManager__GetThemeColorBlock
                                      (&UStack_88,panel_00,"MainBody","Scrollbar","DefaultPanel",
                                       (MethodInfo *)0x0);
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
                                      ((UnityEngine_UI_Selectable_o *)pUVar3,value_00,(MethodInfo *)0x0);
                            pIVar5 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar3,MethodInfo_Image_GetComponent_Image);
                            panel_01 = (System_String_o **)
                                       (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            UVar8 = UI_UIManager__GetThemeColor
                                              ((System_String_o *)panel_01,"MainBody",_DAT_055d2008,
                                               "DefaultPanel",(MethodInfo *)0x0);
                            if (pIVar5 != (Il2CppObject *)0x0) {
                              (*pIVar5->klass->vtable[0x17].methodPtr)
                                        (UVar8.fields.r,UVar8.fields.b,pIVar5,
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
code_r0x0432752d:
  il2cpp_runtime_helper_022b2c90();
  (*(((UnityEngine_UI_Scrollbar_o *)panel_01)->klass->vtable)._33_OnPointerUp.methodPtr)();
  return;
}


// UI.BasePanel$$SetPanelPadding
// il2cpp: void UI_BasePanel__SetPanelPadding (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, const MethodInfo* method);
// 0x43266a0

void UI_BasePanel__SetPanelPadding(UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,MethodInfo *method)

{
  int32_t iVar1;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_UI_LayoutGroup_o *pUVar2;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  float value;
  
  if (g_data_057ae029 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    g_data_057ae029 = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_UI_LayoutGroup_o *)UnityEngine_GameObject__GetComponent_object_(panel,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
    right = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor_4dbeaf0(__this_00,iVar1,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar2,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_(panel,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      value = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)(__this);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_UI_LayoutGroup_o *)
                 UnityEngine_GameObject__GetComponent_object_(panel,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
        iVar1 = (*(__this->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (__this,(__this->klass->vtable)._12_get_PanelAlignment.method);
        if (pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar2,iVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.BasePanel$$GetPanelWidth
// il2cpp: float UI_BasePanel__GetPanelWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4327540

float UI_BasePanel__GetPanelWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtableDispatch = (__this->klass->vtable)._33_GetWidth.methodPtr;
  fVar1 = (float)(*vtableDispatch)
                           (__this,(__this->klass->vtable)._33_GetWidth.method,in_RDX,vtableDispatch);
  return fVar1;
}


// UI.BasePanel$$GetPanelHeight
// il2cpp: float UI_BasePanel__GetPanelHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4327560

float UI_BasePanel__GetPanelHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtableDispatch = (__this->klass->vtable)._34_GetHeight.methodPtr;
  fVar1 = (float)(*vtableDispatch)
                           (__this,(__this->klass->vtable)._34_GetHeight.method,in_RDX,vtableDispatch);
  return fVar1;
}


// UI.BasePanel$$GetPanelVerticalOffset
// il2cpp: float UI_BasePanel__GetPanelVerticalOffset (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4327580

float UI_BasePanel__GetPanelVerticalOffset(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$GetWidth
// il2cpp: float UI_BasePanel__GetWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4327590

float UI_BasePanel__GetWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtableDispatch = (__this->klass->vtable)._5_get_Width.methodPtr;
  fVar1 = (float)(*vtableDispatch)
                           (__this,(__this->klass->vtable)._5_get_Width.method,in_RDX,vtableDispatch);
  return fVar1;
}


// UI.BasePanel$$GetHeight
// il2cpp: float UI_BasePanel__GetHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43275b0

float UI_BasePanel__GetHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtableDispatch = (__this->klass->vtable)._6_get_Height.methodPtr;
  fVar1 = (float)(*vtableDispatch)
                           (__this,(__this->klass->vtable)._6_get_Height.method,in_RDX,vtableDispatch);
  return fVar1;
}


// UI.BasePanel$$GetPhysicalWidth
// il2cpp: float UI_BasePanel__GetPhysicalWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x43275d0

float UI_BasePanel__GetPhysicalWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Canvas_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  float fVar4;
  float extraout_XMM0_Da;
  float fStack_2c;
  float local_18;
  
  if (g_data_057ae02a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae02a = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(UI_BasePanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this != (UI_BasePanel_o *)0x0) {
      pUVar3 = (UnityEngine_Canvas_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
      if (pUVar3 != (UnityEngine_Canvas_o *)0x0) {
        fVar4 = UnityEngine_Canvas__get_scaleFactor(pUVar3,(MethodInfo *)0x0);
        local_18 = UVar1.fields.x;
        return fVar4 * local_18;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae02b = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(UI_BasePanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this != (UI_BasePanel_o *)0x0) {
      pUVar3 = (UnityEngine_Canvas_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
      if (pUVar3 != (UnityEngine_Canvas_o *)0x0) {
        fStack_2c = UVar1.fields.y;
        fVar4 = UnityEngine_Canvas__get_scaleFactor(pUVar3,(MethodInfo *)0x0);
        return fVar4 * fStack_2c;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.BasePanel$$GetPhysicalHeight
// il2cpp: float UI_BasePanel__GetPhysicalHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4327690

float UI_BasePanel__GetPhysicalHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  System_Collections_Generic_List_BasePopup__o *__this_02;
  Settings_StringSetting_o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  float fVar2;
  float extraout_XMM0_Da;
  float fStack_14;
  
  if (g_data_057ae02b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae02b = '\x01';
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(UI_BasePanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this != (UI_BasePanel_o *)0x0) {
      __this_01 = (UnityEngine_Canvas_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
      if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
        fStack_14 = UVar1.fields.y;
        fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
        return fVar2 * fStack_14;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_02);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_03 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_03,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_03);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_04;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.BasePanel$$.ctor
// il2cpp: void UI_BasePanel___ctor (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4327760

void UI_BasePanel___ctor(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


