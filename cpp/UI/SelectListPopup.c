// Type: UI.SelectListPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/SelectListPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SelectListPopup.cs
// --------------------------------

// UI.SelectListPopup.ItemCategory$$.ctor
// il2cpp: void UI_SelectListPopup_ItemCategory___ctor (UI_SelectListPopup_ItemCategory_o* __this, System_String_o* name, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x5cc7400

void UI_SelectListPopup_ItemCategory___ctor
               (UI_SelectListPopup_ItemCategory_o *__this,System_String_o *name,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  (__this->fields).Items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Items);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass47_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass47_0___ctor (UI_SelectListPopup___c__DisplayClass47_0_o* __this, const MethodInfo* method);
// 0x5cc4660

void UI_SelectListPopup___c__DisplayClass47_0___ctor
               (UI_SelectListPopup___c__DisplayClass47_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass47_0$$<OnSearchEndEdit>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass47_0___OnSearchEndEdit_b__0 (UI_SelectListPopup___c__DisplayClass47_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5cc7440
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc7458: mov rsi, qword ptr [rbx + 0x10]
// asm:   0x5cc745c: mov rdi, rax
// asm:   0x5cc745f: xor edx, edx
// asm:   0x5cc7461: pop rbx
// asm:   0x5cc7462: jmp 0x5407290  ; System_String__Contains()

bool UI_SelectListPopup___c__DisplayClass47_0___OnSearchEndEdit_b__0
               (UI_SelectListPopup___c__DisplayClass47_0_o *__this,System_String_o *item,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *__this_00;
  MethodInfo *in_R9;
  
  if (item != (System_String_o *)0x0) {
    __this_00 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      iVar1 = System_String__IndexOf_5307960
                        (__this_00,(__this->fields).query,0,(__this_00->fields)._stringLength,4,in_R9);
      return -1 < iVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass52_0___ctor (UI_SelectListPopup___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5cc5c70

void UI_SelectListPopup___c__DisplayClass52_0___ctor
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$<RefreshList>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass52_0___RefreshList_b__0 (UI_SelectListPopup___c__DisplayClass52_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5cc7470

bool UI_SelectListPopup___c__DisplayClass52_0___RefreshList_b__0
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,System_String_o *item,MethodInfo *method)

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


// UI.SelectListPopup.<>c__DisplayClass52_0$$<RefreshList>b__1
// il2cpp: bool UI_SelectListPopup___c__DisplayClass52_0___RefreshList_b__1 (UI_SelectListPopup___c__DisplayClass52_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5cc74a0

bool UI_SelectListPopup___c__DisplayClass52_0___RefreshList_b__1
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,System_String_o *item,MethodInfo *method)

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


// UI.SelectListPopup.<>c__DisplayClass53_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass53_0___ctor (UI_SelectListPopup___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x5cc6550

void UI_SelectListPopup___c__DisplayClass53_0___ctor
               (UI_SelectListPopup___c__DisplayClass53_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass53_0$$<CreateItemButton>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass53_0___CreateItemButton_b__0 (UI_SelectListPopup___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x5cc74d0

void UI_SelectListPopup___c__DisplayClass53_0___CreateItemButton_b__0
               (UI_SelectListPopup___c__DisplayClass53_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_SelectListPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_SelectListPopup__OnItemClick(__this_00,(__this->fields).item,in_RDX);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass53_0$$<CreateItemButton>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass53_0___CreateItemButton_b__1 (UI_SelectListPopup___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x5cc74f0

void UI_SelectListPopup___c__DisplayClass53_0___CreateItemButton_b__1
               (UI_SelectListPopup___c__DisplayClass53_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_SelectListPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_SelectListPopup__OnDeleteClick(__this_00,(__this->fields).item,in_RDX);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass56_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass56_0___ctor (UI_SelectListPopup___c__DisplayClass56_0_o* __this, const MethodInfo* method);
// 0x5cc6700

void UI_SelectListPopup___c__DisplayClass56_0___ctor
               (UI_SelectListPopup___c__DisplayClass56_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass56_0$$<SetupCategoryTabs>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass56_0___SetupCategoryTabs_b__1 (UI_SelectListPopup___c__DisplayClass56_0_o* __this, const MethodInfo* method);
// 0x5cc7510

void UI_SelectListPopup___c__DisplayClass56_0___SetupCategoryTabs_b__1
               (UI_SelectListPopup___c__DisplayClass56_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_SelectListPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)(__this->fields).categoryName;
  (__this_00->fields)._activeCategoryName = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._activeCategoryName);
  UI_SelectListPopup__SyncCategoryTabs(__this_00,method_00);
  UI_SelectListPopup__RefreshList(__this_00,method_00);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass61_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass61_0___ctor (UI_SelectListPopup___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5cc6990

void UI_SelectListPopup___c__DisplayClass61_0___ctor
               (UI_SelectListPopup___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass61_0$$<OnItemClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass61_0___OnItemClick_b__0 (UI_SelectListPopup___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5cc7550

void UI_SelectListPopup___c__DisplayClass61_0___OnItemClick_b__0
               (UI_SelectListPopup___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  System_String_o *value;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    value = (__this->fields).name;
    if (Il2CppMethodInitialized_07547b47 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
      Il2CppMethodInitialized_07547b47 = '\x01';
    }
    __this_00 = (pUVar1->fields).FinishSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar2 = (pUVar1->fields)._onSave;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup.<>c__DisplayClass64_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass64_0___ctor (UI_SelectListPopup___c__DisplayClass64_0_o* __this, const MethodInfo* method);
// 0x5cc6c30

void UI_SelectListPopup___c__DisplayClass64_0___ctor
               (UI_SelectListPopup___c__DisplayClass64_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass64_0$$<OnDeleteClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass64_0___OnDeleteClick_b__0 (UI_SelectListPopup___c__DisplayClass64_0_o* __this, const MethodInfo* method);
// 0x5cc75e0

void UI_SelectListPopup___c__DisplayClass64_0___OnDeleteClick_b__0
               (UI_SelectListPopup___c__DisplayClass64_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_SelectListPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_SelectListPopup__OnConfirmDelete(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass65_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass65_0___ctor (UI_SelectListPopup___c__DisplayClass65_0_o* __this, const MethodInfo* method);
// 0x5cc70e0

void UI_SelectListPopup___c__DisplayClass65_0___ctor
               (UI_SelectListPopup___c__DisplayClass65_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass65_0$$<OnButtonClick>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass65_0___OnButtonClick_b__1 (UI_SelectListPopup___c__DisplayClass65_0_o* __this, const MethodInfo* method);
// 0x5cc7600

void UI_SelectListPopup___c__DisplayClass65_0___OnButtonClick_b__1
               (UI_SelectListPopup___c__DisplayClass65_0_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  System_String_o *value;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    value = (__this->fields).existing;
    if (Il2CppMethodInitialized_07547b47 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
      Il2CppMethodInitialized_07547b47 = '\x01';
    }
    __this_00 = (pUVar1->fields).FinishSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar2 = (pUVar1->fields)._onSave;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_SelectListPopup__get_ThemePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3b20

System_String_o * UI_SelectListPopup__get_ThemePanel(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SelectListPopup");
    Il2CppMethodInitialized_07547b37 = '\x01';
  }
  return "SelectListPopup";
}


// UI.SelectListPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SelectListPopup__get_HorizontalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3b50

int32_t UI_SelectListPopup__get_HorizontalPadding(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SelectListPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SelectListPopup__get_VerticalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3b60

int32_t UI_SelectListPopup__get_VerticalPadding(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.SelectListPopup$$get_VerticalSpacing
// il2cpp: float UI_SelectListPopup__get_VerticalSpacing (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3b70

float UI_SelectListPopup__get_VerticalSpacing(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.SelectListPopup$$get_DoublePanel
// il2cpp: bool UI_SelectListPopup__get_DoublePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3b80

bool UI_SelectListPopup__get_DoublePanel(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return false;
}


// UI.SelectListPopup$$get_ScrollBar
// il2cpp: bool UI_SelectListPopup__get_ScrollBar (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3b90

bool UI_SelectListPopup__get_ScrollBar(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.SelectListPopup$$get_Width
// il2cpp: float UI_SelectListPopup__get_Width (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3ba0

float UI_SelectListPopup__get_Width(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.SelectListPopup$$get_Height
// il2cpp: float UI_SelectListPopup__get_Height (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3bb0

float UI_SelectListPopup__get_Height(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.SelectListPopup$$get_ItemButtonWidth
// il2cpp: float UI_SelectListPopup__get_ItemButtonWidth (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3bc0

float UI_SelectListPopup__get_ItemButtonWidth(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.SelectListPopup$$get_ItemFontSize
// il2cpp: int32_t UI_SelectListPopup__get_ItemFontSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3bd0

int32_t UI_SelectListPopup__get_ItemFontSize(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0x1c;
}


// UI.SelectListPopup$$get_DeleteButtonSize
// il2cpp: float UI_SelectListPopup__get_DeleteButtonSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc3be0

float UI_SelectListPopup__get_DeleteButtonSize(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 32.0;
}


// UI.SelectListPopup$$Setup
// il2cpp: void UI_SelectListPopup__Setup (UI_SelectListPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc3bf0

void UI_SelectListPopup__Setup(UI_SelectListPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GameObject_o **targetAddress;
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
  UI_InputSettingElement_o *pUVar10;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar12;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__45_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__45_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__45_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_Setup_b__45_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"NoItemsFound");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b38 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
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
            (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_0,
             (MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_1,
             (MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateInputSetting
                     (pUVar3,pUVar7,(Settings_BaseSetting_o *)setting,pSVar6,"",185.0,40.0,
                      false,pUVar8,__this_01,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._inputElement = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._inputElement);
    pUVar3 = (__this->fields).BottomBar;
    __this_00 = (__this->fields)._saveElements;
    pSVar6 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_2,
               (MethodInfo *)0x0);
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
          pUVar4->m_Items[(int)uVar2] = pUVar9;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar9,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        pUVar3 = (__this->fields).BottomBar;
        pSVar6 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_3,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateTextButton(pUVar3,pUVar7,pSVar6,0.0,pUVar8,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).SinglePanel;
        pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(pUVar7,0x18,120.0,20.0,pSVar6,(MethodInfo *)0x0);
        pSVar6 = UI_UIManager__GetLocale
                           ("Common","NoItemsFound","",
                            "","",(MethodInfo *)0x0);
        pUVar9 = UI_ElementFactory__CreateDefaultLabel(pUVar3,pUVar7,pSVar6,0,4,(MethodInfo *)0x0);
        (__this->fields)._noItemsLabel = pUVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._noItemsLabel);
        pUVar9 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).TopBar,12.0,4,(MethodInfo *)0x0);
        targetAddress = &(__this->fields)._categoryButtonContainer;
        (__this->fields)._categoryButtonContainer = pUVar9;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pUVar9 = (__this->fields)._categoryButtonContainer;
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUVar11 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar9,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar11->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar11,0.0,(pUVar11->klass->vtable)._40_set_flexibleWidth.method);
            pUVar9 = *targetAddress;
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
              pUVar3 = (__this->fields).TopBar;
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                pUVar12 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar3,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                if (pUVar12 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                  (__this->fields)._defaultTopBarAlignment = (pUVar12->fields).m_ChildAlignment;
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
// 0x5cc40e0

void UI_SelectListPopup__OnSearchChanged(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__RefreshList(__this,method);
  return;
}


// UI.SelectListPopup$$OnSearchEndEdit
// il2cpp: void UI_SelectListPopup__OnSearchEndEdit (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc44e0

void UI_SelectListPopup__OnSearchEndEdit(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  UI_SelectListPopup___c__DisplayClass47_0_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *source;
  System_Func_string__bool__o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass47_0_OnSearchEndEdit_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass47_0);
    Il2CppMethodInitialized_07547b39 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass47_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
  if ((((!bVar2) && (bVar2 = UnityEngine_Input__GetKeyDown(0x10f,(MethodInfo *)0x0), !bVar2)) &&
      (bVar2 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0), !bVar2)) &&
     (bVar2 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0), !bVar2)) {
    return;
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (((pSVar1 == (Settings_StringSetting_o *)0x0) ||
      (pSVar3 = (pSVar1->fields)._value, pSVar3 == (System_String_o *)0x0)) ||
     (pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0),
     __this_00 == (UI_SelectListPopup___c__DisplayClass47_0_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).query = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).query);
  method_01 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty((__this_00->fields).query,(MethodInfo *)0x0);
  if (!bVar2) {
    source = UI_SelectListPopup__GetActiveCategoryItems(__this,method_01);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass47_0_OnSearchEndEdit_b__0,
               (MethodInfo_4F19300 *)0x0);
    pSVar3 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)__this_01,
                        (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548)
    ;
    if (pSVar3 != (System_String_o *)0x0) {
      UI_SelectListPopup__OnItemClick(__this,pSVar3,method_00);
      return;
    }
  }
  return;
}


// UI.SelectListPopup$$ShowLoad
// il2cpp: void UI_SelectListPopup__ShowLoad (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, UnityEngine_Events_UnityAction_o* onLoad, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, const MethodInfo* method);
// 0x5cc4a80

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
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)items;
  if (Il2CppMethodInitialized_07547b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b3a = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar4);
  (__this->fields)._items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  (__this->fields)._categorizedItems = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categorizedItems);
  (__this->fields)._useCategories = false;
  (__this->fields)._isSave = false;
  (__this->fields)._onLoad = onLoad;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onLoad);
  (__this->fields)._delete = onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  (__this->fields)._disallowedDelete = disallowedDelete;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onDelete);
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)"",
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._inputElement;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      pMVar4 = (MethodInfo *)0x0;
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,false,method_00);
      UI_SelectListPopup__ToggleSaveElements(__this,pMVar4);
      pMVar4 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
      bVar3 = System_String__op_Inequality(title,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if (bVar3) {
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_01);
        pMVar4 = (MethodInfo *)title;
      }
      UI_SelectListPopup__RefreshList(__this,pMVar4);
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
// 0x5cc5080
// eh: try 0x5cc523a..0x5cc5338 -> pad 0x5cc54fe (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc535d..0x5cc5362 -> pad 0x5cc54ec catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5cc54c5..0x5cc54cf -> pad 0x5cc555c catch (...) [compiler noexcept guard]
// eh: try 0x5cc54d5..0x5cc54e7 -> pad 0x5cc54f8 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc551d..0x5cc5522 -> pad 0x5cc5547 cleanup
// eh: try 0x5cc554a..0x5cc5554 -> pad 0x5cc555c catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc532e: jmp 0x5cc54df
// asm:   0x5cc533d: jmp 0x5cc5341
// asm:   0x5cc533f: jmp 0x5cc5341
// asm:   0x5cc5341: mov r15, rax
// asm:   0x5cc5344: cmp edx, 1
// asm:   0x5cc5347: jne 0x5cc54c2
// asm:   0x5cc534d: mov rdi, r15
// asm:   0x5cc5350: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc5355: mov r15, qword ptr [rax]
// asm:   0x5cc5358: mov qword ptr [rsp + 8], r15
// asm:   0x5cc535d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc5362: jmp 0x5cc5313
// asm:   0x5cc54c2: mov rbx, rdx
// asm:   0x5cc54c5: lea rdi, [rsp + 8]
// asm:   0x5cc54ca: call 0x2fdb350  ; il2cpp_runtime_helper_02fdb350()
// asm:   0x5cc54cf: mov rbp, qword ptr [rsp]
// asm:   0x5cc54d3: jmp 0x5cc5508
// asm:   0x5cc54df: mov rdi, r15
// asm:   0x5cc54e2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc54ec: mov rbx, rdx
// asm:   0x5cc54ef: mov r15, rax
// asm:   0x5cc54f2: jmp 0x5cc54c5
// asm:   0x5cc54f4: jmp 0x5cc54fe
// asm:   0x5cc54f6: jmp 0x5cc54fe
// asm:   0x5cc54f8: jmp 0x5cc54fe
// asm:   0x5cc54fa: jmp 0x5cc54fe
// asm:   0x5cc54fc: jmp 0x5cc54fe
// asm:   0x5cc54fe: mov rbx, rdx
// asm:   0x5cc5501: mov r15, rax
// asm:   0x5cc5504: mov rbp, qword ptr [rsp]
// asm:   0x5cc5508: cmp ebx, 1
// asm:   0x5cc550b: jne 0x5cc554a
// asm:   0x5cc550d: mov rdi, r15
// asm:   0x5cc5510: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc5515: mov rbx, qword ptr [rax]
// asm:   0x5cc5518: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5cc551d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc5522: lea rax, [rip + 0x15c9ee7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose
// asm:   0x5cc5529: mov rsi, qword ptr [rax]
// asm:   0x5cc552c: lea rdi, [rsp + 0x20]
// asm:   0x5cc5531: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc5536: test rbx, rbx
// asm:   0x5cc5539: je 0x5cc537c
// asm:   0x5cc553f: mov rdi, rbx
// asm:   0x5cc5542: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc5547: mov r15, rax
// asm:   0x5cc554a: lea rdi, [rsp + 0x68]
// asm:   0x5cc554f: call 0x2fdb380  ; il2cpp_runtime_helper_02fdb380()
// asm:   0x5cc5554: mov rdi, r15
// asm:   0x5cc5557: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc555c: mov rdi, rax
// asm:   0x5cc555f: call 0x2ab61e0  ; __clang_call_terminate()

void UI_SelectListPopup__ShowLoadCategorized
               (UI_SelectListPopup_o *__this,
               System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories,
               System_String_o *title,UnityEngine_Events_UnityAction_o *onLoad,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_string__o **targetAddress;
  uint uVar2;
  System_String_array *pSVar3;
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar4;
  UnityEngine_UI_InputField_o *pUVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *title_00;
  undefined1 auStack_a0 [16];
  System_String_o *pSStack_90;
  undefined1 auStack_88 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_80;
  System_String_o *pSStack_78;
  undefined1 auStack_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  System_String_o *pSStack_58;
  MethodInfo *pMStack_50;
  UnityEngine_Events_UnityAction_o *pUStack_48;
  undefined8 uStack_40;
  System_Collections_Generic_List_Enumerator_object__o *pSStack_38;
  
  pMVar8 = (MethodInfo *)categories;
  pMStack_50 = (MethodInfo *)title;
  pUStack_48 = onLoad;
  if (Il2CppMethodInitialized_07547b3b == '\0') {
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
    Il2CppMethodInitialized_07547b3b = '\x01';
  }
  auStack_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pSStack_78 = (System_String_o *)0x0;
  auStack_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar8);
  (__this->fields)._categorizedItems = categories;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categorizedItems);
  (__this->fields)._useCategories = true;
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  targetAddress = &(__this->fields)._items;
  (__this->fields)._items = pSVar7;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (categories != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
               (System_Collections_Generic_List_object__o *)categories,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_GetEnumerator);
    pSStack_78 = pSStack_90;
    auStack_88 = (undefined1  [8])auStack_a0._0_8_;
    pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_a0._8_8_;
    uStack_40 = 0;
    pSStack_38 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_88;
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_88,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_MoveNext
                             ), bVar6) {
      if (pSStack_78 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((*(uint64_t *)((char *)pSStack_78 + 0x18)) == (System_String_c *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
                 (System_Collections_Generic_List_object__o *)(*(uint64_t *)((char *)pSStack_78 + 0x18)),
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      pSStack_58 = pSStack_90;
      auStack_68 = (undefined1  [8])auStack_a0._0_8_;
      pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_a0._8_8_;
      auStack_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_68;
      while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
            pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add, bVar6) {
        pSVar7 = *targetAddress;
        if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) {
label_05cc5333:
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar7->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_05cc5333;
        uVar2 = (pSVar7->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar7->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSStack_58;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSStack_58,
                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_88,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose);
    (__this->fields)._isSave = false;
    (__this->fields)._onLoad = pUStack_48;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onLoad);
    (__this->fields)._delete = false;
    (__this->fields)._disallowedDelete = (System_Collections_Generic_List_string__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedDelete);
    (__this->fields)._onDelete = (UnityEngine_Events_UnityAction_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._onDelete);
    __this_00 = (__this->fields).FinishSetting;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,
                 (Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar4 = (__this->fields)._inputElement;
      if (pUVar4 != (UI_InputSettingElement_o *)0x0) {
        pMVar8 = (pUVar4->klass->vtable)._6_SyncElement.method;
        (*(pUVar4->klass->vtable)._6_SyncElement.methodPtr)(pUVar4,pMVar8);
        UI_SelectListPopup__SetupCategoryTabs(__this,pMVar8);
        UI_SelectListPopup__ToggleSaveElements(__this,pMVar8);
        title_00 = pMStack_50;
        pMVar8 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
        bVar6 = System_String__op_Inequality
                          ((System_String_o *)pMStack_50,(System_String_o *)pMVar8,(MethodInfo *)0x0);
        if (bVar6) {
          UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,(System_String_o *)title_00,method_00);
          pMVar8 = title_00;
        }
        UI_SelectListPopup__RefreshList(__this,pMVar8);
        pUVar4 = (__this->fields)._inputElement;
        if ((pUVar4 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar5 = (pUVar4->fields)._inputField, pUVar5 != (UnityEngine_UI_InputField_o *)0x0)) {
          (*(pUVar5->klass->vtable)._38_Select.methodPtr)(pUVar5,(pUVar5->klass->vtable)._38_Select.method);
          pUVar4 = (__this->fields)._inputElement;
          if ((pUVar4 != (UI_InputSettingElement_o *)0x0) &&
             (pUVar5 = (pUVar4->fields)._inputField, pUVar5 != (UnityEngine_UI_InputField_o *)0x0)) {
            UnityEngine_UI_InputField__ActivateInputField(pUVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$ShowSave
// il2cpp: void UI_SelectListPopup__ShowSave (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, System_String_o* initial, UnityEngine_Events_UnityAction_o* onSave, System_Collections_Generic_List_string__o* disallowedSave, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, System_Func_string__bool__o* isValidName, const MethodInfo* method);
// 0x5cc5a70

void UI_SelectListPopup__ShowSave
               (UI_SelectListPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_String_o *title,System_String_o *initial,UnityEngine_Events_UnityAction_o *onSave,
               System_Collections_Generic_List_string__o *disallowedSave,
               UnityEngine_Events_UnityAction_o *onDelete,
               System_Collections_Generic_List_string__o *disallowedDelete,
               System_Func_string__bool__o *isValidName,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)items;
  if (Il2CppMethodInitialized_07547b3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547b3c = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar4);
  (__this->fields)._items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  (__this->fields)._categorizedItems = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categorizedItems);
  (__this->fields)._useCategories = false;
  (__this->fields)._isSave = true;
  (__this->fields)._onSave = onSave;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave);
  (__this->fields)._disallowedSave = disallowedSave;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedSave);
  (__this->fields)._isValidName = isValidName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._isValidName);
  (__this->fields)._delete = onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  (__this->fields)._disallowedDelete = disallowedDelete;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onDelete);
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)initial,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._inputElement;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      pMVar4 = (MethodInfo *)0x0;
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,false,method_00);
      UI_SelectListPopup__ToggleSaveElements(__this,pMVar4);
      pMVar4 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
      bVar3 = System_String__op_Inequality(title,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if (bVar3) {
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_01);
        pMVar4 = (MethodInfo *)title;
      }
      UI_SelectListPopup__RefreshList(__this,pMVar4);
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
// 0x5cc4dd0
// eh: try 0x5cc4ea3..0x5cc4fc5 -> pad 0x5cc5016 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc4fe5..0x5cc4fea -> pad 0x5cc5005 cleanup
// eh: try 0x5cc5008..0x5cc5010 -> pad 0x5cc506a catch (...) [compiler noexcept guard]
// eh: try 0x5cc502d..0x5cc5032 -> pad 0x5cc5057 cleanup
// eh: try 0x5cc505a..0x5cc5062 -> pad 0x5cc506a catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc4fb6: jmp 0x5cc4ef9
// asm:   0x5cc4fca: jmp 0x5cc4fce
// asm:   0x5cc4fcc: jmp 0x5cc4fce
// asm:   0x5cc4fce: mov r14, rax
// asm:   0x5cc4fd1: cmp edx, 1
// asm:   0x5cc4fd4: jne 0x5cc5008
// asm:   0x5cc4fd6: mov rdi, r14
// asm:   0x5cc4fd9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc4fde: mov rbx, qword ptr [rax]
// asm:   0x5cc4fe1: mov qword ptr [rsp], rbx
// asm:   0x5cc4fe5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc4fea: lea rax, [rip + 0x15c8d87]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cc4ff1: mov rsi, qword ptr [rax]
// asm:   0x5cc4ff4: lea rdi, [rsp + 0x10]
// asm:   0x5cc4ff9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc4ffe: test rbx, rbx
// asm:   0x5cc5001: je 0x5cc4f98
// asm:   0x5cc5003: jmp 0x5cc504f
// asm:   0x5cc5005: mov r14, rax
// asm:   0x5cc5008: mov rdi, rsp
// asm:   0x5cc500b: call 0x2fdb3e0  ; il2cpp_runtime_helper_02fdb3e0()
// asm:   0x5cc5010: jmp 0x5cc5062
// asm:   0x5cc5012: jmp 0x5cc5016
// asm:   0x5cc5014: jmp 0x5cc5016
// asm:   0x5cc5016: mov r14, rax
// asm:   0x5cc5019: cmp edx, 1
// asm:   0x5cc501c: jne 0x5cc505a
// asm:   0x5cc501e: mov rdi, r14
// asm:   0x5cc5021: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc5026: mov rbx, qword ptr [rax]
// asm:   0x5cc5029: mov qword ptr [rsp], rbx
// asm:   0x5cc502d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc5032: lea rax, [rip + 0x15c8d3f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cc5039: mov rsi, qword ptr [rax]
// asm:   0x5cc503c: lea rdi, [rsp + 0x10]
// asm:   0x5cc5041: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc5046: test rbx, rbx
// asm:   0x5cc5049: je 0x5cc4edf
// asm:   0x5cc504f: mov rdi, rbx
// asm:   0x5cc5052: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc5057: mov r14, rax
// asm:   0x5cc505a: mov rdi, rsp
// asm:   0x5cc505d: call 0x2fdb3b0  ; il2cpp_runtime_helper_02fdb3b0()
// asm:   0x5cc5062: mov rdi, r14
// asm:   0x5cc5065: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc506a: mov rdi, rax
// asm:   0x5cc506d: call 0x2ab61e0  ; __clang_call_terminate()

void UI_SelectListPopup__ToggleSaveElements(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  bool bVar2;
  System_String_o *title;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if (Il2CppMethodInitialized_07547b3d == '\0') {
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
    Il2CppMethodInitialized_07547b3d = '\x01';
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._saveElements;
  if ((__this->fields)._isSave == false) {
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05cc4fc5;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          bVar2) {
      if ((UnityEngine_GameObject_o *)local_38.fields._current == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)local_38.fields._current,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    ppSVar3 = &"Load";
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_05cc4fc5:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          bVar2) {
      if ((UnityEngine_GameObject_o *)local_38.fields._current == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)local_38.fields._current,true,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    ppSVar3 = &"Save";
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  title = UI_UIManager__GetLocaleCommon(*ppSVar3,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_00);
  return;
}


// UI.SelectListPopup$$RefreshList
// il2cpp: void UI_SelectListPopup__RefreshList (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc40f0
// eh: try 0x5cc42f3..0x5cc4310 -> pad 0x5cc4316 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc4332..0x5cc4337 -> pad 0x5cc4471 cleanup
// eh: try 0x5cc4413..0x5cc442c -> pad 0x5cc4482 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc4474..0x5cc447e -> pad 0x5cc44d3 catch (...) [compiler noexcept guard]
// eh: try 0x5cc449a..0x5cc449f -> pad 0x5cc44be cleanup
// eh: try 0x5cc44c1..0x5cc44cb -> pad 0x5cc44d3 catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc4314: jmp 0x5cc4316
// asm:   0x5cc4316: mov r12, rax
// asm:   0x5cc4319: cmp edx, 1
// asm:   0x5cc431c: jne 0x5cc4474
// asm:   0x5cc4322: mov rdi, r12
// asm:   0x5cc4325: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc432a: mov rbx, qword ptr [rax]
// asm:   0x5cc432d: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cc4332: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc4337: lea rax, [rip + 0x15ca7ba]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5cc433e: mov rsi, qword ptr [rax]
// asm:   0x5cc4341: mov rdi, rsp
// asm:   0x5cc4344: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc4349: test rbx, rbx
// asm:   0x5cc434c: jne 0x5cc44b6
// asm:   0x5cc4471: mov r12, rax
// asm:   0x5cc4474: lea rdi, [rsp + 0x20]
// asm:   0x5cc4479: call 0x2fdb410  ; il2cpp_runtime_helper_02fdb410()
// asm:   0x5cc447e: jmp 0x5cc44cb
// asm:   0x5cc4480: jmp 0x5cc4482
// asm:   0x5cc4482: mov r12, rax
// asm:   0x5cc4485: cmp edx, 1
// asm:   0x5cc4488: jne 0x5cc44c1
// asm:   0x5cc448a: mov rdi, r12
// asm:   0x5cc448d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc4492: mov rbx, qword ptr [rax]
// asm:   0x5cc4495: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cc449a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc449f: lea rax, [rip + 0x15ca652]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5cc44a6: mov rsi, qword ptr [rax]
// asm:   0x5cc44a9: mov rdi, rsp
// asm:   0x5cc44ac: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc44b1: test rbx, rbx
// asm:   0x5cc44b4: je 0x5cc4442
// asm:   0x5cc44b6: mov rdi, rbx
// asm:   0x5cc44b9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc44be: mov r12, rax
// asm:   0x5cc44c1: lea rdi, [rsp + 0x20]
// asm:   0x5cc44c6: call 0x2fdb440  ; il2cpp_runtime_helper_02fdb440()
// asm:   0x5cc44cb: mov rdi, r12
// asm:   0x5cc44ce: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc44d3: mov rdi, rax
// asm:   0x5cc44d6: call 0x2ab61e0  ; __clang_call_terminate()

void UI_SelectListPopup__RefreshList(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar2;
  UI_SelectListPopup___c__DisplayClass52_0_o *__this_02;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Func_string__bool__o *pSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar7;
  UI_SelectListPopup___c__DisplayClass52_0_Fields *targetAddress;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547b3e == '\0') {
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
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_RefreshList_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_RefreshList_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass52_0);
    Il2CppMethodInitialized_07547b3e = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass52_0);
  pMVar3 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  UI_SelectListPopup__ClearListButtons(__this,pMVar3);
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (__this_00 = (pSVar1->fields)._value, __this_00 != (System_String_o *)0x0)) {
    iVar7 = 0;
    pMVar3 = (MethodInfo *)System_String__ToLowerInvariant(__this_00,(MethodInfo *)0x0);
    if (__this_02 != (UI_SelectListPopup___c__DisplayClass52_0_o *)0x0) {
      targetAddress = &__this_02->fields;
      (__this_02->fields).query = (System_String_o *)pMVar3;
      Il2CppCodeGenWriteBarrier(&targetAddress->query);
      if (((__this->fields)._useCategories == false) ||
         ((__this->fields)._categorizedItems ==
          (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) {
        bVar2 = System_String__IsNullOrEmpty(targetAddress->query,(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._items;
        if (!bVar2) {
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)pSVar5,(Il2CppObject *)__this_02,
                     (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_RefreshList_b__1,
                     (MethodInfo_4F19300 *)0x0);
          pSVar6 = System_Linq_Enumerable__Where_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                              (System_Func_TSource__bool__o *)pSVar5,
                              (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
          pSVar4 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList_object_
                             (pSVar6,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        }
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto label_05cc446c;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar4,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_58 = local_38;
        local_68 = (undefined1  [8])local_48._0_8_;
        puStack_60 = (undefined1 *)local_48._8_8_;
        local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_48._8_8_ = local_68;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar2) break;
          UI_SelectListPopup__CreateItemButton(__this,local_58,method_01);
          iVar7 = iVar7 + 1;
        }
      }
      else {
        pSVar4 = UI_SelectListPopup__GetActiveCategoryItems(__this,pMVar3);
        bVar2 = System_String__IsNullOrEmpty(targetAddress->query,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)pSVar5,(Il2CppObject *)__this_02,
                     (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_RefreshList_b__0,
                     (MethodInfo_4F19300 *)0x0);
          pSVar6 = System_Linq_Enumerable__Where_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                              (System_Func_TSource__bool__o *)pSVar5,
                              (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
          pSVar4 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList_object_
                             (pSVar6,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        }
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto label_05cc446c;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar4,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_58 = local_38;
        local_68 = (undefined1  [8])local_48._0_8_;
        puStack_60 = (undefined1 *)local_48._8_8_;
        local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        iVar7 = 0;
        local_48._8_8_ = local_68;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar2) break;
          UI_SelectListPopup__CreateItemButton(__this,local_58,method_00);
          iVar7 = iVar7 + 1;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      __this_01 = (__this->fields)._noItemsLabel;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,iVar7 == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05cc446c:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$CreateItemButton
// il2cpp: void UI_SelectListPopup__CreateItemButton (UI_SelectListPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5cc5e20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc6303: jmp 0x5cc6549

void UI_SelectListPopup__CreateItemButton
               (UI_SelectListPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t value_01;
  UI_SelectListPopup___c__DisplayClass53_0_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_UI_Button_o *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  System_String_o *pSVar11;
  UnityEngine_UI_LayoutElement_o *pUVar12;
  System_String_o **targetAddress;
  float fVar13;
  float fVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_07547b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass53_0_CreateItemButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass53_0_CreateItemButton_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass53_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"ItemButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/SelectListButton");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b3f = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass53_0);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (UI_SelectListPopup___c__DisplayClass53_0_o *)0x0) {
    (__this_02->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
    targetAddress = &(__this_02->fields).item;
    (__this_02->fields).item = item;
    Il2CppCodeGenWriteBarrier(targetAddress);
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
          pUVar3->m_Items[(int)uVar2] = pUVar7;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar7,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        if (((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
            pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar8 = UnityEngine_Transform__Find(pUVar8,"ItemButton",(MethodInfo *)0x0),
           pUVar8 != (UnityEngine_Transform_o *)0x0)) {
          __this_03 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar8,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
          pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
              (pUVar8 = UnityEngine_Transform__Find(pUVar8,"DeleteButton",(MethodInfo *)0x0),
              pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
             (__this_04 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar8,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_Button),
             __this_03 != (UnityEngine_UI_Button_o *)0x0)) {
            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_OnClick;
            pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (pUVar9,(Il2CppObject *)__this_02,
                       (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass53_0_CreateItemButton_b__0,
                       (MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar9,(MethodInfo *)0x0);
              pUVar8 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
              if (((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                  (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
                  pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
                 (pUVar10 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar8,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Text),
                 pUVar10 != (UnityEngine_UI_Text_o *)0x0)) {
                (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                          (pUVar10,*targetAddress,(pUVar10->klass->vtable)._75_set_text.method);
                pUVar8 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                   (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
                   pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                  pUVar10 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar8,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Text);
                  value_01 = (*(__this->klass->vtable)._63_get_ItemFontSize.methodPtr)
                                       (__this,(__this->klass->vtable)._63_get_ItemFontSize.method);
                  if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                    UnityEngine_UI_Text__set_fontSize(pUVar10,value_01,(MethodInfo *)0x0);
                    pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    UI_UIManager__GetThemeColorBlock
                              (&local_88,pSVar11,"ItemButton","",
                               "DefaultPanel",(MethodInfo *)0x0);
                    value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                    value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                    value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                    value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                    value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r;
                    value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g;
                    value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b;
                    value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a;
                    value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
                    value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
                    value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
                    value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
                    value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
                    value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
                    value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
                    value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
                    value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
                    value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
                    value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
                    value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
                    value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                    value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                    UnityEngine_UI_Selectable__set_colors
                              ((UnityEngine_UI_Selectable_o *)__this_03,value,(MethodInfo *)0x0);
                    pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                    if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                       (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
                       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar10 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar8,
                                           (MethodInfo_34B0830 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_Text);
                      pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                      UVar15 = UI_UIManager__GetThemeColor
                                         (pSVar11,"ItemButton","TextColor",
                                          "DefaultPanel",(MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                        (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar10,UVar15,(pUVar10->klass->vtable)._23_set_color.method);
                        bVar6 = (__this->fields)._delete;
                        pUVar12 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)__this_03,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                        fVar13 = (*(__this->klass->vtable)._62_get_ItemButtonWidth.methodPtr)
                                           (__this,(__this->klass->vtable)._62_get_ItemButtonWidth.method);
                        if (bVar6 == false) {
                          fVar14 = (*(__this->klass->vtable)._64_get_DeleteButtonSize.methodPtr)
                                             (__this,(__this->klass->vtable)._64_get_DeleteButtonSize.method);
                          if (pUVar12 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cc6549;
                          fVar13 = fVar13 + fVar14 + 10.0;
                        }
                        else if (pUVar12 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cc6549;
                        (*(pUVar12->klass->vtable)._36_set_preferredWidth.methodPtr)
                                  (pUVar12,fVar13,(pUVar12->klass->vtable)._36_set_preferredWidth.method);
                        if (((__this->fields)._delete == false) ||
                           ((__this_01 = (__this->fields)._disallowedDelete,
                            __this_01 != (System_Collections_Generic_List_string__o *)0x0 &&
                            (bVar6 = System_Collections_Generic_List_object___Contains
                                               ((System_Collections_Generic_List_object__o *)__this_01,
                                                (Il2CppObject *)*targetAddress,
                                                (MethodInfo_395D6D0 *)
                                                MethodInfo_System_Collections_Generic_List_string_Contains),
                            bVar6)))) {
                          if ((__this_04 != (UnityEngine_UI_Button_o *)0x0) &&
                             (pUVar7 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
                             pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        else if (__this_04 != (UnityEngine_UI_Button_o *)0x0) {
                          pUVar4 = (UnityEngine_Events_UnityEvent_o *)(__this_04->fields).m_OnClick;
                          pUVar9 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    (pUVar9,(Il2CppObject *)__this_02,
                                     (intptr_t)
                                     MethodInfo_UI_SelectListPopup_c__DisplayClass53_0_CreateItemButton_b__1,
                                     (MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar9,(MethodInfo *)0x0);
                            pUVar12 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)__this_04,
                                                 (MethodInfo_34B0830 *)
                                                 MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                            fVar13 = (*(__this->klass->vtable)._64_get_DeleteButtonSize.methodPtr)
                                               (__this,(__this->klass->vtable)._64_get_DeleteButtonSize.method
                                               );
                            if (pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                              (*(pUVar12->klass->vtable)._36_set_preferredWidth.methodPtr)
                                        (pUVar12,fVar13,(pUVar12->klass->vtable)._36_set_preferredWidth.method
                                        );
                              pUVar12 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)__this_04,
                                                   (MethodInfo_34B0830 *)
                                                   MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                                                  );
                              fVar13 = (*(__this->klass->vtable)._64_get_DeleteButtonSize.methodPtr)
                                                 (__this,(__this->klass->vtable)._64_get_DeleteButtonSize.
                                                         method);
                              if (pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                (*(pUVar12->klass->vtable)._38_set_preferredHeight.methodPtr)
                                          (pUVar12,fVar13,
                                           (pUVar12->klass->vtable)._38_set_preferredHeight.method);
                                pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                }
                                UI_UIManager__GetThemeColorBlock
                                          (&local_88,pSVar11,"DeleteButton","",
                                           "DefaultPanel",(MethodInfo *)0x0);
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
                                value_00.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                                value_00.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                UnityEngine_UI_Selectable__set_colors
                                          ((UnityEngine_UI_Selectable_o *)__this_04,value_00,(MethodInfo *)0x0
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
label_05cc6549:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$ClearListButtons
// il2cpp: void UI_SelectListPopup__ClearListButtons (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc5c80
// eh: try 0x5cc5d40..0x5cc5d71 -> pad 0x5cc5dc4 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc5ddc..0x5cc5de1 -> pad 0x5cc5e00 cleanup
// eh: try 0x5cc5e03..0x5cc5e0d -> pad 0x5cc5e15 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc5dc2: jmp 0x5cc5dc4
// asm:   0x5cc5dc4: mov rbx, rax
// asm:   0x5cc5dc7: cmp edx, 1
// asm:   0x5cc5dca: jne 0x5cc5e03
// asm:   0x5cc5dcc: mov rdi, rbx
// asm:   0x5cc5dcf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc5dd4: mov rbx, qword ptr [rax]
// asm:   0x5cc5dd7: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cc5ddc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc5de1: lea rax, [rip + 0x15c7f90]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cc5de8: mov rsi, qword ptr [rax]
// asm:   0x5cc5deb: mov rdi, rsp
// asm:   0x5cc5dee: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc5df3: test rbx, rbx
// asm:   0x5cc5df6: je 0x5cc5d85
// asm:   0x5cc5df8: mov rdi, rbx
// asm:   0x5cc5dfb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc5e00: mov rbx, rax
// asm:   0x5cc5e03: lea rdi, [rsp + 0x20]
// asm:   0x5cc5e08: call 0x2fdb470  ; il2cpp_runtime_helper_02fdb470()
// asm:   0x5cc5e0d: mov rdi, rbx
// asm:   0x5cc5e10: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc5e15: mov rdi, rax
// asm:   0x5cc5e18: call 0x2ab61e0  ; __clang_call_terminate()

void UI_SelectListPopup__ClearListButtons(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  Il2CppObject *obj;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547b40 == '\0') {
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
    Il2CppMethodInitialized_07547b40 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._itemButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_58.fields._current;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
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
// 0x5cc4670

System_Collections_Generic_List_string__o *
UI_SelectListPopup__GetActiveCategoryItems(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *pSVar1;
  System_Func_SelectListPopup_ItemCategory__bool__o *__this_00;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_string__o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_SelectListPopup_ItemCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_SelectListPopup_ItemCategory_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_GetActiveCategoryItems_b__55_0);
    Il2CppMethodInitialized_07547b41 = '\x01';
  }
  if ((((__this->fields)._useCategories == false) ||
      (pSVar1 = (__this->fields)._categorizedItems,
      pSVar1 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     ((pSVar1->fields)._size == 0)) {
    ppSVar3 = &(__this->fields)._items;
  }
  else {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_SelectListPopup_ItemCategory_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_SelectListPopup_GetActiveCategoryItems_b__55_0,
               (MethodInfo_4F19300 *)0x0);
    pIVar2 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__bool__o *)__this_00,
                        (MethodInfo_34ED9E0 *)
                        MethodInfo_System_Linq_Enumerable_FirstOrDefault_SelectListPopup_ItemCategory);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pSVar1 = (__this->fields)._categorizedItems;
      if (pSVar1 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
label_05cc478a:
        ThrowNullReferenceException();
      }
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Item);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05cc478a;
    }
    (__this->fields)._activeCategoryName = (System_String_o *)pIVar2[1].klass;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName);
    ppSVar3 = &pIVar2[1].monitor;
  }
  return *ppSVar3;
}


// UI.SelectListPopup$$SetupCategoryTabs
// il2cpp: void UI_SelectListPopup__SetupCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc5570
// eh: try 0x5cc582f..0x5cc59f4 -> pad 0x5cc5a07 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc5a27..0x5cc5a2c -> pad 0x5cc5a4b cleanup
// eh: try 0x5cc5a4e..0x5cc5a58 -> pad 0x5cc5a60 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc59b4: lea rax, [rip + 0x15c9a55]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose
// asm:   0x5cc59bb: mov rsi, qword ptr [rax]
// asm:   0x5cc59be: mov rdi, rsp
// asm:   0x5cc59c1: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc59c6: mov rdi, r12
// asm:   0x5cc59c9: mov esi, 1
// asm:   0x5cc59ce: call 0x5cc4c40  ; UI_SelectListPopup__SetCategoryTabsEnabled()
// asm:   0x5cc59d3: mov rdi, r12
// asm:   0x5cc59d6: call 0x5cc6710  ; UI_SelectListPopup__SyncCategoryTabs()
// asm:   0x5cc59db: jmp 0x5cc5689
// asm:   0x5cc59f9: jmp 0x5cc5a0f
// asm:   0x5cc59fb: jmp 0x5cc5a0f
// asm:   0x5cc59fd: jmp 0x5cc5a0f
// asm:   0x5cc59ff: jmp 0x5cc5a0f
// asm:   0x5cc5a01: jmp 0x5cc5a0f
// asm:   0x5cc5a03: jmp 0x5cc5a0f
// asm:   0x5cc5a05: jmp 0x5cc5a0f
// asm:   0x5cc5a07: jmp 0x5cc5a0f
// asm:   0x5cc5a09: jmp 0x5cc5a0f
// asm:   0x5cc5a0b: jmp 0x5cc5a0f
// asm:   0x5cc5a0d: jmp 0x5cc5a0f
// asm:   0x5cc5a0f: mov r14, rax
// asm:   0x5cc5a12: cmp edx, 1
// asm:   0x5cc5a15: jne 0x5cc5a4e
// asm:   0x5cc5a17: mov rdi, r14
// asm:   0x5cc5a1a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc5a1f: mov rbx, qword ptr [rax]
// asm:   0x5cc5a22: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cc5a27: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc5a2c: lea rax, [rip + 0x15c99dd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose
// asm:   0x5cc5a33: mov rsi, qword ptr [rax]
// asm:   0x5cc5a36: mov rdi, rsp
// asm:   0x5cc5a39: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc5a3e: test rbx, rbx
// asm:   0x5cc5a41: je 0x5cc59c6
// asm:   0x5cc5a43: mov rdi, rbx
// asm:   0x5cc5a46: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc5a4b: mov r14, rax
// asm:   0x5cc5a4e: lea rdi, [rsp + 0x20]
// asm:   0x5cc5a53: call 0x2fdb4a0  ; il2cpp_runtime_helper_02fdb4a0()
// asm:   0x5cc5a58: mov rdi, r14
// asm:   0x5cc5a5b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc5a60: mov rdi, rax
// asm:   0x5cc5a63: call 0x2ab61e0  ; __clang_call_terminate()

void UI_SelectListPopup__SetupCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **targetAddress;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *pSVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  bool bVar5;
  System_Func_SelectListPopup_ItemCategory__bool__o *__this_01;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_02;
  UI_SelectListPopup___c__DisplayClass56_0_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *__this_04;
  UnityEngine_GameObject_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar9;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547b42 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_SetupCategoryTabs_b__56_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass56_0_SetupCategoryTabs_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass56_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07547b42 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  UI_SelectListPopup__ClearCategoryTabs(__this,pMVar9);
  if ((((__this->fields)._useCategories == false) ||
      (pSVar3 = (__this->fields)._categorizedItems,
      pSVar3 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     ((pSVar3->fields)._size == 0)) {
    (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName);
    UI_SelectListPopup__SetCategoryTabsEnabled(__this,false,method_00);
    return;
  }
  bVar5 = System_String__op_Equality
                    ((__this->fields)._activeCategoryName,
                     (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar5) {
label_05cc573f:
    pSVar3 = (__this->fields)._categorizedItems;
    if ((pSVar3 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) ||
       (pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_get_Item),
       pIVar6 == (Il2CppObject *)0x0)) goto label_05cc59f4;
    targetAddress = &(__this->fields)._activeCategoryName;
    *targetAddress = (System_String_o *)pIVar6[1].klass;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  else {
    pSVar3 = (__this->fields)._categorizedItems;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_SelectListPopup_ItemCategory_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_SelectListPopup_SetupCategoryTabs_b__56_0,(MethodInfo_4F19300 *)0x0);
    bVar5 = System_Linq_Enumerable__Any_object__34dfce0
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                       (System_Func_TSource__bool__o *)__this_01,
                       (MethodInfo_34DFCE0 *)
                       MethodInfo_System_Linq_Enumerable_Any_SelectListPopup_ItemCategory);
    if (!bVar5) goto label_05cc573f;
  }
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x14,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._categorizedItems;
  if (pSVar3 != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_SelectListPopup_ItemCategory_GetEnumerator);
    local_68.fields._current = local_38;
    local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    local_68.fields._index = local_48._8_4_;
    local_68.fields._version = local_48._12_4_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = &local_68;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_MoveNext
                        );
      pIVar6 = local_68.fields._current;
      if (!bVar5) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (&local_68,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_SelectListPopup_ItemCategory_Dispose)
        ;
        pMVar9 = (MethodInfo *)0x1;
        UI_SelectListPopup__SetCategoryTabsEnabled(__this,true,method_01);
        UI_SelectListPopup__SyncCategoryTabs(__this,pMVar9);
        return;
      }
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass56_0);
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (__this_03 == (UI_SelectListPopup___c__DisplayClass56_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_03->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_03->fields).categoryName = (System_String_o *)pIVar6[1].klass;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).categoryName);
      pUVar8 = (__this->fields)._categoryButtonContainer;
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      parent = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      pSVar7 = (__this_03->fields).categoryName;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_04,(Il2CppObject *)__this_03,
                 (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass56_0_SetupCategoryTabs_b__1,
                 (MethodInfo *)0x0);
      pUVar8 = UI_ElementFactory__CreateDefaultButton
                         (parent,__this_02,pSVar7,140.0,36.0,__this_04,(MethodInfo *)0x0);
      pMVar9 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      __this_00 = (__this->fields)._categoryButtons;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 == (UnityEngine_GameObject_array *)0x0) break;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = pUVar8;
        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar8,
                   (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
      }
    }
    ThrowNullReferenceException();
  }
label_05cc59f4:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$SetCategoryTabsEnabled
// il2cpp: void UI_SelectListPopup__SetCategoryTabsEnabled (UI_SelectListPopup_o* __this, bool enabled, const MethodInfo* method);
// 0x5cc4c40

void UI_SelectListPopup__SetCategoryTabsEnabled(UI_SelectListPopup_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_07547b43 = '\x01';
  }
  pUVar2 = (__this->fields).TopBar;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).TopBar;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cc4dc7;
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cc4dc7;
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05cc4dc7;
      UnityEngine_GameObject__SetActive(pUVar3,!enabled,(MethodInfo *)0x0);
    }
    if ((__this->fields)._cachedTopBarAlignment != false) {
      pUVar2 = (__this->fields).TopBar;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cc4dc7;
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar2,
                             (MethodInfo_34B0830 *)
                             MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
      value = 4;
      if (!enabled) {
        value = (__this->fields)._defaultTopBarAlignment;
      }
      if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05cc4dc7;
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_00,value,(MethodInfo *)0x0);
    }
  }
  x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields)._categoryButtonContainer;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
label_05cc4dc7:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)(ulong)enabled;
    UnityEngine_GameObject__SetActive(pUVar3,enabled,(MethodInfo *)0x0);
  }
  if (enabled) {
    return;
  }
  UI_SelectListPopup__ClearCategoryTabs(__this,method_00);
  return;
}


// UI.SelectListPopup$$ClearCategoryTabs
// il2cpp: void UI_SelectListPopup__ClearCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc6560
// eh: try 0x5cc6620..0x5cc6651 -> pad 0x5cc66a4 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc66bc..0x5cc66c1 -> pad 0x5cc66e0 cleanup
// eh: try 0x5cc66e3..0x5cc66ed -> pad 0x5cc66f5 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc66a2: jmp 0x5cc66a4
// asm:   0x5cc66a4: mov rbx, rax
// asm:   0x5cc66a7: cmp edx, 1
// asm:   0x5cc66aa: jne 0x5cc66e3
// asm:   0x5cc66ac: mov rdi, rbx
// asm:   0x5cc66af: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc66b4: mov rbx, qword ptr [rax]
// asm:   0x5cc66b7: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cc66bc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc66c1: lea rax, [rip + 0x15c76b0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cc66c8: mov rsi, qword ptr [rax]
// asm:   0x5cc66cb: mov rdi, rsp
// asm:   0x5cc66ce: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc66d3: test rbx, rbx
// asm:   0x5cc66d6: je 0x5cc6665
// asm:   0x5cc66d8: mov rdi, rbx
// asm:   0x5cc66db: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc66e0: mov rbx, rax
// asm:   0x5cc66e3: lea rdi, [rsp + 0x20]
// asm:   0x5cc66e8: call 0x2fdb4d0  ; il2cpp_runtime_helper_02fdb4d0()
// asm:   0x5cc66ed: mov rdi, rbx
// asm:   0x5cc66f0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc66f5: mov rdi, rax
// asm:   0x5cc66f8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_SelectListPopup__ClearCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  Il2CppObject *obj;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547b44 == '\0') {
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
    Il2CppMethodInitialized_07547b44 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._categoryButtons;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_58.fields._current;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
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
// 0x5cc6960

void UI_SelectListPopup__OnCategoryTabClick
               (UI_SelectListPopup_o *__this,System_String_o *categoryName,MethodInfo *method)

{
  (__this->fields)._activeCategoryName = categoryName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName);
  UI_SelectListPopup__SyncCategoryTabs(__this,(MethodInfo *)categoryName);
  UI_SelectListPopup__RefreshList(__this,(MethodInfo *)categoryName);
  return;
}


// UI.SelectListPopup$$SyncCategoryTabs
// il2cpp: void UI_SelectListPopup__SyncCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc6710
// eh: try 0x5cc67f4..0x5cc68db -> pad 0x5cc68f8 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc6910..0x5cc6915 -> pad 0x5cc6934 cleanup
// eh: try 0x5cc6937..0x5cc6941 -> pad 0x5cc6949 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc68e0: jmp 0x5cc68f8
// asm:   0x5cc68e2: jmp 0x5cc68f8
// asm:   0x5cc68e4: jmp 0x5cc68f8
// asm:   0x5cc68e6: jmp 0x5cc68f8
// asm:   0x5cc68e8: jmp 0x5cc68f8
// asm:   0x5cc68ea: jmp 0x5cc68f8
// asm:   0x5cc68ec: jmp 0x5cc68f8
// asm:   0x5cc68ee: jmp 0x5cc68f8
// asm:   0x5cc68f0: jmp 0x5cc68f8
// asm:   0x5cc68f2: jmp 0x5cc68f8
// asm:   0x5cc68f4: jmp 0x5cc68f8
// asm:   0x5cc68f6: jmp 0x5cc68f8
// asm:   0x5cc68f8: mov rbx, rax
// asm:   0x5cc68fb: cmp edx, 1
// asm:   0x5cc68fe: jne 0x5cc6937
// asm:   0x5cc6900: mov rdi, rbx
// asm:   0x5cc6903: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc6908: mov rbx, qword ptr [rax]
// asm:   0x5cc690b: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cc6910: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc6915: lea rax, [rip + 0x15c745c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cc691c: mov rsi, qword ptr [rax]
// asm:   0x5cc691f: mov rdi, rsp
// asm:   0x5cc6922: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc6927: test rbx, rbx
// asm:   0x5cc692a: je 0x5cc68b3
// asm:   0x5cc692c: mov rdi, rbx
// asm:   0x5cc692f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc6934: mov rbx, rax
// asm:   0x5cc6937: lea rdi, [rsp + 0x20]
// asm:   0x5cc693c: call 0x2fdb500  ; il2cpp_runtime_helper_02fdb500()
// asm:   0x5cc6941: mov rdi, rbx
// asm:   0x5cc6944: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc6949: mov rdi, rax
// asm:   0x5cc694c: call 0x2ab61e0  ; __clang_call_terminate()

void UI_SelectListPopup__SyncCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  UnityEngine_GameObject_o *local_38;
  
  if (Il2CppMethodInitialized_07547b45 == '\0') {
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
    Il2CppMethodInitialized_07547b45 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._categoryButtons;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    __this_01 = local_68.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_68,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      return;
    }
    if ((UnityEngine_GameObject_o *)local_68.fields._current == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)local_68.fields._current,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = (*(pUVar3->klass->vtable)._74_get_text.methodPtr)(pUVar3,(pUVar3->klass->vtable)._74_get_text.method);
    bVar1 = System_String__op_Equality(a,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
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
// 0x5cc4790

void UI_SelectListPopup__OnItemClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  UI_BaseMenu_o *pUVar1;
  UI_MessagePopup_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar2;
  UI_ConfirmPopup_o *__this_03;
  Settings_StringSetting_o *__this_04;
  bool bVar3;
  UI_SelectListPopup___c__DisplayClass61_0_o *__this_05;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  System_String_o **targetAddress;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_07547b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass61_0_OnItemClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass61_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"OverwriteItemConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"CannotOverwriteItem");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b46 = '\x01';
  }
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass61_0);
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  if (__this_05 != (UI_SelectListPopup___c__DisplayClass61_0_o *)0x0) {
    (__this_05->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_05->fields).__4__this);
    targetAddress = &(__this_05->fields).name;
    (__this_05->fields).name = name;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((__this->fields)._isSave == false) {
      __this_04 = (__this->fields).FinishSetting;
      if (__this_04 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_04,(Il2CppObject *)*targetAddress,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pUVar5 = (__this->fields)._onLoad;
        if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
    }
    else {
      __this_00 = (__this->fields)._disallowedSave;
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        bVar3 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)*targetAddress,
                           (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (bVar3) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar1 != (UI_BaseMenu_o *)0x0) {
            __this_01 = (pUVar1->fields).MessagePopup;
            pMVar6 = (MethodInfo *)"CannotOverwriteItem";
            pSVar4 = UI_UIManager__GetLocale
                               ("Common","CannotOverwriteItem","",
                                "","",(MethodInfo *)0x0);
            if (__this_01 != (UI_MessagePopup_o *)0x0) {
              UI_BasePopup__Show((UI_BasePopup_o *)__this_01,pMVar6);
              __this_02 = (__this_01->fields)._button;
              if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
                pUVar2 = (__this_01->fields)._label;
                if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                  (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                            (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
                  return;
                }
              }
            }
          }
          goto label_05cc4a6d;
        }
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar1 != (UI_BaseMenu_o *)0x0) {
        __this_03 = (pUVar1->fields).ConfirmPopup;
        pMVar6 = (MethodInfo *)"";
        pSVar4 = UI_UIManager__GetLocale
                           ("Common","OverwriteItemConfirm","",
                            "","",(MethodInfo *)0x0);
        pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar5,(Il2CppObject *)__this_05,
                   (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass61_0_OnItemClick_b__0,
                   (MethodInfo *)0x0);
        if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_03,pSVar4,pUVar5,(System_String_o *)0x0,pMVar6);
          return;
        }
      }
    }
  }
label_05cc4a6d:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnConfirmOverwrite
// il2cpp: void UI_SelectListPopup__OnConfirmOverwrite (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc69a0

void UI_SelectListPopup__OnConfirmOverwrite
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547b47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547b47 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
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
// 0x5cc6a20

void UI_SelectListPopup__OnConfirmDelete
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07547b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547b48 = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)name,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar2 = (__this->fields)._onDelete;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8)
                   ,(MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        __this_00 = (__this->fields)._items;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)name,
                     (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_string_Remove);
          UI_SelectListPopup__RefreshList(__this,(MethodInfo *)name);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnDeleteClick
// il2cpp: void UI_SelectListPopup__OnDeleteClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc6af0

void UI_SelectListPopup__OnDeleteClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UI_SelectListPopup___c__DisplayClass64_0_o *__this_01;
  System_String_o *message;
  UnityEngine_Events_UnityAction_o *__this_02;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass64_0_OnDeleteClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass64_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteWarning");
    Il2CppMethodInitialized_07547b49 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass64_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_SelectListPopup___c__DisplayClass64_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).name);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 != (UI_BaseMenu_o *)0x0) {
      __this_00 = (pUVar1->fields).ConfirmPopup;
      message = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_02,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass64_0_OnDeleteClick_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_00,message,__this_02,(System_String_o *)0x0,in_R8);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$OnButtonClick
// il2cpp: void UI_SelectListPopup__OnButtonClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc6c40

void UI_SelectListPopup__OnButtonClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_BaseMenu_o *pUVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *pUVar4;
  bool bVar5;
  char cVar6;
  System_String_o **ppSVar7;
  UI_SelectListPopup___c__DisplayClass65_0_o *__this_02;
  System_Func_string__bool__o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  System_String_o *pSVar10;
  UI_MessagePopup_o *__this_03;
  MethodInfo *pMVar11;
  
  if (Il2CppMethodInitialized_07547b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SelectListPopup_OnButtonClick_b__65_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SelectListPopup_c__DisplayClass65_0_OnButtonClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SelectListPopup_c__DisplayClass65_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"EmptyName");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"InvalidName");
    il2cpp_codegen_initialize_runtime_metadata(&"OverwriteItemConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"CannotOverwriteItem");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b4a = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar5) goto label_05cc6d46;
  bVar5 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_05cc70d7;
  bVar5 = System_String__op_Equality
                    ((pSVar1->fields)._value,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                     (MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_05cc70d7;
    __this_03 = (pUVar2->fields).MessagePopup;
    ppSVar7 = &"EmptyName";
label_05cc704b:
    pMVar11 = (MethodInfo *)*ppSVar7;
    pSVar10 = UI_UIManager__GetLocale
                        ("Common",(System_String_o *)pMVar11,"",
                         "","",(MethodInfo *)0x0);
    if (__this_03 != (UI_MessagePopup_o *)0x0) {
      UI_BasePopup__Show((UI_BasePopup_o *)__this_03,pMVar11);
      __this_01 = (__this_03->fields)._button;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
        pUVar4 = (__this_03->fields)._label;
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                    (pUVar4,pSVar10,(pUVar4->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
  else {
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SelectListPopup_c__DisplayClass65_0);
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (__this_02 == (UI_SelectListPopup___c__DisplayClass65_0_o *)0x0) goto label_05cc70d7;
    (__this_02->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
    pSVar3 = (__this->fields)._items;
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar8,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_SelectListPopup_OnButtonClick_b__65_0,(MethodInfo_4F19300 *)0x0);
    pSVar10 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                         (System_Func_TSource__bool__o *)pSVar8,
                         (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548
                        );
    (__this_02->fields).existing = pSVar10;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).existing);
    pSVar3 = (__this->fields)._disallowedSave;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_05cc70d7;
      bVar5 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)pSVar3,
                         (Il2CppObject *)(pSVar1->fields)._value,
                         (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (bVar5) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_05cc70d7;
        __this_03 = (pUVar2->fields).MessagePopup;
        ppSVar7 = &"CannotOverwriteItem";
        goto label_05cc704b;
      }
    }
    pSVar8 = (__this->fields)._isValidName;
    if (pSVar8 != (System_Func_string__bool__o *)0x0) {
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_05cc70d7;
      cVar6 = (*(code *)(pSVar8->fields).invoke_impl)
                        ((pSVar8->fields).method_code,(pSVar1->fields)._value,(pSVar8->fields).method);
      if (cVar6 == '\0') {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_05cc70d7;
        __this_03 = (pUVar2->fields).MessagePopup;
        ppSVar7 = &"InvalidName";
        goto label_05cc704b;
      }
    }
    if ((__this_02->fields).existing == (System_String_o *)0x0) {
      pUVar9 = (__this->fields)._onSave;
      if (pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar9->fields).invoke_impl)((pUVar9->fields).method_code,(pUVar9->fields).method);
label_05cc6d46:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        __this_00 = (pUVar2->fields).ConfirmPopup;
        pMVar11 = (MethodInfo *)"";
        pSVar10 = UI_UIManager__GetLocale
                            ("Common","OverwriteItemConfirm","",
                             "","",(MethodInfo *)0x0);
        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar9,(Il2CppObject *)__this_02,
                   (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass65_0_OnButtonClick_b__1,
                   (MethodInfo *)0x0);
        if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_00,pSVar10,pUVar9,(System_String_o *)0x0,pMVar11);
          return;
        }
      }
    }
  }
label_05cc70d7:
  ThrowNullReferenceException();
}


// UI.SelectListPopup$$.ctor
// il2cpp: void UI_SelectListPopup___ctor (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc70f0

void UI_SelectListPopup___ctor(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547b4b = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._itemButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._itemButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._categoryButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._saveElements = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._saveElements);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCategoryName);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.SelectListPopup$$<Setup>b__45_0
// il2cpp: void UI_SelectListPopup___Setup_b__45_0 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc72a0

void UI_SelectListPopup___Setup_b__45_0(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__RefreshList(__this,method);
  return;
}


// UI.SelectListPopup$$<Setup>b__45_1
// il2cpp: void UI_SelectListPopup___Setup_b__45_1 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc72b0

void UI_SelectListPopup___Setup_b__45_1(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__OnSearchEndEdit(__this,method);
  return;
}


// UI.SelectListPopup$$<Setup>b__45_2
// il2cpp: void UI_SelectListPopup___Setup_b__45_2 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc72c0

void UI_SelectListPopup___Setup_b__45_2(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b4c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SelectListPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.SelectListPopup$$<Setup>b__45_3
// il2cpp: void UI_SelectListPopup___Setup_b__45_3 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x5cc7300

void UI_SelectListPopup___Setup_b__45_3(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547b4d = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SelectListPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.SelectListPopup$$<GetActiveCategoryItems>b__55_0
// il2cpp: bool UI_SelectListPopup___GetActiveCategoryItems_b__55_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x5cc7340

bool UI_SelectListPopup___GetActiveCategoryItems_b__55_0
               (UI_SelectListPopup_o *__this,UI_SelectListPopup_ItemCategory_o *x,MethodInfo *method)

{
  bool bVar1;
  
  if (x == (UI_SelectListPopup_ItemCategory_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
  return bVar1;
}


// UI.SelectListPopup$$<SetupCategoryTabs>b__56_0
// il2cpp: bool UI_SelectListPopup___SetupCategoryTabs_b__56_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x5cc7370

bool UI_SelectListPopup___SetupCategoryTabs_b__56_0
               (UI_SelectListPopup_o *__this,UI_SelectListPopup_ItemCategory_o *x,MethodInfo *method)

{
  bool bVar1;
  
  if (x == (UI_SelectListPopup_ItemCategory_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
  return bVar1;
}


// UI.SelectListPopup$$<OnButtonClick>b__65_0
// il2cpp: bool UI_SelectListPopup___OnButtonClick_b__65_0 (UI_SelectListPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5cc73a0

bool UI_SelectListPopup___OnButtonClick_b__65_0
               (UI_SelectListPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547b4e = '\x01';
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__Equals_52ffe30(item,(pSVar1->fields)._value,5,(MethodInfo *)0x0);
  return bVar2;
}


