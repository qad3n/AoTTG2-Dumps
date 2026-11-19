// Type: UI.ExternalLinkPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/ExternalLinkPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs
// --------------------------------

// UI.ExternalLinkPopup$$get_Title
// il2cpp: System_String_o* UI_ExternalLinkPopup__get_Title (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbd8a0

System_String_o * UI_ExternalLinkPopup__get_Title(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547aff = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ExternalLinkPopup$$get_Width
// il2cpp: float UI_ExternalLinkPopup__get_Width (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbd900

float UI_ExternalLinkPopup__get_Width(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.ExternalLinkPopup$$get_Height
// il2cpp: float UI_ExternalLinkPopup__get_Height (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbd910

float UI_ExternalLinkPopup__get_Height(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.ExternalLinkPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_VerticalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbd920

int32_t UI_ExternalLinkPopup__get_VerticalPadding(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_HorizontalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbd930

int32_t UI_ExternalLinkPopup__get_HorizontalPadding(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ExternalLinkPopup__get_PanelAlignment (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbd940

int32_t UI_ExternalLinkPopup__get_PanelAlignment(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ExternalLinkPopup$$Setup
// il2cpp: void UI_ExternalLinkPopup__Setup (UI_ExternalLinkPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cbd950

void UI_ExternalLinkPopup__Setup(UI_ExternalLinkPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_07547b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ExternalLinkPopup_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ExternalLinkPopup_Setup_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b00 = '\x01';
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
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ExternalLinkPopup_Setup_b__15_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ExternalLinkPopup_Setup_b__15_1,
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
          if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar6,(__this->fields).LabelHeight,
                       (pUVar6->klass->vtable)._38_set_preferredHeight.method);
            (__this->fields)._url = "";
            Il2CppCodeGenWriteBarrier(&(__this->fields)._url);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ExternalLinkPopup$$Show
// il2cpp: void UI_ExternalLinkPopup__Show (UI_ExternalLinkPopup_o* __this, System_String_o* url, const MethodInfo* method);
// 0x5cbdca0

void UI_ExternalLinkPopup__Show(UI_ExternalLinkPopup_o *__this,System_String_o *url,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinkConfirm");
    Il2CppMethodInitialized_07547b01 = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(url,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    pUVar1 = (__this->fields)._label;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocaleCommon("ExternalLinkConfirm",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    pSVar3 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                       (pSVar3,": ",url,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      (__this->fields)._url = url;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._url);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ExternalLinkPopup$$OnButtonClick
// il2cpp: void UI_ExternalLinkPopup__OnButtonClick (UI_ExternalLinkPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cbdde0

void UI_ExternalLinkPopup__OnButtonClick
               (UI_ExternalLinkPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *url;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547b02 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if (bVar1) {
    url = (__this->fields)._url;
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ExternalLinkPopup$$.ctor
// il2cpp: void UI_ExternalLinkPopup___ctor (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbde70

void UI_ExternalLinkPopup___ctor(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  (__this->fields).LabelHeight = 60.0;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_0
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_0 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbde80

void UI_ExternalLinkPopup___Setup_b__15_0(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547b03 = '\x01';
  }
  pSVar1 = "Confirm";
  if (Il2CppMethodInitialized_07547b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547b02 = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar1,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (__this->fields)._url;
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    UnityEngine_Application__OpenURL(pSVar1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_1
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_1 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x5cbdf30

void UI_ExternalLinkPopup___Setup_b__15_1(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547b04 = '\x01';
  }
  pSVar1 = "Cancel";
  if (Il2CppMethodInitialized_07547b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547b02 = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar1,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (__this->fields)._url;
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    UnityEngine_Application__OpenURL(pSVar1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


