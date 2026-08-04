// Type: UI.CustomAssetUrlPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CustomAssetUrlPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomAssetUrlPopup.cs
// --------------------------------

// UI.CustomAssetUrlPopup$$get_Title
// il2cpp: System_String_o* UI_CustomAssetUrlPopup__get_Title (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba190

System_String_o * UI_CustomAssetUrlPopup__get_Title(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae3a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CustomAssetUrlPopup$$get_Width
// il2cpp: float UI_CustomAssetUrlPopup__get_Width (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba1f0

float UI_CustomAssetUrlPopup__get_Width(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.CustomAssetUrlPopup$$get_Height
// il2cpp: float UI_CustomAssetUrlPopup__get_Height (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba200

float UI_CustomAssetUrlPopup__get_Height(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.CustomAssetUrlPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_VerticalPadding (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba210

int32_t UI_CustomAssetUrlPopup__get_VerticalPadding(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetUrlPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_HorizontalPadding (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba220

int32_t UI_CustomAssetUrlPopup__get_HorizontalPadding(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetUrlPopup$$get_PanelAlignment
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_PanelAlignment (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba230

int32_t UI_CustomAssetUrlPopup__get_PanelAlignment(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.CustomAssetUrlPopup$$get_ScrollBar
// il2cpp: bool UI_CustomAssetUrlPopup__get_ScrollBar (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba240

bool_conflict UI_CustomAssetUrlPopup__get_ScrollBar(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CustomAssetUrlPopup$$Setup
// il2cpp: void UI_CustomAssetUrlPopup__Setup (UI_CustomAssetUrlPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43ba250

void UI_CustomAssetUrlPopup__Setup(UI_CustomAssetUrlPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  int32_t fontSize;
  int iVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_c *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_GameObject_o *__this_02;
  Il2CppObject *pIVar7;
  System_String_c *pSVar8;
  UnityEngine_RectTransform_o *layoutRoot;
  undefined8 extraout_RDX;
  System_String_c *a;
  UI_CustomAssetUrlPopup_o *__this_03;
  float fVar9;
  
  if (g_data_057ae3a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae3a1 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar5,0.0,pUVar6,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar5 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar5,0.0,pUVar6,(MethodInfo *)0x0);
  __this_03 = (UI_CustomAssetUrlPopup_o *)(__this->fields).SinglePanel;
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)__this_03,(UI_ElementStyle_o *)__this_00,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (System_String_c *)UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._label = (UnityEngine_UI_Text_o *)__this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._label);
    pUVar2 = (__this->fields)._label;
    __this_03 = (UI_CustomAssetUrlPopup_o *)0x0;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      fVar9 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                               (__this,(__this->klass->vtable)._33_GetWidth.method);
      __this_00 = (System_String_c *)(__this->klass->vtable)._10_get_HorizontalPadding.method;
      iVar3 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)();
      __this_03 = __this;
      if (pIVar7 != (Il2CppObject *)0x0) {
        vtableDispatch = pIVar7->klass->vtable[0x24].methodPtr;
        (*vtableDispatch)
                  (fVar9 - (float)(iVar3 * 2),pIVar7,pIVar7->klass->vtable[0x24].method,extraout_RDX,
                   vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&"You are about to download a required file: ");
    g_data_057ae3a2 = '\x01';
  }
  a = (System_String_c *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_03,(MethodInfo *)0x0);
  *(undefined2 *)&(__this_03->fields).Done = 0;
  pUVar2 = (__this_03->fields)._label;
  pSVar5 = (System_String_o *)0x0;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar2,0,(MethodInfo *)0x0);
    pUVar2 = (__this_03->fields)._label;
    pSVar5 = "You are about to download a required file: ";
    pSVar8 = (System_String_c *)
             System_String__Concat_3ae5ba0("You are about to download a required file: ",(System_String_o *)__this_00,(MethodInfo *)0x0);
    a = __this_00;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,pSVar8,(pUVar2->klass->vtable)._75_set_text.method);
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      pUVar2 = (__this_03->fields)._label;
      pSVar5 = (System_String_o *)0x0;
      a = pSVar8;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        layoutRoot = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pUVar2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
        pSVar5 = (System_String_o *)(__this_03->fields).SinglePanel;
        if ((pSVar5 == (System_String_o *)0x0) || (a = TypeInfo_RectTransform, pSVar5->klass == TypeInfo_RectTransform)) {
          UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                    ((UnityEngine_RectTransform_o *)pSVar5,(MethodInfo *)0x0);
          return;
        }
        goto label_043ba64a;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043ba64a:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a3 = '\x01';
  }
  bVar4 = System_String__op_Equality((System_String_o *)a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    *(undefined1 *)((long)&pSVar5[7].monitor + 1) = 1;
  }
  *(undefined1 *)&pSVar5[7].monitor = 1;
  (*(pSVar5->klass->vtable)._22_System_IConvertible_ToDecimal.methodPtr)
            (pSVar5,(pSVar5->klass->vtable)._22_System_IConvertible_ToDecimal.method);
  return;
}


// UI.CustomAssetUrlPopup$$Show
// il2cpp: void UI_CustomAssetUrlPopup__Show (UI_CustomAssetUrlPopup_o* __this, System_String_o* url, const MethodInfo* method);
// 0x43ba540

void UI_CustomAssetUrlPopup__Show(UI_CustomAssetUrlPopup_o *__this,System_String_o *url,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  System_String_c *pSVar3;
  UnityEngine_RectTransform_o *layoutRoot;
  System_String_c *a;
  System_String_o *layoutRoot_00;
  
  if (g_data_057ae3a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&"You are about to download a required file: ");
    g_data_057ae3a2 = '\x01';
  }
  a = (System_String_c *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  *(undefined2 *)&(__this->fields).Done = 0;
  pUVar1 = (__this->fields)._label;
  layoutRoot_00 = (System_String_o *)0x0;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar1,0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    layoutRoot_00 = "You are about to download a required file: ";
    pSVar3 = (System_String_c *)System_String__Concat_3ae5ba0("You are about to download a required file: ",url,(MethodInfo *)0x0);
    a = (System_String_c *)url;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      pUVar1 = (__this->fields)._label;
      layoutRoot_00 = (System_String_o *)0x0;
      a = pSVar3;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        layoutRoot = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
        layoutRoot_00 = (System_String_o *)(__this->fields).SinglePanel;
        if ((layoutRoot_00 == (System_String_o *)0x0) ||
           (a = TypeInfo_RectTransform, layoutRoot_00->klass == TypeInfo_RectTransform)) {
          UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                    ((UnityEngine_RectTransform_o *)layoutRoot_00,(MethodInfo *)0x0);
          return;
        }
        goto label_043ba64a;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043ba64a:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a3 = '\x01';
  }
  bVar2 = System_String__op_Equality((System_String_o *)a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    *(undefined1 *)((long)&layoutRoot_00[7].monitor + 1) = 1;
  }
  *(undefined1 *)&layoutRoot_00[7].monitor = 1;
  (*(layoutRoot_00->klass->vtable)._22_System_IConvertible_ToDecimal.methodPtr)
            (layoutRoot_00,(layoutRoot_00->klass->vtable)._22_System_IConvertible_ToDecimal.method);
  return;
}


// UI.CustomAssetUrlPopup$$OnButtonClick
// il2cpp: void UI_CustomAssetUrlPopup__OnButtonClick (UI_CustomAssetUrlPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43ba650

void UI_CustomAssetUrlPopup__OnButtonClick
               (UI_CustomAssetUrlPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a3 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields).Done + 1) = 1;
  }
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetUrlPopup$$.ctor
// il2cpp: void UI_CustomAssetUrlPopup___ctor (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba6c0

void UI_CustomAssetUrlPopup___ctor(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomAssetUrlPopup$$<Setup>b__17_0
// il2cpp: void UI_CustomAssetUrlPopup___Setup_b__17_0 (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba6d0

void UI_CustomAssetUrlPopup___Setup_b__17_0(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (g_data_057ae3a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a4 = '\x01';
  }
  a = "Confirm";
  if (g_data_057ae3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a3 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields).Done + 1) = 1;
  }
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetUrlPopup$$<Setup>b__17_1
// il2cpp: void UI_CustomAssetUrlPopup___Setup_b__17_1 (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba760

void UI_CustomAssetUrlPopup___Setup_b__17_1(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (g_data_057ae3a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae3a5 = '\x01';
  }
  a = "Cancel";
  if (g_data_057ae3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a3 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields).Done + 1) = 1;
  }
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


