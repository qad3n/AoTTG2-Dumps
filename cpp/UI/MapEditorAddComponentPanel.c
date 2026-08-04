// Type: UI.MapEditorAddComponentPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddComponentPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPanel.cs
// --------------------------------

// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4416600

void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor
               (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$<CreateList>b__0
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___CreateList_b__0 (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x44167f0

void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___CreateList_b__0
               (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__Type__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar5;
  undefined8 uVar6;
  UI_MapEditorAddComponentPanel_o *pUVar7;
  System_Collections_Generic_List_object__o *__this_01;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  Il2CppClass *value;
  Il2CppClass *value_00;
  UI_BasePanel_o *pUVar8;
  UI_CategoryPanel_o *__this_02;
  
  pUVar7 = (__this->fields).__4__this;
  if (pUVar7 == (UI_MapEditorAddComponentPanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  value_00 = (Il2CppClass *)(__this->fields).item;
  value = value_00;
  if (g_data_057ae617 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorAddComponentPopup);
    g_data_057ae617 = '\x01';
  }
  pUVar8 = (pUVar7->fields).Parent;
  if (pUVar8 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorAddComponentPopup->_2).naturalAligment;
    value = TypeInfo_MapEditorAddComponentPopup;
    if (((pUVar8->klass->_2).naturalAligment < bVar1) ||
       ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorAddComponentPopup)) goto label_044166e4;
    if (g_data_057ae61f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae61f = '\x01';
    }
    __this_00 = pUVar8[1].fields._categoryPanelTypes;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
      pUVar2 = pUVar8[1].fields.MaskBackground;
      value = value_00;
      if (pUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
        uVar3._0_4_ = (pUVar2->fields).m_Color.fields.r;
        uVar3._4_4_ = (pUVar2->fields).m_Color.fields.g;
        uVar4._0_4_ = (pUVar2->fields).m_RaycastTarget;
        uVar4._4_4_ = (pUVar2->fields).m_RaycastTargetCache;
        (*(code *)(pUVar2->fields).m_CancellationTokenSource)(uVar4,uVar3);
        UNRECOVERED_JUMPTABLE_00 = (pUVar8->klass->vtable)._22_Hide.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar8,(pUVar8->klass->vtable)._22_Hide.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044166e4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae61f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae61f = '\x01';
  }
  __this_02 = (UI_CategoryPanel_o *)pUVar8[1].fields._categoryPanelTypes;
  if (__this_02 != (UI_CategoryPanel_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    pUVar2 = pUVar8[1].fields.MaskBackground;
    if (pUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
      uVar5._0_4_ = (pUVar2->fields).m_Color.fields.r;
      uVar5._4_4_ = (pUVar2->fields).m_Color.fields.g;
      uVar6._0_4_ = (pUVar2->fields).m_RaycastTarget;
      uVar6._4_4_ = (pUVar2->fields).m_RaycastTargetCache;
      (*(code *)(pUVar2->fields).m_CancellationTokenSource)(uVar6,uVar5);
      UNRECOVERED_JUMPTABLE_00 = (pUVar8->klass->vtable)._22_Hide.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pUVar8,(pUVar8->klass->vtable)._22_Hide.method,extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae618 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae618 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
  __this_02[1].monitor = __this_01;
  il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddComponentPanel__get_ScrollBar (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e20

bool_conflict
UI_MapEditorAddComponentPanel__get_ScrollBar(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddComponentPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_HorizontalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e30

int32_t UI_MapEditorAddComponentPanel__get_HorizontalPadding
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_VerticalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e40

int32_t UI_MapEditorAddComponentPanel__get_VerticalPadding
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.MapEditorAddComponentPanel$$get_ItemButtonWidth
// il2cpp: float UI_MapEditorAddComponentPanel__get_ItemButtonWidth (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e50

float UI_MapEditorAddComponentPanel__get_ItemButtonWidth
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddComponentPanel__get_VerticalSpacing (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e60

float UI_MapEditorAddComponentPanel__get_VerticalSpacing
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 5.0;
}


// UI.MapEditorAddComponentPanel$$get_ItemFontSize
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_ItemFontSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e70

int32_t UI_MapEditorAddComponentPanel__get_ItemFontSize
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 0x12;
}


// UI.MapEditorAddComponentPanel$$get_DeleteButtonSize
// il2cpp: float UI_MapEditorAddComponentPanel__get_DeleteButtonSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e80

float UI_MapEditorAddComponentPanel__get_DeleteButtonSize
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MapEditorAddComponentPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPanel__get_ThemePanel (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4414e90

System_String_o *
UI_MapEditorAddComponentPanel__get_ThemePanel(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae612 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SelectListPopup");
    g_data_057ae612 = '\x01';
  }
  return "SelectListPopup";
}


// UI.MapEditorAddComponentPanel$$Setup
// il2cpp: void UI_MapEditorAddComponentPanel__Setup (UI_MapEditorAddComponentPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4414ec0

void UI_MapEditorAddComponentPanel__Setup
               (UI_MapEditorAddComponentPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_00;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar6;
  int32_t value_00;
  undefined8 in_RAX;
  Il2CppClass *__this_10;
  System_Collections_Generic_List_Enumerator_T__c *original;
  System_Collections_Generic_List_object__o *__this_11;
  System_String_o *value_01;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_Selectable_o *__this_12;
  UnityEngine_Events_UnityAction_o *call;
  Il2CppObject *pIVar11;
  UnityEngine_UI_Text_o *__this_13;
  System_String_o *pSVar12;
  long *plVar13;
  MethodInfo *method_00;
  System_String_o *a;
  UI_ElementStyle_o *unaff_RBP;
  UnityEngine_GameObject_c *__this_14;
  Il2CppRGCTXData *pIVar14;
  UnityEngine_Transform_o *unaff_R13;
  UnityEngine_GameObject_c *unaff_R14;
  System_String_o *unaff_R15;
  System_Collections_Generic_List_object__o *pSVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  UnityEngine_Color_o UVar19;
  undefined1 in_stack_fffffffffffffe78 [8];
  Il2CppRGCTXData *in_stack_fffffffffffffe80;
  Il2CppClass *in_stack_fffffffffffffe88;
  UI_MapEditorAddComponentPanel_o *pUStack_128;
  undefined1 auStack_118 [80];
  Il2CppRGCTXData *pIStack_c8;
  _union_249689 _Stack_c0;
  UnityEngine_Color_Fields UStack_b8;
  undefined8 uStack_a8;
  Il2CppClass *pIVar20;
  System_String_o *__this_15;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  System_String_o *pSStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249689 _Stack_60;
  UnityEngine_Transform_o *pUStack_58;
  UnityEngine_GameObject_c *pUStack_50;
  System_String_o *pSStack_48;
  UI_ElementStyle_o *pUStack_40;
  float fStack_38;
  float fStack_34;
  
  _fStack_38 = in_RAX;
  if (g_data_057ae613 == '\0') {
    pUStack_40 = (UI_ElementStyle_o *)0x4414ee6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pUStack_40 = (UI_ElementStyle_o *)0x4414ef2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorAddComponentPopup);
    pUStack_40 = (UI_ElementStyle_o *)0x4414efe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    pUStack_40 = (UI_ElementStyle_o *)0x4414f0a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pUStack_40 = (UI_ElementStyle_o *)0x4414f16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_40 = (UI_ElementStyle_o *)0x4414f22;
    il2cpp_runtime_helper_023445d0(&"No items found.");
    g_data_057ae613 = '\x01';
  }
  pUStack_40 = (UI_ElementStyle_o *)0x4414f36;
  __this_10 = (Il2CppClass *)parent;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent == (UI_BasePanel_o *)0x0) {
label_044150e1:
    pUStack_40 = (UI_ElementStyle_o *)0x44150e6;
    il2cpp_runtime_helper_022b2c90();
    pIVar14 = (Il2CppRGCTXData *)parent;
  }
  else {
    bVar2 = (TypeInfo_MapEditorAddComponentPopup->_2).naturalAligment;
    __this_10 = TypeInfo_MapEditorAddComponentPopup;
    pIVar14 = (Il2CppRGCTXData *)parent;
    if ((bVar2 <= (parent->klass->_2).naturalAligment) &&
       ((parent->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapEditorAddComponentPopup)) {
      __this_10 = (Il2CppClass *)0x0;
      pUStack_40 = (UI_ElementStyle_o *)0x4414f7b;
      unaff_R15 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
      pUVar9 = parent[1].fields._currentCategoryPanel;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        unaff_R14 = pUVar9[1].klass;
        unaff_R13 = (__this->fields).SinglePanel;
        pUStack_40 = (UI_ElementStyle_o *)0x4414fab;
        parent = (UI_BasePanel_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        pUStack_40 = (UI_ElementStyle_o *)0x4414fbd;
        unaff_RBP = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        pUStack_40 = (UI_ElementStyle_o *)0x4414fe2;
        UI_ElementStyle___ctor(unaff_RBP,0x18,120.0,20.0,(System_String_o *)parent,(MethodInfo *)0x0);
        pUStack_40 = (UI_ElementStyle_o *)0x4415002;
        __this_10 = (Il2CppClass *)
                    UI_ElementFactory__CreateDefaultLabel
                              (unaff_R13,unaff_RBP,"No items found.",0,4,(MethodInfo *)0x0);
        (__this->fields)._noItemsLabel = (UnityEngine_GameObject_o *)__this_10;
        pUStack_40 = (UI_ElementStyle_o *)0x4415014;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._noItemsLabel);
        pIVar14 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pIVar14 != (Il2CppRGCTXData *)0x0) {
          bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
          method_00 = (MethodInfo *)(ulong)bVar2;
          __this_10 = TypeInfo_MapEditorGameManager;
          if ((bVar2 <= (pIVar14->klass->_2).naturalAligment) &&
             ((pIVar14->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] == TypeInfo_MapEditorGameManager)) {
            if (pIVar14[6].rgctxDataDummy == (void *)0x0) {
              return;
            }
            pUStack_40 = (UI_ElementStyle_o *)0x4415082;
            original = (System_Collections_Generic_List_Enumerator_T__c *)
                       (*(__this->klass->vtable)._38_GetItems.methodPtr)
                                 (__this,unaff_R15,(__this->klass->vtable)._38_GetItems.method);
            pUStack_40 = (UI_ElementStyle_o *)0x44150a7;
            __this_14 = unaff_R14;
            bVar6 = System_String__op_Inequality
                              ((System_String_o *)unaff_R14,
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              pUStack_40 = (UI_ElementStyle_o *)0x44150b6;
              original = (System_Collections_Generic_List_Enumerator_T__c *)
                         UI_MapEditorAddComponentPanel__Filter
                                   ((UI_MapEditorAddComponentPanel_o *)__this_14,
                                    (System_Collections_Generic_List_string__o *)original,
                                    (System_String_o *)unaff_R14,method_00);
            }
            if (g_data_057ae616 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
              il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateList_b__0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
              il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
              il2cpp_runtime_helper_023445d0(&"TextColor");
              il2cpp_runtime_helper_023445d0(&"DefaultPanel");
              il2cpp_runtime_helper_023445d0(&"Text");
              il2cpp_runtime_helper_023445d0(&"ItemButton");
              il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/SelectListButton");
              il2cpp_runtime_helper_023445d0(&"DeleteButton");
              il2cpp_runtime_helper_023445d0(&"");
              g_data_057ae616 = '\x01';
            }
            auStack_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            auStack_118._8_8_ = (Il2CppRGCTXData *)0x0;
            auStack_118._16_8_ = (Il2CppClass *)0x0;
            if (original != (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
              auStack_118._32_8_ = original;
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
                         (System_Collections_Generic_List_object__o *)original,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
              auStack_118._16_8_ = auStack_80._8_8_;
              auStack_118._0_8_ = auStack_88;
              auStack_118._8_8_ = auStack_80._0_8_;
              while( true ) {
                __this_06.fields._8_8_ = in_stack_fffffffffffffe80;
                __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
                __this_06.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
                bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_06,(MethodInfo_321A1D0 *)auStack_118);
                pUStack_128 = __this;
                if ((char)bVar6 == '\0') {
                  __this_07.fields._8_8_ = in_stack_fffffffffffffe80;
                  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
                  __this_07.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_07,(MethodInfo_321A1C0 *)auStack_118);
                  goto label_04415a53;
                }
                pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
                System_Object___ctor(pIVar8,(MethodInfo *)0x0);
                if (pIVar8 == (Il2CppObject *)0x0) break;
                pIVar8[1].monitor = __this;
                il2cpp_runtime_helper_022b4080(&pIVar8[1].monitor);
                pIVar8[1].klass = (Il2CppClass *)auStack_118._16_8_;
                il2cpp_runtime_helper_022b4080(pIVar8 + 1);
                pUVar9 = UI_ElementFactory__InstantiateAndBind
                                   ((__this->fields).SinglePanel,"Prefabs/Misc/SelectListButton",(MethodInfo *)0x0);
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_04415aa9;
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415aae;
                pUVar10 = UnityEngine_Transform__Find(pUVar10,"ItemButton",(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415ab3;
                __this_12 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar10,MethodInfo_Button_GetComponent_Button);
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_04415a90:
                  il2cpp_runtime_helper_022b2c90();
label_04415a95:
                  il2cpp_runtime_helper_022b2c90();
label_04415a9a:
                  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
label_04415a9f:
                  il2cpp_runtime_helper_022b2c90(fVar16);
                  break;
                }
                pUVar10 = UnityEngine_Transform__Find(pUVar10,"DeleteButton",(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415ab8;
                auStack_118._40_8_ =
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar10,MethodInfo_Button_GetComponent_Button);
                if (__this_12 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04415abd;
                __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_12->fields).m_CanvasGroupCache;
                call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_04415ac2;
                UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415ac7;
                pUVar10 = UnityEngine_Transform__Find(pUVar10,"Text",(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415acc;
                pIVar11 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                if (pIVar11 == (Il2CppObject *)0x0) goto label_04415ad1;
                (*pIVar11->klass->vtable[0x4b].methodPtr)
                          (pIVar11,pIVar8[1].klass,pIVar11->klass->vtable[0x4b].method);
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415a90;
                pUVar10 = UnityEngine_Transform__Find(pUVar10,"Text",(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415a95;
                __this_13 = (UnityEngine_UI_Text_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                value_00 = (*(__this->klass->vtable)._36_get_ItemFontSize.methodPtr)
                                     (__this,(__this->klass->vtable)._36_get_ItemFontSize.method);
                if (__this_13 == (UnityEngine_UI_Text_o *)0x0) goto label_04415ad6;
                UnityEngine_UI_Text__set_fontSize(__this_13,value_00,(MethodInfo *)0x0);
                pSVar12 = (System_String_o *)
                          (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)auStack_88,pSVar12,"ItemButton","",
                           "DefaultPanel",(MethodInfo *)0x0);
                UStack_b8._0_8_ = pUStack_58;
                UStack_b8._8_8_ = pUStack_50;
                pIStack_c8 = pIStack_68;
                _Stack_c0.genericMethod = _Stack_60.genericMethod;
                auStack_118._64_8_ = auStack_80._8_8_;
                auStack_118._72_8_ = pSStack_70;
                auStack_118._48_8_ = auStack_88;
                auStack_118._56_8_ = auStack_80._0_8_;
                value.fields.m_NormalColor.fields.b = (float)auStack_80._0_4_;
                value.fields.m_NormalColor.fields.a = (float)auStack_80._4_4_;
                value.fields.m_NormalColor.fields.r = (float)auStack_88._0_4_;
                value.fields.m_NormalColor.fields.g = (float)auStack_88._4_4_;
                value.fields.m_HighlightedColor.fields.r = (float)auStack_80._8_4_;
                value.fields.m_HighlightedColor.fields.g = (float)auStack_80._12_4_;
                value.fields.m_HighlightedColor.fields._8_8_ = pSStack_70;
                value.fields.m_PressedColor.fields._0_8_ = pIStack_68;
                value.fields.m_PressedColor.fields._8_8_ = _Stack_60.genericMethod;
                value.fields.m_SelectedColor.fields._0_8_ = pUStack_58;
                value.fields.m_SelectedColor.fields._8_8_ = pUStack_50;
                value.fields.m_DisabledColor.fields._0_8_ = pSStack_48;
                value.fields.m_DisabledColor.fields._8_8_ = pUStack_40;
                value.fields.m_ColorMultiplier = fStack_38;
                value.fields.m_FadeDuration = fStack_34;
                in_stack_fffffffffffffe78 = auStack_88;
                in_stack_fffffffffffffe80 = (Il2CppRGCTXData *)auStack_80._0_8_;
                in_stack_fffffffffffffe88 = (Il2CppClass *)auStack_80._8_8_;
                UnityEngine_UI_Selectable__set_colors(__this_12,value,(MethodInfo *)0x0);
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415a9a;
                pUVar10 = UnityEngine_Transform__Find(pUVar10,"Text",(MethodInfo *)0x0);
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04415adb;
                pIVar8 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                pSVar12 = (System_String_o *)
                          (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                UVar19 = UI_UIManager__GetThemeColor
                                   (pSVar12,"ItemButton","TextColor","DefaultPanel",(MethodInfo *)0x0);
                fVar16 = UVar19.fields.r;
                if (pIVar8 == (Il2CppObject *)0x0) goto label_04415a9f;
                (*pIVar8->klass->vtable[0x17].methodPtr)
                          (fVar16,UVar19.fields.b,pIVar8,pIVar8->klass->vtable[0x17].method);
                pIVar8 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)__this_12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                fVar16 = (float)(*(__this->klass->vtable)._35_get_ItemButtonWidth.methodPtr)
                                          (__this,(__this->klass->vtable)._35_get_ItemButtonWidth.method);
                fVar17 = (float)(*(__this->klass->vtable)._37_get_DeleteButtonSize.methodPtr)
                                          (__this,(__this->klass->vtable)._37_get_DeleteButtonSize.method);
                if (pIVar8 == (Il2CppObject *)0x0) goto label_04415ae0;
                (*pIVar8->klass->vtable[0x24].methodPtr)(fVar16 + fVar17 + 10.0,pIVar8);
                if ((UnityEngine_Component_o *)auStack_118._40_8_ == (UnityEngine_Component_o *)0x0)
                goto label_04415ae5;
                pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)auStack_118._40_8_,(MethodInfo *)0x0);
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_04415aea;
                UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
              }
              il2cpp_runtime_helper_022b2c90();
label_04415aa9:
              il2cpp_runtime_helper_022b2c90();
label_04415aae:
              il2cpp_runtime_helper_022b2c90();
label_04415ab3:
              il2cpp_runtime_helper_022b2c90();
label_04415ab8:
              il2cpp_runtime_helper_022b2c90();
label_04415abd:
              il2cpp_runtime_helper_022b2c90();
label_04415ac2:
              il2cpp_runtime_helper_022b2c90();
label_04415ac7:
              il2cpp_runtime_helper_022b2c90();
label_04415acc:
              il2cpp_runtime_helper_022b2c90();
label_04415ad1:
              il2cpp_runtime_helper_022b2c90();
label_04415ad6:
              il2cpp_runtime_helper_022b2c90();
label_04415adb:
              il2cpp_runtime_helper_022b2c90();
label_04415ae0:
              il2cpp_runtime_helper_022b2c90();
label_04415ae5:
              il2cpp_runtime_helper_022b2c90();
label_04415aea:
              il2cpp_runtime_helper_022b2c90();
            }
            do {
              auVar18 = il2cpp_runtime_helper_022b2c90();
              if (auVar18._8_4_ != 1) {
label_04415baa:
                __this_09.fields._8_8_ = in_stack_fffffffffffffe80;
                __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
                __this_09.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_09,(MethodInfo_321A1C0 *)auStack_118);
                _Unwind_Resume(auVar18._0_8_);
              }
              plVar13 = (long *)__cxa_begin_catch(auVar18._0_8_);
              lVar5 = *plVar13;
              __cxa_end_catch();
              __this_08.fields._8_8_ = in_stack_fffffffffffffe80;
              __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
              __this_08.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_08,(MethodInfo_321A1C0 *)auStack_118);
              if (lVar5 != 0) {
                il2cpp_runtime_helper_022fefe0(lVar5);
                goto label_04415baa;
              }
label_04415a53:
              pUVar9 = (pUStack_128->fields)._noItemsLabel;
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive
                          (pUVar9,(uint)(*(int *)&((Il2CppClass_1 *)auStack_118._32_8_)->namespaze < 1),
                           (MethodInfo *)0x0);
                return;
              }
            } while( true );
          }
          goto label_044150e9;
        }
      }
      goto label_044150e1;
    }
  }
label_044150e9:
  pUStack_40 = (UI_ElementStyle_o *)0x44150ee;
  il2cpp_runtime_helper_022b2fd0(pIVar14);
  pIStack_68 = (Il2CppRGCTXData *)parent;
  _Stack_60 = (_union_249689)__this;
  pUStack_58 = unaff_R13;
  pUStack_50 = unaff_R14;
  pSStack_48 = unaff_R15;
  pUStack_40 = unaff_RBP;
  if (g_data_057ae615 == '\0') {
    uStack_a8 = 0x4415119;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    uStack_a8 = 0x4415125;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    uStack_a8 = 0x4415131;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    uStack_a8 = 0x441513d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_a8 = 0x4415149;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    uStack_a8 = 0x4415155;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    uStack_a8 = 0x4415161;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae615 = '\x01';
  }
  pIVar14 = (Il2CppRGCTXData *)0x0;
  pIVar20 = (Il2CppClass *)0x0;
  pSVar12 = (System_String_o *)0x0;
  uStack_a8 = 0x4415187;
  __this_11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  uStack_a8 = 0x441519c;
  System_Collections_Generic_List_object____ctor(__this_11,MethodInfo_List_1_System_String);
  uStack_a8 = 0x44151be;
  bVar6 = System_String__op_Equality
                    (a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (a != (System_String_o *)0x0) {
    uStack_a8 = 0x44151d9;
    value_01 = System_String__ToLower(a,(MethodInfo *)0x0);
    if (__this_10 != (Il2CppClass *)0x0) {
      uStack_a8 = 0x44151fc;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
                 (System_Collections_Generic_List_object__o *)__this_10,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pIVar14 = (Il2CppRGCTXData *)auStack_80._0_8_;
      pIVar20 = (Il2CppClass *)auStack_80._8_8_;
      __this_15 = pSStack_70;
      if (__this_11 == (System_Collections_Generic_List_object__o *)0x0) {
        do {
          uStack_a8 = 0x44152ec;
          __this_02.fields._8_8_ = pIVar20;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pIVar14;
          __this_02.fields._current = (Il2CppObject *)__this_15;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
          if ((char)bVar6 == '\0') goto label_0441531c;
          if (__this_15 == (System_String_o *)0x0) goto label_04415343;
          uStack_a8 = 0x4415301;
          pSVar7 = System_String__ToLower(__this_15,(MethodInfo *)0x0);
          pSVar12 = __this_15;
          if (pSVar7 == (System_String_o *)0x0) goto label_04415348;
          uStack_a8 = 0x4415313;
          bVar6 = System_String__Contains(pSVar7,value_01,(MethodInfo *)0x0);
        } while ((char)bVar6 == '\0');
        uStack_a8 = 0x441531c;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        while( true ) {
          __this_15 = pSStack_70;
          uStack_a8 = 0x4415256;
          __this_01.fields._8_8_ = pIVar20;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pIVar14;
          __this_01.fields._current = (Il2CppObject *)__this_15;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
          if ((char)bVar6 == '\0') break;
          if (__this_15 == (System_String_o *)0x0) goto label_04415343;
          uStack_a8 = 0x4415276;
          pSVar12 = __this_15;
          pSVar7 = System_String__ToLower(__this_15,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) goto label_04415348;
          uStack_a8 = 0x441528c;
          bVar6 = System_String__Contains(pSVar7,value_01,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          pSStack_70 = pSVar12;
          if ((char)bVar6 != '\0') {
            piVar1 = &(__this_11->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_11->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_0441534d;
            uVar3 = (__this_11->fields)._size;
            if (uVar3 < (uint)pSVar4->max_length) {
              (__this_11->fields)._size = uVar3 + 1;
              pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)__this_15;
              uStack_a8 = 0x44152cb;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,__this_15);
              pSStack_70 = pSVar12;
            }
            else {
              uStack_a8 = 0x441524a;
              System_Collections_Generic_List_object___AddWithResize
                        (__this_11,(Il2CppObject *)__this_15,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              pSStack_70 = pSVar12;
            }
          }
        }
      }
label_0441531c:
      uStack_a8 = 0x441532e;
      __this_03.fields._8_8_ = pIVar20;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar14;
      __this_03.fields._current = (Il2CppObject *)__this_15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
      return;
    }
  }
label_04415352:
  uStack_a8 = 0x4415357;
  auVar18 = il2cpp_runtime_helper_022b2c90();
  pSVar15 = auVar18._0_8_;
  if (auVar18._8_4_ == 1) {
    uStack_a8 = 0x44153c7;
    plVar13 = (long *)__cxa_begin_catch(pSVar15);
    lVar5 = *plVar13;
    uStack_a8 = 0x44153cf;
    __cxa_end_catch();
    uStack_a8 = 0x44153e1;
    __this_04.fields._8_8_ = pIVar20;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pIVar14;
    __this_04.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    if (lVar5 == 0) {
      return;
    }
    uStack_a8 = 0x44153f5;
    il2cpp_runtime_helper_022fefe0(lVar5);
    pSVar15 = __this_11;
  }
  uStack_a8 = 0x441540e;
  __this_05.fields._8_8_ = pIVar20;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pIVar14;
  __this_05.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  uStack_a8 = 0x441541b;
  _Unwind_Resume(pSVar15);
label_04415343:
  uStack_a8 = 0x4415348;
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = __this_15;
label_04415348:
  uStack_a8 = 0x441534d;
  il2cpp_runtime_helper_022b2c90();
label_0441534d:
  uStack_a8 = 0x4415352;
  il2cpp_runtime_helper_022b2c90();
  goto label_04415352;
}


// UI.MapEditorAddComponentPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__GetItems (UI_MapEditorAddComponentPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x4415bf0

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__GetItems
          (UI_MapEditorAddComponentPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  uint uVar1;
  System_String_c *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  int32_t *piVar4;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *__this_11;
  System_Collections_Generic_List_Enumerator_T__c *__this_12;
  long *plVar7;
  _union_249689 item;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppRGCTXData *pIVar12;
  _union_249689 _Var13;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_58;
  System_String_o *pSStack_50;
  undefined1 auStack_48 [16];
  _union_249689 _Stack_38;
  
  if (g_data_057ae614 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Internal");
    il2cpp_runtime_helper_023445d0(&"All");
    g_data_057ae614 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  _Var13.genericMethod = (System_String_o *)0x0;
  item = (_union_249689)((_union_249689 *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10))->genericMethod;
  __this_11 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_11,MethodInfo_List_1_System_String);
  if (item.genericMethod == (System_String_o *)0x0) goto label_04415f4a;
  if ((*(byte *)(TypeInfo_MapEditorGameManager + 0x130) <= *(byte *)(*(long *)item.genericMethod + 0x130)) &&
     (*(long *)(*(long *)(*(long *)item.genericMethod + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8
               ) == TypeInfo_MapEditorGameManager)) {
    __this_00 = ((System_String_o *)((long)item.genericMethod + 0x30))->klass;
    if ((__this_00 == (System_String_c *)0x0) ||
       (__this_12 = (System_Collections_Generic_List_Enumerator_T__c *)
                    CustomLogic_CustomLogicEvaluator__GetComponentNames
                              ((CustomLogic_CustomLogicEvaluator_o *)__this_00,(MethodInfo *)0x0),
       __this_12 == (System_Collections_Generic_List_Enumerator_T__c *)0x0)) {
label_04415f4a:
      il2cpp_runtime_helper_022b2c90();
label_04415f4f:
      il2cpp_runtime_helper_022b2c90();
      goto label_04415f54;
    }
    System_Collections_Generic_List_object___Sort
              ((System_Collections_Generic_List_object__o *)__this_12,MethodInfo_Void_Sort);
    bVar6 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return (System_Collections_Generic_List_string__o *)__this_12;
    }
    bVar6 = System_String__op_Equality(category,"General",(MethodInfo *)0x0);
    pSStack_58 = __this_12;
    if ((char)bVar6 != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                 (System_Collections_Generic_List_object__o *)__this_12,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar11 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      pIVar12 = (Il2CppRGCTXData *)auStack_48._8_8_;
      _Var13 = _Stack_38;
      pSStack_50 = category;
      if (__this_11 != (System_Collections_Generic_List_string__o *)0x0) {
        while (item = _Var13, __this_01.fields._8_8_ = pIVar12, __this_01.fields._list = pSVar11,
              __this_01.fields._current = item.genericMethod,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88),
              (char)bVar6 != '\0') {
          _Var13 = item;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8);
          if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04415f45;
          bVar6 = System_Collections_Generic_HashSet_object___Contains(pSVar2,item.genericMethod,MethodInfo_Boolean_Contains)
          ;
          lVar5 = MethodInfo_Void_Add;
          if ((char)bVar6 != '\0') {
            piVar4 = &(__this_11->fields)._version;
            *piVar4 = *piVar4 + 1;
            pSVar3 = (__this_11->fields)._items;
            if (pSVar3 == (System_String_array *)0x0) goto label_04415f4f;
            uVar1 = (__this_11->fields)._size;
            if (uVar1 < (uint)pSVar3->max_length) {
              (__this_11->fields)._size = uVar1 + 1;
              ((_union_249689 *)((long)pSVar3->m_Items + (long)(int)uVar1 * 8))->genericMethod = (void *)item;
              il2cpp_runtime_helper_022b4080((System_String_o **)((long)pSVar3->m_Items + (long)(int)uVar1 * 8),
                                 item.genericMethod);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_11,item.genericMethod,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        goto label_04416483;
      }
      do {
        item = _Var13;
        __this_02.fields._8_8_ = pIVar12;
        __this_02.fields._list = pSVar11;
        __this_02.fields._current = item.genericMethod;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
        if ((char)bVar6 == '\0') goto label_04416483;
        _Var13 = item;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8);
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04415f45;
        bVar6 = System_Collections_Generic_HashSet_object___Contains(pSVar2,item.genericMethod,MethodInfo_Boolean_Contains);
      } while ((char)bVar6 == '\0');
      il2cpp_runtime_helper_022b2c90();
label_04415f45:
      il2cpp_runtime_helper_022b2c90();
      goto label_04415f4a;
    }
label_04416005:
    bVar6 = System_String__op_Equality(category,"Internal",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      bVar6 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return __this_11;
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                 (System_Collections_Generic_List_object__o *)pSStack_58,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar11 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      pIVar12 = (Il2CppRGCTXData *)auStack_48._8_8_;
      if (__this_11 == (System_Collections_Generic_List_string__o *)0x0) {
        puVar8 = &MethodInfo_Boolean_Contains;
        do {
          do {
            _Var13 = _Stack_38;
            __this_08.fields._8_8_ = pIVar12;
            __this_08.fields._list = pSVar11;
            __this_08.fields._current = _Var13.genericMethod;
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_08,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
            item = _Var13;
            if ((char)bVar6 == '\0') goto label_04416483;
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb0)
            ;
            if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044164a7;
            bVar6 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar2,_Var13.genericMethod,MethodInfo_Boolean_Contains);
            _Stack_38 = item;
          } while ((char)bVar6 != '\0');
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8);
          if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044164ac;
          bVar6 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar2,_Var13.genericMethod,MethodInfo_Boolean_Contains);
          _Stack_38 = item;
        } while ((char)bVar6 != '\0');
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        puVar8 = &TypeInfo_CustomLogicManager;
        while (_Var13 = _Stack_38, __this_07.fields._8_8_ = pIVar12, __this_07.fields._list = pSVar11,
              __this_07.fields._current = _Var13.genericMethod,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_07,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88), item = _Var13,
              (char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb0);
          if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044164a7;
          bVar6 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar2,_Var13.genericMethod,MethodInfo_Boolean_Contains);
          _Stack_38 = item;
          if ((char)bVar6 == '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8)
            ;
            if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044164ac;
            bVar6 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar2,_Var13.genericMethod,MethodInfo_Boolean_Contains);
            lVar5 = MethodInfo_Void_Add;
            _Stack_38 = item;
            if ((char)bVar6 == '\0') {
              piVar4 = &(__this_11->fields)._version;
              *piVar4 = *piVar4 + 1;
              pSVar3 = (__this_11->fields)._items;
              if (pSVar3 == (System_String_array *)0x0) goto label_044164b1;
              uVar1 = (__this_11->fields)._size;
              if (uVar1 < (uint)pSVar3->max_length) {
                (__this_11->fields)._size = uVar1 + 1;
                ((_union_249689 *)((long)pSVar3->m_Items + (long)(int)uVar1 * 8))->genericMethod =
                     (void *)_Var13;
                il2cpp_runtime_helper_022b4080((System_String_o **)((long)pSVar3->m_Items + (long)(int)uVar1 * 8),
                                   _Var13.genericMethod);
                _Stack_38 = item;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_11,_Var13.genericMethod,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                _Stack_38 = item;
              }
            }
          }
        }
      }
label_04416483:
      __this_09.fields._8_8_ = pIVar12;
      __this_09.fields._list = pSVar11;
      __this_09.fields._current = item.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      return __this_11;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)pSStack_58,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar11 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    pIVar12 = (Il2CppRGCTXData *)auStack_48._8_8_;
    item = _Stack_38;
    if (__this_11 != (System_Collections_Generic_List_string__o *)0x0) {
      while (item = _Stack_38, __this_05.fields._8_8_ = pIVar12, __this_05.fields._list = pSVar11,
            __this_05.fields._current = item.genericMethod,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88), (char)bVar6 != '\0')
      {
        _Var13 = item;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb0);
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04416190;
        bVar6 = System_Collections_Generic_HashSet_object___Contains(pSVar2,item.genericMethod,MethodInfo_Boolean_Contains);
        lVar5 = MethodInfo_Void_Add;
        _Stack_38 = _Var13;
        if ((char)bVar6 != '\0') {
          piVar4 = &(__this_11->fields)._version;
          *piVar4 = *piVar4 + 1;
          pSVar3 = (__this_11->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_0441619a;
          uVar1 = (__this_11->fields)._size;
          if (uVar1 < (uint)pSVar3->max_length) {
            (__this_11->fields)._size = uVar1 + 1;
            ((_union_249689 *)((long)pSVar3->m_Items + (long)(int)uVar1 * 8))->genericMethod = (void *)item;
            il2cpp_runtime_helper_022b4080((System_String_o **)((long)pSVar3->m_Items + (long)(int)uVar1 * 8),
                               item.genericMethod);
            _Stack_38 = _Var13;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_11,item.genericMethod,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            _Stack_38 = _Var13;
          }
        }
      }
      goto label_04416483;
    }
    do {
      __this_04.fields._8_8_ = pIVar12;
      __this_04.fields._list = pSVar11;
      __this_04.fields._current = item.genericMethod;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
      if ((char)bVar6 == '\0') goto label_04416483;
      _Var13 = item;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb0);
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04416190;
      bVar6 = System_Collections_Generic_HashSet_object___Contains(pSVar2,item.genericMethod,MethodInfo_Boolean_Contains);
      item = _Var13;
    } while ((char)bVar6 == '\0');
    goto label_04416195;
  }
label_04415f54:
  auVar10 = il2cpp_runtime_helper_022b2fd0(item.genericMethod);
  puVar8 = auVar10._0_8_;
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(puVar8);
    puVar9 = (undefined1 *)*plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._list = pSVar11;
    __this_03.fields._current = _Var13.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    category = pSStack_50;
    if (puVar9 != (undefined1 *)0x0) goto label_044164b6;
    goto label_04416005;
  }
label_0441619f:
  __this_06.fields._8_8_ = pIVar12;
  __this_06.fields._list = pSVar11;
  __this_06.fields._current = _Var13.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
label_044165e2:
  _Unwind_Resume(puVar8);
label_04416190:
  il2cpp_runtime_helper_022b2c90();
label_04416195:
  il2cpp_runtime_helper_022b2c90();
label_0441619a:
  il2cpp_runtime_helper_022b2c90();
  puVar8 = (undefined8 *)&stack0xffffffffffffff88;
  goto label_0441619f;
label_044164a7:
  il2cpp_runtime_helper_022b2c90();
label_044164ac:
  il2cpp_runtime_helper_022b2c90();
label_044164b1:
  il2cpp_runtime_helper_022b2c90();
  puVar9 = &stack0xffffffffffffff88;
  _Var13 = item;
label_044164b6:
  il2cpp_runtime_helper_022fefe0(puVar9);
  __this_10.fields._8_8_ = pIVar12;
  __this_10.fields._list = pSVar11;
  __this_10.fields._current = _Var13.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
  goto label_044165e2;
}


// UI.MapEditorAddComponentPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__Filter (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x44150f0

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__Filter
          (UI_MapEditorAddComponentPanel_o *__this,System_Collections_Generic_List_string__o *original,
          System_String_o *search,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *__this_05;
  System_String_o *value;
  System_String_o *pSVar6;
  long *plVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  System_String_o *pSVar12;
  System_String_o *__this_06;
  undefined1 auStack_48 [16];
  System_String_o *pSStack_38;
  
  if (g_data_057ae615 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae615 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  pSVar12 = (System_String_o *)0x0;
  __this_05 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
  bVar5 = System_String__op_Equality
                    (search,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return original;
  }
  if ((search != (System_String_o *)0x0) &&
     (value = System_String__ToLower(search,(MethodInfo *)0x0),
     original != (System_Collections_Generic_List_string__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)original,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar11 = (Il2CppType *)auStack_48._8_8_;
    __this_06 = pSStack_38;
    if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        __this_01.fields._8_8_ = pIVar11;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
        __this_01.fields._current = (Il2CppObject *)__this_06;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar5 == '\0') goto label_0441531c;
        if (__this_06 == (System_String_o *)0x0) goto label_04415343;
        pSVar6 = System_String__ToLower(__this_06,(MethodInfo *)0x0);
        pSVar12 = __this_06;
        if (pSVar6 == (System_String_o *)0x0) goto label_04415348;
        bVar5 = System_String__Contains(pSVar6,value,(MethodInfo *)0x0);
      } while ((char)bVar5 == '\0');
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      while (__this_06 = pSStack_38, __this_00.fields._8_8_ = pIVar11,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
            __this_00.fields._current = (Il2CppObject *)__this_06,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar5 != '\0')
      {
        if (__this_06 == (System_String_o *)0x0) goto label_04415343;
        pSVar12 = __this_06;
        pSVar6 = System_String__ToLower(__this_06,(MethodInfo *)0x0);
        if (pSVar6 == (System_String_o *)0x0) goto label_04415348;
        bVar5 = System_String__Contains(pSVar6,value,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        pSStack_38 = pSVar12;
        if ((char)bVar5 != '\0') {
          piVar1 = &(__this_05->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_05->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_0441534d;
          uVar2 = (__this_05->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_05->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = __this_06;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this_06);
            pSStack_38 = pSVar12;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)__this_06,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            pSStack_38 = pSVar12;
          }
        }
      }
    }
label_0441531c:
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_02.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    return __this_05;
  }
label_04415352:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  pSVar8 = auVar9._0_8_;
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(pSVar8);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_03.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar4 == 0) {
      return __this_05;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
    pSVar8 = __this_05;
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_04.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(pSVar8);
label_04415343:
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = __this_06;
label_04415348:
  il2cpp_runtime_helper_022b2c90();
label_0441534d:
  il2cpp_runtime_helper_022b2c90();
  goto label_04415352;
}


// UI.MapEditorAddComponentPanel$$CreateList
// il2cpp: void UI_MapEditorAddComponentPanel__CreateList (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x4415430

void UI_MapEditorAddComponentPanel__CreateList
               (UI_MapEditorAddComponentPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar2;
  int32_t value_00;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Selectable_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  Il2CppObject *pIVar6;
  UnityEngine_UI_Text_o *__this_06;
  System_String_o *pSVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [12];
  UnityEngine_Color_o UVar12;
  System_Collections_Generic_List_T__o *in_stack_fffffffffffffe78;
  Il2CppRGCTXData *in_stack_fffffffffffffe80;
  Il2CppClass *in_stack_fffffffffffffe88;
  UI_MapEditorAddComponentPanel_o *pUStack_128;
  undefined1 auStack_118 [96];
  UnityEngine_Color_Fields UStack_b8;
  UnityEngine_Color_Fields aUStack_a8 [2];
  undefined1 auStack_88 [16];
  Il2CppClass *pIStack_78;
  float fStack_70;
  float fStack_6c;
  UnityEngine_Color_Fields UStack_68;
  UnityEngine_Color_Fields UStack_58;
  UnityEngine_Color_Fields UStack_48;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057ae616 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateList_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"ItemButton");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/SelectListButton");
    il2cpp_runtime_helper_023445d0(&"DeleteButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae616 = '\x01';
  }
  auStack_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_118._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_118._16_8_ = (Il2CppClass *)0x0;
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    auStack_118._32_8_ = items;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
               (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    auStack_118._16_8_ = pIStack_78;
    auStack_118._0_8_ = auStack_88._0_8_;
    auStack_118._8_8_ = auStack_88._8_8_;
    while( true ) {
      __this_01.fields._8_8_ = in_stack_fffffffffffffe80;
      __this_01.fields._list = in_stack_fffffffffffffe78;
      __this_01.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)auStack_118);
      pUStack_128 = __this;
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = in_stack_fffffffffffffe80;
        __this_02.fields._list = in_stack_fffffffffffffe78;
        __this_02.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)auStack_118);
        goto label_04415a53;
      }
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      pIVar3[1].monitor = __this;
      il2cpp_runtime_helper_022b4080(&pIVar3[1].monitor);
      pIVar3[1].klass = (Il2CppClass *)auStack_118._16_8_;
      il2cpp_runtime_helper_022b4080(pIVar3 + 1);
      pUVar4 = UI_ElementFactory__InstantiateAndBind
                         ((__this->fields).SinglePanel,"Prefabs/Misc/SelectListButton",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_04415aa9;
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415aae;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"ItemButton",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415ab3;
      __this_05 = (UnityEngine_UI_Selectable_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Button_GetComponent_Button);
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_04415a90:
        il2cpp_runtime_helper_022b2c90();
label_04415a95:
        il2cpp_runtime_helper_022b2c90();
label_04415a9a:
        fVar9 = (float)il2cpp_runtime_helper_022b2c90();
label_04415a9f:
        il2cpp_runtime_helper_022b2c90(fVar9);
        break;
      }
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"DeleteButton",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415ab8;
      auStack_118._40_8_ =
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Button_GetComponent_Button);
      if (__this_05 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04415abd;
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_05->fields).m_CanvasGroupCache;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_04415ac2;
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415ac7;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415acc;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_04415ad1;
      (*pIVar6->klass->vtable[0x4b].methodPtr)(pIVar6,pIVar3[1].klass,pIVar6->klass->vtable[0x4b].method);
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415a90;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415a95;
      __this_06 = (UnityEngine_UI_Text_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
      value_00 = (*(__this->klass->vtable)._36_get_ItemFontSize.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_ItemFontSize.method);
      if (__this_06 == (UnityEngine_UI_Text_o *)0x0) goto label_04415ad6;
      UnityEngine_UI_Text__set_fontSize(__this_06,value_00,(MethodInfo *)0x0);
      pSVar7 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_UIManager__GetThemeColorBlock
                ((UnityEngine_UI_ColorBlock_o *)auStack_88,pSVar7,"ItemButton","","DefaultPanel",
                 (MethodInfo *)0x0);
      aUStack_a8[1].r = fStack_38;
      aUStack_a8[1].g = fStack_34;
      aUStack_a8[0].r = UStack_48.r;
      aUStack_a8[0].g = UStack_48.g;
      aUStack_a8[0].b = UStack_48.b;
      aUStack_a8[0].a = UStack_48.a;
      UStack_b8.r = UStack_58.r;
      UStack_b8.g = UStack_58.g;
      UStack_b8.b = UStack_58.b;
      UStack_b8.a = UStack_58.a;
      auStack_118._80_4_ = UStack_68.r;
      auStack_118._84_4_ = UStack_68.g;
      auStack_118._88_4_ = UStack_68.b;
      auStack_118._92_4_ = UStack_68.a;
      auStack_118._64_8_ = pIStack_78;
      auStack_118._72_4_ = fStack_70;
      auStack_118._76_4_ = fStack_6c;
      auStack_118._48_8_ = auStack_88._0_8_;
      auStack_118._56_8_ = auStack_88._8_8_;
      value.fields.m_NormalColor.fields.b = (float)auStack_88._8_4_;
      value.fields.m_NormalColor.fields.a = (float)auStack_88._12_4_;
      value.fields.m_NormalColor.fields.r = (float)auStack_88._0_4_;
      value.fields.m_NormalColor.fields.g = (float)auStack_88._4_4_;
      value.fields.m_HighlightedColor.fields._0_8_ = pIStack_78;
      value.fields.m_HighlightedColor.fields.b = fStack_70;
      value.fields.m_HighlightedColor.fields.a = fStack_6c;
      value.fields.m_PressedColor.fields.r = UStack_68.r;
      value.fields.m_PressedColor.fields.g = UStack_68.g;
      value.fields.m_PressedColor.fields.b = UStack_68.b;
      value.fields.m_PressedColor.fields.a = UStack_68.a;
      value.fields.m_SelectedColor.fields.r = UStack_58.r;
      value.fields.m_SelectedColor.fields.g = UStack_58.g;
      value.fields.m_SelectedColor.fields.b = UStack_58.b;
      value.fields.m_SelectedColor.fields.a = UStack_58.a;
      value.fields.m_DisabledColor.fields.r = UStack_48.r;
      value.fields.m_DisabledColor.fields.g = UStack_48.g;
      value.fields.m_DisabledColor.fields.b = UStack_48.b;
      value.fields.m_DisabledColor.fields.a = UStack_48.a;
      value.fields.m_ColorMultiplier = fStack_38;
      value.fields.m_FadeDuration = fStack_34;
      in_stack_fffffffffffffe78 = (System_Collections_Generic_List_T__o *)auStack_88._0_8_;
      in_stack_fffffffffffffe80 = (Il2CppRGCTXData *)auStack_88._8_8_;
      in_stack_fffffffffffffe88 = pIStack_78;
      UnityEngine_UI_Selectable__set_colors(__this_05,value,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415a9a;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Text",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04415adb;
      pIVar3 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
      pSVar7 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar7,"ItemButton","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar9 = UVar12.fields.r;
      if (pIVar3 == (Il2CppObject *)0x0) goto label_04415a9f;
      (*pIVar3->klass->vtable[0x17].methodPtr)
                (fVar9,UVar12.fields.b,pIVar3,pIVar3->klass->vtable[0x17].method);
      pIVar3 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_05,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      fVar9 = (float)(*(__this->klass->vtable)._35_get_ItemButtonWidth.methodPtr)
                               (__this,(__this->klass->vtable)._35_get_ItemButtonWidth.method);
      fVar10 = (float)(*(__this->klass->vtable)._37_get_DeleteButtonSize.methodPtr)
                                (__this,(__this->klass->vtable)._37_get_DeleteButtonSize.method);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_04415ae0;
      (*pIVar3->klass->vtable[0x24].methodPtr)(fVar9 + fVar10 + 10.0,pIVar3);
      if ((UnityEngine_Component_o *)auStack_118._40_8_ == (UnityEngine_Component_o *)0x0) goto label_04415ae5;
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)auStack_118._40_8_,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_04415aea;
      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_04415aa9:
    il2cpp_runtime_helper_022b2c90();
label_04415aae:
    il2cpp_runtime_helper_022b2c90();
label_04415ab3:
    il2cpp_runtime_helper_022b2c90();
label_04415ab8:
    il2cpp_runtime_helper_022b2c90();
label_04415abd:
    il2cpp_runtime_helper_022b2c90();
label_04415ac2:
    il2cpp_runtime_helper_022b2c90();
label_04415ac7:
    il2cpp_runtime_helper_022b2c90();
label_04415acc:
    il2cpp_runtime_helper_022b2c90();
label_04415ad1:
    il2cpp_runtime_helper_022b2c90();
label_04415ad6:
    il2cpp_runtime_helper_022b2c90();
label_04415adb:
    il2cpp_runtime_helper_022b2c90();
label_04415ae0:
    il2cpp_runtime_helper_022b2c90();
label_04415ae5:
    il2cpp_runtime_helper_022b2c90();
label_04415aea:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) {
label_04415baa:
      __this_04.fields._8_8_ = in_stack_fffffffffffffe80;
      __this_04.fields._list = in_stack_fffffffffffffe78;
      __this_04.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_118)
      ;
      _Unwind_Resume(auVar11._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar1 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_fffffffffffffe80;
    __this_03.fields._list = in_stack_fffffffffffffe78;
    __this_03.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)auStack_118);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_04415baa;
    }
label_04415a53:
    pUVar4 = (pUStack_128->fields)._noItemsLabel;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive
                (pUVar4,(uint)(*(int *)&((Il2CppClass_1 *)auStack_118._32_8_)->namespaze < 1),
                 (MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.MapEditorAddComponentPanel$$OnItemClick
// il2cpp: void UI_MapEditorAddComponentPanel__OnItemClick (UI_MapEditorAddComponentPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4416610

void UI_MapEditorAddComponentPanel__OnItemClick
               (UI_MapEditorAddComponentPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__Type__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar5;
  undefined8 uVar6;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  Il2CppClass *value;
  UI_BasePanel_o *pUVar7;
  UI_CategoryPanel_o *__this_02;
  
  value = (Il2CppClass *)name;
  if (g_data_057ae617 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorAddComponentPopup);
    g_data_057ae617 = '\x01';
    method = extraout_RDX;
  }
  pUVar7 = (__this->fields).Parent;
  if (pUVar7 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorAddComponentPopup->_2).naturalAligment;
    value = TypeInfo_MapEditorAddComponentPopup;
    if (((pUVar7->klass->_2).naturalAligment < bVar1) ||
       ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorAddComponentPopup)) goto label_044166e4;
    if (g_data_057ae61f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value,TypeInfo_MapEditorAddComponentPopup,method);
      g_data_057ae61f = '\x01';
    }
    __this_00 = pUVar7[1].fields._categoryPanelTypes;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,MethodInfo_Void_set_Value);
      pUVar2 = pUVar7[1].fields.MaskBackground;
      value = (Il2CppClass *)name;
      if (pUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
        uVar3._0_4_ = (pUVar2->fields).m_Color.fields.r;
        uVar3._4_4_ = (pUVar2->fields).m_Color.fields.g;
        uVar4._0_4_ = (pUVar2->fields).m_RaycastTarget;
        uVar4._4_4_ = (pUVar2->fields).m_RaycastTargetCache;
        (*(code *)(pUVar2->fields).m_CancellationTokenSource)(uVar4,uVar3);
        UNRECOVERED_JUMPTABLE_00 = (pUVar7->klass->vtable)._22_Hide.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar7,(pUVar7->klass->vtable)._22_Hide.method,extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044166e4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae61f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae61f = '\x01';
  }
  __this_02 = (UI_CategoryPanel_o *)pUVar7[1].fields._categoryPanelTypes;
  if (__this_02 != (UI_CategoryPanel_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    pUVar2 = pUVar7[1].fields.MaskBackground;
    if (pUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
      uVar5._0_4_ = (pUVar2->fields).m_Color.fields.r;
      uVar5._4_4_ = (pUVar2->fields).m_Color.fields.g;
      uVar6._0_4_ = (pUVar2->fields).m_RaycastTarget;
      uVar6._4_4_ = (pUVar2->fields).m_RaycastTargetCache;
      (*(code *)(pUVar2->fields).m_CancellationTokenSource)(uVar6,uVar5);
      UNRECOVERED_JUMPTABLE_00 = (pUVar7->klass->vtable)._22_Hide.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pUVar7,(pUVar7->klass->vtable)._22_Hide.method,extraout_RDX_01,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae618 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae618 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
  __this_02[1].monitor = __this_01;
  il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPanel$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___ctor (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4416770

void UI_MapEditorAddComponentPanel___ctor(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae618 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae618 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._itemButtons = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._itemButtons);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


