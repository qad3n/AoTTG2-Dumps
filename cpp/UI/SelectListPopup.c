// Type: UI.SelectListPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SelectListPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/SelectListPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.SelectListPopup.ItemCategory$$.ctor
// il2cpp: void UI_SelectListPopup_ItemCategory___ctor (UI_SelectListPopup_ItemCategory_o* __this, System_String_o* name, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x402ba80

void UI_SelectListPopup_ItemCategory___ctor
               (UI_SelectListPopup_ItemCategory_o *__this,System_String_o *name,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  il2cpp_runtime_glue(&__this->fields,name);
  (__this->fields).Items = items;
  il2cpp_runtime_glue(&(__this->fields).Items,items);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass45_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass45_0___ctor (UI_SelectListPopup___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x4028880

void UI_SelectListPopup_<>c__DisplayClass45_0___ctor
               (UI_SelectListPopup___c__DisplayClass45_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass45_0$$<OnSearchChanged>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass45_0___OnSearchChanged_b__0 (UI_SelectListPopup___c__DisplayClass45_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x402bac0

bool_conflict
UI_SelectListPopup_<>c__DisplayClass45_0__<OnSearchChanged>b__0
          (UI_SelectListPopup___c__DisplayClass45_0_o *__this,System_String_o *item,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  
  if (item != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,(__this->fields).query,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup.<>c__DisplayClass50_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass50_0___ctor (UI_SelectListPopup___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x402a2f0

void UI_SelectListPopup_<>c__DisplayClass50_0___ctor
               (UI_SelectListPopup___c__DisplayClass50_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass50_0$$<RefreshList>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass50_0___RefreshList_b__0 (UI_SelectListPopup___c__DisplayClass50_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x402baf0

bool_conflict
UI_SelectListPopup_<>c__DisplayClass50_0__<RefreshList>b__0
          (UI_SelectListPopup___c__DisplayClass50_0_o *__this,System_String_o *item,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  
  if (item != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,(__this->fields).query,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup.<>c__DisplayClass50_0$$<RefreshList>b__1
// il2cpp: bool UI_SelectListPopup___c__DisplayClass50_0___RefreshList_b__1 (UI_SelectListPopup___c__DisplayClass50_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x402bb20

bool_conflict
UI_SelectListPopup_<>c__DisplayClass50_0__<RefreshList>b__1
          (UI_SelectListPopup___c__DisplayClass50_0_o *__this,System_String_o *item,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  
  if (item != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,(__this->fields).query,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass51_0___ctor (UI_SelectListPopup___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x402acc0

void UI_SelectListPopup_<>c__DisplayClass51_0___ctor
               (UI_SelectListPopup___c__DisplayClass51_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$<CreateItemButton>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass51_0___CreateItemButton_b__0 (UI_SelectListPopup___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x402bb50

void UI_SelectListPopup_<>c__DisplayClass51_0__<CreateItemButton>b__0
               (UI_SelectListPopup___c__DisplayClass51_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    UI_SelectListPopup__OnItemClick(__this_00,(__this->fields).item,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$<CreateItemButton>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass51_0___CreateItemButton_b__1 (UI_SelectListPopup___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x402bb70

void UI_SelectListPopup_<>c__DisplayClass51_0__<CreateItemButton>b__1
               (UI_SelectListPopup___c__DisplayClass51_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    UI_SelectListPopup__OnDeleteClick(__this_00,(__this->fields).item,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup.<>c__DisplayClass54_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass54_0___ctor (UI_SelectListPopup___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x402ae80

void UI_SelectListPopup_<>c__DisplayClass54_0___ctor
               (UI_SelectListPopup___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass54_0$$<SetupCategoryTabs>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass54_0___SetupCategoryTabs_b__1 (UI_SelectListPopup___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x402bb90

void UI_SelectListPopup_<>c__DisplayClass54_0__<SetupCategoryTabs>b__1
               (UI_SelectListPopup___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    method_00 = (MethodInfo *)(__this->fields).categoryName;
    (__this_00->fields)._activeCategoryName = (System_String_o *)method_00;
    il2cpp_runtime_glue(&(__this_00->fields)._activeCategoryName);
    UI_SelectListPopup__SyncCategoryTabs(__this_00,method_00);
    UI_SelectListPopup__RefreshList(__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup.<>c__DisplayClass59_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass59_0___ctor (UI_SelectListPopup___c__DisplayClass59_0_o* __this, const MethodInfo* method);
// 0x402b180

void UI_SelectListPopup_<>c__DisplayClass59_0___ctor
               (UI_SelectListPopup___c__DisplayClass59_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass59_0$$<OnItemClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass59_0___OnItemClick_b__0 (UI_SelectListPopup___c__DisplayClass59_0_o* __this, const MethodInfo* method);
// 0x402bbd0

void UI_SelectListPopup_<>c__DisplayClass59_0__<OnItemClick>b__0
               (UI_SelectListPopup___c__DisplayClass59_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  System_String_o *value;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    value = (__this->fields).name;
    if (DAT_05704339 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
      DAT_05704339 = '\x01';
    }
    __this_00 = (pUVar1->fields).FinishSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      pUVar2 = (pUVar1->fields)._onSave;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)
                  ((pUVar2->fields).method_code,(pUVar2->fields).method);
        vtable_dispatch = (pUVar1->klass->vtable)._22_Hide.methodPtr;
        (*vtable_dispatch)
                  (pUVar1,(pUVar1->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup.<>c__DisplayClass62_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass62_0___ctor (UI_SelectListPopup___c__DisplayClass62_0_o* __this, const MethodInfo* method);
// 0x402b400

void UI_SelectListPopup_<>c__DisplayClass62_0___ctor
               (UI_SelectListPopup___c__DisplayClass62_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass62_0$$<OnDeleteClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass62_0___OnDeleteClick_b__0 (UI_SelectListPopup___c__DisplayClass62_0_o* __this, const MethodInfo* method);
// 0x402bc60

void UI_SelectListPopup_<>c__DisplayClass62_0__<OnDeleteClick>b__0
               (UI_SelectListPopup___c__DisplayClass62_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    UI_SelectListPopup__OnConfirmDelete(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_SelectListPopup__get_ThemePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028190

System_String_o *
UI_SelectListPopup__get_ThemePanel(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704329 == '\0') {
    il2cpp_init_method_metadata(&"SelectListPopup");
    DAT_05704329 = '\x01';
  }
  return "SelectListPopup";
}


// UI.SelectListPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SelectListPopup__get_HorizontalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x40281c0

int32_t UI_SelectListPopup__get_HorizontalPadding(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SelectListPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SelectListPopup__get_VerticalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x40281d0

int32_t UI_SelectListPopup__get_VerticalPadding(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.SelectListPopup$$get_VerticalSpacing
// il2cpp: float UI_SelectListPopup__get_VerticalSpacing (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x40281e0

float UI_SelectListPopup__get_VerticalSpacing(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.SelectListPopup$$get_DoublePanel
// il2cpp: bool UI_SelectListPopup__get_DoublePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x40281f0

bool_conflict UI_SelectListPopup__get_DoublePanel(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SelectListPopup$$get_ScrollBar
// il2cpp: bool UI_SelectListPopup__get_ScrollBar (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028200

bool_conflict UI_SelectListPopup__get_ScrollBar(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SelectListPopup$$get_Width
// il2cpp: float UI_SelectListPopup__get_Width (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028210

float UI_SelectListPopup__get_Width(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.SelectListPopup$$get_Height
// il2cpp: float UI_SelectListPopup__get_Height (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028220

float UI_SelectListPopup__get_Height(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.SelectListPopup$$get_ItemButtonWidth
// il2cpp: float UI_SelectListPopup__get_ItemButtonWidth (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028230

float UI_SelectListPopup__get_ItemButtonWidth(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.SelectListPopup$$get_ItemFontSize
// il2cpp: int32_t UI_SelectListPopup__get_ItemFontSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028240

int32_t UI_SelectListPopup__get_ItemFontSize(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0x1c;
}


// UI.SelectListPopup$$get_DeleteButtonSize
// il2cpp: float UI_SelectListPopup__get_DeleteButtonSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028250

float UI_SelectListPopup__get_DeleteButtonSize(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 32.0;
}


// UI.SelectListPopup$$Setup
// il2cpp: void UI_SelectListPopup__Setup (UI_SelectListPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4028260

void UI_SelectListPopup__Setup
               (UI_SelectListPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GameObject_o **ppUVar2;
  uint uVar3;
  UnityEngine_Transform_o *pUVar4;
  Settings_StringSetting_o *setting;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar5;
  long lVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *pUVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  UnityEngine_GameObject_o *pUVar10;
  UI_InputSettingElement_o *pUVar11;
  Il2CppObject *pIVar12;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570432a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__44_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__44_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__44_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__44_3);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"No items found.");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_0570432a = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar8 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar8,fontSize,60.0,20.0,pSVar7,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).BottomBar;
  setting = (__this->fields).FinishSetting;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  onEndEdit = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar10 = UI_ElementFactory__CreateInputSetting
                      (pUVar4,pUVar8,(Settings_BaseSetting_o *)setting,pSVar7,"",185.0,
                       40.0,0,pUVar9,onEndEdit,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar11 = (UI_InputSettingElement_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    (__this->fields)._inputElement = pUVar11;
    il2cpp_runtime_glue(&(__this->fields)._inputElement);
    pUVar4 = (__this->fields).BottomBar;
    __this_00 = (__this->fields)._saveElements;
    pSVar7 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
    pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar10 = UI_ElementFactory__CreateTextButton(pUVar4,pUVar8,pSVar7,0.0,pUVar9,(MethodInfo *)0x0)
    ;
    lVar6 = MethodInfo_Void_Add;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (__this_00->fields)._items;
      if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pUVar5->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pUVar5->m_Items[(int)uVar3] = pUVar10;
          il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar10,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        pUVar4 = (__this->fields).BottomBar;
        pSVar7 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(pUVar4,pUVar8,pSVar7,0.0,pUVar9,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).SinglePanel;
        pSVar7 = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        pUVar8 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(pUVar8,0x18,120.0,20.0,pSVar7,(MethodInfo *)0x0);
        pUVar10 = UI_ElementFactory__CreateDefaultLabel
                            (pUVar4,pUVar8,"No items found.",0,4,(MethodInfo *)0x0);
        (__this->fields)._noItemsLabel = pUVar10;
        il2cpp_runtime_glue(&(__this->fields)._noItemsLabel,pUVar10);
        pUVar10 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).TopBar,12.0,4,(MethodInfo *)0x0);
        ppUVar2 = &(__this->fields)._categoryButtonContainer;
        (__this->fields)._categoryButtonContainer = pUVar10;
        il2cpp_runtime_glue(ppUVar2,pUVar10);
        pUVar10 = (__this->fields)._categoryButtonContainer;
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pIVar12 = UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar12 != (Il2CppObject *)0x0) {
            (*pIVar12->klass->vtable[0x28].methodPtr)(0,pIVar12);
            pUVar10 = *ppUVar2;
            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
              pUVar4 = (__this->fields).TopBar;
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pIVar12 = UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar4,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
                if (pIVar12 != (Il2CppObject *)0x0) {
                  (__this->fields)._defaultTopBarAlignment = *(int32_t *)&pIVar12[2].monitor;
                  *(undefined1 *)&(__this->fields)._cachedTopBarAlignment = 1;
                  return;
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


// UI.SelectListPopup$$OnSearchChanged
// il2cpp: void UI_SelectListPopup__OnSearchChanged (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028720

void UI_SelectListPopup__OnSearchChanged(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  Il2CppClass *method_00;
  System_Collections_Generic_List_string__o *source;
  System_Func_TSource__bool__o *predicate;
  System_String_o *pSVar3;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (DAT_0570432b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_FirstOrDefault_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__OnSearchChanged_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass45_0);
    DAT_0570432b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass45_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (pSVar3 = (pSVar1->fields)._value, pSVar3 != (System_String_o *)0x0)) {
    method_00 = (Il2CppClass *)System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[1].klass = method_00;
      il2cpp_runtime_glue(__this_00 + 1);
      UI_SelectListPopup__RefreshList(__this,(MethodInfo *)method_00);
      method_02 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        source = UI_SelectListPopup__GetActiveCategoryItems(__this,method_02);
        predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
        System_Func<object__bool>___ctor();
        pSVar3 = (System_String_o *)
                 System_Linq_Enumerable__FirstOrDefault<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                            MethodInfo_String_FirstOrDefault_String);
        bVar2 = System_String__IsNullOrEmpty
                          ((System_String_o *)__this_00[1].klass,(MethodInfo *)0x0);
        if ((pSVar3 != (System_String_o *)0x0) && ((char)bVar2 == '\0')) {
          UI_SelectListPopup__OnItemClick(__this,pSVar3,method_01);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$ShowLoad
// il2cpp: void UI_SelectListPopup__ShowLoad (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, UnityEngine_Events_UnityAction_o* onLoad, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, const MethodInfo* method);
// 0x4029050

void UI_SelectListPopup__ShowLoad
               (UI_SelectListPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_String_o *title,UnityEngine_Events_UnityAction_o *onLoad,
               UnityEngine_Events_UnityAction_o *onDelete,
               System_Collections_Generic_List_string__o *disallowedDelete,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)items;
  if (DAT_0570432c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"");
    DAT_0570432c = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar4);
  (__this->fields)._items = items;
  il2cpp_runtime_glue(&(__this->fields)._items,items);
  (__this->fields)._categorizedItems =
       (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._categorizedItems,0);
  *(undefined1 *)&(__this->fields)._useCategories = 0;
  *(undefined1 *)&(__this->fields)._isSave = 0;
  (__this->fields)._onLoad = onLoad;
  il2cpp_runtime_glue(&(__this->fields)._onLoad,onLoad);
  *(bool *)((long)&(__this->fields)._isSave + 1) =
       onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  (__this->fields)._disallowedDelete = disallowedDelete;
  il2cpp_runtime_glue(&(__this->fields)._disallowedDelete,disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  il2cpp_runtime_glue(&(__this->fields)._onDelete,onDelete);
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,"",MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._inputElement;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)();
      pMVar4 = (MethodInfo *)0x0;
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,0,method_00);
      UI_SelectListPopup__ToggleSaveElements(__this,pMVar4);
      pMVar4 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      bVar3 = System_String__op_Inequality(title,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_01);
        pMVar4 = (MethodInfo *)title;
      }
      UI_SelectListPopup__RefreshList(__this,pMVar4);
      pUVar1 = (__this->fields)._inputElement;
      if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
         (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
        (*(pUVar2->klass->vtable)._38_Select.methodPtr)();
        pUVar1 = (__this->fields)._inputElement;
        if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
          UnityEngine_UI_InputField__ActivateInputField(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$ShowLoadCategorized
// il2cpp: void UI_SelectListPopup__ShowLoadCategorized (UI_SelectListPopup_o* __this, System_Collections_Generic_List_SelectListPopup_ItemCategory__o* categories, System_String_o* title, UnityEngine_Events_UnityAction_o* onLoad, const MethodInfo* method);
// 0x40296a0

/* WARNING: Removing unreachable block (ram,0x0402992e) */

void UI_SelectListPopup__ShowLoadCategorized
               (UI_SelectListPopup_o *__this,
               System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories,
               System_String_o *title,UnityEngine_Events_UnityAction_o *onLoad,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  uint uVar3;
  System_String_c *__this_00;
  System_String_array *pSVar4;
  Settings_StringSetting_o *__this_01;
  UI_InputSettingElement_o *pUVar5;
  UI_InputSettingElement_c *pUVar6;
  UnityEngine_UI_InputField_o *pUVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  MethodInfo *method_00;
  MethodInfo *pMVar11;
  MethodInfo *title_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_247328 _Var14;
  System_Collections_Generic_List_Enumerator_T__c *local_78;
  Il2CppRGCTXData *pIStack_70;
  _union_247328 local_68;
  _union_247328 local_58;
  MethodInfo *local_50;
  undefined1 local_48 [16];
  _union_247328 local_38;
  
  pMVar11 = (MethodInfo *)categories;
  local_58 = (_union_247328)onLoad;
  local_50 = (MethodInfo *)title;
  if (DAT_0570432d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_SelectListPopup_ItemCategory_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_SelectListPopup_ItemCate);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570432d = '\x01';
  }
  local_78 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  local_68.genericMethod = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar11);
  (__this->fields)._categorizedItems = categories;
  il2cpp_runtime_glue(&(__this->fields)._categorizedItems,categories);
  *(undefined1 *)&(__this->fields)._useCategories = 1;
  pSVar10 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_System_String);
  ppSVar2 = &(__this->fields)._items;
  (__this->fields)._items = pSVar10;
  il2cpp_runtime_glue(ppSVar2,pSVar10);
  if (categories != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)categories,MethodInfo_List_1_T__Enumerator_UI_SelectListPopup_ItemCate);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar13 = (Il2CppRGCTXData *)local_48._8_8_;
    _Var14 = local_38;
    while (__this_02.fields._8_8_ = pIVar13,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
          __this_02.fields._current = _Var14.genericMethod,
          bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff68),
          (char)bVar9 != '\0') {
      if (_Var14.genericMethod == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00 = ((System_String_o *)((long)_Var14.genericMethod + 0x18))->klass;
      if (__this_00 == (System_String_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      local_68.genericMethod = local_38.genericMethod;
      local_78 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIStack_70 = (Il2CppRGCTXData *)local_48._8_8_;
      while (__this_03.fields._8_8_ = pIVar13,
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
            __this_03.fields._current = _Var14.genericMethod,
            bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_03,(MethodInfo_3185E20 *)&local_78), lVar8 = MethodInfo_Void_Add,
            (char)bVar9 != '\0') {
        pSVar10 = *ppSVar2;
        if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(pSVar10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar10->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (pSVar10->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar10->fields)._size = uVar3 + 1;
          ((_union_247328 *)(pSVar4->m_Items + (int)uVar3))->genericMethod = (void *)local_68;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,local_68.genericMethod,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this_04.fields._8_8_ = pIVar13;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_04.fields._current = _Var14.genericMethod;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&local_78);
    }
    __this_05.fields._8_8_ = pIVar13;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_05.fields._current = _Var14.genericMethod;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff68);
    *(undefined1 *)&(__this->fields)._isSave = 0;
    (__this->fields)._onLoad = (UnityEngine_Events_UnityAction_o *)local_58;
    il2cpp_runtime_glue(&(__this->fields)._onLoad);
    *(undefined1 *)((long)&(__this->fields)._isSave + 1) = 0;
    (__this->fields)._disallowedDelete = (System_Collections_Generic_List_string__o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._disallowedDelete,0);
    (__this->fields)._onDelete = (UnityEngine_Events_UnityAction_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._onDelete,0);
    __this_01 = (__this->fields).FinishSetting;
    if (__this_01 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_01,
                 (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
      pUVar5 = (__this->fields)._inputElement;
      if (pUVar5 != (UI_InputSettingElement_o *)0x0) {
        pUVar6 = pUVar5->klass;
        pMVar11 = (pUVar6->vtable)._6_SyncElement.method;
        (*(pUVar6->vtable)._6_SyncElement.methodPtr)();
        UI_SelectListPopup__SetupCategoryTabs(__this,pMVar11);
        UI_SelectListPopup__ToggleSaveElements(__this,pMVar11);
        title_00 = local_50;
        pMVar11 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        bVar9 = System_String__op_Inequality
                          ((System_String_o *)local_50,(System_String_o *)pMVar11,(MethodInfo *)0x0)
        ;
        if ((char)bVar9 != '\0') {
          UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,(System_String_o *)title_00,method_00)
          ;
          pMVar11 = title_00;
        }
        UI_SelectListPopup__RefreshList(__this,pMVar11);
        pUVar5 = (__this->fields)._inputElement;
        if ((pUVar5 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar7 = (pUVar5->fields)._inputField, pUVar7 != (UnityEngine_UI_InputField_o *)0x0)) {
          (*(pUVar7->klass->vtable)._38_Select.methodPtr)();
          pUVar5 = (__this->fields)._inputElement;
          if ((pUVar5 != (UI_InputSettingElement_o *)0x0) &&
             (pUVar7 = (pUVar5->fields)._inputField, pUVar7 != (UnityEngine_UI_InputField_o *)0x0))
          {
            UnityEngine_UI_InputField__ActivateInputField(pUVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$ShowSave
// il2cpp: void UI_SelectListPopup__ShowSave (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, System_String_o* initial, UnityEngine_Events_UnityAction_o* onSave, System_Collections_Generic_List_string__o* disallowedSave, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, const MethodInfo* method);
// 0x402a110

void UI_SelectListPopup__ShowSave
               (UI_SelectListPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_String_o *title,System_String_o *initial,
               UnityEngine_Events_UnityAction_o *onSave,
               System_Collections_Generic_List_string__o *disallowedSave,
               UnityEngine_Events_UnityAction_o *onDelete,
               System_Collections_Generic_List_string__o *disallowedDelete,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)items;
  if (DAT_0570432e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570432e = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar4);
  (__this->fields)._items = items;
  il2cpp_runtime_glue(&(__this->fields)._items,items);
  (__this->fields)._categorizedItems =
       (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._categorizedItems,0);
  *(undefined1 *)&(__this->fields)._useCategories = 0;
  *(undefined1 *)&(__this->fields)._isSave = 1;
  (__this->fields)._onSave = onSave;
  il2cpp_runtime_glue(&(__this->fields)._onSave,onSave);
  (__this->fields)._disallowedSave = disallowedSave;
  il2cpp_runtime_glue(&(__this->fields)._disallowedSave,disallowedSave);
  *(bool *)((long)&(__this->fields)._isSave + 1) =
       onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  (__this->fields)._disallowedDelete = disallowedDelete;
  il2cpp_runtime_glue(&(__this->fields)._disallowedDelete,disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  il2cpp_runtime_glue(&(__this->fields)._onDelete,onDelete);
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)initial,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._inputElement;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)();
      pMVar4 = (MethodInfo *)0x0;
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,0,method_00);
      UI_SelectListPopup__ToggleSaveElements(__this,pMVar4);
      pMVar4 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      bVar3 = System_String__op_Inequality(title,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_01);
        pMVar4 = (MethodInfo *)title;
      }
      UI_SelectListPopup__RefreshList(__this,pMVar4);
      pUVar1 = (__this->fields)._inputElement;
      if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
         (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
        (*(pUVar2->klass->vtable)._38_Select.methodPtr)();
        pUVar1 = (__this->fields)._inputElement;
        if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
          UnityEngine_UI_InputField__ActivateInputField(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$ToggleSaveElements
// il2cpp: void UI_SelectListPopup__ToggleSaveElements (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x40293a0

void UI_SelectListPopup__ToggleSaveElements(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  System_String_o *title;
  MethodInfo *method_00;
  undefined8 *puVar3;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  UnityEngine_GameObject_o *pUVar6;
  undefined1 local_38 [16];
  UnityEngine_GameObject_o *local_28;
  
  if (DAT_0570432f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Load");
    il2cpp_init_method_metadata(&"Save");
    DAT_0570432f = '\x01';
  }
  __this_00 = (__this->fields)._saveElements;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    if ((char)(__this->fields)._isSave == '\0') {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
      pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
      pIVar5 = (Il2CppType *)local_38._8_8_;
      pUVar6 = local_28;
      while (__this_03.fields._8_8_ = pIVar5,
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar4,
            __this_03.fields._current = (Il2CppObject *)pUVar6,
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar2 != '\0') {
        if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
      }
      __this_04.fields._8_8_ = pIVar5;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_04.fields._current = (Il2CppObject *)pUVar6;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
      puVar3 = &"Load";
      iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
    }
    else {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
      pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
      pIVar5 = (Il2CppType *)local_38._8_8_;
      pUVar6 = local_28;
      while (__this_01.fields._8_8_ = pIVar5,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar4,
            __this_01.fields._current = (Il2CppObject *)pUVar6,
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar2 != '\0') {
        if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
      }
      __this_02.fields._8_8_ = pIVar5;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_02.fields._current = (Il2CppObject *)pUVar6;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
      puVar3 = &"Save";
      iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    title = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar3,(MethodInfo *)0x0);
    UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$RefreshList
// il2cpp: void UI_SelectListPopup__RefreshList (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028890

void UI_SelectListPopup__RefreshList(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  Il2CppObject *__this_04;
  Il2CppClass *method_00;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Func_TSource__bool__o *pSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar6;
  MethodInfo *method_03;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  System_String_o *pSVar10;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_05704330 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Where_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RefreshList_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RefreshList_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass50_0);
    DAT_05704330 = '\x01';
  }
  __this_04 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass50_0);
  method_03 = (MethodInfo *)0x0;
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  UI_SelectListPopup__ClearListButtons(__this,method_03);
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (pSVar10 = (pSVar1->fields)._value, pSVar10 != (System_String_o *)0x0)) {
    iVar6 = 0;
    method_00 = (Il2CppClass *)System_String__ToLowerInvariant(pSVar10,(MethodInfo *)0x0);
    if (__this_04 != (Il2CppObject *)0x0) {
      pIVar7 = __this_04 + 1;
      __this_04[1].klass = method_00;
      il2cpp_runtime_glue(pIVar7);
      if (((char)(__this->fields)._useCategories == '\0') ||
         ((__this->fields)._categorizedItems ==
          (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) {
        bVar2 = System_String__IsNullOrEmpty((System_String_o *)pIVar7->klass,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar3 = (__this->fields)._items;
          pSVar4 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
          System_Func<object__bool>___ctor();
          pSVar5 = System_Linq_Enumerable__Where<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,pSVar4,
                              MethodInfo_IEnumerable_1_System_String__Where_String);
          pSVar3 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList<object>(pSVar5,MethodInfo_List_1_System_String__ToList_String);
        }
        else {
          pSVar3 = (__this->fields)._items;
        }
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_04028bfd;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar9 = (Il2CppType *)local_48._8_8_;
        pSVar10 = local_38;
        while (__this_02.fields._8_8_ = pIVar9,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
              __this_02.fields._current = (Il2CppObject *)pSVar10,
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              (char)bVar2 != '\0') {
          UI_SelectListPopup__CreateItemButton(__this,pSVar10,method_02);
          iVar6 = iVar6 + 1;
        }
      }
      else {
        pSVar3 = UI_SelectListPopup__GetActiveCategoryItems(__this,(MethodInfo *)method_00);
        bVar2 = System_String__IsNullOrEmpty((System_String_o *)pIVar7->klass,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar4 = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
          System_Func<object__bool>___ctor();
          pSVar5 = System_Linq_Enumerable__Where<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,pSVar4,
                              MethodInfo_IEnumerable_1_System_String__Where_String);
          pSVar3 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList<object>(pSVar5,MethodInfo_List_1_System_String__ToList_String);
        }
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_04028bfd;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        iVar6 = 0;
        pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar9 = (Il2CppType *)local_48._8_8_;
        pSVar10 = local_38;
        while (__this_01.fields._8_8_ = pIVar9,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
              __this_01.fields._current = (Il2CppObject *)pSVar10,
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              (char)bVar2 != '\0') {
          UI_SelectListPopup__CreateItemButton(__this,pSVar10,method_01);
          iVar6 = iVar6 + 1;
        }
      }
      __this_03.fields._8_8_ = pIVar9;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_03.fields._current = (Il2CppObject *)pSVar10;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      __this_00 = (__this->fields)._noItemsLabel;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,(uint)(iVar6 == 0),(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_04028bfd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$CreateItemButton
// il2cpp: void UI_SelectListPopup__CreateItemButton (UI_SelectListPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x402a4b0

void UI_SelectListPopup__CreateItemButton
               (UI_SelectListPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  long lVar6;
  int32_t value_01;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar11;
  UnityEngine_UI_Text_o *__this_04;
  System_String_o *pSVar12;
  void **ppvVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_UI_ColorBlock_o local_140;
  UnityEngine_Color_Fields local_e8;
  UnityEngine_Color_Fields local_d8;
  UnityEngine_Color_Fields local_c8;
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [2];
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  if (DAT_05704331 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateItemButton_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateItemButton_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass51_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"ItemButton");
    il2cpp_init_method_metadata(&"Prefabs/Misc/SelectListButton");
    il2cpp_init_method_metadata(&"DeleteButton");
    il2cpp_init_method_metadata(&"");
    DAT_05704331 = '\x01';
  }
  pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass51_0);
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar8 + 1,__this);
    ppvVar13 = &pIVar8[1].monitor;
    pIVar8[1].monitor = item;
    il2cpp_runtime_glue(ppvVar13,item);
    pUVar9 = UI_ElementFactory__InstantiateAndBind
                       ((__this->fields).SinglePanel,"Prefabs/Misc/SelectListButton",(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    __this_00 = (__this->fields)._itemButtons;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pUVar4->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pUVar4->m_Items[(int)uVar3] = pUVar9;
          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar9,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        if (((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
            pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar10 = UnityEngine_Transform__Find(pUVar10,"ItemButton",(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          __this_02 = (UnityEngine_UI_Selectable_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)pUVar10,MethodInfo_Button_GetComponent_Button);
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
          if (((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
              (pUVar10 = UnityEngine_Transform__Find(pUVar10,"DeleteButton",(MethodInfo *)0x0),
              pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
             (__this_03 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar10,MethodInfo_Button_GetComponent_Button),
             __this_02 != (UnityEngine_UI_Selectable_o *)0x0)) {
            pUVar5 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).m_CanvasGroupCache;
            pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar11,(MethodInfo *)0x0);
              pUVar10 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
              if (((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                  (pUVar10 = UnityEngine_Transform__Find(pUVar10,"Text",(MethodInfo *)0x0),
                  pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                 (pIVar8 = UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text),
                 pIVar8 != (Il2CppObject *)0x0)) {
                (*pIVar8->klass->vtable[0x4b].methodPtr)
                          (pIVar8,*ppvVar13,pIVar8->klass->vtable[0x4b].method);
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                   (pUVar10 = UnityEngine_Transform__Find(pUVar10,"Text",(MethodInfo *)0x0),
                   pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                  __this_04 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                  value_01 = (*(__this->klass->vtable)._60_get_ItemFontSize.methodPtr)
                                       (__this,(__this->klass->vtable)._60_get_ItemFontSize.method);
                  if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                    UnityEngine_UI_Text__set_fontSize(__this_04,value_01,(MethodInfo *)0x0);
                    pSVar12 = (System_String_o *)
                              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UI_UIManager__GetThemeColorBlock
                              (&local_140,pSVar12,"ItemButton","","DefaultPanel",
                               (MethodInfo *)0x0);
                    local_38 = local_140.fields.m_ColorMultiplier;
                    fStack_34 = local_140.fields.m_FadeDuration;
                    local_48.r = local_140.fields.m_DisabledColor.fields.r;
                    local_48.g = local_140.fields.m_DisabledColor.fields.g;
                    local_48.b = local_140.fields.m_DisabledColor.fields.b;
                    local_48.a = local_140.fields.m_DisabledColor.fields.a;
                    local_58.r = local_140.fields.m_SelectedColor.fields.r;
                    local_58.g = local_140.fields.m_SelectedColor.fields.g;
                    local_58.b = local_140.fields.m_SelectedColor.fields.b;
                    local_58.a = local_140.fields.m_SelectedColor.fields.a;
                    local_68.r = local_140.fields.m_PressedColor.fields.r;
                    local_68.g = local_140.fields.m_PressedColor.fields.g;
                    local_68.b = local_140.fields.m_PressedColor.fields.b;
                    local_68.a = local_140.fields.m_PressedColor.fields.a;
                    local_78.r = local_140.fields.m_HighlightedColor.fields.r;
                    local_78.g = local_140.fields.m_HighlightedColor.fields.g;
                    local_78.b = local_140.fields.m_HighlightedColor.fields.b;
                    local_78.a = local_140.fields.m_HighlightedColor.fields.a;
                    local_88.r = local_140.fields.m_NormalColor.fields.r;
                    local_88.g = local_140.fields.m_NormalColor.fields.g;
                    local_88.b = local_140.fields.m_NormalColor.fields.b;
                    local_88.a = local_140.fields.m_NormalColor.fields.a;
                    value.fields.m_NormalColor.fields.b = local_140.fields.m_NormalColor.fields.b;
                    value.fields.m_NormalColor.fields.a = local_140.fields.m_NormalColor.fields.a;
                    value.fields.m_NormalColor.fields.r = local_140.fields.m_NormalColor.fields.r;
                    value.fields.m_NormalColor.fields.g = local_140.fields.m_NormalColor.fields.g;
                    value.fields.m_HighlightedColor.fields.r =
                         local_140.fields.m_HighlightedColor.fields.r;
                    value.fields.m_HighlightedColor.fields.g =
                         local_140.fields.m_HighlightedColor.fields.g;
                    value.fields.m_HighlightedColor.fields.b =
                         local_140.fields.m_HighlightedColor.fields.b;
                    value.fields.m_HighlightedColor.fields.a =
                         local_140.fields.m_HighlightedColor.fields.a;
                    value.fields.m_PressedColor.fields.r = local_140.fields.m_PressedColor.fields.r;
                    value.fields.m_PressedColor.fields.g = local_140.fields.m_PressedColor.fields.g;
                    value.fields.m_PressedColor.fields.b = local_140.fields.m_PressedColor.fields.b;
                    value.fields.m_PressedColor.fields.a = local_140.fields.m_PressedColor.fields.a;
                    value.fields.m_SelectedColor.fields.r =
                         local_140.fields.m_SelectedColor.fields.r;
                    value.fields.m_SelectedColor.fields.g =
                         local_140.fields.m_SelectedColor.fields.g;
                    value.fields.m_SelectedColor.fields.b =
                         local_140.fields.m_SelectedColor.fields.b;
                    value.fields.m_SelectedColor.fields.a =
                         local_140.fields.m_SelectedColor.fields.a;
                    value.fields.m_DisabledColor.fields.r =
                         local_140.fields.m_DisabledColor.fields.r;
                    value.fields.m_DisabledColor.fields.g =
                         local_140.fields.m_DisabledColor.fields.g;
                    value.fields.m_DisabledColor.fields.b =
                         local_140.fields.m_DisabledColor.fields.b;
                    value.fields.m_DisabledColor.fields.a =
                         local_140.fields.m_DisabledColor.fields.a;
                    value.fields.m_ColorMultiplier = local_140.fields.m_ColorMultiplier;
                    value.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
                    UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                    pUVar10 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                    if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                       (pUVar10 = UnityEngine_Transform__Find
                                            (pUVar10,"Text",(MethodInfo *)0x0),
                       pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                      pIVar8 = UnityEngine_Component__GetComponent<object>
                                         ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                      pSVar12 = (System_String_o *)
                                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                      UVar16 = UI_UIManager__GetThemeColor
                                         (pSVar12,"ItemButton","TextColor","DefaultPanel",
                                          (MethodInfo *)0x0);
                      if (pIVar8 != (Il2CppObject *)0x0) {
                        (*pIVar8->klass->vtable[0x17].methodPtr)
                                  (UVar16.fields.r,UVar16.fields.b,pIVar8,
                                   pIVar8->klass->vtable[0x17].method);
                        cVar2 = *(char *)((long)&(__this->fields)._isSave + 1);
                        pIVar8 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        fVar14 = (float)(*(__this->klass->vtable)._59_get_ItemButtonWidth.methodPtr)
                                                  (__this,(__this->klass->vtable).
                                                          _59_get_ItemButtonWidth.method);
                        if (cVar2 == '\0') {
                          fVar15 = (float)(*(__this->klass->vtable)._61_get_DeleteButtonSize.
                                            methodPtr)(__this,(__this->klass->vtable).
                                                              _61_get_DeleteButtonSize.method);
                          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0402acb7;
                          (*pIVar8->klass->vtable[0x24].methodPtr)(fVar14 + fVar15 + 10.0,pIVar8);
                          cVar2 = *(char *)((long)&(__this->fields)._isSave + 1);
                        }
                        else {
                          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0402acb7;
                          (*pIVar8->klass->vtable[0x24].methodPtr)(pIVar8);
                          cVar2 = *(char *)((long)&(__this->fields)._isSave + 1);
                        }
                        if ((cVar2 == '\0') ||
                           ((__this_01 = (__this->fields)._disallowedDelete,
                            __this_01 != (System_Collections_Generic_List_string__o *)0x0 &&
                            (bVar7 = System_Collections_Generic_List<object>__Contains
                                               ((System_Collections_Generic_List_object__o *)
                                                __this_01,*ppvVar13,MethodInfo_Boolean_Contains),
                            (char)bVar7 != '\0')))) {
                          if ((__this_03 != (UnityEngine_UI_Selectable_o *)0x0) &&
                             (pUVar9 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)__this_03,
                                                  (MethodInfo *)0x0),
                             pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        else if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                          pUVar5 = (UnityEngine_Events_UnityEvent_o *)
                                   (__this_03->fields).m_CanvasGroupCache;
                          pUVar11 = (UnityEngine_Events_UnityAction_o *)
                                    il2cpp_runtime_glue(TypeInfo_UnityAction);
                          UnityEngine_Events_UnityAction___ctor();
                          if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener
                                      (pUVar5,pUVar11,(MethodInfo *)0x0);
                            pIVar8 = UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)__this_03,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                            (*(__this->klass->vtable)._61_get_DeleteButtonSize.methodPtr)
                                      (__this,(__this->klass->vtable)._61_get_DeleteButtonSize.
                                              method);
                            if (pIVar8 != (Il2CppObject *)0x0) {
                              (*pIVar8->klass->vtable[0x24].methodPtr)
                                        (pIVar8,pIVar8->klass->vtable[0x24].method);
                              pIVar8 = UnityEngine_Component__GetComponent<object>
                                                 ((UnityEngine_Component_o *)__this_03,MethodInfo_LayoutElement_GetComponent_LayoutElement)
                              ;
                              (*(__this->klass->vtable)._61_get_DeleteButtonSize.methodPtr)
                                        (__this,(__this->klass->vtable)._61_get_DeleteButtonSize.
                                                method);
                              if (pIVar8 != (Il2CppObject *)0x0) {
                                (*pIVar8->klass->vtable[0x26].methodPtr)
                                          (pIVar8,pIVar8->klass->vtable[0x26].method);
                                pSVar12 = (System_String_o *)
                                          (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this,(__this->klass->vtable).
                                                            _4_get_ThemePanel.method);
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_init_class();
                                }
                                UI_UIManager__GetThemeColorBlock
                                          (&local_140,pSVar12,"DeleteButton","","DefaultPanel"
                                           ,(MethodInfo *)0x0);
                                local_a8[1].r = local_140.fields.m_ColorMultiplier;
                                local_a8[1].g = local_140.fields.m_FadeDuration;
                                local_a8[0].r = local_140.fields.m_DisabledColor.fields.r;
                                local_a8[0].g = local_140.fields.m_DisabledColor.fields.g;
                                local_a8[0].b = local_140.fields.m_DisabledColor.fields.b;
                                local_a8[0].a = local_140.fields.m_DisabledColor.fields.a;
                                local_b8.r = local_140.fields.m_SelectedColor.fields.r;
                                local_b8.g = local_140.fields.m_SelectedColor.fields.g;
                                local_b8.b = local_140.fields.m_SelectedColor.fields.b;
                                local_b8.a = local_140.fields.m_SelectedColor.fields.a;
                                local_c8.r = local_140.fields.m_PressedColor.fields.r;
                                local_c8.g = local_140.fields.m_PressedColor.fields.g;
                                local_c8.b = local_140.fields.m_PressedColor.fields.b;
                                local_c8.a = local_140.fields.m_PressedColor.fields.a;
                                local_d8.r = local_140.fields.m_HighlightedColor.fields.r;
                                local_d8.g = local_140.fields.m_HighlightedColor.fields.g;
                                local_d8.b = local_140.fields.m_HighlightedColor.fields.b;
                                local_d8.a = local_140.fields.m_HighlightedColor.fields.a;
                                local_e8.r = local_140.fields.m_NormalColor.fields.r;
                                local_e8.g = local_140.fields.m_NormalColor.fields.g;
                                local_e8.b = local_140.fields.m_NormalColor.fields.b;
                                local_e8.a = local_140.fields.m_NormalColor.fields.a;
                                value_00.fields.m_NormalColor.fields.b =
                                     local_140.fields.m_NormalColor.fields.b;
                                value_00.fields.m_NormalColor.fields.a =
                                     local_140.fields.m_NormalColor.fields.a;
                                value_00.fields.m_NormalColor.fields.r =
                                     local_140.fields.m_NormalColor.fields.r;
                                value_00.fields.m_NormalColor.fields.g =
                                     local_140.fields.m_NormalColor.fields.g;
                                value_00.fields.m_HighlightedColor.fields.r =
                                     local_140.fields.m_HighlightedColor.fields.r;
                                value_00.fields.m_HighlightedColor.fields.g =
                                     local_140.fields.m_HighlightedColor.fields.g;
                                value_00.fields.m_HighlightedColor.fields.b =
                                     local_140.fields.m_HighlightedColor.fields.b;
                                value_00.fields.m_HighlightedColor.fields.a =
                                     local_140.fields.m_HighlightedColor.fields.a;
                                value_00.fields.m_PressedColor.fields.r =
                                     local_140.fields.m_PressedColor.fields.r;
                                value_00.fields.m_PressedColor.fields.g =
                                     local_140.fields.m_PressedColor.fields.g;
                                value_00.fields.m_PressedColor.fields.b =
                                     local_140.fields.m_PressedColor.fields.b;
                                value_00.fields.m_PressedColor.fields.a =
                                     local_140.fields.m_PressedColor.fields.a;
                                value_00.fields.m_SelectedColor.fields.r =
                                     local_140.fields.m_SelectedColor.fields.r;
                                value_00.fields.m_SelectedColor.fields.g =
                                     local_140.fields.m_SelectedColor.fields.g;
                                value_00.fields.m_SelectedColor.fields.b =
                                     local_140.fields.m_SelectedColor.fields.b;
                                value_00.fields.m_SelectedColor.fields.a =
                                     local_140.fields.m_SelectedColor.fields.a;
                                value_00.fields.m_DisabledColor.fields.r =
                                     local_140.fields.m_DisabledColor.fields.r;
                                value_00.fields.m_DisabledColor.fields.g =
                                     local_140.fields.m_DisabledColor.fields.g;
                                value_00.fields.m_DisabledColor.fields.b =
                                     local_140.fields.m_DisabledColor.fields.b;
                                value_00.fields.m_DisabledColor.fields.a =
                                     local_140.fields.m_DisabledColor.fields.a;
                                value_00.fields.m_ColorMultiplier =
                                     local_140.fields.m_ColorMultiplier;
                                value_00.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
                                UnityEngine_UI_Selectable__set_colors
                                          (__this_03,value_00,(MethodInfo *)0x0);
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
LAB_0402acb7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$ClearListButtons
// il2cpp: void UI_SelectListPopup__ClearListButtons (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402a300

void UI_SelectListPopup__ClearListButtons(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar6;
  
  if (DAT_05704332 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704332 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._itemButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      __this_00.fields._8_8_ = pIVar5;
      __this_00.fields._list = pSVar4;
      __this_00.fields._current = (Il2CppObject *)obj;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') break;
      pUVar6 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      obj = pUVar6;
    }
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
    pSVar2 = (__this->fields)._itemButtons;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$GetActiveCategoryItems
// il2cpp: System_Collections_Generic_List_string__o* UI_SelectListPopup__GetActiveCategoryItems (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4028cb0

System_Collections_Generic_List_string__o *
UI_SelectListPopup__GetActiveCategoryItems(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *pSVar1;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_string__o **ppSVar3;
  
  if (DAT_05704333 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SelectListPopup_ItemCategory_FirstOrDefault_Sele);
    il2cpp_init_method_metadata(&TypeInfo_Func_ItemCategory__bool);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_SelectListPopup_ItemCategory_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetActiveCategoryItems_b__53_0);
    DAT_05704333 = '\x01';
  }
  if ((((char)(__this->fields)._useCategories == '\0') ||
      (pSVar1 = (__this->fields)._categorizedItems,
      pSVar1 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     ((pSVar1->fields)._size == 0)) {
    ppSVar3 = &(__this->fields)._items;
  }
  else {
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_ItemCategory__bool);
    System_Func<object__bool>___ctor();
    pIVar2 = System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,predicate,
                        MethodInfo_SelectListPopup_ItemCategory_FirstOrDefault_Sele);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pSVar1 = (__this->fields)._categorizedItems;
      if (pSVar1 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
LAB_04028dca:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_SelectListPopup_ItemCategory_get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_04028dca;
    }
    (__this->fields)._activeCategoryName = (System_String_o *)pIVar2[1].klass;
    il2cpp_runtime_glue(&(__this->fields)._activeCategoryName);
    ppSVar3 = &pIVar2[1].monitor;
  }
  return *ppSVar3;
}


// UI.SelectListPopup$$SetupCategoryTabs
// il2cpp: void UI_SelectListPopup__SetupCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4029bb0

void UI_SelectListPopup__SetupCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *pSVar3;
  Il2CppClass *title;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar5;
  bool_conflict bVar6;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar7;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_03;
  Il2CppObject *__this_04;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05704334 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_SelectListPopup_ItemCategory);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SelectListPopup_ItemCategory_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_ItemCategory__bool);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_SelectListPopup_ItemCate);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_SelectListPopup_ItemCategory_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__SetupCategoryTabs_b__54_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupCategoryTabs_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass54_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_05704334 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  UI_SelectListPopup__ClearCategoryTabs(__this,pMVar9);
  if ((((char)(__this->fields)._useCategories == '\0') ||
      (pSVar3 = (__this->fields)._categorizedItems,
      pSVar3 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     ((pSVar3->fields)._size == 0)) {
    (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
    ;
    il2cpp_runtime_glue(&(__this->fields)._activeCategoryName);
    UI_SelectListPopup__SetCategoryTabsEnabled(__this,0,method_00);
    return;
  }
  bVar6 = System_String__op_Equality
                    ((__this->fields)._activeCategoryName,
                     (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pSVar3 = (__this->fields)._categorizedItems;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_ItemCategory__bool);
    System_Func<object__bool>___ctor();
    bVar6 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,
                       MethodInfo_Boolean_Any_SelectListPopup_ItemCategory);
    if ((char)bVar6 == '\0') goto LAB_04029d74;
  }
  else {
LAB_04029d74:
    pSVar3 = (__this->fields)._categorizedItems;
    if ((pSVar3 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) ||
       (pIVar7 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_SelectListPopup_ItemCategory_get_Item),
       pIVar7 == (Il2CppObject *)0x0)) goto LAB_0402a018;
    (__this->fields)._activeCategoryName = (System_String_o *)pIVar7[1].klass;
    il2cpp_runtime_glue();
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_03,0x14,120.0,20.0,themePanel,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._categorizedItems;
  if (pSVar3 != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_UI_SelectListPopup_ItemCate);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    pIVar7 = local_38;
    while( true ) {
      __this_01.fields._8_8_ = pIVar11;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
      __this_01.fields._current = pIVar7;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar6 == '\0') {
        __this_02.fields._8_8_ = pIVar11;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        pMVar9 = (MethodInfo *)0x1;
        UI_SelectListPopup__SetCategoryTabsEnabled(__this,1,method_01);
        UI_SelectListPopup__SyncCategoryTabs(__this,pMVar9);
        return;
      }
      pIVar12 = pIVar7;
      __this_04 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass54_0);
      System_Object___ctor(__this_04,(MethodInfo *)0x0);
      if (__this_04 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_04[1].monitor = __this;
      il2cpp_runtime_glue(&__this_04[1].monitor,__this);
      if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_04[1].klass = pIVar7[1].klass;
      il2cpp_runtime_glue(__this_04 + 1);
      pUVar8 = (__this->fields)._categoryButtonContainer;
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) break;
      parent = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      title = __this_04[1].klass;
      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pUVar8 = UI_ElementFactory__CreateDefaultButton
                         (parent,__this_03,(System_String_o *)title,140.0,36.0,onClick,
                          (MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      __this_00 = (__this->fields)._categoryButtons;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = pUVar8;
        il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,pUVar8);
        pIVar7 = pIVar12;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar8,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        pIVar7 = pIVar12;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0402a018:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$SetCategoryTabsEnabled
// il2cpp: void UI_SelectListPopup__SetCategoryTabsEnabled (UI_SelectListPopup_o* __this, bool enabled, const MethodInfo* method);
// 0x4029210

void UI_SelectListPopup__SetCategoryTabsEnabled
               (UI_SelectListPopup_o *__this,bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_LayoutGroup_o *__this_00;
  int32_t value;
  MethodInfo *method_00;
  byte bVar4;
  
  if (DAT_05704335 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Label");
    DAT_05704335 = '\x01';
  }
  pUVar2 = (__this->fields).TopBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar4 = (byte)enabled;
  if ((char)bVar1 != '\0') {
    pUVar2 = (__this->fields).TopBar;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04029397;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04029397;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_04029397;
      UnityEngine_GameObject__SetActive(pUVar3,(uint)(bVar4 ^ 1),(MethodInfo *)0x0);
    }
    if ((char)(__this->fields)._cachedTopBarAlignment != '\0') {
      pUVar2 = (__this->fields).TopBar;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04029397;
      __this_00 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar2,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
      value = 4;
      if (bVar4 == 0) {
        value = (__this->fields)._defaultTopBarAlignment;
      }
      if (__this_00 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_04029397;
      UnityEngine_UI_LayoutGroup__set_childAlignment(__this_00,value,(MethodInfo *)0x0);
    }
  }
  x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar3 = (__this->fields)._categoryButtonContainer;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
LAB_04029397:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = (MethodInfo *)(ulong)(enabled & 0xffU);
    UnityEngine_GameObject__SetActive(pUVar3,enabled & 0xffU,(MethodInfo *)0x0);
  }
  if (bVar4 != 0) {
    return;
  }
  UI_SelectListPopup__ClearCategoryTabs(__this,method_00);
  return;
}


// UI.SelectListPopup$$ClearCategoryTabs
// il2cpp: void UI_SelectListPopup__ClearCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402acd0

void UI_SelectListPopup__ClearCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar6;
  
  if (DAT_05704336 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704336 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._categoryButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      __this_00.fields._8_8_ = pIVar5;
      __this_00.fields._list = pSVar4;
      __this_00.fields._current = (Il2CppObject *)obj;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') break;
      pUVar6 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      obj = pUVar6;
    }
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
    pSVar2 = (__this->fields)._categoryButtons;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$OnCategoryTabClick
// il2cpp: void UI_SelectListPopup__OnCategoryTabClick (UI_SelectListPopup_o* __this, System_String_o* categoryName, const MethodInfo* method);
// 0x402b150

void UI_SelectListPopup__OnCategoryTabClick
               (UI_SelectListPopup_o *__this,System_String_o *categoryName,MethodInfo *method)

{
  (__this->fields)._activeCategoryName = categoryName;
  il2cpp_runtime_glue(&(__this->fields)._activeCategoryName);
  UI_SelectListPopup__SyncCategoryTabs(__this,(MethodInfo *)categoryName);
  UI_SelectListPopup__RefreshList(__this,(MethodInfo *)categoryName);
  return;
}


// UI.SelectListPopup$$SyncCategoryTabs
// il2cpp: void UI_SelectListPopup__SyncCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402ae90

void UI_SelectListPopup__SyncCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_GameObject_o *pUVar6;
  undefined1 local_48 [16];
  UnityEngine_GameObject_o *local_38;
  
  if (DAT_05704337 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&"Text");
    DAT_05704337 = '\x01';
  }
  __this_00 = (__this->fields)._categoryButtons;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar5 = (Il2CppType *)local_48._8_8_;
  __this_04 = local_38;
  while( true ) {
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
    __this_01.fields._current = (Il2CppObject *)__this_04;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar1 == '\0') {
      __this_02.fields._8_8_ = pIVar5;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_02.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
    if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar6 = __this_04;
    __this_03 = (UnityEngine_UI_Selectable_o *)
                UnityEngine_GameObject__GetComponent<object>(__this_04,MethodInfo_Button_GetComponent_Button);
    pUVar2 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
    pIVar3 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
    if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = (System_String_o *)
        (*pIVar3->klass->vtable[0x4a].methodPtr)(pIVar3,pIVar3->klass->vtable[0x4a].method);
    bVar1 = System_String__op_Equality(a,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_UI_Selectable__set_interactable
              (__this_03,(uint)(byte)((byte)bVar1 ^ 1),(MethodInfo *)0x0);
    __this_04 = pUVar6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$OnItemClick
// il2cpp: void UI_SelectListPopup__OnItemClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4028dd0

void UI_SelectListPopup__OnItemClick
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  long lVar1;
  UI_BasePopup_o *__this_01;
  UI_BasePopup_c *pUVar2;
  void *pvVar3;
  code *vtable_dispatch_00;
  UI_ConfirmPopup_o *__this_02;
  Settings_StringSetting_o *__this_03;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 uVar4;
  bool_conflict bVar5;
  Il2CppObject *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar6;
  undefined8 extraout_RDX;
  void **ppvVar7;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (DAT_05704338 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnItemClick_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass59_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Overwrite this item?");
    il2cpp_init_method_metadata(&"Cannot overwrite this item.");
    DAT_05704338 = '\x01';
  }
  __this_04 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass59_0);
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 != (Il2CppObject *)0x0) {
    __this_04[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_04 + 1,__this);
    ppvVar7 = &__this_04[1].monitor;
    __this_04[1].monitor = name;
    il2cpp_runtime_glue(ppvVar7,name);
    if ((char)(__this->fields)._isSave == '\0') {
      __this_03 = (__this->fields).FinishSetting;
      if (__this_03 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)__this_03,*ppvVar7,MethodInfo_Void_set_Value);
        pUVar6 = (__this->fields)._onLoad;
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)
                    ((pUVar6->fields).method_code,(pUVar6->fields).method);
          vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
          (*vtable_dispatch)
                    (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,
                     vtable_dispatch);
          return;
        }
      }
    }
    else {
      __this_00 = (__this->fields)._disallowedSave;
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        method_00 = *ppvVar7;
        bVar5 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)method_00,MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar4 = "Cannot overwrite this item.";
          lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if ((lVar1 != 0) &&
             (__this_01 = *(UI_BasePopup_o **)(lVar1 + 0x30), __this_01 != (UI_BasePopup_o *)0x0)) {
            UI_BasePopup__Show(__this_01,method_00);
            if (__this_01[1].monitor != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_01[1].monitor,1,(MethodInfo *)0x0);
              pUVar2 = __this_01[1].klass;
              if (pUVar2 != (UI_BasePopup_c *)0x0) {
                pvVar3 = (pUVar2->_1).image;
                vtable_dispatch_00 = *(code **)((long)pvVar3 + 0x5e8);
                (*vtable_dispatch_00)
                          (pUVar2,uVar4,*(undefined8 *)((long)pvVar3 + 0x5f0),
                           vtable_dispatch_00);
                return;
              }
            }
          }
          goto LAB_04029048;
        }
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar1 != 0) {
        __this_02 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
        pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_02,"Overwrite this item?",pUVar6,(System_String_o *)0x0,in_R8);
          return;
        }
      }
    }
  }
LAB_04029048:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$OnConfirmOverwrite
// il2cpp: void UI_SelectListPopup__OnConfirmOverwrite (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x402b190

void UI_SelectListPopup__OnConfirmOverwrite
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_05704339 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704339 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$OnConfirmDelete
// il2cpp: void UI_SelectListPopup__OnConfirmDelete (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x402b210

void UI_SelectListPopup__OnConfirmDelete
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_0570433a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570433a = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)name,MethodInfo_Void_set_Value);
    pUVar2 = (__this->fields)._onDelete;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,
                   (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_Void_set_Value);
        __this_00 = (__this->fields)._items;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)name,
                     MethodInfo_Boolean_Remove);
          UI_SelectListPopup__RefreshList(__this,(MethodInfo *)name);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$OnDeleteClick
// il2cpp: void UI_SelectListPopup__OnDeleteClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x402b2e0

void UI_SelectListPopup__OnDeleteClick
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long lVar1;
  UI_ConfirmPopup_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_Events_UnityAction_o *onConfirm;
  MethodInfo *in_R8;
  
  if (DAT_0570433b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__OnDeleteClick_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass62_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Delete this item?");
    DAT_0570433b = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass62_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_01 + 1,__this);
    __this_01[1].monitor = name;
    il2cpp_runtime_glue(&__this_01[1].monitor,name);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar1 != 0) {
      __this_00 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_00,"Delete this item?",onConfirm,(System_String_o *)0x0,in_R8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$OnButtonClick
// il2cpp: void UI_SelectListPopup__OnButtonClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x402b410

void UI_SelectListPopup__OnButtonClick
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  undefined8 uVar4;
  UI_BasePopup_c *pUVar5;
  void *pvVar6;
  code *vtable_dispatch;
  UI_ConfirmPopup_o *__this_00;
  bool_conflict bVar7;
  undefined8 *puVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UI_BasePopup_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (DAT_0570433c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__63_0);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Overwrite this item?");
    il2cpp_init_method_metadata(&"Cannot overwrite this item.");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Field cannot be empty.");
    il2cpp_init_method_metadata(&"Save");
    DAT_0570433c = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') goto LAB_0402b4bb;
  bVar7 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto LAB_0402b70f;
  method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  bVar7 = System_String__op_Equality
                    ((pSVar1->fields)._value,(System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pSVar3 = (__this->fields)._disallowedSave;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto LAB_0402b70f;
      method_00 = (MethodInfo *)(pSVar1->fields)._value;
      bVar7 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)pSVar3,
                         (Il2CppObject *)method_00,MethodInfo_Boolean_Contains);
      if ((char)bVar7 != '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((lVar2 == 0) ||
           (__this_01 = *(UI_BasePopup_o **)(lVar2 + 0x30), __this_01 == (UI_BasePopup_o *)0x0))
        goto LAB_0402b70f;
        puVar8 = &"Cannot overwrite this item.";
        goto LAB_0402b5f1;
      }
    }
    pSVar1 = (__this->fields).FinishSetting;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pSVar3 = (__this->fields)._items, pSVar3 != (System_Collections_Generic_List_string__o *)0x0
       )) {
      bVar7 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)pSVar3,
                         (Il2CppObject *)(pSVar1->fields)._value,MethodInfo_Boolean_Contains);
      if ((char)bVar7 == '\0') {
        pUVar9 = (__this->fields)._onSave;
        if (pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar9->fields).invoke_impl)
                    ((pUVar9->fields).method_code,(pUVar9->fields).method);
LAB_0402b4bb:
          (*(__this->klass->vtable)._22_Hide.methodPtr)
                    (__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      else {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar2 != 0) {
          __this_00 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
          pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
            UI_ConfirmPopup__Show(__this_00,"Overwrite this item?",pUVar9,(System_String_o *)0x0,in_R8);
            return;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar2 == 0) ||
       (__this_01 = *(UI_BasePopup_o **)(lVar2 + 0x30), __this_01 == (UI_BasePopup_o *)0x0))
    goto LAB_0402b70f;
    puVar8 = &"Field cannot be empty.";
LAB_0402b5f1:
    uVar4 = *puVar8;
    UI_BasePopup__Show(__this_01,method_00);
    if (__this_01[1].monitor != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01[1].monitor,1,(MethodInfo *)0x0);
      pUVar5 = __this_01[1].klass;
      if (pUVar5 != (UI_BasePopup_c *)0x0) {
        pvVar6 = (pUVar5->_1).image;
        vtable_dispatch = *(code **)((long)pvVar6 + 0x5e8);
        (*vtable_dispatch)
                  (pUVar5,uVar4,*(undefined8 *)((long)pvVar6 + 0x5f0),vtable_dispatch);
        return;
      }
    }
  }
LAB_0402b70f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$.ctor
// il2cpp: void UI_SelectListPopup___ctor (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402b720

void UI_SelectListPopup___ctor(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_0570433d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570433d = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._itemButtons = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._itemButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._categoryButtons = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._categoryButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._saveElements = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._saveElements,pSVar1);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._items,__this_00);
  (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._activeCategoryName);
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_0
// il2cpp: void UI_SelectListPopup___Setup_b__44_0 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402b8d0

void UI_SelectListPopup__<Setup>b__44_0(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__OnSearchChanged(__this,method);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_1
// il2cpp: void UI_SelectListPopup___Setup_b__44_1 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402b8e0

void UI_SelectListPopup__<Setup>b__44_1(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__OnSearchChanged(__this,method);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_2
// il2cpp: void UI_SelectListPopup___Setup_b__44_2 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402b8f0

void UI_SelectListPopup__<Setup>b__44_2(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570433e == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_0570433e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SelectListPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_3
// il2cpp: void UI_SelectListPopup___Setup_b__44_3 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402b930

void UI_SelectListPopup__<Setup>b__44_3(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570433f == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570433f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SelectListPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.SelectListPopup$$<GetActiveCategoryItems>b__53_0
// il2cpp: bool UI_SelectListPopup___GetActiveCategoryItems_b__53_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x402b970

bool_conflict
UI_SelectListPopup__<GetActiveCategoryItems>b__53_0
          (UI_SelectListPopup_o *__this,UI_SelectListPopup_ItemCategory_o *x,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (x != (UI_SelectListPopup_ItemCategory_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$<SetupCategoryTabs>b__54_0
// il2cpp: bool UI_SelectListPopup___SetupCategoryTabs_b__54_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x402b9a0

bool_conflict
UI_SelectListPopup__<SetupCategoryTabs>b__54_0
          (UI_SelectListPopup_o *__this,UI_SelectListPopup_ItemCategory_o *x,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (x != (UI_SelectListPopup_ItemCategory_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SelectListPopup$$<OnButtonClick>b__63_0
// il2cpp: void UI_SelectListPopup___OnButtonClick_b__63_0 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x402b9d0

void UI_SelectListPopup__<OnButtonClick>b__63_0(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_String_o *value;
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  Settings_StringSetting_o *__this_00;
  
  if (DAT_05704340 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704340 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    value = (__this_00->fields)._value;
    if (DAT_05704339 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
      DAT_05704339 = '\x01';
      __this_00 = (__this->fields).FinishSetting;
      if (__this_00 == (Settings_StringSetting_o *)0x0) goto LAB_0402ba71;
    }
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
      return;
    }
  }
LAB_0402ba71:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


