// Type: UI.MobileLayoutEditorToolbar
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileLayoutEditorToolbar.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutEditorToolbar$$get_Buttons
// il2cpp: UnityEngine_Transform_o* UI_MobileLayoutEditorToolbar__get_Buttons (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0b30

UnityEngine_Transform_o *
UI_MobileLayoutEditorToolbar__get_Buttons(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return (__this->fields).BottomBar;
}


// UI.MobileLayoutEditorToolbar$$get_ReturnButton
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutEditorToolbar__get_ReturnButton (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0b40

UnityEngine_GameObject_o *
UI_MobileLayoutEditorToolbar__get_ReturnButton(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return (__this->fields)._ReturnButton_k__BackingField;
}


// UI.MobileLayoutEditorToolbar$$set_ReturnButton
// il2cpp: void UI_MobileLayoutEditorToolbar__set_ReturnButton (UI_MobileLayoutEditorToolbar_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x5cb0b50

void UI_MobileLayoutEditorToolbar__set_ReturnButton
               (UI_MobileLayoutEditorToolbar_o *__this,UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._ReturnButton_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ReturnButton_k__BackingField);
  return;
}


// UI.MobileLayoutEditorToolbar$$get_Title
// il2cpp: System_String_o* UI_MobileLayoutEditorToolbar__get_Title (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0b70

System_String_o *
UI_MobileLayoutEditorToolbar__get_Title(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return (__this->fields)._title;
}


// UI.MobileLayoutEditorToolbar$$get_Width
// il2cpp: float UI_MobileLayoutEditorToolbar__get_Width (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0b80

float UI_MobileLayoutEditorToolbar__get_Width(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 1060.0;
}


// UI.MobileLayoutEditorToolbar$$get_Height
// il2cpp: float UI_MobileLayoutEditorToolbar__get_Height (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0b90

float UI_MobileLayoutEditorToolbar__get_Height(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 112.0;
}


// UI.MobileLayoutEditorToolbar$$get_TopBarHeight
// il2cpp: float UI_MobileLayoutEditorToolbar__get_TopBarHeight (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0ba0

float UI_MobileLayoutEditorToolbar__get_TopBarHeight
                (UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 48.0;
}


// UI.MobileLayoutEditorToolbar$$get_BottomBarHeight
// il2cpp: float UI_MobileLayoutEditorToolbar__get_BottomBarHeight (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0bb0

float UI_MobileLayoutEditorToolbar__get_BottomBarHeight
                (UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 64.0;
}


// UI.MobileLayoutEditorToolbar$$get_TitleFontSize
// il2cpp: int32_t UI_MobileLayoutEditorToolbar__get_TitleFontSize (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0bc0

int32_t UI_MobileLayoutEditorToolbar__get_TitleFontSize
                  (UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.MobileLayoutEditorToolbar$$get_ButtonFontSize
// il2cpp: int32_t UI_MobileLayoutEditorToolbar__get_ButtonFontSize (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0bd0

int32_t UI_MobileLayoutEditorToolbar__get_ButtonFontSize
                  (UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 0x12;
}


// UI.MobileLayoutEditorToolbar$$get_BottomBarPadding
// il2cpp: int32_t UI_MobileLayoutEditorToolbar__get_BottomBarPadding (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0be0

int32_t UI_MobileLayoutEditorToolbar__get_BottomBarPadding
                  (UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 0xc;
}


// UI.MobileLayoutEditorToolbar$$get_BottomBarSpacing
// il2cpp: float UI_MobileLayoutEditorToolbar__get_BottomBarSpacing (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0bf0

float UI_MobileLayoutEditorToolbar__get_BottomBarSpacing
                (UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return 8.0;
}


// UI.MobileLayoutEditorToolbar$$get_ScrollBar
// il2cpp: bool UI_MobileLayoutEditorToolbar__get_ScrollBar (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb0c00

bool UI_MobileLayoutEditorToolbar__get_ScrollBar(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  return false;
}


// UI.MobileLayoutEditorToolbar$$SetupToolbar
// il2cpp: void UI_MobileLayoutEditorToolbar__SetupToolbar (UI_MobileLayoutEditorToolbar_o* __this, System_String_o* title, System_Action_o* loadPreset, System_Action_o* savePreset, System_Action_o* add, System_Action_o* edit, System_Action_o* delete, System_Action_o* copy, System_Action_o* back, const MethodInfo* method);
// 0x5c9e750

void UI_MobileLayoutEditorToolbar__SetupToolbar
               (UI_MobileLayoutEditorToolbar_o *__this,System_String_o *title,System_Action_o *loadPreset,
               System_Action_o *savePreset,System_Action_o *add,System_Action_o *edit,System_Action_o *delete,
               System_Action_o *copy,System_Action_o *back,MethodInfo *method)

{
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._loadPreset = loadPreset;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._loadPreset);
  (__this->fields)._savePreset = savePreset;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._savePreset);
  (__this->fields)._add = add;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._add);
  (__this->fields)._edit = edit;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._edit);
  (__this->fields)._delete = delete;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._delete);
  (__this->fields)._copy = copy;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._copy);
  (__this->fields)._back = back;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._back);
  (*(__this->klass->vtable)._20_Setup.methodPtr)
            (__this,(UI_BasePanel_o *)0x0,(__this->klass->vtable)._20_Setup.method);
  return;
}


// UI.MobileLayoutEditorToolbar$$Setup
// il2cpp: void UI_MobileLayoutEditorToolbar__Setup (UI_MobileLayoutEditorToolbar_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cb0c10

void UI_MobileLayoutEditorToolbar__Setup
               (UI_MobileLayoutEditorToolbar_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  bool bVar1;
  int32_t fontSize;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  
  if (Il2CppMethodInitialized_07547a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_6);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SavePreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit");
    Il2CppMethodInitialized_07547a9e = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).SinglePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).SinglePanel;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb10ff;
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb10ff;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05cb10ff;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).BottomBar;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar2,
                           (MethodInfo_34B0830 *)
                           MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    if (__this_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
      fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                           (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
      pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).BottomBar;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar4 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_0
                 ,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,__this_01,pSVar4,160.0,42.0,pUVar5,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).BottomBar;
      pSVar4 = UI_UIManager__GetLocaleCommon("SavePreset",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_1
                 ,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,__this_01,pSVar4,160.0,42.0,pUVar5,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).BottomBar;
      pSVar4 = UI_UIManager__GetLocaleCommon("Add",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_2
                 ,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,__this_01,pSVar4,128.0,42.0,pUVar5,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).BottomBar;
      pSVar4 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_3
                 ,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,__this_01,pSVar4,128.0,42.0,pUVar5,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).BottomBar;
      pSVar4 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_4
                 ,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,__this_01,pSVar4,128.0,42.0,pUVar5,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).BottomBar;
      pSVar4 = UI_UIManager__GetLocaleCommon("Copy",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_5
                 ,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton(pUVar2,__this_01,pSVar4,128.0,42.0,pUVar5,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).BottomBar;
      pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_6
                 ,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__CreateDefaultButton
                         (pUVar2,__this_01,pSVar4,128.0,42.0,pUVar5,(MethodInfo *)0x0);
      (__this->fields)._ReturnButton_k__BackingField = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ReturnButton_k__BackingField);
      return;
    }
  }
label_05cb10ff:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorToolbar$$.ctor
// il2cpp: void UI_MobileLayoutEditorToolbar___ctor (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb1110

void UI_MobileLayoutEditorToolbar___ctor(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorToolbar$$<Setup>b__35_0
// il2cpp: void UI_MobileLayoutEditorToolbar___Setup_b__35_0 (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb1120

void UI_MobileLayoutEditorToolbar___Setup_b__35_0(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._loadPreset;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorToolbar$$<Setup>b__35_1
// il2cpp: void UI_MobileLayoutEditorToolbar___Setup_b__35_1 (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb1150

void UI_MobileLayoutEditorToolbar___Setup_b__35_1(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._savePreset;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorToolbar$$<Setup>b__35_2
// il2cpp: void UI_MobileLayoutEditorToolbar___Setup_b__35_2 (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb1180

void UI_MobileLayoutEditorToolbar___Setup_b__35_2(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._add;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorToolbar$$<Setup>b__35_3
// il2cpp: void UI_MobileLayoutEditorToolbar___Setup_b__35_3 (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb11b0

void UI_MobileLayoutEditorToolbar___Setup_b__35_3(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._edit;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorToolbar$$<Setup>b__35_4
// il2cpp: void UI_MobileLayoutEditorToolbar___Setup_b__35_4 (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb11e0

void UI_MobileLayoutEditorToolbar___Setup_b__35_4(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._delete;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorToolbar$$<Setup>b__35_5
// il2cpp: void UI_MobileLayoutEditorToolbar___Setup_b__35_5 (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb1210

void UI_MobileLayoutEditorToolbar___Setup_b__35_5(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._copy;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorToolbar$$<Setup>b__35_6
// il2cpp: void UI_MobileLayoutEditorToolbar___Setup_b__35_6 (UI_MobileLayoutEditorToolbar_o* __this, const MethodInfo* method);
// 0x5cb1240

void UI_MobileLayoutEditorToolbar___Setup_b__35_6(UI_MobileLayoutEditorToolbar_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields)._back;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


