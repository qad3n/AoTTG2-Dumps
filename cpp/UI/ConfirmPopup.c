// Type: UI.ConfirmPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ConfirmPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ConfirmPopup.cs
// --------------------------------

// UI.ConfirmPopup$$get_Title
// il2cpp: System_String_o* UI_ConfirmPopup__get_Title (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbc5e0

System_String_o * UI_ConfirmPopup__get_Title(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547af2 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ConfirmPopup$$get_Width
// il2cpp: float UI_ConfirmPopup__get_Width (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbc640

float UI_ConfirmPopup__get_Width(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.ConfirmPopup$$get_Height
// il2cpp: float UI_ConfirmPopup__get_Height (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbc650

float UI_ConfirmPopup__get_Height(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.ConfirmPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ConfirmPopup__get_VerticalPadding (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbc660

int32_t UI_ConfirmPopup__get_VerticalPadding(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ConfirmPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ConfirmPopup__get_HorizontalPadding (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbc670

int32_t UI_ConfirmPopup__get_HorizontalPadding(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ConfirmPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ConfirmPopup__get_PanelAlignment (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbc680

int32_t UI_ConfirmPopup__get_PanelAlignment(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ConfirmPopup$$get_LabelHeight
// il2cpp: float UI_ConfirmPopup__get_LabelHeight (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbc690

float UI_ConfirmPopup__get_LabelHeight(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.ConfirmPopup$$Setup
// il2cpp: void UI_ConfirmPopup__Setup (UI_ConfirmPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cbc6a0

void UI_ConfirmPopup__Setup(UI_ConfirmPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  UnityEngine_Transform_o *pUVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  MethodInfo *extraout_RDX;
  float fVar7;
  
  if (Il2CppMethodInitialized_07547af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ConfirmPopup_Setup_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ConfirmPopup_Setup_b__16_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547af3 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  iVar2 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,iVar2,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ConfirmPopup_Setup_b__16_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ConfirmPopup_Setup_b__16_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,
                         (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,4,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (__this_02,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    targetAddress = &(__this->fields)._label;
    (__this->fields)._label = pUVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar5 = (__this->fields)._label;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar5,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar7 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                        (__this,(__this->klass->vtable)._33_GetWidth.method);
      iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
      if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (pUVar6,fVar7 - (float)(iVar2 * 2),(pUVar6->klass->vtable)._36_set_preferredWidth.method);
        pUVar5 = *targetAddress;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar6 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar5,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          fVar7 = (*(__this->klass->vtable)._62_get_LabelHeight.methodPtr)
                            (__this,(__this->klass->vtable)._62_get_LabelHeight.method);
          if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar6,fVar7,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ConfirmPopup$$Show
// il2cpp: void UI_ConfirmPopup__Show (UI_ConfirmPopup_o* __this, System_String_o* message, UnityEngine_Events_UnityAction_o* onConfirm, System_String_o* title, const MethodInfo* method);
// 0x5cbc9d0

void UI_ConfirmPopup__Show
               (UI_ConfirmPopup_o *__this,System_String_o *message,UnityEngine_Events_UnityAction_o *onConfirm
               ,System_String_o *title,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  undefined1 auVar4 [16];
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pMVar3 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar3);
    pUVar1 = (__this->fields)._label;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method);
      (__this->fields)._onConfirm = onConfirm;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onConfirm);
      if (title == (System_String_o *)0x0) {
        auVar4 = (undefined1  [16])
                 (*(__this->klass->vtable)._35_get_Title.methodPtr)
                           (__this,(__this->klass->vtable)._35_get_Title.method);
        pMVar3 = auVar4._8_8_;
        title = auVar4._0_8_;
      }
      else {
        pMVar3 = extraout_RDX;
      }
      UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,pMVar3);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ConfirmPopup$$OnButtonClick
// il2cpp: void UI_ConfirmPopup__OnButtonClick (UI_ConfirmPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cbcb20

void UI_ConfirmPopup__OnButtonClick(UI_ConfirmPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547af4 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ConfirmPopup$$.ctor
// il2cpp: void UI_ConfirmPopup___ctor (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbcba0

void UI_ConfirmPopup___ctor(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


// UI.ConfirmPopup$$<Setup>b__16_0
// il2cpp: void UI_ConfirmPopup___Setup_b__16_0 (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbcbb0

void UI_ConfirmPopup___Setup_b__16_0(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547af5 = '\x01';
  }
  a = "Confirm";
  if (Il2CppMethodInitialized_07547af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547af4 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ConfirmPopup$$<Setup>b__16_1
// il2cpp: void UI_ConfirmPopup___Setup_b__16_1 (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x5cbcc50

void UI_ConfirmPopup___Setup_b__16_1(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547af6 = '\x01';
  }
  a = "Cancel";
  if (Il2CppMethodInitialized_07547af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547af4 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


