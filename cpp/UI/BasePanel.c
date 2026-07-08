// Type: UI.BasePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/BasePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/BasePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$.ctor
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51___ctor (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401ae80

void UI_BasePanel_<WaitAndEnableCategoryPanel>d__51___ctor
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.IDisposable.Dispose
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_IDisposable_Dispose (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x401aea0

void UI_BasePanel_<WaitAndEnableCategoryPanel>d__51__System_IDisposable_Dispose
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndEnableCategoryPanel_d__51__MoveNext (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x401aeb0

bool_conflict
UI_BasePanel_<WaitAndEnableCategoryPanel>d__51__MoveNext
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePanel_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar4;
  Il2CppObject *__this_01;
  undefined8 uVar5;
  
  if (DAT_057042bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_057042bf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
  }
  pUVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    pUVar3 = (pUVar2->fields).MaskBackground;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar3 = (pUVar2->fields).MaskBackground;
      if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0401afe7;
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (0,0,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
    }
    __this_00 = (pUVar2->fields)._currentCategoryPanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
      return 0;
    }
  }
LAB_0401afe7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x401aff0

Il2CppObject *
UI_BasePanel_<WaitAndEnableCategoryPanel>d__51__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x401b000

void UI_BasePanel_<WaitAndEnableCategoryPanel>d__51__System_Collections_IEnumerator_Reset
               (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

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


// UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndEnableCategoryPanel_d__51__System_Collections_IEnumerator_get_Current (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o* __this, const MethodInfo* method);
// 0x401b040

Il2CppObject *
UI_BasePanel_<WaitAndEnableCategoryPanel>d__51__System_Collections_IEnumerator_get_Current
          (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$.ctor
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54___ctor (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401b050

void UI_BasePanel_<WaitAndRebuildCategoryPanel>d__54___ctor
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.IDisposable.Dispose
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_IDisposable_Dispose (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x401b070

void UI_BasePanel_<WaitAndRebuildCategoryPanel>d__54__System_IDisposable_Dispose
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$MoveNext
// il2cpp: bool UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__MoveNext (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x401b080

bool_conflict
UI_BasePanel_<WaitAndRebuildCategoryPanel>d__54__MoveNext
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UI_BasePanel_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  bool_conflict bVar2;
  
  if (DAT_057042c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_057042c0 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = 0;
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
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
// 0x401b130

Il2CppObject *
UI_BasePanel_<WaitAndRebuildCategoryPanel>d__54__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_Reset (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x401b140

void UI_BasePanel_<WaitAndRebuildCategoryPanel>d__54__System_Collections_IEnumerator_Reset
               (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

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


// UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePanel__WaitAndRebuildCategoryPanel_d__54__System_Collections_IEnumerator_get_Current (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o* __this, const MethodInfo* method);
// 0x401b180

Il2CppObject *
UI_BasePanel_<WaitAndRebuildCategoryPanel>d__54__System_Collections_IEnumerator_get_Current
          (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePanel$$get_ThemePanel
// il2cpp: System_String_o* UI_BasePanel__get_ThemePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x40189c0

System_String_o * UI_BasePanel__get_ThemePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  if (DAT_057042a9 == '\0') {
    il2cpp_init_method_metadata(&"DefaultPanel");
    DAT_057042a9 = '\x01';
  }
  return "DefaultPanel";
}


// UI.BasePanel$$get_Width
// il2cpp: float UI_BasePanel__get_Width (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x40189f0

float UI_BasePanel__get_Width(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.BasePanel$$get_Height
// il2cpp: float UI_BasePanel__get_Height (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a00

float UI_BasePanel__get_Height(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.BasePanel$$get_BorderVerticalPadding
// il2cpp: float UI_BasePanel__get_BorderVerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a10

float UI_BasePanel__get_BorderVerticalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$get_BorderHorizontalPadding
// il2cpp: float UI_BasePanel__get_BorderHorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a20

float UI_BasePanel__get_BorderHorizontalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$get_VerticalPadding
// il2cpp: int32_t UI_BasePanel__get_VerticalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a30

int32_t UI_BasePanel__get_VerticalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.BasePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_BasePanel__get_HorizontalPadding (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a40

int32_t UI_BasePanel__get_HorizontalPadding(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0x28;
}


// UI.BasePanel$$get_VerticalSpacing
// il2cpp: float UI_BasePanel__get_VerticalSpacing (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a50

float UI_BasePanel__get_VerticalSpacing(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 30.0;
}


// UI.BasePanel$$get_PanelAlignment
// il2cpp: int32_t UI_BasePanel__get_PanelAlignment (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a60

int32_t UI_BasePanel__get_PanelAlignment(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_DoublePanel
// il2cpp: bool UI_BasePanel__get_DoublePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a70

bool_conflict UI_BasePanel__get_DoublePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_DoublePanelDivider
// il2cpp: bool UI_BasePanel__get_DoublePanelDivider (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a80

bool_conflict UI_BasePanel__get_DoublePanelDivider(UI_BasePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.BasePanel$$get_ScrollBar
// il2cpp: bool UI_BasePanel__get_ScrollBar (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018a90

bool_conflict UI_BasePanel__get_ScrollBar(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_CategoryPanel
// il2cpp: bool UI_BasePanel__get_CategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018aa0

bool_conflict UI_BasePanel__get_CategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_UseLastCategory
// il2cpp: bool UI_BasePanel__get_UseLastCategory (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018ab0

bool_conflict UI_BasePanel__get_UseLastCategory(UI_BasePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.BasePanel$$get_HasPremadeContent
// il2cpp: bool UI_BasePanel__get_HasPremadeContent (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018ac0

bool_conflict UI_BasePanel__get_HasPremadeContent(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_BasePanel__get_DefaultCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018ad0

System_String_o * UI_BasePanel__get_DefaultCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.BasePanel$$OnEnable
// il2cpp: void UI_BasePanel__OnEnable (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4018af0

void UI_BasePanel__OnEnable(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *__this_01;
  
  if (DAT_057042aa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Border");
    DAT_057042aa = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04018c1c;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Border",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04018c1c;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Border",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04018c1c;
    __this_01 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (__this_01 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_04018c1c;
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_01,0,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._currentCategoryPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
    return;
  }
LAB_04018c1c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$Setup
// il2cpp: void UI_BasePanel__Setup (UI_BasePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4018c30

void UI_BasePanel__Setup(UI_BasePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  int iVar2;
  UnityEngine_Vector2_o value;
  char cVar3;
  byte bVar4;
  bool_conflict bVar5;
  uint uVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_RawImage_o *pUVar9;
  System_String_o *pSVar10;
  UnityEngine_Texture_o *value_00;
  System_Type_o *t;
  undefined8 uVar11;
  MethodInfo_24F0F80 **method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  UnityEngine_Transform_o **ppUVar12;
  float fVar13;
  float fVar14;
  
  if (DAT_057042ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"BackgroundTexture");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_057042ab = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).Parent = parent;
  il2cpp_runtime_glue(&(__this->fields).Parent,parent,method);
  pUVar7 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
LAB_0401918d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = &MethodInfo_RectTransform_GetComponent_RectTransform;
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar13 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                            (__this,(__this->klass->vtable)._33_GetWidth.method);
  fVar14 = (float)(*(__this->klass->vtable)._34_GetHeight.methodPtr)(__this);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0401918d;
  value.fields.y = fVar14;
  value.fields.x = fVar13;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0401918d;
  pUVar8 = UnityEngine_Transform__Find(pUVar8,"Background",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar8 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Background",(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0401918d;
    pUVar9 = (UnityEngine_UI_RawImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar8,MethodInfo_RawImage_GetComponent_RawImage);
    ppUVar1 = &(__this->fields).MaskBackground;
    (__this->fields).MaskBackground = pUVar9;
    il2cpp_runtime_glue(ppUVar1,pUVar9);
    pUVar9 = (__this->fields).MaskBackground;
    pSVar10 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo_24F0F80 **)"DefaultPanel";
    value_00 = (UnityEngine_Texture_o *)
               UI_UIManager__GetThemeTexture
                         (pSVar10,"MainBody","BackgroundTexture",(System_String_o *)"DefaultPanel",
                          (MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0401918d;
    UnityEngine_UI_RawImage__set_texture(pUVar9,value_00,(MethodInfo *)0x0);
    pUVar9 = *ppUVar1;
    if (pUVar9 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0401918d;
    (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
              (0,0,pUVar9,(pUVar9->klass->vtable)._23_set_color.method);
  }
  cVar3 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                    (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
  if ((cVar3 == '\0') &&
     (cVar3 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                        (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method),
     cVar3 == '\0')) {
    cVar3 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                      (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
    uVar6 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    if (cVar3 == '\0') {
      pUVar7 = UI_BasePanel__CreateSinglePanel(__this,uVar6 & 0xff,method_01);
      if (DAT_057042b5 == '\0') {
        il2cpp_init_method_metadata(&"ScrollView/Panel");
        DAT_057042b5 = '\x01';
      }
      if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
         pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0401918d;
      pUVar8 = UnityEngine_Transform__Find(pUVar8,"ScrollView/Panel",(MethodInfo *)0x0);
      ppUVar12 = &(__this->fields).SinglePanel;
      (__this->fields).SinglePanel = pUVar8;
    }
    else {
      bVar4 = (*(__this->klass->vtable)._14_get_DoublePanelDivider.methodPtr)
                        (__this,(__this->klass->vtable)._14_get_DoublePanelDivider.method);
      pUVar7 = UI_BasePanel__CreateDoublePanel
                         (__this,uVar6 & 0xff,(uint)bVar4,(MethodInfo *)method_00);
      if (DAT_057042b6 == '\0') {
        il2cpp_init_method_metadata(&"ScrollView/LeftPanel");
        DAT_057042b6 = '\x01';
      }
      if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
         pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0401918d;
      pUVar8 = UnityEngine_Transform__Find(pUVar8,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      (__this->fields).DoublePanelLeft = pUVar8;
      il2cpp_runtime_glue(&(__this->fields).DoublePanelLeft);
      if (DAT_057042b7 == '\0') {
        il2cpp_init_method_metadata(&"ScrollView/RightPanel");
        DAT_057042b7 = '\x01';
      }
      pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0401918d;
      pUVar8 = UnityEngine_Transform__Find(pUVar8,"ScrollView/RightPanel",(MethodInfo *)0x0);
      ppUVar12 = &(__this->fields).DoublePanelRight;
      (__this->fields).DoublePanelRight = pUVar8;
    }
    il2cpp_runtime_glue(ppUVar12,pUVar8);
  }
  else {
    cVar3 = (*(__this->klass->vtable)._18_get_HasPremadeContent.methodPtr)
                      (__this,(__this->klass->vtable)._18_get_HasPremadeContent.method);
    if (cVar3 != '\0') {
      (*(__this->klass->vtable)._24_SetupPremadePanel.methodPtr)
                (__this,(__this->klass->vtable)._24_SetupPremadePanel.method);
    }
  }
  (*(__this->klass->vtable)._25_SetupPopups.methodPtr)
            (__this,(__this->klass->vtable)._25_SetupPopups.method);
  cVar3 = (*(__this->klass->vtable)._16_get_CategoryPanel.methodPtr)
                    (__this,(__this->klass->vtable)._16_get_CategoryPanel.method);
  if (cVar3 != '\0') {
    (*(__this->klass->vtable)._27_RegisterCategoryPanels.methodPtr)(__this);
    t = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar10 = UI_UIManager__GetLastcategory(t,(MethodInfo *)0x0);
    cVar3 = (*(__this->klass->vtable)._17_get_UseLastCategory.methodPtr)
                      (__this,(__this->klass->vtable)._17_get_UseLastCategory.method);
    if ((cVar3 != '\0') &&
       (bVar5 = System_String__op_Inequality
                          (pSVar10,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0), (char)bVar5 != '\0')) {
      (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                (__this,pSVar10,(__this->klass->vtable)._28_SetCategoryPanel.method);
      iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      goto joined_r0x0401916b;
    }
    uVar11 = (*(__this->klass->vtable)._19_get_DefaultCategoryPanel.methodPtr)
                       (__this,(__this->klass->vtable)._19_get_DefaultCategoryPanel.method);
    (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (__this,uVar11,(__this->klass->vtable)._28_SetCategoryPanel.method);
  }
  iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x0401916b:
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
  return;
}


// UI.BasePanel$$Show
// il2cpp: void UI_BasePanel__Show (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x40198a0

void UI_BasePanel__Show(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$Hide
// il2cpp: void UI_BasePanel__Hide (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x40198d0

void UI_BasePanel__Hide(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)();
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$SyncSettingElements
// il2cpp: void UI_BasePanel__SyncSettingElements (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4019910

void UI_BasePanel__SyncSettingElements(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (DAT_057042ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSettingElement___GetComponentsInChildren_Bas);
    DAT_057042ac = '\x01';
  }
  pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseSettingElement___GetComponentsInChildren_Bas);
  if (pSVar3 != (System_Object_array *)0x0) {
    uVar2 = (uint)pSVar3->max_length;
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar1 = pSVar3->m_Items[(int)uVar4];
        if (pIVar1 == (Il2CppObject *)0x0) goto LAB_04019997;
        (*pIVar1->klass->vtable[6].methodPtr)(pIVar1,pIVar1->klass->vtable[6].method);
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
      } while ((int)uVar4 < (int)uVar2);
    }
    return;
  }
LAB_04019997:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$SetupPremadePanel
// il2cpp: void UI_BasePanel__SetupPremadePanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x40199a0

void UI_BasePanel__SetupPremadePanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_o *panel;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **ppSVar5;
  
  if (DAT_057042ad == '\0') {
    il2cpp_init_method_metadata(&"DoublePanelContent");
    il2cpp_init_method_metadata(&"SinglePanelContent");
    DAT_057042ad = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)(__this);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
  if (cVar1 == '\0') {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"SinglePanelContent",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if (DAT_057042b5 == '\0') {
      il2cpp_init_method_metadata(&"ScrollView/Panel");
      DAT_057042b5 = '\x01';
    }
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_04019c97;
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
    ppSVar5 = &"ScrollView/Panel";
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"ScrollView/Panel",(MethodInfo *)0x0);
    (__this->fields).SinglePanel = pUVar3;
    il2cpp_runtime_glue(&(__this->fields).SinglePanel,pUVar3);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar4,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (DAT_057042b5 == '\0') {
      il2cpp_init_method_metadata(&"ScrollView/Panel");
      DAT_057042b5 = '\x01';
    }
  }
  else {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"DoublePanelContent",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if (DAT_057042b6 == '\0') {
      il2cpp_init_method_metadata(&"ScrollView/LeftPanel");
      DAT_057042b6 = '\x01';
    }
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_04019c97;
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelLeft = pUVar3;
    il2cpp_runtime_glue(&(__this->fields).DoublePanelLeft);
    if (DAT_057042b7 == '\0') {
      il2cpp_init_method_metadata(&"ScrollView/RightPanel");
      DAT_057042b7 = '\x01';
    }
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
    ppSVar5 = &"ScrollView/RightPanel";
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"ScrollView/RightPanel",(MethodInfo *)0x0);
    (__this->fields).DoublePanelRight = pUVar3;
    il2cpp_runtime_glue(&(__this->fields).DoublePanelRight,pUVar3);
    bVar2 = (*(__this->klass->vtable)._15_get_ScrollBar.methodPtr)
                      (__this,(__this->klass->vtable)._15_get_ScrollBar.method);
    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
              (__this,pUVar4,(ulong)bVar2,(__this->klass->vtable)._29_BindPanel.method);
    if (DAT_057042b6 == '\0') {
      il2cpp_init_method_metadata(&"ScrollView/LeftPanel");
      DAT_057042b6 = '\x01';
    }
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"ScrollView/LeftPanel",(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_04019c97;
    panel = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    UI_BasePanel__SetPanelPadding(__this,panel,method_00);
    if (DAT_057042b7 == '\0') {
      il2cpp_init_method_metadata(&"ScrollView/RightPanel");
      DAT_057042b7 = '\x01';
    }
  }
  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,*ppSVar5,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      UI_BasePanel__SetPanelPadding(__this,pUVar4,method_01);
      return;
    }
  }
LAB_04019c97:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$SetupPopups
// il2cpp: void UI_BasePanel__SetupPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4019e20

void UI_BasePanel__SetupPopups(UI_BasePanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel$$HideAllPopups
// il2cpp: void UI_BasePanel__HideAllPopups (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4019e30

void UI_BasePanel__HideAllPopups(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_057042ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    DAT_057042ae = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[0x16].methodPtr)(pIVar4,pIVar4->klass->vtable[0x16].method);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$RegisterCategoryPanels
// il2cpp: void UI_BasePanel__RegisterCategoryPanels (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x4019f80

void UI_BasePanel__RegisterCategoryPanels(UI_BasePanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4019f90

void UI_BasePanel__SetCategoryPanel(UI_BasePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  float fVar2;
  undefined8 uVar3;
  UnityEngine_Object_o *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_StringSetting_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar5;
  bool_conflict bVar6;
  System_Type_o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  System_String_o *panel;
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this_02;
  MethodInfo *extraout_RDX;
  float fVar10;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o UVar11;
  float local_48;
  float fStack_44;
  
  if (DAT_057042af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Type_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"BackgroundColor");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_057042af = '\x01';
    method = extraout_RDX;
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method,method);
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._currentCategoryPanel;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar4 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._categoryPanelTypes;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar7 = (System_Type_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,(Il2CppObject *)name,MethodInfo_Type_get_Item);
    __this_01 = (__this->fields)._currentCategoryPanelName;
    if (__this_01 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)name,MethodInfo_Void_set_Value);
      pUVar8 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar9 = UI_ElementFactory__CreateEmptyPanel(pUVar8,pSVar7,1,(MethodInfo *)0x0);
      (__this->fields)._currentCategoryPanel = pUVar9;
      il2cpp_runtime_glue(ppUVar1);
      pUVar9 = (__this->fields)._currentCategoryPanel;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
          if (DAT_056fde1f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fde1f = '\x01';
          }
          uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          fVar10 = (float)(*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)(__this);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            local_48 = (float)uVar3;
            fStack_44 = (float)((ulong)uVar3 >> 0x20);
            value.fields.z = fVar2 * fVar10;
            value.fields.y = fStack_44 * fVar10;
            value.fields.x = local_48 * fVar10;
            UnityEngine_Transform__set_localPosition(pUVar8,value,(MethodInfo *)0x0);
            pUVar5 = (__this->fields).MaskBackground;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              pUVar5 = (__this->fields).MaskBackground;
              panel = (System_String_o *)
                      (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UVar11 = UI_UIManager__GetThemeColor
                                 (panel,"MainBody","BackgroundColor","DefaultPanel",(MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0401a2c6;
              (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                        (UVar11.fields.r,UVar11.fields._8_8_,pUVar5);
            }
            if (DAT_057042b0 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableCategoryPanel_d__51);
              DAT_057042b0 = '\x01';
            }
            __this_02 = (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)
                        il2cpp_runtime_glue(TypeInfo_WaitAndEnableCategoryPanel_d__51);
            UI_BasePanel_<WaitAndEnableCategoryPanel>d__51___ctor(__this_02,0,(MethodInfo *)0x0);
            if (__this_02 != (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)0x0) {
              (__this_02->fields).__4__this = __this;
              il2cpp_runtime_glue(&(__this_02->fields).__4__this,__this);
              UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)__this,
                         (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
              pSVar7 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UI_UIManager__SetLastCategory(pSVar7,name,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0401a2c6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$WaitAndEnableCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndEnableCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401a2d0

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndEnableCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *__this_00;
  
  if (DAT_057042b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndEnableCategoryPanel_d__51);
    DAT_057042b0 = '\x01';
  }
  __this_00 = (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)il2cpp_runtime_glue(TypeInfo_WaitAndEnableCategoryPanel_d__51);
  UI_BasePanel_<WaitAndEnableCategoryPanel>d__51___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_BasePanel__WaitAndEnableCategoryPanel_d__51_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$GetCurrentCategoryName
// il2cpp: System_String_o* UI_BasePanel__GetCurrentCategoryName (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401a340

System_String_o * UI_BasePanel__GetCurrentCategoryName(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (DAT_057042b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057042b1 = '\x01';
  }
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    return (pSVar1->fields)._value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$RebuildCategoryPanel
// il2cpp: void UI_BasePanel__RebuildCategoryPanel (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401a380

void UI_BasePanel__RebuildCategoryPanel(UI_BasePanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pSVar1 = (__this->fields)._currentCategoryPanelName;
  if (DAT_057042b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057042b3 = '\x01';
  }
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (__this,(pSVar1->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$WaitAndRebuildCategoryPanel
// il2cpp: System_Collections_IEnumerator_o* UI_BasePanel__WaitAndRebuildCategoryPanel (UI_BasePanel_o* __this, float time, const MethodInfo* method);
// 0x401a440

System_Collections_IEnumerator_o *
UI_BasePanel__WaitAndRebuildCategoryPanel(UI_BasePanel_o *__this,float time,MethodInfo *method)

{
  UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *__this_00;
  
  if (DAT_057042b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndRebuildCategoryPanel_d__54);
    DAT_057042b2 = '\x01';
  }
  __this_00 = (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)il2cpp_runtime_glue(TypeInfo_WaitAndRebuildCategoryPanel_d__54);
  UI_BasePanel_<WaitAndRebuildCategoryPanel>d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_BasePanel__WaitAndRebuildCategoryPanel_d__54_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).time = time;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$SetCategoryPanel
// il2cpp: void UI_BasePanel__SetCategoryPanel (UI_BasePanel_o* __this, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x401a3e0

void UI_BasePanel__SetCategoryPanel
               (UI_BasePanel_o *__this,Settings_StringSetting_o *setting,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_057042b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057042b3 = '\x01';
  }
  if (setting != (Settings_StringSetting_o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (__this,(setting->fields)._value,(__this->klass->vtable)._28_SetCategoryPanel.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$CreateHorizontalDivider
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateHorizontalDivider (UI_BasePanel_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x401a4c0

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
  
  if (DAT_057042b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    DAT_057042b4 = '\x01';
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
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHorizontalLine
                     (parent,__this_00,fVar4 - ((float)iVar2 + (float)iVar2),height,
                      (MethodInfo *)0x0);
  return pUVar3;
}


// UI.BasePanel$$GetSinglePanelTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetSinglePanelTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* singlePanel, const MethodInfo* method);
// 0x4019850

UnityEngine_Transform_o *
UI_BasePanel__GetSinglePanelTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *singlePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (DAT_057042b5 == '\0') {
    il2cpp_init_method_metadata(&"ScrollView/Panel");
    DAT_057042b5 = '\x01';
  }
  if (singlePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(singlePanel,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
      return pUVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$GetDoublePanelLeftTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetDoublePanelLeftTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* doublePanel, const MethodInfo* method);
// 0x40195e0

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelLeftTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (DAT_057042b6 == '\0') {
    il2cpp_init_method_metadata(&"ScrollView/LeftPanel");
    DAT_057042b6 = '\x01';
  }
  if (doublePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(doublePanel,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      return pUVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$GetDoublePanelRightTransform
// il2cpp: UnityEngine_Transform_o* UI_BasePanel__GetDoublePanelRightTransform (UI_BasePanel_o* __this, UnityEngine_GameObject_o* doublePanel, const MethodInfo* method);
// 0x4019630

UnityEngine_Transform_o *
UI_BasePanel__GetDoublePanelRightTransform
          (UI_BasePanel_o *__this,UnityEngine_GameObject_o *doublePanel,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (DAT_057042b7 == '\0') {
    il2cpp_init_method_metadata(&"ScrollView/RightPanel");
    DAT_057042b7 = '\x01';
  }
  if (doublePanel != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(doublePanel,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
      return pUVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$CreateSinglePanel
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateSinglePanel (UI_BasePanel_o* __this, bool scrollBar, const MethodInfo* method);
// 0x4019680

UnityEngine_GameObject_o *
UI_BasePanel__CreateSinglePanel(UI_BasePanel_o *__this,bool_conflict scrollBar,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *panel;
  MethodInfo *method_00;
  
  if (DAT_057042b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Prefabs/Panels/SinglePanelContent");
    DAT_057042b8 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (path,"Prefabs/Panels/SinglePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (DAT_057042b5 == '\0') {
    il2cpp_init_method_metadata(&"ScrollView/Panel");
    DAT_057042b5 = '\x01';
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pIVar2 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                  (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pIVar2 != (Il2CppObject *)0x0) {
          (*pIVar2->klass->vtable[0x24].methodPtr)(pIVar2,pIVar2->klass->vtable[0x24].method);
          (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                    (__this,__this_00,(ulong)(scrollBar & 0xff),
                     (__this->klass->vtable)._29_BindPanel.method);
          if (DAT_057042b5 == '\0') {
            il2cpp_init_method_metadata(&"ScrollView/Panel");
            DAT_057042b5 = '\x01';
          }
          pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/Panel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              panel = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
              UI_BasePanel__SetPanelPadding(__this,panel,method_00);
              return __this_00;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$CreateDoublePanel
// il2cpp: UnityEngine_GameObject_o* UI_BasePanel__CreateDoublePanel (UI_BasePanel_o* __this, bool scrollBar, bool divider, const MethodInfo* method);
// 0x40191a0

UnityEngine_GameObject_o *
UI_BasePanel__CreateDoublePanel
          (UI_BasePanel_o *__this,bool_conflict scrollBar,bool_conflict divider,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar5;
  UnityEngine_Color_o UVar6;
  
  if (DAT_057042b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScal);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"LineColor");
    il2cpp_init_method_metadata(&"ScrollView/VerticalLine");
    il2cpp_init_method_metadata(&"Prefabs/Panels/DoublePanelContent");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_057042b9 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (pSVar3,"Prefabs/Panels/DoublePanelContent",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (DAT_057042b6 == '\0') {
    il2cpp_init_method_metadata(&"ScrollView/LeftPanel");
    DAT_057042b6 = '\x01';
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pIVar2 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        uVar5 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                          (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pIVar2 != (Il2CppObject *)0x0) {
          (*pIVar2->klass->vtable[0x24].methodPtr)
                    (CONCAT44((int)((ulong)uVar5 >> 0x20),(float)uVar5 * 0.5),pIVar2);
          if (DAT_057042b7 == '\0') {
            il2cpp_init_method_metadata(&"ScrollView/RightPanel");
            DAT_057042b7 = '\x01';
          }
          pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pIVar2 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              uVar5 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
              if (pIVar2 != (Il2CppObject *)0x0) {
                (*pIVar2->klass->vtable[0x24].methodPtr)
                          (CONCAT44((int)((ulong)uVar5 >> 0x20),(float)uVar5 * 0.5),pIVar2);
                pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/VerticalLine",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    if ((char)divider == '\0') {
                      pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040195da;
                      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                    }
                    else {
                      pIVar2 = UnityEngine_Component__GetComponent<object>
                                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_Image_GetComponent_Image);
                      pSVar3 = (System_String_o *)
                               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      UVar6 = UI_UIManager__GetThemeColor
                                        (pSVar3,"MainBody","LineColor","DefaultPanel",
                                         (MethodInfo *)0x0);
                      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_040195da;
                      (*pIVar2->klass->vtable[0x17].methodPtr)
                                (UVar6.fields._0_8_,UVar6.fields._8_8_,pIVar2);
                      pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_040195da;
                      UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_VerticalLineScaler_AddComponent_VerticalLineScal);
                    }
                    (*(__this->klass->vtable)._29_BindPanel.methodPtr)
                              (__this,__this_00,(ulong)(scrollBar & 0xff),
                               (__this->klass->vtable)._29_BindPanel.method);
                    if (DAT_057042b6 == '\0') {
                      il2cpp_init_method_metadata(&"ScrollView/LeftPanel");
                      DAT_057042b6 = '\x01';
                    }
                    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"ScrollView/LeftPanel",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar4 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                        UI_BasePanel__SetPanelPadding(__this,pUVar4,method_00);
                        if (DAT_057042b7 == '\0') {
                          il2cpp_init_method_metadata(&"ScrollView/RightPanel");
                          DAT_057042b7 = '\x01';
                        }
                        pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                          pUVar1 = UnityEngine_Transform__Find
                                             (pUVar1,"ScrollView/RightPanel",(MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                            pUVar4 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0)
                            ;
                            UI_BasePanel__SetPanelPadding(__this,pUVar4,method_01);
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
    }
  }
LAB_040195da:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$BindPanel
// il2cpp: void UI_BasePanel__BindPanel (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, bool scrollBar, const MethodInfo* method);
// 0x401a5d0

void UI_BasePanel__BindPanel
               (UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,bool_conflict scrollBar,
               MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  Il2CppObject *pIVar4;
  UnityEngine_UI_Scrollbar_o *__this_01;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_RawImage_o *__this_03;
  System_String_o *pSVar5;
  UnityEngine_Texture_o *value_01;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Color_o UVar8;
  float fStack_f8;
  float fStack_f4;
  UnityEngine_UI_ColorBlock_o UStack_88;
  
  if (DAT_057042ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"BackgroundTexture");
    il2cpp_init_method_metadata(&"ScrollbarBackgroundColor");
    il2cpp_init_method_metadata(&"ScrollView");
    il2cpp_init_method_metadata(&"Scrollbar");
    il2cpp_init_method_metadata(&"BackgroundColor");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_057042ba = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar2,parent,0,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        fVar6 = (float)(*(__this->klass->vtable)._32_GetPanelVerticalOffset.methodPtr)(__this);
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
                      UnityEngine_GameObject__GetComponent<object>(panel,MethodInfo_RectTransform_GetComponent_RectTransform);
          fVar6 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)(__this);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            value.fields.y = fVar7;
            value.fields.x = fVar6;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"ScrollView",(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pIVar4 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar4 != (Il2CppObject *)0x0) {
                  (*pIVar4->klass->vtable[0x22].methodPtr)(fVar7,pIVar4);
                  pUVar2 = UnityEngine_GameObject__get_transform(panel,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Scrollbar",(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                      __this_01 = (UnityEngine_UI_Scrollbar_o *)
                                  UnityEngine_Component__GetComponent<object>
                                            ((UnityEngine_Component_o *)pUVar2,MethodInfo_Scrollbar_GetComponent_Scrollbar);
                      if (__this_01 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                        UnityEngine_UI_Scrollbar__set_value(__this_01,1.0,(MethodInfo *)0x0);
                        if ((char)scrollBar == '\0') {
                          __this_02 = (UnityEngine_UI_ScrollRect_o *)
                                      UnityEngine_GameObject__GetComponent<object>
                                                (panel,MethodInfo_ScrollRect_GetComponent_ScrollRect);
                          if (__this_02 == (UnityEngine_UI_ScrollRect_o *)0x0) goto LAB_0401ab2d;
                          UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                    (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,(MethodInfo *)0x0);
                          pUVar3 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0
                                             );
                          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0401ab2d;
                          UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
                        }
                        __this_03 = (UnityEngine_UI_RawImage_o *)
                                    UnityEngine_GameObject__GetComponent<object>(panel,MethodInfo_RawImage_GetComponent_RawImage)
                        ;
                        pSVar5 = (System_String_o *)
                                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method)
                        ;
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        value_01 = (UnityEngine_Texture_o *)
                                   UI_UIManager__GetThemeTexture
                                             (pSVar5,"MainBody","BackgroundTexture","DefaultPanel",
                                              (MethodInfo *)0x0);
                        if (__this_03 != (UnityEngine_UI_RawImage_o *)0x0) {
                          UnityEngine_UI_RawImage__set_texture(__this_03,value_01,(MethodInfo *)0x0)
                          ;
                          pIVar4 = UnityEngine_GameObject__GetComponent<object>(panel,MethodInfo_RawImage_GetComponent_RawImage);
                          pSVar5 = (System_String_o *)
                                   (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                     method);
                          UVar8 = UI_UIManager__GetThemeColor
                                            (pSVar5,"MainBody","BackgroundColor","DefaultPanel",
                                             (MethodInfo *)0x0);
                          if (pIVar4 != (Il2CppObject *)0x0) {
                            (*pIVar4->klass->vtable[0x17].methodPtr)
                                      (UVar8.fields.r,UVar8.fields.b,pIVar4,
                                       pIVar4->klass->vtable[0x17].method);
                            pSVar5 = (System_String_o *)
                                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                       method);
                            UI_UIManager__GetThemeColorBlock
                                      (&UStack_88,pSVar5,"MainBody","Scrollbar","DefaultPanel",
                                       (MethodInfo *)0x0);
                            value_00.fields.m_NormalColor.fields.b =
                                 UStack_88.fields.m_NormalColor.fields.b;
                            value_00.fields.m_NormalColor.fields.a =
                                 UStack_88.fields.m_NormalColor.fields.a;
                            value_00.fields.m_NormalColor.fields.r =
                                 UStack_88.fields.m_NormalColor.fields.r;
                            value_00.fields.m_NormalColor.fields.g =
                                 UStack_88.fields.m_NormalColor.fields.g;
                            value_00.fields.m_HighlightedColor.fields.r =
                                 UStack_88.fields.m_HighlightedColor.fields.r;
                            value_00.fields.m_HighlightedColor.fields.g =
                                 UStack_88.fields.m_HighlightedColor.fields.g;
                            value_00.fields.m_HighlightedColor.fields.b =
                                 UStack_88.fields.m_HighlightedColor.fields.b;
                            value_00.fields.m_HighlightedColor.fields.a =
                                 UStack_88.fields.m_HighlightedColor.fields.a;
                            value_00.fields.m_PressedColor.fields.r =
                                 UStack_88.fields.m_PressedColor.fields.r;
                            value_00.fields.m_PressedColor.fields.g =
                                 UStack_88.fields.m_PressedColor.fields.g;
                            value_00.fields.m_PressedColor.fields.b =
                                 UStack_88.fields.m_PressedColor.fields.b;
                            value_00.fields.m_PressedColor.fields.a =
                                 UStack_88.fields.m_PressedColor.fields.a;
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
                                      ((UnityEngine_UI_Selectable_o *)__this_01,value_00,
                                       (MethodInfo *)0x0);
                            pIVar4 = UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
                            pSVar5 = (System_String_o *)
                                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                               (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                       method);
                            UVar8 = UI_UIManager__GetThemeColor
                                              (pSVar5,"MainBody","ScrollbarBackgroundColor","DefaultPanel",
                                               (MethodInfo *)0x0);
                            if (pIVar4 != (Il2CppObject *)0x0) {
                              (*pIVar4->klass->vtable[0x17].methodPtr)
                                        (UVar8.fields.r,UVar8.fields.b,pIVar4,
                                         pIVar4->klass->vtable[0x17].method);
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
LAB_0401ab2d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$SetPanelPadding
// il2cpp: void UI_BasePanel__SetPanelPadding (UI_BasePanel_o* __this, UnityEngine_GameObject_o* panel, const MethodInfo* method);
// 0x4019ca0

void UI_BasePanel__SetPanelPadding
               (UI_BasePanel_o *__this,UnityEngine_GameObject_o *panel,MethodInfo *method)

{
  int32_t iVar1;
  int32_t right;
  int32_t top;
  int32_t bottom;
  UnityEngine_UI_LayoutGroup_o *pUVar2;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  float value;
  
  if (DAT_057042bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_RectOffset);
    DAT_057042bb = '\x01';
  }
  if (panel != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_UI_LayoutGroup_o *)
             UnityEngine_GameObject__GetComponent<object>(panel,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
    right = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
    top = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    bottom = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
    __this_00 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
    UnityEngine_RectOffset___ctor(__this_00,iVar1,right,top,bottom,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_padding(pUVar2,__this_00,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>(panel,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
      value = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)(__this);
      if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (__this_01,value,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_UI_LayoutGroup_o *)
                 UnityEngine_GameObject__GetComponent<object>(panel,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
        iVar1 = (*(__this->klass->vtable)._12_get_PanelAlignment.methodPtr)
                          (__this,(__this->klass->vtable)._12_get_PanelAlignment.method);
        if (pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(pUVar2,iVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$GetPanelWidth
// il2cpp: float UI_BasePanel__GetPanelWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401ab40

float UI_BasePanel__GetPanelWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtable_dispatch = (__this->klass->vtable)._33_GetWidth.methodPtr;
  fVar1 = (float)(*vtable_dispatch)
                           (__this,(__this->klass->vtable)._33_GetWidth.method,in_RDX,
                            vtable_dispatch);
  return fVar1;
}


// UI.BasePanel$$GetPanelHeight
// il2cpp: float UI_BasePanel__GetPanelHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401ab60

float UI_BasePanel__GetPanelHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtable_dispatch = (__this->klass->vtable)._34_GetHeight.methodPtr;
  fVar1 = (float)(*vtable_dispatch)
                           (__this,(__this->klass->vtable)._34_GetHeight.method,in_RDX,
                            vtable_dispatch);
  return fVar1;
}


// UI.BasePanel$$GetPanelVerticalOffset
// il2cpp: float UI_BasePanel__GetPanelVerticalOffset (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401ab80

float UI_BasePanel__GetPanelVerticalOffset(UI_BasePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePanel$$GetWidth
// il2cpp: float UI_BasePanel__GetWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401ab90

float UI_BasePanel__GetWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtable_dispatch = (__this->klass->vtable)._5_get_Width.methodPtr;
  fVar1 = (float)(*vtable_dispatch)
                           (__this,(__this->klass->vtable)._5_get_Width.method,in_RDX,
                            vtable_dispatch);
  return fVar1;
}


// UI.BasePanel$$GetHeight
// il2cpp: float UI_BasePanel__GetHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401abb0

float UI_BasePanel__GetHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtable_dispatch = (__this->klass->vtable)._6_get_Height.methodPtr;
  fVar1 = (float)(*vtable_dispatch)
                           (__this,(__this->klass->vtable)._6_get_Height.method,in_RDX,
                            vtable_dispatch);
  return fVar1;
}


// UI.BasePanel$$GetPhysicalWidth
// il2cpp: float UI_BasePanel__GetPhysicalWidth (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401abd0

float UI_BasePanel__GetPhysicalWidth(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  float fVar2;
  float local_18;
  
  if (DAT_057042bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057042bc = '\x01';
  }
  __this_01 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      __this_02 = (UnityEngine_Canvas_o *)
                  UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_Canvas_GetComponent_Canvas);
      if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
        fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
        local_18 = UVar1.fields.x;
        return fVar2 * local_18;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$GetPhysicalHeight
// il2cpp: float UI_BasePanel__GetPhysicalHeight (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401ac90

float UI_BasePanel__GetPhysicalHeight(UI_BasePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  float fVar2;
  float fStack_14;
  
  if (DAT_057042bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057042bd = '\x01';
  }
  __this_01 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      __this_02 = (UnityEngine_Canvas_o *)
                  UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_Canvas_GetComponent_Canvas);
      if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
        fStack_14 = UVar1.fields.y;
        fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
        return fVar2 * fStack_14;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePanel$$.ctor
// il2cpp: void UI_BasePanel___ctor (UI_BasePanel_o* __this, const MethodInfo* method);
// 0x401ad60

void UI_BasePanel___ctor(UI_BasePanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  
  if (DAT_057042be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Type);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Type);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_init_method_metadata(&TypeInfo_List_BasePopup);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057042be = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_glue(TypeInfo_List_BasePopup);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Type);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes =
       (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_glue(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


