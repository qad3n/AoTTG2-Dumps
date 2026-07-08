// Type: UI.ExternalLinkPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ExternalLinkPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ExternalLinkPopup$$get_Title
// il2cpp: System_String_o* UI_ExternalLinkPopup__get_Title (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x4022380

System_String_o * UI_ExternalLinkPopup__get_Title(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057042f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042f3 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ExternalLinkPopup$$get_Width
// il2cpp: float UI_ExternalLinkPopup__get_Width (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x40223e0

float UI_ExternalLinkPopup__get_Width(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.ExternalLinkPopup$$get_Height
// il2cpp: float UI_ExternalLinkPopup__get_Height (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x40223f0

float UI_ExternalLinkPopup__get_Height(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.ExternalLinkPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_VerticalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x4022400

int32_t UI_ExternalLinkPopup__get_VerticalPadding(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_HorizontalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x4022410

int32_t UI_ExternalLinkPopup__get_HorizontalPadding
                  (UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ExternalLinkPopup__get_PanelAlignment (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x4022420

int32_t UI_ExternalLinkPopup__get_PanelAlignment(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ExternalLinkPopup$$Setup
// il2cpp: void UI_ExternalLinkPopup__Setup (UI_ExternalLinkPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4022430

void UI_ExternalLinkPopup__Setup
               (UI_ExternalLinkPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
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
  
  if (DAT_057042f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_1);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"");
    DAT_057042f4 = '\x01';
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
            (*pIVar7->klass->vtable[0x26].methodPtr)
                      ((__this->fields).LabelHeight,pIVar7,pIVar7->klass->vtable[0x26].method);
            (__this->fields)._url = "";
            il2cpp_runtime_glue(&(__this->fields)._url);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ExternalLinkPopup$$Show
// il2cpp: void UI_ExternalLinkPopup__Show (UI_ExternalLinkPopup_o* __this, System_String_o* url, const MethodInfo* method);
// 0x4022780

void UI_ExternalLinkPopup__Show
               (UI_ExternalLinkPopup_o *__this,System_String_o *url,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (DAT_057042f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"ExternalLinkConfirm");
    DAT_057042f5 = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(url,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    pUVar1 = (__this->fields)._label;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = UI_UIManager__GetLocaleCommon("ExternalLinkConfirm",(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,": ",url,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      (__this->fields)._url = url;
      il2cpp_runtime_glue(&(__this->fields)._url,url);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ExternalLinkPopup$$OnButtonClick
// il2cpp: void UI_ExternalLinkPopup__OnButtonClick (UI_ExternalLinkPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4022890

void UI_ExternalLinkPopup__OnButtonClick
               (UI_ExternalLinkPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *url;
  bool_conflict bVar1;
  
  if (DAT_057042f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042f6 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    url = (__this->fields)._url;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ExternalLinkPopup$$.ctor
// il2cpp: void UI_ExternalLinkPopup___ctor (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x4022920

void UI_ExternalLinkPopup___ctor(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  (__this->fields).LabelHeight = 60.0;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_0
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_0 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x4022930

void UI_ExternalLinkPopup__<Setup>b__15_0(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (DAT_057042f7 == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042f7 = '\x01';
  }
  pSVar1 = "Confirm";
  if (DAT_057042f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042f6 = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar1,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar1 = (__this->fields)._url;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Application__OpenURL(pSVar1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_1
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_1 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x40229e0

void UI_ExternalLinkPopup__<Setup>b__15_1(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (DAT_057042f8 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057042f8 = '\x01';
  }
  pSVar1 = "Cancel";
  if (DAT_057042f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&"Confirm");
    DAT_057042f6 = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar1,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar1 = (__this->fields)._url;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Application__OpenURL(pSVar1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


