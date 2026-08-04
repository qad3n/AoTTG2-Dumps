// Type: UI.ExternalLinkPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ExternalLinkPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs
// --------------------------------

// UI.ExternalLinkPopup$$get_Title
// il2cpp: System_String_o* UI_ExternalLinkPopup__get_Title (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434bb30

System_String_o * UI_ExternalLinkPopup__get_Title(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae109 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae109 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ExternalLinkPopup$$get_Width
// il2cpp: float UI_ExternalLinkPopup__get_Width (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434bb90

float UI_ExternalLinkPopup__get_Width(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.ExternalLinkPopup$$get_Height
// il2cpp: float UI_ExternalLinkPopup__get_Height (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434bba0

float UI_ExternalLinkPopup__get_Height(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.ExternalLinkPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_VerticalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434bbb0

int32_t UI_ExternalLinkPopup__get_VerticalPadding(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ExternalLinkPopup__get_HorizontalPadding (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434bbc0

int32_t UI_ExternalLinkPopup__get_HorizontalPadding(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ExternalLinkPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ExternalLinkPopup__get_PanelAlignment (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434bbd0

int32_t UI_ExternalLinkPopup__get_PanelAlignment(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ExternalLinkPopup$$Setup
// il2cpp: void UI_ExternalLinkPopup__Setup (UI_ExternalLinkPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434bbe0

void UI_ExternalLinkPopup__Setup(UI_ExternalLinkPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_RectMask2D_o *url;
  int32_t fontSize;
  int iVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Text_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_UI_Text_o *pUVar10;
  System_String_o *pSVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o *__this_02;
  float fVar12;
  
  if (g_data_057ae10a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae10a = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  __this_02 = (UnityEngine_UI_Text_o *)(__this->fields).SinglePanel;
  pUVar8 = UI_ElementFactory__CreateDefaultLabel
                     ((UnityEngine_Transform_o *)__this_02,(UI_ElementStyle_o *)__this_00,
                      (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = __this_00;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar10 = (__this->fields)._label;
    __this_02 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
      pIVar9 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
      fVar12 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                (__this,(__this->klass->vtable)._33_GetWidth.method);
      __this_00 = (UnityEngine_UI_Text_o *)(__this->klass->vtable)._10_get_HorizontalPadding.method;
      __this_02 = (UnityEngine_UI_Text_o *)__this;
      iVar4 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)();
      if (pIVar9 != (Il2CppObject *)0x0) {
        __this_00 = (UnityEngine_UI_Text_o *)pIVar9->klass->vtable[0x24].method;
        (*pIVar9->klass->vtable[0x24].methodPtr)(fVar12 - (float)(iVar4 * 2),pIVar9);
        __this_02 = *ppUVar1;
        if ((__this_02 != (UnityEngine_UI_Text_o *)0x0) &&
           (__this_00 = MethodInfo_LayoutElement_GetComponent_LayoutElement,
           pIVar9 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement),
           pIVar9 != (Il2CppObject *)0x0)) {
          (*pIVar9->klass->vtable[0x26].methodPtr)
                    ((__this->fields).LabelHeight,pIVar9,pIVar9->klass->vtable[0x26].method);
          (__this->fields)._url = "";
          il2cpp_runtime_helper_022b4080(&(__this->fields)._url);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae10b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"ExternalLinkConfirm");
    g_data_057ae10b = '\x01';
  }
  bVar5 = Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow((System_String_o *)__this_00,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pSVar6 = (System_String_o *)0x0;
  pUVar10 = __this_02;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this_02,method_00);
    pUVar3 = (UnityEngine_UI_Text_o *)(__this_02->fields).m_MaskMaterial;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = (UnityEngine_UI_Text_o *)UI_UIManager__GetLocaleCommon("ExternalLinkConfirm",(MethodInfo *)0x0);
    pSVar6 = ": ";
    pSVar11 = System_String__Concat_3af7150
                        ((System_String_o *)pUVar10,": ",(System_String_o *)__this_00,
                         (MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar11,(pUVar3->klass->vtable)._75_set_text.method);
      (__this_02->fields).m_ParentMask = (UnityEngine_UI_RectMask2D_o *)__this_00;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_ParentMask,__this_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae10c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae10c = '\x01';
  }
  bVar5 = System_String__op_Equality(pSVar6,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    url = (pUVar10->fields).m_ParentMask;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Application__OpenURL((System_String_o *)url,(MethodInfo *)0x0);
  }
  (*(pUVar10->klass->vtable)._22_get_color.methodPtr)(pUVar10,(pUVar10->klass->vtable)._22_get_color.method);
  return;
}


// UI.ExternalLinkPopup$$Show
// il2cpp: void UI_ExternalLinkPopup__Show (UI_ExternalLinkPopup_o* __this, System_String_o* url, const MethodInfo* method);
// 0x434bf30

void UI_ExternalLinkPopup__Show(UI_ExternalLinkPopup_o *__this,System_String_o *url,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  UI_ExternalLinkPopup_o *str0;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  
  if (g_data_057ae10b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"ExternalLinkConfirm");
    g_data_057ae10b = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(url,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pSVar4 = (System_String_o *)0x0;
  str0 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    pUVar1 = (__this->fields)._label;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = (UI_ExternalLinkPopup_o *)UI_UIManager__GetLocaleCommon("ExternalLinkConfirm",(MethodInfo *)0x0);
    pSVar4 = ": ";
    pSVar3 = System_String__Concat_3af7150((System_String_o *)str0,": ",url,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      (__this->fields)._url = url;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._url,url);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae10c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae10c = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar4,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar4 = (str0->fields)._url;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Application__OpenURL(pSVar4,(MethodInfo *)0x0);
  }
  (*(str0->klass->vtable)._22_Hide.methodPtr)(str0,(str0->klass->vtable)._22_Hide.method);
  return;
}


// UI.ExternalLinkPopup$$OnButtonClick
// il2cpp: void UI_ExternalLinkPopup__OnButtonClick (UI_ExternalLinkPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434c040

void UI_ExternalLinkPopup__OnButtonClick
               (UI_ExternalLinkPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *url;
  bool_conflict bVar1;
  
  if (g_data_057ae10c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae10c = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    url = (__this->fields)._url;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ExternalLinkPopup$$.ctor
// il2cpp: void UI_ExternalLinkPopup___ctor (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434c0d0

void UI_ExternalLinkPopup___ctor(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  (__this->fields).LabelHeight = 60.0;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_0
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_0 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434c0e0

void UI_ExternalLinkPopup___Setup_b__15_0(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae10d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae10d = '\x01';
  }
  pSVar1 = "Confirm";
  if (g_data_057ae10c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae10c = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar1,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar1 = (__this->fields)._url;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Application__OpenURL(pSVar1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ExternalLinkPopup$$<Setup>b__15_1
// il2cpp: void UI_ExternalLinkPopup___Setup_b__15_1 (UI_ExternalLinkPopup_o* __this, const MethodInfo* method);
// 0x434c190

void UI_ExternalLinkPopup___Setup_b__15_1(UI_ExternalLinkPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae10e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae10e = '\x01';
  }
  pSVar1 = "Cancel";
  if (g_data_057ae10c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae10c = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar1,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar1 = (__this->fields)._url;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Application__OpenURL(pSVar1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


