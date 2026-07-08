// Type: UI.FeedPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/FeedPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/FeedPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.FeedPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_FeedPanel__get_ThemePanel (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x40ad3a0

System_String_o * UI_FeedPanel__get_ThemePanel(UI_FeedPanel_o *__this,MethodInfo *method)

{
  if (DAT_05704638 == '\0') {
    il2cpp_init_method_metadata(&"ChatPanel");
    DAT_05704638 = '\x01';
  }
  return "ChatPanel";
}


// UI.FeedPanel$$Setup
// il2cpp: void UI_FeedPanel__Setup (UI_FeedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40ad3d0

void UI_FeedPanel__Setup(UI_FeedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  long lVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05704639 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Content/Panel");
    il2cpp_init_method_metadata(&"Content");
    DAT_05704639 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      ppUVar1 = &(__this->fields)._panel;
      (__this->fields)._panel = pUVar4;
      il2cpp_runtime_glue(ppUVar1);
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pIVar5 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x140), lVar2 != 0)) &&
             (pIVar5 != (Il2CppObject *)0x0)) {
            (*pIVar5->klass->vtable[0x26].methodPtr)((float)*(int *)(lVar2 + 0x14),pIVar5);
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
              lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) &&
                 (__this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                value.fields.y = 0.0;
                value.fields.x = (float)*(int *)(lVar2 + 0x14);
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
                pUVar4 = *ppUVar1;
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                  themePanel = (System_String_o *)
                               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                  UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
                  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x138), lVar2 != 0)) {
                    pUVar4 = UI_ElementFactory__CreateHorizontalLine
                                       (pUVar3,__this_01,(float)*(int *)(lVar2 + 0x14),2.0,
                                        (MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      method_00 = (MethodInfo *)
                                  UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                      (__this->fields)._horizontalLine = (UnityEngine_Transform_o *)method_00;
                      il2cpp_runtime_glue(&(__this->fields)._horizontalLine);
                      UI_FeedPanel__Sync(__this,method_00);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.FeedPanel$$Sync
// il2cpp: void UI_FeedPanel__Sync (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x40ad660

void UI_FeedPanel__Sync(UI_FeedPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar6;
  
  if (DAT_0570463a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570463a = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._lines;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      __this_00.fields._8_8_ = pIVar5;
      __this_00.fields._list = pSVar4;
      __this_00.fields._current = (Il2CppObject *)obj;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') break;
      pUVar6 = obj;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      obj = pUVar6;
    }
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
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
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      UI_FeedPanel__AddLines
                (__this,*(System_Collections_Generic_List_string__o **)
                         (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x60),method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.FeedPanel$$AddLine
// il2cpp: void UI_FeedPanel__AddLine (UI_FeedPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x40ada30

void UI_FeedPanel__AddLine(UI_FeedPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570463b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_0570463b = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (__this->fields)._lines;
  method_00 = (MethodInfo *)UI_FeedPanel__CreateLine(__this,line,method);
  lVar4 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_00;
        il2cpp_runtime_glue();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)method_00,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_FeedPanel__ClearExcessLines(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.FeedPanel$$AddLines
// il2cpp: void UI_FeedPanel__AddLines (UI_FeedPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x40ad850

void UI_FeedPanel__AddLines
               (UI_FeedPanel_o *__this,System_Collections_Generic_List_string__o *lines,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *item;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  System_String_o *text;
  
  if (DAT_0570463c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    DAT_0570463c = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  text = (System_String_o *)0x0;
  if (lines != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)lines,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    while( true ) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = pSVar6;
      __this_01.fields._current = (Il2CppObject *)text;
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._list = pSVar6;
        __this_02.fields._current = (Il2CppObject *)text;
        method_01 = MethodInfo_Void_Dispose;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        UI_FeedPanel__ClearExcessLines(__this,method_01);
        return;
      }
      __this_00 = (__this->fields)._lines;
      item = UI_FeedPanel__CreateLine(__this,text,method_00);
      lVar4 = MethodInfo_Void_Add;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.FeedPanel$$ClearExcessLines
// il2cpp: void UI_FeedPanel__ClearExcessLines (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x40adcb0

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
  
  if (DAT_0570463d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570463d = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x140), lVar2 != 0)) &&
     (pSVar5 = (__this->fields)._lines,
     pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0)) {
    iVar1 = *(int *)(lVar2 + 0x14);
    index = 0;
    local_34 = 0.0;
    while (index < (pSVar5->fields)._size) {
      pUVar3 = (UnityEngine_GameObject_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GameObject_get_Item);
      if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_040adec8;
      UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      local_34 = local_34 + UVar6.fields.y;
      index = index + 1;
      pSVar5 = (__this->fields)._lines;
      if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_040adec8;
    }
    local_34 = local_34 - (float)iVar1;
    if (local_34 <= 0.0) {
      return;
    }
    if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_040ade20;
  }
  goto LAB_040adec8;
  while( true ) {
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    local_34 = local_34 - UVar6.fields.y;
    if (local_34 <= 0.0) {
      return;
    }
    pSVar5 = (__this->fields)._lines;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar5,0,MethodInfo_GameObject_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._lines;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    System_Collections_Generic_List<object>__RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar5,0,MethodInfo_Void_RemoveAt);
    pSVar5 = (__this->fields)._lines;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
LAB_040ade20:
    if ((pSVar5->fields)._size < 1) {
      return;
    }
    pUVar3 = (UnityEngine_GameObject_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar5,0,MethodInfo_GameObject_get_Item);
    if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) break;
  }
LAB_040adec8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.FeedPanel$$CreateLine
// il2cpp: UnityEngine_GameObject_o* UI_FeedPanel__CreateLine (UI_FeedPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x40adae0

UnityEngine_GameObject_o *
UI_FeedPanel__CreateLine(UI_FeedPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  long lVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o UVar6;
  
  if (DAT_0570463e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Default");
    DAT_0570463e = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x148), lVar1 != 0)) {
    fontSize = *(int32_t *)(lVar1 + 0x14);
    pSVar2 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._panel;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_00,text,0,3,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pIVar5 = UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
        if (__this_00 != (UI_ElementStyle_o *)0x0) {
          pSVar2 = (__this_00->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UVar6 = UI_UIManager__GetThemeColor
                            (pSVar2,"TextColor","Default","DefaultPanel",(MethodInfo *)0x0);
          if (pIVar5 != (Il2CppObject *)0x0) {
            (*pIVar5->klass->vtable[0x17].methodPtr)(UVar6.fields._0_8_,UVar6.fields._8_8_,pIVar5);
            pUVar3 = (__this->fields)._horizontalLine;
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
              return pUVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.FeedPanel$$.ctor
// il2cpp: void UI_FeedPanel___ctor (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x40adee0

void UI_FeedPanel___ctor(UI_FeedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_0570463f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_0570463f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._lines = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._lines);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


