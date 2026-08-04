// Type: UI.FeedPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/FeedPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/FeedPanel.cs
// --------------------------------

// UI.FeedPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_FeedPanel__get_ThemePanel (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x43bf490

System_String_o * UI_FeedPanel__get_ThemePanel(UI_FeedPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae3c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ChatPanel");
    g_data_057ae3c9 = '\x01';
  }
  return "ChatPanel";
}


// UI.FeedPanel$$Setup
// il2cpp: void UI_FeedPanel__Setup (UI_FeedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43bf4c0

void UI_FeedPanel__Setup(UI_FeedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  int32_t *piVar2;
  uint length;
  long lVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  UnityEngine_Vector2_o value;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  UI_FeedPanel_o *pUVar6;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_GameObject_o *pUVar7;
  UI_FeedPanel_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_RectTransform_o *__this_05;
  System_String_o *themePanel;
  MethodInfo *pMVar10;
  long *plVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UI_FeedPanel_o *__this_06;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar15;
  
  if (g_data_057ae3ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Content/Panel");
    il2cpp_runtime_helper_023445d0(&"Content");
    g_data_057ae3ca = '\x01';
  }
  __this_06 = __this;
  pUVar6 = (UI_FeedPanel_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar6 != (UI_FeedPanel_o *)0x0) &&
     (__this_04 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pUVar6,"Content/Panel",(MethodInfo *)0x0),
     __this_06 = pUVar6, __this_04 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._panel;
    (__this->fields)._panel = pUVar7;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    __this_06 = __this;
    pUVar6 = (UI_FeedPanel_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar6 != (UI_FeedPanel_o *)0x0) &&
       (pUVar8 = (UI_FeedPanel_o *)
                 UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"Content",(MethodInfo *)0x0)
       , __this_06 = pUVar6, pUVar8 != (UI_FeedPanel_o *)0x0)) {
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      __this_06 = pUVar8;
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x140), lVar3 != 0)) && (pIVar9 != (Il2CppObject *)0x0))
      {
        (*pIVar9->klass->vtable[0x26].methodPtr)((float)*(int *)(lVar3 + 0x14),pIVar9);
        __this_06 = __this;
        pUVar6 = (UI_FeedPanel_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 != (UI_FeedPanel_o *)0x0) {
          __this_05 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          __this_06 = pUVar6;
          if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x138), lVar3 != 0)) &&
             (__this_05 != (UnityEngine_RectTransform_o *)0x0)) {
            value.fields.y = 0.0;
            value.fields.x = (float)*(int *)(lVar3 + 0x14);
            UnityEngine_RectTransform__set_sizeDelta(__this_05,value,(MethodInfo *)0x0);
            pUVar7 = *ppUVar1;
            __this_06 = (UI_FeedPanel_o *)0x0;
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar6 = (UI_FeedPanel_o *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              themePanel = (System_String_o *)
                           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              pUVar8 = (UI_FeedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
              __this_06 = pUVar8;
              UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar8,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0)
              ;
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x138), lVar3 != 0)) &&
                 (pUVar7 = UI_ElementFactory__CreateHorizontalLine
                                     ((UnityEngine_Transform_o *)pUVar6,(UI_ElementStyle_o *)pUVar8,
                                      (float)*(int *)(lVar3 + 0x14),2.0,(MethodInfo *)0x0), __this_06 = pUVar6
                 , pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                pMVar10 = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                (__this->fields)._horizontalLine = (UnityEngine_Transform_o *)pMVar10;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._horizontalLine);
                UI_FeedPanel__Sync(__this,pMVar10);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3cb = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar4 = (__this_06->fields)._lines;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bf8b9;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff90,
             (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar14, __this_00.fields._list = pSVar13,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90), (char)bVar5 != '\0') {
    pUVar15 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar15;
  }
  __this_01.fields._8_8_ = pIVar14;
  __this_01.fields._list = pSVar13;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  do {
    pSVar4 = (__this_06->fields)._lines;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar2 = &(pSVar4->fields)._version;
      *piVar2 = *piVar2 + 1;
      length = (pSVar4->fields)._size;
      pMVar10 = (MethodInfo *)(ulong)length;
      (pSVar4->fields)._size = 0;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
        pMVar10 = extraout_RDX;
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar10 = extraout_RDX_00;
      }
      UI_FeedPanel__AddLines
                (__this_06,
                 *(System_Collections_Generic_List_string__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x60),
                 pMVar10);
      return;
    }
label_043bf8b9:
    auVar12 = il2cpp_runtime_helper_022b2c90();
    if (auVar12._8_4_ != 1) goto label_043bf903;
    plVar11 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar3 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar14;
    __this_02.fields._list = pSVar13;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_043bf903:
  __this_03.fields._8_8_ = pIVar14;
  __this_03.fields._list = pSVar13;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar12._0_8_);
}


// UI.FeedPanel$$Sync
// il2cpp: void UI_FeedPanel__Sync (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x43bf750

void UI_FeedPanel__Sync(UI_FeedPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar9;
  
  if (g_data_057ae3cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3cb = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._lines;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bf8b9;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar8, __this_00.fields._list = pSVar7,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar4 != '\0') {
    pUVar9 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar9;
  }
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._list = pSVar7;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
    pSVar2 = (__this->fields)._lines;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      method_00 = (MethodInfo *)(ulong)length;
      (pSVar2->fields)._size = 0;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      UI_FeedPanel__AddLines
                (__this,*(System_Collections_Generic_List_string__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0x60)
                 ,method_00);
      return;
    }
label_043bf8b9:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) goto label_043bf903;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_043bf903:
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.FeedPanel$$AddLine
// il2cpp: void UI_FeedPanel__AddLine (UI_FeedPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x43bfb20

void UI_FeedPanel__AddLine(UI_FeedPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int32_t fontSize;
  int iVar3;
  UnityEngine_GameObject_array *pUVar4;
  long lVar5;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UI_FeedPanel_o *__this_02;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Object_o *obj;
  MethodInfo *extraout_RDX;
  int index;
  UI_FeedPanel_o *pUVar9;
  System_String_o **panel;
  System_Collections_Generic_List_GameObject__o *pSVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Color_o UVar12;
  float fStack_74;
  
  if (g_data_057ae3cc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3cc = '\x01';
    method = extraout_RDX;
  }
  pSVar10 = (__this->fields)._lines;
  pUVar9 = __this;
  method_00 = (MethodInfo *)UI_FeedPanel__CreateLine(__this,line,method);
  lVar5 = MethodInfo_Void_Add;
  if (pSVar10 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar10->fields)._items;
    if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (pSVar10->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (pSVar10->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_00;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)method_00,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_FeedPanel__ClearExcessLines(__this,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  panel = (System_String_o **)pUVar9;
  if (g_data_057ae3cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    panel = &"Default";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3cf = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x148), lVar5 != 0)) {
    fontSize = *(int32_t *)(lVar5 + 0x14);
    themePanel = (System_String_o *)
                 (*(pUVar9->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (pUVar9,(pUVar9->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pUVar7 = (pUVar9->fields)._panel;
    panel = (System_String_o **)(UI_FeedPanel_o *)0x0;
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      panel = (System_String_o **)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      __this_02 = (UI_FeedPanel_o *)
                  UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)panel,__this_01,line,0,3,(MethodInfo *)0x0);
      if ((__this_02 != (UI_FeedPanel_o *)0x0) &&
         (pIVar6 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text),
         panel = (System_String_o **)__this_02, __this_01 != (UI_ElementStyle_o *)0x0)) {
        panel = (System_String_o **)(__this_01->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar12 = UI_UIManager__GetThemeColor
                           ((System_String_o *)panel,"TextColor","Default","DefaultPanel",(MethodInfo *)0x0)
        ;
        if (pIVar6 != (Il2CppObject *)0x0) {
          (*pIVar6->klass->vtable[0x17].methodPtr)(UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar6);
          __this_00 = (pUVar9->fields)._horizontalLine;
          panel = (System_String_o **)0x0;
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae3ce = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x140), lVar5 != 0)) &&
     (pSVar10 = (((UI_FeedPanel_o *)panel)->fields)._lines,
     pSVar10 != (System_Collections_Generic_List_GameObject__o *)0x0)) {
    iVar3 = *(int *)(lVar5 + 0x14);
    index = 0;
    fStack_74 = 0.0;
    while (index < (pSVar10->fields)._size) {
      pUVar7 = (UnityEngine_GameObject_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar10,index,MethodInfo_GameObject_get_Item);
      if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar8 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform),
         pUVar8 == (UnityEngine_RectTransform_o *)0x0)) goto label_043bffb8;
      UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar8,(MethodInfo *)0x0);
      fStack_74 = fStack_74 + UVar11.fields.y;
      index = index + 1;
      pSVar10 = (((UI_FeedPanel_o *)panel)->fields)._lines;
      if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bffb8;
    }
    fStack_74 = fStack_74 - (float)iVar3;
    if (fStack_74 <= 0.0) {
      return;
    }
    if (pSVar10 != (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bff10;
  }
  goto label_043bffb8;
  while( true ) {
    UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar8,(MethodInfo *)0x0);
    fStack_74 = fStack_74 - UVar11.fields.y;
    if (fStack_74 <= 0.0) {
      return;
    }
    pSVar10 = (((UI_FeedPanel_o *)panel)->fields)._lines;
    if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar10,0,MethodInfo_GameObject_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    pSVar10 = (((UI_FeedPanel_o *)panel)->fields)._lines;
    if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar10,0,MethodInfo_Void_RemoveAt);
    pSVar10 = (((UI_FeedPanel_o *)panel)->fields)._lines;
    if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_043bff10:
    if ((pSVar10->fields)._size < 1) {
      return;
    }
    pUVar7 = (UnityEngine_GameObject_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar10,0,MethodInfo_GameObject_get_Item);
    if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar8 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform),
       pUVar8 == (UnityEngine_RectTransform_o *)0x0)) break;
  }
label_043bffb8:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.FeedPanel$$AddLines
// il2cpp: void UI_FeedPanel__AddLines (UI_FeedPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x43bf940

void UI_FeedPanel__AddLines
               (UI_FeedPanel_o *__this,System_Collections_Generic_List_string__o *lines,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *item;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  System_String_o *text;
  
  if (g_data_057ae3cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ae3cd = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  text = (System_String_o *)0x0;
  if (lines != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)lines,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    while (__this_01.fields._8_8_ = pIVar9, __this_01.fields._list = pSVar8,
          __this_01.fields._current = (Il2CppObject *)text,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar5 != '\0') {
      __this_00 = (__this->fields)._lines;
      item = UI_FeedPanel__CreateLine(__this,text,method_00);
      lVar4 = MethodInfo_Void_Add;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_043bfa8b:
        il2cpp_runtime_helper_022b2c90();
        goto label_043bfa90;
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 == (UnityEngine_GameObject_array *)0x0) goto label_043bfa8b;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = pSVar8;
    __this_02.fields._current = (Il2CppObject *)text;
    method_01 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
label_043bfa69:
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    UI_FeedPanel__ClearExcessLines(__this,method_01);
    return;
  }
label_043bfa90:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar4 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = pSVar8;
    __this_03.fields._current = (Il2CppObject *)text;
    method_01 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar4 == 0) goto label_043bfa69;
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = pSVar8;
  __this_04.fields._current = (Il2CppObject *)text;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar7._0_8_);
}


// UI.FeedPanel$$ClearExcessLines
// il2cpp: void UI_FeedPanel__ClearExcessLines (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x43bfda0

void UI_FeedPanel__ClearExcessLines(UI_FeedPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Object_o *obj;
  int index;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  UnityEngine_Vector2_o UVar6;
  float local_34;
  
  if (g_data_057ae3ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae3ce = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x140), lVar2 != 0)) &&
     (pSVar5 = (__this->fields)._lines, pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0)) {
    iVar1 = *(int *)(lVar2 + 0x14);
    index = 0;
    local_34 = 0.0;
    while (index < (pSVar5->fields)._size) {
      pUVar3 = (UnityEngine_GameObject_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GameObject_get_Item);
      if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto label_043bffb8;
      UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      local_34 = local_34 + UVar6.fields.y;
      index = index + 1;
      pSVar5 = (__this->fields)._lines;
      if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bffb8;
    }
    local_34 = local_34 - (float)iVar1;
    if (local_34 <= 0.0) {
      return;
    }
    if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bff10;
  }
  goto label_043bffb8;
  while( true ) {
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    local_34 = local_34 - UVar6.fields.y;
    if (local_34 <= 0.0) {
      return;
    }
    pSVar5 = (__this->fields)._lines;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar5,0,MethodInfo_GameObject_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._lines;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar5,0,MethodInfo_Void_RemoveAt);
    pSVar5 = (__this->fields)._lines;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_043bff10:
    if ((pSVar5->fields)._size < 1) {
      return;
    }
    pUVar3 = (UnityEngine_GameObject_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar5,0,MethodInfo_GameObject_get_Item);
    if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) break;
  }
label_043bffb8:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.FeedPanel$$CreateLine
// il2cpp: UnityEngine_GameObject_o* UI_FeedPanel__CreateLine (UI_FeedPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x43bfbd0

UnityEngine_GameObject_o *
UI_FeedPanel__CreateLine(UI_FeedPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  int iVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UI_FeedPanel_o *__this_02;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_GameObject_o *extraout_RAX;
  UnityEngine_GameObject_o *extraout_RAX_00;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *extraout_RAX_01;
  MethodInfo *extraout_RDX;
  int index;
  System_String_o **panel;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Color_o UVar8;
  float fStack_5c;
  
  panel = (System_String_o **)__this;
  if (g_data_057ae3cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    panel = &"Default";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3cf = '\x01';
    method = extraout_RDX;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x148), lVar2 != 0)) {
    fontSize = *(int32_t *)(lVar2 + 0x14);
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._panel;
    panel = (System_String_o **)0x0;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      panel = (System_String_o **)UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      __this_02 = (UI_FeedPanel_o *)
                  UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)panel,__this_01,text,0,3,(MethodInfo *)0x0);
      if ((__this_02 != (UI_FeedPanel_o *)0x0) &&
         (panel = (System_String_o **)__this_02,
         pIVar3 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text),
         __this_01 != (UI_ElementStyle_o *)0x0)) {
        panel = (System_String_o **)(__this_01->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar8 = UI_UIManager__GetThemeColor
                          ((System_String_o *)panel,"TextColor","Default","DefaultPanel",(MethodInfo *)0x0);
        if (pIVar3 != (Il2CppObject *)0x0) {
          (*pIVar3->klass->vtable[0x17].methodPtr)(UVar8.fields._0_8_,UVar8.fields._8_8_,pIVar3);
          __this_00 = (__this->fields)._horizontalLine;
          panel = (System_String_o **)0x0;
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
            return (UnityEngine_GameObject_o *)__this_02;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae3ce = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar2 != 0) &&
      (pUVar4 = *(UnityEngine_GameObject_o **)(lVar2 + 0x140), pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar6 = (((UI_FeedPanel_o *)panel)->fields)._lines,
     pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0)) {
    iVar1 = *(int *)((long)&(pUVar4->fields).m_CachedPtr + 4);
    index = 0;
    fStack_5c = 0.0;
    while (index < (pSVar6->fields)._size) {
      pUVar4 = (UnityEngine_GameObject_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar6,index,MethodInfo_GameObject_get_Item);
      if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar5 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform),
         pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto label_043bffb8;
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
      fStack_5c = fStack_5c + UVar7.fields.y;
      index = index + 1;
      pSVar6 = (((UI_FeedPanel_o *)panel)->fields)._lines;
      pUVar4 = extraout_RAX;
      if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bffb8;
    }
    fStack_5c = fStack_5c - (float)iVar1;
    if (fStack_5c <= 0.0) {
      return pUVar4;
    }
    if (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bff10;
  }
  goto label_043bffb8;
  while( true ) {
    UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
    fStack_5c = fStack_5c - UVar7.fields.y;
    if (fStack_5c <= 0.0) {
      return extraout_RAX_00;
    }
    pSVar6 = (((UI_FeedPanel_o *)panel)->fields)._lines;
    if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar6,0,MethodInfo_GameObject_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    pSVar6 = (((UI_FeedPanel_o *)panel)->fields)._lines;
    if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar6,0,MethodInfo_Void_RemoveAt);
    pSVar6 = (((UI_FeedPanel_o *)panel)->fields)._lines;
    pUVar4 = extraout_RAX_01;
    if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_043bff10:
    if ((pSVar6->fields)._size < 1) {
      return pUVar4;
    }
    pUVar4 = (UnityEngine_GameObject_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar6,0,MethodInfo_GameObject_get_Item);
    if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar5 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) break;
  }
label_043bffb8:
  pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar4;
}


// UI.FeedPanel$$.ctor
// il2cpp: void UI_FeedPanel___ctor (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x43bffd0

void UI_FeedPanel___ctor(UI_FeedPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_List_GameObject__o *__this_03;
  
  if (g_data_057ae3d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae3d0 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._lines = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._lines,__this_03);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


