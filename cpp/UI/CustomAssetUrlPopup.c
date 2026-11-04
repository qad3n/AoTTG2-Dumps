// Type: UI.CustomAssetUrlPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CustomAssetUrlPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomAssetUrlPopup.cs
// --------------------------------

// UI.CustomAssetUrlPopup$$get_Title
// il2cpp: System_String_o* UI_CustomAssetUrlPopup__get_Title (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x18223fe70

System_String_o * UI_CustomAssetUrlPopup__get_Title(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434722e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_18434722e = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CustomAssetUrlPopup$$get_Width
// il2cpp: float UI_CustomAssetUrlPopup__get_Width (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_CustomAssetUrlPopup__get_Width(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.CustomAssetUrlPopup$$get_Height
// il2cpp: float UI_CustomAssetUrlPopup__get_Height (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x182182bd0

float
UI_CustomAssetUrlPopup__get_Height(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  return 250.0;
}


// UI.CustomAssetUrlPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_VerticalPadding (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_CustomAssetUrlPopup__get_VerticalPadding(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.CustomAssetUrlPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_HorizontalPadding (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_CustomAssetUrlPopup__get_HorizontalPadding(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.CustomAssetUrlPopup$$get_PanelAlignment
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_PanelAlignment (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_CustomAssetUrlPopup__get_PanelAlignment(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.CustomAssetUrlPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_EscapeBehavior (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_CustomAssetUrlPopup__get_EscapeBehavior(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.CustomAssetUrlPopup$$get_ScrollBar
// il2cpp: bool UI_CustomAssetUrlPopup__get_ScrollBar (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_CustomAssetUrlPopup__get_ScrollBar(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.CustomAssetUrlPopup$$Setup
// il2cpp: void UI_CustomAssetUrlPopup__Setup (UI_CustomAssetUrlPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18223f910

void UI_CustomAssetUrlPopup__Setup(UI_CustomAssetUrlPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_18434722f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomAssetUrlPopup_Setup_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomAssetUrlPopup_Setup_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_18434722f = '\x01';
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
             (intptr_t)MethodInfo_UI_CustomAssetUrlPopup_Setup_b__19_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CustomAssetUrlPopup_Setup_b__19_1,(MethodInfo *)0x0);
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
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomAssetUrlPopup$$Show
// il2cpp: void UI_CustomAssetUrlPopup__Show (UI_CustomAssetUrlPopup_o* __this, System_String_o* url, const MethodInfo* method);
// 0x18223fc10

void UI_CustomAssetUrlPopup__Show(UI_CustomAssetUrlPopup_o *__this,System_String_o *url,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *layoutRoot;
  
  if (Il2CppMethodInitialized_184347230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"You are about to download a required file: ");
    Il2CppMethodInitialized_184347230 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._label;
  (__this->fields).Done = false;
  (__this->fields).Confirmed = false;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar1,false,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    pSVar2 = System_String__Concat_1969e50("You are about to download a required file: ",url,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      pUVar1 = (__this->fields)._label;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar3,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_RectTransform_o *)(__this->fields).SinglePanel;
        layoutRoot = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
            layoutRoot = pUVar3;
          }
          if (layoutRoot == (UnityEngine_RectTransform_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
          }
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomAssetUrlPopup$$OnDisable
// il2cpp: void UI_CustomAssetUrlPopup__OnDisable (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x18223f8f0

void
UI_CustomAssetUrlPopup__OnDisable(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Done = true;
  return;
}


// UI.CustomAssetUrlPopup$$OnButtonClick
// il2cpp: void UI_CustomAssetUrlPopup__OnButtonClick (UI_CustomAssetUrlPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18223f880

void UI_CustomAssetUrlPopup__OnButtonClick
               (UI_CustomAssetUrlPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_CustomAssetUrlPopup_c *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347231 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    (__this->fields).Confirmed = true;
  }
  pUVar1 = __this->klass;
  (__this->fields).Done = true;
  (*(pUVar1->vtable)._22_Hide.methodPtr)(__this,(pUVar1->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetUrlPopup$$.ctor
// il2cpp: void UI_CustomAssetUrlPopup___ctor (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
UI_CustomAssetUrlPopup___ctor(UI_CustomAssetUrlPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomAssetUrlPopup$$<Setup>b__19_0
// il2cpp: void UI_CustomAssetUrlPopup___Setup_b__19_0 (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x18223fd40

void UI_CustomAssetUrlPopup___Setup_b__19_0(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  UI_CustomAssetUrlPopup_c *pUVar1;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347232 = '\x01';
  }
  a = "Confirm";
  if (Il2CppMethodInitialized_184347231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347231 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    (__this->fields).Confirmed = true;
  }
  pUVar1 = __this->klass;
  (__this->fields).Done = true;
  (*(pUVar1->vtable)._22_Hide.methodPtr)(__this,(pUVar1->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetUrlPopup$$<Setup>b__19_1
// il2cpp: void UI_CustomAssetUrlPopup___Setup_b__19_1 (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x18223fde0

void UI_CustomAssetUrlPopup___Setup_b__19_1(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  UI_CustomAssetUrlPopup_c *pUVar1;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184347233 = '\x01';
  }
  a = "Cancel";
  if (Il2CppMethodInitialized_184347231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347231 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    (__this->fields).Confirmed = true;
  }
  pUVar1 = __this->klass;
  (__this->fields).Done = true;
  (*(pUVar1->vtable)._22_Hide.methodPtr)(__this,(pUVar1->vtable)._22_Hide.method);
  return;
}


