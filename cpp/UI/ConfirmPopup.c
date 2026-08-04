// Type: UI.ConfirmPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ConfirmPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ConfirmPopup.cs
// --------------------------------

// UI.ConfirmPopup$$get_Title
// il2cpp: System_String_o* UI_ConfirmPopup__get_Title (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434aef0

System_String_o * UI_ConfirmPopup__get_Title(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae0fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae0fe = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ConfirmPopup$$get_Width
// il2cpp: float UI_ConfirmPopup__get_Width (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434af50

float UI_ConfirmPopup__get_Width(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.ConfirmPopup$$get_Height
// il2cpp: float UI_ConfirmPopup__get_Height (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434af60

float UI_ConfirmPopup__get_Height(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.ConfirmPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ConfirmPopup__get_VerticalPadding (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434af70

int32_t UI_ConfirmPopup__get_VerticalPadding(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ConfirmPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ConfirmPopup__get_HorizontalPadding (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434af80

int32_t UI_ConfirmPopup__get_HorizontalPadding(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ConfirmPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ConfirmPopup__get_PanelAlignment (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434af90

int32_t UI_ConfirmPopup__get_PanelAlignment(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ConfirmPopup$$Setup
// il2cpp: void UI_ConfirmPopup__Setup (UI_ConfirmPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434afa0

void UI_ConfirmPopup__Setup(UI_ConfirmPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppClass *pIVar3;
  long lVar4;
  UnityEngine_Transform_c *pUVar5;
  undefined8 uVar6;
  int32_t fontSize;
  int iVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  UnityEngine_UI_Text_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppObject *pIVar12;
  UnityEngine_Transform_o *__this_02;
  MethodInfo_255A0F0 **ppMVar13;
  MethodInfo *extraout_RDX;
  UnityEngine_UI_RectMask2D_o *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  UI_TooltipPopup_o *method_00;
  UI_TooltipPopup_o *__this_03;
  MethodInfo *method_01;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_UI_Text_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  if (g_data_057ae0ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae0ff = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar9 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,120.0,20.0,pSVar9,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar9 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar9,(MethodInfo *)0x0);
  pUVar15 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = UI_UIManager__GetLocaleCommon((System_String_o *)"Confirm",(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar15,__this_01,pSVar9,0.0,pUVar10,(MethodInfo *)0x0);
  pUVar15 = (__this->fields).BottomBar;
  pSVar9 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar15,__this_01,pSVar9,0.0,pUVar10,(MethodInfo *)0x0);
  __this_04 = (UnityEngine_UI_Text_o *)(__this->fields).SinglePanel;
  ppMVar13 = (MethodInfo_255A0F0 **)0x0;
  pUVar11 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)__this_04,(UI_ElementStyle_o *)__this_00,
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    ppMVar13 = &MethodInfo_Text_GetComponent_Text;
    __this_00 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = __this_00;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar14 = (__this->fields)._label;
    __this_04 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
      pIVar12 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar14,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
      fVar16 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                (__this,(__this->klass->vtable)._33_GetWidth.method);
      __this_00 = (UnityEngine_UI_Text_o *)(__this->klass->vtable)._10_get_HorizontalPadding.method;
      __this_04 = (UnityEngine_UI_Text_o *)__this;
      iVar7 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)();
      if (pIVar12 != (Il2CppObject *)0x0) {
        __this_00 = (UnityEngine_UI_Text_o *)pIVar12->klass->vtable[0x24].method;
        (*pIVar12->klass->vtable[0x24].methodPtr)(fVar16 - (float)(iVar7 * 2),pIVar12);
        __this_04 = *ppUVar1;
        if ((__this_04 != (UnityEngine_UI_Text_o *)0x0) &&
           (__this_00 = MethodInfo_LayoutElement_GetComponent_LayoutElement,
           pIVar12 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this_04,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement),
           pIVar12 != (Il2CppObject *)0x0)) {
          UNRECOVERED_JUMPTABLE_00 = pIVar12->klass->vtable[0x26].methodPtr;
          (*UNRECOVERED_JUMPTABLE_00)
                    ((__this->fields).LabelHeight,pIVar12,pIVar12->klass->vtable[0x26].method,
                     UNRECOVERED_JUMPTABLE_00);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = (UI_TooltipPopup_o *)0x0;
  pUVar14 = __this_04;
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (UI_TooltipPopup_o *)0x0;
    bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this_04,(MethodInfo *)method_00);
    pUVar2 = (UnityEngine_UI_Text_o *)(__this_04->fields).m_MaskMaterial;
    pUVar14 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,__this_00,(pUVar2->klass->vtable)._75_set_text.method);
      (__this_04->fields).m_ParentMask = extraout_RDX_00;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).m_ParentMask,extraout_RDX_00);
      auVar17._8_8_ = extraout_RDX_01;
      auVar17._0_8_ = ppMVar13;
      if (ppMVar13 == (MethodInfo_255A0F0 **)0x0) {
        auVar17 = (*(__this_04->klass->vtable)._35_get_mainTexture.methodPtr)
                            (__this_04,(__this_04->klass->vtable)._35_get_mainTexture.method);
      }
      UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_04,auVar17._0_8_,auVar17._8_8_);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = method_00;
  if (g_data_057ae112 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae112 = '\x01';
  }
  pUVar15 = *(UnityEngine_Transform_o **)&(pUVar14->fields).m_VertsDirty;
  if (((pUVar15 != (UnityEngine_Transform_o *)0x0) &&
      (__this_03 = "Label",
      __this_02 = UnityEngine_Transform__Find(pUVar15,(System_String_o *)"Label",(MethodInfo *)0x0),
      __this_02 != (UnityEngine_Transform_o *)0x0)) &&
     (__this_03 = MethodInfo_Text_GetComponent_Text,
     pIVar12 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_02,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text),
     pUVar15 = __this_02, pIVar12 != (Il2CppObject *)0x0)) {
    pIVar3 = pIVar12->klass;
    UNRECOVERED_JUMPTABLE_00 = pIVar3->vtable[0x4b].methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)(pIVar12,method_00,pIVar3->vtable[0x4b].method,pIVar3,UNRECOVERED_JUMPTABLE_00)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae100 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae100 = '\x01';
  }
  method_01 = "Confirm";
  bVar8 = System_String__op_Equality
                    ((System_String_o *)__this_03,(System_String_o *)"Confirm",(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    lVar4 = pUVar15[7].fields.m_CachedPtr;
    if (lVar4 == 0) {
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&(__this_03->fields)._label = 0x42700000;
      UI_BasePopup___ctor(__this_03,method_01);
      return;
    }
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  pUVar5 = pUVar15->klass;
  uVar6._0_4_ = pUVar5[1]._2.token;
  uVar6._4_2_ = pUVar5[1]._2.method_count;
  uVar6._6_2_ = pUVar5[1]._2.property_count;
  (**(code **)&pUVar5[1]._2.thread_static_fields_offset)(pUVar15,uVar6);
  return;
}


// UI.ConfirmPopup$$Show
// il2cpp: void UI_ConfirmPopup__Show (UI_ConfirmPopup_o* __this, System_String_o* message, UnityEngine_Events_UnityAction_o* onConfirm, System_String_o* title, const MethodInfo* method);
// 0x434b2c0

void UI_ConfirmPopup__Show
               (UI_ConfirmPopup_o *__this,System_String_o *message,UnityEngine_Events_UnityAction_o *onConfirm
               ,System_String_o *title,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  UnityEngine_Transform_c *pUVar4;
  undefined8 uVar5;
  bool_conflict bVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar8;
  UI_TooltipPopup_o *method_00;
  UI_TooltipPopup_o *__this_02;
  UI_ConfirmPopup_o *pUVar9;
  UnityEngine_Transform_o *__this_03;
  undefined1 auVar10 [16];
  
  method_00 = (UI_TooltipPopup_o *)0x0;
  pUVar9 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (UI_TooltipPopup_o *)0x0;
    bVar6 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)method_00);
    pUVar1 = (__this->fields)._label;
    pUVar9 = (UI_ConfirmPopup_o *)0x0;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method);
      (__this->fields)._onConfirm = onConfirm;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._onConfirm,onConfirm);
      pMVar8 = extraout_RDX;
      if (title == (System_String_o *)0x0) {
        auVar10 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                            (__this,(__this->klass->vtable)._35_get_Title.method);
        pMVar8 = auVar10._8_8_;
        title = auVar10._0_8_;
      }
      UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,pMVar8);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = method_00;
  if (g_data_057ae112 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae112 = '\x01';
  }
  __this_03 = (pUVar9->fields).TopBar;
  if (((__this_03 != (UnityEngine_Transform_o *)0x0) &&
      (__this_02 = "Label",
      __this_01 = UnityEngine_Transform__Find(__this_03,(System_String_o *)"Label",(MethodInfo *)0x0),
      __this_01 != (UnityEngine_Transform_o *)0x0)) &&
     (__this_02 = MethodInfo_Text_GetComponent_Text,
     pIVar7 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this_01,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text),
     __this_03 = __this_01, pIVar7 != (Il2CppObject *)0x0)) {
    pIVar2 = pIVar7->klass;
    vtableDispatch = pIVar2->vtable[0x4b].methodPtr;
    (*vtableDispatch)(pIVar7,method_00,pIVar2->vtable[0x4b].method,pIVar2,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae100 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae100 = '\x01';
  }
  pMVar8 = "Confirm";
  bVar6 = System_String__op_Equality
                    ((System_String_o *)__this_02,(System_String_o *)"Confirm",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    lVar3 = __this_03[7].fields.m_CachedPtr;
    if (lVar3 == 0) {
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&(__this_02->fields)._label = 0x42700000;
      UI_BasePopup___ctor(__this_02,pMVar8);
      return;
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  pUVar4 = __this_03->klass;
  uVar5._0_4_ = pUVar4[1]._2.token;
  uVar5._4_2_ = pUVar4[1]._2.method_count;
  uVar5._6_2_ = pUVar4[1]._2.property_count;
  (**(code **)&pUVar4[1]._2.thread_static_fields_offset)(__this_03,uVar5);
  return;
}


// UI.ConfirmPopup$$OnButtonClick
// il2cpp: void UI_ConfirmPopup__OnButtonClick (UI_ConfirmPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434b410

void UI_ConfirmPopup__OnButtonClick(UI_ConfirmPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (g_data_057ae100 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae100 = '\x01';
  }
  method_00 = "Confirm";
  bVar2 = System_String__op_Equality(name,(System_String_o *)"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&(((UI_TooltipPopup_o *)name)->fields)._label = 0x42700000;
      UI_BasePopup___ctor((UI_TooltipPopup_o *)name,method_00);
      return;
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ConfirmPopup$$.ctor
// il2cpp: void UI_ConfirmPopup___ctor (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434b490

void UI_ConfirmPopup___ctor(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  (__this->fields).LabelHeight = 60.0;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


// UI.ConfirmPopup$$<Setup>b__15_0
// il2cpp: void UI_ConfirmPopup___Setup_b__15_0 (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434b4a0

void UI_ConfirmPopup___Setup_b__15_0(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_Fields SVar2;
  System_String_o *a;
  bool_conflict bVar3;
  System_String_o *a_00;
  
  if (g_data_057ae101 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae101 = '\x01';
  }
  a_00 = "Confirm";
  if (g_data_057ae100 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae100 = '\x01';
  }
  bVar3 = System_String__op_Equality(a_00,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae102 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Cancel");
        g_data_057ae102 = '\x01';
      }
      a = "Cancel";
      if (g_data_057ae100 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Confirm");
        g_data_057ae100 = '\x01';
      }
      bVar3 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        SVar2 = a_00[7].fields;
        if (SVar2 == (System_String_Fields)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae103 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
            il2cpp_runtime_helper_023445d0(&"Export");
            g_data_057ae103 = '\x01';
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UI_UIManager__GetLocaleCommon("Export",(MethodInfo *)0x0);
          return;
        }
        (**(code **)((long)SVar2 + 0x18))
                  (*(undefined8 *)((long)SVar2 + 0x40),*(undefined8 *)((long)SVar2 + 0x28));
      }
      (*(a_00->klass->vtable)._22_System_IConvertible_ToDecimal.methodPtr)
                (a_00,(a_00->klass->vtable)._22_System_IConvertible_ToDecimal.method);
      return;
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ConfirmPopup$$<Setup>b__15_1
// il2cpp: void UI_ConfirmPopup___Setup_b__15_1 (UI_ConfirmPopup_o* __this, const MethodInfo* method);
// 0x434b540

void UI_ConfirmPopup___Setup_b__15_1(UI_ConfirmPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *a;
  bool_conflict bVar2;
  
  if (g_data_057ae102 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae102 = '\x01';
  }
  a = "Cancel";
  if (g_data_057ae100 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae100 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onConfirm;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae103 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"Export");
        g_data_057ae103 = '\x01';
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_UIManager__GetLocaleCommon("Export",(MethodInfo *)0x0);
      return;
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


