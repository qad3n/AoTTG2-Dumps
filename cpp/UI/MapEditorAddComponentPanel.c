// Type: UI.MapEditorAddComponentPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorAddComponentPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4102130

void UI_MapEditorAddComponentPanel_<>c__DisplayClass21_0___ctor
               (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$<CreateList>b__0
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___CreateList_b__0 (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4102320

void UI_MapEditorAddComponentPanel_<>c__DisplayClass21_0__<CreateList>b__0
               (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  System_Collections_Generic_Dictionary_string__Type__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppMethodPointer vtable_dispatch;
  UI_MapEditorAddComponentPanel_o *pUVar6;
  System_String_o *value;
  undefined8 extraout_RDX;
  
  pUVar6 = (__this->fields).__4__this;
  if (pUVar6 == (UI_MapEditorAddComponentPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value = (__this->fields).item;
  if (DAT_0570487b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorAddComponentPopup);
    DAT_0570487b = '\x01';
  }
  pUVar2 = (pUVar6->fields).Parent;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorAddComponentPopup->_2).naturalAligment;
    if (((pUVar2->klass->_2).naturalAligment < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorAddComponentPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar2);
    }
    if (DAT_05704883 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
      DAT_05704883 = '\x01';
    }
    __this_00 = pUVar2[1].fields._categoryPanelTypes;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      pUVar3 = pUVar2[1].fields.MaskBackground;
      if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
        uVar4._0_4_ = (pUVar3->fields).m_Color.fields.r;
        uVar4._4_4_ = (pUVar3->fields).m_Color.fields.g;
        uVar5._0_4_ = (pUVar3->fields).m_RaycastTarget;
        uVar5._4_4_ = (pUVar3->fields).m_RaycastTargetCache;
        (*(code *)(pUVar3->fields).m_CancellationTokenSource)(uVar5,uVar4);
        vtable_dispatch = (pUVar2->klass->vtable)._22_Hide.methodPtr;
        (*vtable_dispatch)
                  (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddComponentPanel__get_ScrollBar (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4100950

bool_conflict
UI_MapEditorAddComponentPanel__get_ScrollBar
          (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddComponentPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_HorizontalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4100960

int32_t UI_MapEditorAddComponentPanel__get_HorizontalPadding
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_VerticalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4100970

int32_t UI_MapEditorAddComponentPanel__get_VerticalPadding
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.MapEditorAddComponentPanel$$get_ItemButtonWidth
// il2cpp: float UI_MapEditorAddComponentPanel__get_ItemButtonWidth (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4100980

float UI_MapEditorAddComponentPanel__get_ItemButtonWidth
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddComponentPanel__get_VerticalSpacing (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x4100990

float UI_MapEditorAddComponentPanel__get_VerticalSpacing
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 5.0;
}


// UI.MapEditorAddComponentPanel$$get_ItemFontSize
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_ItemFontSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x41009a0

int32_t UI_MapEditorAddComponentPanel__get_ItemFontSize
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 0x12;
}


// UI.MapEditorAddComponentPanel$$get_DeleteButtonSize
// il2cpp: float UI_MapEditorAddComponentPanel__get_DeleteButtonSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x41009b0

float UI_MapEditorAddComponentPanel__get_DeleteButtonSize
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MapEditorAddComponentPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPanel__get_ThemePanel (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x41009c0

System_String_o *
UI_MapEditorAddComponentPanel__get_ThemePanel
          (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  if (DAT_05704876 == '\0') {
    il2cpp_init_method_metadata(&"SelectListPopup");
    DAT_05704876 = '\x01';
  }
  return "SelectListPopup";
}


// UI.MapEditorAddComponentPanel$$Setup
// il2cpp: void UI_MapEditorAddComponentPanel__Setup (UI_MapEditorAddComponentPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x41009f0

void UI_MapEditorAddComponentPanel__Setup
               (UI_MapEditorAddComponentPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_c *a;
  UnityEngine_Transform_o *parent_00;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_string__o *original;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  UnityEngine_GameObject_c *__this_01;
  
  if (DAT_05704877 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorAddComponentPopup);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"No items found.");
    DAT_05704877 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorAddComponentPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorAddComponentPopup)) {
LAB_04100c19:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    pSVar3 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    pUVar4 = parent[1].fields._currentCategoryPanel;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      a = pUVar4[1].klass;
      parent_00 = (__this->fields).SinglePanel;
      themePanel = (System_String_o *)
                   (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
      pUVar4 = UI_ElementFactory__CreateDefaultLabel
                         (parent_00,__this_00,"No items found.",0,4,(MethodInfo *)0x0);
      (__this->fields)._noItemsLabel = pUVar4;
      il2cpp_runtime_glue(&(__this->fields)._noItemsLabel,pUVar4);
      parent = *(UI_BasePanel_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (parent != (UI_BasePanel_o *)0x0) {
        bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
        method_00 = (MethodInfo *)(ulong)bVar1;
        if ((bVar1 <= (parent->klass->_2).naturalAligment) &&
           ((parent->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] == TypeInfo_MapEditorGameManager)) {
          if ((parent->fields).DoublePanelRight == (UnityEngine_Transform_o *)0x0) {
            return;
          }
          original = (System_Collections_Generic_List_string__o *)
                     (*(__this->klass->vtable)._38_GetItems.methodPtr)
                               (__this,pSVar3,(__this->klass->vtable)._38_GetItems.method);
          __this_01 = a;
          bVar2 = System_String__op_Inequality
                            ((System_String_o *)a,
                             (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
          method_01 = extraout_RDX;
          if ((char)bVar2 != '\0') {
            original = UI_MapEditorAddComponentPanel__Filter
                                 ((UI_MapEditorAddComponentPanel_o *)__this_01,original,
                                  (System_String_o *)a,method_00);
            method_01 = extraout_RDX_00;
          }
          UI_MapEditorAddComponentPanel__CreateList(__this,original,method_01);
          return;
        }
        goto LAB_04100c19;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__GetItems (UI_MapEditorAddComponentPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x4101720

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__GetItems
          (UI_MapEditorAddComponentPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long *plVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_string__o *__this_07;
  System_Collections_Generic_List_string__o *__this_08;
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppRGCTXData *pIVar9;
  _union_247328 item;
  _union_247328 _Var10;
  undefined1 auStack_48 [16];
  _union_247328 _Stack_38;
  
  if (DAT_05704878 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Internal");
    il2cpp_init_method_metadata(&"All");
    DAT_05704878 = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  __this_07 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_07,MethodInfo_List_1_System_String);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_MapEditorGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8) !=
        TypeInfo_MapEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar3);
    }
    if (((CustomLogic_CustomLogicEvaluator_o *)plVar3[6] !=
         (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (__this_08 = CustomLogic_CustomLogicEvaluator__GetComponentNames
                              ((CustomLogic_CustomLogicEvaluator_o *)plVar3[6],(MethodInfo *)0x0),
       __this_08 != (System_Collections_Generic_List_string__o *)0x0)) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_08,MethodInfo_Void_Sort);
      bVar7 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        bVar7 = System_String__op_Equality(category,"General",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          bVar7 = System_String__op_Equality(category,"Internal",(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            bVar7 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              return __this_07;
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                       (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
            pSVar8 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
            pIVar9 = (Il2CppRGCTXData *)auStack_48._8_8_;
            if (__this_07 == (System_Collections_Generic_List_string__o *)0x0) {
              while (item = _Stack_38, __this_05.fields._8_8_ = pIVar9,
                    __this_05.fields._list = pSVar8, __this_05.fields._current = item.genericMethod,
                    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_05,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                    (char)bVar7 != '\0') {
                _Var10 = item;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
                if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0)
                goto LAB_04101fd7;
                bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                  (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
                _Stack_38 = _Var10;
                if ((char)bVar7 == '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
                  if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0)
                  goto LAB_04101fdc;
                  bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                    (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
                  _Stack_38 = _Var10;
                  if ((char)bVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
              }
            }
            else {
              while (item = _Stack_38, __this_04.fields._8_8_ = pIVar9,
                    __this_04.fields._list = pSVar8, __this_04.fields._current = item.genericMethod,
                    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                    (char)bVar7 != '\0') {
                _Var10 = item;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
                if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_04101fd7:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                  (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
                _Stack_38 = _Var10;
                if ((char)bVar7 == '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
                  if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_04101fdc:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                    (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
                  lVar6 = MethodInfo_Void_Add;
                  _Stack_38 = _Var10;
                  if ((char)bVar7 == '\0') {
                    piVar1 = &(__this_07->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (__this_07->fields)._items;
                    if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    uVar2 = (__this_07->fields)._size;
                    if (uVar2 < (uint)pSVar5->max_length) {
                      (__this_07->fields)._size = uVar2 + 1;
                      ((_union_247328 *)(pSVar5->m_Items + (int)uVar2))->genericMethod =
                           (void *)item;
                      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item.genericMethod);
                      _Stack_38 = _Var10;
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_07,
                                 item.genericMethod,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                      _Stack_38 = _Var10;
                    }
                  }
                }
              }
            }
          }
          else {
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                       (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
            pSVar8 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
            pIVar9 = (Il2CppRGCTXData *)auStack_48._8_8_;
            item = _Stack_38;
            if (__this_07 == (System_Collections_Generic_List_string__o *)0x0) {
              while (__this_02.fields._8_8_ = pIVar9, __this_02.fields._list = pSVar8,
                    __this_02.fields._current = item.genericMethod,
                    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                    (char)bVar7 != '\0') {
                _Var10 = item;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
                if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_04101cc0:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                  (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
                item = _Var10;
                if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
              }
            }
            else {
              while (item = _Stack_38, __this_03.fields._8_8_ = pIVar9,
                    __this_03.fields._list = pSVar8, __this_03.fields._current = item.genericMethod,
                    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                    (char)bVar7 != '\0') {
                _Var10 = item;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
                if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0)
                goto LAB_04101cc0;
                bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                  (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
                lVar6 = MethodInfo_Void_Add;
                _Stack_38 = _Var10;
                if ((char)bVar7 != '\0') {
                  piVar1 = &(__this_07->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar5 = (__this_07->fields)._items;
                  if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar2 = (__this_07->fields)._size;
                  if (uVar2 < (uint)pSVar5->max_length) {
                    (__this_07->fields)._size = uVar2 + 1;
                    ((_union_247328 *)(pSVar5->m_Items + (int)uVar2))->genericMethod = (void *)item;
                    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item.genericMethod);
                    _Stack_38 = _Var10;
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_07,
                               item.genericMethod,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                    _Stack_38 = _Var10;
                  }
                }
              }
            }
          }
        }
        else {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                     (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
          pSVar8 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
          pIVar9 = (Il2CppRGCTXData *)auStack_48._8_8_;
          item = _Stack_38;
          if (__this_07 == (System_Collections_Generic_List_string__o *)0x0) {
            while (__this_01.fields._8_8_ = pIVar9, __this_01.fields._list = pSVar8,
                  __this_01.fields._current = item.genericMethod,
                  bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                  (char)bVar7 != '\0') {
              _Var10 = item;
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                        (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04101a75;
              bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
              item = _Var10;
              if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
          else {
            while (item = _Stack_38, __this_00.fields._8_8_ = pIVar9,
                  __this_00.fields._list = pSVar8, __this_00.fields._current = item.genericMethod,
                  bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                  (char)bVar7 != '\0') {
              _Var10 = item;
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                        (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_04101a75:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                (pSVar4,item.genericMethod,MethodInfo_Boolean_Contains);
              lVar6 = MethodInfo_Void_Add;
              _Stack_38 = _Var10;
              if ((char)bVar7 != '\0') {
                piVar1 = &(__this_07->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_07->fields)._items;
                if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar2 = (__this_07->fields)._size;
                if (uVar2 < (uint)pSVar5->max_length) {
                  (__this_07->fields)._size = uVar2 + 1;
                  ((_union_247328 *)(pSVar5->m_Items + (int)uVar2))->genericMethod = (void *)item;
                  il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item.genericMethod);
                  _Stack_38 = _Var10;
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_07,
                             item.genericMethod,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  _Stack_38 = _Var10;
                }
              }
            }
          }
        }
        __this_06.fields._8_8_ = pIVar9;
        __this_06.fields._list = pSVar8;
        __this_06.fields._current = item.genericMethod;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
        __this_08 = __this_07;
      }
      return __this_08;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__Filter (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x4100c20

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__Filter
          (UI_MapEditorAddComponentPanel_o *__this,
          System_Collections_Generic_List_string__o *original,System_String_o *search,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_o *value;
  System_String_o *__this_04;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  System_String_o *__this_05;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_05704879 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704879 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
  bVar5 = System_String__op_Equality
                    (search,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if ((search == (System_String_o *)0x0) ||
       (value = System_String__ToLower(search,(MethodInfo *)0x0),
       original == (System_Collections_Generic_List_string__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)original,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar8 = (Il2CppType *)local_48._8_8_;
    __this_05 = local_38;
    if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
      while (__this_01.fields._8_8_ = pIVar8,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
            __this_01.fields._current = (Il2CppObject *)__this_05,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar5 != '\0') {
        if (__this_05 == (System_String_o *)0x0) goto LAB_04100e73;
        pSVar6 = System_String__ToLower(__this_05,(MethodInfo *)0x0);
        if (pSVar6 == (System_String_o *)0x0) goto LAB_04100e78;
        bVar5 = System_String__Contains(pSVar6,value,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this_05 = local_38, __this_00.fields._8_8_ = pIVar8,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
            __this_00.fields._current = (Il2CppObject *)__this_05,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar5 != '\0') {
        if (__this_05 == (System_String_o *)0x0) {
LAB_04100e73:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar6 = __this_05;
        __this_04 = System_String__ToLower(__this_05,(MethodInfo *)0x0);
        if (__this_04 == (System_String_o *)0x0) {
LAB_04100e78:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar5 = System_String__Contains(__this_04,value,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        local_38 = pSVar6;
        if ((char)bVar5 != '\0') {
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_03->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_03->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_03->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = __this_05;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,__this_05);
            local_38 = pSVar6;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,
                       (Il2CppObject *)__this_05,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            local_38 = pSVar6;
          }
        }
      }
    }
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_02.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    original = __this_03;
  }
  return original;
}


// UI.MapEditorAddComponentPanel$$CreateList
// il2cpp: void UI_MapEditorAddComponentPanel__CreateList (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x4100f60

void UI_MapEditorAddComponentPanel__CreateList
               (UI_MapEditorAddComponentPanel_o *__this,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar1;
  int32_t value_00;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  Il2CppObject *pIVar5;
  UnityEngine_UI_Text_o *__this_04;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o UVar9;
  System_Collections_Generic_List_T__o *in_stack_fffffffffffffe78;
  Il2CppRGCTXData *in_stack_fffffffffffffe80;
  Il2CppClass *in_stack_fffffffffffffe88;
  undefined1 local_118 [96];
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [2];
  undefined1 local_88 [16];
  Il2CppClass *local_78;
  float fStack_70;
  float fStack_6c;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  if (DAT_0570487a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateList_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"ItemButton");
    il2cpp_init_method_metadata(&"Prefabs/Misc/SelectListButton");
    il2cpp_init_method_metadata(&"DeleteButton");
    il2cpp_init_method_metadata(&"");
    DAT_0570487a = '\x01';
  }
  local_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_118._8_8_ = (Il2CppRGCTXData *)0x0;
  local_118._16_8_ = (Il2CppClass *)0x0;
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    local_118._32_8_ = items;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
               (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    local_118._16_8_ = local_78;
    local_118._0_8_ = local_88._0_8_;
    local_118._8_8_ = local_88._8_8_;
    while( true ) {
      __this_01.fields._8_8_ = in_stack_fffffffffffffe80;
      __this_01.fields._list = in_stack_fffffffffffffe78;
      __this_01.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)local_118);
      if ((char)bVar1 == '\0') break;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
      System_Object___ctor(pIVar2,(MethodInfo *)0x0);
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2[1].monitor = __this;
      il2cpp_runtime_glue(&pIVar2[1].monitor);
      pIVar2[1].klass = (Il2CppClass *)local_118._16_8_;
      il2cpp_runtime_glue(pIVar2 + 1);
      pUVar3 = UI_ElementFactory__InstantiateAndBind
                         ((__this->fields).SinglePanel,"Prefabs/Misc/SelectListButton",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"ItemButton",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_03 = (UnityEngine_UI_Selectable_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar4,MethodInfo_Button_GetComponent_Button);
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"DeleteButton",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_118._40_8_ =
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar4,MethodInfo_Button_GetComponent_Button);
      if (__this_03 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_CanvasGroupCache;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar5 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
      if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar5->klass->vtable[0x4b].methodPtr)
                (pIVar5,pIVar2[1].klass,pIVar5->klass->vtable[0x4b].method);
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_04 = (UnityEngine_UI_Text_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
      value_00 = (*(__this->klass->vtable)._36_get_ItemFontSize.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_ItemFontSize.method);
      if (__this_04 == (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_UI_Text__set_fontSize(__this_04,value_00,(MethodInfo *)0x0);
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UI_UIManager__GetThemeColorBlock
                ((UnityEngine_UI_ColorBlock_o *)local_88,pSVar6,"ItemButton","",
                 "DefaultPanel",(MethodInfo *)0x0);
      local_a8[1].r = local_38;
      local_a8[1].g = fStack_34;
      local_a8[0].r = local_48.r;
      local_a8[0].g = local_48.g;
      local_a8[0].b = local_48.b;
      local_a8[0].a = local_48.a;
      local_b8.r = local_58.r;
      local_b8.g = local_58.g;
      local_b8.b = local_58.b;
      local_b8.a = local_58.a;
      local_118._80_4_ = local_68.r;
      local_118._84_4_ = local_68.g;
      local_118._88_4_ = local_68.b;
      local_118._92_4_ = local_68.a;
      local_118._64_8_ = local_78;
      local_118._72_4_ = fStack_70;
      local_118._76_4_ = fStack_6c;
      local_118._48_8_ = local_88._0_8_;
      local_118._56_8_ = local_88._8_8_;
      value.fields.m_NormalColor.fields.b = (float)local_88._8_4_;
      value.fields.m_NormalColor.fields.a = (float)local_88._12_4_;
      value.fields.m_NormalColor.fields.r = (float)local_88._0_4_;
      value.fields.m_NormalColor.fields.g = (float)local_88._4_4_;
      value.fields.m_HighlightedColor.fields._0_8_ = local_78;
      value.fields.m_HighlightedColor.fields.b = fStack_70;
      value.fields.m_HighlightedColor.fields.a = fStack_6c;
      value.fields.m_PressedColor.fields.r = local_68.r;
      value.fields.m_PressedColor.fields.g = local_68.g;
      value.fields.m_PressedColor.fields.b = local_68.b;
      value.fields.m_PressedColor.fields.a = local_68.a;
      value.fields.m_SelectedColor.fields.r = local_58.r;
      value.fields.m_SelectedColor.fields.g = local_58.g;
      value.fields.m_SelectedColor.fields.b = local_58.b;
      value.fields.m_SelectedColor.fields.a = local_58.a;
      value.fields.m_DisabledColor.fields.r = local_48.r;
      value.fields.m_DisabledColor.fields.g = local_48.g;
      value.fields.m_DisabledColor.fields.b = local_48.b;
      value.fields.m_DisabledColor.fields.a = local_48.a;
      value.fields.m_ColorMultiplier = local_38;
      value.fields.m_FadeDuration = fStack_34;
      in_stack_fffffffffffffe78 = (System_Collections_Generic_List_T__o *)local_88._0_8_;
      in_stack_fffffffffffffe80 = (Il2CppRGCTXData *)local_88._8_8_;
      in_stack_fffffffffffffe88 = local_78;
      UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar9 = UI_UIManager__GetThemeColor
                        (pSVar6,"ItemButton","TextColor","DefaultPanel",(MethodInfo *)0x0);
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception(UVar9.fields.r,UVar9.fields.b);
      }
      (*pIVar2->klass->vtable[0x17].methodPtr)(pIVar2,pIVar2->klass->vtable[0x17].method);
      pIVar2 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this_03,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      fVar7 = (float)(*(__this->klass->vtable)._35_get_ItemButtonWidth.methodPtr)
                               (__this,(__this->klass->vtable)._35_get_ItemButtonWidth.method);
      fVar8 = (float)(*(__this->klass->vtable)._37_get_DeleteButtonSize.methodPtr)
                               (__this,(__this->klass->vtable)._37_get_DeleteButtonSize.method);
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar2->klass->vtable[0x24].methodPtr)(fVar7 + fVar8 + 10.0,pIVar2);
      if ((UnityEngine_Component_o *)local_118._40_8_ == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_118._40_8_,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
    }
    __this_02.fields._8_8_ = in_stack_fffffffffffffe80;
    __this_02.fields._list = in_stack_fffffffffffffe78;
    __this_02.fields._current = (Il2CppObject *)in_stack_fffffffffffffe88;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)local_118);
    pUVar3 = (__this->fields)._noItemsLabel;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive
                (pUVar3,(uint)(*(int *)&((Il2CppClass_1 *)local_118._32_8_)->namespaze < 1),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPanel$$OnItemClick
// il2cpp: void UI_MapEditorAddComponentPanel__OnItemClick (UI_MapEditorAddComponentPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4102140

void UI_MapEditorAddComponentPanel__OnItemClick
               (UI_MapEditorAddComponentPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  System_Collections_Generic_Dictionary_string__Type__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppMethodPointer vtable_dispatch;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  
  if (DAT_0570487b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorAddComponentPopup);
    DAT_0570487b = '\x01';
    method = extraout_RDX;
  }
  pUVar2 = (__this->fields).Parent;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorAddComponentPopup->_2).naturalAligment;
    if (((pUVar2->klass->_2).naturalAligment < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorAddComponentPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar2,TypeInfo_MapEditorAddComponentPopup,method);
    }
    if (DAT_05704883 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
      DAT_05704883 = '\x01';
    }
    __this_00 = pUVar2[1].fields._categoryPanelTypes;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,MethodInfo_Void_set_Value);
      pUVar3 = pUVar2[1].fields.MaskBackground;
      if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
        uVar4._0_4_ = (pUVar3->fields).m_Color.fields.r;
        uVar4._4_4_ = (pUVar3->fields).m_Color.fields.g;
        uVar5._0_4_ = (pUVar3->fields).m_RaycastTarget;
        uVar5._4_4_ = (pUVar3->fields).m_RaycastTargetCache;
        (*(code *)(pUVar3->fields).m_CancellationTokenSource)(uVar5,uVar4);
        vtable_dispatch = (pUVar2->klass->vtable)._22_Hide.methodPtr;
        (*vtable_dispatch)
                  (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,extraout_RDX_00,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorAddComponentPanel$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___ctor (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x41022a0

void UI_MapEditorAddComponentPanel___ctor
               (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_0570487c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_0570487c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._itemButtons = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._itemButtons);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


