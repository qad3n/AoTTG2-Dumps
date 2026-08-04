// Type: UI.CustomAssetVideoUrlPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/CustomAssetVideoUrlPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.CustomAssetVideoUrlPopup$$get_Title
// il2cpp: System_String_o* UI_CustomAssetVideoUrlPopup__get_Title (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba7f0

System_String_o *
UI_CustomAssetVideoUrlPopup__get_Title(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae3a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae3a6 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CustomAssetVideoUrlPopup$$get_Width
// il2cpp: float UI_CustomAssetVideoUrlPopup__get_Width (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba850

float UI_CustomAssetVideoUrlPopup__get_Width(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.CustomAssetVideoUrlPopup$$get_Height
// il2cpp: float UI_CustomAssetVideoUrlPopup__get_Height (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba860

float UI_CustomAssetVideoUrlPopup__get_Height(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.CustomAssetVideoUrlPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_VerticalPadding (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba870

int32_t UI_CustomAssetVideoUrlPopup__get_VerticalPadding
                  (UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetVideoUrlPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_HorizontalPadding (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba880

int32_t UI_CustomAssetVideoUrlPopup__get_HorizontalPadding
                  (UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetVideoUrlPopup$$get_PanelAlignment
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_PanelAlignment (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba890

int32_t UI_CustomAssetVideoUrlPopup__get_PanelAlignment
                  (UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.CustomAssetVideoUrlPopup$$get_ScrollBar
// il2cpp: bool UI_CustomAssetVideoUrlPopup__get_ScrollBar (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43ba8a0

bool_conflict
UI_CustomAssetVideoUrlPopup__get_ScrollBar(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CustomAssetVideoUrlPopup$$Setup
// il2cpp: void UI_CustomAssetVideoUrlPopup__Setup (UI_CustomAssetVideoUrlPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43ba8b0

void UI_CustomAssetVideoUrlPopup__Setup
               (UI_CustomAssetVideoUrlPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  _union_249689 parent_00;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  int32_t fontSize;
  int iVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar7;
  Il2CppRGCTXData *onClick;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_UI_Text_o *pUVar8;
  Il2CppObject *pIVar9;
  System_Text_StringBuilder_o *__this_06;
  undefined8 uVar10;
  UnityEngine_RectTransform_o *pUVar11;
  long *plVar12;
  undefined8 extraout_RDX;
  UI_CustomAssetVideoUrlPopup_o *__this_07;
  undefined4 uVar13;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  Il2CppType *pIVar16;
  System_String_o *value;
  undefined1 auStack_80 [16];
  System_String_o *pSStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249689 _Stack_60;
  UI_CustomAssetVideoUrlPopup_o *pUStack_58;
  undefined8 *puStack_50;
  UI_ElementStyle_o *pUStack_48;
  System_String_o *pSStack_40;
  UnityEngine_UI_Text_o *pUStack_38;
  
  if (g_data_057ae3a7 == '\0') {
    pSStack_40 = (System_String_o *)0x43ba8da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_40 = (System_String_o *)0x43ba8e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_0);
    pSStack_40 = (System_String_o *)0x43ba8f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_1);
    pSStack_40 = (System_String_o *)0x43ba8fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_2);
    pSStack_40 = (System_String_o *)0x43ba90a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pSStack_40 = (System_String_o *)0x43ba916;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pSStack_40 = (System_String_o *)0x43ba922;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_40 = (System_String_o *)0x43ba92e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStack_40 = (System_String_o *)0x43ba93a;
    il2cpp_runtime_helper_023445d0(&"Confirm");
    pSStack_40 = (System_String_o *)0x43ba946;
    il2cpp_runtime_helper_023445d0(&"Quit");
    pSStack_40 = (System_String_o *)0x43ba952;
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae3a7 = '\x01';
  }
  pSStack_40 = (System_String_o *)0x43ba966;
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x43ba97a;
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pSStack_40 = (System_String_o *)0x43ba98c;
  pUStack_38 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSStack_40 = (System_String_o *)0x43ba9b2;
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pUStack_38,0x18,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x43ba9c6;
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSStack_40 = (System_String_o *)0x43ba9dc;
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pSStack_40 = (System_String_o *)0x43ba9e7;
  __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSStack_40 = (System_String_o *)0x43baa09;
  UI_ElementStyle___ctor(__this_04,fontSize,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pSStack_40 = (System_String_o *)0x43baa25;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_String_o *)0x43baa36;
  pSVar6 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x43baa48;
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pSStack_40 = (System_String_o *)0x43baa62;
  UnityEngine_Events_UnityAction___ctor();
  pSStack_40 = (System_String_o *)0x43baa79;
  UI_ElementFactory__CreateTextButton(pUVar1,__this_04,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSStack_40 = (System_String_o *)0x43baa8e;
  pSVar6 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x43baa99;
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pSStack_40 = (System_String_o *)0x43baab3;
  UnityEngine_Events_UnityAction___ctor();
  pSStack_40 = (System_String_o *)0x43baaca;
  UI_ElementFactory__CreateTextButton(pUVar1,__this_04,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  parent_00 = (_union_249689)(__this->fields).BottomBar;
  pSStack_40 = (System_String_o *)0x43baadf;
  pSVar6 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pSStack_40 = (System_String_o *)0x43baaea;
  onClick = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pSStack_40 = (System_String_o *)0x43bab04;
  UnityEngine_Events_UnityAction___ctor();
  pSStack_40 = (System_String_o *)0x43bab1b;
  UI_ElementFactory__CreateTextButton
            (parent_00.genericMethod,__this_04,pSVar6,0.0,(UnityEngine_Events_UnityAction_o *)onClick,
             (MethodInfo *)0x0);
  __this_07 = (UI_CustomAssetVideoUrlPopup_o *)(__this->fields).SinglePanel;
  pSStack_40 = (System_String_o *)0x43bab4b;
  pUVar8 = pUStack_38;
  __this_05 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)__this_07,(UI_ElementStyle_o *)pUStack_38,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
  if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
    pSStack_40 = (System_String_o *)0x43bab66;
    pUVar8 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(__this_05,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._label = pUVar8;
    pSStack_40 = (System_String_o *)0x43bab7c;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._label);
    pUVar2 = (__this->fields)._label;
    __this_07 = (UI_CustomAssetVideoUrlPopup_o *)0x0;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      pSStack_40 = (System_String_o *)0x43bab97;
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      pSStack_40 = (System_String_o *)0x43babae;
      uVar13 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                         (__this,(__this->klass->vtable)._33_GetWidth.method);
      pUStack_38 = (UnityEngine_UI_Text_o *)CONCAT44(pUStack_38._4_4_,uVar13);
      pUVar8 = (UnityEngine_UI_Text_o *)(__this->klass->vtable)._10_get_HorizontalPadding.method;
      pSStack_40 = (System_String_o *)0x43babc7;
      __this_07 = __this;
      iVar4 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)();
      onClick = (Il2CppRGCTXData *)0x0;
      if (pIVar9 != (Il2CppObject *)0x0) {
        vtableDispatch = pIVar9->klass->vtable[0x24].methodPtr;
        (*vtableDispatch)
                  (pUStack_38._0_4_ - (float)(iVar4 * 2),pIVar9,pIVar9->klass->vtable[0x24].method,
                   extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  pSStack_40 = (System_String_o *)0x43bac04;
  il2cpp_runtime_helper_022b2c90();
  puStack_50 = &TypeInfo_UnityAction;
  pIStack_68 = onClick;
  _Stack_60 = parent_00;
  pUStack_58 = __this;
  pUStack_48 = __this_04;
  pSStack_40 = pSVar6;
  if (g_data_057ae3a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"This custom content contains video player(s) that will connect to the following URL(s):\n");
    g_data_057ae3a8 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar16 = (Il2CppType *)0x0;
  pSVar6 = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_07,(MethodInfo *)0x0);
  *(undefined1 *)&(__this_07->fields).Done = 0;
  (__this_07->fields).Result = 0;
  pUVar2 = (__this_07->fields)._label;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar2,0,(MethodInfo *)0x0);
    __this = (UI_CustomAssetVideoUrlPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this,(MethodInfo *)0x0);
    if ((__this != (UI_CustomAssetVideoUrlPopup_o *)0x0) &&
       (System_Text_StringBuilder__Append_3b03f90
                  ((System_Text_StringBuilder_o *)__this,"This custom content contains video player(s) that will connect to the following URL(s):\n",(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_UI_Text_o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
                 (System_Collections_Generic_List_object__o *)pUVar8,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_80._0_8_;
      pIVar16 = (Il2CppType *)auStack_80._8_8_;
      value = pSStack_70;
      while( true ) {
        __this_00.fields._8_8_ = pIVar16;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
        __this_00.fields._current = (Il2CppObject *)value;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
        if ((char)bVar5 == '\0') {
          __this_01.fields._8_8_ = pIVar16;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
          __this_01.fields._current = (Il2CppObject *)value;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
          pSVar6 = value;
          goto label_043badbd;
        }
        pSVar6 = value;
        __this_06 = System_Text_StringBuilder__Append_3b03f90
                              ((System_Text_StringBuilder_o *)__this,"\n",(MethodInfo *)0x0);
        if (__this_06 == (System_Text_StringBuilder_o *)0x0) break;
        System_Text_StringBuilder__Append_3b03f90(__this_06,value,(MethodInfo *)0x0);
        value = pSVar6;
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_043bae69:
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar14 = il2cpp_runtime_helper_022b2fd0();
    if (auVar14._8_4_ != 1) {
label_043baecc:
      __this_03.fields._8_8_ = pIVar16;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
      __this_03.fields._current = (Il2CppObject *)pSVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
      _Unwind_Resume(auVar14._0_8_);
    }
    plVar12 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar3 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar16;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
    __this_02.fields._current = (Il2CppObject *)pSVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_043baecc;
    }
label_043badbd:
    pUVar8 = (__this_07->fields)._label;
    uVar10 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_043bae69;
    (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
              (pUVar8,uVar10,(pUVar8->klass->vtable)._75_set_text.method);
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar8 = (__this_07->fields)._label;
    if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_043bae69;
    pUVar11 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)pUVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar11,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_RectTransform_o *)(__this_07->fields).SinglePanel;
    if ((pUVar11 == (UnityEngine_RectTransform_o *)0x0) || (pUVar11->klass == TypeInfo_RectTransform)) {
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar11,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.CustomAssetVideoUrlPopup$$Show
// il2cpp: void UI_CustomAssetVideoUrlPopup__Show (UI_CustomAssetVideoUrlPopup_o* __this, System_Collections_Generic_List_string__o* urls, const MethodInfo* method);
// 0x43bac10

void UI_CustomAssetVideoUrlPopup__Show
               (UI_CustomAssetVideoUrlPopup_o *__this,System_Collections_Generic_List_string__o *urls,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  System_Text_StringBuilder_o *__this_04;
  undefined8 uVar4;
  UnityEngine_RectTransform_o *pUVar5;
  long *plVar6;
  System_Text_StringBuilder_o *unaff_R13;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  System_String_o *pSVar10;
  System_String_o *value;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ae3a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"This custom content contains video player(s) that will connect to the following URL(s):\n");
    g_data_057ae3a8 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pSVar10 = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  *(undefined1 *)&(__this->fields).Done = 0;
  (__this->fields).Result = 0;
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar1,0,(MethodInfo *)0x0);
    unaff_R13 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(unaff_R13,(MethodInfo *)0x0);
    if ((unaff_R13 != (System_Text_StringBuilder_o *)0x0) &&
       (System_Text_StringBuilder__Append_3b03f90(unaff_R13,"This custom content contains video player(s) that will connect to the following URL(s):\n",(MethodInfo *)0x0),
       urls != (System_Collections_Generic_List_string__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)urls,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar9 = (Il2CppType *)local_48._8_8_;
      value = local_38;
      while( true ) {
        __this_00.fields._8_8_ = pIVar9;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_00.fields._current = (Il2CppObject *)value;
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar3 == '\0') {
          __this_01.fields._8_8_ = pIVar9;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
          __this_01.fields._current = (Il2CppObject *)value;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          pSVar10 = value;
          goto label_043badbd;
        }
        pSVar10 = value;
        __this_04 = System_Text_StringBuilder__Append_3b03f90(unaff_R13,"\n",(MethodInfo *)0x0);
        if (__this_04 == (System_Text_StringBuilder_o *)0x0) break;
        System_Text_StringBuilder__Append_3b03f90(__this_04,value,(MethodInfo *)0x0);
        value = pSVar10;
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_043bae69:
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar7 = il2cpp_runtime_helper_022b2fd0();
    if (auVar7._8_4_ != 1) {
label_043baecc:
      __this_03.fields._8_8_ = pIVar9;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_03.fields._current = (Il2CppObject *)pSVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_043baecc;
    }
label_043badbd:
    pUVar1 = (__this->fields)._label;
    uVar4 = (*(unaff_R13->klass->vtable)._3_ToString.methodPtr)
                      (unaff_R13,(unaff_R13->klass->vtable)._3_ToString.method);
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_043bae69;
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,uVar4,(pUVar1->klass->vtable)._75_set_text.method);
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_043bae69;
    pUVar5 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_RectTransform_o *)(__this->fields).SinglePanel;
    if ((pUVar5 == (UnityEngine_RectTransform_o *)0x0) || (pUVar5->klass == TypeInfo_RectTransform)) {
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.CustomAssetVideoUrlPopup$$OnButtonClick
// il2cpp: void UI_CustomAssetVideoUrlPopup__OnButtonClick (UI_CustomAssetVideoUrlPopup_o* __this, int32_t result, const MethodInfo* method);
// 0x43baf10

void UI_CustomAssetVideoUrlPopup__OnButtonClick
               (UI_CustomAssetVideoUrlPopup_o *__this,int32_t result,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae3a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3a9 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).Result = result;
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method,method);
  if (result == 3) {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.CustomAssetVideoUrlPopup$$.ctor
// il2cpp: void UI_CustomAssetVideoUrlPopup___ctor (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43baf90

void UI_CustomAssetVideoUrlPopup___ctor(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__17_0
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__17_0 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43bafa0

void UI_CustomAssetVideoUrlPopup___Setup_b__17_0(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae3a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3a9 = '\x01';
    in_RDX = extraout_RDX;
  }
  (__this->fields).Result = 1;
  *(undefined1 *)&(__this->fields).Done = 1;
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__17_1
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__17_1 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43baff0

void UI_CustomAssetVideoUrlPopup___Setup_b__17_1(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae3a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3a9 = '\x01';
    in_RDX = extraout_RDX;
  }
  (__this->fields).Result = 2;
  *(undefined1 *)&(__this->fields).Done = 1;
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__17_2
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__17_2 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x43bb040

void UI_CustomAssetVideoUrlPopup___Setup_b__17_2(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae3a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3a9 = '\x01';
  }
  (__this->fields).Result = 3;
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  if (*(int *)(TypeInfo_InGameManager + 0xe4) != 0) {
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


