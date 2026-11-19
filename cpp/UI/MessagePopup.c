// Type: UI.MessagePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MessagePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/MessagePopup.cs
// --------------------------------

// UI.MessagePopup$$get_Title
// il2cpp: System_String_o* UI_MessagePopup__get_Title (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc18d0

System_String_o * UI_MessagePopup__get_Title(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.MessagePopup$$get_Width
// il2cpp: float UI_MessagePopup__get_Width (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc18f0

float UI_MessagePopup__get_Width(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.MessagePopup$$get_Height
// il2cpp: float UI_MessagePopup__get_Height (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc1900

float UI_MessagePopup__get_Height(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.MessagePopup$$get_VerticalPadding
// il2cpp: int32_t UI_MessagePopup__get_VerticalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc1910

int32_t UI_MessagePopup__get_VerticalPadding(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MessagePopup__get_HorizontalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc1920

int32_t UI_MessagePopup__get_HorizontalPadding(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_PanelAlignment
// il2cpp: int32_t UI_MessagePopup__get_PanelAlignment (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc1930

int32_t UI_MessagePopup__get_PanelAlignment(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MessagePopup$$get_LabelHeight
// il2cpp: float UI_MessagePopup__get_LabelHeight (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc1940

float UI_MessagePopup__get_LabelHeight(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.MessagePopup$$Setup
// il2cpp: void UI_MessagePopup__Setup (UI_MessagePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc1950

void UI_MessagePopup__Setup(UI_MessagePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  UnityEngine_Transform_o *parent_00;
  int32_t iVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  MethodInfo *extraout_RDX;
  float fVar6;
  
  if (Il2CppMethodInitialized_07547b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MessagePopup_Setup_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Okay");
    Il2CppMethodInitialized_07547b26 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  iVar1 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,iVar1,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Okay",(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_02,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MessagePopup_Setup_b__16_0,
             (MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateTextButton(parent_00,__this_01,pSVar2,0.0,__this_02,(MethodInfo *)0x0);
  (__this->fields)._button = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._button);
  pUVar3 = UI_ElementFactory__CreateDefaultLabel
                     ((__this->fields).SinglePanel,__this_00,
                      (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,4,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    targetAddress = &(__this->fields)._label;
    (__this->fields)._label = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar4 = (__this->fields)._label;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar4,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar6 = (*(__this->klass->vtable)._62_get_LabelHeight.methodPtr)
                        (__this,(__this->klass->vtable)._62_get_LabelHeight.method);
      if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar5,fVar6,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
        pUVar4 = *targetAddress;
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar4,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          fVar6 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                            (__this,(__this->klass->vtable)._33_GetWidth.method);
          iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                            (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
          if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar5,fVar6 - (float)(iVar1 * 2),(pUVar5->klass->vtable)._36_set_preferredWidth.method
                      );
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MessagePopup$$Show
// il2cpp: void UI_MessagePopup__Show (UI_MessagePopup_o* __this, System_String_o* message, bool allowDismiss, const MethodInfo* method);
// 0x5cc1c30

void UI_MessagePopup__Show
               (UI_MessagePopup_o *__this,System_String_o *message,bool allowDismiss,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)message);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,allowDismiss,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MessagePopup$$OnButtonClick
// il2cpp: void UI_MessagePopup__OnButtonClick (UI_MessagePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc1c90

void UI_MessagePopup__OnButtonClick(UI_MessagePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.MessagePopup$$.ctor
// il2cpp: void UI_MessagePopup___ctor (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc1cb0

void UI_MessagePopup___ctor(UI_MessagePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


// UI.MessagePopup$$<Setup>b__16_0
// il2cpp: void UI_MessagePopup___Setup_b__16_0 (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x5cc1cc0

void UI_MessagePopup___Setup_b__16_0(UI_MessagePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Okay");
    Il2CppMethodInitialized_07547b27 = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


