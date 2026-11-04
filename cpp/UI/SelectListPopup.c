// Type: UI.SelectListPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SelectListPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SelectListPopup.cs
// --------------------------------

// UI.SelectListPopup.ItemCategory$$.ctor
// il2cpp: void UI_SelectListPopup_ItemCategory___ctor (UI_SelectListPopup_ItemCategory_o* __this, System_String_o* name, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x180c8dad0

void
UI_SelectListPopup_ItemCategory___ctor(UI_SelectListPopup_ItemCategory_o* __this, System_String_o* name, System_Collections_Generic_List_string__o* items, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = _country;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,_country);
  (__this->fields).Items = _language;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Items,_language);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass46_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass46_0___ctor (UI_SelectListPopup___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SelectListPopup___c__DisplayClass46_0___ctor(UI_SelectListPopup___c__DisplayClass46_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass46_0$$<OnSearchEndEdit>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass46_0___OnSearchEndEdit_b__0 (UI_SelectListPopup___c__DisplayClass46_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1821d0b50

bool
UI_SelectListPopup___c__DisplayClass46_0___OnSearchEndEdit_b__0(UI_SelectListPopup___c__DisplayClass46_0_o* __this, System_String_o* item, MethodInfo* method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if (item != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,(__this->fields).query,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass51_0___ctor (UI_SelectListPopup___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SelectListPopup___c__DisplayClass51_0___ctor(UI_SelectListPopup___c__DisplayClass51_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$<RefreshList>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__0 (UI_SelectListPopup___c__DisplayClass51_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1821d0b50

bool
UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__0(UI_SelectListPopup___c__DisplayClass51_0_o* __this, System_String_o* item, MethodInfo* method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if (item != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,(__this->fields).query,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$<RefreshList>b__1
// il2cpp: bool UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__1 (UI_SelectListPopup___c__DisplayClass51_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1821d0b50

bool UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__1
               (UI_SelectListPopup___c__DisplayClass51_0_o *__this,System_String_o *item,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if (item != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,(__this->fields).query,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass52_0___ctor (UI_SelectListPopup___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SelectListPopup___c__DisplayClass52_0___ctor(UI_SelectListPopup___c__DisplayClass52_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$<CreateItemButton>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__0 (UI_SelectListPopup___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x1821d0b90

void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__0
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    UI_SelectListPopup__OnItemClick(__this_00,(__this->fields).item,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$<CreateItemButton>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__1 (UI_SelectListPopup___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x1821d0bc0

void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__1
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *value;
  UI_BaseMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  UI_SelectListPopup___c__DisplayClass63_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_String_o *pSVar4;
  
  value = (__this->fields).__4__this;
  if (value != (UI_SelectListPopup_o *)0x0) {
    pSVar4 = (__this->fields).item;
    if (Il2CppMethodInitialized_184346f4f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UI_SelectListPopup_c__DisplayClass63_0_OnDeleteClick_b__0);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass63_0);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
      il2cpp_codegen_initialize_runtime_metadata(&"Delete this item?");
      Il2CppMethodInitialized_184346f4f = '\x01';
    }
    object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass63_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (UI_SelectListPopup___c__DisplayClass63_0_o *)0x0) {
      (object->fields).__4__this = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,value);
      (object->fields).name = pSVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).name,pSVar4);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar1 != (UI_BaseMenu_o *)0x0) {
        __this_00 = (pUVar1->fields).ConfirmPopup;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass63_0_OnDeleteClick_b__0,
                   (MethodInfo *)0x0);
        pSVar4 = "Delete this item?";
        if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
          __this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            bVar3 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
            if (!bVar3) {
              UI_BasePopup__Show((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
              pUVar2 = (__this_00->fields)._label;
              if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1821d0d66;
              (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                        (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
              (__this_00->fields)._onConfirm = __this_01;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onConfirm,__this_01);
              pSVar4 = (*(__this_00->klass->vtable)._35_get_Title.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._35_get_Title.method);
              UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_00,pSVar4,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
label_1821d0d66:
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass55_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass55_0___ctor (UI_SelectListPopup___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SelectListPopup___c__DisplayClass55_0___ctor(UI_SelectListPopup___c__DisplayClass55_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass55_0$$<SetupCategoryTabs>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass55_0___SetupCategoryTabs_b__1 (UI_SelectListPopup___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x1821d0d70

void UI_SelectListPopup___c__DisplayClass55_0___SetupCategoryTabs_b__1
               (UI_SelectListPopup___c__DisplayClass55_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  System_String_o *value;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    value = (__this->fields).categoryName;
    (__this_00->fields)._activeCategoryName = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._activeCategoryName,value);
    UI_SelectListPopup__SyncCategoryTabs(__this_00,(MethodInfo *)0x0);
    UI_SelectListPopup__RefreshList(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass60_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass60_0___ctor (UI_SelectListPopup___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SelectListPopup___c__DisplayClass60_0___ctor(UI_SelectListPopup___c__DisplayClass60_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass60_0$$<OnItemClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass60_0___OnItemClick_b__0 (UI_SelectListPopup___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x1821d0dc0

void UI_SelectListPopup___c__DisplayClass60_0___OnItemClick_b__0
               (UI_SelectListPopup___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    UI_SelectListPopup__OnConfirmOverwrite(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass63_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass63_0___ctor (UI_SelectListPopup___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SelectListPopup___c__DisplayClass63_0___ctor(UI_SelectListPopup___c__DisplayClass63_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass63_0$$<OnDeleteClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass63_0___OnDeleteClick_b__0 (UI_SelectListPopup___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x1821d0df0

void UI_SelectListPopup___c__DisplayClass63_0___OnDeleteClick_b__0
               (UI_SelectListPopup___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  System_String_o *value;
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_Collections_Generic_List_string__o *__this_01;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SelectListPopup_o *)0x0) {
    value = (__this->fields).name;
    if (Il2CppMethodInitialized_184346f4e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
      Il2CppMethodInitialized_184346f4e = '\x01';
    }
    pSVar1 = (__this_00->fields).FinishSetting;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar2 = (__this_00->fields)._onDelete;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
        pSVar1 = (__this_00->fields).FinishSetting;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar1,
                     (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          __this_01 = (__this_00->fields)._items;
          if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
            System_Collections_Generic_List_object___Remove
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)value,
                       (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
            UI_SelectListPopup__RefreshList(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_SelectListPopup__get_ThemePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821cad40

System_String_o * UI_SelectListPopup__get_ThemePanel(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SelectListPopup");
    Il2CppMethodInitialized_184346f3d = '\x01';
  }
  return "SelectListPopup";
}


// UI.SelectListPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SelectListPopup__get_HorizontalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_SelectListPopup__get_HorizontalPadding(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.SelectListPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SelectListPopup__get_VerticalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1808680a0

int32_t
UI_SelectListPopup__get_VerticalPadding(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return 5;
}


// UI.SelectListPopup$$get_VerticalSpacing
// il2cpp: float UI_SelectListPopup__get_VerticalSpacing (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_SelectListPopup__get_VerticalSpacing(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.SelectListPopup$$get_DoublePanel
// il2cpp: bool UI_SelectListPopup__get_DoublePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_SelectListPopup__get_DoublePanel(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return false;
}


// UI.SelectListPopup$$get_ScrollBar
// il2cpp: bool UI_SelectListPopup__get_ScrollBar (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SelectListPopup__get_ScrollBar(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SelectListPopup$$get_Width
// il2cpp: float UI_SelectListPopup__get_Width (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c2520

float
UI_SelectListPopup__get_Width(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return 450.0;
}


// UI.SelectListPopup$$get_Height
// il2cpp: float UI_SelectListPopup__get_Height (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_SelectListPopup__get_Height(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.SelectListPopup$$get_ItemButtonWidth
// il2cpp: float UI_SelectListPopup__get_ItemButtonWidth (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c6340

float
UI_SelectListPopup__get_ItemButtonWidth(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return 380.0;
}


// UI.SelectListPopup$$get_ItemFontSize
// il2cpp: int32_t UI_SelectListPopup__get_ItemFontSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x180846fb0

int32_t
UI_SelectListPopup__get_ItemFontSize(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  return 0x1c;
}


// UI.SelectListPopup$$get_DeleteButtonSize
// il2cpp: float UI_SelectListPopup__get_DeleteButtonSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c4f60

float UI_SelectListPopup__get_DeleteButtonSize(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 32.0;
}


// UI.SelectListPopup$$Setup
// il2cpp: void UI_SelectListPopup__Setup (UI_SelectListPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c99e0

void UI_SelectListPopup__Setup(UI_SelectListPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_StringSetting_o *setting;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  MethodInfo *pMVar5;
  int32_t fontSize;
  System_String_o *pSVar6;
  UI_ElementStyle_o *pUVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *pUVar9;
  UI_InputSettingElement_o *value;
  UnityEngine_UI_LayoutElement_o *pUVar10;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar11;
  
  if (Il2CppMethodInitialized_184346f3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__44_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__44_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__44_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__44_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"No items found.");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f3e = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar7,fontSize,60.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  setting = (__this->fields).FinishSetting;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar8,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__44_0,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__44_1,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateInputSetting
                     (pUVar3,pUVar7,(Settings_BaseSetting_o *)setting,pSVar6,"",185.0,40.0,
                      false,pUVar8,__this_01,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__GetComponent_object_
                      (pUVar9,(MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._inputElement = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._inputElement,value);
    __this_00 = (__this->fields)._saveElements;
    pUVar3 = (__this->fields).BottomBar;
    pSVar6 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar8,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__44_2,(MethodInfo *)0x0);
    pUVar9 = UI_ElementFactory__CreateTextButton(pUVar3,pUVar7,pSVar6,0.0,pUVar8,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pUVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pUVar4->m_Items[(int)uVar2] = pUVar9;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar9,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        pUVar3 = (__this->fields).BottomBar;
        pSVar6 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar8,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__44_3,(MethodInfo *)0x0);
        UI_ElementFactory__CreateTextButton(pUVar3,pUVar7,pSVar6,0.0,pUVar8,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).SinglePanel;
        pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(pUVar7,0x18,120.0,20.0,pSVar6,(MethodInfo *)0x0);
        pUVar9 = UI_ElementFactory__CreateDefaultLabel
                           (pUVar3,pUVar7,"No items found.",0,4,(MethodInfo *)0x0);
        (__this->fields)._noItemsLabel = pUVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._noItemsLabel,pUVar9);
        pUVar9 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).TopBar,12.0,4,(MethodInfo *)0x0);
        (__this->fields)._categoryButtonContainer = pUVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryButtonContainer,pUVar9);
        pUVar9 = (__this->fields)._categoryButtonContainer;
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar9,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar10 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar10->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar10,0.0,(pUVar10->klass->vtable)._40_set_flexibleWidth.method);
            pUVar9 = (__this->fields)._categoryButtonContainer;
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
              pUVar3 = (__this->fields).TopBar;
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                pUVar11 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar3,
                                     (MethodInfo_6651A0 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                if (pUVar11 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                  (__this->fields)._defaultTopBarAlignment = (pUVar11->fields).m_ChildAlignment;
                  (__this->fields)._cachedTopBarAlignment = true;
                  return;
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


// UI.SelectListPopup$$OnSearchChanged
// il2cpp: void UI_SelectListPopup__OnSearchChanged (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c8e10

void
UI_SelectListPopup__OnSearchChanged(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  UI_SelectListPopup__RefreshList(__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$OnSearchEndEdit
// il2cpp: void UI_SelectListPopup__OnSearchEndEdit (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c8e20

void
UI_SelectListPopup__OnSearchEndEdit(UI_SelectListPopup_o* __this, MethodInfo* method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  UI_SelectListPopup___c__DisplayClass46_0_o *object;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *source;
  System_Func_string__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass46_0_OnSearchEndEdit_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass46_0);
    Il2CppMethodInitialized_184346f3f = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass46_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
  if ((((!bVar2) && (bVar2 = UnityEngine_Input__GetKeyDown(0x10f,(MethodInfo *)0x0), !bVar2)) &&
      (bVar2 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0), !bVar2)) &&
     (bVar2 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0), !bVar2)) {
    return;
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (((pSVar1 != (Settings_StringSetting_o *)0x0) &&
      (pSVar3 = (pSVar1->fields)._value, pSVar3 != (System_String_o *)0x0)) &&
     (pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0),
     object != (UI_SelectListPopup___c__DisplayClass46_0_o *)0x0)) {
    (object->fields).query = pSVar3;
    Il2CppCodeGenWriteBarrier(&(object->fields).query,pSVar3);
    bVar2 = System_String__IsNullOrEmpty((object->fields).query,(MethodInfo *)0x0);
    if (!bVar2) {
      source = UI_SelectListPopup__GetActiveCategoryItems(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass46_0_OnSearchEndEdit_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      pSVar3 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_00,
                          (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8
                         );
      if (pSVar3 != (System_String_o *)0x0) {
        UI_SelectListPopup__OnItemClick(__this,pSVar3,(MethodInfo *)0x0);
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$ShowLoad
// il2cpp: void UI_SelectListPopup__ShowLoad (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, UnityEngine_Events_UnityAction_o* onLoad, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, const MethodInfo* method);
// 0x1821ca2b0

void UI_SelectListPopup__ShowLoad
               (UI_SelectListPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_String_o *title,UnityEngine_Events_UnityAction_o *onLoad,
               UnityEngine_Events_UnityAction_o *onDelete,
               System_Collections_Generic_List_string__o *disallowedDelete,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f40 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,items);
  (__this->fields)._categorizedItems = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categorizedItems,(void *)0x0);
  (__this->fields)._useCategories = false;
  (__this->fields)._isSave = false;
  (__this->fields)._onLoad = onLoad;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onLoad,onLoad);
  (__this->fields)._disallowedDelete = disallowedDelete;
  (__this->fields)._delete = onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedDelete,disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onDelete,onDelete);
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)"",
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._inputElement;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,false,(MethodInfo *)0x0);
      UI_SelectListPopup__ToggleSaveElements(__this,(MethodInfo *)0x0);
      bVar3 = System_String__op_Inequality
                        (title,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar3) {
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
      }
      UI_SelectListPopup__RefreshList(__this,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._inputElement;
      if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
         (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
        (*(pUVar2->klass->vtable)._38_Select.methodPtr)(pUVar2,(pUVar2->klass->vtable)._38_Select.method);
        pUVar1 = (__this->fields)._inputElement;
        if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
          UnityEngine_UI_InputField__ActivateInputField(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$ShowLoadCategorized
// il2cpp: void UI_SelectListPopup__ShowLoadCategorized (UI_SelectListPopup_o* __this, System_Collections_Generic_List_SelectListPopup_ItemCategory__o* categories, System_String_o* title, UnityEngine_Events_UnityAction_o* onLoad, const MethodInfo* method);
// 0x1821c9ea0
// eh: try 0x1821ca020..0x1821ca2a5 -> pad 0x183318130 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ca01e: nop 
// asm:   0x1821ca0df: mov rdx, qword ptr [rip + 0x1ecd832]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1821ca0e6: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821ca0eb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ca0f0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ca0f5: test rcx, rcx
// asm:   0x1821ca0f8: jne 0x1821ca295
// asm:   0x1821ca0fe: xor esi, esi
// asm:   0x1821ca100: mov rdi, qword ptr [rsp + 0xc0]
// asm:   0x1821ca108: jmp 0x1821ca020
// asm:   0x1821ca120: mov rdx, qword ptr [rip + 0x1edce99]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose
// asm:   0x1821ca127: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ca12c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ca131: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821ca136: test rcx, rcx
// asm:   0x1821ca139: jne 0x1821ca2a5
// asm:   0x1821ca13f: xor esi, esi
// asm:   0x1821ca141: mov rdi, qword ptr [rsp + 0xc0]
// asm:   0x1821ca295: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821ca2a5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 
// asm:   0x1833398d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833398d5: push rbp
// asm:   0x1833398d6: sub rsp, 0x20
// asm:   0x1833398da: mov rbp, rdx
// asm:   0x1833398dd: mov rax, qword ptr [rbp + 0x78]
// asm:   0x1833398e1: mov rcx, qword ptr [rax]
// asm:   0x1833398e4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833398e8: movabs rax, 0
// asm:   0x1833398f2: add rsp, 0x20
// asm:   0x1833398f6: pop rbp
// asm:   0x1833398f7: ret 

void UI_SelectListPopup__ShowLoadCategorized
               (UI_SelectListPopup_o *__this,
               System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories,
               System_String_o *title,UnityEngine_Events_UnityAction_o *onLoad,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  undefined1 local_88 [16];
  Il2CppObject *local_78;
  undefined1 local_70 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_68;
  Il2CppObject *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_30;
  
  if (Il2CppMethodInitialized_184346f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184346f41 = '\x01';
  }
  local_70 = (undefined1  [8])0x0;
  pSStack_68 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._categorizedItems = categories;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categorizedItems,categories);
  (__this->fields)._useCategories = true;
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._items = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,pSVar4);
  if (categories != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
               (System_Collections_Generic_List_T__o *)categories,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_GetEnumerator);
    local_70 = (undefined1  [8])local_88._0_8_;
    pSStack_68 = (System_Collections_Generic_List_Enumerator_object__o *)local_88._8_8_;
    local_60 = local_78;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_70,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_MoveNext
                        );
      if (!bVar3) break;
      if (local_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_60[1].monitor == (System_Collections_Generic_List_T__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_30,local_60[1].monitor,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_58.fields._list = local_30.fields._list;
      local_58.fields._index = local_30.fields._index;
      local_58.fields._version = local_30.fields._version;
      local_58.fields._current = local_30.fields._current;
      local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_88._8_8_ = &local_58;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_58,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        if (!bVar3) break;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar4,local_58.fields._current,MethodInfo_System_Collections_Generic_List_string_Add);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
               MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose);
    (__this->fields)._isSave = false;
    (__this->fields)._onLoad = onLoad;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onLoad,onLoad);
    (__this->fields)._delete = false;
    (__this->fields)._disallowedDelete = (System_Collections_Generic_List_string__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedDelete,(void *)0x0);
    (__this->fields)._onDelete = (UnityEngine_Events_UnityAction_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onDelete,(void *)0x0);
    __this_00 = (__this->fields).FinishSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,
                 (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar1 = (__this->fields)._inputElement;
      if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
        (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
        UI_SelectListPopup__SetupCategoryTabs(__this,(MethodInfo *)0x0);
        UI_SelectListPopup__ToggleSaveElements(__this,(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality
                          (title,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0)
        ;
        if (bVar3) {
          UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
        }
        UI_SelectListPopup__RefreshList(__this,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._inputElement;
        if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
          (*(pUVar2->klass->vtable)._38_Select.methodPtr)(pUVar2,(pUVar2->klass->vtable)._38_Select.method);
          pUVar1 = (__this->fields)._inputElement;
          if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
             (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
            UnityEngine_UI_InputField__ActivateInputField(pUVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$ShowSave
// il2cpp: void UI_SelectListPopup__ShowSave (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, System_String_o* initial, UnityEngine_Events_UnityAction_o* onSave, System_Collections_Generic_List_string__o* disallowedSave, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, const MethodInfo* method);
// 0x1821ca470

void UI_SelectListPopup__ShowSave
               (UI_SelectListPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_String_o *title,System_String_o *initial,UnityEngine_Events_UnityAction_o *onSave,
               System_Collections_Generic_List_string__o *disallowedSave,
               UnityEngine_Events_UnityAction_o *onDelete,
               System_Collections_Generic_List_string__o *disallowedDelete,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346f42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184346f42 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,items);
  (__this->fields)._categorizedItems = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categorizedItems,(void *)0x0);
  (__this->fields)._onSave = onSave;
  (__this->fields)._useCategories = false;
  (__this->fields)._isSave = true;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave,onSave);
  (__this->fields)._disallowedSave = disallowedSave;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedSave,disallowedSave);
  (__this->fields)._disallowedDelete = disallowedDelete;
  (__this->fields)._delete = onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedDelete,disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onDelete,onDelete);
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)initial,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._inputElement;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,false,(MethodInfo *)0x0);
      UI_SelectListPopup__ToggleSaveElements(__this,(MethodInfo *)0x0);
      bVar3 = System_String__op_Inequality
                        (title,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar3) {
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
      }
      UI_SelectListPopup__RefreshList(__this,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._inputElement;
      if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
         (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
        (*(pUVar2->klass->vtable)._38_Select.methodPtr)(pUVar2,(pUVar2->klass->vtable)._38_Select.method);
        pUVar1 = (__this->fields)._inputElement;
        if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar2 = (pUVar1->fields)._inputField, pUVar2 != (UnityEngine_UI_InputField_o *)0x0)) {
          UnityEngine_UI_InputField__ActivateInputField(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$ToggleSaveElements
// il2cpp: void UI_SelectListPopup__ToggleSaveElements (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821ca830
// eh: try 0x1821ca910..0x1821caa77 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ca950: mov rdx, qword ptr [rip + 0x1eb5b91]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821ca957: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821ca95c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ca961: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ca966: test rcx, rcx
// asm:   0x1821ca969: jne 0x1821caa6b
// asm:   0x1821ca96f: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1821ca989: mov rcx, qword ptr [rip + 0x1f1eac8]  ; "Load"
// asm:   0x1821ca990: jmp 0x1821caa3f
// asm:   0x1821caa03: mov rdx, qword ptr [rip + 0x1eb5ade]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821caa0a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821caa0f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821caa14: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821caa19: test rcx, rcx
// asm:   0x1821caa1c: jne 0x1821caa77
// asm:   0x1821caa1e: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1821caa38: mov rcx, qword ptr [rip + 0x1eafc11]  ; "Save"
// asm:   0x1821caa6b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821caa77: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_SelectListPopup__ToggleSaveElements(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  bool bVar1;
  System_String_o *pSVar2;
  undefined1 local_38 [16];
  UnityEngine_GameObject_o *local_28;
  System_Collections_Generic_List_Enumerator_object__o local_20;
  
  if (Il2CppMethodInitialized_184346f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Load");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f43 = '\x01';
  }
  local_20.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_20.fields._index = 0;
  local_20.fields._version = 0;
  local_20.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._saveElements;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._isSave == false) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    local_20.fields._index = local_38._8_4_;
    local_20.fields._version = local_38._12_4_;
    local_20.fields._current = (Il2CppObject *)local_28;
    local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_38._8_8_ = &local_20;
    while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_20,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          bVar1) {
      if ((UnityEngine_GameObject_o *)local_20.fields._current == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)local_20.fields._current,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar2 = "Load";
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pSVar2 = "Load";
    }
  }
  else {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    local_20.fields._index = local_38._8_4_;
    local_20.fields._version = local_38._12_4_;
    local_20.fields._current = (Il2CppObject *)local_28;
    local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_38._8_8_ = &local_20;
    while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_20,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          bVar1) {
      if ((UnityEngine_GameObject_o *)local_20.fields._current == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)local_20.fields._current,true,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar2 = "Save";
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pSVar2 = "Save";
    }
  }
  pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,pSVar2,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$RefreshList
// il2cpp: void UI_SelectListPopup__RefreshList (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c8fa0
// eh: try 0x1821c9190..0x1821c92e0 -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c91d4: mov rdx, qword ptr [rip + 0x1ece73d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1821c91db: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821c91e0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c91e5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821c91ea: test rcx, rcx
// asm:   0x1821c91ed: jne 0x1821c9346
// asm:   0x1821c91f3: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1821c91fb: mov edi, dword ptr [rsp + 0xa0]
// asm:   0x1821c9202: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x1821c92ae: nop 
// asm:   0x1821c92f1: mov rdx, qword ptr [rip + 0x1ece620]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1821c92f8: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821c92fd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c9302: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821c9307: test rcx, rcx
// asm:   0x1821c930a: jne 0x1821c934c
// asm:   0x1821c930c: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1821c9314: mov edi, dword ptr [rsp + 0xa0]
// asm:   0x1821c9346: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821c934c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_SelectListPopup__RefreshList(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  UI_SelectListPopup___c__DisplayClass51_0_o *object;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Func_string__bool__o *pSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  int iVar7;
  undefined1 local_58 [16];
  System_String_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_184346f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass51_0_RefreshList_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass51_0_RefreshList_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass51_0);
    Il2CppMethodInitialized_184346f44 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (System_String_o *)0x0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass51_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  UI_SelectListPopup__ClearListButtons(__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (pSVar3 = (pSVar1->fields)._value, pSVar3 != (System_String_o *)0x0)) {
    pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
    if (object != (UI_SelectListPopup___c__DisplayClass51_0_o *)0x0) {
      (object->fields).query = pSVar3;
      Il2CppCodeGenWriteBarrier(&(object->fields).query,pSVar3);
      iVar7 = 0;
      if (((__this->fields)._useCategories == false) ||
         ((__this->fields)._categorizedItems ==
          (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) {
        bVar2 = System_String__IsNullOrEmpty((object->fields).query,(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._items;
        if (!bVar2) {
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)pSVar5,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass51_0_RefreshList_b__1,
                     (MethodInfo_B61EB0 *)0x0);
          pSVar6 = System_Linq_Enumerable__Where_float_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                              (System_Func_TSource__bool__o *)pSVar5,
                              (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
          pSVar4 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList_object_
                             (pSVar6,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        }
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821c9340;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                   (System_Collections_Generic_List_T__o *)pSVar4,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_40 = (undefined1  [8])local_58._0_8_;
        pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
        local_30 = local_48;
        local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar2) break;
          UI_SelectListPopup__CreateItemButton(__this,local_30,(MethodInfo *)0x0);
          iVar7 = iVar7 + 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      }
      else {
        pSVar4 = UI_SelectListPopup__GetActiveCategoryItems(__this,(MethodInfo *)0x0);
        bVar2 = System_String__IsNullOrEmpty((object->fields).query,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)pSVar5,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass51_0_RefreshList_b__0,
                     (MethodInfo_B61EB0 *)0x0);
          pSVar6 = System_Linq_Enumerable__Where_float_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                              (System_Func_TSource__bool__o *)pSVar5,
                              (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
          pSVar4 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList_object_
                             (pSVar6,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        }
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821c9340;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                   (System_Collections_Generic_List_T__o *)pSVar4,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_40 = (undefined1  [8])local_58._0_8_;
        pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
        local_30 = local_48;
        local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar2) break;
          UI_SelectListPopup__CreateItemButton(__this,local_30,(MethodInfo *)0x0);
          iVar7 = iVar7 + 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      }
      __this_00 = (__this->fields)._noItemsLabel;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,iVar7 == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1821c9340:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$CreateItemButton
// il2cpp: void UI_SelectListPopup__CreateItemButton (UI_SelectListPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1821c7c50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c83a1: xor r8d, r8d
// asm:   0x1821c83a4: xor edx, edx
// asm:   0x1821c83a6: mov rcx, rax
// asm:   0x1821c83a9: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x1821c83ae: jmp 0x1821c8362

void UI_SelectListPopup__CreateItemButton
               (UI_SelectListPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t value;
  UI_SelectListPopup___c__DisplayClass52_0_o *object;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  System_String_o *pSVar11;
  UnityEngine_UI_ColorBlock_o *pUVar12;
  UnityEngine_Color_o *pUVar13;
  UnityEngine_UI_LayoutElement_o *pUVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_Fields local_f8;
  UnityEngine_UI_ColorBlock_o local_e8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_184346f45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_CreateItemButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_CreateItemButton_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass52_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"ItemButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/SelectListButton");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f45 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass52_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_SelectListPopup___c__DisplayClass52_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).item = item;
    Il2CppCodeGenWriteBarrier(&(object->fields).item,item);
    pUVar7 = UI_ElementFactory__InstantiateAndBind
                       ((__this->fields).SinglePanel,"Prefabs/Misc/SelectListButton",(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    __this_00 = (__this->fields)._itemButtons;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pUVar3->m_Items[(int)uVar2] = pUVar7;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,pUVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar7,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        if (((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
            pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar8 = UnityEngine_Transform__Find(pUVar8,"ItemButton",(MethodInfo *)0x0),
           pUVar8 != (UnityEngine_Transform_o *)0x0)) {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar8,
                                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
          pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
              (pUVar8 = UnityEngine_Transform__Find(pUVar8,"DeleteButton",(MethodInfo *)0x0),
              pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
             (__this_02 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar8,
                                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button
                                    ), __this_01 != (UnityEngine_UI_Button_o *)0x0)) {
            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(__this_01->fields).m_OnClick;
            pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_CreateItemButton_b__0,
                       (MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar9,(MethodInfo *)0x0);
              pUVar8 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                  (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
                  pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
                 (pUVar10 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar8,
                                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text
                                      ), pUVar10 != (UnityEngine_UI_Text_o *)0x0)) {
                (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                          (pUVar10,(object->fields).item,(pUVar10->klass->vtable)._75_set_text.method);
                pUVar8 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                   (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
                   pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                  pUVar10 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar8,
                                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text
                                      );
                  value = (*(__this->klass->vtable)._63_get_ItemFontSize.methodPtr)(__this);
                  if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                    UnityEngine_UI_Text__set_fontSize(pUVar10,value,(MethodInfo *)0x0);
                    pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    pUVar12 = UI_UIManager__GetThemeColorBlock
                                        (&local_88,pSVar11,"ItemButton","",
                                         "DefaultPanel",(MethodInfo *)0x0);
                    local_e8.fields.m_NormalColor.fields.r = (pUVar12->fields).m_NormalColor.fields.r;
                    local_e8.fields.m_NormalColor.fields.g = (pUVar12->fields).m_NormalColor.fields.g;
                    local_e8.fields.m_NormalColor.fields.b = (pUVar12->fields).m_NormalColor.fields.b;
                    local_e8.fields.m_NormalColor.fields.a = (pUVar12->fields).m_NormalColor.fields.a;
                    local_e8.fields.m_HighlightedColor.fields.r =
                         (pUVar12->fields).m_HighlightedColor.fields.r;
                    local_e8.fields.m_HighlightedColor.fields.g =
                         (pUVar12->fields).m_HighlightedColor.fields.g;
                    local_e8.fields.m_HighlightedColor.fields.b =
                         (pUVar12->fields).m_HighlightedColor.fields.b;
                    local_e8.fields.m_HighlightedColor.fields.a =
                         (pUVar12->fields).m_HighlightedColor.fields.a;
                    local_e8.fields.m_PressedColor.fields.r = (pUVar12->fields).m_PressedColor.fields.r;
                    local_e8.fields.m_PressedColor.fields.g = (pUVar12->fields).m_PressedColor.fields.g;
                    local_e8.fields.m_PressedColor.fields.b = (pUVar12->fields).m_PressedColor.fields.b;
                    local_e8.fields.m_PressedColor.fields.a = (pUVar12->fields).m_PressedColor.fields.a;
                    local_e8.fields.m_SelectedColor.fields.r = (pUVar12->fields).m_SelectedColor.fields.r;
                    local_e8.fields.m_SelectedColor.fields.g = (pUVar12->fields).m_SelectedColor.fields.g;
                    local_e8.fields.m_SelectedColor.fields.b = (pUVar12->fields).m_SelectedColor.fields.b;
                    local_e8.fields.m_SelectedColor.fields.a = (pUVar12->fields).m_SelectedColor.fields.a;
                    local_e8.fields.m_DisabledColor.fields.r = (pUVar12->fields).m_DisabledColor.fields.r;
                    local_e8.fields.m_DisabledColor.fields.g = (pUVar12->fields).m_DisabledColor.fields.g;
                    local_e8.fields.m_DisabledColor.fields.b = (pUVar12->fields).m_DisabledColor.fields.b;
                    local_e8.fields.m_DisabledColor.fields.a = (pUVar12->fields).m_DisabledColor.fields.a;
                    local_e8.fields.m_ColorMultiplier = (pUVar12->fields).m_ColorMultiplier;
                    local_e8.fields.m_FadeDuration = (pUVar12->fields).m_FadeDuration;
                    UnityEngine_UI_Selectable__set_colors
                              ((UnityEngine_UI_Selectable_o *)__this_01,&local_e8,(MethodInfo *)0x0);
                    pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                       (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
                       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar10 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar8,
                                           (MethodInfo_6651A0 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_Text);
                      pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                      pUVar13 = UI_UIManager__GetThemeColor
                                          ((UnityEngine_Color_o *)&local_f8,pSVar11,"ItemButton",
                                           "TextColor","DefaultPanel",(MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                        local_f8.r = (pUVar13->fields).r;
                        local_f8.g = (pUVar13->fields).g;
                        local_f8.b = (pUVar13->fields).b;
                        local_f8.a = (pUVar13->fields).a;
                        (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar10,(UnityEngine_Color_o *)&local_f8,
                                   (pUVar10->klass->vtable)._23_set_color.method);
                        if ((__this->fields)._delete == false) {
                          pUVar14 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)__this_01,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                          fVar15 = (*(__this->klass->vtable)._62_get_ItemButtonWidth.methodPtr)
                                             (__this,(__this->klass->vtable)._62_get_ItemButtonWidth.method);
                          fVar16 = (*(__this->klass->vtable)._64_get_DeleteButtonSize.methodPtr)
                                             (__this,(__this->klass->vtable)._64_get_DeleteButtonSize.method);
                          if (pUVar14 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1821c83b0;
                          fVar15 = fVar16 + fVar15 + 10.0;
                        }
                        else {
                          pUVar14 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)__this_01,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                          fVar15 = (*(__this->klass->vtable)._62_get_ItemButtonWidth.methodPtr)
                                             (__this,(__this->klass->vtable)._62_get_ItemButtonWidth.method);
                          if (pUVar14 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1821c83b0;
                        }
                        (*(pUVar14->klass->vtable)._36_set_preferredWidth.methodPtr)
                                  (pUVar14,fVar15,(pUVar14->klass->vtable)._36_set_preferredWidth.method);
                        if (((__this->fields)._delete == false) ||
                           (((__this->fields)._disallowedDelete !=
                             (System_Collections_Generic_List_string__o *)0x0 &&
                            (bVar6 = System_Collections_Generic_List_object___Contains
                                               ((System_Collections_Generic_List_object__o *)
                                                (__this->fields)._disallowedDelete,
                                                (Il2CppObject *)(object->fields).item,
                                                (MethodInfo_93FC70 *)
                                                MethodInfo_System_Collections_Generic_List_string_Contains),
                            bVar6)))) {
                          if ((__this_02 != (UnityEngine_UI_Button_o *)0x0) &&
                             (pUVar7 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
                             pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        else if (__this_02 != (UnityEngine_UI_Button_o *)0x0) {
                          pUVar4 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).m_OnClick;
                          pUVar9 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,
                                     (Il2CppObject *)object,
                                     (intptr_t)
                                     MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_CreateItemButton_b__1,
                                     (MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar9,(MethodInfo *)0x0);
                            pUVar14 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)__this_02,
                                                 (MethodInfo_6651A0 *)
                                                 MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                            fVar15 = (*(__this->klass->vtable)._64_get_DeleteButtonSize.methodPtr)
                                               (__this,(__this->klass->vtable)._64_get_DeleteButtonSize.method
                                               );
                            if (pUVar14 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                              (*(pUVar14->klass->vtable)._36_set_preferredWidth.methodPtr)
                                        (pUVar14,fVar15,(pUVar14->klass->vtable)._36_set_preferredWidth.method
                                        );
                              pUVar14 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)__this_02,
                                                   (MethodInfo_6651A0 *)
                                                   MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                  );
                              fVar15 = (*(__this->klass->vtable)._64_get_DeleteButtonSize.methodPtr)
                                                 (__this,(__this->klass->vtable)._64_get_DeleteButtonSize.
                                                         method);
                              if (pUVar14 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                (*(pUVar14->klass->vtable)._38_set_preferredHeight.methodPtr)
                                          (pUVar14,fVar15,
                                           (pUVar14->klass->vtable)._38_set_preferredHeight.method);
                                pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                }
                                pUVar12 = UI_UIManager__GetThemeColorBlock
                                                    (&local_88,pSVar11,"DeleteButton",
                                                     "","DefaultPanel",
                                                     (MethodInfo *)0x0);
                                local_e8.fields.m_NormalColor.fields.r =
                                     (pUVar12->fields).m_NormalColor.fields.r;
                                local_e8.fields.m_NormalColor.fields.g =
                                     (pUVar12->fields).m_NormalColor.fields.g;
                                local_e8.fields.m_NormalColor.fields.b =
                                     (pUVar12->fields).m_NormalColor.fields.b;
                                local_e8.fields.m_NormalColor.fields.a =
                                     (pUVar12->fields).m_NormalColor.fields.a;
                                local_e8.fields.m_HighlightedColor.fields.r =
                                     (pUVar12->fields).m_HighlightedColor.fields.r;
                                local_e8.fields.m_HighlightedColor.fields.g =
                                     (pUVar12->fields).m_HighlightedColor.fields.g;
                                local_e8.fields.m_HighlightedColor.fields.b =
                                     (pUVar12->fields).m_HighlightedColor.fields.b;
                                local_e8.fields.m_HighlightedColor.fields.a =
                                     (pUVar12->fields).m_HighlightedColor.fields.a;
                                local_e8.fields.m_PressedColor.fields.r =
                                     (pUVar12->fields).m_PressedColor.fields.r;
                                local_e8.fields.m_PressedColor.fields.g =
                                     (pUVar12->fields).m_PressedColor.fields.g;
                                local_e8.fields.m_PressedColor.fields.b =
                                     (pUVar12->fields).m_PressedColor.fields.b;
                                local_e8.fields.m_PressedColor.fields.a =
                                     (pUVar12->fields).m_PressedColor.fields.a;
                                local_e8.fields.m_SelectedColor.fields.r =
                                     (pUVar12->fields).m_SelectedColor.fields.r;
                                local_e8.fields.m_SelectedColor.fields.g =
                                     (pUVar12->fields).m_SelectedColor.fields.g;
                                local_e8.fields.m_SelectedColor.fields.b =
                                     (pUVar12->fields).m_SelectedColor.fields.b;
                                local_e8.fields.m_SelectedColor.fields.a =
                                     (pUVar12->fields).m_SelectedColor.fields.a;
                                local_e8.fields.m_DisabledColor.fields.r =
                                     (pUVar12->fields).m_DisabledColor.fields.r;
                                local_e8.fields.m_DisabledColor.fields.g =
                                     (pUVar12->fields).m_DisabledColor.fields.g;
                                local_e8.fields.m_DisabledColor.fields.b =
                                     (pUVar12->fields).m_DisabledColor.fields.b;
                                local_e8.fields.m_DisabledColor.fields.a =
                                     (pUVar12->fields).m_DisabledColor.fields.a;
                                local_e8.fields.m_ColorMultiplier = (pUVar12->fields).m_ColorMultiplier;
                                local_e8.fields.m_FadeDuration = (pUVar12->fields).m_FadeDuration;
                                UnityEngine_UI_Selectable__set_colors
                                          ((UnityEngine_UI_Selectable_o *)__this_02,&local_e8,
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
            }
          }
        }
      }
    }
  }
label_1821c83b0:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$ClearListButtons
// il2cpp: void UI_SelectListPopup__ClearListButtons (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c7ac0
// eh: try 0x1821c7b90..0x1821c7bcb -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c7bdc: mov rdx, qword ptr [rip + 0x1eb8905]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821c7be3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821c7be8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c7bed: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821c7bf2: test rcx, rcx
// asm:   0x1821c7bf5: jne 0x1821c7c42
// asm:   0x1821c7bf7: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1821c7c42: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_SelectListPopup__ClearListButtons(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184346f46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346f46 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._itemButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_18;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
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
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$GetActiveCategoryItems
// il2cpp: System_Collections_Generic_List_string__o* UI_SelectListPopup__GetActiveCategoryItems (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c83c0

System_Collections_Generic_List_string__o *
UI_SelectListPopup__GetActiveCategoryItems(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *pSVar1;
  Il2CppClass *value;
  System_Func_SelectListPopup_ItemCategory__bool__o *__this_00;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346f47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_SelectListPopup_ItemCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_SelectListPopup_ItemCategory_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_GetActiveCategoryItems_b__54_0);
    Il2CppMethodInitialized_184346f47 = '\x01';
  }
  if ((((__this->fields)._useCategories == false) ||
      ((__this->fields)._categorizedItems ==
       (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     (pSVar1 = (__this->fields)._categorizedItems, (pSVar1->fields)._size == 0)) {
    return (__this->fields)._items;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_SelectListPopup_ItemCategory_bool)
  ;
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_SelectListPopup_GetActiveCategoryItems_b__54_0,(MethodInfo_B61EB0 *)0x0);
  pIVar2 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_6BD2C0 *)
                      MethodInfo_System_Linq_Enumerable_FirstOrDefault_SelectListPopup_ItemCategory);
  if (pIVar2 == (Il2CppObject *)0x0) {
    pSVar1 = (__this->fields)._categorizedItems;
    if (pSVar1 != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
      pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Item);
      if (pIVar2 != (Il2CppObject *)0x0) goto label_1821c84b3;
    }
    ThrowNullReferenceException();
  }
label_1821c84b3:
  value = pIVar2[1].klass;
  (__this->fields)._activeCategoryName = (System_String_o *)value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName,value);
  return pIVar2[1].monitor;
}


// UI.SelectListPopup$$SetupCategoryTabs
// il2cpp: void UI_SelectListPopup__SetupCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c9500
// eh: try 0x1821c979e..0x1821c99c5 -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c97ae: nop 
// asm:   0x1821c990d: mov rdx, qword ptr [rip + 0x1edd6ac]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose
// asm:   0x1821c9914: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1821c9919: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c991e: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1821c9923: test rcx, rcx
// asm:   0x1821c9926: jne 0x1821c99c5
// asm:   0x1821c992c: mov rsi, qword ptr [rsp + 0xd0]
// asm:   0x1821c99c5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

void UI_SelectListPopup__SetupCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *pSVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Func_SelectListPopup_ItemCategory__bool__o *__this_01;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  UI_ElementStyle_o *__this_02;
  UI_SelectListPopup___c__DisplayClass55_0_o *object;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_GameObject_o *pUVar10;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  System_Collections_Generic_List_Enumerator_object__o local_68 [2];
  
  if (Il2CppMethodInitialized_184346f48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Any_SelectListPopup_ItemCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_SelectListPopup_ItemCategory_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_SetupCategoryTabs_b__55_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass55_0_SetupCategoryTabs_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass55_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_184346f48 = '\x01';
  }
  local_68[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68[0].fields._index = 0;
  local_68[0].fields._version = 0;
  local_68[0].fields._current = (Il2CppObject *)0x0;
  x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  UI_SelectListPopup__ClearCategoryTabs(__this,(MethodInfo *)0x0);
  if ((((__this->fields)._useCategories == false) ||
      ((__this->fields)._categorizedItems ==
       (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     ((((__this->fields)._categorizedItems)->fields)._size == 0)) {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this->fields)._activeCategoryName = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName,pSVar9);
    UI_SelectListPopup__SetCategoryTabsEnabled(__this,false,(MethodInfo *)0x0);
    return;
  }
  bVar7 = System_String__op_Equality
                    ((__this->fields)._activeCategoryName,
                     (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar7) {
label_1821c96cc:
    pSVar3 = (__this->fields)._categorizedItems;
    if ((pSVar3 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) ||
       (pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Item),
       pIVar8 == (Il2CppObject *)0x0)) goto label_1821c99cb;
    pIVar4 = pIVar8[1].klass;
    (__this->fields)._activeCategoryName = (System_String_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName,pIVar4);
  }
  else {
    pSVar3 = (__this->fields)._categorizedItems;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_SelectListPopup_ItemCategory_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_SelectListPopup_SetupCategoryTabs_b__55_0,(MethodInfo_B61EB0 *)0x0);
    bVar7 = System_Linq_Enumerable__Any_object__6b6920
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                       (System_Func_TSource__bool__o *)__this_01,
                       (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_SelectListPopup_ItemCategory
                      );
    if (!bVar7) goto label_1821c96cc;
  }
  pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x14,120.0,20.0,pSVar9,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._categorizedItems;
  if (pSVar3 != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_GetEnumerator);
    local_68[0].fields._list = (System_Collections_Generic_List_T__o *)local_80._0_8_;
    local_68[0].fields._index = local_80._8_4_;
    local_68[0].fields._version = local_80._12_4_;
    local_68[0].fields._current = local_70;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = local_68;
    while( true ) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (local_68,(MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_MoveNext
                        );
      pIVar8 = local_68[0].fields._current;
      if (!bVar7) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
                   MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose)
        ;
        UI_SelectListPopup__SetCategoryTabsEnabled(__this,true,(MethodInfo *)0x0);
        UI_SelectListPopup__SyncCategoryTabs(__this,(MethodInfo *)0x0);
        return;
      }
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass55_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_SelectListPopup___c__DisplayClass55_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      if (pIVar8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIVar8[1].klass;
      (object->fields).categoryName = (System_String_o *)pIVar4;
      Il2CppCodeGenWriteBarrier(&(object->fields).categoryName,pIVar4);
      pUVar10 = (__this->fields)._categoryButtonContainer;
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) break;
      parent = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
      pSVar9 = (object->fields).categoryName;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass55_0_SetupCategoryTabs_b__1,
                 (MethodInfo *)0x0);
      pUVar10 = UI_ElementFactory__CreateDefaultButton
                          (parent,__this_02,pSVar9,140.0,36.0,__this_03,(MethodInfo *)0x0);
      pMVar6 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      __this_00 = (__this->fields)._categoryButtons;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (__this_00->fields)._items;
      if (pUVar5 == (UnityEngine_GameObject_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar5->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar5->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar5->m_Items[(int)uVar2] = pUVar10;
        Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar10,
                   (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
      }
    }
    ThrowNullReferenceException();
  }
label_1821c99cb:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$SetCategoryTabsEnabled
// il2cpp: void UI_SelectListPopup__SetCategoryTabsEnabled (UI_SelectListPopup_o* __this, bool enabled, const MethodInfo* method);
// 0x1821c9360

void UI_SelectListPopup__SetCategoryTabsEnabled(UI_SelectListPopup_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  int32_t value;
  
  if (Il2CppMethodInitialized_184346f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_184346f49 = '\x01';
  }
  pUVar2 = (__this->fields).TopBar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).TopBar;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821c94f0;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821c94f0;
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_1821c94f0;
      UnityEngine_GameObject__SetActive(pUVar3,!enabled,(MethodInfo *)0x0);
    }
    if ((__this->fields)._cachedTopBarAlignment != false) {
      pUVar2 = (__this->fields).TopBar;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821c94f0;
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar2,
                             (MethodInfo_6651A0 *)
                             MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
      value = 4;
      if (!enabled) {
        value = (__this->fields)._defaultTopBarAlignment;
      }
      if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_1821c94f0;
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_00,value,(MethodInfo *)0x0);
    }
  }
  x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields)._categoryButtonContainer;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
label_1821c94f0:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pUVar3,enabled,(MethodInfo *)0x0);
  }
  if (!enabled) {
    UI_SelectListPopup__ClearCategoryTabs(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.SelectListPopup$$ClearCategoryTabs
// il2cpp: void UI_SelectListPopup__ClearCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c7930
// eh: try 0x1821c7a00..0x1821c7a3b -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c7a4c: mov rdx, qword ptr [rip + 0x1eb8a95]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821c7a53: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821c7a58: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c7a5d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821c7a62: test rcx, rcx
// asm:   0x1821c7a65: jne 0x1821c7ab2
// asm:   0x1821c7a67: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1821c7ab2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_SelectListPopup__ClearCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184346f4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346f4a = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._categoryButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_18;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
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
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnCategoryTabClick
// il2cpp: void UI_SelectListPopup__OnCategoryTabClick (UI_SelectListPopup_o* __this, System_String_o* categoryName, const MethodInfo* method);
// 0x1821c8830

void UI_SelectListPopup__OnCategoryTabClick
               (UI_SelectListPopup_o *__this,System_String_o *categoryName,MethodInfo *method)

{
  (__this->fields)._activeCategoryName = categoryName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName,categoryName);
  UI_SelectListPopup__SyncCategoryTabs(__this,(MethodInfo *)0x0);
  UI_SelectListPopup__RefreshList(__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$SyncCategoryTabs
// il2cpp: void UI_SelectListPopup__SyncCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821ca640
// eh: try 0x1821ca710..0x1821ca81c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ca7dc: mov rdx, qword ptr [rip + 0x1eb5d05]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821ca7e3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ca7e8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ca7ed: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ca7f2: test rcx, rcx
// asm:   0x1821ca7f5: jne 0x1821ca81c
// asm:   0x1821ca81c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_SelectListPopup__SyncCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Gilzoide_FlexUi_Yoga_YGValue_o a;
  undefined1 local_60 [16];
  UnityEngine_GameObject_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184346f4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_184346f4b = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._categoryButtons;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_48.fields._current = (Il2CppObject *)local_50;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    __this_01 = local_48.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      return;
    }
    if ((UnityEngine_GameObject_o *)local_48.fields._current == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)local_48.fields._current,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = (*(pUVar3->klass->vtable)._74_get_text.methodPtr)(pUVar3,(pUVar3->klass->vtable)._74_get_text.method);
    bVar1 = System_String__op_Equality
                      ((System_String_o *)a.fields,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_UI_Button_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_02,!bVar1,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnItemClick
// il2cpp: void UI_SelectListPopup__OnItemClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c8b80

void UI_SelectListPopup__OnItemClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_BaseMenu_o *pUVar1;
  UI_MessagePopup_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar2;
  UI_ConfirmPopup_o *__this_03;
  System_String_o *pSVar3;
  bool bVar4;
  UI_SelectListPopup___c__DisplayClass60_0_o *object;
  UnityEngine_Events_UnityAction_o *pUVar5;
  
  if (Il2CppMethodInitialized_184346f4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass60_0_OnItemClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass60_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Overwrite this item?");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot overwrite this item.");
    Il2CppMethodInitialized_184346f4c = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass60_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_SelectListPopup___c__DisplayClass60_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    if ((__this->fields)._isSave == false) {
      __this_00 = (__this->fields).FinishSetting;
      if (__this_00 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(object->fields).name,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pUVar5 = (__this->fields)._onLoad;
        if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
    }
    else {
      if ((__this->fields)._disallowedSave != (System_Collections_Generic_List_string__o *)0x0) {
        bVar4 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)(__this->fields)._disallowedSave,
                           (Il2CppObject *)(object->fields).name,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (bVar4) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar3 = "Cannot overwrite this item.";
          pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
             (__this_01 = (pUVar1->fields).MessagePopup, __this_01 != (UI_MessagePopup_o *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)__this_01,(MethodInfo *)0x0);
            __this_02 = (__this_01->fields)._button;
            if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
              pUVar2 = (__this_01->fields)._label;
              if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                          (pUVar2,pSVar3,(pUVar2->klass->vtable)._75_set_text.method);
                return;
              }
            }
          }
          goto label_1821c8e03;
        }
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar1 != (UI_BaseMenu_o *)0x0) {
        __this_03 = (pUVar1->fields).ConfirmPopup;
        pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass60_0_OnItemClick_b__0,
                   (MethodInfo *)0x0);
        if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_03,"Overwrite this item?",pUVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1821c8e03:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnConfirmOverwrite
// il2cpp: void UI_SelectListPopup__OnConfirmOverwrite (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c8940

void UI_SelectListPopup__OnConfirmOverwrite
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346f4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184346f4d = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnConfirmDelete
// il2cpp: void UI_SelectListPopup__OnConfirmDelete (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c8870

void UI_SelectListPopup__OnConfirmDelete
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184346f4e = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)name,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar2 = (__this->fields)._onDelete;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,
                   (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        __this_00 = (__this->fields)._items;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)name,
                     (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
          UI_SelectListPopup__RefreshList(__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnDeleteClick
// il2cpp: void UI_SelectListPopup__OnDeleteClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c89d0

void UI_SelectListPopup__OnDeleteClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  UI_SelectListPopup___c__DisplayClass63_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346f4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass63_0_OnDeleteClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass63_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Delete this item?");
    Il2CppMethodInitialized_184346f4f = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass63_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_SelectListPopup___c__DisplayClass63_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 != (UI_BaseMenu_o *)0x0) {
      __this_00 = (pUVar1->fields).ConfirmPopup;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass63_0_OnDeleteClick_b__0,
                 (MethodInfo *)0x0);
      pSVar4 = "Delete this item?";
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          bVar3 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
          if (!bVar3) {
            UI_BasePopup__Show((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
            pUVar2 = (__this_00->fields)._label;
            if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1821c8b6b;
            (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                      (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
            (__this_00->fields)._onConfirm = __this_01;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onConfirm,__this_01);
            pSVar4 = (*(__this_00->klass->vtable)._35_get_Title.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._35_get_Title.method);
            UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_00,pSVar4,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_1821c8b6b:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnButtonClick
// il2cpp: void UI_SelectListPopup__OnButtonClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c84f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c8685: mov rdi, qword ptr [rip + 0x1f25fa4]  ; "Cannot overwrite this item."
// asm:   0x1821c868c: jmp 0x1821c87d4
// asm:   0x1821c87cd: mov rdi, qword ptr [rip + 0x1f1f794]  ; "Field cannot be empty."

void UI_SelectListPopup__OnButtonClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_BaseMenu_o *pUVar2;
  UI_MessagePopup_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  UI_ConfirmPopup_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Text_o *pUVar3;
  System_String_o *pSVar4;
  bool bVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  
  if (Il2CppMethodInitialized_184346f50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_OnButtonClick_b__64_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Overwrite this item?");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot overwrite this item.");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Field cannot be empty.");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f50 = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar5) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar5 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1821c8823;
  bVar5 = System_String__op_Equality
                    ((pSVar1->fields)._value,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821c8823;
    __this_00 = (pUVar2->fields).MessagePopup;
    pSVar4 = "Field cannot be empty.";
joined_r0x0001821c87cb:
    if (__this_00 != (UI_MessagePopup_o *)0x0) {
      UI_BasePopup__Show((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
      __this_03 = (__this_00->fields)._button;
      if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_03,true,(MethodInfo *)0x0);
        pUVar3 = (__this_00->fields)._label;
        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                    (pUVar3,pSVar4,(pUVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
  else {
    if ((__this->fields)._disallowedSave != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1821c8823;
      bVar5 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)(__this->fields)._disallowedSave,
                         (Il2CppObject *)(pSVar1->fields)._value,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (bVar5) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821c8823;
        __this_00 = (pUVar2->fields).MessagePopup;
        pSVar4 = "Cannot overwrite this item.";
        goto joined_r0x0001821c87cb;
      }
    }
    pSVar1 = (__this->fields).FinishSetting;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (__this_01 = (__this->fields)._items, __this_01 != (System_Collections_Generic_List_string__o *)0x0)) {
      bVar5 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)(pSVar1->fields)._value,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (bVar5) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 != (UI_BaseMenu_o *)0x0) {
          __this_02 = (pUVar2->fields).ConfirmPopup;
          pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar6,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_SelectListPopup_OnButtonClick_b__64_0,(MethodInfo *)0x0);
          if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
            UI_ConfirmPopup__Show
                      (__this_02,"Overwrite this item?",pUVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pUVar6 = (__this->fields)._onSave;
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code,(pUVar6->fields).method);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
    }
  }
label_1821c8823:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$.ctor
// il2cpp: void UI_SelectListPopup___ctor (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821cab80

void UI_SelectListPopup___ctor(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_string__o *__this_00;
  Settings_StringSetting_o *__this_01;
  
  if (Il2CppMethodInitialized_184346f51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184346f51 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._itemButtons = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._itemButtons,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._categoryButtons = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryButtons,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._saveElements = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._saveElements,pSVar2);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._activeCategoryName = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_01,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FinishSetting,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_0
// il2cpp: void UI_SelectListPopup___Setup_b__44_0 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c8e10

void UI_SelectListPopup___Setup_b__44_0(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__RefreshList(__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_1
// il2cpp: void UI_SelectListPopup___Setup_b__44_1 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821c8e20

void UI_SelectListPopup___Setup_b__44_1(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  UI_SelectListPopup___c__DisplayClass46_0_o *object;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *source;
  System_Func_string__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass46_0_OnSearchEndEdit_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass46_0);
    Il2CppMethodInitialized_184346f3f = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass46_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
  if ((((!bVar2) && (bVar2 = UnityEngine_Input__GetKeyDown(0x10f,(MethodInfo *)0x0), !bVar2)) &&
      (bVar2 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0), !bVar2)) &&
     (bVar2 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0), !bVar2)) {
    return;
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (((pSVar1 != (Settings_StringSetting_o *)0x0) &&
      (pSVar3 = (pSVar1->fields)._value, pSVar3 != (System_String_o *)0x0)) &&
     (pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0),
     object != (UI_SelectListPopup___c__DisplayClass46_0_o *)0x0)) {
    (object->fields).query = pSVar3;
    Il2CppCodeGenWriteBarrier(&(object->fields).query,pSVar3);
    bVar2 = System_String__IsNullOrEmpty((object->fields).query,(MethodInfo *)0x0);
    if (!bVar2) {
      source = UI_SelectListPopup__GetActiveCategoryItems(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass46_0_OnSearchEndEdit_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      pSVar3 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_00,
                          (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_40740b8
                         );
      if (pSVar3 != (System_String_o *)0x0) {
        UI_SelectListPopup__OnItemClick(__this,pSVar3,(MethodInfo *)0x0);
      }
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$<Setup>b__44_2
// il2cpp: void UI_SelectListPopup___Setup_b__44_2 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821cab00

void UI_SelectListPopup___Setup_b__44_2(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f52 = '\x01';
  }
  UI_SelectListPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_3
// il2cpp: void UI_SelectListPopup___Setup_b__44_3 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821cab40

void UI_SelectListPopup___Setup_b__44_3(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184346f53 = '\x01';
  }
  UI_SelectListPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$<GetActiveCategoryItems>b__54_0
// il2cpp: bool UI_SelectListPopup___GetActiveCategoryItems_b__54_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x1821caa80

bool
UI_SelectListPopup___GetActiveCategoryItems_b__54_0(UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, MethodInfo* method)

{
  bool bVar1;
  
  if (x != (UI_SelectListPopup_ItemCategory_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$<SetupCategoryTabs>b__55_0
// il2cpp: bool UI_SelectListPopup___SetupCategoryTabs_b__55_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x1821caa80

bool UI_SelectListPopup___SetupCategoryTabs_b__55_0
               (UI_SelectListPopup_o *__this,UI_SelectListPopup_ItemCategory_o *x,MethodInfo *method)

{
  bool bVar1;
  
  if (x != (UI_SelectListPopup_ItemCategory_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$<OnButtonClick>b__64_0
// il2cpp: void UI_SelectListPopup___OnButtonClick_b__64_0 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x1821caab0

void UI_SelectListPopup___OnButtonClick_b__64_0(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346f54 = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    UI_SelectListPopup__OnConfirmOverwrite(__this,(pSVar1->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


