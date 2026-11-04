// Type: UI.ExternalLinkPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ExternalLinkPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs
// --------------------------------

// UI.ExternalLinkPopup$$get_Title
// il2cpp: System_String_o* UI_ExternalLinkPopup__get_Title (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x1821c24c0

System_String_o * UI_ExternalLinkPopup__get_Title(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184346f05 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ExternalLinkPopup$$get_Width
// il2cpp: float UI_ExternalLinkPopup__get_Width (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x1821c2520

float
UI_ExternalLinkPopup__get_Width(UI_ExternalLinkPopup_o* __this, MethodInfo* method)

{
  return 450.0;
}


// UI.ExternalLinkPopup$$get_Height
// il2cpp: float UI_ExternalLinkPopup__get_Height (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x182182bd0

float
UI_ExternalLinkPopup__get_Height(UI_ExternalLinkPopup_o* __this, MethodInfo* method)

{
  return 250.0;
}


// UI.ExternalLinkPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_VerticalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_ExternalLinkPopup__get_VerticalPadding(UI_ExternalLinkPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_HorizontalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_ExternalLinkPopup__get_HorizontalPadding(UI_ExternalLinkPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ExternalLinkPopup__get_PanelAlignment (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_ExternalLinkPopup__get_PanelAlignment(UI_ExternalLinkPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.ExternalLinkPopup$$Setup
// il2cpp: void UI_ExternalLinkPopup__Setup (UI_ExternalLinkPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c1fb0

void UI_ExternalLinkPopup__Setup(UI_ExternalLinkPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_184346f06 == '\0') {
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
    Il2CppMethodInitialized_184346f06 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
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
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ExternalLinkPopup_Setup_b__15_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ExternalLinkPopup_Setup_b__15_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,
                         (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (__this_02,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._label = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pUVar5);
    pUVar5 = (__this->fields)._label;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar5,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar7 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                               (__this,(__this->klass->vtable)._33_GetWidth.method);
      iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
      if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (pUVar6,fVar7 - (float)(iVar2 * 2),(pUVar6->klass->vtable)._36_set_preferredWidth.method);
        pUVar5 = (__this->fields)._label;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar6 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar5,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                             );
          if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar6,(__this->fields).LabelHeight,
                       (pUVar6->klass->vtable)._38_set_preferredHeight.method);
            (__this->fields)._url = "";
            Il2CppCodeGenWriteBarrier(&(__this->fields)._url,"");
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
// 0x1821c2310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c2407: mov rsi, qword ptr [rsp + 0x30]

void UI_ExternalLinkPopup__Show(UI_ExternalLinkPopup_o *__this,System_String_o *url,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinkConfirm");
    Il2CppMethodInitialized_184346f07 = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(url,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_1821c2417:
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._label;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocaleCommon("ExternalLinkConfirm",(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969b70(pSVar3,": ",url,(MethodInfo *)0x0);
      if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_1821c2417;
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      (__this->fields)._url = url;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._url,url);
    }
  }
  return;
}


// UI.ExternalLinkPopup$$OnButtonClick
// il2cpp: void UI_ExternalLinkPopup__OnButtonClick (UI_ExternalLinkPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c1f10

void UI_ExternalLinkPopup__OnButtonClick
               (UI_ExternalLinkPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *url;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184346f08 = '\x01';
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
// 0x1821c24a0

void UI_ExternalLinkPopup___ctor(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  (__this->fields).LabelHeight = 60.0;
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_0
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_0 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x1821c2420

void UI_ExternalLinkPopup___Setup_b__15_0(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184346f09 = '\x01';
  }
  UI_ExternalLinkPopup__OnButtonClick(__this,"Confirm",(MethodInfo *)0x0);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_1
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_1 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x1821c2460

void UI_ExternalLinkPopup___Setup_b__15_1(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184346f0a = '\x01';
  }
  UI_ExternalLinkPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


