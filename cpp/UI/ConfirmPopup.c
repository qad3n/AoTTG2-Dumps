// Type: UI.ConfirmPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ConfirmPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/ConfirmPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ConfirmPopup$$get_Title
// il2cpp: System_String_o* UI_ConfirmPopup__get_Title (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x4021740

System_String_o * UI_ConfirmPopup__get_Title(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057042e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042e8 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ConfirmPopup$$get_Width
// il2cpp: float UI_ConfirmPopup__get_Width (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x40217a0

float UI_ConfirmPopup__get_Width(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.ConfirmPopup$$get_Height
// il2cpp: float UI_ConfirmPopup__get_Height (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x40217b0

float UI_ConfirmPopup__get_Height(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.ConfirmPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ConfirmPopup__get_VerticalPadding (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x40217c0

int32_t UI_ConfirmPopup__get_VerticalPadding(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ConfirmPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ConfirmPopup__get_HorizontalPadding (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x40217d0

int32_t UI_ConfirmPopup__get_HorizontalPadding(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ConfirmPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ConfirmPopup__get_PanelAlignment (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x40217e0

int32_t UI_ConfirmPopup__get_PanelAlignment(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ConfirmPopup$$Setup
// il2cpp: void UI_ConfirmPopup__Setup (UI_ConfirmPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40217f0

void UI_ConfirmPopup__Setup(UI_ConfirmPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  int iVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar6;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_RDX;
  float fVar8;
  
  if (DAT_057042e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057042e9 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                         (MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = pUVar6;
    il2cpp_runtime_glue(ppUVar1,pUVar6);
    pUVar6 = (__this->fields)._label;
    if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
      pIVar7 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      fVar8 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                               (__this,(__this->klass->vtable)._33_GetWidth.method);
      iVar3 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
      if (pIVar7 != (Il2CppObject *)0x0) {
        (*pIVar7->klass->vtable[0x24].methodPtr)
                  (fVar8 - (float)(iVar3 * 2),pIVar7,pIVar7->klass->vtable[0x24].method);
        pUVar6 = *ppUVar1;
        if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
          pIVar7 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar7 != (Il2CppObject *)0x0) {
            vtable_dispatch = pIVar7->klass->vtable[0x26].methodPtr;
            (*vtable_dispatch)
                      ((__this->fields).LabelHeight,pIVar7,pIVar7->klass->vtable[0x26].method,
                       vtable_dispatch);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ConfirmPopup$$Show
// il2cpp: void UI_ConfirmPopup__Show (UI_ConfirmPopup_o* __this, System_String_o* message, UnityEngine_Events_UnityAction_o* onConfirm, System_String_o* title, const MethodInfo* method);
// 0x4021b10

void UI_ConfirmPopup__Show
               (UI_ConfirmPopup_o *__this,System_String_o *message,
               UnityEngine_Events_UnityAction_o *onConfirm,System_String_o *title,MethodInfo *method
               )

{
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  undefined1 auVar4 [16];
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pMVar3 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar3);
    pUVar1 = (__this->fields)._label;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method);
      (__this->fields)._onConfirm = onConfirm;
      il2cpp_runtime_glue(&(__this->fields)._onConfirm,onConfirm);
      pMVar3 = extraout_RDX;
      if (title == (System_String_o *)0x0) {
        auVar4 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                           (__this,(__this->klass->vtable)._35_get_Title.method);
        pMVar3 = auVar4._8_8_;
        title = auVar4._0_8_;
      }
      UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,pMVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ConfirmPopup$$OnButtonClick
// il2cpp: void UI_ConfirmPopup__OnButtonClick (UI_ConfirmPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4021c60

void UI_ConfirmPopup__OnButtonClick
               (UI_ConfirmPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057042ea == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042ea = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ConfirmPopup$$.ctor
// il2cpp: void UI_ConfirmPopup___ctor (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x4021ce0

void UI_ConfirmPopup___ctor(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  (__this->fields).LabelHeight = 60.0;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


// UI.ConfirmPopup$$<Setup>b__15_0
// il2cpp: void UI_ConfirmPopup___Setup_b__15_0 (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x4021cf0

void UI_ConfirmPopup__<Setup>b__15_0(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *a;
  bool_conflict bVar2;
  
  if (DAT_057042eb == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042eb = '\x01';
  }
  a = "Confirm";
  if (DAT_057042ea == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042ea = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ConfirmPopup$$<Setup>b__15_1
// il2cpp: void UI_ConfirmPopup___Setup_b__15_1 (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x4021d90

void UI_ConfirmPopup__<Setup>b__15_1(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *a;
  bool_conflict bVar2;
  
  if (DAT_057042ec == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057042ec = '\x01';
  }
  a = "Cancel";
  if (DAT_057042ea == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042ea = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


